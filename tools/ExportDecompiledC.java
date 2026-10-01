import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

public class ExportDecompiledC extends ghidra.app.script.GhidraScript {
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) return;
        File out = new File(args[0]);
        File parent = out.getParentFile();
        if (parent != null) parent.mkdirs();

        DecompInterface d = new DecompInterface();
        d.openProgram(currentProgram);
        PrintWriter w = new PrintWriter(new FileWriter(out));
        w.println("/* Automatically generated C decompilation by Ghidra. */");
        w.println();

        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        int ok = 0;
        int failed = 0;
        while (it.hasNext()) {
            Function f = it.next();
            DecompileResults r = d.decompileFunction(f, 60, new ConsoleTaskMonitor());
            if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                w.println("/* Function: " + f.getName() + " */");
                w.println(r.getDecompiledFunction().getC());
                w.println();
                ok++;
            } else {
                w.println("/* Failed to decompile: " + f.getName() + " */");
                failed++;
            }
        }
        w.println("/* Decompiled: " + ok + "; failed: " + failed + " */");
        w.close();
        d.dispose();
    }
}
