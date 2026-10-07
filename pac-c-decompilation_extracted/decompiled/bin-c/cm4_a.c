/* Automatically generated C decompilation by Ghidra. */

/* Function: Reset */

/* WARNING: Control flow encountered bad instruction data */

void Reset(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *unaff_r4;
  uint unaff_r6;
  uint unaff_r7;
  uint *unaff_r8;
  uint unaff_r9;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  
  if (in_OV) {
    *unaff_r8 = unaff_lr;
    unaff_r8[-1] = (uint)register0x00000054;
    unaff_r8[-2] = (uint)unaff_r4;
    unaff_r8[-3] = param_4;
    *unaff_r8 = param_4;
    unaff_r8[1] = (uint)unaff_r4;
    unaff_r8[2] = unaff_r6;
    unaff_r8[3] = (uint)register0x00000054;
    unaff_r8[4] = unaff_lr;
    *unaff_r8 = param_4;
    unaff_r8[1] = (uint)unaff_r4;
    unaff_r8[2] = unaff_r7;
    unaff_r8[3] = (uint)register0x00000054;
    unaff_r8[4] = unaff_lr;
    unaff_r8[-1] = unaff_lr;
    unaff_r8[-2] = (uint)register0x00000054;
    unaff_r8[-3] = unaff_r7;
    unaff_r8[-4] = unaff_r6;
    unaff_r8[-5] = (uint)unaff_r4;
    unaff_r8[-6] = param_4;
    unaff_r8[-1] = unaff_lr;
    unaff_r8[-2] = (uint)register0x00000054;
    unaff_r8[-3] = (uint)unaff_r8;
    unaff_r8[-4] = (uint)unaff_r4;
    unaff_r8[-5] = param_4;
    unaff_r8[1] = param_4;
    unaff_r8[2] = (uint)unaff_r4;
    unaff_r8[3] = unaff_r6;
    unaff_r8[4] = (uint)unaff_r8;
    unaff_r8[5] = (uint)register0x00000054;
    unaff_r8[6] = unaff_lr;
    unaff_r8[1] = param_4;
    unaff_r8[2] = (uint)unaff_r4;
    unaff_r8[3] = unaff_r7;
    unaff_r8[4] = (uint)unaff_r8;
    unaff_r8[5] = (uint)register0x00000054;
    unaff_r8[6] = unaff_lr;
  }
  if (in_ZR) {
    unaff_r7 = (int)(short)param_4 * (int)(short)(unaff_r9 >> 0x10) + unaff_lr;
  }
  if (in_OV) {
    *param_2 = 0x28;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = (uint)unaff_r4;
    *param_2 = unaff_lr;
    param_2[-1] = (uint)register0x00000054;
    param_2[-2] = (uint)unaff_r4;
    param_2[-3] = param_4;
    param_2[-4] = (uint)param_1;
    *param_2 = (uint)param_1;
    param_2[1] = param_4;
    param_2[2] = (uint)unaff_r4;
    param_2[3] = unaff_r6;
    param_2[4] = (uint)register0x00000054;
    param_2[5] = unaff_lr;
    *param_2 = (uint)param_1;
    param_2[1] = param_4;
    param_2[2] = (uint)unaff_r4;
    param_2[3] = unaff_r7;
    param_2[4] = (uint)register0x00000054;
    param_2[5] = unaff_lr;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = unaff_r7;
    param_2[-4] = unaff_r6;
    param_2[-5] = (uint)unaff_r4;
    param_2[-6] = param_4;
    param_2[-7] = (uint)param_1;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = (uint)unaff_r8;
    param_2[-4] = (uint)unaff_r4;
    param_2[-5] = param_4;
    param_2[-6] = (uint)param_1;
    param_2[1] = (uint)param_1;
    param_2[2] = param_4;
    param_2[3] = (uint)unaff_r4;
    param_2[4] = unaff_r6;
    param_2[5] = (uint)unaff_r8;
    param_2[6] = (uint)register0x00000054;
    param_2[7] = unaff_lr;
    param_2[1] = (uint)param_1;
    param_2[2] = param_4;
    param_2[3] = (uint)unaff_r4;
    param_2[4] = unaff_r7;
    param_2[5] = (uint)unaff_r8;
    param_2[6] = (uint)register0x00000054;
    param_2[7] = unaff_lr;
  }
  if (!in_ZR) {
    unaff_lr = unaff_r7 & (int)param_4 >> 0x13;
  }
  if (in_OV) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = param_3;
  }
  if (in_NG) {
    *unaff_r4 = unaff_lr;
    unaff_r4[-1] = (uint)register0x00000054;
    unaff_r4[-2] = unaff_r9;
    unaff_r4[-3] = (uint)unaff_r8;
    unaff_r4[-4] = unaff_r7;
    unaff_r4[-5] = (uint)unaff_r4;
    unaff_r4[-6] = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* Function: UndefinedInstruction */

/* WARNING: Control flow encountered bad instruction data */

void UndefinedInstruction(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *unaff_r4;
  uint unaff_r6;
  uint unaff_r7;
  uint *unaff_r8;
  uint unaff_r9;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  
  if (in_OV) {
    *unaff_r8 = param_4;
    unaff_r8[1] = (uint)unaff_r4;
    unaff_r8[2] = unaff_r6;
    unaff_r8[3] = (uint)register0x00000054;
    unaff_r8[4] = unaff_lr;
    *unaff_r8 = param_4;
    unaff_r8[1] = (uint)unaff_r4;
    unaff_r8[2] = unaff_r7;
    unaff_r8[3] = (uint)register0x00000054;
    unaff_r8[4] = unaff_lr;
    unaff_r8[-1] = unaff_lr;
    unaff_r8[-2] = (uint)register0x00000054;
    unaff_r8[-3] = unaff_r7;
    unaff_r8[-4] = unaff_r6;
    unaff_r8[-5] = (uint)unaff_r4;
    unaff_r8[-6] = param_4;
    unaff_r8[-1] = unaff_lr;
    unaff_r8[-2] = (uint)register0x00000054;
    unaff_r8[-3] = (uint)unaff_r8;
    unaff_r8[-4] = (uint)unaff_r4;
    unaff_r8[-5] = param_4;
    unaff_r8[1] = param_4;
    unaff_r8[2] = (uint)unaff_r4;
    unaff_r8[3] = unaff_r6;
    unaff_r8[4] = (uint)unaff_r8;
    unaff_r8[5] = (uint)register0x00000054;
    unaff_r8[6] = unaff_lr;
    unaff_r8[1] = param_4;
    unaff_r8[2] = (uint)unaff_r4;
    unaff_r8[3] = unaff_r7;
    unaff_r8[4] = (uint)unaff_r8;
    unaff_r8[5] = (uint)register0x00000054;
    unaff_r8[6] = unaff_lr;
  }
  if (in_ZR) {
    unaff_r7 = (int)(short)param_4 * (int)(short)(unaff_r9 >> 0x10) + unaff_lr;
  }
  if (in_OV) {
    *param_2 = 0x28;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = (uint)unaff_r4;
    *param_2 = unaff_lr;
    param_2[-1] = (uint)register0x00000054;
    param_2[-2] = (uint)unaff_r4;
    param_2[-3] = param_4;
    param_2[-4] = (uint)param_1;
    *param_2 = (uint)param_1;
    param_2[1] = param_4;
    param_2[2] = (uint)unaff_r4;
    param_2[3] = unaff_r6;
    param_2[4] = (uint)register0x00000054;
    param_2[5] = unaff_lr;
    *param_2 = (uint)param_1;
    param_2[1] = param_4;
    param_2[2] = (uint)unaff_r4;
    param_2[3] = unaff_r7;
    param_2[4] = (uint)register0x00000054;
    param_2[5] = unaff_lr;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = unaff_r7;
    param_2[-4] = unaff_r6;
    param_2[-5] = (uint)unaff_r4;
    param_2[-6] = param_4;
    param_2[-7] = (uint)param_1;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = (uint)unaff_r8;
    param_2[-4] = (uint)unaff_r4;
    param_2[-5] = param_4;
    param_2[-6] = (uint)param_1;
    param_2[1] = (uint)param_1;
    param_2[2] = param_4;
    param_2[3] = (uint)unaff_r4;
    param_2[4] = unaff_r6;
    param_2[5] = (uint)unaff_r8;
    param_2[6] = (uint)register0x00000054;
    param_2[7] = unaff_lr;
    param_2[1] = (uint)param_1;
    param_2[2] = param_4;
    param_2[3] = (uint)unaff_r4;
    param_2[4] = unaff_r7;
    param_2[5] = (uint)unaff_r8;
    param_2[6] = (uint)register0x00000054;
    param_2[7] = unaff_lr;
  }
  if (!in_ZR) {
    unaff_lr = unaff_r7 & (int)param_4 >> 0x13;
  }
  if (in_OV) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = param_3;
  }
  if (in_NG) {
    *unaff_r4 = unaff_lr;
    unaff_r4[-1] = (uint)register0x00000054;
    unaff_r4[-2] = unaff_r9;
    unaff_r4[-3] = (uint)unaff_r8;
    unaff_r4[-4] = unaff_r7;
    unaff_r4[-5] = (uint)unaff_r4;
    unaff_r4[-6] = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* Function: SupervisorCall */

/* WARNING: Control flow encountered bad instruction data */

void SupervisorCall(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *unaff_r4;
  uint unaff_r6;
  uint unaff_r7;
  uint *unaff_r8;
  uint unaff_r9;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  
  if (in_OV) {
    *unaff_r8 = param_4;
    unaff_r8[1] = (uint)unaff_r4;
    unaff_r8[2] = unaff_r7;
    unaff_r8[3] = (uint)register0x00000054;
    unaff_r8[4] = unaff_lr;
    unaff_r8[-1] = unaff_lr;
    unaff_r8[-2] = (uint)register0x00000054;
    unaff_r8[-3] = unaff_r7;
    unaff_r8[-4] = unaff_r6;
    unaff_r8[-5] = (uint)unaff_r4;
    unaff_r8[-6] = param_4;
    unaff_r8[-1] = unaff_lr;
    unaff_r8[-2] = (uint)register0x00000054;
    unaff_r8[-3] = (uint)unaff_r8;
    unaff_r8[-4] = (uint)unaff_r4;
    unaff_r8[-5] = param_4;
    unaff_r8[1] = param_4;
    unaff_r8[2] = (uint)unaff_r4;
    unaff_r8[3] = unaff_r6;
    unaff_r8[4] = (uint)unaff_r8;
    unaff_r8[5] = (uint)register0x00000054;
    unaff_r8[6] = unaff_lr;
    unaff_r8[1] = param_4;
    unaff_r8[2] = (uint)unaff_r4;
    unaff_r8[3] = unaff_r7;
    unaff_r8[4] = (uint)unaff_r8;
    unaff_r8[5] = (uint)register0x00000054;
    unaff_r8[6] = unaff_lr;
  }
  if (in_ZR) {
    unaff_r7 = (int)(short)param_4 * (int)(short)(unaff_r9 >> 0x10) + unaff_lr;
  }
  if (in_OV) {
    *param_2 = 0x28;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = (uint)unaff_r4;
    *param_2 = unaff_lr;
    param_2[-1] = (uint)register0x00000054;
    param_2[-2] = (uint)unaff_r4;
    param_2[-3] = param_4;
    param_2[-4] = (uint)param_1;
    *param_2 = (uint)param_1;
    param_2[1] = param_4;
    param_2[2] = (uint)unaff_r4;
    param_2[3] = unaff_r6;
    param_2[4] = (uint)register0x00000054;
    param_2[5] = unaff_lr;
    *param_2 = (uint)param_1;
    param_2[1] = param_4;
    param_2[2] = (uint)unaff_r4;
    param_2[3] = unaff_r7;
    param_2[4] = (uint)register0x00000054;
    param_2[5] = unaff_lr;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = unaff_r7;
    param_2[-4] = unaff_r6;
    param_2[-5] = (uint)unaff_r4;
    param_2[-6] = param_4;
    param_2[-7] = (uint)param_1;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = (uint)unaff_r8;
    param_2[-4] = (uint)unaff_r4;
    param_2[-5] = param_4;
    param_2[-6] = (uint)param_1;
    param_2[1] = (uint)param_1;
    param_2[2] = param_4;
    param_2[3] = (uint)unaff_r4;
    param_2[4] = unaff_r6;
    param_2[5] = (uint)unaff_r8;
    param_2[6] = (uint)register0x00000054;
    param_2[7] = unaff_lr;
    param_2[1] = (uint)param_1;
    param_2[2] = param_4;
    param_2[3] = (uint)unaff_r4;
    param_2[4] = unaff_r7;
    param_2[5] = (uint)unaff_r8;
    param_2[6] = (uint)register0x00000054;
    param_2[7] = unaff_lr;
  }
  if (!in_ZR) {
    unaff_lr = unaff_r7 & (int)param_4 >> 0x13;
  }
  if (in_OV) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = param_3;
  }
  if (in_NG) {
    *unaff_r4 = unaff_lr;
    unaff_r4[-1] = (uint)register0x00000054;
    unaff_r4[-2] = unaff_r9;
    unaff_r4[-3] = (uint)unaff_r8;
    unaff_r4[-4] = unaff_r7;
    unaff_r4[-5] = (uint)unaff_r4;
    unaff_r4[-6] = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* Function: PrefetchAbort */

/* WARNING: Control flow encountered bad instruction data */

void PrefetchAbort(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *unaff_r4;
  uint unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  
  if (in_OV) {
    *(uint *)(unaff_r8 - 4) = unaff_lr;
    *(BADSPACEBASE **)(unaff_r8 - 8) = register0x00000054;
    *(uint *)(unaff_r8 - 0xc) = unaff_r7;
    *(uint *)(unaff_r8 - 0x10) = unaff_r6;
    *(uint **)(unaff_r8 - 0x14) = unaff_r4;
    *(uint *)(unaff_r8 - 0x18) = param_4;
    *(uint *)(unaff_r8 - 4) = unaff_lr;
    *(BADSPACEBASE **)(unaff_r8 - 8) = register0x00000054;
    *(uint *)(unaff_r8 - 0xc) = unaff_r8;
    *(uint **)(unaff_r8 - 0x10) = unaff_r4;
    *(uint *)(unaff_r8 - 0x14) = param_4;
    *(uint *)(unaff_r8 + 4) = param_4;
    *(uint **)(unaff_r8 + 8) = unaff_r4;
    *(uint *)(unaff_r8 + 0xc) = unaff_r6;
    *(uint *)(unaff_r8 + 0x10) = unaff_r8;
    *(BADSPACEBASE **)(unaff_r8 + 0x14) = register0x00000054;
    *(uint *)(unaff_r8 + 0x18) = unaff_lr;
    *(uint *)(unaff_r8 + 4) = param_4;
    *(uint **)(unaff_r8 + 8) = unaff_r4;
    *(uint *)(unaff_r8 + 0xc) = unaff_r7;
    *(uint *)(unaff_r8 + 0x10) = unaff_r8;
    *(BADSPACEBASE **)(unaff_r8 + 0x14) = register0x00000054;
    *(uint *)(unaff_r8 + 0x18) = unaff_lr;
  }
  if (in_ZR) {
    unaff_r7 = (int)(short)param_4 * (int)(short)(unaff_r9 >> 0x10) + unaff_lr;
  }
  if (in_OV) {
    *param_2 = 0x28;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = (uint)unaff_r4;
    *param_2 = unaff_lr;
    param_2[-1] = (uint)register0x00000054;
    param_2[-2] = (uint)unaff_r4;
    param_2[-3] = param_4;
    param_2[-4] = (uint)param_1;
    *param_2 = (uint)param_1;
    param_2[1] = param_4;
    param_2[2] = (uint)unaff_r4;
    param_2[3] = unaff_r6;
    param_2[4] = (uint)register0x00000054;
    param_2[5] = unaff_lr;
    *param_2 = (uint)param_1;
    param_2[1] = param_4;
    param_2[2] = (uint)unaff_r4;
    param_2[3] = unaff_r7;
    param_2[4] = (uint)register0x00000054;
    param_2[5] = unaff_lr;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = unaff_r7;
    param_2[-4] = unaff_r6;
    param_2[-5] = (uint)unaff_r4;
    param_2[-6] = param_4;
    param_2[-7] = (uint)param_1;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = unaff_r8;
    param_2[-4] = (uint)unaff_r4;
    param_2[-5] = param_4;
    param_2[-6] = (uint)param_1;
    param_2[1] = (uint)param_1;
    param_2[2] = param_4;
    param_2[3] = (uint)unaff_r4;
    param_2[4] = unaff_r6;
    param_2[5] = unaff_r8;
    param_2[6] = (uint)register0x00000054;
    param_2[7] = unaff_lr;
    param_2[1] = (uint)param_1;
    param_2[2] = param_4;
    param_2[3] = (uint)unaff_r4;
    param_2[4] = unaff_r7;
    param_2[5] = unaff_r8;
    param_2[6] = (uint)register0x00000054;
    param_2[7] = unaff_lr;
  }
  if (!in_ZR) {
    unaff_lr = unaff_r7 & (int)param_4 >> 0x13;
  }
  if (in_OV) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = param_3;
  }
  if (in_NG) {
    *unaff_r4 = unaff_lr;
    unaff_r4[-1] = (uint)register0x00000054;
    unaff_r4[-2] = unaff_r9;
    unaff_r4[-3] = unaff_r8;
    unaff_r4[-4] = unaff_r7;
    unaff_r4[-5] = (uint)unaff_r4;
    unaff_r4[-6] = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* Function: DataAbort */

/* WARNING: Control flow encountered bad instruction data */

void DataAbort(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *unaff_r4;
  uint unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  
  if (in_OV) {
    *(uint *)(unaff_r8 - 4) = unaff_lr;
    *(BADSPACEBASE **)(unaff_r8 - 8) = register0x00000054;
    *(uint *)(unaff_r8 - 0xc) = unaff_r8;
    *(uint **)(unaff_r8 - 0x10) = unaff_r4;
    *(uint *)(unaff_r8 - 0x14) = param_4;
    *(uint *)(unaff_r8 + 4) = param_4;
    *(uint **)(unaff_r8 + 8) = unaff_r4;
    *(uint *)(unaff_r8 + 0xc) = unaff_r6;
    *(uint *)(unaff_r8 + 0x10) = unaff_r8;
    *(BADSPACEBASE **)(unaff_r8 + 0x14) = register0x00000054;
    *(uint *)(unaff_r8 + 0x18) = unaff_lr;
    *(uint *)(unaff_r8 + 4) = param_4;
    *(uint **)(unaff_r8 + 8) = unaff_r4;
    *(uint *)(unaff_r8 + 0xc) = unaff_r7;
    *(uint *)(unaff_r8 + 0x10) = unaff_r8;
    *(BADSPACEBASE **)(unaff_r8 + 0x14) = register0x00000054;
    *(uint *)(unaff_r8 + 0x18) = unaff_lr;
  }
  if (in_ZR) {
    unaff_r7 = (int)(short)param_4 * (int)(short)(unaff_r9 >> 0x10) + unaff_lr;
  }
  if (in_OV) {
    *param_2 = 0x28;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = (uint)unaff_r4;
    *param_2 = unaff_lr;
    param_2[-1] = (uint)register0x00000054;
    param_2[-2] = (uint)unaff_r4;
    param_2[-3] = param_4;
    param_2[-4] = (uint)param_1;
    *param_2 = (uint)param_1;
    param_2[1] = param_4;
    param_2[2] = (uint)unaff_r4;
    param_2[3] = unaff_r6;
    param_2[4] = (uint)register0x00000054;
    param_2[5] = unaff_lr;
    *param_2 = (uint)param_1;
    param_2[1] = param_4;
    param_2[2] = (uint)unaff_r4;
    param_2[3] = unaff_r7;
    param_2[4] = (uint)register0x00000054;
    param_2[5] = unaff_lr;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = unaff_r7;
    param_2[-4] = unaff_r6;
    param_2[-5] = (uint)unaff_r4;
    param_2[-6] = param_4;
    param_2[-7] = (uint)param_1;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = unaff_r8;
    param_2[-4] = (uint)unaff_r4;
    param_2[-5] = param_4;
    param_2[-6] = (uint)param_1;
    param_2[1] = (uint)param_1;
    param_2[2] = param_4;
    param_2[3] = (uint)unaff_r4;
    param_2[4] = unaff_r6;
    param_2[5] = unaff_r8;
    param_2[6] = (uint)register0x00000054;
    param_2[7] = unaff_lr;
    param_2[1] = (uint)param_1;
    param_2[2] = param_4;
    param_2[3] = (uint)unaff_r4;
    param_2[4] = unaff_r7;
    param_2[5] = unaff_r8;
    param_2[6] = (uint)register0x00000054;
    param_2[7] = unaff_lr;
  }
  if (!in_ZR) {
    unaff_lr = unaff_r7 & (int)param_4 >> 0x13;
  }
  if (in_OV) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = param_3;
  }
  if (in_NG) {
    *unaff_r4 = unaff_lr;
    unaff_r4[-1] = (uint)register0x00000054;
    unaff_r4[-2] = unaff_r9;
    unaff_r4[-3] = unaff_r8;
    unaff_r4[-4] = unaff_r7;
    unaff_r4[-5] = (uint)unaff_r4;
    unaff_r4[-6] = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* Function: NotUsed */

/* WARNING: Control flow encountered bad instruction data */

void NotUsed(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *unaff_r4;
  uint unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  
  if (in_OV) {
    *(uint *)(unaff_r8 + 4) = param_4;
    *(uint **)(unaff_r8 + 8) = unaff_r4;
    *(uint *)(unaff_r8 + 0xc) = unaff_r6;
    *(uint *)(unaff_r8 + 0x10) = unaff_r8;
    *(BADSPACEBASE **)(unaff_r8 + 0x14) = register0x00000054;
    *(uint *)(unaff_r8 + 0x18) = unaff_lr;
    *(uint *)(unaff_r8 + 4) = param_4;
    *(uint **)(unaff_r8 + 8) = unaff_r4;
    *(uint *)(unaff_r8 + 0xc) = unaff_r7;
    *(uint *)(unaff_r8 + 0x10) = unaff_r8;
    *(BADSPACEBASE **)(unaff_r8 + 0x14) = register0x00000054;
    *(uint *)(unaff_r8 + 0x18) = unaff_lr;
  }
  if (in_ZR) {
    unaff_r7 = (int)(short)param_4 * (int)(short)(unaff_r9 >> 0x10) + unaff_lr;
  }
  if (in_OV) {
    *param_2 = 0x28;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = (uint)unaff_r4;
    *param_2 = unaff_lr;
    param_2[-1] = (uint)register0x00000054;
    param_2[-2] = (uint)unaff_r4;
    param_2[-3] = param_4;
    param_2[-4] = (uint)param_1;
    *param_2 = (uint)param_1;
    param_2[1] = param_4;
    param_2[2] = (uint)unaff_r4;
    param_2[3] = unaff_r6;
    param_2[4] = (uint)register0x00000054;
    param_2[5] = unaff_lr;
    *param_2 = (uint)param_1;
    param_2[1] = param_4;
    param_2[2] = (uint)unaff_r4;
    param_2[3] = unaff_r7;
    param_2[4] = (uint)register0x00000054;
    param_2[5] = unaff_lr;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = unaff_r7;
    param_2[-4] = unaff_r6;
    param_2[-5] = (uint)unaff_r4;
    param_2[-6] = param_4;
    param_2[-7] = (uint)param_1;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = unaff_r8;
    param_2[-4] = (uint)unaff_r4;
    param_2[-5] = param_4;
    param_2[-6] = (uint)param_1;
    param_2[1] = (uint)param_1;
    param_2[2] = param_4;
    param_2[3] = (uint)unaff_r4;
    param_2[4] = unaff_r6;
    param_2[5] = unaff_r8;
    param_2[6] = (uint)register0x00000054;
    param_2[7] = unaff_lr;
    param_2[1] = (uint)param_1;
    param_2[2] = param_4;
    param_2[3] = (uint)unaff_r4;
    param_2[4] = unaff_r7;
    param_2[5] = unaff_r8;
    param_2[6] = (uint)register0x00000054;
    param_2[7] = unaff_lr;
  }
  if (!in_ZR) {
    unaff_lr = unaff_r7 & (int)param_4 >> 0x13;
  }
  if (in_OV) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = param_3;
  }
  if (in_NG) {
    *unaff_r4 = unaff_lr;
    unaff_r4[-1] = (uint)register0x00000054;
    unaff_r4[-2] = unaff_r9;
    unaff_r4[-3] = unaff_r8;
    unaff_r4[-4] = unaff_r7;
    unaff_r4[-5] = (uint)unaff_r4;
    unaff_r4[-6] = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* Function: IRQ */

/* WARNING: Control flow encountered bad instruction data */

void IRQ(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *unaff_r4;
  uint unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  
  if (in_OV) {
    *(uint *)(unaff_r8 + 4) = param_4;
    *(uint **)(unaff_r8 + 8) = unaff_r4;
    *(uint *)(unaff_r8 + 0xc) = unaff_r7;
    *(uint *)(unaff_r8 + 0x10) = unaff_r8;
    *(BADSPACEBASE **)(unaff_r8 + 0x14) = register0x00000054;
    *(uint *)(unaff_r8 + 0x18) = unaff_lr;
  }
  if (in_ZR) {
    unaff_r7 = (int)(short)param_4 * (int)(short)(unaff_r9 >> 0x10) + unaff_lr;
  }
  if (in_OV) {
    *param_2 = 0x28;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = (uint)unaff_r4;
    *param_2 = unaff_lr;
    param_2[-1] = (uint)register0x00000054;
    param_2[-2] = (uint)unaff_r4;
    param_2[-3] = param_4;
    param_2[-4] = (uint)param_1;
    *param_2 = (uint)param_1;
    param_2[1] = param_4;
    param_2[2] = (uint)unaff_r4;
    param_2[3] = unaff_r6;
    param_2[4] = (uint)register0x00000054;
    param_2[5] = unaff_lr;
    *param_2 = (uint)param_1;
    param_2[1] = param_4;
    param_2[2] = (uint)unaff_r4;
    param_2[3] = unaff_r7;
    param_2[4] = (uint)register0x00000054;
    param_2[5] = unaff_lr;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = unaff_r7;
    param_2[-4] = unaff_r6;
    param_2[-5] = (uint)unaff_r4;
    param_2[-6] = param_4;
    param_2[-7] = (uint)param_1;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = unaff_r8;
    param_2[-4] = (uint)unaff_r4;
    param_2[-5] = param_4;
    param_2[-6] = (uint)param_1;
    param_2[1] = (uint)param_1;
    param_2[2] = param_4;
    param_2[3] = (uint)unaff_r4;
    param_2[4] = unaff_r6;
    param_2[5] = unaff_r8;
    param_2[6] = (uint)register0x00000054;
    param_2[7] = unaff_lr;
    param_2[1] = (uint)param_1;
    param_2[2] = param_4;
    param_2[3] = (uint)unaff_r4;
    param_2[4] = unaff_r7;
    param_2[5] = unaff_r8;
    param_2[6] = (uint)register0x00000054;
    param_2[7] = unaff_lr;
  }
  if (!in_ZR) {
    unaff_lr = unaff_r7 & (int)param_4 >> 0x13;
  }
  if (in_OV) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = param_3;
  }
  if (in_NG) {
    *unaff_r4 = unaff_lr;
    unaff_r4[-1] = (uint)register0x00000054;
    unaff_r4[-2] = unaff_r9;
    unaff_r4[-3] = unaff_r8;
    unaff_r4[-4] = unaff_r7;
    unaff_r4[-5] = (uint)unaff_r4;
    unaff_r4[-6] = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* Function: FIQ */

/* WARNING: Control flow encountered bad instruction data */

void FIQ(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *unaff_r4;
  uint unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  
  if (in_ZR) {
    unaff_r7 = (int)(short)param_4 * (int)(short)(unaff_r9 >> 0x10) + unaff_lr;
  }
  if (in_OV) {
    *param_2 = 0x28;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = (uint)unaff_r4;
    *param_2 = unaff_lr;
    param_2[-1] = (uint)register0x00000054;
    param_2[-2] = (uint)unaff_r4;
    param_2[-3] = param_4;
    param_2[-4] = (uint)param_1;
    *param_2 = (uint)param_1;
    param_2[1] = param_4;
    param_2[2] = (uint)unaff_r4;
    param_2[3] = unaff_r6;
    param_2[4] = (uint)register0x00000054;
    param_2[5] = unaff_lr;
    *param_2 = (uint)param_1;
    param_2[1] = param_4;
    param_2[2] = (uint)unaff_r4;
    param_2[3] = unaff_r7;
    param_2[4] = (uint)register0x00000054;
    param_2[5] = unaff_lr;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = unaff_r7;
    param_2[-4] = unaff_r6;
    param_2[-5] = (uint)unaff_r4;
    param_2[-6] = param_4;
    param_2[-7] = (uint)param_1;
    param_2[-1] = unaff_lr;
    param_2[-2] = (uint)register0x00000054;
    param_2[-3] = unaff_r8;
    param_2[-4] = (uint)unaff_r4;
    param_2[-5] = param_4;
    param_2[-6] = (uint)param_1;
    param_2[1] = (uint)param_1;
    param_2[2] = param_4;
    param_2[3] = (uint)unaff_r4;
    param_2[4] = unaff_r6;
    param_2[5] = unaff_r8;
    param_2[6] = (uint)register0x00000054;
    param_2[7] = unaff_lr;
    param_2[1] = (uint)param_1;
    param_2[2] = param_4;
    param_2[3] = (uint)unaff_r4;
    param_2[4] = unaff_r7;
    param_2[5] = unaff_r8;
    param_2[6] = (uint)register0x00000054;
    param_2[7] = unaff_lr;
  }
  if (!in_ZR) {
    unaff_lr = unaff_r7 & (int)param_4 >> 0x13;
  }
  if (in_OV) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = param_3;
  }
  if (in_NG) {
    *unaff_r4 = unaff_lr;
    unaff_r4[-1] = (uint)register0x00000054;
    unaff_r4[-2] = unaff_r9;
    unaff_r4[-3] = unaff_r8;
    unaff_r4[-4] = unaff_r7;
    unaff_r4[-5] = (uint)unaff_r4;
    unaff_r4[-6] = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* Function: FUN_0000019c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000019c(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 unaff_lr;
  char local_18 [4];
  char acStack_14 [4];
  undefined4 local_10;
  
  puVar1 = DAT_00000298;
  local_10 = ram0x00000294;
  local_18 = (char  [4])s_cm4_assert_0000028c._0_4_;
  acStack_14 = (char  [4])s_cm4_assert_0000028c._4_4_;
  disableIRQinterrupts();
  *DAT_00000298 = unaff_lr;
  func_0xffffff9c();
  puVar1[2] = 1;
  iVar2 = DAT_0000029c;
  *(undefined4 *)(DAT_0000029c + 0x3c) = *puVar1;
  *(undefined4 *)(iVar2 + 0x40) = 0x1ba;
  puVar1[1] = 1;
  FUN_00002412(local_18,10);
  if (*DAT_000002a0 == 1) {
    FUN_000014ea();
  }
  do {
  } while (puVar1[2] != 0);
  return;
}



/* Function: FUN_00000ae8 */

int * FUN_00000ae8(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = DAT_00000de0;
  piVar1 = DAT_00000ddc;
  if (DAT_00000ddc[7] == 1) {
    iVar3 = func_0xff008c34(*(undefined4 *)(DAT_00000de0 + 0x18),0xffffffff);
    if (iVar3 != 0) {
      FUN_0000019c(0xde4,0x8b4,0x256);
    }
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 0x20);
    uVar4 = func_0xff008c2c();
    *(uint *)(iVar2 + 0x20) = uVar4;
    uVar6 = *(uint *)(iVar2 + 0x1c);
    if (uVar4 < uVar6) {
      uVar6 = ~uVar6;
    }
    else {
      uVar6 = -uVar6;
    }
    uVar5 = piVar1[5] + uVar4 + uVar6;
    piVar1[5] = uVar5;
    piVar1[6] = uVar4 + uVar6 + piVar1[6];
    if (999 < uVar5) {
      piVar1[4] = uVar5 / 1000 + piVar1[4];
      piVar1[5] = uVar5 % 1000;
    }
    uVar6 = DAT_00000df8;
    uVar4 = piVar1[4];
    if (0x3b < uVar4) {
      uVar5 = (uint)((ulonglong)DAT_00000df8 * (ulonglong)uVar4 >> 0x25);
      piVar1[3] = piVar1[3] + uVar5;
      piVar1[4] = uVar4 + uVar5 * -0x3c;
    }
    uVar4 = piVar1[3];
    if (0x3b < uVar4) {
      uVar6 = (uint)((ulonglong)uVar6 * (ulonglong)uVar4 >> 0x25);
      piVar1[2] = piVar1[2] + uVar6;
      piVar1[3] = uVar4 + uVar6 * -0x3c;
    }
    uVar6 = piVar1[2];
    if (0x17 < uVar6) {
      uVar4 = (uint)((ulonglong)DAT_00000dfc * (ulonglong)uVar6 >> 0x24);
      piVar1[1] = piVar1[1] + uVar4;
      piVar1[2] = uVar6 + uVar4 * -0x18;
    }
    if (0x1f < (uint)piVar1[1]) {
      piVar1[1] = piVar1[1] - 0x1f;
      *piVar1 = *piVar1 + 1;
    }
    iVar3 = func_0xff008c38(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0) {
      FUN_0000019c(0xde4,0x8b4,0x280);
    }
    if (999 < (uint)(*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x24))) {
      func_0xff008c24(0xe00,*piVar1,piVar1[1],piVar1[2],piVar1[3],piVar1[4],piVar1[5]);
      *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar2 + 0x20);
    }
  }
  return DAT_00000ddc;
}



/* Function: FUN_0000111c */

undefined4 FUN_0000111c(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  
  bVar1 = *param_1;
  iVar2 = 8;
  bVar8 = bVar1 & 0xc;
  iVar3 = *(int *)(DAT_00001528 + 8);
  if ((bVar1 & 3) == 0) {
    do {
      uVar5 = iVar3 + iVar2 * 0xc;
      if (*(char *)(uVar5 - 4) == '\x01') {
        if (bVar8 != 4) {
          uVar5 = (uint)*(byte *)(uVar5 - 3);
        }
        if (bVar8 == 4 || uVar5 == 0) {
          if (iVar2 == 0) {
            return 1;
          }
          return 0;
        }
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else if ((bVar1 & 3) == 1) {
    uVar5 = *(uint *)(param_1 + 4);
    uVar6 = *(uint *)(param_1 + 8);
    if (uVar5 < uVar6) {
      do {
        uVar4 = iVar3 + iVar2 * 0xc;
        if (*(char *)(uVar4 - 4) == '\x01') {
          uVar7 = *(uint *)(uVar4 - 8);
          bVar10 = uVar7 <= uVar5;
          bVar9 = uVar5 == uVar7;
          if (bVar10) {
            uVar7 = uVar7 + 0x10000000;
            bVar9 = uVar7 == uVar6;
          }
          if ((bVar10 && uVar6 <= uVar7) && !bVar9) {
            if (bVar8 != 4) {
              uVar4 = (uint)*(byte *)(uVar4 - 3);
            }
            if (bVar8 == 4 || uVar4 == 0) {
              if (iVar2 == 0) {
                return 1;
              }
              return 0;
            }
          }
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else if ((bVar1 & 3) == 2) {
    do {
      uVar5 = iVar3 + iVar2 * 0xc;
      if (((*(char *)(uVar5 - 4) == '\x01') && (*(uint *)(uVar5 - 8) <= *(uint *)(param_1 + 4))) &&
         (*(uint *)(param_1 + 8) < *(uint *)(uVar5 - 8) + 0x10000000)) {
        if (bVar8 != 4) {
          uVar5 = (uint)*(byte *)(uVar5 - 3);
        }
        if (bVar8 == 4 || uVar5 == 0) {
          if (iVar2 == 0) {
            return 1;
          }
          return 0;
        }
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 1;
}



/* Function: FUN_000011f6 */

int FUN_000011f6(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  if (param_2 == 0) {
    iVar7 = FUN_0000111c();
  }
  uVar3 = func_0xff008c44();
  func_0xff008c48();
  **(uint **)(DAT_00001528 + 0x24) = **(uint **)(DAT_00001528 + 0x24) | 1;
  iVar2 = DAT_00001528;
  if (iVar7 == 0) {
    uVar4 = 0x80000000;
    switch(*param_1) {
    case 0:
      break;
    case 1:
      uVar4 = param_1[2];
      **(uint **)(DAT_00001528 + 0x18) = param_1[1] & 0x3ffffff;
      **(uint **)(iVar2 + 0x1c) = uVar4 & 0x3ffffff;
      uVar4 = DAT_00001538;
      break;
    case 2:
      **(uint **)(DAT_00001528 + 0x18) = param_1[1] & 0x3ffffff;
      uVar4 = DAT_0000152c;
      break;
    default:
      iVar7 = 1;
      goto LAB_00001308;
    case 4:
      uVar4 = DAT_00001548;
      break;
    case 5:
      uVar4 = param_1[2];
      **(uint **)(DAT_00001528 + 0x18) = param_1[1] & 0x3ffffff;
      **(uint **)(iVar2 + 0x1c) = uVar4 & 0x3ffffff;
      uVar4 = DAT_00001534;
      break;
    case 6:
      **(uint **)(DAT_00001528 + 0x18) = param_1[1] & 0x3ffffff;
      uVar4 = DAT_00001530;
      break;
    case 8:
      uVar4 = DAT_0000153c;
      break;
    case 9:
      uVar4 = param_1[2];
      **(uint **)(DAT_00001528 + 0x18) = param_1[1] & 0x3ffffff;
      **(uint **)(iVar2 + 0x1c) = uVar4 & 0x3ffffff;
      uVar4 = DAT_00001540;
      break;
    case 10:
      **(uint **)(DAT_00001528 + 0x18) = param_1[1] & 0x3ffffff;
      uVar4 = DAT_00001544;
    }
    iVar2 = DAT_00001528;
    **(uint **)(DAT_00001528 + 0x20) = uVar4 & 0x8000003f;
    uVar4 = DAT_0000154c;
    if ((**(uint **)(iVar2 + 0x28) & 1) == 0) {
      uVar6 = 1;
      while ((**(uint **)(iVar2 + 0x28) & 1) == 0) {
        uVar5 = uVar6 + 1;
        bVar1 = uVar4 < uVar6;
        uVar6 = uVar5;
        if (bVar1) {
          FUN_0000019c(&DAT_0000155c,s_cache_drv_c_00001550,0x1ab);
        }
      }
    }
    **(uint **)(iVar2 + 0x24) = **(uint **)(iVar2 + 0x24) | 1;
  }
LAB_00001308:
  func_0xff008c4c(uVar3);
  return iVar7;
}



/* Function: FUN_00001314 */

void FUN_00001314(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  uVar2 = DAT_00001560;
  iVar1 = DAT_00001528;
  if (param_2 != 0) {
    do {
      iVar3 = param_1 + param_2 * 0xc;
      if (*(int *)(iVar3 + -0xc) - 1U < 7) {
        uVar5 = *(uint *)(iVar3 + -8) & uVar2;
        *(uint *)(iVar3 + -8) = uVar5;
        **(uint **)(*(int *)(iVar1 + 4) + *(int *)(iVar3 + -0xc) * 4) = uVar5;
      }
      uVar7 = *(uint *)**(undefined4 **)(iVar1 + 4);
      uVar5 = 1 << (*(int *)(iVar3 + -0xc) + 0x10U & 0xff);
      if (*(char *)(iVar3 + -3) == '\0') {
        uVar5 = uVar7 & ~uVar5;
      }
      else {
        uVar5 = uVar5 | uVar7;
      }
      *(uint *)**(undefined4 **)(iVar1 + 4) = uVar5;
      iVar6 = 2;
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x14);
      uVar5 = *(uint *)(iVar3 + -0xc);
      if (*(char *)(iVar3 + -4) == '\0') {
        uStack_30 = 9;
        uStack_2c = *(undefined4 *)(iVar3 + -8);
        uVar7 = *(uint *)(iVar3 + -0xc);
        if (uVar7 < 7) {
          iStack_28 = *(int *)(*(int *)(iVar1 + 8) + uVar7 * 0xc + 0x10) + -1;
        }
        else {
          iStack_28 = 0x3ffffff;
        }
        FUN_000011f6(&uStack_30,1);
        puVar4 = (uint *)**(undefined4 **)(iVar1 + 4);
        uVar5 = *puVar4 & ~(1 << (uVar5 & 0xff));
      }
      else {
        puVar4 = (uint *)**(undefined4 **)(iVar1 + 4);
        uVar5 = *puVar4 | 1 << (uVar5 & 0xff);
      }
      *puVar4 = uVar5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return;
  }
  return;
}



/* Function: FUN_0000131a */

void FUN_0000131a(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  uVar2 = DAT_00001560;
  iVar1 = DAT_00001528;
  do {
    iVar3 = param_1 + param_2 * 0xc;
    if (*(int *)(iVar3 + -0xc) - 1U < 7) {
      uVar5 = *(uint *)(iVar3 + -8) & uVar2;
      *(uint *)(iVar3 + -8) = uVar5;
      **(uint **)(*(int *)(iVar1 + 4) + *(int *)(iVar3 + -0xc) * 4) = uVar5;
    }
    uVar7 = *(uint *)**(undefined4 **)(iVar1 + 4);
    uVar5 = 1 << (*(int *)(iVar3 + -0xc) + 0x10U & 0xff);
    if (*(char *)(iVar3 + -3) == '\0') {
      uVar5 = uVar7 & ~uVar5;
    }
    else {
      uVar5 = uVar5 | uVar7;
    }
    *(uint *)**(undefined4 **)(iVar1 + 4) = uVar5;
    iVar6 = 2;
    do {
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x14);
    uVar5 = *(uint *)(iVar3 + -0xc);
    if (*(char *)(iVar3 + -4) == '\0') {
      local_30 = 9;
      local_2c = *(undefined4 *)(iVar3 + -8);
      uVar7 = *(uint *)(iVar3 + -0xc);
      if (uVar7 < 7) {
        local_28 = *(int *)(*(int *)(iVar1 + 8) + uVar7 * 0xc + 0x10) + -1;
      }
      else {
        local_28 = 0x3ffffff;
      }
      FUN_000011f6(&local_30,1);
      puVar4 = (uint *)**(undefined4 **)(iVar1 + 4);
      uVar5 = *puVar4 & ~(1 << (uVar5 & 0xff));
    }
    else {
      puVar4 = (uint *)**(undefined4 **)(iVar1 + 4);
      uVar5 = *puVar4 | 1 << (uVar5 & 0xff);
    }
    *puVar4 = uVar5;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



/* Function: FUN_000013de */

undefined4 FUN_000013de(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = DAT_00001528;
  **(uint **)(DAT_00001528 + 0x24) = **(uint **)(DAT_00001528 + 0x24) | 1;
  uVar4 = 0x80000000;
  if ((*param_1 != 0) && (uVar4 = DAT_00001548, *param_1 != 4)) {
    uVar4 = DAT_0000153c;
  }
  uVar3 = func_0xff008c44();
  func_0xff008c48();
  **(uint **)(iVar2 + 0x20) = uVar4 & 0x8000003f;
  uVar4 = DAT_0000154c;
  if ((**(uint **)(iVar2 + 0x28) & 1) == 0) {
    uVar6 = 1;
    while ((**(uint **)(iVar2 + 0x28) & 1) == 0) {
      uVar5 = uVar6 + 1;
      bVar1 = uVar4 < uVar6;
      uVar6 = uVar5;
      if (bVar1) {
        FUN_0000019c(&DAT_0000155c,s_cache_drv_c_00001550,0x1ee);
      }
    }
  }
  **(uint **)(iVar2 + 0x24) = **(uint **)(iVar2 + 0x24) | 1;
  func_0xff008c4c(uVar3);
  return 0;
}



/* Function: FUN_00001456 */

void FUN_00001456(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00001564;
  iVar1 = DAT_00001528;
  *(int *)(DAT_00001528 + 0x10) = DAT_00001564;
  *(int *)(iVar1 + 0x14) = iVar2 + -4;
  iVar2 = DAT_00001568;
  *(int *)(iVar1 + 0x18) = DAT_00001568;
  *(int *)(iVar1 + 0x1c) = iVar2 + 4;
  *(int *)(iVar1 + 0x20) = iVar2 + 8;
  *(undefined4 *)(iVar1 + 0x24) = DAT_0000156c;
  iVar2 = DAT_00001570;
  *(int *)(iVar1 + 0x28) = DAT_00001570;
  *(int *)(iVar1 + 0x2c) = iVar2 + -4;
  *(undefined4 *)(iVar1 + 0x30) = DAT_00001574;
  iVar2 = DAT_00001578;
  *(int *)(iVar1 + 0x34) = DAT_00001578;
  *(int *)(iVar1 + 0x38) = iVar2 + -4;
  iVar2 = DAT_0000157c;
  *(int *)(iVar1 + 0x3c) = DAT_0000157c;
  *(int *)(iVar1 + 0x40) = iVar2 + -4;
  *(int *)(iVar1 + 4) = iVar1 + 0x104;
  *(int *)(iVar1 + 0xc) = iVar1 + 0x144;
  *(int *)(iVar1 + 8) = iVar1 + 0xa4;
  return;
}



/* Function: FUN_000014a0 */

void FUN_000014a0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00001580;
  iVar1 = DAT_00001528;
  *(int *)(DAT_00001528 + 0x10) = DAT_00001580;
  *(int *)(iVar1 + 0x14) = iVar2 + -4;
  iVar2 = DAT_00001584;
  *(int *)(iVar1 + 0x18) = DAT_00001584;
  *(int *)(iVar1 + 0x1c) = iVar2 + 4;
  *(int *)(iVar1 + 0x20) = iVar2 + 8;
  *(undefined4 *)(iVar1 + 0x24) = DAT_00001588;
  iVar2 = DAT_0000158c;
  *(int *)(iVar1 + 0x28) = DAT_0000158c;
  *(int *)(iVar1 + 0x2c) = iVar2 + -4;
  *(undefined4 *)(iVar1 + 0x30) = DAT_00001590;
  iVar2 = DAT_00001594;
  *(int *)(iVar1 + 0x34) = DAT_00001594;
  *(int *)(iVar1 + 0x38) = iVar2 + -4;
  iVar2 = DAT_00001598;
  *(int *)(iVar1 + 0x3c) = DAT_00001598;
  *(int *)(iVar1 + 0x40) = iVar2 + -4;
  *(int *)(iVar1 + 4) = iVar1 + 0x124;
  *(int *)(iVar1 + 0xc) = iVar1 + 0x164;
  *(int *)(iVar1 + 8) = iVar1 + 0x44;
  return;
}



/* Function: FUN_000014ea */

void FUN_000014ea(void)

{
  undefined4 local_10 [3];
  
  local_10[0] = 0;
  FUN_000014a0();
  FUN_000013de(local_10,0);
  return;
}



/* Function: FUN_00001502 */

void FUN_00001502(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint extraout_r2;
  undefined4 local_18 [4];
  
  local_18[0] = 4;
  FUN_00001456(4,param_2,param_1);
  iVar1 = DAT_00001528;
  puVar3 = *(uint **)(DAT_00001528 + 0x14);
  *puVar3 = *puVar3 & 0x7fffffff;
  *puVar3 = *puVar3 | (extraout_r2 & 3) << 0x1c;
  FUN_000013de(local_18,1);
  puVar3 = *(uint **)(iVar1 + 0x14);
  *puVar3 = *puVar3 & 0x7fffffff;
  *puVar3 = *puVar3 & 0xfffffffc;
  *puVar3 = *puVar3;
  FUN_00001314(*(undefined4 *)(iVar1 + 8),8);
  uVar2 = 0;
  do {
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x32);
  return;
}



/* Function: FUN_0000170e */

undefined4 * FUN_0000170e(uint param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 local_30;
  uint local_2c;
  
  if (1 < param_1) {
    FUN_0000019c(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_00001ae8,s_sio_c_00001ac4,0x1d1);
  }
  if ((param_2 != 0xff) && (10 < param_2)) {
    FUN_0000019c(s__phy_port____0xff______phy_port_<_00001b08,s_sio_c_00001ac4,0x1d2);
  }
  if (*DAT_00001ae4 == 0) {
    iVar3 = func_0xff008c68(&DAT_00001b3c);
    *DAT_00001ae4 = iVar3;
  }
  puVar9 = DAT_00001b44;
  if (DAT_00001b44[param_1 * 0x25] == 0x55) {
    return (undefined4 *)0x0;
  }
  DAT_00001b44[param_1 * 0x25 + 1] = param_2;
  puVar9[1] = 10;
  puVar9[param_1 * 0x25 + 2] = *param_3;
  *(undefined1 *)(puVar9 + param_1 * 0x25 + 3) = 0;
  *(undefined1 *)((int)puVar9 + param_1 * 0x94 + 0xd) = 0;
  *(undefined1 *)((int)puVar9 + param_1 * 0x94 + 0xe) = 0;
  *(undefined1 *)((int)puVar9 + param_1 * 0x94 + 0xf) = *(undefined1 *)((int)param_3 + 7);
  iVar3 = DAT_00001b4c;
  puVar2 = DAT_00001b48;
  local_30 = *param_3;
  local_2c = (uint)*(byte *)((int)param_3 + 7);
  sVar6 = 0x20;
  if (param_2 == 2) {
LAB_000017b2:
    puVar9[param_1 * 0x25 + 0x19] = DAT_00001b50;
    puVar9[param_1 * 0x25 + 0x1a] = 0;
    puVar9[param_1 * 0x25 + 0x1b] = DAT_00001b54;
    puVar9[param_1 * 0x25 + 0x1c] = DAT_00001b58;
    puVar9[param_1 * 0x25 + 0x1d] = DAT_00001b5c;
    puVar9[param_1 * 0x25 + 0x1e] = 0;
    uVar8 = DAT_00001b60;
    puVar9[param_1 * 0x25 + 0x1f] = 0;
    puVar9[param_1 * 0x25 + 0x20] = uVar8;
    puVar9[param_1 * 0x25 + 0x21] = DAT_00001b64;
    puVar9[param_1 * 0x25 + 0x22] = 0;
    *(undefined2 *)puVar2 = 0;
    *(undefined2 *)((int)puVar2 + 2) = 0;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined2 *)((int)puVar2 + 6) = 0x20;
    iVar7 = 0;
    puVar4 = puVar2 + 4;
    puVar5 = puVar2;
    do {
      puVar5 = puVar5 + 3;
      sVar6 = sVar6 + -1;
      puVar2[iVar7 * 3 + 2] = iVar3 + iVar7 * 0x400;
      *puVar5 = 0x400;
      iVar7 = iVar7 + 1;
      *(undefined2 *)puVar4 = 0;
      puVar4 = puVar4 + 3;
    } while (sVar6 != 0);
  }
  else {
    if ((int)param_2 < 3) {
      if (1 < param_2) goto LAB_00001814;
      goto LAB_000017b2;
    }
    if (param_2 == 3) goto LAB_000017b2;
    if (param_2 != 10) goto LAB_00001814;
    puVar9[param_1 * 0x25 + 0x19] = DAT_00001b68;
    puVar9[param_1 * 0x25 + 0x1a] = DAT_00001b6c;
    puVar9[param_1 * 0x25 + 0x1b] = DAT_00001b70;
    puVar9[param_1 * 0x25 + 0x1c] = DAT_00001b74;
    puVar9[param_1 * 0x25 + 0x1d] = DAT_00001b78;
    puVar9[param_1 * 0x25 + 0x1e] = DAT_00001b7c;
    puVar9[param_1 * 0x25 + 0x1f] = 0;
    puVar9[param_1 * 0x25 + 0x20] = DAT_00001b80;
    puVar9[param_1 * 0x25 + 0x21] = DAT_00001b84;
    puVar9[param_1 * 0x25 + 0x22] = 0;
    *(undefined2 *)puVar2 = 0;
    *(undefined2 *)((int)puVar2 + 2) = 0;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined2 *)((int)puVar2 + 6) = 0x20;
    iVar7 = 0;
    puVar4 = puVar2 + 4;
    puVar5 = puVar2;
    do {
      puVar5 = puVar5 + 3;
      sVar6 = sVar6 + -1;
      puVar2[iVar7 * 3 + 2] = iVar3 + iVar7 * 0x400;
      *puVar5 = 0x400;
      iVar7 = iVar7 + 1;
      *(undefined2 *)puVar4 = 0;
      puVar4 = puVar4 + 3;
    } while (sVar6 != 0);
  }
  FUN_00002940(1);
LAB_00001814:
  puVar2 = DAT_00001b44;
  if (puVar9[param_1 * 0x25 + 0x19] == 0) {
    FUN_0000019c(s_sio_port_port__sio_op_init____NU_00001b88,s_sio_c_00001ac4,0x27d);
  }
  piVar1 = DAT_00001ae4;
  if (param_1 != 1) {
    return (undefined4 *)0x0;
  }
  if (*DAT_00001ae4 == 0) {
    iVar3 = func_0xff008c68(&DAT_00001b3c);
    *piVar1 = iVar3;
  }
  if (piVar1[1] == 0) {
    iVar3 = func_0xff008c3c(s_COMDEDUG_MUTEX_00001bac,1);
    piVar1[1] = iVar3;
  }
  puVar9 = DAT_00001b44;
  DAT_00001b44[0xac] = 0;
  puVar9[0xad] = 0;
  puVar9[0xae] = 0;
  piVar1[9] = 1;
  uVar8 = 0;
  if (*(uint *)(DAT_00001bbc + param_2 * 8) == param_2) {
    uVar8 = *(undefined4 *)(DAT_00001bbc + param_2 * 8 + 4);
  }
  else {
    FUN_0000019c(DAT_00001bc0 + 8,DAT_00001bc0,0x180);
  }
  puVar9 = DAT_00001b44 + 0x25;
  (*(code *)DAT_00001b44[0x3e])(uVar8,&local_30,DAT_00001bc4);
  puVar2[0x25] = 0x55;
  *puVar2 = 0x55;
  return puVar9;
}



/* Function: FUN_00001914 */

undefined4 FUN_00001914(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  
  iVar3 = DAT_00001b44;
  iVar9 = *(int *)(DAT_00001b44 + 0x98);
  func_0xff008c6c();
  psVar4 = DAT_00001b48;
  iVar2 = DAT_00001ae4;
  if (*(int *)(iVar3 + 0x2b8) == 0) {
    if (*DAT_00001b48 != 0) {
      *(undefined4 *)(iVar3 + 0x2b0) =
           *(undefined4 *)(DAT_00001b48 + (uint)(ushort)DAT_00001b48[2] * 6 + 4);
      *(undefined4 *)(iVar3 + 0x2b4) = *(undefined4 *)(psVar4 + (uint)(ushort)psVar4[2] * 6 + 6);
      *(undefined4 *)(iVar3 + 0x2b8) = 1;
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
      uVar8 = *DAT_00001bc8;
      uVar10 = DAT_00001bc8[1];
      *(undefined4 *)(iVar2 + 0xc) = 1;
      uVar7 = func_0xff008c2c();
      iVar6 = DAT_00001bcc;
      *(undefined4 *)(DAT_00001bcc + 4) = uVar7;
      func_0xff008c70();
      uVar7 = 0;
      if (*(int *)(DAT_00001bbc + iVar9 * 8) == iVar9) {
        uVar7 = *(undefined4 *)(DAT_00001bbc + iVar9 * 8 + 4);
      }
      else {
        FUN_0000019c(DAT_00001bc0 + 8,DAT_00001bc0,0x180);
      }
      (**(code **)(iVar3 + 0x108))(uVar7,uVar8,uVar10);
      *(undefined4 *)(iVar6 + 4) = 0;
      func_0xff008c6c();
      puVar5 = DAT_00001bc8;
      func_0xff008c6c();
      if (puVar5[2] == 1) {
        puVar5[2] = 0;
        if (*psVar4 != 0) {
          *psVar4 = *psVar4 + -1;
        }
        psVar4[(uint)(ushort)psVar4[2] * 6 + 8] = 0;
        sVar1 = psVar4[2];
        psVar4[2] = sVar1 + 1U;
        if ((ushort)psVar4[3] <= (ushort)(sVar1 + 1U)) {
          psVar4[2] = 0;
        }
        *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
      }
      else if (puVar5[2] == 2) {
        puVar5[2] = 0;
      }
      func_0xff008c70();
      *(undefined4 *)(iVar2 + 0xc) = 0;
      func_0xff008c70();
      FUN_00000ae8();
      return 1;
    }
    *(undefined4 *)(DAT_00001ae4 + 0xc) = 0;
  }
  func_0xff008c70();
  return 0;
}



/* Function: FUN_000020fa */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000020fa(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00002228 + param_1 * 0xc;
  iVar1 = *(int *)(iVar2 + 8);
  *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 8;
  *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 1;
  func_0xff008c6c();
  func_0xff008c74();
  iVar1 = *(int *)(iVar2 + 4);
  *(int *)(iVar2 + 4) = iVar1 + 1;
  func_0xff008c78();
  func_0xff008c70();
  if (0 < iVar1) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* Function: FUN_00002412 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002412(void)

{
  if (*DAT_00002534 == '\0') {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* Function: FUN_00002708 */

undefined4 FUN_00002708(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = *param_2;
  if (6 < (int)uVar2) {
    func_0xff008c24(s__ERR__invalid_core_id__d__max_co_0000278c,uVar2,7);
    return 0xfffffffb;
  }
  if (uVar2 != 1) {
    FUN_0000019c(s_THIS_MAILBOX_CORE____info_>core__000027c0,s_mailbox_c_000027b4,0x3a);
  }
  param_1[10] = *param_2;
  iVar1 = DAT_000027e4;
  *param_1 = *(undefined4 *)(DAT_000027e4 + 4);
  param_1[1] = 0x7f;
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  uVar5 = *(undefined4 *)(iVar1 + 0x14);
  param_1[2] = *(undefined4 *)(iVar1 + 8);
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  uVar3 = *(undefined4 *)(iVar1 + 0x1c);
  uVar4 = *(undefined4 *)(iVar1 + 0x20);
  uVar5 = *(undefined4 *)(iVar1 + 0x24);
  param_1[6] = *(undefined4 *)(iVar1 + 0x18);
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  if ((1 << (*param_2 & 0xff) & 0x7fU) == 0) {
    func_0xff008c24(s__WAN__not_support__core_map_0x_0_000027e8,param_1[1],*param_2,0x40);
    return 0;
  }
  param_1[0xc] = param_2[2];
  param_1[0xd] = param_2[3];
  iVar1 = FUN_00003a8c(0);
  param_1[0xb] = iVar1;
  if (*(code **)(iVar1 + 4) != Reset) {
    (**(code **)(iVar1 + 4))(param_1);
  }
  return 0;
}



/* Function: FUN_0000285c */

undefined4 FUN_0000285c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x2c) + 0x10);
  if (UNRECOVERED_JUMPTABLE == Reset) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00002874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,1,param_2);
  return uVar1;
}



/* Function: FUN_00002940 */

void FUN_00002940(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (1 < param_1) {
    FUN_0000019c(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_00002a2c,s_sio_sync_ops_c_00002a1c,0x92);
  }
  iVar1 = DAT_00002a14;
  iVar4 = DAT_00002a14 + param_1 * 0xc;
  *(undefined1 *)(iVar4 + 8) = 0;
  iVar2 = *(int *)(iVar4 + 4);
  puVar3 = (undefined4 *)(DAT_00002a4c + param_1 * 0x20);
  if (iVar2 == 0) {
    iVar2 = func_0xff008c68(puVar3[2]);
    *(int *)(iVar4 + 4) = iVar2;
  }
  func_0xff008ca4(iVar2,0,2);
  iVar2 = DAT_00002a50;
  iVar4 = *(int *)(DAT_00002a50 + param_1 * 4);
  if (iVar4 == 0) {
    iVar4 = func_0xff008c68(puVar3[3]);
    *(int *)(iVar2 + param_1 * 4) = iVar4;
  }
  func_0xff008ca4(iVar4,0,2);
  if (*(int *)(iVar1 + param_1 * 0xc) != 0) {
    return;
  }
  iVar2 = func_0xff008c90(*puVar3,puVar3[1],puVar3[7],0);
  *(int *)(iVar1 + param_1 * 0xc) = iVar2;
  if (iVar2 != -1) {
    return;
  }
  FUN_0000019c(s_SCI_INVALID_BLOCK_ID____s_sio_sy_00002a54,s_sio_sync_ops_c_00002a1c,0xb2);
  return;
}



/* Function: FUN_00002b2a */

int FUN_00002b2a(undefined4 param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar2 = FUN_00003c26();
  if (uVar2 == 0 || param_3 == 0) {
    return 0;
  }
  puVar3 = param_2;
  if (uVar2 <= param_3) goto LAB_00002b64;
  do {
    uVar2 = param_3;
    param_3 = uVar2;
    puVar3 = param_2;
LAB_00002b64:
    do {
      if ((uVar2 & 0xff) == 0 || param_3 == 0) {
        return iVar4;
      }
      uVar1 = FUN_00003bfc(param_1);
      param_2 = puVar3 + 1;
      *puVar3 = uVar1;
      param_3 = param_3 - 1;
      iVar4 = iVar4 + 1;
      uVar2 = FUN_00003c26(param_1);
      puVar3 = param_2;
    } while (uVar2 <= param_3);
  } while( true );
}



/* Function: FUN_00002ffc */

uint FUN_00002ffc(undefined4 *param_1,uint param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 *puStack_34;
  uint local_30;
  int iStack_2c;
  uint local_28;
  
  local_40 = 0;
  local_3c = 0;
  puStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  if (param_1 == (undefined4 *)0x0) {
    func_0xff008c24(s_sbuf_c_sbuf_write_input_error___00003538);
    return 0;
  }
  if (*(char *)(param_1 + 5) != '\x01') {
    func_0xff008c24(s_sbuf_c_sbuf_write_state_is_not_r_00003510);
    return 0;
  }
  if ((uint)param_1[6] <= param_2) {
    func_0xff008c24(s_sbuf_c_sbuf_write_state_bufnum_i_0000355c);
    return 0;
  }
  piVar5 = (int *)(param_1[2] + param_2 * 0x28);
  iVar8 = piVar5[2];
  iVar6 = *piVar5;
  iVar1 = func_0xff008ccc();
  if (iVar1 != 0) {
    func_0xff008c34(iVar8,0xffffffff);
  }
  if (*(int *)(iVar6 + 0x18) == piVar5[7]) {
    iVar1 = func_0xff008c2c();
    piVar5[8] = iVar1;
  }
  else {
    piVar5[7] = *(int *)(iVar6 + 0x18);
    iVar1 = func_0xff008c2c();
    piVar5[8] = iVar1;
    piVar5[9] = iVar1;
  }
  do {
    if (param_4 == 0) {
      iVar6 = piVar5[2];
      iVar1 = func_0xff008ccc();
      if (iVar1 != 0) {
        func_0xff008c38(iVar6);
      }
      return local_28;
    }
    iVar1 = *piVar5;
    if (*(uint *)(iVar1 + 0x14) <= (uint)(*(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x18))) {
      do {
        uVar2 = func_0xff008c2c();
        func_0xff008c24(s_sbuf_c__sbuf_write__buffer_is_fu_00003588,uVar2);
        local_38 = 0;
        iVar1 = func_0xff008c9c(piVar5[4],2,1,&local_38,param_5);
        if ((iVar1 != 0) || (*(char *)(param_1 + 5) == '\0')) {
          iVar1 = piVar5[2];
          iVar6 = func_0xff008ccc();
          goto joined_r0x00003240;
        }
        iVar1 = *piVar5;
      } while (*(uint *)(iVar1 + 0x14) <= (uint)(*(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x18)));
    }
    uVar4 = *(uint *)(iVar6 + 0x1c);
    uVar3 = *(uint *)(iVar6 + 0x14);
    uVar7 = uVar3 - (uVar4 - *(int *)(iVar6 + 0x18));
    iVar1 = (uVar4 - uVar3 * (uVar4 / uVar3)) + piVar5[6];
    if (param_4 <= uVar7) {
      uVar7 = param_4;
    }
    uVar4 = (uVar3 + piVar5[6]) - iVar1;
    iVar8 = param_3;
    uVar3 = uVar7;
    if (uVar4 < uVar7) {
      FUN_000042ee(iVar1,param_3,uVar4);
      iVar1 = piVar5[6];
      iVar8 = param_3 + uVar4;
      uVar3 = uVar7 - uVar4;
    }
    FUN_000042ee(iVar1,iVar8,uVar3);
    uVar3 = *(int *)(iVar6 + 0x1c) + uVar7;
    *(uint *)(iVar6 + 0x1c) = uVar3;
    *(uint *)(DAT_000035c8 + (uint)*(byte *)((int)param_1 + 0x16) * 0x140 + param_2 * 0x14 + 0x10) =
         uVar3 - *(uint *)(iVar6 + 0x14) * (uVar3 / *(uint *)(iVar6 + 0x14));
    uVar3 = *(int *)(iVar6 + 0x1c) - *(int *)(iVar6 + 0x18);
    if (((uVar3 == uVar7) || (5000 < (uint)(piVar5[8] - piVar5[9]))) ||
       (*(uint *)(iVar6 + 0x14) <= uVar3)) {
      piVar5[9] = piVar5[8];
      local_40 = CONCAT22(1,CONCAT11(4,*(undefined1 *)((int)param_1 + 0x16)));
      local_3c = local_30;
      iVar1 = func_0xff008cc8(*param_1,&local_40,param_5);
      if (iVar1 != 0) {
        iVar1 = piVar5[2];
        iVar6 = func_0xff008ccc();
joined_r0x00003240:
        if (iVar6 != 0) {
          func_0xff008c38(iVar1);
        }
        return local_28 - param_4;
      }
    }
    param_4 = param_4 - uVar7;
    param_3 = param_3 + uVar7;
  } while( true );
}



/* Function: FUN_000032f8 */

int FUN_000032f8(undefined4 *param_1,uint param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uStack_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 *puStack_34;
  uint local_30;
  int iStack_2c;
  uint local_28;
  
  local_40 = 0;
  local_3c = 0;
  puStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  if (param_1 == (undefined4 *)0x0) {
    func_0xff008c24(s_sbuf_c_sbuf_read_input_error___000035f4);
    return 0;
  }
  if (*(char *)(param_1 + 5) != '\x01') {
    func_0xff008c24(s_sbuf_c_sbuf_read_state_is_not_re_000035cc);
    return 0;
  }
  if ((uint)param_1[6] <= param_2) {
    func_0xff008c24(s_sbuf_c_sbuf_read_bufnum_is_error_00003614);
    return 0;
  }
  local_48 = param_2 * 5;
  piVar3 = (int *)(param_1[2] + param_2 * 0x28);
  puVar4 = (undefined4 *)*piVar3;
  iVar6 = piVar3[1];
  iVar1 = func_0xff008ccc();
  if (iVar1 != 0) {
    func_0xff008c34(iVar6,0xffffffff);
  }
  if (*(int *)(*piVar3 + 0xc) == *(int *)(*piVar3 + 8)) {
    do {
      uStack_4c = 0;
      iVar1 = func_0xff008c9c(piVar3[3],1,1,&uStack_4c,param_5);
      if ((iVar1 != 0) || (*(char *)(param_1 + 5) == '\0')) break;
    } while (*(int *)(*piVar3 + 0xc) == *(int *)(*piVar3 + 8));
  }
  do {
    if ((param_4 == 0) || (*(int *)(*piVar3 + 0xc) == *(int *)(*piVar3 + 8))) {
      iVar1 = piVar3[1];
      iVar6 = func_0xff008ccc();
joined_r0x00003454:
      if (iVar6 != 0) {
        func_0xff008c38(iVar1);
      }
      return local_28 - param_4;
    }
    uVar2 = puVar4[2];
    local_44 = (uVar2 - puVar4[1] * (uVar2 / (uint)puVar4[1])) + piVar3[5];
    uVar5 = puVar4[3] - uVar2;
    if (param_4 <= puVar4[3] - uVar2) {
      uVar5 = param_4;
    }
    uStack_4c = uVar5;
    func_0xff008c24(DAT_00003638,*(undefined1 *)((int)param_1 + 0x16),local_30,local_44,*puVar4);
    uVar7 = (puVar4[1] + piVar3[5]) - local_44;
    iVar1 = param_3;
    iVar6 = local_44;
    uVar2 = uVar5;
    if (uVar7 < uVar5) {
      FUN_000042ee(param_3,local_44,uVar7);
      iVar1 = param_3 + uVar7;
      iVar6 = piVar3[5];
      uVar2 = uVar5 - uVar7;
    }
    FUN_000042ee(iVar1,iVar6,uVar2);
    uVar2 = puVar4[2] + uVar5;
    puVar4[2] = uVar2;
    *(uint *)(DAT_000035c8 + (uint)*(byte *)((int)param_1 + 0x16) * 0x140 + local_48 * 4 + 0xc) =
         uVar2 - puVar4[1] * (uVar2 / (uint)puVar4[1]);
    if (puVar4[3] - puVar4[2] == puVar4[1] - uVar5) {
      local_40 = CONCAT22(2,CONCAT11(4,*(undefined1 *)((int)param_1 + 0x16)));
      local_3c = local_30;
      iVar1 = func_0xff008cc8(*param_1,&local_40,param_5);
      if (iVar1 != 0) {
        iVar1 = piVar3[1];
        iVar6 = func_0xff008ccc();
        goto joined_r0x00003454;
      }
    }
    param_4 = param_4 - uVar5;
    param_3 = param_3 + uVar5;
  } while( true );
}



/* Function: FUN_0000348c */

int FUN_0000348c(undefined4 *param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined4 local_40;
  uint local_3c;
  undefined4 *puStack_34;
  uint uStack_30;
  int iStack_2c;
  uint local_28;
  
  local_40 = 0;
  local_3c = 0;
  if (((param_1 == (undefined4 *)0x0) || (*(char *)(param_1 + 5) != '\x01')) ||
     ((uint)param_1[6] <= param_2)) {
    return 0;
  }
  piVar7 = (int *)(param_1[2] + param_2 * 0x28);
  piVar5 = (int *)*piVar7;
  puStack_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  if (piVar5[3] == piVar5[2]) {
    do {
      local_40._0_2_ = CONCAT11(4,*(undefined1 *)((int)param_1 + 0x16));
      local_40 = CONCAT22(2,(undefined2)local_40);
      local_3c = param_2;
      func_0xff008cc8(*param_1,&local_40,0);
      func_0xff008cd0(0);
    } while (*(int *)(*piVar7 + 0xc) == *(int *)(*piVar7 + 8));
  }
  while ((param_4 != 0 && (*(int *)(*piVar7 + 0xc) != *(int *)(*piVar7 + 8)))) {
    uVar2 = piVar5[1];
    uVar3 = piVar5[2];
    iVar4 = (uVar3 - uVar2 * (uVar3 / uVar2)) + *piVar5;
    uVar6 = piVar5[3] - uVar3;
    if (param_4 <= piVar5[3] - uVar3) {
      uVar6 = param_4;
    }
    uVar3 = (*piVar5 + uVar2) - iVar4;
    iVar1 = param_3;
    uVar2 = uVar6;
    if (uVar3 < uVar6) {
      FUN_000042ee(param_3,iVar4,uVar3);
      iVar4 = *piVar5;
      iVar1 = param_3 + uVar3;
      uVar2 = uVar6 - uVar3;
    }
    FUN_000042ee(iVar1,iVar4,uVar2);
    piVar5[2] = piVar5[2] + uVar6;
    local_40._0_2_ = CONCAT11(4,*(undefined1 *)((int)param_1 + 0x16));
    local_40 = CONCAT22(2,(undefined2)local_40);
    local_3c = param_2;
    iVar4 = func_0xff008cc8(*param_1,&local_40,0);
    if (iVar4 != 0) break;
    param_4 = param_4 - uVar6;
    param_3 = param_3 + uVar6;
  }
  return local_28 - param_4;
}



/* Function: FUN_000039e0 */

undefined4 FUN_000039e0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  func_0xff008c6c();
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  puVar1[3] = puVar1[3] | 1;
  func_0xff008c70();
  param_2[2] = uVar4;
  *param_2 = uVar2;
  param_2[1] = uVar3;
  return 0;
}



/* Function: FUN_00003a8c */

undefined4 FUN_00003a8c(void)

{
  return DAT_00003b68;
}



/* Function: FUN_00003bfc */

uint FUN_00003bfc(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == 0) {
    bVar1 = false;
    iVar3 = DAT_00003dac;
    if (DAT_00003dac != 0) {
      bVar2 = false;
      goto LAB_00003c12;
    }
  }
  else {
    bVar1 = true;
    iVar3 = 0;
  }
  bVar2 = true;
LAB_00003c12:
  if (!bVar1 && !bVar2) {
    return *(uint *)(*(int *)(iVar3 + 4) + 4) & 0xff;
  }
  return 0xff;
}



/* Function: FUN_00003c26 */

uint FUN_00003c26(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00003dac;
  if (param_1 != 0) {
    iVar1 = 0;
  }
  return *(uint *)(*(int *)(iVar1 + 4) + 0xc) & 0xff;
}



/* Function: FUN_00003c48 */

undefined4 FUN_00003c48(int param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  piVar3 = DAT_00003dac;
  iVar5 = 0;
  if ((DAT_00003dac[4] == param_1) && (iVar5 = *DAT_00003dac, iVar5 != 0)) {
    bVar1 = true;
    piVar4 = (int *)0x0;
LAB_00003c98:
    bVar2 = true;
  }
  else {
    bVar1 = false;
    piVar4 = DAT_00003dac;
    if (DAT_00003dac == (int *)0x0) goto LAB_00003c98;
    bVar2 = false;
  }
  if (bVar1 || bVar2) {
    return 0x21;
  }
  func_0xff008c80(piVar4[4]);
  uVar6 = *(uint *)(piVar4[1] + 0x2c);
  if ((uVar6 & 2) == 0) goto LAB_00003cc4;
  if (iVar5 == 0) {
    bVar1 = false;
    if (piVar3 == (int *)0x0) goto LAB_00003cac;
    bVar2 = false;
  }
  else {
    piVar3 = (int *)0x0;
    bVar1 = true;
LAB_00003cac:
    bVar2 = true;
  }
  if (!bVar1 && !bVar2) {
    *(uint *)(piVar3[1] + 0x10) = *(uint *)(piVar3[1] + 0x10) & 0xfffffffd;
  }
  if ((code *)piVar4[10] != Reset) {
    (*(code *)piVar4[10])(iVar5,1);
  }
LAB_00003cc4:
  if ((uVar6 & 0x2001) != 0) {
    *(uint *)(piVar4[1] + 0x14) = *(uint *)(piVar4[1] + 0x14) | 0x2000;
    if ((code *)piVar4[10] != Reset) {
      (*(code *)piVar4[10])(iVar5,0);
    }
  }
  func_0xff008a4c(1);
  func_0xff008c7c(piVar4[4]);
  return 0;
}



/* Function: FUN_00003f1c */

void FUN_00003f1c(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[6];
  if ((int)(*param_1 << 0x1b) < 0) {
    uVar2 = 0x30;
  }
  else {
    uVar2 = 0x20;
  }
  if ((*param_1 & 1) != 0) {
    return;
  }
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (*(code *)param_1[1])(uVar2,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  return;
}



/* Function: FUN_00003f48 */

void FUN_00003f48(byte *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((*param_1 & 1) == 0) {
    return;
  }
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    (**(code **)(param_1 + 4))(0x20,*(undefined4 *)(param_1 + 8));
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return;
}



/* Function: FUN_000040c8 */

uint FUN_000040c8(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  iVar1 = DAT_0000424c;
  param_1[8] = 0;
  while (uVar2 = (*(code *)param_1[3])(param_1), uVar2 != 0) {
    if (uVar2 == 0x25) {
      uVar5 = 0;
      while (((uVar2 = (*(code *)param_1[3])(param_1), 0x1f < (int)uVar2 && (uVar2 < 0x31)) &&
             (uVar3 = (uint)*(byte *)(iVar1 + uVar2 + 0x40bc), uVar3 != 0))) {
        uVar5 = uVar5 | uVar3;
      }
      if ((int)(uVar5 << 0x1e) < 0) {
        uVar5 = uVar5 & 0xfffffffb;
      }
      param_1[7] = 0;
      iVar6 = 0;
      param_1[6] = 0;
      puVar7 = param_2;
      do {
        if (uVar2 == 0x2a) {
          param_2 = puVar7 + 1;
          param_1[iVar6 + 6] = *puVar7;
          uVar2 = (*(code *)param_1[3])(param_1);
          if (iVar6 == 1) {
            if ((int)param_1[7] < 0) {
              uVar5 = uVar5 & 0xffffffdf;
            }
            break;
          }
        }
        else {
          iVar4 = FUN_00004c60(uVar2);
          if (iVar4 != 0) {
            param_1[iVar6 + 6] = uVar2 - 0x30;
            while( true ) {
              uVar2 = (*(code *)param_1[3])(param_1);
              iVar4 = FUN_00004c60();
              if (iVar4 == 0) break;
              param_1[iVar6 + 6] = (uVar2 + param_1[iVar6 + 6] * 10) - 0x30;
            }
          }
          param_2 = puVar7;
          if (iVar6 == 1) break;
        }
        if (uVar2 != 0x2e) break;
        uVar2 = (*(code *)param_1[3])(param_1);
        iVar6 = iVar6 + 1;
        uVar5 = uVar5 | 0x20;
        puVar7 = param_2;
      } while (iVar6 < 2);
      if ((int)param_1[6] < 0) {
        uVar5 = uVar5 | 1;
        param_1[6] = -param_1[6];
      }
      if ((uVar5 & 1) != 0) {
        uVar5 = uVar5 & 0xffffffef;
      }
      if ((uVar2 == 0x6c) || (uVar2 == 0x68)) {
        uVar3 = (*(code *)param_1[3])(param_1);
        if (uVar3 == uVar2) {
          if (uVar2 == 0x6c) goto LAB_00004234;
          uVar2 = 0x400;
          goto LAB_000041ea;
        }
        if (uVar2 == 0x6c) {
          uVar2 = 0x40;
        }
        else {
          uVar2 = 0x100;
        }
        uVar5 = uVar5 | uVar2;
        uVar2 = uVar3;
      }
      else {
        if (uVar2 != 0x4c) {
          if (uVar2 == 0x6a) {
LAB_00004234:
            uVar2 = 0x80;
            goto LAB_000041ea;
          }
          if ((uVar2 != 0x74) && (uVar2 != 0x7a)) goto LAB_00004200;
        }
        uVar2 = 0;
LAB_000041ea:
        uVar5 = uVar5 | uVar2;
        uVar2 = (*(code *)param_1[3])(param_1);
      }
LAB_00004200:
      if (uVar2 == 0) break;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 + 0x20;
        uVar5 = uVar5 | 0x800;
      }
      *param_1 = uVar5;
      iVar6 = func_0xfffffed0(param_1,uVar2,param_2);
      if (iVar6 == 0) goto LAB_000040ec;
      if (iVar6 == 1) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = (uint *)(((int)param_2 + 7U & 0xfffffff8) + 8);
      }
    }
    else {
LAB_000040ec:
      (*(code *)param_1[1])(uVar2,param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
  }
  return param_1[8];
}



/* Function: FUN_000042ee */

undefined8 FUN_000042ee(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte *pbVar5;
  byte bVar6;
  undefined2 uVar7;
  byte in_r12;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  puVar4 = param_2;
  if (3 < param_3) {
    uVar8 = (uint)param_1 & 3;
    puVar2 = param_1;
    uVar9 = uVar8;
    if (uVar8 != 0) {
      bVar6 = (byte)*param_2;
      puVar4 = (uint *)((int)param_2 + 1);
      if (uVar8 < 3) {
        puVar4 = (uint *)((int)param_2 + 2);
        uVar9 = (uint)*(byte *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar6;
      param_2 = puVar4;
      if (uVar8 < 2) {
        param_2 = (uint *)((int)puVar4 + 1);
        bVar6 = (byte)*puVar4;
      }
      param_3 = (param_3 + uVar8) - 4;
      puVar4 = (uint *)((int)param_1 + 1);
      if (uVar8 < 3) {
        puVar4 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)uVar9;
      }
      puVar2 = puVar4;
      if (uVar8 < 2) {
        puVar2 = (uint *)((int)puVar4 + 1);
        *(byte *)puVar4 = bVar6;
      }
    }
    param_4 = (uint)param_2 & 3;
    if (param_4 == 0) {
      uVar9 = 0;
      while (uVar8 = param_3 - 0x20, 0x1f < param_3) {
        uVar9 = param_2[1];
        uVar10 = param_2[2];
        uVar11 = param_2[3];
        *puVar2 = *param_2;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        uVar9 = param_2[4];
        uVar10 = param_2[5];
        uVar11 = param_2[6];
        uVar12 = param_2[7];
        param_2 = param_2 + 8;
        puVar2[4] = uVar9;
        puVar2[5] = uVar10;
        puVar2[6] = uVar11;
        puVar2[7] = uVar12;
        puVar2 = puVar2 + 8;
        param_3 = uVar8;
      }
      if ((uVar8 & 0x10) != 0) {
        uVar9 = *param_2;
        uVar10 = param_2[1];
        uVar11 = param_2[2];
        uVar12 = param_2[3];
        param_2 = param_2 + 4;
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        puVar2 = puVar2 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        uVar9 = *param_2;
        uVar10 = param_2[1];
        param_2 = param_2 + 2;
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        puVar2 = puVar2 + 2;
      }
      puVar3 = puVar2;
      puVar4 = param_2;
      if ((uVar8 & 4) != 0) {
        puVar4 = param_2 + 1;
        uVar9 = *param_2;
        puVar3 = puVar2 + 1;
        *puVar2 = uVar9;
      }
      uVar7 = (undefined2)uVar9;
      if ((uVar8 & 3) != 0) {
        bVar1 = (uVar8 & 2) != 0;
        param_3 = param_3 << 0x1f;
        bVar13 = (int)param_3 < 0;
        puVar2 = puVar4;
        if (bVar1) {
          puVar2 = (uint *)((int)puVar4 + 2);
          uVar7 = (undefined2)*puVar4;
        }
        puVar4 = puVar2;
        if (bVar13) {
          puVar4 = (uint *)((int)puVar2 + 1);
          param_3 = (uint)(byte)*puVar2;
        }
        puVar2 = puVar3;
        if (bVar1) {
          puVar2 = (uint *)((int)puVar3 + 2);
          *(undefined2 *)puVar3 = uVar7;
        }
        puVar3 = puVar2;
        if (bVar13) {
          puVar3 = (uint *)((int)puVar2 + 1);
          *(byte *)puVar2 = (byte)param_3;
        }
        return CONCAT44(puVar4,puVar3);
      }
      return CONCAT44(puVar4,puVar3);
    }
    while( true ) {
      in_r12 = (byte)uVar9;
      if (param_3 < 8) break;
      puVar4 = param_2 + 1;
      param_4 = *param_2;
      param_2 = param_2 + 2;
      uVar9 = *puVar4;
      *puVar2 = param_4;
      puVar2[1] = uVar9;
      puVar2 = puVar2 + 2;
      param_3 = param_3 - 8;
    }
    param_3 = param_3 - 4;
    param_1 = puVar2;
    puVar4 = param_2;
    if (-1 < (int)param_3) {
      puVar4 = param_2 + 1;
      param_4 = *param_2;
      param_1 = puVar2 + 1;
      *puVar2 = param_4;
    }
  }
  bVar6 = (byte)param_4;
  bVar1 = (param_3 & 2) != 0;
  param_3 = param_3 << 0x1f;
  bVar13 = (int)param_3 < 0;
  if (bVar1) {
    pbVar5 = (byte *)((int)puVar4 + 1);
    bVar6 = (byte)*puVar4;
    puVar4 = (uint *)((int)puVar4 + 2);
    in_r12 = *pbVar5;
  }
  puVar2 = puVar4;
  if (bVar13) {
    puVar2 = (uint *)((int)puVar4 + 1);
    param_3 = (uint)(byte)*puVar4;
  }
  if (bVar1) {
    pbVar5 = (byte *)((int)param_1 + 1);
    *(byte *)param_1 = bVar6;
    param_1 = (uint *)((int)param_1 + 2);
    *pbVar5 = in_r12;
  }
  puVar4 = param_1;
  if (bVar13) {
    puVar4 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)param_3;
  }
  return CONCAT44(puVar2,puVar4);
}



/* Function: FUN_000043cc */

undefined4 * FUN_000043cc(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar4) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar4 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar4);
  if ((param_2 & 0x10) != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar3 = param_2 << 0x1e;
  puVar2 = param_1;
  if ((param_2 << 0x1c & 0x40000000) != 0) {
    puVar2 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar3 != 0) {
    puVar1 = puVar2;
    if ((int)uVar3 < 0) {
      puVar1 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = 0;
    }
    puVar2 = puVar1;
    if ((uVar3 & 0x40000000) != 0) {
      puVar2 = (undefined4 *)((int)puVar1 + 1);
      *(undefined1 *)puVar1 = 0;
    }
    return puVar2;
  }
  return puVar2;
}



/* Function: FUN_000044d0 */

undefined4 FUN_000044d0(uint *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(*param_1 << 0x1a) < 0) {
    uVar1 = param_1[7];
    *param_1 = *param_1 & 0xffffffef;
  }
  else {
    uVar1 = 1;
  }
  if (param_2 < (int)uVar1) {
    iVar4 = uVar1 - param_2;
  }
  else {
    iVar4 = 0;
  }
  param_1[6] = param_1[6] - (iVar4 + param_2 + param_4);
  if (-1 < (int)((uint)(byte)*param_1 << 0x1b)) {
    FUN_00003f1c(param_1);
  }
  for (iVar3 = 0; iVar3 < param_4; iVar3 = iVar3 + 1) {
    (*(code *)param_1[1])(*(undefined1 *)(param_3 + iVar3),param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)((uint)(byte)*param_1 << 0x1b) < 0) {
    FUN_00003f1c(param_1);
  }
  while (0 < iVar4) {
    (*(code *)param_1[1])(0x30,param_1[2]);
    param_1[8] = param_1[8] + 1;
    iVar4 = iVar4 + -1;
  }
  while (0 < param_2) {
    (*(code *)param_1[1])(*(byte *)((int)param_1 + param_2 + 0x23),param_1[2]);
    param_1[8] = param_1[8] + 1;
    param_2 = param_2 + -1;
  }
  FUN_00003f48(param_1);
  if ((int)((uint)(byte)*param_1 << 0x18) < 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Function: FUN_000045b6 */

void FUN_000045b6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  local_2c = 0;
  local_34 = DAT_000045d8 + 0x45c8;
  local_3c = param_4;
  uStack_38 = param_2;
  uStack_30 = param_1;
  FUN_000040c8(auStack_40,param_3);
  return;
}



/* Function: FUN_0000494c */

void FUN_0000494c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = DAT_00004bf4;
  iVar1 = DAT_00004bf0;
  uVar4 = 0;
  iVar5 = DAT_00004bf0 + 1;
  do {
    if (*(short *)(iVar2 + uVar4 * 2) != 0) {
      do {
        func_0xff008ca0(iVar1,uVar4);
        *(short *)(iVar2 + uVar4 * 2) = *(short *)(iVar2 + uVar4 * 2) + -1;
        pcVar3 = *(code **)(param_2 + uVar4 * 4 + 0x54);
        if (pcVar3 != Reset) {
          (*pcVar3)(uVar4,param_2);
        }
        func_0xff008ca0(iVar5,0xd);
      } while (*(short *)(iVar2 + uVar4 * 2) != 0);
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 7);
  return;
}



/* Function: FUN_000049a6 */

uint FUN_000049a6(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  
  iVar4 = DAT_00004c04;
  iVar3 = DAT_00004c00;
  iVar2 = DAT_00004bfc;
  puVar1 = DAT_00004bf8;
  uVar10 = 0;
  uVar8 = 0;
  uVar6 = *(uint *)(*param_1 + 0x14);
  uVar5 = 0;
  uVar13 = (uVar6 & 0x7fffffff) >> 0x18;
  uVar9 = (uVar6 & 0x7fffff) >> 0x10;
  if (uVar9 == uVar13) {
    if ((uVar6 & 4) == 0) goto LAB_00004a8c;
    uVar8 = 0x40;
  }
  else {
    if (uVar9 <= uVar13) {
      uVar6 = (0x40 - uVar13) + uVar9;
    }
    if (uVar13 <= uVar9) {
      uVar6 = uVar9 - uVar13;
    }
    uVar8 = uVar6 & 0xff;
    if (uVar8 == 0) goto LAB_00004a8c;
  }
  uVar6 = *(uint *)(DAT_00004bfc + 4);
  do {
    piVar7 = (int *)*param_1;
    param_1[1] = *piVar7;
    param_1[2] = piVar7[1];
    param_1[3] = piVar7[2];
    piVar7[3] = piVar7[3] | 1;
    iVar11 = param_1[1];
    iVar12 = param_1[2];
    piVar7 = (int *)(iVar3 + (uVar6 & 0x3f) * 0xc);
    piVar7[2] = param_1[3];
    *piVar7 = iVar11;
    piVar7[1] = iVar12;
    uVar9 = 0;
    uVar6 = uVar6 + 1;
    if (uVar5 != 0) {
      do {
        if ((*(int *)(iVar4 + uVar9 * 0xc) == param_1[1]) &&
           (uVar13 = iVar4 + uVar9 * 0xc, *(int *)(uVar13 + 4) == param_1[2])) {
          bVar14 = *(int *)(uVar13 + 8) == param_1[3];
          if (bVar14) {
            uVar13 = (uint)*(byte *)(uVar13 + 5);
          }
          if (bVar14 && uVar13 == 4) goto LAB_00004a80;
        }
        uVar9 = uVar9 + 1 & 0xff;
      } while (uVar9 < uVar5);
    }
    *(int *)(iVar4 + uVar5 * 0xc) = param_1[1];
    iVar11 = iVar4 + uVar5 * 0xc;
    *(int *)(iVar11 + 4) = param_1[2];
    uVar5 = uVar5 + 1 & 0xff;
    *(int *)(iVar11 + 8) = param_1[3];
LAB_00004a80:
    uVar10 = uVar10 + 1 & 0xff;
  } while (uVar10 < uVar8);
  *(uint *)(iVar2 + 4) = uVar6;
LAB_00004a8c:
  if (0x3f < (byte)puVar1[1] + uVar8) {
    if ((*(uint *)(DAT_00004c08 + 0x14) & 0xffff) != 0) {
      *(uint *)(DAT_00004c08 + 0x10) = *(uint *)(DAT_00004c08 + 0x14) & 0xffff;
    }
    if ((*(uint *)(DAT_00004c0c + 0x14) & 0xffff) != 0) {
      *(uint *)(DAT_00004c0c + 0x10) = *(uint *)(DAT_00004c0c + 0x14) & 0xffff;
    }
    if ((*(uint *)(DAT_00004c10 + 0x14) & 0xffff) != 0) {
      *(uint *)(DAT_00004c10 + 0x10) = *(uint *)(DAT_00004c10 + 0x14) & 0xffff;
    }
    if ((*(uint *)(DAT_00004c14 + 0x14) & 0xffff) != 0) {
      *(uint *)(DAT_00004c14 + 0x10) = *(uint *)(DAT_00004c14 + 0x14) & 0xffff;
    }
    if ((*(uint *)(DAT_00004c18 + 0x14) & 0xffff) != 0) {
      *(uint *)(DAT_00004c18 + 0x10) = *(uint *)(DAT_00004c18 + 0x14) & 0xffff;
    }
    if ((*(uint *)(DAT_00004c1c + 0x14) & 0xffff) != 0) {
      *(uint *)(DAT_00004c1c + 0x10) = *(uint *)(DAT_00004c1c + 0x14) & 0xffff;
    }
    if ((*(uint *)(DAT_00004c20 + 0x14) & 0xffff) != 0) {
      *(uint *)(DAT_00004c20 + 0x10) = *(uint *)(DAT_00004c20 + 0x14) & 0xffff;
    }
  }
  puVar1[1] = (char)uVar8;
  *puVar1 = 0;
  return uVar5;
}



/* Function: FUN_00004c60 */

undefined4 FUN_00004c60(int param_1)

{
  if (param_1 - 0x30U < 10) {
    return 1;
  }
  return 0;
}



/* Function: FUN_00005640 */

undefined4 FUN_00005640(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  return uVar2;
}



/* Function: FUN_00005646 */

void FUN_00005646(void)

{
  disableIRQinterrupts();
  return;
}



/* Function: FUN_0000564c */

void FUN_0000564c(uint param_1)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((param_1 & 1) == 1);
  }
  return;
}



/* Function: FUN_00005652 */

int FUN_00005652(undefined4 param_1)

{
  return LZCOUNT(param_1);
}



/* Function: FUN_00005674 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00005674(void)

{
  disableIRQinterrupts();
  _DAT_e000ed08 = DAT_000056d8;
  *DAT_000056dc = *DAT_000056dc | 1;
  *DAT_000056e0 = *DAT_000056d8;
  _DAT_e000e014 = 59999;
  _DAT_e000e010 = 4;
  _DAT_e000ed18 = 0;
  _DAT_e000ed1c = 0xff000000;
  _DAT_e000ed20 = DAT_000056e4;
  return;
}



/* Function: FUN_00005750 */

undefined4 FUN_00005750(undefined4 param_1)

{
  FUN_00006598();
  return param_1;
}



/* Function: FUN_00005b9c */

void FUN_00005b9c(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00005bc8;
  *DAT_00005bc8 = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0x20;
  func_0x0002c330(DAT_00005bcc,0x80);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = puVar1[8] | 0x18a0000;
  return;
}



/* Function: FUN_00005c74 */

void FUN_00005c74(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000000;
  
  uVar1 = getMainStackPointer();
  uVar2 = getProcessStackPointer();
  FUN_0000605e(in_stack_00000000,uVar1,uVar2);
  *DAT_00005ca0 = *DAT_00005ca0 + 1;
  return;
}



/* Function: FUN_00005e04 */

void FUN_00005e04(void)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = s_TASKMONITORBEGIN_00006128._12_4_;
  uVar2 = s_TASKMONITORBEGIN_00006128._8_4_;
  uVar4 = s_TASKMONITORBEGIN_00006128._4_4_;
  pcVar1 = DAT_00006124;
  *(undefined4 *)DAT_00006124 = s_TASKMONITORBEGIN_00006128._0_4_;
  *(undefined4 *)(pcVar1 + 4) = uVar4;
  *(undefined4 *)(pcVar1 + 8) = uVar2;
  *(undefined4 *)(pcVar1 + 0xc) = uVar3;
  pcVar1[0x10] = '6';
  pcVar1[0x11] = '\0';
  pcVar1[0x12] = '\x1c';
  pcVar1[0x13] = '\0';
  pcVar1[0x14] = '\x06';
  pcVar1[0x15] = '\0';
  pcVar1[0x16] = '|';
  pcVar1[0x17] = '\x03';
  pcVar1[0x18] = -0x38;
  iVar5 = DAT_0000613c;
  pcVar1[0x19] = '\0';
  pcVar1[0x1a] = -0x3c;
  pcVar1[0x1b] = '\x03';
  iVar6 = 0;
  do {
    if (*(int *)(iVar5 + iVar6 * 8) == 0xffff) break;
    func_0x0002c33c(pcVar1 + iVar6 * 0x10 + 0x1c,*(undefined4 *)(iVar5 + iVar6 * 8 + 4));
    iVar6 = iVar6 + 1;
  } while (iVar6 < (int)(uint)*(ushort *)(pcVar1 + 0x10));
  uVar4 = FUN_00006788();
  *(undefined4 *)(pcVar1 + 0x37c) = uVar4;
  iVar5 = FUN_0000678c();
  *(int *)(pcVar1 + 0x380) = iVar5;
  pcVar1[900] = '\0';
  pcVar1[0x385] = '\0';
  pcVar1[0x386] = '\0';
  pcVar1[0x387] = '\0';
  pcVar1[0x388] = -1;
  pcVar1[0x389] = -1;
  pcVar1[0x38a] = -1;
  pcVar1[0x38b] = -1;
  pcVar1[0x38c] = '\0';
  pcVar1[0x38d] = '@';
  pcVar1[0x38e] = '\0';
  pcVar1[0x38f] = '\0';
  *(int *)(pcVar1 + 0x390) = iVar5;
  pcVar1[0x394] = -1;
  pcVar1[0x395] = -1;
  pcVar1[0x396] = -1;
  pcVar1[0x397] = -1;
  iVar5 = iVar5 + 0x4000;
  pcVar1[0x398] = '\0';
  pcVar1[0x399] = '\0';
  pcVar1[0x39a] = '\0';
  pcVar1[0x39b] = '\0';
  *(int *)(pcVar1 + 0x39c) = iVar5;
  pcVar1[0x3a0] = -1;
  pcVar1[0x3a1] = -1;
  pcVar1[0x3a2] = -1;
  pcVar1[0x3a3] = -1;
  pcVar1[0x3a4] = '\0';
  pcVar1[0x3a5] = '\0';
  pcVar1[0x3a6] = '\0';
  pcVar1[0x3a7] = '\0';
  *(int *)(pcVar1 + 0x3a8) = iVar5;
  pcVar1[0x3ac] = -1;
  pcVar1[0x3ad] = -1;
  pcVar1[0x3ae] = -1;
  pcVar1[0x3af] = -1;
  pcVar1[0x3b8] = -1;
  pcVar1[0x3b9] = -1;
  pcVar1[0x3ba] = -1;
  pcVar1[0x3bb] = -1;
  pcVar1[0x3b0] = '\0';
  pcVar1[0x3b1] = '\0';
  pcVar1[0x3b2] = '\0';
  pcVar1[0x3b3] = '\0';
  *(int *)(pcVar1 + 0x3b4) = iVar5;
  pcVar1[0x3bc] = '\0';
  pcVar1[0x3bd] = '\0';
  pcVar1[0x3be] = '\0';
  pcVar1[0x3bf] = '\0';
  *(int *)(pcVar1 + 0x3c0) = iVar5;
  return;
}



/* Function: FUN_00005e98 */

void FUN_00005e98(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(DAT_00006140 & 0xfffffff0);
  FUN_000078c0(s_Dumping_memory_to_a_file__please_00006144);
  iVar2 = DAT_00006174;
  FUN_00006880(0x7e);
  uVar3 = 0;
  do {
    cVar1 = *(char *)(iVar2 + uVar3);
    if (cVar1 == '~' || cVar1 == '}') {
      FUN_00006880(0x7d);
      FUN_00006880(*(byte *)(iVar2 + uVar3) ^ 0x20);
    }
    else {
      FUN_00006880();
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  uVar3 = 0;
  do {
    if (*pbVar4 == 0x7e || *pbVar4 == 0x7d) {
      FUN_00006880(0x7d);
      FUN_00006880(*pbVar4 ^ 0x20);
    }
    else {
      FUN_00006880();
    }
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 < 0x4000);
  FUN_00006880(0x7e);
  FUN_00006880(0x7e);
  iVar2 = DAT_00006178;
  uVar3 = 0;
  do {
    cVar1 = *(char *)(iVar2 + uVar3);
    if (cVar1 == '~' || cVar1 == '}') {
      FUN_00006880(0x7d);
      FUN_00006880(*(byte *)(iVar2 + uVar3) ^ 0x20);
    }
    else {
      FUN_00006880();
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  FUN_00006880(9);
  FUN_00006880(0x7e);
  FUN_000078c0(s_Dumping_switch_memory_completed___0000617c);
  return;
}



/* Function: FUN_0000600a */

undefined4 FUN_0000600a(undefined4 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = DAT_000061a4;
  uVar3 = (uint)*(ushort *)(DAT_000061a4 + 100);
  *(short *)(DAT_000061a4 + 100) = (short)(uVar3 + 1);
  if (199 < (uVar3 + 1 & 0xffff)) {
    if (*(short *)(iVar4 + 0x66) != 0) {
      FUN_00005e98();
    }
    *(undefined2 *)(iVar4 + 100) = 0;
  }
  if (uVar3 < 200) {
    iVar4 = DAT_00006124 + uVar3 * 0x10;
    *(undefined2 *)(iVar4 + 0x3c4) = 0x20;
    uVar1 = FUN_00006c82();
    *(undefined2 *)(iVar4 + 0x3c6) = uVar1;
    *(undefined4 *)(iVar4 + 0x3c8) = param_1;
    *(undefined4 *)(iVar4 + 0x3cc) = 0;
    uVar2 = thunk_FUN_00006d14();
    *(undefined4 *)(iVar4 + 0x3d0) = uVar2;
  }
  return param_1;
}



/* Function: FUN_0000605e */

void FUN_0000605e(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_1 & 0xf) == 0xd) {
    uVar1 = *(undefined4 *)(param_3 + 0x18);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x20);
  }
  *DAT_000061b4 = uVar1;
  return;
}



/* Function: FUN_00006070 */

void FUN_00006070(undefined2 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = DAT_000061a4;
  uVar4 = (uint)*(ushort *)(DAT_000061a4 + 100);
  *(short *)(DAT_000061a4 + 100) = (short)(uVar4 + 1);
  if (199 < (uVar4 + 1 & 0xffff)) {
    *(undefined2 *)(iVar5 + 100) = 0;
  }
  if (uVar4 < 200) {
    iVar5 = DAT_00006124 + uVar4 * 0x10;
    *(undefined2 *)(iVar5 + 0x3c4) = param_1;
    uVar2 = FUN_00006c82();
    *(undefined2 *)(iVar5 + 0x3c6) = uVar2;
    puVar1 = DAT_000061b4;
    *(undefined4 *)(iVar5 + 0x3c8) = param_2;
    *(undefined4 *)(iVar5 + 0x3cc) = *puVar1;
    uVar3 = thunk_FUN_00006d14();
    *(undefined4 *)(iVar5 + 0x3d0) = uVar3;
    return;
  }
  return;
}



/* Function: FUN_000060ba */

void FUN_000060ba(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = DAT_000061a4;
  uVar1 = *(ushort *)(DAT_000061a4 + 100);
  iVar4 = func_0x0002c340();
  if (iVar4 != 0) {
    return;
  }
  uVar2 = *(short *)(iVar6 + 100) + 1;
  *(ushort *)(iVar6 + 100) = uVar2;
  if (199 < uVar2) {
    if (*(short *)(iVar6 + 0x66) != 0) {
      FUN_00005e98();
    }
    *(undefined2 *)(iVar6 + 100) = 0;
  }
  if (199 < uVar1) {
    return;
  }
  iVar6 = DAT_00006124 + (uint)uVar1 * 0x10;
  *(undefined2 *)(iVar6 + 0x3c4) = 0x70;
  uVar3 = FUN_00006c82();
  *(undefined2 *)(iVar6 + 0x3c6) = uVar3;
  *(undefined4 *)(iVar6 + 0x3c8) = param_1;
  *(undefined4 *)(iVar6 + 0x3cc) = param_2;
  uVar5 = thunk_FUN_00006d14();
  *(undefined4 *)(iVar6 + 0x3d0) = uVar5;
  return;
}



/* Function: FUN_00006598 */

void FUN_00006598(int param_1)

{
  FUN_00006070(0x30,param_1);
  if (((*(uint *)(DAT_00006640 + 0xc4) & 0xf) == 7) &&
     ((*(uint *)(DAT_00006644 + 0xc4) & 0x1f00000) == 0x700000)) {
    func_0x0002bda0();
  }
  if (param_1 != 0) {
    *(undefined4 *)(DAT_00006648 + 0x5c) = 4;
  }
  (**(code **)(DAT_0000662c + param_1 * 0xc + 8))(param_1);
  FUN_00006070(0x40,0);
  return;
}



/* Function: FUN_000065ea */

undefined4 FUN_000065ea(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(DAT_0000662c + param_1 * 0xc + 8) = param_2;
    return 0;
  }
  return 0xf;
}



/* Function: thunk_FUN_00006964 */

void thunk_FUN_00006964(uint param_1)

{
  int iVar1;
  
  if (*DAT_00006a4c < param_1 >> 5) {
    return;
  }
  iVar1 = (param_1 >> 5) * 4;
  *(uint *)(iVar1 + -0x1fff1f00) = *(uint *)(iVar1 + -0x1fff1f00) | 1 << (param_1 & 0x1f);
  return;
}



/* Function: FUN_00006664 */

void FUN_00006664(void)

{
  undefined4 *puVar1;
  
  FUN_00005b9c();
  FUN_00006770();
  puVar1 = DAT_0000668c;
  *DAT_0000668c = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



/* Function: FUN_00006758 */

undefined4 FUN_00006758(void)

{
  *(undefined4 *)(DAT_0000676c + 4) = 0;
  FUN_000071f8();
  return 0;
}



/* Function: thunk_FUN_00006860 */

void thunk_FUN_00006860(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_00006758();
  FUN_00005e04();
  func_0x0002c348();
  FUN_00008494();
  func_0x0002c34c();
  iStack_30 = 0;
  iStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_28 = func_0x0002c388();
  uStack_24 = 0;
  uStack_20 = DAT_000097c4;
  uStack_1c = DAT_000097c8;
  iVar4 = func_0x0002c38c(&uStack_28);
  piVar2 = DAT_000097c0;
  *DAT_000097c0 = iVar4;
  iVar4 = FUN_00006790(&iStack_30,&iStack_2c);
  uVar3 = DAT_00009838;
  if (iVar4 == 0) {
    if (iStack_2c != 0) {
      puVar6 = (undefined4 *)(iStack_30 + 4);
      pcVar9 = (char *)(iStack_30 + 1);
      iVar5 = 0;
      iVar4 = iStack_2c;
      do {
        cVar1 = *pcVar9;
        if (cVar1 != '\0') {
          uVar7 = *(undefined4 *)(*piVar2 + 0x20);
        }
        else {
          uVar7 = *(undefined4 *)(*piVar2 + 0x10);
        }
        *puVar6 = uVar7;
        iVar8 = iStack_30 + iVar5 * 0x20;
        if (cVar1 != '\0') {
          *(undefined4 *)(iVar8 + 8) = 0;
        }
        else {
          *(undefined4 *)(iVar8 + 8) = uVar3;
        }
        iVar4 = iVar4 + -1;
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 8;
        pcVar9 = pcVar9 + 0x20;
      } while (iVar4 != 0);
    }
    FUN_00009af2(iStack_30,iStack_2c);
    thunk_FUN_00006964(*(undefined4 *)(iStack_30 + 4));
    func_0x0002c390();
    FUN_0000a21c();
    return;
  }
  FUN_000078c0(s_sipc_c__sipc_get_smsg_cfg__error_000097cc);
  FUN_000078c0(s_sipc_c__sipc_init__error_no_sipc_00009808);
  return;
}



/* Function: FUN_00006770 */

void FUN_00006770(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00006784;
  DAT_00006784[4] = 0;
  puVar1[5] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



/* Function: FUN_00006788 */

undefined4 FUN_00006788(void)

{
  return 0;
}



/* Function: FUN_0000678c */

undefined4 FUN_0000678c(void)

{
  return DAT_00006800;
}



/* Function: FUN_00006790 */

undefined4 FUN_00006790(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = DAT_00006804;
  if (param_2 != (undefined4 *)0x0 && param_1 != (undefined4 *)0x0) {
    puVar2 = DAT_00006804 + 0x50;
    *DAT_00006804 = 0;
    *(undefined1 **)(puVar1 + 0x14) = puVar2;
    *(undefined1 **)(puVar1 + 0x18) = puVar1 + 0x40;
    *(undefined1 **)(puVar1 + 0x1c) = puVar1 + 0x44;
    *(undefined4 *)(puVar1 + 0xc) = 8;
    *(undefined4 *)(puVar1 + 0x10) = 0xff;
    puVar1[1] = 1;
    puVar1[0x20] = 0;
    *(undefined4 *)(puVar1 + 0x2c) = 8;
    *(undefined4 *)(puVar1 + 0x30) = 0xff;
    *(undefined1 **)(puVar1 + 0x34) = puVar1 + 0x848;
    *(undefined1 **)(puVar1 + 0x38) = puVar1 + 0x48;
    *(undefined1 **)(puVar1 + 0x3c) = puVar1 + 0x4c;
    puVar1[0x21] = 0;
    *param_2 = 2;
    *param_1 = puVar1;
    return 0;
  }
  FUN_000078c0(s_mem_prod_pm_c___invalid_input_pa_00006808);
  FUN_000078c0(s_mem_prod_pm_c___MEM_GetSmsgCfg__i_0000682c);
  return 0xffffffff;
}



/* Function: FUN_00006860 */

void FUN_00006860(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_00006758();
  FUN_00005e04();
  func_0x0002c348();
  FUN_00008494();
  func_0x0002c34c();
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_28 = func_0x0002c388();
  local_24 = 0;
  local_20 = DAT_000097c4;
  local_1c = DAT_000097c8;
  iVar4 = func_0x0002c38c(&local_28);
  piVar2 = DAT_000097c0;
  *DAT_000097c0 = iVar4;
  iVar4 = FUN_00006790(&local_30,&local_2c);
  uVar3 = DAT_00009838;
  if (iVar4 == 0) {
    if (local_2c != 0) {
      puVar6 = (undefined4 *)(local_30 + 4);
      pcVar9 = (char *)(local_30 + 1);
      iVar5 = 0;
      iVar4 = local_2c;
      do {
        cVar1 = *pcVar9;
        if (cVar1 != '\0') {
          uVar7 = *(undefined4 *)(*piVar2 + 0x20);
        }
        else {
          uVar7 = *(undefined4 *)(*piVar2 + 0x10);
        }
        *puVar6 = uVar7;
        iVar8 = local_30 + iVar5 * 0x20;
        if (cVar1 != '\0') {
          *(undefined4 *)(iVar8 + 8) = 0;
        }
        else {
          *(undefined4 *)(iVar8 + 8) = uVar3;
        }
        iVar4 = iVar4 + -1;
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 8;
        pcVar9 = pcVar9 + 0x20;
      } while (iVar4 != 0);
    }
    FUN_00009af2(local_30,local_2c);
    thunk_FUN_00006964(*(undefined4 *)(local_30 + 4));
    func_0x0002c390();
    FUN_0000a21c();
    return;
  }
  FUN_000078c0(s_sipc_c__sipc_get_smsg_cfg__error_000097cc);
  FUN_000078c0(s_sipc_c__sipc_init__error_no_sipc_00009808);
  return;
}



/* Function: FUN_00006880 */

void FUN_00006880(undefined4 param_1)

{
  FUN_000078c0(&DAT_000068b4,param_1);
  return;
}



/* Function: thunk_FUN_00006d14 */

undefined4 thunk_FUN_00006d14(void)

{
  return *(undefined4 *)(DAT_00006eec + 0xc);
}



/* Function: FUN_00006964 */

void FUN_00006964(uint param_1)

{
  int iVar1;
  
  if (*DAT_00006a4c < param_1 >> 5) {
    return;
  }
  iVar1 = (param_1 >> 5) * 4;
  *(uint *)(iVar1 + -0x1fff1f00) = *(uint *)(iVar1 + -0x1fff1f00) | 1 << (param_1 & 0x1f);
  return;
}



/* Function: FUN_00006a82 */

int FUN_00006a82(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = DAT_00006e40;
  piVar1 = DAT_00006e3c;
  if (2 < param_1) {
    return 0xbc4;
  }
  iVar6 = 0;
  if (*DAT_00006e3c == 0) {
    *DAT_00006e40 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    iVar3 = func_0x0002c35c();
    *piVar1 = iVar3;
  }
  piVar5 = puVar2 + param_1 * 4;
  if ((char)piVar5[2] == '\0') {
    iVar3 = func_0x0002c360(param_1);
    *piVar5 = iVar3;
    if (iVar3 == 0) {
      uVar4 = func_0x0002c334(s_timer_state_is_NULL_00006e44);
      func_0x0002c338(s_timer_dev_timer_id__timer_st____N_00006e64,s_timer_hal_c_00006e58,0xd4,uVar4
                     );
    }
    if ((*(int *)*piVar5 == 0x8000) || (*(int *)*piVar5 + DAT_00006e8c != 0)) {
      piVar5[1] = 1;
    }
    else {
      piVar5[1] = 0;
    }
    iVar3 = (**(code **)*piVar1)(param_1);
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*piVar1 + 0x10))(param_1,*piVar5);
      if (iVar3 == 0) {
        iVar3 = func_0x0002c364(param_1);
        if (iVar3 != 0xffff) {
          iVar6 = FUN_000065ea(iVar3,DAT_00006e90);
        }
        if (iVar6 == 0 || iVar6 == 0xe) {
          *(undefined1 *)(piVar5 + 2) = 1;
          iVar6 = 0;
        }
        return iVar6;
      }
      return 0xbbd;
    }
    return 0xbbc;
  }
  return 0;
}



/* Function: FUN_00006a8c */

int FUN_00006a8c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = DAT_00006e40;
  piVar1 = DAT_00006e3c;
  iVar6 = 0;
  if (*DAT_00006e3c == 0) {
    *DAT_00006e40 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    iVar3 = func_0x0002c35c();
    *piVar1 = iVar3;
  }
  piVar5 = puVar2 + param_1 * 4;
  if ((char)piVar5[2] != '\0') {
    return 0;
  }
  iVar3 = func_0x0002c360(param_1);
  *piVar5 = iVar3;
  if (iVar3 == 0) {
    uVar4 = func_0x0002c334(s_timer_state_is_NULL_00006e44);
    func_0x0002c338(s_timer_dev_timer_id__timer_st____N_00006e64,s_timer_hal_c_00006e58,0xd4,uVar4);
  }
  if ((*(int *)*piVar5 == 0x8000) || (*(int *)*piVar5 + DAT_00006e8c != 0)) {
    piVar5[1] = 1;
  }
  else {
    piVar5[1] = 0;
  }
  iVar3 = (**(code **)*piVar1)(param_1);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*piVar1 + 0x10))(param_1,*piVar5);
    if (iVar3 == 0) {
      iVar3 = func_0x0002c364(param_1);
      if (iVar3 != 0xffff) {
        iVar6 = FUN_000065ea(iVar3,DAT_00006e90);
      }
      if (iVar6 == 0 || iVar6 == 0xe) {
        *(undefined1 *)(piVar5 + 2) = 1;
        iVar6 = 0;
      }
      return iVar6;
    }
    return 0xbbd;
  }
  return 0xbbc;
}



/* Function: FUN_00006b56 */

undefined4 FUN_00006b56(uint param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  if (2 < param_1) {
    return 0xbc4;
  }
  piVar5 = (int *)(DAT_00006e40 + param_1 * 0x10);
  if ((char)piVar5[2] == '\0') {
    return 0xbc0;
  }
  FUN_0000b552((char)piVar5[2]);
  if (param_2 == 0x3e9) {
    if (param_3 != (int *)0x0) {
      iVar1 = FUN_00006d1a(param_1,param_3);
      uVar7 = 0;
      if (iVar1 != 0) {
        uVar7 = 0xbbb;
      }
      goto LAB_00006ba4;
    }
  }
  else {
    if (param_2 == 0x3ea) {
      (**(code **)(*DAT_00006e3c + 4))(param_1);
      goto LAB_00006ba4;
    }
    if (param_2 == 0x3eb) {
      (**(code **)(*DAT_00006e3c + 8))(param_1);
      goto LAB_00006ba4;
    }
    if (param_2 != 0x3ec) {
      uVar7 = 0xbc2;
      goto LAB_00006ba4;
    }
    if (param_3 != (int *)0x0) {
      (**(code **)(*DAT_00006e3c + 0x10))(param_1,*piVar5);
      uVar6 = 0;
      uVar2 = ((uint *)*piVar5)[4];
      uVar4 = *(uint *)*piVar5;
      if (uVar2 != 0) {
        if (piVar5[1] == 1) {
          uVar6 = ((uVar2 - uVar4 * (uVar2 / uVar4)) * 1000) / uVar4 + (uVar2 / uVar4) * 1000;
        }
        else {
          uVar4 = uVar4 / 1000;
          uVar6 = ((uVar2 - (uVar2 / uVar4) * uVar4) * 1000) / uVar4 + (uVar2 / uVar4) * 1000;
        }
      }
      if (piVar5[1] == *param_3) {
        param_3[1] = uVar6;
      }
      else {
        if (piVar5[1] == 1 && *param_3 == 0) {
          if (DAT_00006e94 <= uVar2) {
            uVar3 = func_0x0002c334(s_remaining_result_overflow_00006e98);
            func_0x0002c338(s_cnt_<_(0xFFFFFFFF_TIMER_MICSEC_P_00006ec0,s_timer_hal_c_00006eb4,0x95,
                            uVar3);
          }
          uVar6 = uVar6 * 1000;
        }
        else {
          uVar6 = uVar6 / 1000;
        }
        param_3[1] = uVar6;
      }
      goto LAB_00006ba4;
    }
  }
  uVar7 = 0xbb9;
LAB_00006ba4:
  FUN_0000b526();
  return uVar7;
}



/* Function: FUN_00006c82 */

undefined4 FUN_00006c82(void)

{
  return *(undefined4 *)(DAT_00006ef0 + 4);
}



/* Function: FUN_00006c88 */

void FUN_00006c88(uint param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint local_28;
  int local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  int iStack_18;
  
  if (param_4 == 0) {
    func_0x0002c344(s_NULL____func_ptr_00006ef4,s_timer_hal_c_00006e58,0x176);
  }
  if (2 < param_1) {
    func_0x0002c344(s_timer_id_<_TIMER_MAX_00006f08,s_timer_hal_c_00006e58,0x177);
  }
  if (1 < param_3) {
    func_0x0002c344(s__TIMER_PERIOD_MODE____mode_______00006f20,s_timer_hal_c_00006e58,0x178);
  }
  if (param_2 == 0) {
    func_0x0002c344(s_mil_sec____0_00006f5c,s_timer_hal_c_00006e58,0x179);
  }
  uStack_20 = 1;
  local_1c = 0;
  local_28 = param_3;
  local_24 = param_2;
  iStack_18 = param_4;
  iVar1 = FUN_00006a82(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_00006b56(param_1,0x3e9,&local_28);
    if (iVar1 == 0) {
      FUN_00006b56(param_1,0x3ea,0);
      return;
    }
    return;
  }
  return;
}



/* Function: FUN_00006d14 */

undefined4 FUN_00006d14(void)

{
  return *(undefined4 *)(DAT_00006eec + 0xc);
}



/* Function: FUN_00006d1a */

undefined4 FUN_00006d1a(uint param_1,undefined4 *param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  puVar6 = (undefined4 *)(DAT_00006e40 + param_1 * 0x10);
  iVar3 = func_0x0002c364(param_1);
  piVar2 = DAT_00006e3c;
  if (2 < param_1) {
    return 0xbc4;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 0xbb9;
  }
  (**(code **)(*DAT_00006e3c + 8))(param_1);
  (**(code **)(*piVar2 + 0x14))(param_1);
  if ((param_2[3] == 0) && (iVar3 != 0xffff)) {
    (**(code **)(*piVar2 + 0x1c))(param_1,iVar3);
  }
  uVar5 = param_2[1];
  uVar4 = *(uint *)*puVar6;
  if (uVar5 == 0) {
LAB_00006d9c:
    lVar1 = 0;
  }
  else {
    if (param_2[2] == 0) {
      if ((puVar6[1] == 1) && (uVar5 < 0x20)) goto LAB_00006d9c;
    }
    else if (param_2[2] == 1) {
      lVar1 = (ulonglong)(uVar5 / 1000) * (ulonglong)uVar4 +
              (ulonglong)(((uVar5 % 1000) * uVar4) / 1000);
      goto LAB_00006e18;
    }
    uVar7 = uVar5 - DAT_00006f6c * (uVar5 / DAT_00006f6c);
    lVar1 = (ulonglong)(uVar5 / DAT_00006f6c) * (ulonglong)uVar4 +
            (ulonglong)(uVar7 / 1000) * (ulonglong)(uVar4 / 1000) +
            (ulonglong)(((uVar7 % 1000) * (uVar4 / 1000)) / 1000);
  }
LAB_00006e18:
  if (lVar1 == 0) {
    return 0xbc2;
  }
  puVar6[3] = param_2[4];
  (**(code **)(*piVar2 + 0xc))(param_1,*param_2);
  return 0;
}



/* Function: FUN_00006fc8 */

undefined4 FUN_00006fc8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00005640();
  FUN_00005646();
  uVar2 = *DAT_00006fe4;
  FUN_0000564c(uVar1);
  return uVar2;
}



/* Function: thunk_FUN_00006d14 */

undefined4 thunk_FUN_00006d14(void)

{
  return *(undefined4 *)(DAT_00006eec + 0xc);
}



/* Function: FUN_000071f8 */

void FUN_000071f8(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_r3;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = FUN_000093b4(DAT_000075d0,s_Static_Byte_Heap_000075bc,DAT_000075b8,*DAT_000075b4,in_r3);
  if (iVar4 != 0) {
    func_0x0002c344(s_SCI_SUCCESS____status_000075e4,s_threadx_mem_c_000075d4,0xd8);
  }
  iVar4 = FUN_000093b4(DAT_00007618,s_Dynamic_App_Heap_00007604,DAT_00007600,*DAT_000075fc,in_r3);
  if (iVar4 != 0) {
    func_0x0002c344(s_SCI_SUCCESS____status_000075e4,s_threadx_mem_c_000075d4,0xe6);
  }
  iVar3 = DAT_00007628;
  iVar2 = DAT_00007624;
  iVar4 = DAT_00007620;
  puVar1 = DAT_0000761c;
  uVar6 = 0;
  if (*DAT_0000761c != 0) {
    do {
      iVar8 = iVar2 + uVar6 * 4;
      *(undefined4 *)(iVar4 + uVar6 * 4) = 0;
      if (*(short *)(iVar8 + 2) != 0) {
        iVar7 = iVar3 + uVar6 * 0x20;
        func_0x0002c36c(iVar7,s_pool__ld_heap_0000762c,*(undefined2 *)(iVar2 + uVar6 * 4));
        uVar5 = (uint)*(ushort *)(iVar2 + uVar6 * 4);
        iVar8 = FUN_000095a8(DAT_00007640 + uVar6 * 0x34,iVar7,uVar5 + 0x18,
                             *(undefined4 *)(DAT_0000763c + uVar6 * 4),
                             (uVar5 + 0x1c) * (uint)*(ushort *)(iVar8 + 2));
        if (iVar8 != 0) {
          func_0x0002c344(s_SCI_SUCCESS____status_000075e4,s_threadx_mem_c_000075d4,0x10b);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *puVar1);
  }
  iVar4 = DAT_00007644;
  *(int *)(DAT_00007644 + 4) = DAT_00007644;
  *(int *)iVar4 = iVar4;
  *DAT_00007648 = 0;
  return;
}



/* Function: FUN_000072be */

int FUN_000072be(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*DAT_0000761c != 0) {
    uVar2 = 0;
    uVar1 = (byte)*DAT_0000761c & 1;
    if (((byte)*DAT_0000761c & 1) != 0) {
      do {
        if ((param_1 <= *(ushort *)(DAT_00007624 + uVar2 * 4)) &&
           (*(short *)(DAT_00007624 + uVar2 * 4 + 2) != 0)) {
          return (int)(short)uVar2;
        }
        uVar2 = uVar2 + 1 & 0xffff;
      } while (uVar2 < uVar1);
    }
    if (uVar1 < *DAT_0000761c) {
      do {
        if ((param_1 <= *(ushort *)(DAT_00007624 + uVar1 * 4)) &&
           (*(short *)(DAT_00007624 + uVar1 * 4 + 2) != 0)) {
          return (int)(short)uVar1;
        }
        iVar3 = DAT_00007624 + uVar1 * 4;
        if ((param_1 <= *(ushort *)(iVar3 + 4)) && (*(short *)(iVar3 + 6) != 0)) {
          return (int)(short)((short)uVar1 + 1);
        }
        uVar1 = uVar1 + 2 & 0xffff;
      } while (uVar1 < *DAT_0000761c);
    }
  }
  return -1;
}



/* Function: FUN_00007344 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00007344(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_a8 [124];
  int local_2c [2];
  
  uVar9 = param_1 + 1;
  local_2c[0] = 0;
  FUN_00008490(0);
  iVar3 = FUN_000072be(uVar9);
  iVar6 = DAT_00007640;
  piVar1 = DAT_0000761c;
  if (iVar3 == -1) {
    uVar5 = DAT_000075d0;
    if ((param_2 != 0x22222222) && (uVar5 = DAT_00007618, param_2 != 0x44444444)) goto LAB_00007438;
  }
  else {
    if (*DAT_0000761c <= iVar3) goto LAB_00007438;
    do {
      iVar4 = FUN_00009500(iVar6 + iVar3 * 0x34,local_2c,0);
      if (iVar4 != 0x10) goto joined_r0x0000739a;
      iVar3 = (int)(short)((short)iVar3 + 1);
      uVar5 = DAT_00007618;
    } while (iVar3 < *piVar1);
  }
  iVar4 = FUN_0000944c(uVar5,local_2c,param_1 + 0x19,0);
joined_r0x0000739a:
  if (iVar4 != 0) {
    iVar6 = FUN_0000aac0();
    iVar3 = *DAT_0000764c;
    if (iVar3 != 0) {
      iVar8 = *(int *)(iVar3 + -8);
      iVar4 = DAT_00007650;
      if (iVar8 != DAT_00007650) {
        iVar4 = _DAT_00007654;
      }
      if (iVar8 == DAT_00007650 || iVar8 == iVar4) {
        *(undefined4 *)(iVar3 + 0x110) = *(undefined4 *)(iVar6 + 4);
      }
    }
    iVar4 = func_0x0002c36c(auStack_a8,s_ASSERT_Error_0x_lx__00007657 + 1);
    iVar3 = func_0x0002c370(iVar6 + 8);
    if (0x78 - iVar4 < iVar3) {
      iVar3 = 0x78 - iVar4;
    }
    func_0x0002c374(auStack_a8 + iVar4,iVar6 + 8,iVar3);
    auStack_a8[iVar4 + iVar3] = 0;
    func_0x0002c344(auStack_a8,s_RTOS_source_src_c_threadx_mem_c_0000766c,0x229);
    return local_2c[0];
  }
LAB_00007438:
  iVar6 = local_2c[0];
  if (local_2c[0] != 0) {
    iVar3 = *DAT_00007648;
    *DAT_00007648 = iVar3 + 1;
    *(uint *)(local_2c[0] + 0x10) = uVar9;
    *(int *)(local_2c[0] + 0x14) = iVar3 + 1;
    *(undefined4 *)(local_2c[0] + 8) = param_3;
    *(undefined4 *)(local_2c[0] + 0xc) = param_4;
    FUN_000077e4(local_2c[0]);
    puVar2 = DAT_00007690;
    *(undefined1 *)(local_2c[0] + param_1 + 0x19 + -1) = 0xaa;
    local_2c[0] = iVar6 + 0x18;
    uVar7 = *DAT_0000768c;
    if (uVar9 / uVar7 < *puVar2) {
      *(int *)(DAT_00007694 + (uVar9 / uVar7) * 4) =
           *(int *)(DAT_00007694 + (uVar9 / uVar7) * 4) + 1;
    }
  }
  return local_2c[0];
}



/* Function: FUN_0000748a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000748a(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int extraout_r2;
  int extraout_r3;
  int *piVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uStack_a0;
  
  uVar2 = FUN_00008490(1);
  if (param_1 == 0) {
    return 0;
  }
  piVar10 = (int *)(param_1 + -0x18);
  uVar2 = FUN_00005640(uVar2);
  FUN_00005646();
  iVar3 = FUN_000072be(*(undefined4 *)(param_1 + -8));
  if (iVar3 != -1) {
    *(int *)(DAT_00007620 + iVar3 * 4) = *(int *)(DAT_00007620 + iVar3 * 4) + -1;
  }
  *(undefined4 *)(*piVar10 + 4) = *(undefined4 *)(param_1 + -0x14);
  **(int **)(param_1 + -0x14) = *piVar10;
  *piVar10 = 0;
  *(undefined4 *)(param_1 + -0x14) = 0;
  FUN_0000564c(uVar2);
  iVar3 = DAT_0000769c;
  uVar4 = *(uint *)(param_1 + -8) / *DAT_0000768c & 0xffff;
  if (uVar4 < *DAT_00007690) {
    iVar8 = *(int *)(DAT_00007698 + uVar4 * 4) + 1;
    *(int *)(DAT_00007698 + uVar4 * 4) = iVar8;
    uVar9 = *(int *)(DAT_00007694 + uVar4 * 4) - iVar8;
    uVar6 = *(uint *)(iVar3 + uVar4 * 4);
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    *(uint *)(iVar3 + uVar4 * 4) = uVar6;
  }
  iVar3 = DAT_00007650;
  piVar1 = DAT_0000764c;
  if (*(char *)((int)piVar10 + *(int *)(param_1 + -8) + 0x17) != -0x56) {
    uStack_a0 = *(int *)(param_1 + -8) + -1;
    FUN_000078c0(DAT_000076a0,piVar10,*(undefined4 *)(param_1 + -0x10),
                 *(undefined4 *)(param_1 + -0xc));
    iVar8 = FUN_0000aac0(0xff);
    if (iVar8 == 0) {
      iVar8 = func_0x0002c36c(&uStack_a0,s_ASSERT__Error_0x_lx__000076a4,0xff);
      iVar11 = func_0x0002c370(*(undefined4 *)(param_1 + -0x10));
      if (0x5a - iVar8 < iVar11) {
        iVar11 = 0x5a - iVar8;
      }
      func_0x0002c374((int)&uStack_a0 + iVar8,*(undefined4 *)(param_1 + -0x10),iVar11);
      iVar5 = func_0x0002c36c((int)&uStack_a0 + iVar8 + iVar11,s___line__lu__param_0x_lX_00007854,
                              *(undefined4 *)(param_1 + -0xc),param_1);
      *(undefined1 *)((int)&uStack_a0 + iVar5 + iVar8 + iVar11) = 0;
      func_0x0002c344(&uStack_a0,s_RTOS_source_src_c_threadx_mem_c_0000766c,0x2f2);
    }
    else {
      iVar7 = *piVar1;
      iVar5 = *(int *)(iVar7 + -8);
      iVar11 = extraout_r3;
      if (iVar5 != iVar3) {
        iVar11 = _DAT_00007654;
      }
      if (iVar5 == iVar3 || iVar5 == iVar11) {
        *(undefined4 *)(iVar7 + 0x110) = *(undefined4 *)(iVar8 + 4);
      }
      iVar7 = func_0x0002c36c(&uStack_a0,s_ASSERT__Error_0x_lx__000076a4);
      iVar5 = func_0x0002c370(iVar8 + 8);
      bVar13 = SBORROW4(iVar5,0x3c);
      iVar11 = iVar5 + -0x3c;
      bVar12 = iVar5 == 0x3c;
      if (iVar5 < 0x3d) {
        bVar13 = SBORROW4(iVar5,0x1f);
        iVar11 = iVar5 + -0x1f;
        bVar12 = iVar5 == 0x1f;
      }
      if (!bVar12 && iVar11 < 0 == bVar13) {
        iVar5 = 0x1f;
      }
      func_0x0002c374((int)&uStack_a0 + iVar7,iVar8 + 8,iVar5);
      iVar7 = iVar7 + iVar5;
      *(undefined1 *)((int)&uStack_a0 + iVar7) = 0x2c;
      iVar11 = iVar7 + 1;
      iVar8 = func_0x0002c370(*(undefined4 *)(param_1 + -0x10));
      if (0x5a - iVar11 < iVar8) {
        iVar8 = 0x5a - iVar11;
      }
      func_0x0002c374((int)&uStack_a0 + iVar7 + 1,*(undefined4 *)(param_1 + -0x10),iVar8);
      iVar5 = func_0x0002c36c((int)&uStack_a0 + iVar8 + iVar11,s___line__lu__param_0x_lX_00007854,
                              *(undefined4 *)(param_1 + -0xc),param_1);
      *(undefined1 *)((int)&uStack_a0 + iVar5 + iVar8 + iVar11) = 0;
      func_0x0002c344(&uStack_a0,s_RTOS_source_src_c_threadx_mem_c_0000766c,0x2f2);
    }
  }
  if (((int)piVar10 - DAT_0000786c < 1) || (*DAT_00007870 <= (int)piVar10 - DAT_0000786c)) {
    if (((int)piVar10 - DAT_00007874 < 1) || (*DAT_00007878 <= (int)piVar10 - DAT_00007874)) {
      iVar8 = FUN_0000967c(piVar10);
    }
    else {
      iVar8 = FUN_000092a4(piVar10);
    }
  }
  else {
    iVar8 = FUN_000092a4(piVar10);
  }
  uVar2 = 0;
  if (iVar8 != 0) {
    iVar8 = FUN_0000aac0();
    uVar2 = *(undefined4 *)(iVar8 + 4);
    iVar11 = *piVar1;
    if (iVar11 != 0) {
      iVar7 = *(int *)(iVar11 + -8);
      iVar5 = extraout_r2;
      if (iVar7 != iVar3) {
        iVar5 = DAT_0000787c;
      }
      if (iVar7 == iVar3 || iVar7 == iVar5) {
        *(undefined4 *)(iVar11 + 0x110) = uVar2;
      }
    }
    iVar3 = func_0x0002c36c(&uStack_a0,s_ASSERT_Error_0x_lx__00007657 + 1,uVar2);
    iVar11 = func_0x0002c370(iVar8 + 8);
    if (0x78 - iVar3 < iVar11) {
      iVar11 = 0x78 - iVar3;
    }
    func_0x0002c374((int)&uStack_a0 + iVar3,iVar8 + 8,iVar11);
    *(undefined1 *)((int)&uStack_a0 + iVar3 + iVar11) = 0;
    func_0x0002c344(&uStack_a0,s_RTOS_source_src_c_threadx_mem_c_0000766c,0x309);
  }
  return uVar2;
}



/* Function: FUN_000077e4 */

void FUN_000077e4(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = FUN_00005640();
  FUN_00005646();
  uVar5 = param_1[4];
  uVar3 = uVar5 / *DAT_00007880 & 0xffff;
  if (uVar3 < *DAT_00007884) {
    uVar6 = *(int *)(DAT_00007888 + uVar3 * 4) - *(int *)(DAT_0000788c + uVar3 * 4);
    if (*(uint *)(DAT_00007890 + uVar3 * 4) < uVar6) {
      *(uint *)(DAT_00007890 + uVar3 * 4) = uVar6;
    }
  }
  iVar4 = FUN_000072be(uVar5);
  if (iVar4 != -1) {
    *(int *)(DAT_00007894 + iVar4 * 4) = *(int *)(DAT_00007894 + iVar4 * 4) + 1;
  }
  piVar1 = DAT_00007898;
  *(int **)(*DAT_00007898 + 4) = param_1;
  param_1[1] = (int)piVar1;
  *param_1 = *piVar1;
  *piVar1 = (int)param_1;
  FUN_0000564c(uVar2);
  return;
}



/* Function: FUN_000078c0 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_000078c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined2 uStack_128;
  short sStack_126;
  undefined1 auStack_124 [256];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (*DAT_00007984 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000078d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  uVar2 = FUN_0000b116();
  if (uVar2 == 0xffffffff) {
    uVar1 = thunk_FUN_00006d14();
    iVar3 = func_0x0002c378(auStack_124,0xfa,s__T__d__0000798c,uVar1);
    iVar4 = func_0x0002c37c(auStack_124 + iVar3,0xfa - iVar3,param_1,&uStack_c);
    iVar4 = iVar4 + iVar3;
  }
  else {
    uVar5 = 0x3bf;
    if (uVar2 < 0xc) {
      uVar5 = *(uint *)(DAT_00007988 + uVar2 * 4);
    }
    if ((uVar5 & 0x1f) < 0x1f) {
      *DAT_00007994 = *DAT_00007994 + 1;
      return 0;
    }
    uVar1 = thunk_FUN_00006d14();
    iVar3 = func_0x0002c378(auStack_124,0xfa,s__T__d__0000798c,uVar1);
    iVar4 = func_0x0002c37c(auStack_124 + iVar3,0xfa - iVar3,param_1,&uStack_c);
    iVar4 = iVar4 + iVar3;
  }
  if (0xf8 < iVar4) {
    iVar4 = 0xf9;
  }
  sStack_126 = (short)iVar4 + 5;
  uStack_128 = 0x9104;
  func_0x0002c380(&uStack_128,iVar4 + 5);
  return 0;
}



/* Function: FUN_00007998 */

undefined4 FUN_00007998(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  
  piVar8 = (int *)(param_1 + 8);
  uVar2 = FUN_00005640();
  FUN_00005646();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x18) == 0) goto LAB_00007a04;
  uVar3 = FUN_0000b99a();
  puVar1 = DAT_00007a10;
  piVar4 = *(int **)(param_1 + 0x18);
  if (piVar4 == piVar8) {
    iVar5 = -1;
    *DAT_00007a10 = 0;
LAB_000079ea:
    FUN_0000b986(iVar5);
  }
  else {
    iVar5 = 0;
    if (piVar8 == (int *)*DAT_00007a10) {
      piVar4[5] = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10) = *(undefined4 *)(param_1 + 0x18);
      puVar6 = *(uint **)(param_1 + 0x18);
      *puVar1 = puVar6;
      uVar7 = *puVar6;
      if (uVar3 < uVar7) {
        iVar5 = uVar7 - uVar3;
      }
      goto LAB_000079ea;
    }
    piVar4[5] = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10) = *(undefined4 *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *piVar8 = *piVar8 - uVar3;
LAB_00007a04:
  FUN_0000564c(uVar2);
  return 0;
}



/* Function: FUN_00007a8c */

void FUN_00007a8c(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar2 = FUN_00005640();
  FUN_00005646();
  if ((*param_1 != 0) && (param_1[4] == 0)) {
    uVar3 = FUN_0000b99a();
    uVar4 = *param_1 + uVar3;
    if (uVar4 < uVar3 || uVar4 < *param_1) {
      FUN_0000b9a8();
    }
    else {
      *param_1 = uVar4;
    }
    puVar1 = DAT_00007b20;
    puVar5 = (uint *)*DAT_00007b20;
    if (puVar5 == (uint *)0x0) {
      param_1[4] = (uint)param_1;
      param_1[5] = (uint)param_1;
      *puVar1 = (uint)param_1;
      FUN_0000b986(*param_1 - uVar3);
    }
    else {
      uVar4 = *puVar5;
      puVar6 = puVar5;
      if (*param_1 < uVar4) {
        param_1[4] = (uint)puVar5;
        uVar4 = puVar5[5];
        param_1[5] = uVar4;
        *(uint **)(uVar4 + 0x10) = param_1;
        *(uint **)(param_1[4] + 0x14) = param_1;
        *puVar1 = (uint)param_1;
        FUN_0000b986(*param_1 - uVar3);
      }
      else {
        while ((uVar4 <= *param_1 && (puVar6 = (uint *)puVar6[4], puVar6 != puVar5))) {
          uVar4 = *puVar6;
        }
        param_1[4] = (uint)puVar6;
        param_1[5] = puVar6[5];
        puVar6[5] = (uint)param_1;
        *(uint **)(param_1[5] + 0x10) = param_1;
      }
    }
  }
  FUN_0000564c(uVar2);
  return;
}



/* Function: FUN_00007c50 */

undefined4 FUN_00007c50(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = param_3;
  param_1[1] = param_2;
  param_1[0xc] = 0;
  uVar2 = FUN_00005640();
  FUN_00005646();
  puVar1 = DAT_00007cb8;
  *param_1 = DAT_00007cb0;
  *puVar1 = DAT_00007cb4;
  iVar3 = *DAT_00007cbc;
  *DAT_00007cbc = iVar3 + 1;
  if (iVar3 + 1 == 1) {
    *DAT_00007cc0 = (int)param_1;
    param_1[8] = param_1;
    param_1[9] = param_1;
  }
  else {
    iVar3 = *DAT_00007cc0;
    iVar4 = *(int *)(iVar3 + 0x24);
    *(undefined4 **)(iVar3 + 0x24) = param_1;
    *(undefined4 **)(iVar4 + 0x20) = param_1;
    param_1[8] = iVar3;
    param_1[9] = iVar4;
  }
  FUN_0000564c(uVar2);
  return 0;
}



/* Function: FUN_00007cc4 */

undefined4 FUN_00007cc4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined4 local_28;
  
  uVar10 = 0;
  local_28 = FUN_00005640();
  FUN_00005646();
  if (*(int *)(param_1 + 8) != 0) {
    iVar8 = *(int *)(param_1 + 0xc);
    iVar5 = *DAT_00007edc;
    bVar11 = iVar8 != iVar5;
    if (bVar11) {
      iVar5 = *(int *)(iVar8 + 0x30);
    }
    if (!bVar11 || iVar5 == 2) {
      iVar5 = *(int *)(param_1 + 8) + -1;
      *(int *)(param_1 + 8) = iVar5;
      piVar1 = DAT_00007ee0;
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 0x18);
        bVar11 = iVar5 == 0;
        if (bVar11) {
          iVar5 = *(int *)(param_1 + 0x10);
        }
        if (!bVar11 || iVar5 != 0) {
          if (iVar8 != 0) {
            uVar9 = *(uint *)(iVar8 + 0x98);
            iVar5 = 0;
            if (*(int *)(param_1 + 0x10) == 1) {
              iVar2 = *(int *)(iVar8 + 0xa4) + -1;
              *(int *)(iVar8 + 0xa4) = iVar2;
              if (iVar2 == 0) {
                *(undefined4 *)(iVar8 + 0xa8) = 0;
              }
              else {
                iVar2 = *(int *)(param_1 + 0x2c);
                iVar6 = *(int *)(param_1 + 0x30);
                *(int *)(iVar2 + 0x30) = iVar6;
                *(int *)(iVar6 + 0x2c) = iVar2;
                if (*(int *)(iVar8 + 0xa8) == param_1) {
                  *(int *)(iVar8 + 0xa8) = iVar2;
                }
              }
              *piVar1 = *piVar1 + 1;
              FUN_0000564c(local_28);
              iVar2 = *(int *)(iVar8 + 0xa8);
              iVar8 = iVar2;
              if (iVar2 != 0) {
                do {
                  if (*(uint *)(iVar8 + 0x28) < uVar9) {
                    uVar9 = *(uint *)(iVar8 + 0x28);
                  }
                  iVar8 = *(int *)(iVar8 + 0x2c);
                } while (iVar2 != iVar8 && iVar8 != 0);
              }
              local_28 = FUN_00005640();
              FUN_00005646();
              *piVar1 = *piVar1 + -1;
            }
            if ((1 < *(uint *)(param_1 + 0x1c)) && (*(int *)(param_1 + 0x10) == 1)) {
              *piVar1 = *piVar1 + 1;
              FUN_0000564c(local_28);
              uVar10 = FUN_00009168(param_1);
              local_28 = FUN_00005640();
              FUN_00005646();
              *piVar1 = *piVar1 + -1;
            }
            iVar8 = *(int *)(param_1 + 0x18);
            if (iVar8 == 0) {
              *piVar1 = *piVar1 + 1;
              FUN_0000564c(local_28);
              if (*(int *)(param_1 + 0x10) == 1) {
                *(undefined4 *)(param_1 + 0x28) = 0x20;
                if (*(uint *)(*(int *)(param_1 + 0xc) + 0x2c) != uVar9) {
                  FUN_0000909c(*(int *)(param_1 + 0xc),uVar9);
                }
              }
              uVar3 = FUN_00005640();
              FUN_00005646();
              *piVar1 = *piVar1 + -1;
              if (*(int *)(param_1 + 8) == 0) {
                *(undefined4 *)(param_1 + 0xc) = 0;
              }
              FUN_0000564c(uVar3);
              FUN_00008d70();
            }
            else {
              if (*(int *)(param_1 + 0x10) == 1) {
                iVar5 = *(int *)(param_1 + 0xc);
                *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar8 + 0x2c);
                iVar2 = *(int *)(iVar8 + 0xa4);
                if (iVar2 == 0) {
                  *(int *)(iVar8 + 0xa8) = param_1;
                  *(int *)(param_1 + 0x2c) = param_1;
                  *(int *)(param_1 + 0x30) = param_1;
                }
                else {
                  iVar6 = *(int *)(iVar8 + 0xa8);
                  iVar7 = *(int *)(iVar6 + 0x30);
                  *(int *)(iVar6 + 0x30) = param_1;
                  *(int *)(iVar7 + 0x2c) = param_1;
                  *(int *)(param_1 + 0x2c) = iVar6;
                  *(int *)(param_1 + 0x30) = iVar7;
                }
                *(int *)(iVar8 + 0xa4) = iVar2 + 1;
                *(undefined4 *)(param_1 + 0x28) = 0x20;
              }
              *(undefined4 *)(param_1 + 8) = 1;
              *(int *)(param_1 + 0xc) = iVar8;
              iVar2 = *(int *)(param_1 + 0x1c) + -1;
              *(int *)(param_1 + 0x1c) = iVar2;
              if (iVar2 == 0) {
                *(undefined4 *)(param_1 + 0x18) = 0;
              }
              else {
                iVar2 = *(int *)(iVar8 + 0x74);
                *(int *)(param_1 + 0x18) = iVar2;
                iVar6 = *(int *)(iVar8 + 0x78);
                *(int *)(iVar2 + 0x78) = iVar6;
                *(int *)(iVar6 + 0x74) = iVar2;
              }
              *(undefined4 *)(iVar8 + 0x6c) = 0;
              *(undefined4 *)(iVar8 + 0x88) = 0;
              *piVar1 = *piVar1 + 1;
              FUN_0000564c(local_28);
              if (*(int *)(param_1 + 0x10) == 1) {
                uVar4 = 0;
                if (*(int *)(param_1 + 0x1c) != 0) {
                  uVar10 = FUN_00009168(param_1);
                  uVar3 = FUN_00005640();
                  FUN_00005646();
                  if (*(int *)(param_1 + 0x18) != 0) {
                    *(undefined4 *)(param_1 + 0x28) =
                         *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x2c);
                  }
                  uVar4 = FUN_0000564c(uVar3);
                }
                if (iVar5 != 0) {
                  uVar4 = *(uint *)(iVar5 + 0x2c);
                }
                if (iVar5 != 0 && uVar4 != uVar9) {
                  FUN_0000909c(iVar5,uVar9);
                }
              }
              FUN_00008da0(iVar8);
            }
            return uVar10;
          }
          goto LAB_00007eca;
        }
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      FUN_0000564c(local_28);
      return 0;
    }
  }
LAB_00007eca:
  FUN_0000564c(local_28);
  return 0x1e;
}



/* Function: FUN_00007ee4 */

undefined4 FUN_00007ee4(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = FUN_00005640();
  FUN_00005646();
  piVar1 = DAT_00007fbc;
  *param_1 = 0;
  piVar2 = DAT_00007fc0;
  iVar4 = *piVar1 + -1;
  *piVar1 = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    iVar4 = param_1[8];
    iVar5 = param_1[9];
    *(int *)(iVar4 + 0x24) = iVar5;
    *(int *)(iVar5 + 0x20) = iVar4;
    if ((undefined4 *)*piVar2 == param_1) {
      *piVar2 = iVar4;
    }
  }
  iVar4 = param_1[3];
  if ((param_1[4] == 1) && (iVar4 != 0)) {
    iVar5 = *(int *)(iVar4 + 0xa4) + -1;
    *(int *)(iVar4 + 0xa4) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)(iVar4 + 0xa8) = 0;
    }
    else {
      iVar5 = param_1[0xb];
      iVar6 = param_1[0xc];
      *(int *)(iVar5 + 0x30) = iVar6;
      *(int *)(iVar6 + 0x2c) = iVar5;
      if (*(undefined4 **)(iVar4 + 0xa8) == param_1) {
        *(int *)(iVar4 + 0xa8) = iVar5;
      }
    }
  }
  piVar1 = DAT_00007fc4;
  param_1[3] = 0;
  *piVar1 = *piVar1 + 1;
  iVar4 = param_1[6];
  param_1[6] = 0;
  iVar5 = param_1[7];
  param_1[7] = 0;
  FUN_0000564c(uVar3);
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    uVar3 = FUN_00005640();
    FUN_00005646();
    *(undefined4 *)(iVar4 + 0x88) = 1;
    *(undefined4 *)(iVar4 + 0x6c) = 0;
    iVar6 = *(int *)(iVar4 + 0x74);
    *piVar1 = *piVar1 + 1;
    FUN_0000564c(uVar3);
    FUN_00008da0(iVar4);
    iVar4 = iVar6;
  }
  uVar3 = FUN_00005640();
  FUN_00005646();
  *piVar1 = *piVar1 + -1;
  FUN_0000564c(uVar3);
  FUN_00008d70();
  return 0;
}



/* Function: FUN_00007fc8 */

undefined4 FUN_00007fc8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = FUN_00005640();
  FUN_00005646();
  iVar5 = *DAT_000080b4;
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 1;
    *(int *)(param_1 + 0xc) = iVar5;
    if ((*(int *)(param_1 + 0x10) == 1) && (iVar5 != 0)) {
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar5 + 0x2c);
      iVar6 = *(int *)(iVar5 + 0xa8);
      if (iVar6 == 0) {
        *(int *)(iVar5 + 0xa8) = param_1;
        *(int *)(param_1 + 0x2c) = param_1;
        *(int *)(param_1 + 0x30) = param_1;
      }
      else {
        iVar2 = *(int *)(iVar6 + 0x30);
        *(int *)(iVar6 + 0x30) = param_1;
        *(int *)(iVar2 + 0x2c) = param_1;
        *(int *)(param_1 + 0x2c) = iVar6;
        *(int *)(param_1 + 0x30) = iVar2;
      }
      *(int *)(iVar5 + 0xa4) = *(int *)(iVar5 + 0xa4) + 1;
      *(undefined4 *)(param_1 + 0x28) = 0x20;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0xc);
    if (iVar6 != iVar5) {
      if (param_2 != 0) {
        *(undefined4 *)(iVar5 + 0x6c) = DAT_000080b8;
        *(int *)(iVar5 + 0x70) = param_1;
        iVar2 = *(int *)(param_1 + 0x1c);
        *(int *)(param_1 + 0x1c) = iVar2 + 1;
        if (iVar2 == 0) {
          *(int *)(param_1 + 0x18) = iVar5;
          *(int *)(iVar5 + 0x74) = iVar5;
          *(int *)(iVar5 + 0x78) = iVar5;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x18);
          *(int *)(iVar5 + 0x74) = iVar2;
          iVar4 = *(int *)(iVar2 + 0x78);
          *(int *)(iVar5 + 0x78) = iVar4;
          *(int *)(iVar4 + 0x74) = iVar5;
          *(int *)(iVar2 + 0x78) = iVar5;
        }
        *(int *)(iVar5 + 0x4c) = param_2;
        *(undefined4 *)(iVar5 + 0x38) = 1;
        *(undefined4 *)(iVar5 + 0x30) = 0xd;
        *DAT_000080bc = *DAT_000080bc + 1;
        FUN_0000564c(uVar1);
        if (*(int *)(param_1 + 0x10) == 1) {
          uVar3 = *(uint *)(iVar5 + 0x2c);
          if (*(uint *)(param_1 + 0x28) <= *(uint *)(iVar5 + 0x2c)) {
            uVar3 = *(uint *)(param_1 + 0x28);
          }
          *(uint *)(param_1 + 0x28) = uVar3;
          if (*(uint *)(iVar5 + 0x2c) < *(uint *)(iVar6 + 0x2c)) {
            FUN_0000909c(iVar6);
          }
        }
        FUN_00008c50(iVar5);
        return *(undefined4 *)(iVar5 + 0x88);
      }
      FUN_0000564c(uVar1);
      return 0x1d;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  FUN_0000564c(uVar1);
  return 0;
}



/* Function: FUN_000080c0 */

undefined4 FUN_000080c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[1] = param_2;
  param_1[8] = 0;
  uVar1 = FUN_00005640();
  FUN_00005646();
  *param_1 = DAT_00008114;
  iVar2 = *DAT_00008118;
  *DAT_00008118 = iVar2 + 1;
  if (iVar2 + 1 == 1) {
    *DAT_0000811c = (int)param_1;
    param_1[6] = param_1;
    param_1[7] = param_1;
  }
  else {
    iVar2 = *DAT_0000811c;
    iVar3 = *(int *)(iVar2 + 0x1c);
    *(undefined4 **)(iVar2 + 0x1c) = param_1;
    *(undefined4 **)(iVar3 + 0x18) = param_1;
    param_1[6] = iVar2;
    param_1[7] = iVar3;
  }
  FUN_0000564c(uVar1);
  return 0;
}



/* Function: FUN_00008120 */

undefined4 FUN_00008120(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = FUN_00005640();
  FUN_00005646();
  piVar1 = DAT_000081c4;
  *param_1 = 0;
  piVar2 = DAT_000081c8;
  iVar4 = *piVar1 + -1;
  *piVar1 = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    iVar4 = param_1[6];
    iVar5 = param_1[7];
    *(int *)(iVar4 + 0x1c) = iVar5;
    *(int *)(iVar5 + 0x18) = iVar4;
    if ((undefined4 *)*piVar2 == param_1) {
      *piVar2 = iVar4;
    }
  }
  piVar1 = DAT_000081cc;
  *DAT_000081cc = *DAT_000081cc + 1;
  iVar4 = param_1[4];
  param_1[4] = 0;
  iVar5 = param_1[5];
  param_1[5] = 0;
  FUN_0000564c(uVar3);
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    uVar3 = FUN_00005640();
    FUN_00005646();
    *(undefined4 *)(iVar4 + 0x88) = 1;
    *(undefined4 *)(iVar4 + 0x6c) = 0;
    iVar6 = *(int *)(iVar4 + 0x74);
    *piVar1 = *piVar1 + 1;
    FUN_0000564c(uVar3);
    FUN_00008da0(iVar4);
    iVar4 = iVar6;
  }
  uVar3 = FUN_00005640();
  FUN_00005646();
  *piVar1 = *piVar1 + -1;
  FUN_0000564c(uVar3);
  FUN_00008d70();
  return 0;
}



/* Function: FUN_000081d0 */

undefined4 FUN_000081d0(int param_1,uint param_2,uint param_3,uint *param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar1 = FUN_00005640();
  FUN_00005646();
  uVar5 = DAT_00008298;
  uVar2 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x20) != 0) {
    uVar2 = uVar2 & ~*(uint *)(param_1 + 0x20);
  }
  if ((((param_3 & 2) == 2) && ((uVar2 & param_2) != param_2)) || ((uVar2 & param_2) == 0)) {
    if (param_5 != 0) {
      iVar6 = *DAT_00008294;
      *(uint *)(iVar6 + 0x84) = param_3;
      *(undefined4 *)(iVar6 + 0x6c) = uVar5;
      *(int *)(iVar6 + 0x70) = param_1;
      *(uint *)(iVar6 + 0x7c) = param_2;
      *(uint **)(iVar6 + 0x80) = param_4;
      iVar3 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = iVar3 + 1;
      if (iVar3 == 0) {
        *(int *)(param_1 + 0x10) = iVar6;
        *(int *)(iVar6 + 0x74) = iVar6;
        *(int *)(iVar6 + 0x78) = iVar6;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x10);
        *(int *)(iVar6 + 0x74) = iVar3;
        iVar4 = *(int *)(iVar3 + 0x78);
        *(int *)(iVar6 + 0x78) = iVar4;
        *(int *)(iVar4 + 0x74) = iVar6;
        *(int *)(iVar3 + 0x78) = iVar6;
      }
      *(undefined4 *)(iVar6 + 0x30) = 7;
      *(int *)(iVar6 + 0x4c) = param_5;
      *(undefined4 *)(iVar6 + 0x38) = 1;
      *DAT_0000829c = *DAT_0000829c + 1;
      FUN_0000564c(uVar1);
      FUN_00008c50(iVar6);
      return *(undefined4 *)(iVar6 + 0x88);
    }
    uVar5 = 7;
  }
  else {
    *param_4 = uVar2;
    if ((param_3 & 1) != 0) {
      if ((*(int *)(param_1 + 0x14) == 0) || (*(int *)(param_1 + 0x10) != 0)) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~param_2;
      }
      else {
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | param_2;
      }
    }
    uVar5 = 0;
  }
  FUN_0000564c(uVar1);
  return uVar5;
}



/* Function: FUN_000082a0 */

undefined4 FUN_000082a0(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 local_28;
  
  local_28 = FUN_00005640();
  FUN_00005646();
  if ((param_3 & 2) != 0) {
    if ((*(int *)(param_1 + 0x14) == 0) || (*(int *)(param_1 + 0x10) != 0)) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & param_2;
    }
    else {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | ~param_2;
    }
    FUN_0000564c(local_28);
    return 0;
  }
  uVar12 = *(uint *)(param_1 + 8) | param_2;
  *(uint *)(param_1 + 8) = uVar12;
  if (*(uint *)(param_1 + 0x20) != 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~param_2;
  }
  piVar1 = DAT_0000848c;
  iVar8 = *(int *)(param_1 + 0x10);
  iVar13 = *(int *)(param_1 + 0x14);
  if (iVar8 == 0) {
    if (iVar13 != 0) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
  }
  else {
    if (iVar13 != 1) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      iVar11 = 0;
      iVar14 = 0;
      *piVar1 = *piVar1 + 1;
      iVar10 = iVar8;
      do {
        FUN_0000564c(local_28);
        local_28 = FUN_00005640();
        FUN_00005646();
        iVar9 = iVar8;
        if (*(int *)(param_1 + 0xc) != 0) {
          *(undefined4 *)(param_1 + 0xc) = 0;
          iVar13 = *(int *)(param_1 + 0x14);
          uVar12 = *(uint *)(param_1 + 8) | uVar12;
          iVar9 = iVar10;
        }
        uVar7 = *(uint *)(iVar9 + 0x84);
        uVar2 = *(uint *)(iVar9 + 0x7c);
        iVar8 = *(int *)(iVar9 + 0x74);
        uVar5 = uVar12 & uVar2;
        if (((uVar7 & 2) == 2) && (uVar5 != uVar2)) {
          uVar5 = 0;
        }
        if (*(int *)(iVar9 + 0x30) == 7) {
          if (uVar5 != 0) {
            **(uint **)(iVar9 + 0x80) = uVar12;
            if ((uVar7 & 1) != 0) {
              *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~uVar2;
            }
            *(undefined4 *)(iVar9 + 0x6c) = 0;
            *(undefined4 *)(iVar9 + 0x88) = 0;
            goto LAB_000083ca;
          }
        }
        else {
LAB_000083ca:
          iVar3 = *(int *)(iVar9 + 0x74);
          if (iVar3 == iVar9) {
            iVar10 = 0;
          }
          else {
            iVar6 = *(int *)(iVar9 + 0x78);
            *(int *)(iVar3 + 0x78) = iVar6;
            *(int *)(iVar6 + 0x74) = iVar3;
            if (iVar10 == iVar9) {
              iVar10 = *(int *)(iVar9 + 0x74);
            }
          }
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
          if (iVar11 == 0) {
            *(undefined4 *)(iVar9 + 0x74) = 0;
            iVar11 = iVar9;
            iVar14 = iVar9;
          }
          else {
            if (iVar14 != 0) {
              *(int *)(iVar14 + 0x74) = iVar9;
            }
            *(undefined4 *)(iVar9 + 0x74) = 0;
            iVar14 = iVar9;
          }
        }
        iVar13 = iVar13 + -1;
        if (iVar13 == 0) {
          *(int *)(param_1 + 0x10) = iVar10;
          uVar12 = *(uint *)(param_1 + 0x20);
          if (uVar12 != 0) {
            *(undefined4 *)(param_1 + 0x20) = 0;
            *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~uVar12;
          }
          FUN_0000564c(local_28);
          piVar1 = DAT_0000848c;
          while (iVar11 != 0) {
            iVar8 = *(int *)(iVar11 + 0x74);
            uVar4 = FUN_00005640();
            FUN_00005646();
            *piVar1 = *piVar1 + 1;
            FUN_0000564c(uVar4);
            FUN_00008da0(iVar11);
            iVar11 = iVar8;
          }
          uVar4 = FUN_00005640();
          FUN_00005646();
          *DAT_0000848c = *DAT_0000848c + -1;
          FUN_0000564c(uVar4);
          FUN_00008d70();
          return 0;
        }
      } while( true );
    }
    uVar5 = *(uint *)(iVar8 + 0x84);
    uVar2 = *(uint *)(iVar8 + 0x7c);
    if ((((uVar5 & 2) != 2) || ((uVar12 & uVar2) == uVar2)) && ((uVar12 & uVar2) != 0)) {
      **(uint **)(iVar8 + 0x80) = uVar12;
      if ((uVar5 & 1) != 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~uVar2;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(iVar8 + 0x6c) = 0;
      *(undefined4 *)(iVar8 + 0x88) = 0;
      *piVar1 = *piVar1 + 1;
      FUN_0000564c(local_28);
      FUN_00008da0(iVar8);
      return 0;
    }
  }
  FUN_0000564c(local_28);
  return 0;
}



/* Function: FUN_00008490 */

void FUN_00008490(void)

{
  return;
}



/* Function: FUN_00008494 */

void FUN_00008494(void)

{
  FUN_000098b0(1);
  *DAT_000084a4 = 0;
  return;
}



/* Function: FUN_000084bc */

uint FUN_000084bc(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (0x1000 < param_1 + 0x5e9f0000) {
    func_0x0002c344(s_ADI_IS_Analogdie_reg_addr__000085b4,s_adi_phy_c_000085a8,0x67);
  }
  FUN_0000b552();
  iVar1 = DAT_000085d0;
  *(uint *)(DAT_000085d0 + 0x238) = param_1;
  iVar2 = thunk_FUN_00006d14();
  uVar4 = DAT_000085d4;
  iVar3 = iVar2;
  do {
    uVar5 = *(uint *)(iVar1 + 0x23c);
    if (3 < (uint)(iVar3 - iVar2)) {
      FUN_000060ba(uVar4);
    }
    iVar3 = thunk_FUN_00006d14();
  } while ((uVar5 & 0x80000000) != 0);
  if ((param_1 & 0x1ffff) >> 2 != uVar5 >> 0x10) {
    uVar4 = func_0x0002c334(s_ANA_Read__addr___0x_x__val___0x__000085d8,param_1,uVar5);
    func_0x0002c338(DAT_00008608,s_adi_phy_c_000085fc,0x3a,uVar4);
  }
  FUN_0000b526();
  return uVar5 & 0xffff;
}



/* Function: FUN_00008536 */

undefined4 FUN_00008536(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  if ((undefined4 *)0x1000 < param_1 + 0x17a7c000) {
    func_0x0002c344(s_ADI_IS_Analogdie_reg_addr__000085b4,s_adi_phy_c_000085a8,0x7a);
  }
  FUN_0000b552();
  iVar5 = 1000;
  iVar3 = thunk_FUN_00006d14();
  uVar2 = DAT_0000860c;
  iVar1 = DAT_000085d0;
  iVar4 = iVar3;
  do {
    if ((*(uint *)(iVar1 + 0x240) & 1) == 0) {
      if (iVar5 != 0) {
        *param_1 = param_2;
        goto LAB_00008598;
      }
      break;
    }
    if (3 < (uint)(iVar4 - iVar3)) {
      FUN_000060ba(uVar2);
    }
    iVar4 = thunk_FUN_00006d14();
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar6 = 0xfffffffc;
LAB_00008598:
  FUN_0000b526();
  return uVar6;
}



/* Function: FUN_00008c50 */

uint FUN_00008c50(uint param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  uVar11 = *DAT_00008d50;
  if ((param_1 == uVar11) && (*(int *)(param_1 + 0x4c) != 0 && *(int *)(param_1 + 0x4c) != -1)) {
    FUN_00007a8c(param_1 + 0x4c);
  }
  uVar7 = FUN_00005640();
  FUN_00005646();
  if (param_1 == uVar11) {
    *DAT_00008d54 = *(undefined4 *)(param_1 + 0x1c);
  }
  puVar2 = DAT_00008d58;
  *DAT_00008d58 = *DAT_00008d58 - 1;
  puVar4 = DAT_00008d60;
  puVar3 = DAT_00008d5c;
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    piVar6 = DAT_00008d68;
    iVar5 = DAT_00008d64;
    uVar9 = *(uint *)(param_1 + 0x20);
    iVar10 = *(int *)(param_1 + 0x24);
    uVar8 = *(uint *)(param_1 + 0x2c);
    if (uVar9 == param_1) {
      *(undefined4 *)(DAT_00008d64 + uVar8 * 4) = 0;
      uVar8 = *DAT_00008d6c & ~(1 << (uVar8 & 0xff));
      *DAT_00008d6c = uVar8;
      if (uVar8 == 0) {
        *piVar6 = 0x20;
        *puVar4 = 0;
        FUN_0000564c(uVar7);
        if ((*puVar2 | *puVar3) != 0) {
          return *puVar2 | *puVar3;
        }
        goto LAB_00005658;
      }
      iVar10 = FUN_00005652(uVar8 & -uVar8);
      *piVar6 = 0x1f - iVar10;
    }
    else {
      *(int *)(uVar9 + 0x24) = iVar10;
      *(uint *)(iVar10 + 0x20) = uVar9;
      if (*(uint *)(iVar5 + uVar8 * 4) == param_1) {
        *(uint *)(iVar5 + uVar8 * 4) = uVar9;
      }
    }
    if (param_1 == *puVar4) {
      *puVar4 = *(uint *)(iVar5 + *piVar6 * 4);
      FUN_0000564c(uVar7);
      if ((*puVar2 | *puVar3) != 0) {
        return *puVar2 | *puVar3;
      }
      goto LAB_00005658;
    }
  }
  FUN_0000564c(uVar7);
  if (uVar11 == *puVar4) {
    return *puVar4;
  }
  if ((*puVar2 | *puVar3) != 0) {
    return *puVar2 | *puVar3;
  }
LAB_00005658:
  uVar11 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar11 = isIRQinterruptsEnabled();
  }
  if (uVar11 != 1) {
    software_interrupt(0);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      enableIRQinterrupts((uVar11 & 1) == 1);
    }
  }
  return uVar11;
}



/* Function: FUN_00008d70 */

uint FUN_00008d70(void)

{
  bool bVar1;
  uint uVar2;
  
  if ((*DAT_00008d90 | *DAT_00008d94) != 0) {
    return *DAT_00008d90 | *DAT_00008d94;
  }
  if (*DAT_00008d98 == *DAT_00008d9c) {
    return *DAT_00008d9c;
  }
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  if (uVar2 != 1) {
    software_interrupt(0);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      enableIRQinterrupts((uVar2 & 1) == 1);
    }
  }
  return uVar2;
}



/* Function: FUN_00008da0 */

uint FUN_00008da0(uint param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    FUN_00008e9c(param_1 + 0x4c);
  }
  uVar6 = FUN_00005640();
  FUN_00005646();
  puVar2 = DAT_00008e80;
  *DAT_00008e80 = *DAT_00008e80 - 1;
  puVar4 = DAT_00008e88;
  puVar3 = DAT_00008e84;
  iVar7 = *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x38) == 0) {
    if (iVar7 != 0) {
      if (*(int *)(param_1 + 0x34) != 0) goto LAB_00008df6;
      *(undefined4 *)(param_1 + 0x30) = 0;
      uVar11 = *(uint *)(param_1 + 0x2c);
      iVar7 = *(int *)(DAT_00008e90 + uVar11 * 4);
      if (iVar7 == 0) {
        *(uint *)(DAT_00008e90 + uVar11 * 4) = param_1;
        puVar5 = DAT_00008e94;
        *(uint *)(param_1 + 0x20) = param_1;
        *(uint *)(param_1 + 0x24) = param_1;
        *puVar5 = 1 << (uVar11 & 0xff) | *puVar5;
        if (uVar11 < *DAT_00008e98) {
          *DAT_00008e98 = uVar11;
          uVar9 = *puVar4;
          if (uVar9 != 0) {
            uVar10 = *(uint *)(uVar9 + 0x3c);
          }
          else {
            *puVar4 = param_1;
            uVar10 = 0;
          }
          if (uVar9 != 0 && uVar11 < uVar10) {
            *puVar4 = param_1;
            FUN_0000564c(uVar6);
            uVar11 = *puVar2 | *puVar3;
            if (uVar11 != 0) {
              return uVar11;
            }
            goto LAB_00005658;
          }
        }
      }
      else {
        iVar8 = *(int *)(iVar7 + 0x24);
        *(uint *)(iVar8 + 0x20) = param_1;
        *(uint *)(iVar7 + 0x24) = param_1;
        *(int *)(param_1 + 0x20) = iVar7;
        *(int *)(param_1 + 0x24) = iVar8;
      }
    }
  }
  else if (iVar7 != 1 && iVar7 != 2) {
    if (*(int *)(param_1 + 0x34) == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    else {
LAB_00008df6:
      *(undefined4 *)(param_1 + 0x30) = 3;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
  }
  uVar11 = *DAT_00008e8c;
  FUN_0000564c(uVar6);
  if (uVar11 == *puVar4) {
    return *puVar4;
  }
  uVar11 = *puVar2 | *puVar3;
  if (uVar11 != 0) {
    return uVar11;
  }
LAB_00005658:
  uVar11 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar11 = isIRQinterruptsEnabled();
  }
  if (uVar11 != 1) {
    software_interrupt(0);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      enableIRQinterrupts((uVar11 & 1) == 1);
    }
  }
  return uVar11;
}



/* Function: FUN_00008e9c */

void FUN_00008e9c(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  
  uVar2 = FUN_00005640();
  FUN_00005646();
  param_1[6] = 0;
  if (param_1[4] == 0) goto LAB_00008f06;
  uVar3 = FUN_0000b99a();
  puVar1 = DAT_00008f10;
  piVar6 = (int *)param_1[4];
  if (piVar6 == param_1) {
    *DAT_00008f10 = 0;
    iVar4 = -1;
LAB_00008eec:
    FUN_0000b986(iVar4);
  }
  else {
    iVar4 = 0;
    if (param_1 == (int *)*DAT_00008f10) {
      piVar6[5] = param_1[5];
      *(int *)(param_1[5] + 0x10) = param_1[4];
      puVar7 = (uint *)param_1[4];
      *puVar1 = puVar7;
      uVar5 = *puVar7;
      if (uVar3 < uVar5) {
        iVar4 = uVar5 - uVar3;
      }
      goto LAB_00008eec;
    }
    piVar6[5] = param_1[5];
    *(int *)(param_1[5] + 0x10) = param_1[4];
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = *param_1 - uVar3;
LAB_00008f06:
  FUN_0000564c(uVar2);
  return;
}



/* Function: FUN_0000909c */

void FUN_0000909c(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  uVar3 = FUN_00005640();
  FUN_00005646();
  *(uint *)(param_1 + 0xa0) = param_2;
  piVar1 = DAT_0000915c;
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar7 = *(uint *)(param_1 + 0x2c);
    iVar8 = *DAT_0000915c;
    *DAT_00009160 = *DAT_00009160 + 2;
    *(undefined4 *)(param_1 + 0x30) = 3;
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    FUN_0000564c(uVar3);
    FUN_00008c50(param_1);
    uVar3 = FUN_00005640();
    FUN_00005646();
    *(uint *)(param_1 + 0x2c) = param_2;
    if (*(uint *)(param_1 + 0x9c) < param_2) {
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x9c);
    }
    else {
      *(uint *)(param_1 + 0x3c) = param_2;
    }
    FUN_0000564c(uVar3);
    FUN_00008da0(param_1);
    uVar3 = FUN_00005640();
    FUN_00005646();
    iVar2 = DAT_00009164;
    if ((param_1 != *piVar1) && (*(int *)(param_1 + 0x30) == 0)) {
      uVar4 = *(uint *)(param_1 + 0x2c);
      uVar5 = *(uint *)(*piVar1 + 0x2c);
      if (uVar5 < uVar4) {
        uVar6 = *(uint *)(param_1 + 0x3c);
        if (uVar4 <= uVar6) goto LAB_00009140;
        bVar9 = uVar5 <= uVar6;
        if (uVar6 <= uVar5) {
          *piVar1 = param_1;
          bVar9 = param_2 <= uVar7;
        }
        if (bVar9) goto LAB_00009140;
      }
      else if ((param_1 != iVar8) || (*piVar1 = param_1, param_2 <= uVar7)) goto LAB_00009140;
      *(int *)(iVar2 + uVar4 * 4) = param_1;
    }
  }
  else {
    *(uint *)(param_1 + 0x2c) = param_2;
    if (*(uint *)(param_1 + 0x9c) < param_2) {
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x9c);
    }
    else {
      *(uint *)(param_1 + 0x3c) = param_2;
    }
  }
LAB_00009140:
  FUN_0000564c(uVar3);
  return;
}



/* Function: FUN_00009168 */

undefined4 FUN_00009168(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint extraout_r1;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar2 = FUN_00005640();
  FUN_00005646();
  piVar1 = DAT_00009224;
  uVar8 = *(uint *)(param_1 + 0x1c);
  if (1 < uVar8) {
    if (uVar8 == 2) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0x74);
      if (*(uint *)(iVar3 + 0x2c) < *(uint *)(*(int *)(param_1 + 0x18) + 0x2c)) {
        *(int *)(param_1 + 0x18) = iVar3;
      }
      FUN_0000564c(uVar2);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x18);
      iVar7 = *(int *)(iVar3 + 0x74);
      *DAT_00009224 = *DAT_00009224 + 1;
      iVar6 = iVar3;
      do {
        iVar5 = iVar3;
        if (*(uint *)(iVar7 + 0x2c) < *(uint *)(iVar3 + 0x2c)) {
          iVar5 = iVar7;
        }
        FUN_0000564c(uVar2);
        uVar2 = FUN_00005640();
        FUN_00005646();
        iVar3 = *(int *)(param_1 + 0x18);
        uVar4 = extraout_r1;
        if (iVar3 == iVar6) {
          uVar4 = *(uint *)(param_1 + 0x1c);
        }
        if (iVar3 == iVar6 && uVar4 == uVar8) {
          iVar7 = *(int *)(iVar7 + 0x74);
          iVar3 = iVar5;
        }
        else {
          uVar8 = *(uint *)(param_1 + 0x1c);
          iVar7 = *(int *)(iVar3 + 0x74);
          iVar6 = iVar3;
        }
      } while (iVar7 != iVar6);
      *piVar1 = *piVar1 + -1;
      if (iVar3 != iVar6) {
        iVar7 = *(int *)(iVar3 + 0x74);
        iVar5 = *(int *)(iVar3 + 0x78);
        *(int *)(iVar7 + 0x78) = iVar5;
        *(int *)(iVar5 + 0x74) = iVar7;
        iVar7 = *(int *)(iVar6 + 0x78);
        *(int *)(iVar3 + 0x74) = iVar6;
        *(int *)(iVar3 + 0x78) = iVar7;
        *(int *)(iVar7 + 0x74) = iVar3;
        *(int *)(iVar6 + 0x78) = iVar3;
        *(int *)(param_1 + 0x18) = iVar3;
      }
      FUN_0000564c(uVar2);
      FUN_00008d70();
    }
    return 0;
  }
  FUN_0000564c(uVar2);
  return 0;
}



/* Function: FUN_000092a4 */

undefined4 FUN_000092a4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  
  piVar1 = DAT_000093a4;
  if (param_1 != 0) {
    piVar7 = *(int **)(param_1 + -4);
    piVar8 = (int *)(param_1 + -8);
    if ((piVar7 != DAT_000093a4 && piVar7 != (int *)0x0) && (*piVar7 == DAT_000093a8)) {
      piVar7[8] = *DAT_000093ac;
      uVar2 = FUN_00005640();
      FUN_00005646();
      *(int **)(param_1 + -4) = piVar1;
      piVar7[2] = piVar7[2] + (*piVar8 - (int)piVar8);
      if ((int *)piVar7[5] < piVar8) {
        piVar8 = (int *)piVar7[5];
      }
      piVar7[5] = (int)piVar8;
      piVar8 = DAT_000093b0;
      iVar3 = piVar7[10];
      while (iVar3 != 0) {
        iVar9 = piVar7[9];
        FUN_0000564c(uVar2);
        iVar3 = FUN_000098e4(piVar7,*(undefined4 *)(iVar9 + 0x7c));
        uVar2 = FUN_00005640();
        FUN_00005646();
        if (iVar3 == 0) break;
        if (piVar7[9] == iVar9) {
          iVar5 = piVar7[10];
          piVar7[10] = iVar5 + -1;
          if (iVar5 + -1 == 0) {
            piVar7[9] = 0;
          }
          else {
            iVar5 = *(int *)(iVar9 + 0x74);
            piVar7[9] = iVar5;
            iVar6 = *(int *)(iVar9 + 0x78);
            *(int *)(iVar5 + 0x78) = iVar6;
            *(int *)(iVar6 + 0x74) = iVar5;
          }
          *(undefined4 *)(iVar9 + 0x6c) = 0;
          **(int **)(iVar9 + 0x80) = iVar3;
          *(undefined4 *)(iVar9 + 0x88) = 0;
          *piVar8 = *piVar8 + 1;
          FUN_0000564c(uVar2);
          FUN_00008da0(iVar9);
          uVar2 = FUN_00005640();
          FUN_00005646();
        }
        else {
          *(int **)(iVar3 + -4) = piVar1;
          uVar4 = iVar3 - 8;
          piVar7[2] = piVar7[2] + (*(int *)(iVar3 + -8) - uVar4);
          if ((uint)piVar7[5] < uVar4) {
            uVar4 = piVar7[5];
          }
          piVar7[5] = uVar4;
        }
        iVar3 = piVar7[10];
      }
      FUN_0000564c(uVar2);
      FUN_00008d70();
      return 0;
    }
  }
  return 3;
}



/* Function: FUN_000093b4 */

undefined4 FUN_000093b4(undefined4 *param_1,undefined4 param_2,int *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_4 = param_4 & 0xfffffffc;
  param_1[1] = param_2;
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[4] = param_3;
  param_1[5] = param_3;
  param_1[2] = param_4 - 8;
  param_1[3] = 2;
  *(undefined4 **)((int)param_3 + (param_4 - 4)) = param_1;
  puVar1 = (undefined4 *)((int)param_3 + (param_4 - 8));
  *puVar1 = param_3;
  *param_3 = (int)puVar1;
  param_3[1] = DAT_0000943c;
  param_1[8] = 0;
  uVar2 = FUN_00005640();
  FUN_00005646();
  *param_1 = DAT_00009440;
  iVar3 = *DAT_00009444;
  *DAT_00009444 = iVar3 + 1;
  if (iVar3 + 1 == 1) {
    *DAT_00009448 = (int)param_1;
    param_1[0xb] = param_1;
    param_1[0xc] = param_1;
  }
  else {
    iVar3 = *DAT_00009448;
    iVar4 = *(int *)(iVar3 + 0x30);
    *(undefined4 **)(iVar3 + 0x30) = param_1;
    *(undefined4 **)(iVar4 + 0x2c) = param_1;
    param_1[0xb] = iVar3;
    param_1[0xc] = iVar4;
  }
  FUN_0000564c(uVar2);
  return 0;
}



/* Function: FUN_0000944c */

undefined4 FUN_0000944c(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = param_3 + 3U & 0xfffffffc;
  uVar1 = FUN_00005640();
  FUN_00005646();
  iVar4 = *DAT_000094f4;
  do {
    *(int *)(param_1 + 0x20) = iVar4;
    FUN_0000564c(uVar1);
    iVar2 = FUN_000098e4(param_1,uVar6);
    uVar1 = FUN_00005640();
    FUN_00005646();
    if (iVar2 != 0) {
      uVar5 = 0;
      *param_2 = iVar2;
      goto LAB_0000948e;
    }
  } while (*(int *)(param_1 + 0x20) != iVar4);
  if (param_4 != 0) {
    *(undefined4 *)(iVar4 + 0x6c) = DAT_000094f8;
    *(int *)(iVar4 + 0x70) = param_1;
    *(uint *)(iVar4 + 0x7c) = uVar6;
    *(int **)(iVar4 + 0x80) = param_2;
    iVar2 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar2 + 1;
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x24) = iVar4;
      *(int *)(iVar4 + 0x74) = iVar4;
      *(int *)(iVar4 + 0x78) = iVar4;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x24);
      *(int *)(iVar4 + 0x74) = iVar2;
      iVar3 = *(int *)(iVar2 + 0x78);
      *(int *)(iVar4 + 0x78) = iVar3;
      *(int *)(iVar3 + 0x74) = iVar4;
      *(int *)(iVar2 + 0x78) = iVar4;
    }
    *(undefined4 *)(iVar4 + 0x30) = 9;
    *(int *)(iVar4 + 0x4c) = param_4;
    *(undefined4 *)(iVar4 + 0x38) = 1;
    *DAT_000094fc = *DAT_000094fc + 1;
    FUN_0000564c(uVar1);
    FUN_00008c50(iVar4);
    return *(undefined4 *)(iVar4 + 0x88);
  }
  uVar5 = 0x10;
LAB_0000948e:
  FUN_0000564c(uVar1);
  return uVar5;
}



/* Function: FUN_00009500 */

undefined4 FUN_00009500(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar1 = FUN_00005640();
  FUN_00005646();
  uVar6 = DAT_000095a0;
  if (*(int *)(param_1 + 8) == 0) {
    if (param_3 != 0) {
      iVar7 = *DAT_0000959c;
      *(undefined4 **)(iVar7 + 0x80) = param_2;
      *(undefined4 *)(iVar7 + 0x6c) = uVar6;
      *(int *)(iVar7 + 0x70) = param_1;
      iVar4 = *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x28) = iVar4 + 1;
      if (iVar4 == 0) {
        *(int *)(param_1 + 0x24) = iVar7;
        *(int *)(iVar7 + 0x74) = iVar7;
        *(int *)(iVar7 + 0x78) = iVar7;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x24);
        *(int *)(iVar7 + 0x74) = iVar4;
        iVar5 = *(int *)(iVar4 + 0x78);
        *(int *)(iVar7 + 0x78) = iVar5;
        *(int *)(iVar5 + 0x74) = iVar7;
        *(int *)(iVar4 + 0x78) = iVar7;
      }
      *(undefined4 *)(iVar7 + 0x30) = 8;
      *(int *)(iVar7 + 0x4c) = param_3;
      *(undefined4 *)(iVar7 + 0x38) = 1;
      *DAT_000095a4 = *DAT_000095a4 + 1;
      FUN_0000564c(uVar1);
      FUN_00008c50(iVar7);
      return *(undefined4 *)(iVar7 + 0x88);
    }
    uVar6 = 0x10;
  }
  else {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    piVar2 = *(int **)(param_1 + 0x14);
    *param_2 = piVar2 + 1;
    *(int *)(param_1 + 0x14) = *piVar2;
    uVar6 = 0;
    *piVar2 = param_1;
  }
  uVar3 = *(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x10) <= *(uint *)(param_1 + 8)) {
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  *(uint *)(param_1 + 0x10) = uVar3;
  FUN_0000564c(uVar1);
  return uVar6;
}



/* Function: FUN_000095a8 */

undefined4
FUN_000095a8(undefined4 *param_1,undefined4 param_2,int param_3,int *param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar10 = param_3 + 3U & 0xfffffffc;
  param_1[0xb] = 0;
  param_1[8] = uVar10;
  param_1[0xc] = 0;
  param_1[1] = param_2;
  uVar8 = (param_5 & 0xfffffffc) / (uVar10 + 4);
  param_1[6] = param_4;
  param_1[7] = param_5 & 0xfffffffc;
  uVar4 = 0;
  piVar7 = (int *)((int)param_4 + uVar10 + 4);
  piVar2 = param_4;
  if (uVar8 != 0) {
    piVar1 = param_4;
    if (uVar8 < 0x80000000) {
      uVar9 = 1;
      if (uVar8 != 0) {
        do {
          piVar2 = piVar7;
          *piVar1 = (int)piVar2;
          uVar4 = uVar4 + 1;
          uVar9 = uVar9 + 1;
          piVar1 = piVar2;
          piVar7 = (int *)((int)piVar2 + uVar10 + 4);
        } while (uVar9 <= uVar8);
      }
    }
    else {
      do {
        piVar2 = piVar7;
        *piVar1 = (int)piVar2;
        uVar4 = uVar4 + 1;
        piVar1 = piVar2;
        piVar7 = (int *)((int)piVar2 + uVar10 + 4);
      } while (uVar4 < uVar8);
    }
  }
  *(undefined4 *)(((int)piVar2 - uVar10) + -4) = 0;
  param_1[2] = uVar4;
  param_1[3] = uVar4;
  param_1[4] = uVar4;
  if (uVar4 == 0) {
    return 5;
  }
  param_1[5] = param_4;
  uVar3 = FUN_00005640((int)piVar2 - uVar10);
  FUN_00005646();
  *param_1 = DAT_00009670;
  iVar5 = *DAT_00009674;
  *DAT_00009674 = iVar5 + 1;
  if (iVar5 + 1 == 1) {
    *DAT_00009678 = (int)param_1;
    param_1[0xb] = param_1;
    param_1[0xc] = param_1;
  }
  else {
    iVar5 = *DAT_00009678;
    iVar6 = *(int *)(iVar5 + 0x30);
    *(undefined4 **)(iVar5 + 0x30) = param_1;
    *(undefined4 **)(iVar6 + 0x2c) = param_1;
    param_1[0xb] = iVar5;
    param_1[0xc] = iVar6;
  }
  FUN_0000564c(uVar3);
  return 0;
}



/* Function: FUN_0000967c */

undefined4 FUN_0000967c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_00005640();
  FUN_00005646();
  iVar4 = *(int *)(param_1 + -4);
  iVar5 = *(int *)(iVar4 + 0x24);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + -4) = *(undefined4 *)(iVar4 + 0x14);
    *(undefined4 **)(iVar4 + 0x14) = (undefined4 *)(param_1 + -4);
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    FUN_0000564c(uVar2);
  }
  else {
    iVar3 = *(int *)(iVar4 + 0x28) + -1;
    *(int *)(iVar4 + 0x28) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar4 + 0x24) = 0;
    }
    else {
      iVar3 = *(int *)(iVar5 + 0x74);
      *(int *)(iVar4 + 0x24) = iVar3;
      iVar4 = *(int *)(iVar5 + 0x78);
      *(int *)(iVar3 + 0x78) = iVar4;
      *(int *)(iVar4 + 0x74) = iVar3;
    }
    *(undefined4 *)(iVar5 + 0x6c) = 0;
    **(int **)(iVar5 + 0x80) = param_1;
    piVar1 = DAT_000096e8;
    *(undefined4 *)(iVar5 + 0x88) = 0;
    *piVar1 = *piVar1 + 1;
    FUN_0000564c(uVar2);
    FUN_00008da0(iVar5);
  }
  return 0;
}



/* Function: FUN_00009712 */

undefined4 FUN_00009712(undefined4 param_1)

{
  FUN_00009c18(0,param_1);
  return 0;
}



/* Function: FUN_000098b0 */

void FUN_000098b0(undefined1 param_1)

{
  *DAT_000098b8 = param_1;
  return;
}



/* Function: FUN_000098e4 */

int * FUN_000098e4(int param_1,uint param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_28;
  
  bVar2 = false;
  local_28 = FUN_00005640();
  FUN_00005646();
  piVar1 = DAT_000099e8;
  iVar3 = DAT_000099e4;
  if (param_2 < *(uint *)(param_1 + 8)) {
    piVar6 = *(int **)(param_1 + 0x14);
    iVar8 = *(int *)(param_1 + 0xc) + 1;
    piVar7 = piVar6;
    do {
      if (piVar6[1] != iVar3) {
        piVar6 = (int *)*piVar6;
        goto LAB_00009950;
      }
      if (!bVar2) {
        if (piVar7 != piVar6) {
          piVar7 = piVar6;
        }
        bVar2 = true;
      }
      piVar5 = (int *)*piVar6;
      uVar4 = (int)piVar5 + (-8 - (int)piVar6);
      if (param_2 <= uVar4) {
        if (uVar4 != 0) {
          if (0x13 < uVar4 - param_2) {
            piVar1 = (int *)((int)piVar6 + param_2 + 8);
            *piVar1 = *piVar6;
            *(int *)((int)piVar6 + param_2 + 0xc) = iVar3;
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
            *piVar6 = (int)piVar1;
            uVar4 = param_2;
          }
          piVar6[1] = param_1;
          *(uint *)(param_1 + 8) = (*(int *)(param_1 + 8) - uVar4) + -8;
          if (piVar6 == piVar7) {
            piVar7 = (int *)*piVar6;
          }
          *(int **)(param_1 + 0x14) = piVar7;
          FUN_0000564c(local_28);
          return piVar6 + 2;
        }
        break;
      }
      if (piVar5[1] == iVar3) {
        *piVar6 = *piVar5;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        if (*(int **)(param_1 + 0x14) == piVar5) {
          *(int **)(param_1 + 0x14) = piVar6;
        }
LAB_00009950:
        if (iVar8 != 0) {
          iVar8 = iVar8 + -1;
        }
      }
      else {
        piVar6 = (int *)*piVar5;
        if (iVar8 != 0) {
          iVar8 = iVar8 + -1;
          goto LAB_00009950;
        }
      }
      FUN_0000564c(local_28);
      local_28 = FUN_00005640();
      FUN_00005646();
      if (*(int *)(param_1 + 0x20) != *piVar1) {
        piVar6 = *(int **)(param_1 + 0x14);
        iVar8 = *(int *)(param_1 + 0xc) + 1;
        *(int *)(param_1 + 0x20) = *piVar1;
        piVar7 = piVar6;
      }
    } while (iVar8 != 0);
    *(int **)(param_1 + 0x14) = piVar7;
  }
  FUN_0000564c(local_28);
  return (int *)0x0;
}



/* Function: FUN_00009ad4 */

undefined4 FUN_00009ad4(int param_1,int param_2)

{
  if (param_1 == 0) {
    if (param_2 == 0) {
      if (*DAT_00009eb0 == '\0') {
        return *(undefined4 *)(DAT_00009eb0 + 8);
      }
    }
    else if (*DAT_00009eb0 == '\0') {
      return *(undefined4 *)(DAT_00009eb0 + 4);
    }
  }
  return 0;
}



/* Function: FUN_00009af2 */

undefined4 FUN_00009af2(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar7 = DAT_00009eb4;
  iVar1 = DAT_00009eb0;
  uVar8 = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  if (param_2 != 0) {
    do {
      pbVar6 = (byte *)(param_1 + uVar8 * 0x20);
      local_34 = *(undefined4 *)(pbVar6 + 0x14);
      local_30 = *(undefined4 *)(pbVar6 + 0x18);
      local_2c = *(undefined4 *)(pbVar6 + 0x1c);
      local_38 = *(undefined4 *)(pbVar6 + 0x10);
      local_3c = *(undefined4 *)(pbVar6 + 0xc);
      local_44 = *(undefined4 *)(pbVar6 + 8);
      local_40 = 0;
      local_48 = CONCAT22(CONCAT11(local_48._3_1_,pbVar6[1]),CONCAT11(1,*pbVar6));
      iVar2 = FUN_0000a444(&local_48);
      if (iVar2 != 0) {
        if (*pbVar6 == 0) {
          uVar5 = uVar8 >> 1;
          *(undefined1 *)(iVar1 + uVar5 * 0xc) = 0;
          uVar4 = (uint)pbVar6[1];
          bVar9 = uVar4 == 0;
          if (bVar9) {
            uVar4 = iVar1 + uVar5 * 0xc;
          }
          if (bVar9) {
            *(int *)(uVar4 + 8) = iVar2;
          }
          else {
            *(undefined4 *)(iVar7 + (uint)*pbVar6 * 4) = *(undefined4 *)(pbVar6 + 8);
            *(int *)(iVar1 + uVar5 * 0xc + 4) = iVar2;
          }
        }
        else {
          FUN_000078c0(s_smsg_c__smsg_cfg_error_dst_is__d_00009eb8);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_2);
  }
  iVar1 = DAT_00009edc;
  iVar7 = 0;
  iVar2 = DAT_00009edc + 0x60;
  while( true ) {
    iVar3 = FUN_0000b6a6(s_ipc_channel_mutex_00009ee0,1);
    *(int *)(iVar1 + iVar7 * 4) = iVar3;
    if (iVar3 == 0) break;
    iVar3 = FUN_0000aade(s_smsg_ch_open_event_00009ef4);
    *(int *)(iVar2 + iVar7 * 0xc + 8) = iVar3;
    if (iVar3 == 0) break;
    iVar7 = iVar7 + 1;
    if (0x17 < iVar7) {
      return 0;
    }
  }
  iVar7 = 0;
  do {
    if (*(int *)(iVar1 + iVar7 * 4) != 0) {
      FUN_0000b786();
      *(undefined4 *)(iVar1 + iVar7 * 4) = 0;
    }
    iVar3 = iVar2 + iVar7 * 0xc;
    if (*(int *)(iVar3 + 8) != 0) {
      FUN_0000ad1c();
      *(undefined4 *)(iVar3 + 8) = 0;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x18);
  return 0;
}



/* Function: FUN_00009c18 */

void FUN_00009c18(int param_1,byte *param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 auStack_14 [2];
  
  pcVar2 = *(code **)(DAT_00009eb4 + param_1 * 4);
  if (pcVar2 != Reset) {
    (*pcVar2)(param_2);
  }
  uVar3 = DAT_00009f08 + param_1 * 0x120;
  pbVar4 = (byte *)(uVar3 + (uint)*param_2 * 0xc);
  if (pbVar4 == (byte *)0x0) {
    return;
  }
  if (param_2[1] == 1) {
    uVar3 = *(ushort *)(param_2 + 2) - 0xbeee;
    if (uVar3 == 0) {
      *(ushort *)(pbVar4 + 2) = *(ushort *)(pbVar4 + 2) | 1;
      *pbVar4 = *param_2;
      if (*(int *)(pbVar4 + 8) == 0) {
        return;
      }
      auStack_14[0] = 0;
      FUN_0000ac3e(*(int *)(pbVar4 + 8),4,1,auStack_14);
      FUN_0000abac(*(undefined4 *)(pbVar4 + 8),1,0);
      return;
    }
  }
  else {
    bVar6 = false;
    if (param_2[1] == 2) {
      uVar3 = *(ushort *)(param_2 + 2) - 0xeddd;
      bVar6 = uVar3 == 0;
    }
    if (bVar6) {
      *(ushort *)(pbVar4 + 2) = *(ushort *)(pbVar4 + 2) & 0xfffe;
      if (*(int *)(pbVar4 + 8) == 0) {
        return;
      }
      auStack_14[0] = 0;
      FUN_0000ac3e(*(int *)(pbVar4 + 8),1,1,auStack_14);
      FUN_0000abac(*(undefined4 *)(pbVar4 + 8),4,0);
      return;
    }
  }
  iVar1 = *(int *)(pbVar4 + 4);
  bVar6 = iVar1 == 0;
  if (!bVar6) {
    uVar3 = (uint)pbVar4[2];
  }
  bVar5 = (uVar3 & 2) == 0;
  bVar7 = bVar6 || bVar5;
  if (!bVar6 && !bVar5) {
    iVar1 = *(int *)(iVar1 + 8);
    bVar7 = iVar1 == 0;
  }
  if (bVar7) {
    return;
  }
  iVar1 = FUN_0000a538(iVar1,param_2,0);
  if (iVar1 == 0) {
    return;
  }
  FUN_000078c0(DAT_00009f0c,*param_2,*(undefined2 *)(param_2 + 2),param_2[1]);
  return;
}



/* Function: FUN_0000a086 */

undefined4 FUN_0000a086(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = 0;
  local_24 = 0;
  if (param_1 != (byte *)0x0) {
    bVar2 = *param_1;
    bVar1 = param_1[1];
    iVar4 = FUN_0000b3e8();
    iVar3 = DAT_0000a210;
    if (iVar4 != 0) {
      FUN_0000b820(*(undefined4 *)(DAT_0000a210 + (uint)bVar2 * 0x60 + (uint)bVar1 * 4),0xffffffff);
    }
    iVar4 = DAT_0000a214 + (uint)*param_1 * 0x120 + (uint)param_1[1] * 0xc;
    FUN_0000b552();
    *(ushort *)(iVar4 + 2) = *(ushort *)(iVar4 + 2) & 0xfffd;
    FUN_0000b526();
    param_1[2] = 0;
    local_28 = CONCAT22(0xeddd,CONCAT11(2,param_1[1]));
    local_24 = 0;
    iVar4 = FUN_0000a538(*(undefined4 *)(param_1 + 0xc),&local_28,param_2);
    if (iVar4 == 0) {
      if (*(int *)(param_1 + 8) != 0) {
        FUN_0000a404();
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
      bVar1 = *param_1;
      bVar2 = param_1[1];
      iVar4 = FUN_0000b3e8();
      if (iVar4 != 0) {
        FUN_0000b8ee(*(undefined4 *)(iVar3 + (uint)bVar1 * 0x60 + (uint)bVar2 * 4));
      }
      FUN_0000748a(param_1);
      return 0;
    }
    bVar1 = *param_1;
    bVar2 = param_1[1];
    iVar4 = FUN_0000b3e8();
    if (iVar4 != 0) {
      FUN_0000b8ee(*(undefined4 *)(iVar3 + (uint)bVar1 * 0x60 + (uint)bVar2 * 4));
    }
  }
  return 0xffffffff;
}



/* Function: FUN_0000a21c */

undefined4 FUN_0000a21c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0000a364;
  uVar3 = 0;
  if (*(int *)(DAT_0000a364 + 0x44) == 0) {
    iVar2 = FUN_0000b6a6(s_spipe_0000a368,0);
    *(int *)(iVar1 + 0x44) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}



/* Function: FUN_0000a300 */

undefined4 FUN_0000a300(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((param_1 < 0x10) && (param_2 != 0)) {
    iVar2 = FUN_0000b3e8();
    puVar1 = DAT_0000a364;
    if (iVar2 != 0) {
      FUN_0000b820(DAT_0000a364[0x11],0xffffffff);
    }
    if (((int *)puVar1[param_1 + 1] == (int *)0x0) || (*(int *)puVar1[param_1 + 1] != 1)) {
      iVar4 = -1;
    }
    iVar2 = FUN_0000b3e8();
    if (iVar2 != 0) {
      FUN_0000b8ee(puVar1[0x11]);
    }
    if (iVar4 == 0) {
      uVar3 = func_0x0002c39c(*puVar1,param_1,param_2,param_3,param_4);
      return uVar3;
    }
  }
  return 0xffffffff;
}



/* Function: FUN_0000a404 */

undefined4 FUN_0000a404(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_0000a9d8();
      *param_1 = 0;
    }
    if (param_1[5] != 0) {
      FUN_0000ad1c();
    }
    if (param_1[3] != 0) {
      FUN_0000b786();
    }
    if (param_1[4] != 0) {
      FUN_0000b786();
    }
    FUN_0000748a(param_1);
    return 0;
  }
  return 0xffffffff;
}



/* Function: FUN_0000a444 */

int * FUN_0000a444(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (param_1 != 0) {
    piVar1 = (int *)FUN_00007344(0x18,0x44444444,s_snotifyque_c_0000a71c,0xc1);
    if (piVar1 == (int *)0x0) {
      FUN_000078c0(s_snotifyque_c_snotifyque_init__re_0000a764);
    }
    else {
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      if (*(char *)(param_1 + 1) == '\0') {
        local_28 = (uint)local_28._1_3_ << 8;
        local_24 = *(undefined4 *)(param_1 + 0xc);
        local_20 = *(undefined4 *)(param_1 + 0x10);
      }
      else {
        local_28 = CONCAT31(local_28._1_3_,1);
        local_24 = *(undefined4 *)(param_1 + 0xc);
        local_20 = *(undefined4 *)(param_1 + 0x10);
        local_18 = *(undefined4 *)(param_1 + 0x18);
        local_14 = *(undefined4 *)(param_1 + 0x1c);
        local_1c = *(undefined4 *)(param_1 + 0x14);
      }
      iVar2 = FUN_0000a944(&local_28);
      *piVar1 = iVar2;
      if (iVar2 != 0) {
        iVar2 = FUN_0000aade(s_ipc_event_0000a72c);
        piVar1[5] = iVar2;
        if (iVar2 == 0) {
          FUN_000078c0(s_audio_output_c_audio_out_open__S_0000a790);
        }
        else {
          iVar2 = FUN_0000b6a6(s_ipc_msg_tx_mutex_0000a738,1);
          piVar1[3] = iVar2;
          if (iVar2 != 0) {
            iVar2 = FUN_0000b6a6(s_ipc_msg_rx_mutex_0000a74c,1);
            piVar1[4] = iVar2;
            if (iVar2 != 0) {
              iVar3 = *(int *)(param_1 + 4);
              iVar2 = iVar3;
              if (iVar3 == 0) {
                iVar2 = DAT_0000a760;
              }
              piVar1[1] = iVar2;
              if (iVar3 == 0) {
                iVar2 = piVar1[5];
              }
              else {
                iVar2 = *(int *)(param_1 + 8);
              }
              piVar1[2] = iVar2;
              return piVar1;
            }
          }
        }
      }
      if (*piVar1 != 0) {
        FUN_0000a9d8();
        *piVar1 = 0;
      }
      if (piVar1[5] != 0) {
        FUN_0000ad1c();
      }
      if (piVar1[3] != 0) {
        FUN_0000b786();
      }
      if (piVar1[4] != 0) {
        FUN_0000b786();
      }
      FUN_0000748a(piVar1);
    }
  }
  return (int *)0x0;
}



/* Function: FUN_0000a538 */

undefined4 FUN_0000a538(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_24;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  uVar4 = param_1[3];
  iVar1 = FUN_0000b3e8();
  if (iVar1 != 0) {
    FUN_0000b820(uVar4,0xffffffff);
  }
  iVar1 = FUN_0000a908(*param_1);
  if (iVar1 != 0) {
    if (param_3 == 0) {
LAB_0000a5c6:
      uVar4 = param_1[3];
      iVar1 = FUN_0000b3e8();
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      FUN_0000b8ee(uVar4);
      return 0xffffffff;
    }
    uVar2 = FUN_0000b3e8();
    do {
      if (uVar2 == 0) {
        FUN_000078c0(s_peter__snotifyque_c_snotifyque_s_0000a7c8);
        goto LAB_0000a5c6;
      }
      uVar2 = param_3;
      if (5 < param_3) {
        uVar2 = 5;
      }
      uVar5 = param_1[5];
      uVar4 = param_1[3];
      local_24 = 0;
      iVar1 = FUN_0000b3e8();
      if (iVar1 != 0) {
        FUN_0000b8ee(uVar4);
      }
      FUN_0000ac3e(uVar5,1,1,&local_24,uVar2);
      iVar1 = FUN_0000b3e8();
      if (iVar1 != 0) {
        FUN_0000b820(uVar4,0xffffffff);
      }
      param_3 = param_3 - uVar2;
      iVar1 = FUN_0000a908(*param_1);
      uVar2 = param_3;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_00009ad4(0,1);
  if (*(int *)(iVar1 + 4) == param_1[1]) {
    FUN_0000a9fe(*param_1,param_2);
  }
  if (param_1[1] != 0) {
    puVar3 = (undefined4 *)FUN_00009ad4(0);
    if (puVar3 == param_1) {
      param_1[2] = param_2;
    }
    (*(code *)param_1[1])(param_1[2]);
  }
  uVar4 = param_1[3];
  iVar1 = FUN_0000b3e8();
  if (iVar1 != 0) {
    FUN_0000b8ee(uVar4);
  }
  return 0;
}



/* Function: FUN_0000a62a */

undefined4 FUN_0000a62a(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_24 [2];
  
  uVar2 = param_1[4];
  iVar1 = FUN_0000b3e8();
  if (iVar1 != 0) {
    FUN_0000b820(uVar2,0xffffffff);
  }
  iVar1 = FUN_0000a928(*param_1);
  if (iVar1 == 0) {
LAB_0000a6d8:
    FUN_0000aa30(*param_1,param_2);
    uVar2 = param_1[4];
    iVar1 = FUN_0000b3e8();
    if (iVar1 != 0) {
      FUN_0000b8ee(uVar2);
    }
    return 0;
  }
  if (param_3 != 0) {
    iVar1 = FUN_0000b3e8();
    if (iVar1 != 0) {
      while (iVar1 = FUN_0000a928(*param_1), iVar1 != 0 && param_3 != 0) {
        uVar2 = param_1[4];
        uVar3 = param_1[5];
        local_24[0] = 0;
        iVar1 = FUN_0000b3e8();
        if (iVar1 != 0) {
          FUN_0000b8ee(uVar2);
        }
        FUN_0000ac3e(uVar3,1,1,local_24,param_3);
        iVar1 = FUN_0000b3e8();
        if (iVar1 != 0) {
          FUN_0000b820(uVar2,0xffffffff);
        }
        if (param_3 != -1) {
          param_3 = 0;
        }
      }
      iVar1 = FUN_0000a928(*param_1);
      if (iVar1 == 0) goto LAB_0000a6d8;
    }
    FUN_000078c0(s_peter__snotifyque_c_snotifyque_r_0000a7f4);
  }
  uVar2 = param_1[4];
  iVar1 = FUN_0000b3e8();
  if (iVar1 != 0) {
    FUN_0000b8ee(uVar2);
  }
  return 0xffffffff;
}



/* Function: FUN_0000a908 */

uint FUN_0000a908(int param_1)

{
  if (param_1 != 0) {
    return (uint)(*(uint *)(param_1 + 0x18) <=
                 (uint)(**(int **)(param_1 + 0x10) - **(int **)(param_1 + 0xc)));
  }
  return 0xffffffff;
}



/* Function: FUN_0000a928 */

uint FUN_0000a928(int param_1)

{
  if (param_1 != 0) {
    return (uint)(**(int **)(param_1 + 0xc) == **(int **)(param_1 + 0x10));
  }
  return 0xffffffff;
}



/* Function: FUN_0000a944 */

int * FUN_0000a944(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 == (char *)0x0) {
    return (int *)0x0;
  }
  piVar2 = (int *)FUN_00007344(0x20,0x44444444,s_pGsloopque_c_0000aa79 + 3,0x25,param_4);
  if (piVar2 == (int *)0x0) {
    FUN_000078c0(s_sloopque_open_alloc_res_is_NULL___0000aa88);
    return (int *)0x0;
  }
  *piVar2 = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[6] = 0;
  piVar2[7] = 0;
  cVar1 = *param_1;
  *(char *)(piVar2 + 7) = cVar1;
  piVar2[5] = *(int *)(param_1 + 4);
  piVar2[6] = *(int *)(param_1 + 8);
  if (cVar1 == '\0') {
    iVar3 = FUN_00007344(*(int *)(param_1 + 8) * *(int *)(param_1 + 4),0x44444444,
                         s_pGsloopque_c_0000aa79 + 3,0x37,param_4);
    *piVar2 = iVar3;
    if (iVar3 == 0) {
      FUN_0000748a(piVar2);
      return (int *)0x0;
    }
    func_0x0002c3a8(iVar3,*(int *)(param_1 + 8) * *(int *)(param_1 + 4));
    piVar4 = piVar2 + 2;
    piVar2[3] = (int)(piVar2 + 1);
    piVar2[4] = (int)piVar4;
    FUN_000078c0(DAT_0000aaac,piVar2 + 1,piVar4,piVar2 + 1,piVar4);
  }
  else {
    *piVar2 = *(int *)(param_1 + 0xc);
    piVar2[3] = *(int *)(param_1 + 0x10);
    piVar2[4] = *(int *)(param_1 + 0x14);
  }
  return piVar2;
}



/* Function: FUN_0000a94a */

int * FUN_0000a94a(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = (int *)FUN_00007344(0x20,0x44444444,s_pGsloopque_c_0000aa79 + 3,0x25,param_4);
  if (piVar2 == (int *)0x0) {
    FUN_000078c0(s_sloopque_open_alloc_res_is_NULL___0000aa88);
    return (int *)0x0;
  }
  *piVar2 = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[6] = 0;
  piVar2[7] = 0;
  cVar1 = *param_1;
  *(char *)(piVar2 + 7) = cVar1;
  piVar2[5] = *(int *)(param_1 + 4);
  piVar2[6] = *(int *)(param_1 + 8);
  if (cVar1 == '\0') {
    iVar3 = FUN_00007344(*(int *)(param_1 + 8) * *(int *)(param_1 + 4),0x44444444,
                         s_pGsloopque_c_0000aa79 + 3,0x37,param_4);
    *piVar2 = iVar3;
    if (iVar3 == 0) {
      FUN_0000748a(piVar2);
      return (int *)0x0;
    }
    func_0x0002c3a8(iVar3,*(int *)(param_1 + 8) * *(int *)(param_1 + 4));
    piVar4 = piVar2 + 2;
    piVar2[3] = (int)(piVar2 + 1);
    piVar2[4] = (int)piVar4;
    FUN_000078c0(DAT_0000aaac,piVar2 + 1,piVar4,piVar2 + 1,piVar4);
  }
  else {
    *piVar2 = *(int *)(param_1 + 0xc);
    piVar2[3] = *(int *)(param_1 + 0x10);
    piVar2[4] = *(int *)(param_1 + 0x14);
  }
  return piVar2;
}



/* Function: FUN_0000a9d8 */

undefined4 FUN_0000a9d8(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (((char)param_1[7] == '\0') && (*param_1 != 0)) {
      FUN_0000748a();
      *param_1 = 0;
    }
    FUN_0000748a(param_1);
    return 0;
  }
  return 0xffffffff;
}



/* Function: FUN_0000a9fe */

undefined4 FUN_0000a9fe(int *param_1)

{
  if (param_1 != (int *)0x0) {
    func_0x0002c374((*(uint *)param_1[4] - param_1[6] * (*(uint *)param_1[4] / (uint)param_1[6])) *
                    param_1[5] + *param_1);
    *(int *)param_1[4] = *(int *)param_1[4] + 1;
    return 0;
  }
  return 0xffffffff;
}



/* Function: FUN_0000aa30 */

undefined4 FUN_0000aa30(int *param_1,undefined4 param_2)

{
  if (param_1 != (int *)0x0) {
    func_0x0002c374(param_2,(*(uint *)param_1[3] -
                            param_1[6] * (*(uint *)param_1[3] / (uint)param_1[6])) * param_1[5] +
                            *param_1);
    *(int *)param_1[3] = *(int *)param_1[3] + 1;
    return 0;
  }
  return 0xffffffff;
}



/* Function: FUN_0000aac0 */

int * FUN_0000aac0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = DAT_0000aeb8;
  do {
    if (*piVar1 == param_1) {
      return piVar1;
    }
    piVar1 = piVar1 + 10;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x23);
  return (int *)0x0;
}



/* Function: FUN_0000aade */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0000aade(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_a0 [128];
  
  puVar1 = (undefined4 *)FUN_00007344(0x24,0x44444444,s_threadx_os_lite_c_0000aebc,300);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  iVar2 = FUN_000080c0(puVar1,param_1);
  if (iVar2 != 0) {
    uVar4 = 0;
    piVar6 = DAT_0000aeb8;
    do {
      if (*piVar6 == iVar2) goto LAB_0000ab34;
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 10;
    } while (uVar4 < 0x23);
    piVar6 = (int *)0x0;
LAB_0000ab34:
    iVar7 = piVar6[1];
    iVar2 = *DAT_0000aed0;
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + -8);
      iVar3 = DAT_0000aed4;
      if (iVar5 != DAT_0000aed4) {
        iVar3 = _DAT_0000aed8;
      }
      if (iVar5 == DAT_0000aed4 || iVar5 == iVar3) {
        *(int *)(iVar2 + 0x110) = iVar7;
      }
    }
    iVar3 = func_0x0002c36c(auStack_a0,s_ASSERT_Error_0x_lx__0000aedb + 1,iVar7);
    iVar5 = func_0x0002c370(piVar6 + 2);
    iVar2 = 0x78 - iVar3;
    if (iVar5 <= 0x78 - iVar3) {
      iVar2 = iVar5;
    }
    func_0x0002c374(auStack_a0 + iVar3,piVar6 + 2,iVar2);
    auStack_a0[iVar3 + iVar2] = 0;
    func_0x0002c344(auStack_a0,s_RTOS_source_src_c_threadx_os_lit_0000aef0,0x139);
    if (iVar7 != 0) {
      FUN_0000748a(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}



/* Function: FUN_0000abac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000abac(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_98 [124];
  
  iVar1 = FUN_000082a0(param_1,param_2,*(undefined4 *)(DAT_0000af14 + param_3 * 4));
  iVar6 = 0;
  if (iVar1 != 0) {
    uVar2 = 0;
    piVar5 = DAT_0000aeb8;
    do {
      if (*piVar5 == iVar1) goto LAB_0000abd8;
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 10;
    } while (uVar2 < 0x23);
    piVar5 = (int *)0x0;
LAB_0000abd8:
    iVar6 = piVar5[1];
    iVar1 = *DAT_0000aed0;
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + -8);
      iVar3 = DAT_0000aed4;
      if (iVar4 != DAT_0000aed4) {
        iVar3 = _DAT_0000aed8;
      }
      if (iVar4 == DAT_0000aed4 || iVar4 == iVar3) {
        *(int *)(iVar1 + 0x110) = iVar6;
      }
    }
    iVar3 = func_0x0002c36c(auStack_98,s_ASSERT_Error_0x_lx__0000aedb + 1,iVar6);
    iVar1 = func_0x0002c370(piVar5 + 2);
    if (0x78 - iVar3 < iVar1) {
      iVar1 = 0x78 - iVar3;
    }
    func_0x0002c374(auStack_98 + iVar3,piVar5 + 2,iVar1);
    auStack_98[iVar3 + iVar1] = 0;
    func_0x0002c344(auStack_98,s_RTOS_source_src_c_threadx_os_lit_0000aef0,0x16c);
  }
  return iVar6;
}



/* Function: FUN_0000ac3e */

int FUN_0000ac3e(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_98 [31];
  
  local_98[0] = param_5;
  iVar1 = FUN_000081d0(param_1,param_2,*(undefined4 *)(DAT_0000af14 + param_3 * 4));
  if (iVar1 == 7) {
    uVar2 = 0;
    piVar5 = DAT_0000aeb8;
    do {
      if (*piVar5 == 7) goto LAB_0000ad04;
      piVar5 = piVar5 + 10;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x23);
    piVar5 = (int *)0x0;
LAB_0000ad04:
    iVar1 = *DAT_0000aed0;
    iVar4 = piVar5[1];
    if ((iVar1 != 0) &&
       (*(int *)(iVar1 + -8) == DAT_0000aed4 || *(int *)(iVar1 + -8) == DAT_0000aed4 + 1)) {
      *(int *)(iVar1 + 0x110) = iVar4;
    }
  }
  else {
    iVar4 = 0;
    if (iVar1 != 0) {
      uVar2 = 0;
      piVar5 = DAT_0000aeb8;
      do {
        if (*piVar5 == iVar1) goto LAB_0000ac8c;
        uVar2 = uVar2 + 1;
        piVar5 = piVar5 + 10;
      } while (uVar2 < 0x23);
      piVar5 = (int *)0x0;
LAB_0000ac8c:
      iVar1 = *DAT_0000aed0;
      iVar4 = piVar5[1];
      if ((iVar1 != 0) &&
         (*(int *)(iVar1 + -8) == DAT_0000aed4 || *(int *)(iVar1 + -8) == DAT_0000aed4 + 1)) {
        *(int *)(iVar1 + 0x110) = iVar4;
      }
      iVar3 = func_0x0002c36c(local_98,s_ASSERT_Error_0x_lx__0000aedb + 1,iVar4);
      iVar1 = func_0x0002c370(piVar5 + 2);
      if (0x78 - iVar3 < iVar1) {
        iVar1 = 0x78 - iVar3;
      }
      func_0x0002c374((int)local_98 + iVar3,piVar5 + 2,iVar1);
      *(undefined1 *)((int)local_98 + iVar3 + iVar1) = 0;
      func_0x0002c344(local_98,s_RTOS_source_src_c_threadx_os_lit_0000aef0,0x1ab);
    }
  }
  return iVar4;
}



/* Function: FUN_0000ad1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000ad1c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_a0 [128];
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00008120(param_1);
  iVar6 = 0;
  if (iVar1 != 0) {
    uVar2 = 0;
    piVar5 = DAT_0000aeb8;
    do {
      if (*piVar5 == iVar1) goto LAB_0000ad50;
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 10;
    } while (uVar2 < 0x23);
    piVar5 = (int *)0x0;
LAB_0000ad50:
    iVar6 = piVar5[1];
    iVar1 = *DAT_0000aed0;
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + -8);
      iVar3 = DAT_0000aed4;
      if (iVar4 != DAT_0000aed4) {
        iVar3 = _DAT_0000aed8;
      }
      if (iVar4 == DAT_0000aed4 || iVar4 == iVar3) {
        *(int *)(iVar1 + 0x110) = iVar6;
      }
    }
    iVar3 = func_0x0002c36c(auStack_a0,s_ASSERT_Error_0x_lx__0000aedb + 1,iVar6);
    iVar1 = func_0x0002c370(piVar5 + 2);
    if (0x78 - iVar3 < iVar1) {
      iVar1 = 0x78 - iVar3;
    }
    func_0x0002c374(auStack_a0 + iVar3,piVar5 + 2,iVar1);
    auStack_a0[iVar3 + iVar1] = 0;
    func_0x0002c344(auStack_a0,s_RTOS_source_src_c_threadx_os_lit_0000aef0,0x1c7);
  }
  FUN_0000748a(param_1);
  return iVar6;
}



/* Function: FUN_0000b116 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000b116(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_00006fc8();
  if (piVar2 != (int *)0x0) {
    iVar3 = piVar2[-2];
    iVar1 = DAT_0000b330;
    if (iVar3 != DAT_0000b330) {
      iVar1 = _DAT_0000b334;
    }
    if (iVar3 == DAT_0000b330 || iVar3 == iVar1) {
      return piVar2[-1];
    }
    if (*piVar2 == DAT_0000b360) {
      return DAT_0000b364;
    }
  }
  return -1;
}



/* Function: FUN_0000b3e8 */

undefined4 FUN_0000b3e8(void)

{
  if (((*DAT_0000b588 != 0) && (*DAT_0000b58c == 0)) && (*DAT_0000b590 == '\0')) {
    return 1;
  }
  return 0;
}



/* Function: FUN_0000b404 */

uint FUN_0000b404(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (((*DAT_0000b588 != 0) && (*DAT_0000b58c == 0)) && (*DAT_0000b590 == '\0')) {
    uVar1 = FUN_00005640();
    FUN_00005646();
    iVar2 = *DAT_00007044;
    if ((iVar2 != 0) && (*DAT_00007048 == 0)) {
      if (param_1 != 0) {
        *(undefined4 *)(iVar2 + 0x30) = 4;
        *(undefined4 *)(iVar2 + 0x38) = 1;
        *(int *)(iVar2 + 0x4c) = param_1;
        *(undefined4 *)(iVar2 + 0x88) = 0;
        *DAT_0000704c = *DAT_0000704c + 1;
        FUN_0000564c(uVar1);
        FUN_00008c50(iVar2);
        return *(uint *)(iVar2 + 0x88);
      }
      FUN_0000564c(uVar1);
      return 0;
    }
    FUN_0000564c(uVar1);
    return 0x13;
  }
  iVar2 = thunk_FUN_00006d14();
  do {
    uVar3 = thunk_FUN_00006d14();
  } while (uVar3 < (uint)(param_1 + iVar2));
  return uVar3;
}



/* Function: FUN_0000b526 */

void FUN_0000b526(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_0000b590;
  if (*(int *)(DAT_0000b590 + 0xc) != *(int *)(DAT_0000b590 + 8)) {
    func_0x0002c344(s_s_fiq_num____s_fiq_status_postio_0000b5b8,s_threadx_os_lite_c_0000b5a3 + 1,
                    0x668);
  }
  iVar2 = DAT_0000b5dc;
  iVar3 = *(int *)(iVar1 + 4) + -1;
  *(int *)(iVar1 + 4) = iVar3;
  FUN_0000564c(*(undefined4 *)(iVar2 + iVar3 * 4));
  return;
}



/* Function: FUN_0000b552 */

void FUN_0000b552(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0000b590;
  if (0x13 < *(uint *)(DAT_0000b590 + 4)) {
    func_0x0002c344(s_s_irq_status_postion_<_SCI_MAX_I_0000b5e0,s_threadx_os_lite_c_0000b5a3 + 1,
                    0x63f);
  }
  uVar2 = FUN_00005640();
  FUN_00005646();
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar1 + 8);
  iVar3 = *(int *)(iVar1 + 4);
  *(undefined4 *)(DAT_0000b5dc + iVar3 * 4) = uVar2;
  *(int *)(iVar1 + 4) = iVar3 + 1;
  return;
}



/* Function: FUN_0000b614 */

int FUN_0000b614(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_98 [124];
  
  iVar1 = FUN_00007998();
  iVar6 = 0;
  if (iVar1 != 0) {
    uVar2 = 0;
    piVar5 = DAT_0000b9d8;
    do {
      if (*piVar5 == iVar1) goto LAB_0000b63a;
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 10;
    } while (uVar2 < 0x23);
    piVar5 = (int *)0x0;
LAB_0000b63a:
    iVar6 = piVar5[1];
    iVar1 = *DAT_0000b9dc;
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + -8);
      iVar3 = DAT_0000b9e0;
      if (iVar4 != DAT_0000b9e0) {
        iVar3 = DAT_0000b9e4;
      }
      if (iVar4 == DAT_0000b9e0 || iVar4 == iVar3) {
        *(int *)(iVar1 + 0x110) = iVar6;
      }
    }
    iVar3 = func_0x0002c36c(auStack_98,s_ASSERT_Error_0x_lx__0000aedb + 1,iVar6);
    iVar4 = func_0x0002c370(piVar5 + 2);
    iVar1 = 0x78 - iVar3;
    if (iVar4 <= 0x78 - iVar3) {
      iVar1 = iVar4;
    }
    func_0x0002c374(auStack_98 + iVar3,piVar5 + 2,iVar1);
    auStack_98[iVar3 + iVar1] = 0;
    func_0x0002c344(auStack_98,s_RTOS_source_src_c_threadx_os_lit_0000aef0,0x524);
  }
  return iVar6;
}



/* Function: FUN_0000b6a6 */

undefined4 * FUN_0000b6a6(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_a0 [128];
  
  puVar1 = (undefined4 *)FUN_00007344(0x34,0x44444444,s_threadx_os_lite_c_0000b5a3 + 1,0x5b0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    iVar2 = FUN_00007c50(puVar1,param_1,param_2 == 1);
    if (iVar2 != 0) {
      uVar4 = 0;
      piVar6 = DAT_0000b9d8;
      do {
        if (*piVar6 == iVar2) goto LAB_0000b70a;
        uVar4 = uVar4 + 1;
        piVar6 = piVar6 + 10;
      } while (uVar4 < 0x23);
      piVar6 = (int *)0x0;
LAB_0000b70a:
      iVar7 = piVar6[1];
      iVar2 = *DAT_0000b9dc;
      if (iVar2 != 0) {
        iVar5 = *(int *)(iVar2 + -8);
        iVar3 = DAT_0000b9e0;
        if (iVar5 != DAT_0000b9e0) {
          iVar3 = DAT_0000b9e4;
        }
        if (iVar5 == DAT_0000b9e0 || iVar5 == iVar3) {
          *(int *)(iVar2 + 0x110) = iVar7;
        }
      }
      iVar3 = func_0x0002c36c(auStack_a0,s_ASSERT_Error_0x_lx__0000aedb + 1,iVar7);
      iVar5 = func_0x0002c370(piVar6 + 2);
      iVar2 = 0x78 - iVar3;
      if (iVar5 <= 0x78 - iVar3) {
        iVar2 = iVar5;
      }
      func_0x0002c374(auStack_a0 + iVar3,piVar6 + 2,iVar2);
      auStack_a0[iVar3 + iVar2] = 0;
      func_0x0002c344(auStack_a0,s_RTOS_source_src_c_threadx_os_lit_0000aef0,0x5bc);
      if (iVar7 != 0) {
        FUN_0000748a(puVar1);
        puVar1 = (undefined4 *)0x0;
      }
    }
  }
  return puVar1;
}



/* Function: FUN_0000b786 */

int FUN_0000b786(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_a0 [128];
  
  iVar1 = FUN_00007ee4();
  if (iVar1 != 0) {
    uVar2 = 0;
    piVar6 = DAT_0000b9d8;
    do {
      if (*piVar6 == iVar1) goto LAB_0000b7ae;
      uVar2 = uVar2 + 1;
      piVar6 = piVar6 + 10;
    } while (uVar2 < 0x23);
    piVar6 = (int *)0x0;
LAB_0000b7ae:
    iVar5 = piVar6[1];
    iVar1 = *DAT_0000b9dc;
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + -8);
      iVar3 = DAT_0000b9e0;
      if (iVar4 != DAT_0000b9e0) {
        iVar3 = DAT_0000b9e4;
      }
      if (iVar4 == DAT_0000b9e0 || iVar4 == iVar3) {
        *(int *)(iVar1 + 0x110) = iVar5;
      }
    }
    iVar3 = func_0x0002c36c(auStack_a0,s_ASSERT_Error_0x_lx__0000aedb + 1,iVar5);
    iVar1 = func_0x0002c370(piVar6 + 2);
    if (0x78 - iVar3 < iVar1) {
      iVar1 = 0x78 - iVar3;
    }
    func_0x0002c374(auStack_a0 + iVar3,piVar6 + 2,iVar1);
    auStack_a0[iVar3 + iVar1] = 0;
    func_0x0002c344(auStack_a0,s_RTOS_source_src_c_threadx_os_lit_0000aef0,0x5dc);
    if (iVar5 != 0) {
      return iVar5;
    }
  }
  FUN_0000748a(param_1);
  return 0;
}



/* Function: FUN_0000b820 */

int FUN_0000b820(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_98 [124];
  
  iVar1 = FUN_00007fc8();
  if (iVar1 == 0x1d) {
    uVar2 = 0;
    piVar5 = DAT_0000b9d8;
    do {
      if (*piVar5 == 0x1d) goto LAB_0000b8d6;
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 10;
    } while (uVar2 < 0x23);
    piVar5 = (int *)0x0;
LAB_0000b8d6:
    iVar1 = *DAT_0000b9dc;
    iVar4 = piVar5[1];
    if ((iVar1 != 0) &&
       (*(int *)(iVar1 + -8) == DAT_0000b9e0 || *(int *)(iVar1 + -8) == DAT_0000b9e0 + 1)) {
      *(int *)(iVar1 + 0x110) = iVar4;
    }
  }
  else {
    iVar4 = 0;
    if (iVar1 != 0) {
      uVar2 = 0;
      piVar5 = DAT_0000b9d8;
      do {
        if (*piVar5 == iVar1) goto LAB_0000b85c;
        uVar2 = uVar2 + 1;
        piVar5 = piVar5 + 10;
      } while (uVar2 < 0x23);
      piVar5 = (int *)0x0;
LAB_0000b85c:
      iVar1 = *DAT_0000b9dc;
      iVar4 = piVar5[1];
      if ((iVar1 != 0) &&
         (*(int *)(iVar1 + -8) == DAT_0000b9e0 || *(int *)(iVar1 + -8) == DAT_0000b9e0 + 1)) {
        *(int *)(iVar1 + 0x110) = iVar4;
      }
      iVar3 = func_0x0002c36c(auStack_98,s_ASSERT_Error_0x_lx__0000aedb + 1,iVar4);
      iVar1 = func_0x0002c370(piVar5 + 2);
      if (0x78 - iVar3 < iVar1) {
        iVar1 = 0x78 - iVar3;
      }
      func_0x0002c374(auStack_98 + iVar3,piVar5 + 2,iVar1);
      auStack_98[iVar3 + iVar1] = 0;
      func_0x0002c344(auStack_98,s_RTOS_source_src_c_threadx_os_lit_0000aef0,0x608);
    }
  }
  return iVar4;
}



/* Function: FUN_0000b8ee */

int FUN_0000b8ee(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_98 [124];
  
  iVar1 = FUN_00007cc4();
  iVar6 = 0;
  if (iVar1 != 0) {
    uVar2 = 0;
    piVar5 = DAT_0000b9d8;
    do {
      if (*piVar5 == iVar1) goto LAB_0000b914;
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 10;
    } while (uVar2 < 0x23);
    piVar5 = (int *)0x0;
LAB_0000b914:
    iVar6 = piVar5[1];
    iVar1 = *DAT_0000b9dc;
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + -8);
      iVar3 = DAT_0000b9e0;
      if (iVar4 != DAT_0000b9e0) {
        iVar3 = DAT_0000b9e4;
      }
      if (iVar4 == DAT_0000b9e0 || iVar4 == iVar3) {
        *(int *)(iVar1 + 0x110) = iVar6;
      }
    }
    iVar3 = func_0x0002c36c(auStack_98,s_ASSERT_Error_0x_lx__0000aedb + 1,iVar6);
    iVar1 = func_0x0002c370(piVar5 + 2);
    if (0x78 - iVar3 < iVar1) {
      iVar1 = 0x78 - iVar3;
    }
    func_0x0002c374(auStack_98 + iVar3,piVar5 + 2,iVar1);
    auStack_98[iVar3 + iVar1] = 0;
    func_0x0002c344(auStack_98,s_RTOS_source_src_c_threadx_os_lit_0000aef0,0x620);
  }
  return iVar6;
}



/* Function: FUN_0000b986 */

void FUN_0000b986(int param_1)

{
  if (param_1 == -1) {
    return;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  FUN_00006c88(0,param_1,0,DAT_0000b9e8);
  return;
}



/* Function: FUN_0000b99a */

int FUN_0000b99a(void)

{
  int iVar1;
  
  iVar1 = thunk_FUN_00006d14();
  return iVar1 + *DAT_0000b9ec;
}



/* Function: FUN_0000b9a8 */

undefined4 FUN_0000b9a8(uint param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  
  puVar1 = DAT_0000b9f0;
  puVar2 = (uint *)*DAT_0000b9f0;
  if (puVar2 != (uint *)0x0) {
    do {
      if (param_1 < *puVar2) {
        *puVar2 = *puVar2 - param_1;
      }
      else {
        *puVar2 = 0;
      }
      puVar2 = (uint *)puVar2[4];
    } while (puVar2 != (uint *)*puVar1);
  }
  *DAT_0000b9ec = *DAT_0000b9ec - param_1;
  return 0;
}



/* Decompiled: 152; failed: 0 */
