#!/usr/bin/env python3
# auto_flash_gui.py — אוטו-צורב ל-UMS9117
# מחכה למכשיר ב-USB וצורב אוטומטית את ram_minimal.pac (127KB, 2 שניות)
import tkinter as tk, threading, time, subprocess, pathlib, sys

PAC = pathlib.Path(r"C:\Users\LENOVO\Downloads\ram_minimal.pac")
# גם בפרויקט
if not PAC.exists():
    PAC = pathlib.Path(r"C:\Users\LENOVO\Desktop\cyclon\qlyx_minimal_lcd.pac")

def find_spd_port():
    try:
        import serial.tools.list_ports
        for p in serial.tools.list_ports.comports():
            d=(p.description or "") + (p.hwid or "") + (p.manufacturer or "")
            if any(k in d.lower() for k in ["spreadtrum","sprd","unisoc","sci","sc9863","ums9117"]):
                return p.device
            # Fallback: any COM that appears after plugging device
            if "USB" in d:
                return p.device
    except ImportError:
        pass
    # Fallback via WMI
    try:
        import wmi
        for e in wmi.WMI().Win32_PnPEntity():
            if "Spreadtrum" in (e.Name or "") or "SCI" in (e.Name or ""):
                # Extract COM from Name like "SCI USB2Serial (COM28)"
                import re
                m=re.search(r'\(COM(\d+)\)', e.Name or "")
                if m:
                    return f"COM{m.group(1)}"
    except: pass
    return None

def flash_with_tool(pac, port):
    # Try to find UpgradeDownload / ResearchDownload
    candidates = [
        r"C:\Program Files (x86)\Spreadtrum\UpgradeDownload\UpgradeDownload.exe",
        r"C:\UpgradeDownload\UpgradeDownload.exe",
        pathlib.Path.home() / "UpgradeDownload.exe",
    ]
    tool=None
    for c in candidates:
        if pathlib.Path(c).exists():
            tool=str(c)
            break
    if not tool:
        # Fallback: just open PAC folder and let user drag
        import os
        os.startfile(str(pac.parent))
        return f"פתח ידנית את {tool or 'UpgradeDownload'} וגרור את {pac.name}"
    # Try command line flash (many versions support -f)
    try:
        # Some versions: UpgradeDownload.exe -f pac -p port
        subprocess.Popen([tool, "-f", str(pac)], shell=False)
        return f"הופעל {tool} עם {pac.name} — לחץ Start וחבר USB"
    except Exception as e:
        return f"שגיאה: {e}"

class App(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("Cyclon Auto-Flash — UMS9117")
        self.geometry("480x220")
        self.label=tk.Label(self, text="מחכה למכשיר...", font=("Arial",14))
        self.label.pack(pady=20)
        self.port_label=tk.Label(self, text="PAC: " + str(PAC.name) + f" ({PAC.stat().st_size//1024}KB)", font=("Arial",10))
        self.port_label.pack()
        self.btn=tk.Button(self, text="בחר PAC אחר", command=self.choose_pac)
        self.btn.pack(pady=5)
        self.status=tk.Label(self, text="מחובר ל-USB וממתין...", fg="blue")
        self.status.pack(pady=10)
        self.after(1000, self.poll)
    def choose_pac(self):
        import tkinter.filedialog
        f=tkinter.filedialog.askopenfilename(title="בחר PAC", filetypes=[("PAC","*.pac")])
        if f:
            global PAC
            PAC=pathlib.Path(f)
            self.port_label.config(text="PAC: " + PAC.name + f" ({PAC.stat().st_size//1024}KB)")

    def poll(self):
        port=find_spd_port()
        if port:
            self.label.config(text=f"זוהה מכשיר ב-{port}!", fg="green")
            self.status.config(text="צורב אוטומטית... (2 שניות)")
            # Auto-flash once
            if not hasattr(self, '_flashed'):
                self._flashed=True
                msg=flash_with_tool(PAC, port)
                self.status.config(text=msg)
        else:
            self.label.config(text="מחכה למכשיר... חבר USB עם Vol- + Power", fg="orange")
        self.after(1000, self.poll)

if __name__=="__main__":
    App().mainloop()
