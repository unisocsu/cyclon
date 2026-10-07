/* Automatically generated C decompilation by Ghidra. */

/* Function: Reset */

/* WARNING: Control flow encountered bad instruction data */

void Reset(uint param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int unaff_r10;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *(undefined1 *)(unaff_r10 + (param_1 >> 6 | param_1 << 0x1a)) = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* Function: SupervisorCall */

/* WARNING: Control flow encountered bad instruction data */

void SupervisorCall(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint unaff_r4;
  undefined1 *unaff_r6;
  undefined1 unaff_r7;
  uint unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  uint in_r12;
  uint unaff_lr;
  uint uVar2;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr8;
  
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r8 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if (in_ZR) {
    unaff_r8 = param_2 & param_2 >> 0x1a;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r10 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if (in_ZR) {
    unaff_r8 = in_r12 + ((int)param_1 >> 0x11) + (uint)in_CY;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r11 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if (in_CY && !in_ZR) {
    in_CY = (bool)((byte)((uint)param_1 >> 0x10) & 1);
    unaff_lr = unaff_r4 & (int)param_1 << 0x10;
    in_NG = (int)unaff_lr < 0;
    in_ZR = unaff_lr == 0;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r9 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if (in_ZR) {
    in_NG = false;
  }
  puVar1 = param_1;
  if ((bool)in_NG == in_OV) {
    puVar1 = (uint *)((int)param_1 - (unaff_r11 >> 3));
    *param_1 = (uint)puVar1;
  }
  if (in_ZR) {
    puVar1 = (uint *)(param_3 & (uint)puVar1);
    unaff_r8 = in_r12 + ((uint)puVar1 >> 0x11 | (int)puVar1 << 0xf) + (uint)in_CY;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r8 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if ((bool)in_NG) {
    in_r12 = in_r12 & unaff_r4 << 2;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r10 * 0x40;
    *unaff_r6 = (char)in_r12;
  }
  if (in_ZR) {
    puVar1 = (uint *)(param_2 & param_3);
  }
  coprocessor_load(1,in_cr8,param_2 + 0x228);
  if (in_OV) {
    if (in_ZR || (bool)in_NG != true) {
      unaff_r6 = unaff_r6 + unaff_r10 * 0x40;
      *unaff_r6 = unaff_r7;
    }
    *puVar1 = unaff_lr;
    puVar1[-1] = (uint)register0x00000054;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r11;
    puVar1[-4] = (uint)unaff_r6;
    puVar1[-5] = param_2 + 0x228;
    puVar1[-6] = (uint)puVar1;
    if (in_ZR || (bool)in_NG != true) {
      unaff_r6 = unaff_r6 + unaff_r11 * 0x40;
      *unaff_r6 = unaff_r7;
    }
    if (in_CY && !in_ZR) {
      uVar2 = (uint)unaff_r6 & (int)puVar1 << 0x10;
      in_NG = (int)uVar2 < 0;
      in_ZR = uVar2 == 0;
    }
    if (in_ZR || in_NG != '\x01') {
      unaff_r6[unaff_r9 * 0x40] = unaff_r7;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



/* Function: PrefetchAbort */

/* WARNING: Control flow encountered bad instruction data */

void PrefetchAbort(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint unaff_r4;
  undefined1 *unaff_r6;
  undefined1 unaff_r7;
  uint unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  uint in_r12;
  uint unaff_lr;
  uint uVar2;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr8;
  
  if (in_ZR) {
    unaff_r8 = param_2 & param_2 >> 0x1a;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r10 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if (in_ZR) {
    unaff_r8 = in_r12 + ((int)param_1 >> 0x11) + (uint)in_CY;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r11 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if (in_CY && !in_ZR) {
    in_CY = (bool)((byte)((uint)param_1 >> 0x10) & 1);
    unaff_lr = unaff_r4 & (int)param_1 << 0x10;
    in_NG = (int)unaff_lr < 0;
    in_ZR = unaff_lr == 0;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r9 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if (in_ZR) {
    in_NG = false;
  }
  puVar1 = param_1;
  if ((bool)in_NG == in_OV) {
    puVar1 = (uint *)((int)param_1 - (unaff_r11 >> 3));
    *param_1 = (uint)puVar1;
  }
  if (in_ZR) {
    puVar1 = (uint *)(param_3 & (uint)puVar1);
    unaff_r8 = in_r12 + ((uint)puVar1 >> 0x11 | (int)puVar1 << 0xf) + (uint)in_CY;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r8 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if ((bool)in_NG) {
    in_r12 = in_r12 & unaff_r4 << 2;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r10 * 0x40;
    *unaff_r6 = (char)in_r12;
  }
  if (in_ZR) {
    puVar1 = (uint *)(param_2 & param_3);
  }
  coprocessor_load(1,in_cr8,param_2 + 0x228);
  if (in_OV) {
    if (in_ZR || (bool)in_NG != true) {
      unaff_r6 = unaff_r6 + unaff_r10 * 0x40;
      *unaff_r6 = unaff_r7;
    }
    *puVar1 = unaff_lr;
    puVar1[-1] = (uint)register0x00000054;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r11;
    puVar1[-4] = (uint)unaff_r6;
    puVar1[-5] = param_2 + 0x228;
    puVar1[-6] = (uint)puVar1;
    if (in_ZR || (bool)in_NG != true) {
      unaff_r6 = unaff_r6 + unaff_r11 * 0x40;
      *unaff_r6 = unaff_r7;
    }
    if (in_CY && !in_ZR) {
      uVar2 = (uint)unaff_r6 & (int)puVar1 << 0x10;
      in_NG = (int)uVar2 < 0;
      in_ZR = uVar2 == 0;
    }
    if (in_ZR || in_NG != '\x01') {
      unaff_r6[unaff_r9 * 0x40] = unaff_r7;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



/* Function: DataAbort */

/* WARNING: Control flow encountered bad instruction data */

void DataAbort(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint unaff_r4;
  undefined1 *unaff_r6;
  undefined1 unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  uint in_r12;
  uint unaff_lr;
  uint uVar2;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr8;
  
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r10 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if (in_ZR) {
    unaff_r8 = in_r12 + ((int)param_1 >> 0x11) + (uint)in_CY;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r11 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if (in_CY && !in_ZR) {
    in_CY = (bool)((byte)((uint)param_1 >> 0x10) & 1);
    unaff_lr = unaff_r4 & (int)param_1 << 0x10;
    in_NG = (int)unaff_lr < 0;
    in_ZR = unaff_lr == 0;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r9 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if (in_ZR) {
    in_NG = false;
  }
  puVar1 = param_1;
  if ((bool)in_NG == in_OV) {
    puVar1 = (uint *)((int)param_1 - (unaff_r11 >> 3));
    *param_1 = (uint)puVar1;
  }
  if (in_ZR) {
    puVar1 = (uint *)(param_3 & (uint)puVar1);
    unaff_r8 = in_r12 + ((uint)puVar1 >> 0x11 | (int)puVar1 << 0xf) + (uint)in_CY;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r8 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if ((bool)in_NG) {
    in_r12 = in_r12 & unaff_r4 << 2;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r10 * 0x40;
    *unaff_r6 = (char)in_r12;
  }
  if (in_ZR) {
    puVar1 = (uint *)(param_2 & param_3);
  }
  coprocessor_load(1,in_cr8,param_2 + 0x228);
  if (in_OV) {
    if (in_ZR || (bool)in_NG != true) {
      unaff_r6 = unaff_r6 + unaff_r10 * 0x40;
      *unaff_r6 = unaff_r7;
    }
    *puVar1 = unaff_lr;
    puVar1[-1] = (uint)register0x00000054;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r11;
    puVar1[-4] = (uint)unaff_r6;
    puVar1[-5] = param_2 + 0x228;
    puVar1[-6] = (uint)puVar1;
    if (in_ZR || (bool)in_NG != true) {
      unaff_r6 = unaff_r6 + unaff_r11 * 0x40;
      *unaff_r6 = unaff_r7;
    }
    if (in_CY && !in_ZR) {
      uVar2 = (uint)unaff_r6 & (int)puVar1 << 0x10;
      in_NG = (int)uVar2 < 0;
      in_ZR = uVar2 == 0;
    }
    if (in_ZR || in_NG != '\x01') {
      unaff_r6[unaff_r9 * 0x40] = unaff_r7;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



/* Function: NotUsed */

/* WARNING: Control flow encountered bad instruction data */

void NotUsed(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint unaff_r4;
  undefined1 *unaff_r6;
  undefined1 unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  uint in_r12;
  uint unaff_lr;
  uint uVar2;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr8;
  
  if (in_ZR) {
    unaff_r8 = in_r12 + ((int)param_1 >> 0x11) + (uint)in_CY;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r11 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if (in_CY && !in_ZR) {
    in_CY = (bool)((byte)((uint)param_1 >> 0x10) & 1);
    unaff_lr = unaff_r4 & (int)param_1 << 0x10;
    in_NG = (int)unaff_lr < 0;
    in_ZR = unaff_lr == 0;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r9 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if (in_ZR) {
    in_NG = false;
  }
  puVar1 = param_1;
  if ((bool)in_NG == in_OV) {
    puVar1 = (uint *)((int)param_1 - (unaff_r11 >> 3));
    *param_1 = (uint)puVar1;
  }
  if (in_ZR) {
    puVar1 = (uint *)(param_3 & (uint)puVar1);
    unaff_r8 = in_r12 + ((uint)puVar1 >> 0x11 | (int)puVar1 << 0xf) + (uint)in_CY;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r8 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if ((bool)in_NG) {
    in_r12 = in_r12 & unaff_r4 << 2;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r10 * 0x40;
    *unaff_r6 = (char)in_r12;
  }
  if (in_ZR) {
    puVar1 = (uint *)(param_2 & param_3);
  }
  coprocessor_load(1,in_cr8,param_2 + 0x228);
  if (in_OV) {
    if (in_ZR || (bool)in_NG != true) {
      unaff_r6 = unaff_r6 + unaff_r10 * 0x40;
      *unaff_r6 = unaff_r7;
    }
    *puVar1 = unaff_lr;
    puVar1[-1] = (uint)register0x00000054;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r11;
    puVar1[-4] = (uint)unaff_r6;
    puVar1[-5] = param_2 + 0x228;
    puVar1[-6] = (uint)puVar1;
    if (in_ZR || (bool)in_NG != true) {
      unaff_r6 = unaff_r6 + unaff_r11 * 0x40;
      *unaff_r6 = unaff_r7;
    }
    if (in_CY && !in_ZR) {
      uVar2 = (uint)unaff_r6 & (int)puVar1 << 0x10;
      in_NG = (int)uVar2 < 0;
      in_ZR = uVar2 == 0;
    }
    if (in_ZR || in_NG != '\x01') {
      unaff_r6[unaff_r9 * 0x40] = unaff_r7;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



/* Function: IRQ */

/* WARNING: Control flow encountered bad instruction data */

void IRQ(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint unaff_r4;
  undefined1 *unaff_r6;
  undefined1 unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  uint in_r12;
  uint unaff_lr;
  uint uVar2;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr8;
  
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r11 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if (in_CY && !in_ZR) {
    in_CY = (bool)((byte)((uint)param_1 >> 0x10) & 1);
    unaff_lr = unaff_r4 & (int)param_1 << 0x10;
    in_NG = (int)unaff_lr < 0;
    in_ZR = unaff_lr == 0;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r9 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if (in_ZR) {
    in_NG = false;
  }
  puVar1 = param_1;
  if ((bool)in_NG == in_OV) {
    puVar1 = (uint *)((int)param_1 - (unaff_r11 >> 3));
    *param_1 = (uint)puVar1;
  }
  if (in_ZR) {
    puVar1 = (uint *)(param_3 & (uint)puVar1);
    unaff_r8 = in_r12 + ((uint)puVar1 >> 0x11 | (int)puVar1 << 0xf) + (uint)in_CY;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r8 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if ((bool)in_NG) {
    in_r12 = in_r12 & unaff_r4 << 2;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r10 * 0x40;
    *unaff_r6 = (char)in_r12;
  }
  if (in_ZR) {
    puVar1 = (uint *)(param_2 & param_3);
  }
  coprocessor_load(1,in_cr8,param_2 + 0x228);
  if (in_OV) {
    if (in_ZR || (bool)in_NG != true) {
      unaff_r6 = unaff_r6 + unaff_r10 * 0x40;
      *unaff_r6 = unaff_r7;
    }
    *puVar1 = unaff_lr;
    puVar1[-1] = (uint)register0x00000054;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r11;
    puVar1[-4] = (uint)unaff_r6;
    puVar1[-5] = param_2 + 0x228;
    puVar1[-6] = (uint)puVar1;
    if (in_ZR || (bool)in_NG != true) {
      unaff_r6 = unaff_r6 + unaff_r11 * 0x40;
      *unaff_r6 = unaff_r7;
    }
    if (in_CY && !in_ZR) {
      uVar2 = (uint)unaff_r6 & (int)puVar1 << 0x10;
      in_NG = (int)uVar2 < 0;
      in_ZR = uVar2 == 0;
    }
    if (in_ZR || in_NG != '\x01') {
      unaff_r6[unaff_r9 * 0x40] = unaff_r7;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



/* Function: FIQ */

/* WARNING: Control flow encountered bad instruction data */

void FIQ(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint unaff_r4;
  undefined1 *unaff_r6;
  undefined1 unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  uint in_r12;
  uint unaff_lr;
  uint uVar2;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr8;
  
  if (in_CY && !in_ZR) {
    in_CY = (bool)((byte)((uint)param_1 >> 0x10) & 1);
    unaff_lr = unaff_r4 & (int)param_1 << 0x10;
    in_NG = (int)unaff_lr < 0;
    in_ZR = unaff_lr == 0;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r9 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if (in_ZR) {
    in_NG = false;
  }
  puVar1 = param_1;
  if ((bool)in_NG == in_OV) {
    puVar1 = (uint *)((int)param_1 - (unaff_r11 >> 3));
    *param_1 = (uint)puVar1;
  }
  if (in_ZR) {
    puVar1 = (uint *)(param_3 & (uint)puVar1);
    unaff_r8 = in_r12 + ((uint)puVar1 >> 0x11 | (int)puVar1 << 0xf) + (uint)in_CY;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r8 * 0x40;
    *unaff_r6 = unaff_r7;
  }
  if ((bool)in_NG) {
    in_r12 = in_r12 & unaff_r4 << 2;
  }
  if (in_ZR || (bool)in_NG != in_OV) {
    unaff_r6 = unaff_r6 + unaff_r10 * 0x40;
    *unaff_r6 = (char)in_r12;
  }
  if (in_ZR) {
    puVar1 = (uint *)(param_2 & param_3);
  }
  coprocessor_load(1,in_cr8,param_2 + 0x228);
  if (in_OV) {
    if (in_ZR || (bool)in_NG != true) {
      unaff_r6 = unaff_r6 + unaff_r10 * 0x40;
      *unaff_r6 = unaff_r7;
    }
    *puVar1 = unaff_lr;
    puVar1[-1] = (uint)register0x00000054;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r11;
    puVar1[-4] = (uint)unaff_r6;
    puVar1[-5] = param_2 + 0x228;
    puVar1[-6] = (uint)puVar1;
    if (in_ZR || (bool)in_NG != true) {
      unaff_r6 = unaff_r6 + unaff_r11 * 0x40;
      *unaff_r6 = unaff_r7;
    }
    if (in_CY && !in_ZR) {
      uVar2 = (uint)unaff_r6 & (int)puVar1 << 0x10;
      in_NG = (int)uVar2 < 0;
      in_ZR = uVar2 == 0;
    }
    if (in_ZR || in_NG != '\x01') {
      unaff_r6[unaff_r9 * 0x40] = unaff_r7;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



/* Decompiled: 7; failed: 0 */
