/* Automatically generated C decompilation by Ghidra. */

/* Function: Reset */

void Reset(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  undefined4 unaff_lr;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  in_r12[0xc] = param_5;
  in_r12[0xd] = &param_6;
  in_r12[0x10] = 0;
  in_r12[0x11] = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  puVar1 = DAT_000001c4;
  *DAT_000001c4 = *in_r12;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = unaff_r4;
  puVar1[5] = unaff_r5;
  puVar1[6] = unaff_r6;
  puVar1[7] = unaff_r7;
  puVar1[8] = unaff_r8;
  puVar1[9] = unaff_r9;
  puVar1[10] = unaff_r10;
  puVar1[0xb] = unaff_r11;
  puVar1[0xc] = puVar1;
  puVar1[0xd] = &param_6;
  puVar1[0xe] = unaff_lr;
  puVar1[0xf] = 0x2c;
  puVar1[0xc] = param_6;
  puVar1[0xd] = &stack0x00000008;
  puVar1[0x10] = 0;
  puVar1[0x11] = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  func_0xfffffe98();
  *(undefined4 *)(DAT_000001d0 + 4) = DAT_000001c4[0xe];
  uVar2 = coproc_movefrom_Instruction_Fault_Status();
  *DAT_000001ec = uVar2;
  uVar2 = coproc_movefrom_Instruction_Fault_Address();
  *DAT_000001f0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00000074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000001f4)();
  return;
}



/* Function: UndefinedInstruction */

void UndefinedInstruction
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  undefined4 unaff_lr;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  in_r12[0xc] = param_1;
  in_r12[0xd] = register0x00000054;
  in_r12[0x10] = 0;
  in_r12[0x11] = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  puVar1 = DAT_000001c4;
  *DAT_000001c4 = *in_r12;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = unaff_r4;
  puVar1[5] = unaff_r5;
  puVar1[6] = unaff_r6;
  puVar1[7] = unaff_r7;
  puVar1[8] = unaff_r8;
  puVar1[9] = unaff_r9;
  puVar1[10] = unaff_r10;
  puVar1[0xb] = unaff_r11;
  puVar1[0xc] = puVar1;
  puVar1[0xd] = register0x00000054;
  puVar1[0xe] = unaff_lr;
  puVar1[0xf] = 0x2c;
  puVar1[0xc] = param_5;
  puVar1[0xd] = &stack0x00000004;
  puVar1[0x10] = 0;
  puVar1[0x11] = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  func_0xfffffe98();
  *(undefined4 *)(DAT_000001d0 + 4) = DAT_000001c4[0xe];
  uVar2 = coproc_movefrom_Instruction_Fault_Status();
  *DAT_000001ec = uVar2;
  uVar2 = coproc_movefrom_Instruction_Fault_Address();
  *DAT_000001f0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00000074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000001f4)();
  return;
}



/* Function: SupervisorCall */

void SupervisorCall(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  undefined4 unaff_lr;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  in_r12[0xd] = register0x00000054;
  in_r12[0x10] = 0;
  in_r12[0x11] = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  puVar1 = DAT_000001c4;
  *DAT_000001c4 = *in_r12;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = unaff_r4;
  puVar1[5] = unaff_r5;
  puVar1[6] = unaff_r6;
  puVar1[7] = unaff_r7;
  puVar1[8] = unaff_r8;
  puVar1[9] = unaff_r9;
  puVar1[10] = unaff_r10;
  puVar1[0xb] = unaff_r11;
  puVar1[0xc] = puVar1;
  puVar1[0xd] = register0x00000054;
  puVar1[0xe] = unaff_lr;
  puVar1[0xf] = 0x2c;
  puVar1[0xc] = param_5;
  puVar1[0xd] = &stack0x00000004;
  puVar1[0x10] = 0;
  puVar1[0x11] = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  func_0xfffffe98();
  *(undefined4 *)(DAT_000001d0 + 4) = DAT_000001c4[0xe];
  uVar2 = coproc_movefrom_Instruction_Fault_Status();
  *DAT_000001ec = uVar2;
  uVar2 = coproc_movefrom_Instruction_Fault_Address();
  *DAT_000001f0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00000074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000001f4)();
  return;
}



/* Function: PrefetchAbort */

void PrefetchAbort(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  undefined4 unaff_lr;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  in_r12[0x10] = 0;
  in_r12[0x11] = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  puVar1 = DAT_000001c4;
  *DAT_000001c4 = *in_r12;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = unaff_r4;
  puVar1[5] = unaff_r5;
  puVar1[6] = unaff_r6;
  puVar1[7] = unaff_r7;
  puVar1[8] = unaff_r8;
  puVar1[9] = unaff_r9;
  puVar1[10] = unaff_r10;
  puVar1[0xb] = unaff_r11;
  puVar1[0xc] = puVar1;
  puVar1[0xd] = register0x00000054;
  puVar1[0xe] = unaff_lr;
  puVar1[0xf] = 0x2c;
  puVar1[0xc] = param_5;
  puVar1[0xd] = &stack0x00000004;
  puVar1[0x10] = 0;
  puVar1[0x11] = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  func_0xfffffe98();
  *(undefined4 *)(DAT_000001d0 + 4) = DAT_000001c4[0xe];
  uVar2 = coproc_movefrom_Instruction_Fault_Status();
  *DAT_000001ec = uVar2;
  uVar2 = coproc_movefrom_Instruction_Fault_Address();
  *DAT_000001f0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00000074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000001f4)();
  return;
}



/* Function: DataAbort */

void DataAbort(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  undefined4 unaff_lr;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  in_r12[0x10] = param_1;
  in_r12[0x11] = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  puVar1 = DAT_000001c4;
  *DAT_000001c4 = *in_r12;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = unaff_r4;
  puVar1[5] = unaff_r5;
  puVar1[6] = unaff_r6;
  puVar1[7] = unaff_r7;
  puVar1[8] = unaff_r8;
  puVar1[9] = unaff_r9;
  puVar1[10] = unaff_r10;
  puVar1[0xb] = unaff_r11;
  puVar1[0xc] = puVar1;
  puVar1[0xd] = register0x00000054;
  puVar1[0xe] = unaff_lr;
  puVar1[0xf] = 0x2c;
  puVar1[0xc] = param_5;
  puVar1[0xd] = &stack0x00000004;
  puVar1[0x10] = 0;
  puVar1[0x11] = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  func_0xfffffe98();
  *(undefined4 *)(DAT_000001d0 + 4) = DAT_000001c4[0xe];
  uVar2 = coproc_movefrom_Instruction_Fault_Status();
  *DAT_000001ec = uVar2;
  uVar2 = coproc_movefrom_Instruction_Fault_Address();
  *DAT_000001f0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00000074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000001f4)();
  return;
}



/* Function: NotUsed */

void NotUsed(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  undefined4 unaff_lr;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  in_r12[0x11] = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  puVar1 = DAT_000001c4;
  *DAT_000001c4 = *in_r12;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = unaff_r4;
  puVar1[5] = unaff_r5;
  puVar1[6] = unaff_r6;
  puVar1[7] = unaff_r7;
  puVar1[8] = unaff_r8;
  puVar1[9] = unaff_r9;
  puVar1[10] = unaff_r10;
  puVar1[0xb] = unaff_r11;
  puVar1[0xc] = puVar1;
  puVar1[0xd] = register0x00000054;
  puVar1[0xe] = unaff_lr;
  puVar1[0xf] = 0x2c;
  puVar1[0xc] = param_5;
  puVar1[0xd] = &stack0x00000004;
  puVar1[0x10] = 0;
  puVar1[0x11] = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  func_0xfffffe98();
  *(undefined4 *)(DAT_000001d0 + 4) = DAT_000001c4[0xe];
  uVar2 = coproc_movefrom_Instruction_Fault_Status();
  *DAT_000001ec = uVar2;
  uVar2 = coproc_movefrom_Instruction_Fault_Address();
  *DAT_000001f0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00000074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000001f4)();
  return;
}



/* Function: IRQ */

void IRQ(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
        undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  undefined4 unaff_lr;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  in_r12[0x11] = param_1;
  puVar1 = DAT_000001c4;
  *DAT_000001c4 = *in_r12;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = unaff_r4;
  puVar1[5] = unaff_r5;
  puVar1[6] = unaff_r6;
  puVar1[7] = unaff_r7;
  puVar1[8] = unaff_r8;
  puVar1[9] = unaff_r9;
  puVar1[10] = unaff_r10;
  puVar1[0xb] = unaff_r11;
  puVar1[0xc] = puVar1;
  puVar1[0xd] = register0x00000054;
  puVar1[0xe] = unaff_lr;
  puVar1[0xf] = 0x2c;
  puVar1[0xc] = param_5;
  puVar1[0xd] = &stack0x00000004;
  puVar1[0x10] = 0;
  puVar1[0x11] = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  func_0xfffffe98();
  *(undefined4 *)(DAT_000001d0 + 4) = DAT_000001c4[0xe];
  uVar2 = coproc_movefrom_Instruction_Fault_Status();
  *DAT_000001ec = uVar2;
  uVar2 = coproc_movefrom_Instruction_Fault_Address();
  *DAT_000001f0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00000074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000001f4)();
  return;
}



/* Function: FIQ */

void FIQ(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
        undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  undefined4 unaff_lr;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  puVar1 = DAT_000001c4;
  *DAT_000001c4 = *in_r12;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = unaff_r4;
  puVar1[5] = unaff_r5;
  puVar1[6] = unaff_r6;
  puVar1[7] = unaff_r7;
  puVar1[8] = unaff_r8;
  puVar1[9] = unaff_r9;
  puVar1[10] = unaff_r10;
  puVar1[0xb] = unaff_r11;
  puVar1[0xc] = puVar1;
  puVar1[0xd] = register0x00000054;
  puVar1[0xe] = unaff_lr;
  puVar1[0xf] = 0x2c;
  puVar1[0xc] = param_5;
  puVar1[0xd] = &stack0x00000004;
  puVar1[0x10] = 0;
  puVar1[0x11] = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  func_0xfffffe98();
  *(undefined4 *)(DAT_000001d0 + 4) = DAT_000001c4[0xe];
  uVar2 = coproc_movefrom_Instruction_Fault_Status();
  *DAT_000001ec = uVar2;
  uVar2 = coproc_movefrom_Instruction_Fault_Address();
  *DAT_000001f0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00000074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000001f4)();
  return;
}



/* Function: FUN_000001b8 */

undefined4 FUN_000001b8(void)

{
  return DAT_00000218;
}



/* Function: FUN_0000054c */

undefined4 FUN_0000054c(uint *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  char extraout_r1;
  int iVar2;
  uint *puVar3;
  char extraout_r2;
  int *piVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  longlong lVar11;
  
  if (param_2 == 0x6e) {
    param_3 = (uint *)*param_3;
    uVar8 = *param_1;
    uVar7 = param_1[8];
    if ((int)(uVar8 << 0x15) < 0) {
      *(char *)param_3 = (char)uVar7;
    }
    else if ((int)(uVar8 << 0x17) < 0) {
      *(short *)param_3 = (short)uVar7;
    }
    else if ((int)(uVar8 << 0x18) < 0) {
      *param_3 = uVar7;
      param_3[1] = (int)uVar7 >> 0x1f;
    }
    else {
      *param_3 = uVar7;
    }
    return 1;
  }
  if (param_2 == 0x70) {
    uVar7 = *param_3;
    *param_1 = *param_1 | 0x20;
    param_1[7] = 8;
    uVar8 = 0;
  }
  else {
    uVar7 = *param_1 >> 8;
    if ((*param_1 >> 7 & 1) != 0) {
      param_2 = param_2 | 0x80;
    }
    if (((param_2 == 0x69) || (param_2 == 100)) || (param_2 == 0x75)) {
      uVar6 = 0;
      puVar5 = (undefined *)0x1f040;
      if (param_2 == 0x75) {
        iVar9 = FUN_0001f726(*param_3,param_1,param_3,uVar7);
      }
      else {
        iVar9 = FUN_0001f714();
        if (iVar9 < 0) {
          iVar9 = -iVar9;
          puVar5 = &DAT_0001f044;
        }
        else if ((int)(*param_1 << 0x1e) < 0) {
          puVar5 = (undefined *)0x1f048;
        }
        else {
          if (-1 < (int)(*param_1 << 0x1d)) goto LAB_0001f01a;
          puVar5 = (undefined *)0x1f04c;
        }
        uVar6 = 1;
      }
LAB_0001f01a:
      iVar2 = 0;
      while (iVar9 != 0) {
        iVar9 = FUN_0001fa34();
        *(byte *)((int)param_1 + iVar2 + 0x24) = extraout_r1 + 0x30;
        iVar2 = iVar2 + 1;
      }
      uVar6 = FUN_0001f738(param_1,iVar2,puVar5,uVar6);
      return uVar6;
    }
    if (param_2 == 0x6f) {
      uVar7 = FUN_0001f726(*param_3,param_1,param_3,uVar7);
      uVar8 = 0;
LAB_0001f9c4:
      iVar9 = 0;
      for (; uVar7 != 0 || uVar8 != 0; uVar7 = uVar7 >> 3 | uVar1) {
        uVar1 = uVar8 << 0x1d;
        uVar8 = uVar8 >> 3;
        *(byte *)((int)param_1 + iVar9 + 0x24) = ((byte)uVar7 & 7) + 0x30;
        iVar9 = iVar9 + 1;
      }
      uVar6 = 0;
      puVar5 = &DAT_0001fa2c;
      if (((int)(*param_1 << 0x1c) < 0) && (((int)(*param_1 << 0x1a) < 0 || (iVar9 != 0)))) {
        uVar6 = 1;
        puVar5 = &DAT_0001fa30;
        param_1[7] = param_1[7] - 1;
      }
      uVar6 = FUN_0001f738(param_1,iVar9,puVar5,uVar6);
      return uVar6;
    }
    if (param_2 == 0x78) {
      uVar7 = FUN_0001f726(*param_3,param_1,param_3,uVar7);
      uVar8 = 0;
    }
    else {
      if (((param_2 == 0xe9) || (param_2 == 0xe4)) || (param_2 == 0xf5)) {
        piVar4 = (int *)((uint)((int)param_3 + 7) & 0xfffffff8);
        uVar6 = 0;
        iVar9 = *piVar4;
        iVar2 = piVar4[1];
        puVar5 = (undefined *)0x1f9b4;
        if (param_2 != 0xf5) {
          if (iVar2 < 0) {
            bVar10 = iVar9 != 0;
            iVar9 = -iVar9;
            iVar2 = -(uint)bVar10 - iVar2;
            puVar5 = &DAT_0001f9b8;
          }
          else if ((int)(*param_1 << 0x1e) < 0) {
            puVar5 = (undefined *)0x1f9bc;
          }
          else {
            if (-1 < (int)(*param_1 << 0x1d)) goto LAB_0001f98a;
            puVar5 = (undefined *)0x1f9c0;
          }
          uVar6 = 1;
        }
LAB_0001f98a:
        lVar11 = CONCAT44(iVar2,iVar9);
        iVar9 = 0;
        while (lVar11 != 0) {
          lVar11 = FUN_0001fa60();
          *(byte *)((int)param_1 + iVar9 + 0x24) = extraout_r2 + 0x30;
          iVar9 = iVar9 + 1;
        }
        uVar6 = FUN_0001f738(param_1,iVar9,puVar5,uVar6);
        return uVar6;
      }
      if (param_2 == 0xef) {
        puVar3 = (uint *)((uint)((int)param_3 + 7) & 0xfffffff8);
        uVar7 = *puVar3;
        uVar8 = puVar3[1];
        goto LAB_0001f9c4;
      }
      if (param_2 != 0xf8) {
        if ((*param_1 >> 6 & 1) != 0) {
          param_2 = param_2 | 0x80;
        }
        if (param_2 == 99) {
          puVar3 = param_1 + 9;
          *(byte *)puVar3 = (byte)*param_3;
          *(byte *)((int)param_1 + 0x25) = 0;
          uVar6 = 1;
        }
        else {
          if (param_2 != 0x73) {
            if (param_2 == 0xe3) {
              puVar3 = param_1 + 9;
              *(ushort *)(param_1 + 9) = (ushort)*param_3;
              *(ushort *)((int)param_1 + 0x26) = 0;
              uVar6 = 1;
            }
            else {
              if (param_2 != 0xf3) {
                return 0;
              }
              puVar3 = (uint *)*param_3;
              uVar6 = 0xffffffff;
            }
            if (param_1[5] == 0) {
              FUN_0001f88c(param_1,puVar3,uVar6);
            }
            return 1;
          }
          puVar3 = (uint *)*param_3;
          uVar6 = 0xffffffff;
        }
        if (param_1[5] == 0) {
          FUN_0001ef8e(param_1,puVar3,uVar6);
        }
        return 1;
      }
      puVar3 = (uint *)((uint)((int)param_3 + 7) & 0xfffffff8);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
    }
  }
  if ((int)((uint)(ushort)*param_1 << 0x14) < 0) {
    iVar9 = DAT_0001f0e0 + 0x1f060;
  }
  else {
    iVar9 = DAT_0001f0e0 + 0x1f074;
  }
  iVar2 = 0;
  for (; uVar7 != 0 || uVar8 != 0; uVar7 = uVar7 >> 4 | uVar1) {
    uVar1 = uVar8 << 0x1c;
    uVar8 = uVar8 >> 4;
    *(byte *)((int)param_1 + iVar2 + 0x24) = *(byte *)(iVar9 + (uVar7 & 0xf));
    iVar2 = iVar2 + 1;
  }
  uVar6 = 0;
  if ((int)((uint)(byte)*param_1 << 0x1c) < 0) {
    if (param_2 == 0x70) {
      uVar6 = 1;
      iVar9 = iVar9 + 0x10;
    }
    else if (iVar2 != 0) {
      uVar6 = 2;
      iVar9 = iVar9 + 0x11;
    }
  }
  uVar6 = FUN_0001f738(param_1,iVar2,iVar9,uVar6);
  return uVar6;
}



/* Function: FUN_000005dc */

undefined8 FUN_000005dc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_000205b8();
  FUN_0001f296();
  iVar1 = FUN_0001fbdc();
  iVar2 = FUN_0001fe4c(0,0);
  *(int *)(iVar1 + 4) = iVar2 + 1;
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_000005fa */

void FUN_000005fa(void)

{
  return;
}



/* Function: FUN_000005fe */

void FUN_000005fe(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar2 = FUN_0001fb64();
  FUN_000005dc(uVar2,extraout_r2);
  FUN_00003534();
  uVar6 = FUN_0001fbc0();
  FUN_000005fa();
  FUN_0001fbe8((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  do {
    piVar1 = DAT_0000064c;
    piVar3 = (int *)DAT_0000064c[1];
    piVar5 = (int *)*DAT_0000064c + 1;
    piVar4 = piVar3 + 1;
    *piVar3 = *piVar3 + *(int *)*DAT_0000064c;
    if (piVar1 <= piVar5) {
      piVar5 = piVar1 + -0x37;
    }
    if (piVar1 <= piVar4) {
      piVar4 = piVar1 + -0x37;
    }
    *piVar1 = (int)piVar5;
    piVar1[1] = (int)piVar4;
  } while( true );
}



/* Function: FUN_00000650 */

undefined4 FUN_00000650(void)

{
  return 0;
}



/* Function: FUN_00000664 */

undefined4 FUN_00000664(int param_1)

{
  do {
  } while (*(uint *)(DAT_0000081c + 0xc) < (uint)(param_1 + *(int *)(DAT_0000081c + 0xc)));
  return 0;
}



/* Function: FUN_00000690 */

void FUN_00000690(int param_1)

{
  do {
  } while (*(uint *)(DAT_0000081c + 0xc) < (uint)(param_1 + *(int *)(DAT_0000081c + 0xc)));
  return;
}



/* Function: FUN_000006bc */

void FUN_000006bc(void)

{
  return;
}



/* Function: FUN_000006c0 */

undefined4 FUN_000006c0(void)

{
  return 1;
}



/* Function: FUN_000006c8 */

undefined4 FUN_000006c8(void)

{
  return 1;
}



/* Function: FUN_000006d8 */

undefined4 FUN_000006d8(void)

{
  return 1;
}



/* Function: FUN_000006e4 */

void FUN_000006e4(void)

{
  return;
}



/* Function: FUN_000006e8 */

void FUN_000006e8(void)

{
  return;
}



/* Function: FUN_000006ec */

undefined4 FUN_000006ec(void)

{
  return 0;
}



/* Function: FUN_000006f4 */

void FUN_000006f4(void)

{
  return;
}



/* Function: FUN_00000704 */

void FUN_00000704(void)

{
  return;
}



/* Function: FUN_00000738 */

void FUN_00000738(void)

{
  return;
}



/* Function: FUN_0000073c */

void FUN_0000073c(void)

{
  return;
}



/* Function: FUN_00000740 */

undefined4 FUN_00000740(void)

{
  return 0;
}



/* Function: FUN_00000754 */

undefined4 FUN_00000754(void)

{
  return 1;
}



/* Function: FUN_0000075c */

undefined4 FUN_0000075c(void)

{
  return 0;
}



/* Function: FUN_00000764 */

undefined4 FUN_00000764(void)

{
  return 1;
}



/* Function: FUN_00000794 */

void FUN_00000794(void)

{
  return;
}



/* Function: FUN_00000798 */

void FUN_00000798(void)

{
  return;
}



/* Function: FUN_000007a4 */

void FUN_000007a4(void)

{
  return;
}



/* Function: FUN_000007a8 */

void FUN_000007a8(void)

{
  return;
}



/* Function: FUN_000007ac */

void FUN_000007ac(void)

{
  return;
}



/* Function: FUN_000007b4 */

void FUN_000007b4(void)

{
  return;
}



/* Function: FUN_000007b8 */

void FUN_000007b8(void)

{
  return;
}



/* Function: FUN_000007d4 */

void FUN_000007d4(void)

{
  return;
}



/* Function: FUN_000007d8 */

void FUN_000007d8(void)

{
  return;
}



/* Function: FUN_000007dc */

void FUN_000007dc(void)

{
  return;
}



/* Function: FUN_000007e0 */

void FUN_000007e0(void)

{
  return;
}



/* Function: FUN_000007e4 */

void FUN_000007e4(void)

{
  return;
}



/* Function: FUN_000007e8 */

void FUN_000007e8(void)

{
  return;
}



/* Function: FUN_000007ec */

void FUN_000007ec(void)

{
  return;
}



/* Function: FUN_000007f0 */

void FUN_000007f0(void)

{
  return;
}



/* Function: FUN_0000080c */

undefined4 FUN_0000080c(void)

{
  return 0;
}



/* Function: FUN_00000814 */

undefined4 FUN_00000814(void)

{
  return 0;
}



/* Function: FUN_0000088c */

int FUN_0000088c(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x20);
  puVar1 = param_2;
  while ((puVar1 < param_2 + param_3 && ((*(uint *)(*piVar2 + 0xc) & 0xff) != 0))) {
    *puVar1 = (char)*(undefined4 *)(*piVar2 + 4);
    puVar1 = puVar1 + 1;
  }
  return (int)puVar1 - (int)param_2;
}



/* Function: FUN_00000904 */

void FUN_00000904(int param_1,byte *param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  byte *pbVar3;
  
  piVar2 = *(int **)(param_1 + 0x20);
  pbVar3 = param_2 + param_3;
  for (; puVar1 = (uint *)*piVar2, param_2 < pbVar3; param_2 = param_2 + 1) {
    do {
    } while ((puVar1[3] & 0xff00) != 0);
    *puVar1 = (uint)*param_2;
  }
  do {
  } while ((puVar1[3] & 0xff00) != 0);
  return;
}



/* Function: FUN_0000094c */

void FUN_0000094c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x20);
  puVar1 = (undefined4 *)*piVar2;
  do {
  } while ((puVar1[3] & 0xff00) != 0);
  *puVar1 = param_2;
  do {
  } while ((*(uint *)(*piVar2 + 0xc) & 0xff00) != 0);
  return;
}



/* Function: FUN_0000097c */

undefined4 FUN_0000097c(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((*(uint *)(*(int *)param_1[8] + 8) & 0x8000) != 0) {
      (*(code *)*param_1)();
      return 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10000);
  return 0xffffffff;
}



/* Function: FUN_000009c4 */

void FUN_000009c4(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = 0;
  while (bVar2 = uVar1 < param_2, uVar1 = uVar1 + 1, bVar2) {
    FUN_0000094c(DAT_00000a44,*param_1);
    param_1 = param_1 + 1;
  }
  return;
}



/* Function: FUN_000009f8 */

undefined4 FUN_000009f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_110 [252];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_0001eee0(auStack_110,0xfa,param_1,&uStack_c);
  if (0 < iVar1) {
    auStack_110[iVar1] = 0;
    FUN_000009c4(auStack_110);
  }
  return 0;
}



/* Function: FUN_00000a48 */

int FUN_00000a48(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == (ushort *)0x0 && param_2 == (ushort *)0x0) {
    return 0;
  }
  if (param_1 == (ushort *)0x0) {
    if (param_2 != (ushort *)0x0) {
      return -1;
    }
  }
  else if (param_2 == (ushort *)0x0) {
    return 1;
  }
  uVar1 = *param_1;
  uVar2 = *param_2;
  while( true ) {
    uVar4 = (uint)uVar2;
    iVar3 = uVar1 - uVar4;
    if (iVar3 != 0) break;
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = *param_1;
    }
    if (uVar4 == 0 || uVar1 == 0) goto LAB_00000ab4;
    param_1 = param_1 + 1;
    uVar1 = *param_1;
    param_2 = param_2 + 1;
    uVar2 = *param_2;
  }
  if (0 < iVar3) {
    return 1;
  }
LAB_00000ab4:
  return iVar3 >> 0x1f;
}



/* Function: FUN_00000abc */

int FUN_00000abc(ushort *param_1,ushort *param_2,int param_3,uint param_4)

{
  if (param_3 == 0) {
    return 0;
  }
  if (param_1 == (ushort *)0x0 || param_2 == (ushort *)0x0) {
    return 1;
  }
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 != 0) {
      param_4 = (uint)*param_1;
    }
    if ((param_3 == 0 || param_4 == 0) || (param_4 != *param_2)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}



/* Function: FUN_00000b10 */

void FUN_00000b10(short *param_1,short *param_2)

{
  short sVar1;
  
  if (param_2 == (short *)0x0 || param_1 == (short *)0x0) {
    return;
  }
  do {
    sVar1 = *param_2;
    *param_1 = sVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (sVar1 != 0);
  return;
}



/* Function: FUN_00000b34 */

int FUN_00000b34(short *param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = param_1;
  if (param_1 != (short *)0x0) {
    do {
      psVar3 = psVar2 + 1;
      sVar1 = *psVar2;
      psVar2 = psVar3;
    } while (sVar1 != 0);
    return ((int)psVar3 - (int)param_1 >> 1) + -1;
  }
  return 0;
}



/* Function: FUN_00000b58 */

short * FUN_00000b58(short *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00000b34(param_2);
  if (iVar1 != 0) {
    while( true ) {
      if (*param_1 == 0) {
        return (short *)0x0;
      }
      iVar2 = FUN_00000abc(param_1,param_2,iVar1);
      if (iVar2 == 0) break;
      param_1 = param_1 + 1;
    }
  }
  return param_1;
}



/* Function: FUN_00000ba4 */

short * FUN_00000ba4(short *param_1,short *param_2)

{
  short *psVar1;
  
  psVar1 = param_1;
  if (param_1 != (short *)0x0 && param_2 != (short *)0x0) {
    for (; *psVar1 != 0; psVar1 = psVar1 + 1) {
    }
    for (; *param_2 != 0; param_2 = param_2 + 1) {
      *psVar1 = *param_2;
      psVar1 = psVar1 + 1;
    }
    *psVar1 = 0;
    return param_1;
  }
  return (short *)0x0;
}



/* Function: FUN_00000be4 */

void FUN_00000be4(ushort *param_1)

{
  ushort uVar1;
  
  if (param_1 != (ushort *)0x0) {
    while( true ) {
      uVar1 = *param_1;
      if (uVar1 == 0) break;
      if (uVar1 - 0x41 < 0x1a) {
        *param_1 = uVar1 + 0x20;
      }
      param_1 = param_1 + 1;
    }
    return;
  }
  return;
}



/* Function: FUN_00000c48 */

uint FUN_00000c48(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r5;
  uint uVar5;
  
  if (param_1 < 0x80) {
    return param_1;
  }
  iVar3 = 0;
  if (param_2 != 0) {
    unaff_r5 = DAT_00000ce8;
  }
  iVar4 = -1;
  if (param_2 == 0) {
    unaff_r5 = DAT_00000cec;
  }
  iVar2 = 0x10;
  while( true ) {
    iVar1 = iVar3 + (iVar4 - iVar3) / 2;
    uVar5 = (uint)*(ushort *)(unaff_r5 + iVar1 * 4);
    if (uVar5 < param_1) {
      iVar3 = iVar1;
    }
    if (param_1 < uVar5) {
      iVar4 = iVar1;
    }
    if (uVar5 == param_1) break;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (iVar2 == 0) {
    return 0;
  }
  return (uint)*(ushort *)(unaff_r5 + iVar1 * 4 + 2);
}



/* Function: FUN_00000cb4 */

void FUN_00000cb4(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  while( true ) {
    uVar2 = (uint)*(ushort *)(DAT_00000cf0 + iVar1 * 2);
    if (uVar2 == 0) {
      return;
    }
    if (uVar2 == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return;
}



/* Function: FUN_00000cf8 */

void FUN_00000cf8(uint param_1,byte *param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  
  while (bVar4 = param_3 != 0, param_3 = param_3 + -1, bVar4) {
    uVar1 = 0;
    uVar3 = (*param_2 ^ param_1) & 0xff;
    uVar2 = 0;
    do {
      if (((uVar1 ^ uVar3) & 1) == 0) {
        uVar1 = uVar1 >> 1;
      }
      else {
        uVar1 = uVar1 >> 1 ^ 0xa001;
      }
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 >> 1;
    } while (uVar2 < 8);
    param_1 = uVar1 ^ param_1 >> 8;
    param_2 = param_2 + 1;
  }
  return;
}



/* Function: FUN_00000d48 */

void FUN_00000d48(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_0000192c;
  if (param_1 != 0) {
    uVar2 = *DAT_0000192c | 0x80;
  }
  else {
    uVar2 = *DAT_0000192c & 0xffffff7f;
  }
  *DAT_0000192c = uVar2;
  if (param_1 == 0) {
    return;
  }
  puVar1[1] = puVar1[1] | 0x800;
  uVar2 = 0;
  do {
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xff);
  puVar1[1] = puVar1[1] & 0xfffff7ff;
  return;
}



/* Function: FUN_00000d90 */

void FUN_00000d90(void)

{
  int iVar1;
  
  iVar1 = DAT_00001930;
  *(uint *)(DAT_00001930 + 0x6c) = *(uint *)(DAT_00001930 + 0x6c) & 0xfffffff8;
  *(uint *)(iVar1 + 0x6c) = *(uint *)(iVar1 + 0x6c) | 1;
  *(undefined4 *)(DAT_00001938 + 4) = DAT_00001934;
  return;
}



/* Function: FUN_00000dbc */

uint FUN_00000dbc(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(DAT_00001938 + 4);
  uVar1 = uVar2 / (uint)(param_1 << 2);
  *(uint *)(DAT_0000193c + 0x2c) = *(uint *)(DAT_0000193c + 0x2c) & 0xffff003f | uVar1 << 8;
  return uVar2 / (uVar1 << 2);
}



/* Function: FUN_00000df0 */

void FUN_00000df0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = DAT_0000193c;
  if (param_1 == 0) {
    *(uint *)(DAT_0000193c + 0x2c) = *(uint *)(DAT_0000193c + 0x2c) & 0xfffffffb;
    uVar4 = *(uint *)(iVar1 + 0x2c) & 0xfffffffe;
  }
  else {
    *(uint *)(DAT_0000193c + 0x2c) = *(uint *)(DAT_0000193c + 0x2c) | 1;
    uVar4 = *(uint *)(iVar1 + 0x2c);
    iVar2 = FUN_00001d50();
    iVar3 = iVar2;
    while (((uVar4 & 2) == 0 && ((uint)(iVar3 - iVar2) < 100))) {
      uVar4 = *(uint *)(iVar1 + 0x2c);
      iVar3 = FUN_00001d50();
    }
    uVar4 = *(uint *)(iVar1 + 0x2c) | 4;
  }
  *(uint *)(iVar1 + 0x2c) = uVar4;
  return;
}



/* Function: FUN_00000e5c */

void FUN_00000e5c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00000d48(1);
  FUN_00000d90(DAT_00001934);
  iVar1 = DAT_0000193c;
  *(uint *)(DAT_0000193c + 0x2c) = *(uint *)(DAT_0000193c + 0x2c) | 0x1000000;
  uVar4 = *(uint *)(iVar1 + 0x2c);
  iVar2 = FUN_00001d50();
  iVar3 = iVar2;
  while( true ) {
    if ((uVar4 & 0x1000000) == 0) {
      return;
    }
    if (99 < (uint)(iVar3 - iVar2)) break;
    uVar4 = *(uint *)(iVar1 + 0x2c);
    iVar3 = FUN_00001d50();
  }
  return;
}



/* Function: FUN_00000ec8 */

void FUN_00000ec8(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint local_10;
  
  iVar1 = DAT_0000193c;
  if ((param_2 & 0x40) == 0) {
    local_10 = 0x40000;
  }
  else {
    local_10 = 0x200000;
  }
  if ((param_2 & 0x20) != 0) {
    local_10 = local_10 | 0x20;
  }
  if ((param_2 & 0x10) != 0) {
    local_10 = local_10 | 0x10;
  }
  if ((param_2 & 8) == 0) {
    if ((param_2 & 4) == 0) goto LAB_00000f3c;
    local_10 = local_10 | 0xc;
    uVar2 = *(uint *)(DAT_0000193c + 0x3c) | 0x8000000;
  }
  else {
    local_10 = local_10 | 0xc;
LAB_00000f3c:
    uVar2 = *(uint *)(DAT_0000193c + 0x3c) & 0xf7ffffff;
  }
  *(uint *)(DAT_0000193c + 0x3c) = uVar2;
  if ((param_2 & 2) != 0) {
    local_10 = local_10 | 2;
  }
  if ((param_2 & 1) != 0) {
    local_10 = local_10 | 1;
  }
  if ((param_3 != 0) && (param_3 == 1)) {
    local_10 = local_10 | 0xc00000;
  }
  switch(param_4) {
  case 0:
    break;
  case 1:
    goto LAB_00000fe0;
  case 2:
    local_10 = local_10 | 0x90000;
    break;
  case 3:
    goto LAB_00000fd4;
  case 4:
LAB_00000fd4:
    local_10 = local_10 | 0x20000;
    break;
  case 5:
    goto LAB_00000fe0;
  case 6:
    goto LAB_00000fe0;
  case 7:
LAB_00000fe0:
    local_10 = local_10 | 0x1a0000;
    break;
  case 8:
    goto LAB_00000fec;
  case 9:
LAB_00000fec:
    local_10 = local_10 | 0x1b0000;
  }
  *(uint *)(iVar1 + 0xc) = local_10 | param_1 << 0x18;
  return;
}



/* Function: FUN_00000ff8 */

uint FUN_00000ff8(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 500;
  FUN_00001838(0xffffffff,0);
  FUN_0000181c(0xffffffff,0);
  puVar1 = DAT_0000193c;
  DAT_0000193c[0xc] = 0xffffffff;
  puVar1[0xb] = puVar1[0xb] & 0xfff0ffff | 0x80000;
  iVar5 = DAT_00001940 + param_1 * 0x18;
  uVar6 = *(uint *)(iVar5 + 8);
  if (*(uint *)(iVar5 + 0x10) != 0) {
    uVar6 = uVar6 | 0x8000;
  }
  if (param_3 != (undefined4 *)0x0) {
    uVar6 = uVar6 | 8;
  }
  FUN_0000181c(*(uint *)(iVar5 + 0x10) | uVar6,1);
  FUN_00001838(*(uint *)(iVar5 + 0x10) | uVar6,1);
  if (param_3 != (undefined4 *)0x0) {
    puVar1[1] = param_3[1];
    *puVar1 = param_3[2];
    puVar1[0x16] = *param_3;
    puVar1[0x17] = 0;
    uVar7 = 4000;
  }
  puVar1[2] = param_2;
  FUN_00000ec8(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 0x14),0,
               *(undefined4 *)(iVar5 + 0xc));
  iVar2 = FUN_00001d50();
  iVar4 = iVar2;
  while( true ) {
    if (uVar7 <= (uint)(iVar4 - iVar2)) {
      return 0xffffffff;
    }
    uVar3 = puVar1[0xc];
    if ((*(uint *)(iVar5 + 0x10) & uVar3) != 0) break;
    if ((*(uint *)(iVar5 + 8) & ~uVar3) == 0) {
      puVar1[0xc] = *(uint *)(iVar5 + 0x10) | uVar6;
      FUN_00001854(*(undefined4 *)(iVar5 + 0xc),param_4);
      return 0;
    }
    iVar4 = FUN_00001d50();
  }
  uVar7 = *(uint *)(iVar5 + 0x10);
  puVar1[0xc] = uVar7 | uVar6;
  return uVar3 & uVar7;
}



/* Function: FUN_00001140 */

bool FUN_00001140(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = param_1;
  if (*DAT_00001938 != '\0') {
    uVar1 = 0x200;
  }
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  iVar2 = FUN_00000ff8(9,uVar1,0,&uStack_18);
  return iVar2 == 0;
}



/* Function: FUN_0000117c */

void FUN_0000117c(byte *param_1,byte *param_2)

{
  *param_2 = *param_1 >> 6;
  param_2[1] = *param_1 & 0x3f;
  param_2[2] = param_1[1];
  param_2[3] = param_1[2];
  param_2[4] = param_1[3];
  *(ushort *)(param_2 + 6) = (ushort)(param_1[5] >> 4) + (ushort)param_1[4] * 0x10;
  param_2[8] = param_1[5] & 0xf;
  param_2[9] = param_1[6] >> 7;
  param_2[10] = param_1[6] >> 6 & 1;
  param_2[0xb] = (byte)((param_1[6] & 0x20) >> 5);
  param_2[0xc] = (byte)((param_1[6] & 0x10) >> 4);
  param_2[0xd] = (byte)(((uint)param_1[6] << 0x1c) >> 0x1a) + (param_1[7] >> 6);
  *(uint *)(param_2 + 0x10) =
       (uint)param_1[9] + ((uint)param_1[8] + (param_1[7] & 0x3f) * 0x100) * 0x100;
  param_2[0x14] = param_1[10] >> 7;
  param_2[0x15] = param_1[10] >> 6 & 1;
  param_2[0x16] = (byte)(((uint)param_1[10] << 0x1a) >> 0x19) - ((char)param_1[0xb] >> 7);
  param_2[0x17] = param_1[0xb] & 0x7f;
  param_2[0x18] = param_1[0xc] >> 7;
  param_2[0x14] = param_1[0xc] >> 5 & 3;
  param_2[0x1a] = param_1[0xc] >> 2 & 7;
  param_2[0x1b] = (byte)(((uint)param_1[0xc] << 0x1e) >> 0x1c) + (param_1[0xd] >> 6);
  param_2[0x1c] = (byte)((param_1[0xd] & 0x20) >> 5);
  param_2[0x19] = param_1[0xd] & 0x1f;
  param_2[0x1e] = param_1[0xe] >> 7;
  param_2[0x1f] = param_1[0xe] >> 6 & 1;
  param_2[0x20] = (byte)((param_1[0xe] & 0x20) >> 5);
  param_2[0x21] = (byte)((param_1[0xe] & 0x10) >> 4);
  param_2[0x22] = param_1[0xe] >> 2 & 3;
  param_2[0x1d] = param_1[0xe] & 3;
  return;
}



/* Function: FUN_0000133c */

void FUN_0000133c(byte *param_1,byte *param_2)

{
  *param_2 = *param_1 >> 6;
  param_2[1] = *param_1 & 0x3f;
  param_2[2] = param_1[1];
  param_2[3] = param_1[2];
  param_2[4] = param_1[3];
  *(ushort *)(param_2 + 6) = (ushort)(param_1[5] >> 4) + (ushort)param_1[4] * 0x10;
  param_2[8] = param_1[5] & 0xf;
  param_2[9] = param_1[6] >> 7;
  param_2[10] = param_1[6] >> 6 & 1;
  param_2[0xb] = (byte)((param_1[6] & 0x20) >> 5);
  param_2[0xc] = (byte)((param_1[6] & 0x10) >> 4);
  param_2[0xd] = param_1[6] >> 2 & 3;
  *(ushort *)(param_2 + 0xe) =
       (ushort)(param_1[8] >> 6) + ((param_1[6] & 3) * 0x100 + (ushort)param_1[7]) * 4;
  param_2[0x10] = param_1[8] >> 3 & 7;
  param_2[0x11] = param_1[8] & 7;
  param_2[0x12] = param_1[9] >> 5;
  param_2[0x13] = param_1[9] >> 2 & 7;
  param_2[0x14] = (byte)(((uint)param_1[9] << 0x1e) >> 0x1d) - ((char)param_1[10] >> 7);
  param_2[0x15] = param_1[10] >> 6 & 1;
  param_2[0x16] = (byte)(((uint)param_1[10] << 0x1a) >> 0x19) - ((char)param_1[0xb] >> 7);
  param_2[0x17] = param_1[0xb] & 0x7f;
  param_2[0x18] = param_1[0xc] >> 7;
  param_2[0x19] = param_1[0xc] >> 5 & 3;
  param_2[0x1a] = param_1[0xc] >> 2 & 7;
  param_2[0x1b] = (byte)(((uint)param_1[0xc] << 0x1e) >> 0x1c) + (param_1[0xd] >> 6);
  param_2[0x1c] = (byte)((param_1[0xd] & 0x20) >> 5);
  param_2[0x1d] = param_1[0xd] & 0x1f;
  param_2[0x1e] = param_1[0xe] >> 7;
  param_2[0x1f] = param_1[0xe] >> 6 & 1;
  param_2[0x20] = (byte)((param_1[0xe] & 0x20) >> 5);
  param_2[0x21] = (byte)((param_1[0xe] & 0x10) >> 4);
  param_2[0x22] = param_1[0xe] >> 2 & 3;
  param_2[0x23] = param_1[0xe] & 3;
  return;
}



/* Function: FUN_00001538 */

bool FUN_00001538(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  byte local_50;
  undefined1 local_4f;
  char local_4e;
  byte local_4d;
  byte local_48;
  ushort local_42;
  int local_40;
  byte local_3c;
  byte local_2c [16];
  ushort local_1c;
  
  iVar3 = FUN_00000ff8(0,0,0,&local_50);
  if (iVar3 == 0) {
    uVar4 = FUN_00000ff8(5,0x1aa,0,&local_50);
    bVar6 = uVar4 == 0;
    if (bVar6) {
      uVar4 = (uint)local_4d;
    }
    bVar7 = bVar6 && uVar4 == 0xaa;
    if (bVar6 && uVar4 == 0xaa) {
      bVar7 = local_4e == '\x01';
    }
    if (bVar7) {
      iVar3 = FUN_00001d50();
      uVar2 = DAT_00001944;
      do {
        iVar5 = FUN_00000ff8(0xf,0,0,&local_50);
        if (iVar5 != 0) {
          return false;
        }
        iVar5 = FUN_00000ff8(0x12,uVar2,0,&local_50);
        pcVar1 = DAT_00001938;
        if (iVar5 != 0) {
          return false;
        }
        if ((local_50 & 0x80) != 0) {
          if ((local_50 & 0x40) == 0) {
            *DAT_00001938 = '\0';
          }
          else {
            *DAT_00001938 = '\x01';
          }
          iVar3 = FUN_00000ff8(1,0,0,&local_50);
          if (iVar3 != 0) {
            return false;
          }
          iVar3 = FUN_00000ff8(2,0,0,&local_50);
          if (iVar3 != 0) {
            return false;
          }
          local_1c = CONCAT11(local_50,local_4f);
          iVar3 = FUN_00000ff8(6,(uint)local_1c << 0x10,0,local_2c);
          if (iVar3 != 0) {
            return false;
          }
          if (local_2c[0] >> 6 == 1) {
            if (*pcVar1 == '\0') {
              FUN_0000133c(local_2c,&local_50);
              iVar3 = local_42 + 1 << (((uint)local_3c + (uint)local_48) - 8 & 0xff);
            }
            else {
              FUN_0000117c();
              iVar3 = local_40 * 0x400 + 0x400;
            }
            *(int *)(pcVar1 + 8) = iVar3;
          }
          iVar3 = FUN_00000ff8(4,(uint)local_1c << 0x10,0,&local_50);
          if (iVar3 != 0) {
            return false;
          }
          iVar3 = FUN_00001140(0x200);
          return iVar3 != 0;
        }
        iVar5 = FUN_00001d50();
      } while ((uint)(iVar5 - iVar3) < 0xfa1);
    }
  }
  return false;
}



/* Function: FUN_0000170c */

undefined4 FUN_0000170c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if (*DAT_00001938 == '\0') {
    param_1 = param_1 << 9;
  }
  puVar3 = &local_10;
  local_c = 0x200;
  local_10 = param_3;
  local_8 = param_2;
  if (param_2 == 1) {
    uVar1 = 0xd;
  }
  else {
    iVar2 = FUN_00000ff8(0xe,param_1,puVar3,auStack_20);
    puVar3 = (undefined4 *)0x0;
    param_1 = 0;
    uVar1 = 7;
    if (iVar2 != 0) {
      FUN_00000ff8(7,0,0,auStack_20);
      return 0;
    }
  }
  iVar2 = FUN_00000ff8(uVar1,param_1,puVar3,auStack_20);
  if (iVar2 != 0) {
    return 0;
  }
  return 1;
}



/* Function: FUN_00001794 */

undefined4 FUN_00001794(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if (*DAT_00001938 == '\0') {
    param_1 = param_1 << 9;
  }
  puVar3 = &local_10;
  local_c = 0x200;
  local_10 = param_3;
  local_8 = param_2;
  if (param_2 == 1) {
    uVar1 = 10;
  }
  else {
    iVar2 = FUN_00000ff8(0xb,param_1,puVar3,auStack_20);
    puVar3 = (undefined4 *)0x0;
    param_1 = 0;
    uVar1 = 7;
    if (iVar2 != 0) {
      FUN_00000ff8(7,0,0,auStack_20);
      return 0;
    }
  }
  iVar2 = FUN_00000ff8(uVar1,param_1,puVar3,auStack_20);
  if (iVar2 != 0) {
    return 0;
  }
  return 1;
}



/* Function: FUN_0000181c */

void FUN_0000181c(uint param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = *(uint *)(DAT_0000193c + 0x34) & ~param_1;
  }
  else {
    param_1 = param_1 | *(uint *)(DAT_0000193c + 0x34);
  }
  *(uint *)(DAT_0000193c + 0x34) = param_1;
  return;
}



/* Function: FUN_00001838 */

void FUN_00001838(uint param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = *(uint *)(DAT_0000193c + 0x38) & ~param_1;
  }
  else {
    param_1 = param_1 | *(uint *)(DAT_0000193c + 0x38);
  }
  *(uint *)(DAT_0000193c + 0x38) = param_1;
  return;
}



/* Function: FUN_00001854 */

void FUN_00001854(undefined4 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar4 = *(undefined4 *)(DAT_0000193c + 0x10);
  uVar5 = *(undefined4 *)(DAT_0000193c + 0x14);
  uVar6 = *(undefined4 *)(DAT_0000193c + 0x18);
  uVar7 = *(undefined4 *)(DAT_0000193c + 0x1c);
  uVar1 = (undefined1)((uint)uVar4 >> 8);
  uVar2 = (undefined1)((uint)uVar4 >> 0x10);
  uVar3 = (undefined1)((uint)uVar4 >> 0x18);
  switch(param_1) {
  case 0:
    return;
  case 1:
    break;
  case 2:
    *param_2 = (char)((uint)uVar7 >> 0x10);
    param_2[1] = (char)((uint)uVar7 >> 8);
    param_2[2] = (char)uVar7;
    param_2[3] = (char)((uint)uVar6 >> 0x18);
    param_2[4] = (char)((uint)uVar6 >> 0x10);
    param_2[5] = (char)((uint)uVar6 >> 8);
    param_2[6] = (char)uVar6;
    param_2[7] = (char)((uint)uVar5 >> 0x18);
    param_2[8] = (char)((uint)uVar5 >> 0x10);
    param_2[9] = (char)((uint)uVar5 >> 8);
    param_2[10] = (char)uVar5;
    param_2[0xb] = uVar3;
    param_2[0xc] = uVar2;
    param_2[0xd] = uVar1;
    param_2[0xe] = (char)uVar4;
    return;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  default:
    return;
  }
  *param_2 = uVar3;
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  param_2[3] = (char)uVar4;
  return;
}



/* Function: FUN_00001948 */

void FUN_00001948(void)

{
  int iVar1;
  
  iVar1 = DAT_00001c28;
  *(uint *)(DAT_00001c28 + 0x14) = *(uint *)(DAT_00001c28 + 0x14) | 1;
  *(uint *)(iVar1 + -0x15ff64) = *(uint *)(iVar1 + -0x15ff64) & 0xfffffcff;
  *(uint *)(iVar1 + -0x15ff64) = *(uint *)(iVar1 + -0x15ff64) | 0x100;
  *(uint *)(iVar1 + -0x15ff60) = *(uint *)(iVar1 + -0x15ff60) & 0xfffffcff;
  *(uint *)(iVar1 + -0x15ff60) = *(uint *)(iVar1 + -0x15ff60) | 0x100;
  return;
}



/* Function: FUN_00001990 */

void FUN_00001990(void)

{
  int iVar1;
  
  iVar1 = DAT_00001c2c;
  *(uint *)(DAT_00001c2c + 0x80) = *(uint *)(DAT_00001c2c + 0x80) | 0x33;
  *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffffffec;
  *(uint *)(iVar1 + 0x8c) = *(uint *)(iVar1 + 0x8c) | 0x33;
  *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) & 0xffffffec;
  *(uint *)(iVar1 + 0x94) = *(uint *)(iVar1 + 0x94) | 1;
  *(uint *)(iVar1 + 0x98) = *(uint *)(iVar1 + 0x98) | 0x10;
  *(uint *)(iVar1 + 0x9c) = *(uint *)(iVar1 + 0x9c) | 2;
  *(uint *)(iVar1 + 0x9c) = *(uint *)(iVar1 + 0x9c) & 0xfffffffe;
  *(uint *)(iVar1 + 0xa0) = *(uint *)(iVar1 + 0xa0) | 0x33;
  *(uint *)(iVar1 + 0xa8) = *(uint *)(iVar1 + 0xa8) & 0xffffffdf;
  *(uint *)(iVar1 + 0xac) = *(uint *)(iVar1 + 0xac) | 0x33;
  return;
}



/* Function: FUN_00001a1c */

undefined4 FUN_00001a1c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_00001c34;
  uVar1 = DAT_00001c30;
  *(uint *)(DAT_00001c34 + 0x300) = *(uint *)(DAT_00001c34 + 0x300) | 3;
  FUN_00001ae8();
  FUN_00001b08(uVar1);
  FUN_00001b88(uVar1);
  *(undefined4 *)(DAT_00001c38 + 0x54) = 3;
  FUN_00001ae8();
  *(uint *)(DAT_00001c3c + 0x20) = *(uint *)(DAT_00001c3c + 0x20) | 3;
  *(uint *)(iVar2 + 0x220) = *(uint *)(iVar2 + 0x220) | 3;
  *(uint *)(iVar2 + 0x2f8) = *(uint *)(iVar2 + 0x2f8) | 1;
  return 0;
}



/* Function: FUN_00001a98 */

void FUN_00001a98(void)

{
  *(uint *)(DAT_00001c44 + 0xb0) = *(uint *)(DAT_00001c44 + 0xb0) | 0x2800;
  *(uint *)(DAT_00001c3c + 0x20) = *(uint *)(DAT_00001c3c + 0x20) & 0xfffffffc;
  *(uint *)(DAT_00001c34 + 0x300) = *(uint *)(DAT_00001c34 + 0x300) & 0xfffffffc;
  FUN_00001948();
  FUN_00001990();
  FUN_00001a1c();
  *(undefined4 *)(DAT_00001c40 + 4) = 0x30;
  return;
}



/* Function: FUN_00001ae8 */

void FUN_00001ae8(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x100);
  return;
}



/* Function: FUN_00001b08 */

undefined4 FUN_00001b08(uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_1 / DAT_00001c4c;
  bVar2 = param_1 != DAT_00001c4c * uVar1;
  *(uint *)(DAT_00001c38 + 0x38) =
       (bVar2 + uVar1) - 1 |
       DAT_00001c48 & *(uint *)(DAT_00001c38 + 0x38) | (bVar2 + uVar1) * 0x100 - 0x100 |
       DAT_00001c50 + (bVar2 + uVar1) * 0x10000;
  *(uint *)(DAT_00001c34 + 0x270) = *(uint *)(DAT_00001c34 + 0x270) | 3;
  return 0;
}



/* Function: FUN_00001b88 */

void FUN_00001b88(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  param_1 = param_1 / DAT_00001c58;
  puVar3 = (uint *)((uint)DAT_00001c5c | (int)DAT_00001c5c >> 0x1c);
  uVar2 = *puVar3;
  for (puVar1 = DAT_00001c54; *puVar1 < param_1 * 1000000; puVar1 = puVar1 + 2) {
  }
  *DAT_00001c5c = *DAT_00001c5c & 0xffffff3f | 5 | ((byte)puVar1[1] & 3) << 6;
  *puVar3 = uVar2 & 0xc0000000 |
            ((param_1 % 0x1a) * 0x800000) / 0x1a & 0x7fffff | (param_1 / 0x1a & 0x7f) << 0x17;
  uVar2 = 0;
  do {
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xc80);
  return;
}



/* Function: FUN_00001c78 */

undefined4 FUN_00001c78(void)

{
  return DAT_00001d18;
}



/* Function: FUN_00001c80 */

void FUN_00001c80(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = DAT_00001d1c;
  uVar2 = FUN_00002078(DAT_00001d1c);
  FUN_000020b4(uVar1,uVar2 & 0xfffffe0f);
  uVar2 = FUN_00002078(uVar1);
  FUN_000020b4(uVar1,uVar2 | (param_1 & 0x1f) << 4);
  return;
}



/* Function: FUN_00001cbc */

void FUN_00001cbc(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 10000;
  FUN_000032b0();
  do {
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  FUN_00003314();
  iVar2 = func_0xffff0600();
  do {
    iVar1 = func_0xffff0600();
  } while ((uint)(iVar1 - iVar2) < 500);
  return;
}



/* Function: FUN_00001cf8 */

void FUN_00001cf8(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = 10000;
  FUN_000032b0();
  do {
    bVar2 = iVar1 != 0;
    iVar1 = iVar1 + -1;
  } while (bVar2);
  return;
}



/* Function: thunk_FUN_000034fc */

void thunk_FUN_000034fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = (uint)(param_1 * 1000) / 0x1e;
  uStack_18 = 1;
  uStack_14 = 0;
  uStack_c = param_4;
  FUN_00002f18(&uStack_18);
  return;
}



/* Function: FUN_00001d50 */

undefined4 FUN_00001d50(void)

{
  return *(undefined4 *)(DAT_00002020 + 0xc);
}



/* Function: FUN_00001d5c */

void FUN_00001d5c(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = DAT_00002024;
  uVar1 = FUN_00002078(DAT_00002024);
  FUN_000020b4(iVar2,uVar1 | 4);
  iVar2 = iVar2 + 8;
  uVar1 = FUN_00002078(iVar2);
  FUN_000020b4(iVar2,uVar1 | 4);
  return;
}



/* Function: FUN_00001dc8 */

void FUN_00001dc8(int param_1)

{
  do {
  } while (*(uint *)(DAT_00002020 + 0xc) < (uint)(*(int *)(DAT_00002020 + 0xc) + param_1));
  return;
}



/* Function: FUN_00001e10 */

void FUN_00001e10(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00001dc8(0x14);
  puVar2 = DAT_00002030;
  iVar1 = DAT_0000202c;
  *DAT_00002030 = *(undefined4 *)(DAT_0000202c + 8);
  puVar2[1] = *(undefined4 *)(iVar1 + 0x2c);
  iVar1 = DAT_0000202c;
  *(undefined4 *)(DAT_0000202c + 0x10) = 0xfff;
  *(uint *)(iVar1 + 0x90000) = *(uint *)(iVar1 + 0x90000) & 0xfffffeff;
  *(uint *)(iVar1 + 0x90010) = *(uint *)(iVar1 + 0x90010) & 0xfffffffd;
  return;
}



/* Function: FUN_00001e3c */

undefined4 FUN_00001e3c(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 2;
  FUN_00001f90();
  FUN_00001efc();
  FUN_00001e10();
  if ((*DAT_00002030 & 0xf) != 0) {
    uVar1 = 0;
    do {
      if ((*DAT_00002030 & 0xf & 1 << (uVar1 & 0xff)) != 0) {
        uVar2 = *(uint *)(DAT_00002030 + 4) >> ((uVar1 & 0x1f) << 3) & 0x77;
        if (uVar2 == 0x10) {
          uVar3 = 0;
        }
        else if (uVar2 == 0x11) {
          uVar3 = 1;
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 4);
  }
  return uVar3;
}



/* Function: FUN_00001ea8 */

void FUN_00001ea8(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00001e3c();
  FUN_000009f8(s_boot0_UART_JTAG_mode____d_00002034,iVar2);
  iVar1 = DAT_00002050;
  if (iVar2 == 2) {
    return;
  }
  *(uint *)(DAT_00002050 + 0x18) = *(uint *)(DAT_00002050 + 0x18) | 0x40000000;
  if (iVar2 != 1) {
    return;
  }
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x80000000;
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x20000000;
  return;
}



/* Function: FUN_00001efc */

void FUN_00001efc(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_0000201c;
  uVar2 = 0;
  *DAT_0000201c = *DAT_0000201c | 0x100;
  puVar1[4] = puVar1[4] | 2;
  puVar1[2] = puVar1[2] | 0x100;
  do {
    uVar2 = uVar2 + 1;
  } while (uVar2 < 100);
  puVar1[2] = puVar1[2] & 0xfffffeff;
  puVar1 = DAT_0000202c;
  DAT_0000202c[4] = 0xfff;
  puVar1[1] = 0xf;
  puVar1[6] = 0xffff;
  puVar1[10] = 0;
  puVar1[7] = 0xf;
  *puVar1 = 0;
  *puVar1 = *puVar1 | 0x30300;
  *puVar1 = DAT_00002054 | *puVar1;
  return;
}



/* Function: FUN_00001f90 */

void FUN_00001f90(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  bool bVar6;
  
  puVar2 = DAT_0000201c;
  *DAT_0000201c = *DAT_0000201c | 0x100000;
  puVar2[0x2c] = puVar2[0x2c] | 0x1000;
  puVar2[2] = puVar2[2] | 0x200000;
  iVar1 = 0x32;
  do {
    bVar6 = iVar1 != 0;
    iVar1 = iVar1 + -1;
  } while (bVar6);
  puVar2[2] = puVar2[2] & 0xffdfffff;
  puVar5 = DAT_00002058 + 1;
  puVar2 = DAT_00002058;
  do {
    *puVar2 = *puVar2 & 0xffffffbf;
    puVar3 = puVar2 + 1;
    *puVar2 = *puVar2 | 0x80;
    puVar4 = DAT_0000205c;
    puVar2 = puVar3;
  } while (puVar3 <= puVar5);
  *DAT_0000205c = *DAT_0000205c & 0xffffffbf;
  puVar4 = (uint *)((uint)puVar4 | (int)puVar4 >> 0x1c);
  *puVar4 = *puVar4 & 0xffffffbf;
  return;
}



/* Function: FUN_00002060 */

bool FUN_00002060(int param_1)

{
  return (uint)(param_1 + DAT_0000214c) < 0x1001;
}



/* Function: FUN_00002078 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002078(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = _DAT_00002150;
  *(undefined4 *)(_DAT_00002150 + 0x28) = param_1;
  iVar2 = FUN_00001d50();
  iVar3 = iVar2;
  do {
    uVar4 = *(uint *)(iVar1 + 0x2c);
    if (3 < (uint)(iVar3 - iVar2)) {
      FUN_000009f8(s___adi_reg_read_timeout__00002152 + 2);
    }
    iVar3 = FUN_00001d50();
  } while ((uVar4 & 0x80000000) != 0);
  return;
}



/* Function: FUN_000020b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000020b4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 1000;
  iVar2 = FUN_00001d50();
  iVar1 = _DAT_00002150;
  iVar3 = iVar2;
  do {
    if ((*(uint *)(iVar1 + 0x30) & 0x800) == 0) {
      if (iVar4 == 0) {
        return 0xffffffff;
      }
      *param_1 = param_2;
      return 0;
    }
    if (3 < (uint)(iVar3 - iVar2)) {
      FUN_000009f8(s_adi_reg_write_timeout__0000216c);
    }
    iVar3 = FUN_00001d50();
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0xffffffff;
}



/* Function: FUN_00002114 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002114(void)

{
  int iVar1;
  
  *DAT_00002184 = 0x10000;
  iVar1 = _DAT_00002150;
  *(undefined4 *)(_DAT_00002150 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 0x80000000;
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xbfffffff;
  return;
}



/* Function: FUN_00002188 */

uint FUN_00002188(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  iVar1 = DAT_000024ec;
  uVar4 = 0;
  if (param_1 == 0) {
    switch(param_2) {
    case 0:
      return 0xf;
    case 1:
      goto LAB_000022f0;
    case 2:
LAB_00002308:
      pcVar3 = s_dcdcgen_00002458;
      break;
    case 3:
LAB_000022f8:
      pcVar3 = s_dcdcmem_00002444;
      break;
    case 4:
LAB_000022e8:
      pcVar3 = s_dcdccore_00002430;
      break;
    case 5:
      return 0xf;
    case 6:
      return 0xf;
    case 7:
LAB_00002348:
      pcVar3 = s_vddsim0_000024a0;
      break;
    case 8:
LAB_00002350:
      pcVar3 = s_vddsim1_000024a8;
      break;
    case 9:
LAB_00002358:
      pcVar3 = s_vddsim2_000024b0;
      break;
    case 10:
      return 0xf;
    case 0xb:
LAB_00002370:
      pcVar3 = s_vddusb_000024cc;
      break;
    case 0xc:
      return 0xf;
    case 0xd:
      return 0xf;
    case 0xe:
LAB_00002338:
      pcVar3 = s_vddsdio_0000248c;
      break;
    case 0xf:
LAB_00002360:
      pcVar3 = s_vddcama_000024b8;
      break;
    case 0x10:
      pcVar3 = s_vddcamd_00002428;
      break;
    case 0x11:
      return 0xf;
    case 0x12:
LAB_00002320:
      pcVar3 = s_vdd18_00002474;
      break;
    case 0x13:
LAB_00002328:
      pcVar3 = s_vdd28_0000247c;
      break;
    case 0x14:
      return 0xf;
    case 0x15:
      return 0xf;
    case 0x16:
      return 0xf;
    case 0x17:
LAB_00002318:
      pcVar3 = s_dcdcwpa_0000246c;
      break;
    case 0x18:
LAB_00002368:
      pcVar3 = s_vddcamio_000024c0;
      break;
    case 0x19:
      return 0xf;
    case 0x1a:
LAB_00002300:
      pcVar3 = s_vddcamcore_0000244c;
      break;
    case 0x1b:
LAB_00002330:
      pcVar3 = s_vddwcn_00002484;
      break;
    case 0x1c:
LAB_00002310:
      pcVar3 = s_vddrfa1v8_00002460;
      break;
    case 0x1d:
      return 0xf;
    case 0x1e:
      return 0xf;
    case 0x1f:
LAB_00002340:
      pcVar3 = s_vddsdcore_00002494;
      break;
    case 0x20:
      return 0xf;
    case 0x21:
      return 0xf;
    case 0x22:
LAB_00002378:
      pcVar3 = s_vddwifipa_000024d4;
      break;
    case 0x23:
      return 0xf;
    case 0x24:
LAB_00002380:
      pcVar3 = s_vddemmccore_000024e0;
      break;
    default:
      goto switchD_00002254_default;
    }
  }
  else {
    if (param_1 != 1) {
      return 0xf;
    }
    switch(param_2) {
    case 2:
      goto LAB_00002370;
    case 3:
      goto LAB_00002338;
    case 4:
      goto LAB_00002320;
    case 5:
      goto LAB_00002328;
    case 6:
      goto LAB_00002360;
    case 7:
      goto LAB_00002350;
    case 8:
      goto LAB_00002348;
    case 9:
      goto LAB_00002358;
    case 10:
      return 0xf;
    case 0xb:
      break;
    case 0xc:
      goto LAB_000022f8;
    case 0xd:
      return 0xf;
    case 0xe:
      return 0xf;
    case 0xf:
      return 0xf;
    case 0x10:
      return 0xf;
    case 0x11:
      return 0xf;
    case 0x12:
      return 0xf;
    case 0x13:
      return 0xf;
    case 0x14:
      goto LAB_00002318;
    case 0x15:
      goto LAB_00002308;
    case 0x16:
      return 0xf;
    case 0x17:
      goto LAB_00002368;
    case 0x18:
      goto LAB_000022e8;
    case 0x19:
      return 0xf;
    case 0x1a:
      goto LAB_00002300;
    case 0x1b:
      goto LAB_00002330;
    case 0x1c:
      goto LAB_00002310;
    case 0x1d:
      return 0xf;
    case 0x1e:
      return 0xf;
    case 0x1f:
      goto LAB_00002340;
    case 0x20:
      return 0xf;
    case 0x21:
      return 0xf;
    case 0x22:
      goto LAB_00002378;
    case 0x23:
      return 0xf;
    case 0x24:
      goto LAB_00002380;
    default:
      return 0xf;
    }
LAB_000022f0:
    pcVar3 = s_dcdcarm_0000243c;
  }
  if (pcVar3 != (char *)0x0) {
    do {
      iVar2 = FUN_0001f5f4(*(undefined4 *)(iVar1 + uVar4 * 0x5c),pcVar3);
      if (iVar2 == 0) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 0xf);
  }
switchD_00002254_default:
  return 0xf;
}



/* Function: FUN_000023c8 */

int FUN_000023c8(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = FUN_00002188();
  if ((0xe < (uVar1 & 0xff)) || (iVar3 = DAT_000024ec + (uVar1 & 0xff) * 0x5c, iVar3 == 0)) {
    uVar2 = FUN_000006ec(s_ldo_type__d__id__d_000024f0,param_1,param_2);
    FUN_000006e8(s_ldo_ctl____NULL_00002510,s_ldo_phy_c_00002504,0x13b,uVar2);
  }
  return iVar3;
}



/* Function: FUN_00002520 */

void FUN_00002520(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = DAT_00002744;
  *DAT_00002744 = 0;
  iVar2 = FUN_00002ec8();
  *(int *)(puVar1 + 4) = iVar2;
  if (iVar2 == 0) {
    FUN_000006e4(s_NULL____g_ldo_ctl_tab_00002748,s_ldo_phy_c_00002504,0x199);
  }
  for (uVar5 = 0; *(int *)(*(int *)(puVar1 + 4) + uVar5 * 0x18) != 0x25; uVar5 = uVar5 + 1 & 0xff) {
    if (*(int *)(*(int *)(puVar1 + 4) + uVar5 * 0x18 + 0x10) != 8) {
      thunk_FUN_00002834();
    }
    *(undefined4 *)(*(int *)(puVar1 + 4) + uVar5 * 0x18 + 0x14) = 0;
  }
  for (uVar5 = 0; *(int *)(*(int *)(puVar1 + 4) + uVar5 * 0x18) != 0x25; uVar5 = uVar5 + 1 & 0xff) {
    iVar2 = *(int *)(puVar1 + 4) + uVar5 * 0x18;
    uVar3 = *(undefined4 *)(iVar2 + 4);
    if (*(int *)(iVar2 + 0xc) == 1) {
      uVar4 = FUN_00002078(uVar3);
      iVar2 = *(int *)(puVar1 + 4) + uVar5 * 0x18;
      uVar4 = uVar4 & ~*(uint *)(iVar2 + 8);
    }
    else {
      uVar4 = FUN_00002078(uVar3);
      iVar2 = *(int *)(puVar1 + 4) + uVar5 * 0x18;
      uVar4 = *(ushort *)(iVar2 + 8) | uVar4;
    }
    FUN_000020b4(*(undefined4 *)(iVar2 + 4),uVar4);
  }
  return;
}



/* Function: FUN_00002600 */

undefined4 FUN_00002600(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_000023c8(0,param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_000006ec(s_ldo_id____d_00002760,param_1);
    FUN_000006e8(s_ldo_ctl____NULL_00002510 + 4,s_ldo_phy_c_00002504,0x1b5,uVar2);
  }
  if (*(int *)(iVar1 + 8) != 0) {
    FUN_000006f4(*(int *)(iVar1 + 8));
    if (*(short *)(iVar1 + 6) == 0) {
      uVar3 = FUN_00002078(*(undefined4 *)(iVar1 + 8));
      FUN_000020b4(*(undefined4 *)(iVar1 + 8),uVar3 & ~*(uint *)(iVar1 + 0xc));
    }
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    FUN_00000704();
    FUN_000006c8(s_LDO__d__will_be_turn_on_ref_cnt_0_0000276c,param_1,*(undefined2 *)(iVar1 + 6));
    return 0;
  }
  return 1;
}



/* Function: FUN_0000269c */

undefined4 FUN_0000269c(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = FUN_000023c8(0,param_1);
  if (iVar2 == 0) {
    uVar3 = FUN_000006ec(s_ldo_id____d_00002760,param_1);
    FUN_000006e8(s_ldo_ctl____NULL_00002510 + 4,s_ldo_phy_c_00002504,0x1d5,uVar3);
  }
  if (*(int *)(iVar2 + 8) != 0) {
    FUN_000006f4(*(int *)(iVar2 + 8));
    sVar1 = *(short *)(iVar2 + 6);
    if ((sVar1 == 0) || (*(short *)(iVar2 + 6) = sVar1 + -1, sVar1 == 1)) {
      uVar4 = FUN_00002078(*(undefined4 *)(iVar2 + 8));
      FUN_000020b4(*(undefined4 *)(iVar2 + 8),*(ushort *)(iVar2 + 0xc) | uVar4);
    }
    FUN_00000704();
    FUN_000006c8(s_LDO__d__will_be_turn_off_ref_cnt_00002794,param_1,*(undefined2 *)(iVar2 + 6));
    return 0;
  }
  return 1;
}



/* Function: FUN_000027dc */

bool FUN_000027dc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_000023c8(0,param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_000006ec(s_ldo_id____d_00002760,param_1);
    FUN_000006e8(s_ldo_ctl____NULL_00002510 + 4,s_ldo_phy_c_00002504,0x205,uVar2);
  }
  uVar3 = FUN_00002078(*(undefined4 *)(iVar1 + 8));
  return (uVar3 & *(uint *)(iVar1 + 0xc)) == 0;
}



/* Function: FUN_00002834 */

undefined4 FUN_00002834(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  puVar1 = (undefined4 *)FUN_000023c8(0,param_1,param_3,param_4,param_1,param_2,param_3,param_4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = FUN_000006ec(s_ldo_id____d_00002760,param_1);
    FUN_000006e8(s_ldo_ctl____NULL_00002510 + 4,s_ldo_phy_c_00002504,0x21a,uVar2);
  }
  FUN_000006c8(s___LDO__d__type__d__set_level__d__00002aae + 2,param_1,*(undefined2 *)(puVar1 + 1),
               param_2,puVar1[0x10]);
  if (param_2 < 8) {
    if (*(ushort *)(puVar1 + 0x12) - 1 < param_2) {
      param_2 = *(ushort *)(puVar1 + 0x12) - 1;
    }
    iVar7 = puVar1[0x10] + (uint)*(ushort *)((int)puVar1 + (param_2 & 0xffff) * 2 + 0x4a);
    if (*(short *)(puVar1 + 1) == 0) {
      uVar3 = FUN_00002cac(puVar1[10]);
      uVar5 = (uint)*(ushort *)(puVar1 + 8);
      uVar4 = (uint)*(ushort *)((int)puVar1 + 0x22);
      uVar6 = ((uVar4 + (iVar7 - uVar5) * 1000) - 1) / uVar4;
      if ((puVar1[9] == 0) || ((int)uVar6 < 0)) goto LAB_00002908;
      FUN_000006c8(s__s__d____d___dmv___trim_0x_02x__s_00002adc,*puVar1,iVar7,uVar5,
                   iVar7 * 1000 - uVar5,uVar6,uVar4,puVar1[0x10]);
      uVar4 = (uint)puVar1[10] >> (uVar3 & 0xff);
      if (uVar4 < uVar6) {
        uVar6 = uVar4;
      }
      uVar4 = FUN_00002078(puVar1[9]);
      FUN_000020b4(puVar1[9],uVar4 & ~puVar1[10] | puVar1[10] & uVar6 << (uVar3 & 0xff) & 0xffff);
    }
    uVar2 = 0;
  }
  else {
LAB_00002908:
    uVar2 = 3;
  }
  return uVar2;
}



/* Function: FUN_00002a28 */

void FUN_00002a28(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_00002ed0();
  if (iVar2 == 0) {
    FUN_000006e4(s_NULL____slp_ldo_ctl_tab_00002b20,DAT_00002b18,0x268);
  }
  for (uVar6 = 0; uVar4 = DAT_00002e88, *(int *)(iVar2 + uVar6 * 0x18) != 0x25;
      uVar6 = uVar6 + 1 & 0xff) {
    iVar3 = iVar2 + uVar6 * 0x18;
    if (*(int *)(iVar3 + 0xc) == 1) {
      uVar4 = FUN_00002078(*(undefined4 *)(iVar3 + 4));
      uVar4 = *(ushort *)(iVar3 + 8) | uVar4;
    }
    else {
      uVar4 = FUN_00002078(*(undefined4 *)(iVar3 + 4));
      uVar4 = uVar4 & ~*(uint *)(iVar3 + 8);
    }
    FUN_000020b4(*(undefined4 *)(iVar3 + 4),uVar4);
  }
  uVar6 = FUN_00002078(DAT_00002e88);
  FUN_000020b4(uVar4,uVar6 | 1);
  uVar4 = uVar4 | (int)uVar4 >> 0x13;
  uVar6 = FUN_00002078(uVar4);
  FUN_000020b4(uVar4,uVar6 | 8);
  uVar5 = uVar4 + 0x6c;
  uVar6 = FUN_00002078(uVar5);
  FUN_000020b4(uVar5,uVar6 | 3);
  FUN_000020b4(uVar5 & 0xffffff8f);
  uVar6 = FUN_00002078(uVar4 - 0x164);
  FUN_000020b4(uVar4 - 0x164,uVar6 & 0xffffbfff);
  uVar6 = FUN_00002078(uVar4 - 0x15c);
  FUN_000020b4(uVar4 - 0x15c,uVar6 & 0xffff7fff);
  uVar6 = FUN_00002078(uVar4 - 0x9ec);
  FUN_000020b4(uVar4 - 0x9ec,uVar6 & 0xfffffdff);
  uVar1 = DAT_00002e8c;
  uVar6 = FUN_00002078(DAT_00002e8c);
  FUN_000020b4(uVar1,uVar6 | 7);
  return;
}



/* Function: FUN_00002bd8 */

bool FUN_00002bd8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000023c8(0,param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_000006ec(DAT_00002d7c,param_1);
    FUN_000006e8(DAT_00002b1c,DAT_00002b18,0x29a,uVar2);
  }
  if (param_2 != 0) {
    *(int *)(iVar1 + 0x44) = param_2;
  }
  return param_2 == 0;
}



/* Function: FUN_00002c2c */

void FUN_00002c2c(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = DAT_00002dac;
  uVar2 = FUN_00002078(DAT_00002dac);
  FUN_000020b4(uVar1,uVar2 | 0x80);
  return;
}



/* Function: FUN_00002cac */

int FUN_00002cac(uint param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0x20;
  iVar1 = 0;
  while( true ) {
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) {
      return iVar1;
    }
    if ((param_1 & 1) != 0) break;
    param_1 = (int)param_1 >> 1;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* Function: FUN_00002cd4 */

int FUN_00002cd4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = -1;
  iVar4 = 100;
  if (param_1 == 0) {
    FUN_000006e4(s_pctl____NULL_00002dbc,s_ldo_phy_c_00002db0,0x144);
  }
  for (iVar3 = 0; iVar3 < (int)(uint)*(ushort *)(param_1 + 0x48); iVar3 = iVar3 + 1) {
    iVar1 = param_2 - (uint)*(ushort *)(param_1 + iVar3 * 2 + 0x4a);
    if ((-1 < iVar1) && (iVar1 < iVar4)) {
      iVar4 = iVar1;
      iVar5 = iVar3;
    }
  }
  if ((*(short *)(param_1 + 4) == 2) && (iVar5 < 0)) {
    for (iVar3 = 0; iVar3 < (int)(uint)*(ushort *)(param_1 + 0x48); iVar3 = iVar3 + 1) {
      uVar2 = (uint)*(ushort *)(param_1 + iVar3 * 2 + 0x4a);
      iVar1 = param_2 - uVar2;
      if (iVar1 < 0) {
        iVar1 = uVar2 - param_2;
      }
      if (iVar1 < iVar4) {
        iVar5 = iVar3;
        iVar4 = iVar1;
      }
    }
  }
  return iVar5;
}



/* Function: FUN_00002e94 */

undefined4 FUN_00002e94(void)

{
  FUN_00002520();
  FUN_00002a28();
  return 0;
}



/* Function: thunk_FUN_00002600 */

undefined4 thunk_FUN_00002600(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_000023c8(0,param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_000006ec(s_ldo_id____d_00002760,param_1);
    FUN_000006e8(s_ldo_ctl____NULL_00002510 + 4,s_ldo_phy_c_00002504,0x1b5,uVar2);
  }
  if (*(int *)(iVar1 + 8) != 0) {
    FUN_000006f4(*(int *)(iVar1 + 8));
    if (*(short *)(iVar1 + 6) == 0) {
      uVar3 = FUN_00002078(*(undefined4 *)(iVar1 + 8));
      FUN_000020b4(*(undefined4 *)(iVar1 + 8),uVar3 & ~*(uint *)(iVar1 + 0xc));
    }
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    FUN_00000704();
    FUN_000006c8(s_LDO__d__will_be_turn_on_ref_cnt_0_0000276c,param_1,*(undefined2 *)(iVar1 + 6));
    return 0;
  }
  return 1;
}



/* Function: thunk_FUN_0000269c */

undefined4 thunk_FUN_0000269c(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = FUN_000023c8(0,param_1);
  if (iVar2 == 0) {
    uVar3 = FUN_000006ec(s_ldo_id____d_00002760,param_1);
    FUN_000006e8(s_ldo_ctl____NULL_00002510 + 4,s_ldo_phy_c_00002504,0x1d5,uVar3);
  }
  if (*(int *)(iVar2 + 8) != 0) {
    FUN_000006f4(*(int *)(iVar2 + 8));
    sVar1 = *(short *)(iVar2 + 6);
    if ((sVar1 == 0) || (*(short *)(iVar2 + 6) = sVar1 + -1, sVar1 == 1)) {
      uVar4 = FUN_00002078(*(undefined4 *)(iVar2 + 8));
      FUN_000020b4(*(undefined4 *)(iVar2 + 8),*(ushort *)(iVar2 + 0xc) | uVar4);
    }
    FUN_00000704();
    FUN_000006c8(s_LDO__d__will_be_turn_off_ref_cnt_00002794,param_1,*(undefined2 *)(iVar2 + 6));
    return 0;
  }
  return 1;
}



/* Function: thunk_FUN_00002834 */

undefined4 thunk_FUN_00002834(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  puVar1 = (undefined4 *)FUN_000023c8(0,param_1,param_3,param_4,param_1,param_2,param_3,param_4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = FUN_000006ec(s_ldo_id____d_00002760,param_1);
    FUN_000006e8(s_ldo_ctl____NULL_00002510 + 4,s_ldo_phy_c_00002504,0x21a,uVar2);
  }
  FUN_000006c8(s___LDO__d__type__d__set_level__d__00002aae + 2,param_1,*(undefined2 *)(puVar1 + 1),
               param_2,puVar1[0x10]);
  if (param_2 < 8) {
    if (*(ushort *)(puVar1 + 0x12) - 1 < param_2) {
      param_2 = *(ushort *)(puVar1 + 0x12) - 1;
    }
    iVar7 = puVar1[0x10] + (uint)*(ushort *)((int)puVar1 + (param_2 & 0xffff) * 2 + 0x4a);
    if (*(short *)(puVar1 + 1) == 0) {
      uVar3 = FUN_00002cac(puVar1[10]);
      uVar5 = (uint)*(ushort *)(puVar1 + 8);
      uVar4 = (uint)*(ushort *)((int)puVar1 + 0x22);
      uVar6 = ((uVar4 + (iVar7 - uVar5) * 1000) - 1) / uVar4;
      if ((puVar1[9] == 0) || ((int)uVar6 < 0)) goto LAB_00002908;
      FUN_000006c8(s__s__d____d___dmv___trim_0x_02x__s_00002adc,*puVar1,iVar7,uVar5,
                   iVar7 * 1000 - uVar5,uVar6,uVar4,puVar1[0x10]);
      uVar4 = (uint)puVar1[10] >> (uVar3 & 0xff);
      if (uVar4 < uVar6) {
        uVar6 = uVar4;
      }
      uVar4 = FUN_00002078(puVar1[9]);
      FUN_000020b4(puVar1[9],uVar4 & ~puVar1[10] | puVar1[10] & uVar6 << (uVar3 & 0xff) & 0xffff);
    }
    uVar2 = 0;
  }
  else {
LAB_00002908:
    uVar2 = 3;
  }
  return uVar2;
}



/* Function: FUN_00002ec8 */

undefined4 FUN_00002ec8(void)

{
  return DAT_00002ed8;
}



/* Function: FUN_00002ed0 */

undefined4 FUN_00002ed0(void)

{
  return DAT_00002edc;
}



/* Function: FUN_00002ee0 */

void FUN_00002ee0(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = DAT_000031e8;
  uVar1 = FUN_00002078(DAT_000031e8);
  FUN_000020b4(iVar2,uVar1 | 4);
  iVar2 = iVar2 + 8;
  uVar1 = FUN_00002078(iVar2);
  FUN_000020b4(iVar2,uVar1 | 4);
  return;
}



/* Function: FUN_00002f18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002f18(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_000031ec;
  FUN_000020b4(DAT_000031ec,0xe551);
  iVar4 = iVar1 + -0x18;
  if (param_1[1] == 0) {
    uVar3 = FUN_00002078(iVar4);
    FUN_000020b4(iVar4,uVar3 | 8);
    uVar3 = FUN_00002078(iVar4);
    uVar3 = uVar3 | 4;
    iVar2 = iVar4;
LAB_00002fc4:
    FUN_000020b4(iVar2,uVar3);
  }
  else if (param_1[1] == 1) {
    uVar3 = FUN_00002078(iVar4);
    FUN_000020b4(iVar4,uVar3 & 0xfffffff7);
    uVar3 = FUN_00002078(iVar4);
    FUN_000020b4(iVar4,uVar3 | 1);
    uVar3 = FUN_00002078(iVar4);
    FUN_000020b4(iVar4,uVar3 | 4);
    FUN_000020b4(DAT_000031f0,1);
    uVar3 = 0xffff;
    iVar2 = DAT_000031f4;
    goto LAB_00002fc4;
  }
  if (*param_1 != 0) {
    FUN_000020b4(DAT_000031f8,(uint)param_1[2] >> 0x10);
    FUN_000020b4(_DAT_000031fc,(short)param_1[2]);
  }
  if (*param_1 == 0) {
    uVar3 = FUN_00002078(iVar4);
    uVar3 = uVar3 & 0xfffffffd;
  }
  else {
    if (*param_1 != 1) goto LAB_00003030;
    uVar3 = FUN_00002078(iVar4);
    uVar3 = uVar3 | 2;
  }
  FUN_000020b4(iVar4,uVar3);
LAB_00003030:
  FUN_000020b4(iVar1,0x1aae);
  return 0;
}



/* Function: FUN_00003044 */

undefined4 FUN_00003044(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 in_CY;
  bool bVar4;
  
  iVar1 = DAT_000031ec;
  FUN_000020b4(DAT_000031ec,0xe551);
  uVar3 = 0;
  FUN_000020b4(iVar1 + -0x14,1);
  while( true ) {
    uVar2 = FUN_00002078(iVar1 + -0x10);
    bVar4 = (uVar2 & 1) != 0;
    if (bVar4) {
      in_CY = uVar3 < 0x2711;
    }
    if (!(bool)in_CY || (!bVar4 || uVar3 == 10000)) break;
    uVar3 = uVar3 + 1;
  }
  FUN_000009f8(s___CLR_WDG_INT_Timeout__000031fe + 2);
  FUN_000020b4(iVar1,0x1aae);
  return 0;
}



/* Function: FUN_00003294 */

void FUN_00003294(void)

{
  FUN_00003044();
  FUN_000006e4(&DAT_000034c0,s_watchdog_hal_c_00003480,0x58);
  return;
}



/* Function: FUN_000032b0 */

undefined8 FUN_000032b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  uStack_c = param_4;
  FUN_000006d8(0x10,DAT_000034c4,&DAT_00003478);
  local_18 = 1;
  local_14 = 0;
  local_10 = DAT_000034c8;
  iVar1 = FUN_00002f18(&local_18);
  if (iVar1 != 0) {
    uVar2 = FUN_000006ec(s__s___d__WDG_Config___d_00003490,s_watchdog_hal_c_00003480,0x6e);
    FUN_000006e8(s__WDG_RESULT_OK____ret__000034a8,s_watchdog_hal_c_00003480,0x6e,uVar2);
  }
  return CONCAT44(local_14,local_18);
}



/* Function: FUN_00003314 */

undefined8 FUN_00003314(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  uStack_c = param_4;
  FUN_00002ee0();
  FUN_000006d8(0x10,DAT_000034cc,&DAT_00003478);
  local_18 = 1;
  local_14 = 0;
  local_10 = 0x50;
  iVar1 = FUN_00002f18(&local_18);
  if (iVar1 != 0) {
    uVar2 = FUN_000006ec(s__s___d__WDG_Config___d_00003490,s_watchdog_hal_c_00003480,0x85);
    FUN_000006e8(s__WDG_RESULT_OK____ret__000034a8,s_watchdog_hal_c_00003480,0x85,uVar2);
  }
  return CONCAT44(local_14,local_18);
}



/* Function: FUN_0000337c */

undefined8 FUN_0000337c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 uStack_c;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  uStack_c = param_4;
  FUN_000006d8(0x10,DAT_000034d4,&DAT_000034d0,param_1);
  FUN_000006bc(param_1,DAT_000034d8);
  local_18 = 2;
  local_14 = 3;
  local_10 = (uint)(param_1 * 1000) / 0x1e;
  iVar1 = FUN_00002f18(&local_18);
  if (iVar1 != 0) {
    uVar2 = FUN_000006ec(s__s___d__WDG_Config___d_00003490,s_watchdog_hal_c_00003480,0x9c);
    FUN_000006e8(s__WDG_RESULT_OK____ret__000034a8,s_watchdog_hal_c_00003480,0x9c,uVar2);
  }
  return CONCAT44(local_14,local_18);
}



/* Function: FUN_00003400 */

void FUN_00003400(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  local_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_000007f0();
  FUN_000006f4();
  uVar3 = (uint)(param_1 * 1000) / 0x1e;
  FUN_000006c8(s_Watch_Dog_Trace__WDG_ResetMCU_000034dc);
  local_18 = 1;
  uStack_14 = 0;
  uStack_10 = uVar3;
  iVar1 = FUN_00002f18(&local_18);
  if (iVar1 != 0) {
    uVar2 = FUN_000006ec(s__s___d__WDG_Config___d_00003490,s_watchdog_hal_c_00003480,0xb6);
    FUN_000006e8(s__WDG_RESULT_OK____ret__000034a8,s_watchdog_hal_c_00003480,0xb6,uVar2);
  }
  FUN_00000664(uVar3 + 0x32);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_000034fc */

void FUN_000034fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 uStack_c;
  
  local_10 = (uint)(param_1 * 1000) / 0x1e;
  local_18 = 1;
  local_14 = 0;
  uStack_c = param_4;
  FUN_00002f18(&local_18);
  return;
}



/* Function: FUN_00003534 */

void FUN_00003534(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [104];
  
  FUN_0001f538(auStack_68,100);
  FUN_000201b0();
  FUN_00011ba0(0);
  FUN_000132d8();
  FUN_00013e84();
  FUN_00001c80(0x1a);
  FUN_00001cf8();
  thunk_FUN_000034fc(30000);
  iVar1 = DAT_00003604;
  FUN_000009f8(s_Image_Updating_Enter___s_00003608,*(undefined4 *)(DAT_00003604 + 4));
  uVar3 = FUN_0001f36a(*(undefined4 *)(iVar1 + 4));
  FUN_0001f3a4(auStack_68,*(undefined4 *)(iVar1 + 4),uVar3);
  uVar3 = FUN_0001f36a(auStack_68);
  FUN_0001198c(auStack_68,uVar3);
  FUN_00011ba0(1,0x1f);
  cVar2 = FUN_00013904(DAT_00003624);
  FUN_000119a8(cVar2);
  if (cVar2 == '\0') {
    *(undefined4 *)*DAT_00003628 = 0;
    FUN_00011ba0(0,0);
    uVar3 = 8;
  }
  else {
    uVar3 = 0x1a;
  }
  FUN_00001c80(uVar3);
  FUN_00001cbc();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_0000362c */

undefined4 FUN_0000362c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  uVar1 = 0;
  if (param_1 == 0) {
    *param_2 = 2;
    uVar1 = DAT_00003648;
  }
  return uVar1;
}



/* Function: FUN_0000364c */

undefined4 FUN_0000364c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = *(uint *)(param_1 + 0x2c);
  if (uVar2 != param_2) {
    if (*(char *)(param_1 + 4) != '\0') {
      iVar1 = FUN_00006994(*(undefined1 *)(param_1 + 1),param_1 + 0x30,uVar2,1);
      if (iVar1 != 0) {
        return 1;
      }
      *(undefined1 *)(param_1 + 4) = 0;
      if (uVar2 < (uint)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c))) {
        for (bVar3 = *(byte *)(param_1 + 3); 1 < bVar3; bVar3 = bVar3 - 1) {
          uVar2 = uVar2 + *(int *)(param_1 + 0x1c);
          FUN_00006994(*(undefined1 *)(param_1 + 1),param_1 + 0x30,uVar2,1);
        }
      }
    }
    if (param_2 != 0) {
      iVar1 = FUN_00006938(*(undefined1 *)(param_1 + 1),param_1 + 0x30,param_2,1);
      if (iVar1 != 0) {
        return 1;
      }
      *(uint *)(param_1 + 0x2c) = param_2;
    }
  }
  return 0;
}



/* Function: FUN_00003714 */

int FUN_00003714(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_0000364c(param_1,0);
  if (iVar1 == 0) {
    if ((*param_1 == '\x03') && (param_1[5] != '\0')) {
      param_1[0x2c] = '\0';
      param_1[0x2d] = '\0';
      param_1[0x2e] = '\0';
      param_1[0x2f] = '\0';
      FUN_000064c0(param_1 + 0x30,0,0x200);
      param_1[0x22e] = 'U';
      param_1[0x22f] = -0x56;
      param_1[0x30] = 'R';
      param_1[0x31] = 'R';
      param_1[0x32] = 'a';
      param_1[0x33] = 'A';
      param_1[0x214] = 'r';
      param_1[0x215] = 'r';
      param_1[0x216] = 'A';
      param_1[0x217] = 'a';
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      param_1[0x218] = (char)uVar2;
      param_1[0x219] = (char)((uint)uVar2 >> 8);
      param_1[0x21a] = (char)((uint)uVar2 >> 0x10);
      param_1[0x21b] = (char)((uint)uVar2 >> 0x18);
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      param_1[0x21c] = (char)uVar2;
      param_1[0x21d] = (char)((uint)uVar2 >> 8);
      param_1[0x21e] = (char)((uint)uVar2 >> 0x10);
      param_1[0x21f] = (char)((uint)uVar2 >> 0x18);
      FUN_00006994(param_1[1],param_1 + 0x30,*(undefined4 *)(param_1 + 0x14),1);
      param_1[5] = '\0';
    }
    iVar3 = FUN_000069e8(param_1[1],0);
    if (iVar3 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}



/* Function: FUN_00003814 */

int FUN_00003814(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 - 2U < *(int *)(param_1 + 0x18) - 2U) {
    iVar1 = (param_2 - 2U) * (uint)*(byte *)(param_1 + 2) + *(int *)(param_1 + 0x28);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: FUN_00003838 */

uint FUN_00003838(char *param_1,char *param_2)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  bVar6 = param_2 == (char *)0x2;
  pcVar3 = param_1;
  if ((char *)0x1 < param_2) {
    pcVar3 = *(char **)(param_1 + 0x18);
    bVar6 = pcVar3 == param_2;
  }
  if (((char *)0x1 >= param_2 || pcVar3 < param_2) || bVar6) {
    return 1;
  }
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    pcVar3 = param_2 + ((uint)param_2 >> 1);
    iVar4 = FUN_0000364c(param_1,*(int *)(param_1 + 0x20) + ((uint)pcVar3 >> 9));
    if (iVar4 == 0) {
      cVar1 = param_1[((uint)pcVar3 & 0x1ff) + 0x30];
      iVar4 = FUN_0000364c(param_1,*(int *)(param_1 + 0x20) + ((uint)(pcVar3 + 1) >> 9));
      if (iVar4 == 0) {
        bVar6 = ((uint)param_2 & 1) != 0;
        uVar2 = CONCAT11(param_1[((uint)(pcVar3 + 1) & 0x1ff) + 0x30],cVar1);
        if (bVar6) {
          uVar2 = uVar2 >> 4;
        }
        uVar5 = (uint)uVar2;
        if (!bVar6) {
          uVar5 = uVar5 & 0xfff;
        }
        return uVar5;
      }
    }
  }
  else if (cVar1 == '\x02') {
    iVar4 = FUN_0000364c(param_1,*(int *)(param_1 + 0x20) + ((uint)param_2 >> 8));
    if (iVar4 == 0) {
      return (uint)*(ushort *)(param_1 + ((uint)param_2 & 0xff) * 2 + 0x30);
    }
  }
  else if ((cVar1 == '\x03') &&
          (iVar4 = FUN_0000364c(param_1,*(int *)(param_1 + 0x20) + ((uint)param_2 >> 7)), iVar4 == 0
          )) {
    uVar5 = FUN_0001f6e8(param_1 + ((uint)param_2 & 0x7f) * 4 + 0x31);
    return (uint)(byte)param_1[((uint)param_2 & 0x7f) * 4 + 0x30] | (uVar5 & 0xfffff) << 8;
  }
  return 0xffffffff;
}



/* Function: FUN_00003958 */

int FUN_00003958(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  byte extraout_var;
  char *pcVar4;
  byte bVar5;
  int unaff_r5;
  bool bVar6;
  bool bVar7;
  
  bVar7 = (char *)0x1 < param_2;
  bVar6 = param_2 == (char *)0x2;
  pcVar4 = param_1;
  if (bVar7) {
    pcVar4 = *(char **)(param_1 + 0x18);
    bVar6 = pcVar4 == param_2;
  }
  if ((!bVar7 || pcVar4 < param_2) || bVar6) {
    unaff_r5 = 2;
  }
  if ((bVar7 && pcVar4 >= param_2) && !bVar6) {
    cVar1 = *param_1;
    bVar5 = (byte)param_3;
    if (cVar1 == '\x01') {
      pcVar4 = param_2 + ((uint)param_2 >> 1);
      unaff_r5 = FUN_0000364c(param_1,*(int *)(param_1 + 0x20) + ((uint)pcVar4 >> 9));
      if (unaff_r5 == 0) {
        if (((uint)param_2 & 1) != 0) {
          bVar5 = param_1[((uint)pcVar4 & 0x1ff) + 0x30] & 0xfU | (byte)((param_3 & 0xff) << 4);
        }
        param_1[((uint)pcVar4 & 0x1ff) + 0x30] = bVar5;
        param_1[4] = '\x01';
        unaff_r5 = FUN_0000364c(param_1,*(int *)(param_1 + 0x20) + ((uint)(pcVar4 + 1) >> 9));
        if (unaff_r5 == 0) {
          if (((uint)param_2 & 1) == 0) {
            bVar5 = param_1[((uint)(pcVar4 + 1) & 0x1ff) + 0x30] & 0xf0U |
                    (byte)((param_3 << 0x14) >> 0x1c);
          }
          else {
            bVar5 = (byte)((param_3 & 0xfff) >> 4);
          }
          param_1[((uint)(pcVar4 + 1) & 0x1ff) + 0x30] = bVar5;
        }
      }
    }
    else {
      cVar2 = (char)(param_3 >> 8);
      if (cVar1 == '\x02') {
        unaff_r5 = FUN_0000364c(param_1,*(int *)(param_1 + 0x20) + ((uint)param_2 >> 8));
        if (unaff_r5 == 0) {
          param_1[((uint)param_2 & 0xff) * 2 + 0x30] = bVar5;
          param_1[((uint)param_2 & 0xff) * 2 + 0x31] = cVar2;
        }
      }
      else if (cVar1 == '\x03') {
        unaff_r5 = FUN_0000364c(param_1,*(int *)(param_1 + 0x20) + ((uint)param_2 >> 7));
        if (unaff_r5 == 0) {
          uVar3 = (uint)param_2 & 0x7f;
          FUN_0001f6e8(param_1 + uVar3 * 4 + 0x31);
          param_1[uVar3 * 4 + 0x30] = bVar5;
          param_1[uVar3 * 4 + 0x31] = cVar2;
          param_1[uVar3 * 4 + 0x32] = (char)(param_3 >> 0x10);
          param_1[uVar3 * 4 + 0x33] = extraout_var & 0xf0 | (byte)(param_3 >> 0x18);
        }
      }
      else {
        unaff_r5 = 2;
      }
    }
    param_1[4] = '\x01';
  }
  return unaff_r5;
}



/* Function: FUN_00003ac8 */

int FUN_00003ac8(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = param_2 == 2;
  uVar1 = param_1;
  if (1 < param_2) {
    uVar1 = *(uint *)(param_1 + 0x18);
    bVar3 = uVar1 == param_2;
  }
  if ((1 < param_2 && param_2 <= uVar1) && !bVar3) {
    while( true ) {
      if (*(uint *)(param_1 + 0x18) <= param_2) {
        return 0;
      }
      uVar1 = FUN_00003838(param_1,param_2);
      if (uVar1 == 0) {
        return 0;
      }
      if (uVar1 == 1) goto LAB_00003b34;
      if (uVar1 == 0xffffffff) break;
      iVar2 = FUN_00003958(param_1,param_2,0);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = uVar1;
      if (*(int *)(param_1 + 0x10) != -1) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        *(undefined1 *)(param_1 + 5) = 1;
      }
    }
    iVar2 = 1;
  }
  else {
LAB_00003b34:
    iVar2 = 2;
  }
  return iVar2;
}



/* Function: FUN_00003b68 */

uint FUN_00003b68(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    uVar1 = param_1;
    if (uVar3 != 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
    }
    uVar4 = uVar3;
    if (uVar3 == 0 || uVar1 <= uVar3) {
      uVar3 = 1;
      uVar4 = 1;
    }
  }
  else {
    uVar1 = FUN_00003838();
    if (uVar1 < 2) {
      return 1;
    }
    uVar3 = param_2;
    uVar4 = param_2;
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      return uVar1;
    }
  }
  while( true ) {
    uVar3 = uVar3 + 1;
    bVar5 = uVar3 <= *(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) <= uVar3) {
      uVar3 = 2;
      bVar5 = 1 < uVar4;
    }
    if (!bVar5) {
      return 0;
    }
    uVar1 = FUN_00003838(param_1,uVar3);
    if (uVar1 == 0) {
      iVar2 = FUN_00003958(param_1,uVar3,0xfffffff);
      if ((iVar2 == 0) &&
         ((param_2 == 0 || (iVar2 = FUN_00003958(param_1,param_2,uVar3), iVar2 == 0)))) {
        *(uint *)(param_1 + 0xc) = uVar3;
        if (*(int *)(param_1 + 0x10) != -1) {
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
          *(undefined1 *)(param_1 + 5) = 1;
        }
      }
      else if (iVar2 == 1) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
    if (uVar1 == 0xffffffff || uVar1 == 1) break;
    if (uVar3 == uVar4) {
      return 0;
    }
  }
  return uVar1;
}



/* Function: FUN_00003c6c */

undefined4 FUN_00003c6c(int *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  *(short *)((int)param_1 + 6) = (short)param_2;
  uVar5 = param_1[2];
  bVar6 = uVar5 != 0;
  piVar2 = param_1;
  if (uVar5 != 1) {
    piVar2 = (int *)*param_1;
    param_3 = piVar2[6];
    bVar6 = uVar5 <= param_3;
  }
  if (!bVar6 || (uVar5 == 1 || param_3 == uVar5)) {
    return 2;
  }
  if ((uVar5 == 0) && (((char)*piVar2 != '\x03' || (uVar5 = piVar2[9], uVar5 == 0)))) {
    param_1[3] = 0;
    if (*(ushort *)(piVar2 + 2) <= param_2) {
      return 2;
    }
    iVar4 = piVar2[9];
  }
  else {
    bVar1 = *(byte *)((int)piVar2 + 2);
    for (; (uint)bVar1 * 0x10 <= param_2; param_2 = param_2 + (uint)bVar1 * -0x10 & 0xffff) {
      uVar5 = FUN_00003838(*param_1);
      if (uVar5 == 0xffffffff) {
        return 1;
      }
      bVar6 = uVar5 == 2;
      uVar3 = uVar5;
      if (1 < uVar5) {
        uVar3 = *(uint *)(*param_1 + 0x18);
        bVar6 = uVar3 == uVar5;
      }
      if ((1 >= uVar5 || uVar3 < uVar5) || bVar6) {
        return 2;
      }
    }
    param_1[3] = uVar5;
    iVar4 = FUN_00003814(*param_1);
  }
  param_1[4] = iVar4 + (param_2 >> 4);
  param_1[5] = *param_1 + (param_2 & 0xf) * 0x20 + 0x30;
  return 0;
}



/* Function: FUN_00003d48 */

undefined4 FUN_00003d48(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = *(ushort *)((int)param_1 + 6) + 1;
  uVar3 = uVar1 & 0xffff;
  uVar2 = uVar1;
  if (uVar3 != 0) {
    uVar2 = param_1[4];
  }
  if (uVar3 == 0 || uVar2 == 0) {
    return 4;
  }
  if ((uVar1 & 0xf) == 0) {
    param_1[4] = uVar2 + 1;
    if (param_1[3] == 0) {
      if (*(ushort *)(*param_1 + 8) <= uVar3) {
        return 4;
      }
    }
    else if ((*(byte *)(*param_1 + 2) - 1 & uVar3 >> 4) == 0) {
      uVar3 = FUN_00003838();
      if (uVar3 < 2) {
        return 2;
      }
      if (uVar3 == 0xffffffff) {
        return 1;
      }
      if (*(uint *)(*param_1 + 0x18) <= uVar3) {
        if (param_2 == 0) {
          return 4;
        }
        uVar3 = FUN_00003b68(*param_1,param_1[3]);
        if (uVar3 == 0) {
          return 7;
        }
        if (uVar3 == 1) {
          return 2;
        }
        if (uVar3 == 0xffffffff) {
          return 1;
        }
        iVar4 = FUN_0000364c(*param_1,0);
        if (iVar4 != 0) {
          return 1;
        }
        FUN_000064c0(*param_1 + 0x30,0,0x200);
        uVar5 = FUN_00003814(*param_1,uVar3);
        *(undefined4 *)(*param_1 + 0x2c) = uVar5;
        for (uVar2 = 0; iVar4 = *param_1, uVar2 < *(byte *)(iVar4 + 2); uVar2 = uVar2 + 1 & 0xff) {
          *(undefined1 *)(iVar4 + 4) = 1;
          iVar4 = FUN_0000364c(*param_1,0);
          if (iVar4 != 0) {
            return 1;
          }
          *(int *)(*param_1 + 0x2c) = *(int *)(*param_1 + 0x2c) + 1;
        }
        *(uint *)(iVar4 + 0x2c) = *(int *)(iVar4 + 0x2c) - uVar2;
      }
      param_1[3] = uVar3;
      iVar4 = FUN_00003814(*param_1,uVar3);
      param_1[4] = iVar4;
    }
  }
  *(short *)((int)param_1 + 6) = (short)(uVar1 * 0x10000 >> 0x10);
  param_1[5] = *param_1 + (uVar1 & 0xf) * 0x20 + 0x30;
  return 0;
}



/* Function: FUN_00003eec */

void FUN_00003eec(int param_1,undefined4 param_2,ushort *param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  char cStack_19;
  ushort *puStack_18;
  uint uStack_14;
  
  puStack_18 = param_3;
  uStack_14 = param_4;
  thunk_FUN_000064b4(param_1,param_2,0xb);
  if (5 < param_4) {
    do {
      param_4 = (param_4 >> 1) + param_4 * 0x8000 + (uint)*param_3 & 0xffff;
      param_3 = param_3 + 1;
    } while (*param_3 != 0);
  }
  uVar2 = 7;
  do {
    uVar4 = uVar2;
    uVar2 = (param_4 & 0xf) + 0x30;
    cVar1 = (char)uVar2;
    if (0x39 < uVar2) {
      cVar1 = (char)(param_4 & 0xf) + '7';
    }
    *(char *)((int)&puStack_18 + uVar4) = cVar1;
    param_4 = param_4 >> 4;
    uVar2 = uVar4 - 1;
  } while (param_4 != 0);
  (&cStack_19)[uVar4] = '~';
  uVar3 = 0;
  do {
    if ((uVar2 <= uVar3) || (*(byte *)(param_1 + uVar3) == 0x20)) goto LAB_00003f98;
    if (*(byte *)(param_1 + uVar3) - 0x81 < 0x7e) {
      if (uVar3 == uVar4 - 2) {
LAB_00003f98:
        do {
          if (uVar2 < 8) {
            uVar5 = *(undefined1 *)((int)&puStack_18 + uVar2);
          }
          else {
            uVar5 = 0x20;
          }
          *(undefined1 *)(param_1 + uVar3) = uVar5;
          if (uVar2 < 8) {
            uVar2 = uVar2 + 1;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < 8);
        return;
      }
      uVar3 = uVar3 + 1;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}



/* Function: FUN_00003fbc */

int FUN_00003fbc(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  
  iVar3 = FUN_00003c6c(param_1,0);
  if (iVar3 != 0) {
    return iVar3;
  }
  uVar10 = 0xff;
  uVar11 = uVar10;
  do {
    iVar3 = FUN_0000364c(*param_1,param_1[4]);
    if (iVar3 != 0) {
      return iVar3;
    }
    pbVar9 = (byte *)param_1[5];
    uVar7 = (uint)*pbVar9;
    if (uVar7 == 0) {
      return 4;
    }
    uVar4 = pbVar9[0xb] & 0x3f;
    if (uVar7 == 0xe5) {
LAB_00004024:
      uVar10 = 0xff;
    }
    else {
      if ((pbVar9[0xb] & 8) == 0) {
        if (uVar4 != 0xf) {
          if ((uVar10 == 0) && (uVar10 = FUN_000064f0(pbVar9), uVar10 == uVar11)) {
            return 0;
          }
          *(undefined2 *)(param_1 + 8) = 0xffff;
          uVar10 = 0xff;
          if ((((byte *)param_1[6])[0xb] & 1) == 0) {
            iVar3 = 0xb;
            pbVar6 = (byte *)param_1[6];
            do {
              bVar12 = iVar3 == 0;
              iVar3 = iVar3 + -1;
              if (bVar12) {
                return 0;
              }
              bVar1 = *pbVar9;
              bVar2 = *pbVar6;
              pbVar6 = pbVar6 + 1;
              pbVar9 = pbVar9 + 1;
            } while (bVar1 == bVar2);
          }
          goto LAB_00004180;
        }
      }
      else if (uVar4 != 0xf) goto LAB_00004024;
      iVar3 = param_1[7];
      if (iVar3 != 0) {
        if ((*pbVar9 & 0x40) != 0) {
          uVar11 = (uint)pbVar9[0xd];
          uVar7 = uVar7 & 0xbf;
          uVar4 = (uint)*(ushort *)((int)param_1 + 6);
          *(ushort *)(param_1 + 8) = *(ushort *)((int)param_1 + 6);
          uVar10 = uVar7;
        }
        if (uVar7 == uVar10) {
          uVar4 = (uint)pbVar9[0xd];
        }
        if (uVar7 != uVar10 || uVar4 != uVar11) {
LAB_0000411c:
          uVar4 = 0xff;
        }
        else {
          uVar4 = 0;
          iVar8 = 1;
          uVar7 = ((*pbVar9 & 0xbf) - 1) * 0xd;
          do {
            if (iVar8 == 0) {
              if (*(short *)(pbVar9 + *(byte *)(DAT_0000491c + uVar4)) != -1) goto LAB_0000411c;
            }
            else {
              iVar8 = FUN_00000cb4();
              if (0xfe < uVar7) goto LAB_0000411c;
              iVar5 = uVar7 * 2;
              uVar7 = uVar7 + 1;
              iVar5 = FUN_00000cb4(*(undefined2 *)(iVar3 + iVar5));
              if (iVar5 != iVar8) goto LAB_0000411c;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < 0xd);
          uVar4 = (uint)*pbVar9;
          bVar12 = (*pbVar9 & 0x40) == 0;
          bVar13 = iVar8 == 0;
          if (!bVar12 && !bVar13) {
            uVar4 = (uint)*(ushort *)(iVar3 + uVar7 * 2);
          }
          bVar14 = uVar4 != 0;
          if ((bVar12 || bVar13) || !bVar14) {
            uVar4 = uVar10 - 1;
          }
          if ((!bVar12 && !bVar13) && bVar14) goto LAB_0000411c;
        }
        uVar10 = uVar4 & 0xff;
      }
    }
LAB_00004180:
    iVar3 = FUN_00003d48(param_1,0);
    if (iVar3 != 0) {
      return iVar3;
    }
  } while( true );
}



/* Function: FUN_0000419c */

int FUN_0000419c(undefined4 *param_1)

{
  int iVar1;
  short sVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  short sVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  bVar8 = 0xff;
  uVar9 = 0xff;
  iVar10 = 4;
  while( true ) {
    if (param_1[4] == 0) {
      if (iVar10 == 0) {
        return 0;
      }
      goto LAB_00004328;
    }
    iVar10 = FUN_0000364c(*param_1);
    if (iVar10 != 0) goto LAB_00004328;
    pbVar3 = (byte *)param_1[5];
    bVar6 = *pbVar3;
    if (bVar6 == 0) break;
    uVar4 = pbVar3[0xb] & 0x3f;
    if (bVar6 == 0xe5 || bVar6 == 0x2e) {
LAB_00004204:
      bVar8 = 0xff;
    }
    else {
      if ((pbVar3[0xb] & 8) == 0) {
        if (uVar4 != 0xf) {
          if ((bVar8 == 0) && (uVar4 = FUN_000064f0(), uVar4 == uVar9)) {
            return 0;
          }
          *(undefined2 *)(param_1 + 8) = 0xffff;
          return 0;
        }
      }
      else if (uVar4 != 0xf) goto LAB_00004204;
      if ((bVar6 & 0x40) != 0) {
        uVar9 = (uint)pbVar3[0xd];
        bVar6 = bVar6 & 0xbf;
        uVar4 = (uint)*(ushort *)((int)param_1 + 6);
        *(ushort *)(param_1 + 8) = *(ushort *)((int)param_1 + 6);
        bVar8 = bVar6;
      }
      iVar10 = DAT_0000491c;
      if (bVar6 == bVar8) {
        uVar4 = (uint)pbVar3[0xd];
      }
      if (bVar6 != bVar8 || uVar4 != uVar9) {
LAB_000042e0:
        bVar8 = 0xff;
      }
      else {
        sVar7 = 1;
        iVar11 = param_1[7];
        uVar4 = ((*pbVar3 & 0x3f) - 1) * 0xd;
        uVar5 = 0;
        do {
          sVar2 = *(short *)(pbVar3 + *(byte *)(iVar10 + uVar5));
          if (sVar7 == 0) {
            if (sVar2 != -1) goto LAB_000042e0;
          }
          else {
            if (0xfe < uVar4) goto LAB_000042e0;
            iVar1 = uVar4 * 2;
            uVar4 = uVar4 + 1;
            *(short *)(iVar11 + iVar1) = sVar2;
            sVar7 = sVar2;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0xd);
        if ((*pbVar3 & 0x40) != 0) {
          if (0xfe < uVar4) goto LAB_000042e0;
          *(undefined2 *)(iVar11 + uVar4 * 2) = 0;
        }
        bVar8 = bVar8 - 1;
      }
    }
    iVar10 = FUN_00003d48(param_1,0);
    if (iVar10 != 0) {
LAB_00004328:
      param_1[4] = 0;
      return iVar10;
    }
  }
  iVar10 = 4;
  goto LAB_00004328;
}



/* Function: FUN_00004334 */

undefined8 FUN_00004334(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar12 = param_1[6];
  iVar10 = param_1[7];
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  thunk_FUN_000064b4(&uStack_30,iVar12,0xc);
  if ((uStack_28 & 0x1000000) != 0) {
    *(undefined1 *)(iVar12 + 0xb) = 0;
    uVar8 = 1;
    param_1[7] = 0;
    do {
      FUN_00003eec(iVar12,&uStack_30,iVar10,uVar8);
      iVar4 = FUN_00003fbc(param_1);
      if (iVar4 != 0) break;
      uVar8 = uVar8 + 1;
    } while (uVar8 < 100);
    if (uVar8 == 100) {
      iVar4 = 7;
      goto LAB_000045dc;
    }
    if (iVar4 != 4) goto LAB_000045dc;
    *(undefined1 *)(iVar12 + 0xb) = uStack_28._3_1_;
    param_1[7] = iVar10;
  }
  if ((uStack_28 & 0x2000000) == 0) {
    uVar5 = 1;
  }
  else {
    for (uVar5 = 0; *(short *)(iVar10 + uVar5 * 2) != 0; uVar5 = uVar5 + 1 & 0xffff) {
    }
    uVar5 = (uVar5 + 0x19) / 0xd;
  }
  iVar4 = FUN_00003c6c(param_1,0);
  if (iVar4 == 0) {
    uVar11 = 0;
    uVar13 = uVar11;
    do {
      iVar4 = FUN_0000364c(*param_1,param_1[4]);
      if (iVar4 != 0) break;
      if (*(char *)param_1[5] == -0x1b || *(char *)param_1[5] == '\0') {
        if (uVar11 == 0) {
          uVar13 = (uint)*(ushort *)((int)param_1 + 6);
        }
        uVar11 = uVar11 + 1 & 0xffff;
        if (uVar11 == uVar5) {
          if (uVar5 < 2) {
LAB_00004584:
            iVar4 = FUN_0000364c(*param_1,param_1[4]);
            if (iVar4 == 0) {
              iVar10 = param_1[5];
              FUN_000064c0(iVar10,0,0x20);
              thunk_FUN_000064b4(iVar10,param_1[6],0xb);
              *(byte *)(iVar10 + 0xc) = *(byte *)(param_1[6] + 0xb) & 0x18;
              *(undefined1 *)(*param_1 + 4) = 1;
            }
          }
          else {
            iVar4 = FUN_00003c6c(param_1,uVar13);
            if (iVar4 == 0) {
              uVar3 = FUN_000064f0(param_1[6]);
              uVar5 = uVar5 - 1 & 0xffff;
LAB_000044ac:
              iVar4 = FUN_0000364c(*param_1,param_1[4]);
              iVar10 = DAT_0000491c;
              if (iVar4 == 0) {
                puVar9 = (undefined1 *)param_1[5];
                uVar11 = uVar5 & 0xff;
                iVar4 = param_1[7];
                puVar9[0xd] = uVar3;
                puVar9[0xb] = 0xf;
                puVar9[0xc] = 0;
                iVar12 = (uVar11 - 1) * 0xd;
                puVar9[0x1a] = 0;
                uVar13 = 0;
                puVar9[0x1b] = 0;
                do {
                  iVar1 = iVar12 * 2;
                  iVar12 = iVar12 + 1;
                  uVar6 = (uint)*(ushort *)(iVar4 + iVar1);
                  do {
                    puVar9[*(byte *)(iVar10 + uVar13)] = (char)uVar6;
                    pbVar2 = (byte *)(iVar10 + uVar13);
                    uVar13 = uVar13 + 1;
                    uVar7 = uVar6;
                    if (uVar6 == 0) {
                      uVar7 = 0xffff;
                    }
                    puVar9[*pbVar2 + 1] = (char)(uVar6 >> 8);
                    if (0xc < uVar13) {
                      bVar14 = uVar7 != 0xffff;
                      if (bVar14) {
                        uVar7 = (uint)*(ushort *)(iVar4 + iVar12 * 2);
                      }
                      if (!bVar14 || uVar7 == 0) {
                        uVar11 = uVar11 | 0x40;
                      }
                      *puVar9 = (char)uVar11;
                      *(undefined1 *)(*param_1 + 4) = 1;
                      iVar4 = FUN_00003d48(param_1,0);
                      if (iVar4 != 0) goto LAB_000045dc;
                      uVar5 = uVar5 - 1 & 0xffff;
                      if (uVar5 != 0) goto LAB_000044ac;
                      goto LAB_00004584;
                    }
                    uVar6 = uVar7;
                  } while (uVar7 == 0xffff);
                } while( true );
              }
            }
          }
          break;
        }
      }
      else {
        uVar11 = 0;
      }
      iVar4 = FUN_00003d48(param_1,1);
    } while (iVar4 == 0);
  }
LAB_000045dc:
  return CONCAT44(uStack_30,iVar4);
}



/* Function: FUN_000045e0 */

int FUN_000045e0(int *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  
  uVar1 = *(ushort *)((int)param_1 + 6);
  uVar3 = *(ushort *)(param_1 + 8);
  if (*(ushort *)(param_1 + 8) == 0xffff) {
    uVar3 = uVar1;
  }
  iVar2 = FUN_00003c6c(param_1,uVar3);
  if (iVar2 != 0) {
    return iVar2;
  }
  do {
    iVar2 = FUN_0000364c(*param_1,param_1[4]);
    if (iVar2 != 0) break;
    *(undefined1 *)param_1[5] = 0xe5;
    *(undefined1 *)(*param_1 + 4) = 1;
    if (uVar1 <= *(ushort *)((int)param_1 + 6)) {
      return 0;
    }
    iVar2 = FUN_00003d48(param_1,0);
  } while (iVar2 == 0);
  if (iVar2 == 4) {
    iVar2 = 2;
  }
  return iVar2;
}



/* Function: FUN_00004664 */

undefined4 FUN_00004664(int param_1,int *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  iVar9 = *param_2;
  uVar5 = 0;
  iVar7 = 0;
  iVar13 = *(int *)(param_1 + 0x1c);
  while( true ) {
    iVar3 = iVar7 * 2;
    iVar7 = iVar7 + 1;
    uVar1 = *(ushort *)(iVar9 + iVar3);
    if ((uVar1 < 0x20) || (uVar1 == 0x2f || uVar1 == 0x5c)) break;
    if (0xfe < uVar5) {
      return 6;
    }
    if ((uVar1 < 0x80) && (iVar3 = FUN_000064d4(&DAT_00004920,uVar1), iVar3 != 0)) {
      return 6;
    }
    iVar3 = uVar5 * 2;
    uVar5 = uVar5 + 1;
    *(ushort *)(iVar13 + iVar3) = uVar1;
  }
  if (uVar1 < 0x20) {
    bVar6 = 4;
  }
  else {
    bVar6 = 0;
  }
  *param_2 = iVar9 + iVar7 * 2;
  while( true ) {
    if (uVar5 == 0) {
      return 6;
    }
    sVar2 = *(short *)(iVar13 + uVar5 * 2 + -2);
    if (sVar2 != 0x20 && sVar2 != 0x2e) break;
    uVar5 = uVar5 - 1;
  }
  if (uVar5 == 0) {
    return 6;
  }
  *(undefined2 *)(iVar13 + uVar5 * 2) = 0;
  FUN_000064c0(*(undefined4 *)(param_1 + 0x18),0x20,0xb);
  uVar10 = 0;
  while (sVar2 = *(short *)(iVar13 + uVar10 * 2), sVar2 == 0x20 || sVar2 == 0x2e) {
    uVar10 = uVar10 + 1;
  }
  if (uVar10 != 0) {
    bVar6 = bVar6 | 3;
  }
  while( true ) {
    if (uVar5 != 0) {
      sVar2 = *(short *)(iVar13 + uVar5 * 2 + -2);
    }
    if (uVar5 == 0 || sVar2 == 0x2e) break;
    uVar5 = uVar5 - 1;
  }
  uVar11 = 0;
  uVar14 = 8;
  uVar12 = uVar11;
LAB_00004778:
  do {
    iVar7 = uVar10 * 2;
    uVar10 = uVar10 + 1;
    uVar8 = (uint)*(ushort *)(iVar13 + iVar7);
    if (uVar8 == 0) {
LAB_000047f8:
      if (**(char **)(param_1 + 0x18) == -0x1b) {
        **(char **)(param_1 + 0x18) = '\x05';
      }
      if (uVar14 == 8) {
        uVar11 = (uVar11 & 0x3f) << 2;
      }
      bVar15 = (~uVar11 & 0xc) != 0;
      uVar5 = 0;
      if (bVar15) {
        uVar5 = 3;
      }
      if (!bVar15 || (uVar5 & ~uVar11) == 0) {
        bVar6 = bVar6 | 2;
      }
      if ((bVar6 & 2) == 0) {
        if ((uVar11 & 3) == 1) {
          bVar6 = bVar6 | 0x10;
        }
        if ((uVar11 & 0xc) == 4) {
          bVar6 = bVar6 | 8;
        }
      }
      *(byte *)(*(int *)(param_1 + 0x18) + 0xb) = bVar6;
      return 0;
    }
    if ((uVar8 == 0x20) || ((uVar8 == 0x2e && (uVar10 != uVar5)))) {
      bVar6 = bVar6 | 3;
      goto LAB_00004778;
    }
    if ((uVar12 < uVar14) && (uVar10 != uVar5)) {
      if (0x7f < uVar8) {
        uVar4 = FUN_00000cb4(uVar8);
        uVar8 = FUN_00000c48(uVar4,0);
        bVar6 = bVar6 | 2;
      }
      if (uVar8 < 0x100) {
        if ((uVar8 == 0) || (iVar7 = FUN_000064d4(s________0000492c,uVar8), iVar7 != 0)) {
          bVar6 = bVar6 | 3;
          uVar8 = 0x5f;
        }
        else if (uVar8 - 0x41 < 0x1a) {
          uVar11 = uVar11 | 2;
        }
        else if (uVar8 - 0x61 < 0x1a) {
          uVar8 = uVar8 - 0x20 & 0xffff;
          uVar11 = uVar11 | 1;
        }
      }
      else {
        if (uVar14 - 1 <= uVar12) {
          bVar6 = bVar6 | 3;
          uVar12 = uVar14;
          goto LAB_00004778;
        }
        *(char *)(*(int *)(param_1 + 0x18) + uVar12) = (char)(uVar8 >> 8);
        uVar12 = uVar12 + 1;
      }
      *(char *)(*(int *)(param_1 + 0x18) + uVar12) = (char)uVar8;
      uVar12 = uVar12 + 1;
      goto LAB_00004778;
    }
    if (uVar14 == 0xb) {
      bVar6 = bVar6 | 3;
      goto LAB_000047f8;
    }
    if (uVar10 != uVar5) {
      bVar6 = bVar6 | 3;
    }
    if (uVar5 < uVar10) goto LAB_000047f8;
    uVar14 = 0xb;
    uVar11 = (uVar11 & 0x3f) << 2;
    uVar10 = uVar5;
    uVar12 = 8;
  } while( true );
}



/* Function: FUN_00004934 */

void FUN_00004934(int param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  uint extraout_r2;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  puVar8 = (undefined2 *)((int)param_2 + 10);
  uVar10 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar7 = *(int *)(param_1 + 0x14);
    uVar10 = 0;
    bVar1 = *(byte *)(iVar7 + 0xc);
    do {
      uVar2 = (uint)*(byte *)(iVar7 + uVar10);
      puVar9 = puVar8;
      if (uVar2 == 0x20) break;
      if (uVar2 == 5) {
        uVar2 = 0xe5;
      }
      if (((bVar1 & 8) != 0) && (uVar2 - 0x41 < 0x1a)) {
        uVar2 = uVar2 + 0x20;
      }
      uVar4 = (uVar2 & 0xff) - 0x81;
      bVar11 = 0x7c < uVar4;
      if (uVar4 < 0x7e) {
        bVar11 = 6 < uVar10;
      }
      if (!bVar11) {
        uVar4 = (uint)*(byte *)(iVar7 + uVar10 + 1);
        uVar6 = uVar4 - 0x40;
        bVar12 = 0x3d < uVar6;
        bVar11 = uVar6 == 0x3e;
        if (0x3e < uVar6) {
          uVar4 = uVar4 - 0x80;
          bVar12 = 0x7d < uVar4;
          bVar11 = uVar4 == 0x7e;
        }
        if (!bVar12 || bVar11) {
          uVar10 = uVar10 + 1;
          uVar2 = (uint)*(byte *)(iVar7 + uVar10) | (uVar2 & 0xff) << 8;
        }
      }
      iVar3 = FUN_00000c48(uVar2,1);
      uVar10 = uVar10 + 1;
      if (iVar3 == 0) {
        iVar3 = 0x3f;
      }
      puVar9 = puVar8 + 1;
      *puVar8 = (short)iVar3;
      puVar8 = puVar9;
    } while (uVar10 < 8);
    puVar8 = puVar9;
    if (*(char *)(iVar7 + 8) != ' ') {
      uVar10 = 8;
      *puVar9 = 0x2e;
      puVar9 = puVar9 + 1;
      do {
        uVar2 = (uint)*(byte *)(iVar7 + uVar10);
        puVar8 = puVar9;
        if (uVar2 == 0x20) break;
        if (((bVar1 & 0x10) != 0) && (uVar2 - 0x41 < 0x1a)) {
          uVar2 = uVar2 + 0x20;
        }
        uVar4 = (uVar2 & 0xff) - 0x81;
        bVar11 = 0x7c < uVar4;
        if (uVar4 < 0x7e) {
          bVar11 = 9 < uVar10;
        }
        if (!bVar11) {
          uVar4 = (uint)*(byte *)(iVar7 + uVar10 + 1);
          uVar6 = uVar4 - 0x40;
          bVar12 = 0x3d < uVar6;
          bVar11 = uVar6 == 0x3e;
          if (0x3e < uVar6) {
            uVar4 = uVar4 - 0x80;
            bVar12 = 0x7d < uVar4;
            bVar11 = uVar4 == 0x7e;
          }
          if (!bVar12 || bVar11) {
            uVar10 = uVar10 + 1;
            uVar2 = (uint)*(byte *)(iVar7 + uVar10) | (uVar2 & 0xff) << 8;
          }
        }
        iVar3 = FUN_00000c48(uVar2,1);
        uVar10 = uVar10 + 1;
        if (iVar3 == 0) {
          iVar3 = 0x3f;
        }
        puVar8 = puVar9 + 1;
        *puVar9 = (short)iVar3;
        puVar9 = puVar8;
      } while (uVar10 < 0xb);
    }
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(iVar7 + 0xb);
    iVar3 = FUN_0001f6e8(iVar7 + 0x1d);
    *param_2 = (uint)*(byte *)(iVar7 + 0x1c) | iVar3 << 8;
    *(undefined2 *)(param_2 + 1) = *(undefined2 *)(iVar7 + 0x18);
    uVar10 = (uint)*(ushort *)(iVar7 + 0x16);
    *(ushort *)((int)param_2 + 6) = *(ushort *)(iVar7 + 0x16);
    param_3 = extraout_r2;
  }
  *puVar8 = 0;
  uVar2 = param_2[9];
  if (uVar2 != 0) {
    uVar10 = param_2[10];
  }
  if (uVar2 == 0 || uVar10 == 0) {
    return;
  }
  uVar4 = 0;
  bVar11 = *(int *)(param_1 + 0x10) != 0;
  uVar10 = 0;
  if (bVar11) {
    uVar10 = (uint)*(ushort *)(param_1 + 0x20);
    param_3 = 0xffff;
  }
  if (bVar11 && uVar10 != param_3) {
    psVar5 = *(short **)(param_1 + 0x1c);
    while( true ) {
      if (*psVar5 == 0) break;
      if (param_2[10] - 1 <= uVar4) {
        uVar4 = 0;
        break;
      }
      iVar7 = uVar4 * 2;
      uVar4 = uVar4 + 1;
      *(short *)(uVar2 + iVar7) = *psVar5;
      psVar5 = psVar5 + 1;
    }
  }
  *(undefined2 *)(uVar2 + uVar4 * 2) = 0;
  return;
}



/* Function: FUN_00004b2c */

int FUN_00004b2c(int param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  ushort *local_14;
  
  local_14 = param_2;
  if (*param_2 == 0x2f || *param_2 == 0x5c) {
    local_14 = param_2 + 1;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*local_14 < 0x20) {
    iVar2 = FUN_00003c6c(param_1,0,param_3,param_4,param_1);
    *(undefined4 *)(param_1 + 0x14) = 0;
    return iVar2;
  }
  while( true ) {
    iVar2 = FUN_00004664(param_1,&local_14);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_00003fbc(param_1);
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 0xb);
    if (iVar2 != 0) {
      if (iVar2 == 4 && (bVar1 & 4) == 0) {
        return 5;
      }
      return iVar2;
    }
    if ((bVar1 & 4) != 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    if ((*(byte *)(iVar2 + 0xb) & 0x10) == 0) break;
    *(uint *)(param_1 + 8) = CONCAT22(*(undefined2 *)(iVar2 + 0x14),*(undefined2 *)(iVar2 + 0x1a));
  }
  return 5;
}



/* Function: FUN_00004bf4 */

uint FUN_00004bf4(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00006938(*(undefined1 *)(param_1 + 1),param_1 + 0x30,param_2,1);
  if (iVar2 != 0) {
    return 3;
  }
  if (*(short *)(param_1 + 0x22e) == -0x55ab) {
    iVar2 = FUN_0000651c(param_1 + 0x30);
    if (iVar2 == 1) {
      return 1;
    }
    uVar3 = FUN_0001f6e8(param_1 + 0x67);
    uVar1 = DAT_00005a40;
    if (((uint)*(byte *)(param_1 + 0x66) | (uVar3 & 0xffff) << 8) != DAT_00005a40) {
      uVar3 = FUN_0001f6e8(param_1 + 0x83);
      uVar3 = (uint)*(byte *)(param_1 + 0x82) | (uVar3 & 0xffff) << 8;
      if (uVar3 != uVar1) {
        return uVar3;
      }
    }
    return 0;
  }
  return 2;
}



/* Function: FUN_00004c88 */

undefined4 FUN_00004c88(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  ushort uVar1;
  byte *pbVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  char *pcVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  puVar10 = (ushort *)*param_1;
  uVar13 = *puVar10 - 0x30;
  bVar15 = uVar13 == 9;
  if (uVar13 < 10) {
    bVar15 = puVar10[1] == 0x3a;
  }
  if (bVar15) {
    *param_1 = puVar10 + 2;
  }
  else {
    uVar13 = (uint)*DAT_00005a44;
  }
  if (1 < uVar13) {
    return 0xb;
  }
  pcVar11 = *(char **)(DAT_00005a48 + uVar13 * 4);
  *param_2 = pcVar11;
  if (pcVar11 == (char *)0x0) {
    return 0xc;
  }
  if ((*pcVar11 != '\0') && (uVar4 = FUN_00006930(pcVar11[1]), (uVar4 & 1) == 0)) {
    if (param_3 == 0 || (uVar4 & 4) == 0) {
      return 0;
    }
    return 10;
  }
  *pcVar11 = '\0';
  pcVar11[1] = (char)uVar13;
  uVar13 = FUN_000068cc();
  if ((uVar13 & 1) != 0) {
    return 3;
  }
  if (param_3 != 0 && (uVar13 & 4) != 0) {
    return 10;
  }
  uVar13 = 0;
  iVar5 = FUN_00004bf4(pcVar11,0);
  if (iVar5 == 1) {
    if (pcVar11[0x1f2] == '\0') {
      return 0xd;
    }
    iVar5 = FUN_0001f6e8(pcVar11 + 0x1f7);
    uVar13 = (uint)(byte)pcVar11[0x1f6] | iVar5 << 8;
    iVar5 = FUN_00004bf4(pcVar11,uVar13);
  }
  if (iVar5 != 3) {
    if ((iVar5 == 0) && (*(short *)(pcVar11 + 0x3b) == 0x200)) {
      uVar4 = (uint)*(ushort *)(pcVar11 + 0x46);
      if (uVar4 == 0) {
        iVar5 = FUN_0001f6e8(pcVar11 + 0x55);
        uVar4 = (uint)(byte)pcVar11[0x54] | iVar5 << 8;
      }
      *(uint *)(pcVar11 + 0x1c) = uVar4;
      uVar6 = (uint)(byte)pcVar11[0x40];
      pcVar11[3] = pcVar11[0x40];
      if (uVar6 == 1 || uVar6 == 2) {
        uVar14 = (uint)(byte)pcVar11[0x3d];
        pcVar11[2] = pcVar11[0x3d];
        if ((uVar14 != 0) && ((uVar14 & uVar14 - 1) == 0)) {
          uVar1 = *(ushort *)(pcVar11 + 0x41);
          *(ushort *)(pcVar11 + 8) = uVar1;
          if ((uVar1 & 0xf) == 0) {
            uVar7 = (uint)*(ushort *)(pcVar11 + 0x43);
            if (uVar7 == 0) {
              iVar5 = FUN_0001f6e8(pcVar11 + 0x51);
              uVar7 = (uint)(byte)pcVar11[0x50] | iVar5 << 8;
            }
            uVar8 = (uint)*(ushort *)(pcVar11 + 0x3e);
            if (((uVar8 != 0) &&
                (uVar9 = uVar8 + uVar4 * uVar6 + (uint)(uVar1 >> 4), uVar9 <= uVar7)) &&
               (uVar14 = (uVar7 - uVar9) / uVar14, uVar14 != 0)) {
              cVar12 = '\x01';
              if (0xff5 < uVar14) {
                cVar12 = '\x02';
              }
              uVar7 = uVar14 + 2;
              if (0xfff5 < uVar14) {
                cVar12 = '\x03';
              }
              *(uint *)(pcVar11 + 0x28) = uVar13 + uVar9;
              *(uint *)(pcVar11 + 0x20) = uVar13 + uVar8;
              *(uint *)(pcVar11 + 0x18) = uVar7;
              if (cVar12 == '\x03') {
                if (uVar1 != 0) {
                  return 0xd;
                }
                iVar5 = FUN_0001f6e8(pcVar11 + 0x5d);
                *(uint *)(pcVar11 + 0x24) = (uint)(byte)pcVar11[0x5c] | iVar5 << 8;
                iVar5 = uVar7 * 4;
              }
              else {
                if (uVar1 == 0) {
                  return 0xd;
                }
                *(uint *)(pcVar11 + 0x24) = uVar13 + uVar8 + uVar4 * uVar6;
                if (cVar12 == '\x02') {
                  iVar5 = uVar7 * 2;
                }
                else {
                  iVar5 = (uVar7 & 1) + (uVar7 * 3 >> 1);
                }
              }
              if (iVar5 + 0x1ffU >> 9 <= uVar4) {
                pcVar11[0x10] = -1;
                pcVar11[0x11] = -1;
                pcVar11[0x12] = -1;
                pcVar11[0x13] = -1;
                pcVar11[0xc] = '\0';
                pcVar11[0xd] = '\0';
                pcVar11[0xe] = '\0';
                pcVar11[0xf] = '\0';
                if (cVar12 == '\x03') {
                  pcVar11[5] = '\0';
                  *(uint *)(pcVar11 + 0x14) = uVar13 + *(ushort *)(pcVar11 + 0x60);
                  iVar5 = FUN_00006938(pcVar11[1],pcVar11 + 0x30,
                                       uVar13 + *(ushort *)(pcVar11 + 0x60),1);
                  if (((iVar5 == 0) && (*(short *)(pcVar11 + 0x22e) == -0x55ab)) &&
                     ((iVar5 = FUN_0001f6e8(pcVar11 + 0x31),
                      ((uint)(byte)pcVar11[0x30] | iVar5 << 8) == DAT_00005a4c &&
                      (iVar5 = FUN_0001f6e8(pcVar11 + 0x215),
                      ((uint)(byte)pcVar11[0x214] | iVar5 << 8) == DAT_00005a50)))) {
                    iVar5 = FUN_0001f6e8(pcVar11 + 0x21d);
                    *(uint *)(pcVar11 + 0xc) = (uint)(byte)pcVar11[0x21c] | iVar5 << 8;
                    iVar5 = FUN_0001f6e8(pcVar11 + 0x219);
                    *(uint *)(pcVar11 + 0x10) = (uint)(byte)pcVar11[0x218] | iVar5 << 8;
                  }
                }
                pbVar2 = DAT_00005a44;
                *pcVar11 = cVar12;
                sVar3 = *(short *)(pbVar2 + 2) + 1;
                *(short *)(pbVar2 + 2) = sVar3;
                *(short *)(pcVar11 + 6) = sVar3;
                pcVar11[0x2c] = '\0';
                pcVar11[0x2d] = '\0';
                pcVar11[0x2e] = '\0';
                pcVar11[0x2f] = '\0';
                pcVar11[4] = '\0';
                return 0;
              }
            }
          }
        }
      }
    }
    return 0xd;
  }
  return 1;
}



/* Function: FUN_00004fe4 */

undefined4 FUN_00004fe4(uint param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = DAT_00005a48;
  if (param_1 < 2) {
    puVar2 = *(undefined1 **)(DAT_00005a48 + param_1 * 4);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
    }
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    *(undefined1 **)(iVar1 + param_1 * 4) = param_2;
    *DAT_00005a44 = (char)param_1;
    return 0;
  }
  return 0xb;
}



/* Function: FUN_00005024 */

int FUN_00005024(int *param_1,undefined4 param_2,uint param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int local_60 [5];
  int local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined1 auStack_3c [16];
  int *piStack_2c;
  undefined4 local_28;
  uint uStack_24;
  
  uVar8 = param_3 & 0x1f;
  *param_1 = 0;
  piStack_2c = param_1;
  local_28 = param_2;
  uStack_24 = param_3;
  iVar3 = FUN_00004c88(&local_28,local_60,param_3 & 0x1e);
  local_48 = auStack_3c;
  local_44 = DAT_00005a54;
  if (iVar3 == 0) {
    iVar3 = FUN_00004b2c(local_60,local_28);
  }
  if (iVar3 == 0 && local_4c == 0) {
    iVar3 = 6;
  }
  iVar6 = local_4c;
  if ((param_3 & 0x1c) == 0) {
    if (iVar3 != 0) {
      return iVar3;
    }
    if ((*(byte *)(local_4c + 0xb) & 0x10) != 0) {
      return 4;
    }
    if ((param_3 & 2) != 0 && (*(byte *)(local_4c + 0xb) & 1) != 0) {
      return 7;
    }
LAB_000051b8:
    bVar7 = (byte)uVar8;
    if ((uVar8 & 8) == 0) goto LAB_000051c4;
  }
  else {
    if (iVar3 == 0) {
      if ((param_3 & 4) != 0) {
        return 8;
      }
      if ((*(byte *)(local_4c + 0xb) & 0x11) != 0) {
        return 7;
      }
    }
    else {
      iVar4 = iVar3;
      if (iVar3 == 4) {
        iVar4 = FUN_00004334(local_60);
      }
      uVar8 = uVar8 | 8;
      iVar3 = 0;
      iVar6 = local_4c;
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    bVar7 = (byte)uVar8;
    if ((uVar8 & 8) == 0) goto LAB_000051c4;
    uVar5 = FUN_0000698c();
    *(char *)(iVar6 + 0xe) = (char)uVar5;
    *(char *)(iVar6 + 0xf) = (char)((uint)uVar5 >> 8);
    *(char *)(iVar6 + 0x10) = (char)((uint)uVar5 >> 0x10);
    *(char *)(iVar6 + 0x11) = (char)((uint)uVar5 >> 0x18);
    *(undefined1 *)(iVar6 + 0xb) = 0;
    *(undefined1 *)(iVar6 + 0x1c) = 0;
    *(undefined1 *)(iVar6 + 0x1d) = 0;
    *(undefined1 *)(iVar6 + 0x1e) = 0;
    *(undefined1 *)(iVar6 + 0x1f) = 0;
    uVar1 = *(undefined2 *)(iVar6 + 0x14);
    uVar2 = *(undefined2 *)(iVar6 + 0x1a);
    *(undefined1 *)(iVar6 + 0x1a) = 0;
    *(undefined1 *)(iVar6 + 0x1b) = 0;
    *(undefined1 *)(iVar6 + 0x14) = 0;
    *(undefined1 *)(iVar6 + 0x15) = 0;
    iVar4 = CONCAT22(uVar1,uVar2);
    *(undefined1 *)(local_60[0] + 4) = 1;
    if (iVar4 != 0) {
      uVar5 = *(undefined4 *)(local_60[0] + 0x2c);
      iVar3 = FUN_00003ac8(local_60[0],iVar4);
      if (iVar3 != 0) {
        return iVar3;
      }
      *(int *)(local_60[0] + 0xc) = iVar4 + -1;
      iVar4 = FUN_0000364c(local_60[0],uVar5);
      iVar3 = 0;
      if (iVar4 != 0) {
        return iVar4;
      }
      goto LAB_000051b8;
    }
  }
  bVar7 = bVar7 | 0x20;
LAB_000051c4:
  param_1[7] = *(int *)(local_60[0] + 0x2c);
  param_1[8] = iVar6;
  *(byte *)((int)param_1 + 6) = bVar7;
  param_1[4] = CONCAT22(*(undefined2 *)(iVar6 + 0x14),*(undefined2 *)(iVar6 + 0x1a));
  iVar4 = FUN_0001f6e8(iVar6 + 0x1d);
  param_1[3] = (uint)*(byte *)(iVar6 + 0x1c) | iVar4 << 8;
  param_1[2] = 0;
  param_1[6] = 0;
  *param_1 = local_60[0];
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(local_60[0] + 6);
  return iVar3;
}



/* Function: FUN_00005234 */

int FUN_00005234(int *param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  *param_4 = 0;
  iVar1 = FUN_00006640(*param_1,(short)param_1[1]);
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((*(byte *)((int)param_1 + 6) & 0x80) == 0) {
    if ((*(byte *)((int)param_1 + 6) & 1) == 0) {
      return 7;
    }
    if ((uint)(param_1[3] - param_1[2]) < param_3) {
      param_3 = param_1[3] - param_1[2];
    }
    while( true ) {
      if (param_3 == 0) {
        return 0;
      }
      uVar2 = param_1[2];
      if ((uVar2 & 0x1ff) == 0) break;
LAB_000053fc:
      uVar2 = 0x200 - (param_1[2] & 0x1ffU);
      if (param_3 < uVar2) {
        uVar2 = param_3;
      }
      thunk_FUN_000064b4(param_2,(int)param_1 + (param_1[2] & 0x1ffU) + 0x24,uVar2);
LAB_0000542c:
      param_2 = param_2 + uVar2;
      param_1[2] = param_1[2] + uVar2;
      *param_4 = *param_4 + uVar2;
      param_3 = param_3 - uVar2;
    }
    uVar5 = *(byte *)(*param_1 + 2) - 1 & uVar2 >> 9 & 0xff;
    if (uVar5 == 0) {
      if (uVar2 == 0) {
        uVar2 = param_1[4];
      }
      else {
        uVar2 = FUN_00003838(*param_1,param_1[5]);
      }
      if (1 < uVar2) {
        if (uVar2 == 0xffffffff) goto LAB_000053e4;
        param_1[5] = uVar2;
        goto LAB_000052c0;
      }
    }
    else {
LAB_000052c0:
      iVar1 = FUN_00003814(*param_1,param_1[5]);
      if (iVar1 != 0) {
        uVar2 = param_3 >> 9;
        iVar1 = iVar1 + uVar5;
        if (uVar2 == 0) {
          if ((*(byte *)((int)param_1 + 6) & 0x40) != 0) {
            iVar4 = FUN_00006994(*(undefined1 *)(*param_1 + 1),param_1 + 9,param_1[6],1);
            if (iVar4 != 0) goto LAB_000053e4;
            *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) & 0xbf;
          }
          if ((param_1[6] != iVar1) &&
             (iVar4 = FUN_00006938(*(undefined1 *)(*param_1 + 1),param_1 + 9,iVar1,1), iVar4 != 0))
          goto LAB_000053e4;
          param_1[6] = iVar1;
          goto LAB_000053fc;
        }
        uVar3 = (uint)*(byte *)(*param_1 + 2);
        if (uVar3 < uVar5 + uVar2) {
          uVar2 = uVar3 - uVar5;
        }
        iVar4 = FUN_00006938(*(undefined1 *)(*param_1 + 1),param_2,iVar1,uVar2 & 0xff);
        if (iVar4 != 0) {
LAB_000053e4:
          *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 0x80;
          return 1;
        }
        uVar5 = (uint)*(byte *)((int)param_1 + 6);
        bVar6 = (*(byte *)((int)param_1 + 6) & 0x40) != 0;
        if (bVar6) {
          uVar5 = param_1[6] - iVar1;
        }
        if (bVar6 && uVar5 < uVar2) {
          thunk_FUN_000064b4(param_2 + uVar5 * 0x200,param_1 + 9,0x200);
        }
        uVar2 = uVar2 << 9;
        goto LAB_0000542c;
      }
    }
    *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 0x80;
  }
  return 2;
}



/* Function: FUN_0000545c */

int FUN_0000545c(int *param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  *param_4 = 0;
  iVar1 = FUN_00006640(*param_1,(short)param_1[1]);
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((*(byte *)((int)param_1 + 6) & 0x80) != 0) {
    return 2;
  }
  if ((*(byte *)((int)param_1 + 6) & 2) == 0) {
    return 7;
  }
  if ((uint)param_1[3] <= param_1[3] + param_3) {
    for (; param_3 != 0; param_3 = param_3 - uVar2) {
      uVar2 = param_1[2];
      if ((uVar2 & 0x1ff) == 0) {
        iVar1 = *param_1;
        uVar5 = *(byte *)(iVar1 + 2) - 1 & uVar2 >> 9 & 0xff;
        if (uVar5 == 0) {
          if (uVar2 == 0) {
            iVar3 = param_1[4];
            if (iVar3 == 0) {
              iVar3 = FUN_00003b68(iVar1,0);
              param_1[4] = iVar3;
              goto LAB_00005534;
            }
          }
          else {
            iVar3 = FUN_00003b68(iVar1,param_1[5]);
LAB_00005534:
            if (iVar3 == 0) break;
          }
          if (iVar3 == 1) goto LAB_000055c8;
          if (iVar3 == -1) goto LAB_00005640;
          param_1[5] = iVar3;
        }
        if ((*(byte *)((int)param_1 + 6) & 0x40) != 0) {
          iVar1 = FUN_00006994(*(undefined1 *)(*param_1 + 1),param_1 + 9,param_1[6],1);
          if (iVar1 != 0) goto LAB_00005640;
          *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) & 0xbf;
        }
        iVar1 = FUN_00003814(*param_1,param_1[5]);
        if (iVar1 == 0) {
LAB_000055c8:
          *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 0x80;
          return 2;
        }
        uVar2 = param_3 >> 9;
        uVar6 = iVar1 + uVar5;
        if (uVar2 == 0) {
          bVar7 = uVar6 <= (uint)param_1[6];
          if (param_1[6] != uVar6) {
            bVar7 = (uint)param_1[3] <= (uint)param_1[2];
          }
          if ((!bVar7) &&
             (iVar1 = FUN_00006938(*(undefined1 *)(*param_1 + 1),param_1 + 9,uVar6,1), iVar1 != 0))
          goto LAB_00005640;
          param_1[6] = uVar6;
          goto LAB_00005658;
        }
        uVar4 = (uint)*(byte *)(*param_1 + 2);
        if (uVar4 < uVar5 + uVar2) {
          uVar2 = uVar4 - uVar5;
        }
        iVar1 = FUN_00006994(*(undefined1 *)(*param_1 + 1),param_2,uVar6,uVar2 & 0xff);
        if (iVar1 != 0) {
LAB_00005640:
          *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 0x80;
          return 1;
        }
        if (param_1[6] - uVar6 < uVar2) {
          thunk_FUN_000064b4(param_1 + 9,param_2 + (param_1[6] - uVar6) * 0x200,0x200);
          *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) & 0xbf;
        }
        uVar2 = uVar2 << 9;
      }
      else {
LAB_00005658:
        uVar2 = 0x200 - (param_1[2] & 0x1ffU);
        if (param_3 < uVar2) {
          uVar2 = param_3;
        }
        thunk_FUN_000064b4((int)param_1 + (param_1[2] & 0x1ffU) + 0x24,param_2,uVar2);
        *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 0x40;
      }
      param_2 = param_2 + uVar2;
      param_1[2] = param_1[2] + uVar2;
      *param_4 = *param_4 + uVar2;
    }
  }
  if ((uint)param_1[3] < (uint)param_1[2]) {
    param_1[3] = param_1[2];
  }
  *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 0x20;
  return 0;
}



/* Function: FUN_000056dc */

int FUN_000056dc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00006640(*param_1,(short)param_1[1]);
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((*(byte *)((int)param_1 + 6) & 0x20) == 0) {
    return 0;
  }
  if ((*(byte *)((int)param_1 + 6) & 0x40) != 0) {
    iVar1 = FUN_00006994(*(undefined1 *)(*param_1 + 1),param_1 + 9,param_1[6],1);
    if (iVar1 != 0) {
      return 1;
    }
    *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) & 0xbf;
  }
  iVar1 = FUN_0000364c(*param_1,param_1[7]);
  if (iVar1 == 0) {
    iVar1 = param_1[8];
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x20;
    *(char *)(iVar1 + 0x1c) = (char)param_1[3];
    *(char *)(iVar1 + 0x1d) = (char)((ushort)(short)param_1[3] >> 8);
    *(char *)(iVar1 + 0x1e) = (char)((uint)param_1[3] >> 0x10);
    *(char *)(iVar1 + 0x1f) = (char)((uint)param_1[3] >> 0x18);
    *(char *)(iVar1 + 0x1a) = (char)param_1[4];
    *(char *)(iVar1 + 0x1b) = (char)((ushort)(short)param_1[4] >> 8);
    *(char *)(iVar1 + 0x14) = (char)((uint)param_1[4] >> 0x10);
    *(char *)(iVar1 + 0x15) = (char)((uint)param_1[4] >> 0x18);
    uVar2 = FUN_0000698c();
    *(char *)(iVar1 + 0x16) = (char)uVar2;
    *(char *)(iVar1 + 0x17) = (char)((uint)uVar2 >> 8);
    *(char *)(iVar1 + 0x18) = (char)((uint)uVar2 >> 0x10);
    *(char *)(iVar1 + 0x19) = (char)((uint)uVar2 >> 0x18);
    *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) & 0xdf;
    *(undefined1 *)(*param_1 + 4) = 1;
    iVar1 = FUN_00003714(*param_1);
    return iVar1;
  }
  return iVar1;
}



/* Function: FUN_000057fc */

void FUN_000057fc(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_000056dc();
  if (iVar1 == 0) {
    *param_1 = 0;
  }
  return;
}



/* Function: FUN_00005818 */

int FUN_00005818(int *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  iVar3 = FUN_00006640(*param_1,(short)param_1[1]);
  if (iVar3 != 0) {
    return iVar3;
  }
  if ((*(byte *)((int)param_1 + 6) & 0x80) != 0) {
    return 2;
  }
  if (((uint)param_1[3] < param_2) && ((*(byte *)((int)param_1 + 6) & 2) == 0)) {
    param_2 = param_1[3];
  }
  iVar4 = param_1[2];
  iVar7 = 0;
  param_1[2] = 0;
  iVar3 = extraout_r2;
  if (param_2 != 0) {
    iVar3 = *param_1;
    bVar2 = *(byte *)(iVar3 + 2);
    uVar1 = (uint)bVar2 * 0x200;
    if ((iVar4 == 0) ||
       (uVar5 = iVar4 - 1,
       (uint)((ulonglong)(param_2 - 1) / ((ulonglong)bVar2 << 9)) <
       (uint)((ulonglong)uVar5 / ((ulonglong)bVar2 << 9)))) {
      iVar4 = param_1[4];
      if (iVar4 == 0) {
        iVar4 = FUN_00003b68(iVar3,0);
        if (iVar4 == 1) goto LAB_000059d4;
        if (iVar4 == -1) goto LAB_00005a08;
        param_1[4] = iVar4;
        iVar3 = extraout_r2_00;
      }
      param_1[5] = iVar4;
    }
    else {
      uVar5 = uVar5 & ~(uVar1 - 1);
      param_1[2] = uVar5;
      iVar4 = param_1[5];
      param_2 = param_2 - uVar5;
    }
    if (iVar4 != 0) {
      for (; uVar5 = param_2, uVar1 < param_2; param_2 = param_2 + (uint)bVar2 * -0x200) {
        if ((*(byte *)((int)param_1 + 6) & 2) == 0) {
          uVar6 = FUN_00003838(*param_1);
          iVar3 = extraout_r2_02;
        }
        else {
          uVar6 = FUN_00003b68();
          iVar3 = extraout_r2_01;
          uVar5 = uVar1;
          if (uVar6 == 0) break;
        }
        if (uVar6 == 0xffffffff) goto LAB_00005a08;
        bVar9 = uVar6 != 0;
        bVar8 = uVar6 == 1;
        if (1 < uVar6) {
          bVar9 = uVar6 <= *(uint *)(*param_1 + 0x18);
          bVar8 = *(uint *)(*param_1 + 0x18) == uVar6;
        }
        if (!bVar9 || bVar8) goto LAB_000059d4;
        param_1[5] = uVar6;
        param_1[2] = param_1[2] + uVar1;
      }
      param_1[2] = param_1[2] + uVar5;
      if ((uVar5 & 0x1ff) != 0) {
        iVar7 = FUN_00003814(*param_1);
        if (iVar7 == 0) {
LAB_000059d4:
          *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 0x80;
          return 2;
        }
        iVar7 = iVar7 + (uVar5 >> 9);
        iVar3 = extraout_r2_03;
      }
    }
  }
  bVar8 = (*(ushort *)(param_1 + 2) & 0x1ff) != 0;
  if (bVar8) {
    iVar3 = param_1[6];
  }
  if (bVar8 && iVar3 != iVar7) {
    if ((*(byte *)((int)param_1 + 6) & 0x40) != 0) {
      iVar3 = FUN_00006994(*(undefined1 *)(*param_1 + 1),param_1 + 9,iVar3,1);
      if (iVar3 != 0) goto LAB_00005a08;
      *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) & 0xbf;
    }
    iVar3 = FUN_00006938(*(undefined1 *)(*param_1 + 1),param_1 + 9,iVar7,1);
    if (iVar3 != 0) {
LAB_00005a08:
      *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 0x80;
      return 1;
    }
    param_1[6] = iVar7;
  }
  if ((uint)param_1[3] < (uint)param_1[2]) {
    param_1[3] = param_1[2];
    *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 0x20;
  }
  return 0;
}



/* Function: FUN_00005a58 */

int FUN_00005a58(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_20 [16];
  int *piStack_10;
  undefined4 local_c;
  
  piStack_10 = param_1;
  local_c = param_2;
  iVar1 = FUN_00004c88(&local_c,param_1,0);
  iVar2 = DAT_00005a54;
  if (iVar1 != 0) {
    return iVar1;
  }
  param_1[6] = (int)auStack_20;
  param_1[7] = iVar2;
  iVar2 = FUN_00004b2c(param_1,local_c);
  if (iVar2 == 0) {
    iVar2 = param_1[5];
    if (iVar2 != 0) {
      if ((*(byte *)(iVar2 + 0xb) & 0x10) == 0) {
        return 5;
      }
      param_1[2] = CONCAT22(*(undefined2 *)(iVar2 + 0x14),*(undefined2 *)(iVar2 + 0x1a));
    }
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(*param_1 + 6);
    iVar2 = FUN_00003c6c(param_1,0);
  }
  if (iVar2 == 4) {
    return 5;
  }
  return iVar2;
}



/* Function: FUN_00005b00 */

undefined8 FUN_00005b00(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  iVar1 = FUN_00006640(*param_1,*(undefined2 *)(param_1 + 1));
  uVar2 = DAT_00005a54;
  if (iVar1 == 0) {
    if (param_2 == 0) {
      uVar2 = FUN_00003c6c(param_1,0);
      return CONCAT44(iStack_20,uVar2);
    }
    param_1[6] = &iStack_20;
    param_1[7] = uVar2;
    iVar1 = FUN_0000419c(param_1);
    if (iVar1 == 4) {
      param_1[4] = 0;
    }
    if (iVar1 == 4 || iVar1 == 0) {
      FUN_00004934(param_1,param_2);
      iVar1 = FUN_00003d48(param_1,0);
      if (iVar1 == 4) {
        iVar1 = 0;
        param_1[4] = 0;
      }
    }
  }
  return CONCAT44(iStack_20,iVar1);
}



/* Function: FUN_00005b88 */

int FUN_00005b88(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_48 [20];
  int local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 auStack_24 [16];
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = param_1;
  uStack_10 = param_2;
  iVar1 = FUN_00004c88(&local_14,auStack_48,0);
  if (iVar1 == 0) {
    local_30 = auStack_24;
    local_2c = DAT_00005a54;
    iVar1 = FUN_00004b2c(auStack_48,local_14);
    if (iVar1 == 0) {
      if (local_34 == 0) {
        iVar1 = 6;
      }
      else {
        FUN_00004934(auStack_48,param_2);
      }
    }
  }
  return iVar1;
}



/* Function: FUN_00005e34 */

int FUN_00005e34(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_60 [5];
  int local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined1 auStack_3c [8];
  uint local_34;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  local_c = param_1;
  iVar1 = FUN_00004c88(&local_c,local_60,1);
  if (iVar1 == 0) {
    local_48 = auStack_18;
    local_44 = DAT_00005a54;
    iVar1 = FUN_00004b2c(local_60,local_c);
    if (iVar1 == 0) {
      if (local_4c == 0) {
        iVar1 = 6;
      }
      else if ((*(byte *)(local_4c + 0xb) & 1) != 0) {
        iVar1 = 7;
      }
      uVar2 = CONCAT22(*(undefined2 *)(local_4c + 0x14),*(undefined2 *)(local_4c + 0x1a));
      if (iVar1 == 0) {
        if ((*(byte *)(local_4c + 0xb) & 0x10) != 0) {
          if (uVar2 < 2) {
            return 2;
          }
          thunk_FUN_000064b4(auStack_3c,local_60,0x24);
          local_34 = uVar2;
          iVar1 = FUN_00003c6c(auStack_3c,2);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_0000419c(auStack_3c);
          if (iVar1 == 0) {
            return 7;
          }
          if (iVar1 != 4 && iVar1 != 0) {
            return iVar1;
          }
        }
        iVar1 = FUN_000045e0(local_60);
        if ((iVar1 == 0) && ((uVar2 == 0 || (iVar1 = FUN_00003ac8(local_60[0],uVar2), iVar1 == 0))))
        {
          iVar1 = FUN_00003714(local_60[0]);
        }
      }
    }
  }
  return iVar1;
}



/* Function: FUN_00005f54 */

int FUN_00005f54(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte bVar9;
  bool bVar10;
  byte *local_70 [2];
  uint local_68;
  int local_5c;
  undefined1 *local_58;
  undefined4 local_54;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined1 auStack_34 [12];
  undefined4 local_28;
  
  local_28 = param_1;
  uVar4 = FUN_0000698c();
  iVar5 = FUN_00004c88(&local_28,local_70,1);
  if (iVar5 == 0) {
    local_58 = auStack_34;
    local_54 = DAT_00005a54;
    iVar5 = FUN_00004b2c(local_70,local_28);
    if (iVar5 == 0) {
      iVar5 = 8;
    }
    else if (iVar5 == 4) {
      uVar6 = FUN_00003b68(local_70[0],0);
      if (uVar6 == 0) {
        iVar5 = 7;
      }
      else if (uVar6 == 1) {
        iVar5 = 2;
      }
      else if (uVar6 == 0xffffffff) {
        iVar5 = 1;
      }
      else {
        iVar5 = FUN_0000364c(local_70[0],0);
        if (iVar5 == 0) {
          iVar7 = FUN_00003814(local_70[0],uVar6);
          pbVar3 = local_70[0];
          pbVar8 = local_70[0] + 0x30;
          FUN_000064c0(pbVar8,0,0x200);
          FUN_000064c0(pbVar8,0x20,0xb);
          *pbVar8 = 0x2e;
          pbVar3[0x3b] = 0x10;
          local_38 = uVar4 & 0xff;
          pbVar3[0x46] = (byte)uVar4;
          local_3c = (uVar4 & 0xffff) >> 8;
          pbVar3[0x47] = (byte)(uVar4 >> 8);
          local_40 = (uVar4 & 0xffffff) >> 0x10;
          pbVar3[0x48] = (byte)(uVar4 >> 0x10);
          local_44 = uVar4 >> 0x18;
          pbVar3[0x49] = (byte)(uVar4 >> 0x18);
          local_48 = uVar6 & 0xff;
          pbVar3[0x4a] = (byte)uVar6;
          local_4c = (uVar6 & 0xffff) >> 8;
          pbVar3[0x4b] = (byte)(uVar6 >> 8);
          bVar1 = (byte)(uVar6 >> 0x10);
          pbVar3[0x44] = bVar1;
          bVar2 = (byte)(uVar6 >> 0x18);
          pbVar3[0x45] = bVar2;
          thunk_FUN_000064b4(pbVar3 + 0x50,pbVar8,0x20);
          pbVar3[0x51] = 0x2e;
          uVar4 = (uint)*local_70[0];
          bVar10 = uVar4 == 3;
          if (bVar10) {
            uVar4 = *(uint *)(local_70[0] + 0x24);
          }
          if (bVar10 && uVar4 == local_68) {
            local_68 = 0;
          }
          pbVar3[0x6a] = (byte)local_68;
          pbVar3[0x6b] = (byte)(local_68 >> 8);
          pbVar3[100] = (byte)(local_68 >> 0x10);
          pbVar3[0x65] = (byte)(local_68 >> 0x18);
          for (bVar9 = local_70[0][2]; bVar9 != 0; bVar9 = bVar9 - 1) {
            *(int *)(local_70[0] + 0x2c) = iVar7;
            iVar7 = iVar7 + 1;
            local_70[0][4] = 1;
            iVar5 = FUN_0000364c(local_70[0],0);
            if (iVar5 != 0) goto LAB_00006154;
            FUN_000064c0(pbVar8,0,0x200);
          }
          iVar5 = FUN_00004334(local_70);
          if (iVar5 == 0) {
            *(undefined1 *)(local_5c + 0xb) = 0x10;
            *(char *)(local_5c + 0x16) = (char)local_38;
            *(char *)(local_5c + 0x17) = (char)local_3c;
            *(char *)(local_5c + 0x18) = (char)local_40;
            *(char *)(local_5c + 0x19) = (char)local_44;
            *(char *)(local_5c + 0x1a) = (char)local_48;
            *(char *)(local_5c + 0x1b) = (char)local_4c;
            *(byte *)(local_5c + 0x14) = bVar1;
            *(byte *)(local_5c + 0x15) = bVar2;
            local_70[0][4] = 1;
            iVar5 = FUN_00003714(local_70[0]);
            return iVar5;
          }
        }
      }
LAB_00006154:
      FUN_00003ac8(local_70[0],uVar6);
    }
  }
  return iVar5;
}



/* Function: FUN_000061c8 */

void FUN_000061c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int local_48 [5];
  int local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 auStack_24 [12];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  iVar2 = FUN_00004c88(&local_18,local_48,1);
  if (iVar2 == 0) {
    local_30 = auStack_24;
    local_2c = DAT_00005a54;
    iVar2 = FUN_00004b2c(local_48,local_18);
    if ((iVar2 == 0) && (local_34 != 0)) {
      bVar1 = (byte)param_3 & 0x27;
      *(byte *)(local_34 + 0xb) = (byte)param_2 & bVar1 | *(byte *)(local_34 + 0xb) & ~bVar1;
      *(undefined1 *)(local_48[0] + 4) = 1;
      FUN_00003714(local_48[0]);
    }
  }
  return;
}



/* Function: FUN_00006258 */

void FUN_00006258(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_40 [5];
  int local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 auStack_1c [12];
  undefined4 local_10;
  int iStack_c;
  
  local_10 = param_1;
  iStack_c = param_2;
  iVar1 = FUN_00004c88(&local_10,local_40,1);
  if (iVar1 == 0) {
    local_28 = auStack_1c;
    local_24 = DAT_00005a54;
    iVar1 = FUN_00004b2c(local_40,local_10);
    if ((iVar1 == 0) && (local_2c != 0)) {
      *(undefined1 *)(local_2c + 0x16) = *(undefined1 *)(param_2 + 6);
      *(char *)(local_2c + 0x17) = (char)((ushort)*(undefined2 *)(param_2 + 6) >> 8);
      *(undefined1 *)(local_2c + 0x18) = *(undefined1 *)(param_2 + 4);
      *(char *)(local_2c + 0x19) = (char)((ushort)*(undefined2 *)(param_2 + 4) >> 8);
      *(undefined1 *)(local_40[0] + 4) = 1;
      FUN_00003714(local_40[0]);
    }
  }
  return;
}



/* Function: FUN_000062f4 */

int FUN_000062f4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  char *local_80 [2];
  uint local_78;
  int local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  char *local_5c [2];
  uint local_54;
  int local_48;
  byte local_38 [2];
  undefined1 auStack_36 [22];
  undefined1 auStack_20 [12];
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = param_1;
  uStack_10 = param_2;
  iVar1 = FUN_00004c88(&local_14,local_80,1);
  if (iVar1 == 0) {
    local_5c[0] = local_80[0];
    local_68 = auStack_20;
    local_64 = DAT_00005a54;
    iVar1 = FUN_00004b2c(local_80,local_14);
    if (iVar1 == 0) {
      if (local_6c == 0) {
        iVar1 = 4;
      }
      else {
        thunk_FUN_000064b4(local_38,local_6c + 0xb,0x15);
        thunk_FUN_000064b4(local_5c,local_80,0x24);
        iVar1 = FUN_00004b2c(local_5c,param_2);
        if (iVar1 == 0) {
          iVar1 = 8;
        }
        else if ((iVar1 == 4) && (iVar1 = FUN_00004334(local_5c), iVar1 == 0)) {
          thunk_FUN_000064b4(local_48 + 0xd,auStack_36,0x13);
          *(byte *)(local_48 + 0xb) = local_38[0] | 0x20;
          local_80[0][4] = '\x01';
          bVar2 = local_78 != local_54;
          if (bVar2) {
            local_78 = (uint)*(byte *)(local_48 + 0xb);
          }
          if (bVar2 && (local_78 & 0x10) != 0) {
            iVar1 = FUN_00003814(local_5c[0],
                                 CONCAT22(*(undefined2 *)(local_48 + 0x14),
                                          *(undefined2 *)(local_48 + 0x1a)));
            if (iVar1 == 0) {
              return 2;
            }
            iVar1 = FUN_0000364c(local_5c[0]);
            if (iVar1 != 0) {
              return iVar1;
            }
            if (local_5c[0][0x51] == '.') {
              if ((*local_5c[0] == '\x03') && (local_54 == *(uint *)(local_5c[0] + 0x24))) {
                local_54 = 0;
              }
              local_5c[0][0x6a] = (char)local_54;
              local_5c[0][0x6b] = (char)(local_54 >> 8);
              local_5c[0][100] = (char)(local_54 >> 0x10);
              local_5c[0][0x65] = (char)(local_54 >> 0x18);
              local_5c[0][4] = '\x01';
            }
          }
          iVar1 = FUN_000045e0(local_80);
          if (iVar1 == 0) {
            iVar1 = FUN_00003714(local_80[0]);
          }
        }
      }
    }
  }
  return iVar1;
}



/* Function: thunk_FUN_000064b4 */

void thunk_FUN_000064b4(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  bool bVar1;
  
  while (bVar1 = param_3 != 0, param_3 = param_3 + -1, bVar1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



/* Function: FUN_000064b4 */

void FUN_000064b4(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  bool bVar1;
  
  while (bVar1 = param_3 != 0, param_3 = param_3 + -1, bVar1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



/* Function: FUN_000064c0 */

void FUN_000064c0(undefined1 *param_1,undefined1 param_2,int param_3)

{
  bool bVar1;
  
  while (bVar1 = param_3 != 0, param_3 = param_3 + -1, bVar1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return;
}



/* Function: FUN_000064d4 */

void FUN_000064d4(byte *param_1,uint param_2)

{
  for (; *param_1 != 0 && *param_1 != param_2; param_1 = param_1 + 1) {
  }
  return;
}



/* Function: FUN_000064f0 */

uint FUN_000064f0(byte *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0xb;
  do {
    iVar2 = iVar2 + -1;
    uVar1 = (uVar1 >> 1) + uVar1 * 0x80 + (uint)*param_1 & 0xff;
    param_1 = param_1 + 1;
  } while (iVar2 != 0);
  return uVar1;
}



/* Function: FUN_0000651c */

undefined4 FUN_0000651c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  uint local_50;
  uint local_4c [4];
  int local_3c [4];
  undefined1 local_2c [4];
  char local_28 [4];
  
  uVar4 = 0;
  iVar5 = 0;
  local_50 = 0;
  iVar1 = FUN_000069e8(0,5,&local_50);
  if (iVar1 == 0) {
    do {
      iVar1 = param_1 + uVar4 * 0x10;
      local_2c[uVar4] = *(undefined1 *)(iVar1 + 0x1be);
      local_28[uVar4] = *(char *)(iVar1 + 0x1c2);
      uVar3 = FUN_0001f6e8(iVar1 + 0x1c6);
      local_4c[uVar4] = uVar3;
      iVar1 = FUN_0001f6e8(iVar1 + 0x1ca);
      local_3c[uVar4] = iVar1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    if (*(short *)(param_1 + 0x1fe) == -0x55ab) {
      uVar3 = 0;
      uVar4 = uVar3;
      do {
        uVar4 = uVar4 + (local_28[uVar3] == '\x05' || local_28[uVar3] == '\x0f');
        if (1 < uVar4) goto LAB_00006634;
        uVar3 = uVar3 + 1;
      } while (uVar3 < 4);
      uVar4 = 0;
      do {
        if (local_28[uVar4] != '\0') {
          uVar3 = local_4c[uVar4];
          bVar7 = local_50 <= uVar3;
          bVar6 = uVar3 == local_50;
          if (!bVar7 || bVar6) {
            bVar7 = local_50 <= uVar3 + local_3c[uVar4];
            bVar6 = uVar3 + local_3c[uVar4] == local_50;
          }
          if (bVar7 && !bVar6) goto LAB_00006634;
          iVar5 = iVar5 + 1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 4);
      if (iVar5 != 0) {
        return 1;
      }
    }
LAB_00006634:
    uVar2 = 0;
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}



/* Function: FUN_00006640 */

undefined4 FUN_00006640(byte *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 != (byte *)0x0) {
    param_3 = (uint)*param_1;
  }
  if ((param_1 != (byte *)0x0 && param_3 != 0) && (*(ushort *)(param_1 + 6) == param_2)) {
    uVar1 = FUN_00006930(param_1[1]);
    uVar2 = 0;
    if ((uVar1 & 1) != 0) {
      uVar2 = 3;
    }
    return uVar2;
  }
  return 9;
}



/* Function: FUN_0000667c */

int FUN_0000667c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_00000e5c();
  FUN_00006a1c(0);
  FUN_00006a1c(1);
  iVar1 = DAT_000068f0;
  uVar3 = 0;
  do {
    FUN_00000df0(0);
    FUN_00000dbc(*(undefined4 *)(iVar1 + uVar3 * 4));
    FUN_00000df0(1);
    FUN_00001dc8(2);
    iVar2 = FUN_00001538();
    if (iVar2 == 1) {
      FUN_00000df0(0);
      FUN_00000d90(DAT_000068f4);
      FUN_00000dbc(DAT_000068f8);
      FUN_00000df0(1);
      return 1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  return iVar2;
}



/* Function: FUN_00006704 */

undefined4 FUN_00006704(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_000009f8(s_diskio_ErrProc__cmd_0x_x_000068fc,param_1);
  if (param_1 == 0) {
    iVar1 = FUN_0000667c();
    if (iVar1 == 1) {
      return 1;
    }
  }
  else {
    if (param_1 == 1) {
      iVar1 = FUN_00001794(*param_2,param_2[1],param_2[2]);
      if (iVar1 == 1) {
        return 1;
      }
      iVar1 = FUN_00001794(*param_2,param_2[1],param_2[2]);
      if (iVar1 == 1) {
        return 1;
      }
      uVar3 = 0;
      while ((uVar3 < (uint)param_2[1] &&
             (iVar1 = FUN_00001794(*param_2 + uVar3,1,param_2[2] + uVar3 * 0x200), iVar1 != 0))) {
        uVar3 = uVar3 + 1;
      }
      if (param_2[1] != uVar3) {
        FUN_00006a1c(0);
        FUN_00006a1c(1);
        iVar1 = FUN_0000667c();
        if ((iVar1 == 1) && (iVar1 = FUN_00001794(*param_2,param_2[1],param_2[2]), iVar1 == 1)) {
          return 1;
        }
        FUN_00006a1c(0);
        FUN_00006a1c(1);
        iVar1 = FUN_0000667c();
        if ((iVar1 == 1) && (iVar1 = FUN_00001794(*param_2,param_2[1],param_2[2]), iVar1 == 1)) {
          return 1;
        }
        FUN_00006a1c(0);
        FUN_00006a1c(1);
        iVar1 = FUN_0000667c();
        if (iVar1 != 1) {
          return 0;
        }
        for (uVar3 = 0; uVar3 < (uint)param_2[1]; uVar3 = uVar3 + 1) {
          iVar1 = FUN_00001794(*param_2 + uVar3,1,param_2[2] + uVar3 * 0x200);
          if (iVar1 == 0) {
            return 0;
          }
        }
      }
      return 1;
    }
    if (param_1 == 2) {
      iVar1 = FUN_0000170c(*param_2,param_2[1],param_2[2]);
      if (iVar1 == 1) {
        return 1;
      }
      uVar3 = 0;
      do {
        FUN_00006a1c(0);
        FUN_00006a1c(1);
        iVar2 = FUN_0000667c();
        if (iVar2 == 1) {
          if (param_2[1] == 1) {
            iVar1 = FUN_00001794(*param_2,1,param_2[2]);
          }
          if (iVar1 == 1) {
            return 1;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 3);
    }
  }
  return 0;
}



/* Function: FUN_000068cc */

bool FUN_000068cc(void)

{
  int iVar1;
  
  iVar1 = FUN_0000667c();
  if (iVar1 == 0) {
    FUN_000009f8(s_disk_initialize_error_00006918);
  }
  return iVar1 == 0;
}



/* Function: FUN_00006930 */

undefined4 FUN_00006930(void)

{
  return 0;
}



/* Function: FUN_00006938 */

undefined8 FUN_00006938(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  iVar1 = FUN_00001794(param_3,param_4,param_2);
  if (iVar1 == 0) {
    local_20 = param_3;
    uStack_1c = param_4;
    local_18 = param_2;
    iVar1 = FUN_00006704(1,&local_20);
    uVar2 = (uint)(iVar1 == 0);
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(local_20,uVar2);
}



/* Function: FUN_0000698c */

undefined4 FUN_0000698c(void)

{
  return 0;
}



/* Function: FUN_00006994 */

undefined8 FUN_00006994(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  iVar1 = FUN_0000170c(param_3,param_4,param_2);
  if (iVar1 == 0) {
    local_20 = param_3;
    uStack_1c = param_4;
    local_18 = param_2;
    iVar1 = FUN_00006704(1,&local_20);
    uVar2 = (uint)(iVar1 == 0);
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(local_20,uVar2);
}



/* Function: FUN_000069e8 */

undefined4 FUN_000069e8(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return 4;
  }
  if ((param_2 == 5) && (iVar1 = *DAT_00006a54, *param_3 = iVar1, iVar1 == 0)) {
    return 1;
  }
  return 0;
}



/* Function: FUN_00006a1c */

void FUN_00006a1c(int param_1)

{
  if (param_1 == 1) {
    thunk_FUN_00002600(0x1f);
    thunk_FUN_00002600(0xe);
  }
  else {
    thunk_FUN_0000269c();
    thunk_FUN_0000269c(0xe);
  }
  FUN_00001dc8(300);
  return;
}



/* Function: FUN_00006a58 */

void FUN_00006a58(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_00006cec + param_1 * 0x40;
  iVar2 = DAT_00006cf0 + param_1 * 0x40;
  iVar1 = iVar3;
  if (0x1f < param_1) {
    iVar1 = iVar2;
  }
  *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x1000000;
  FUN_00007900(param_1);
  FUN_00007920(param_1);
  FUN_00007940(param_1);
  if (param_1 < 0x20) {
    iVar2 = iVar3;
  }
  *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x10000000;
  return;
}



/* Function: FUN_00006ab8 */

undefined1 FUN_00006ab8(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_00006cec;
  if (0x1f < param_1) {
    iVar1 = DAT_00006cf0;
  }
  uVar2 = *(uint *)(iVar1 + param_1 * 0x40 + 0xc);
  if ((uVar2 & 0x100000) != 0) {
    FUN_000006e4(s___int_val___CHN_ERR_INT_MASK_STS_00006d00,s_dma_phy_c_00006cf4,0x4a);
  }
  if ((uVar2 & 0x80000) != 0) {
    return 8;
  }
  if ((uVar2 & 0x40000) != 0) {
    return 4;
  }
  if ((uVar2 & 0x20000) == 0) {
    return (uVar2 & 0x10000) != 0;
  }
  return 2;
}



/* Function: FUN_00006b18 */

void FUN_00006b18(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  puVar1 = DAT_00006d28;
  iVar3 = DAT_00006d24;
  if (param_1 != 0) {
    uVar2 = *DAT_00006d28 | 1;
  }
  else {
    uVar2 = *DAT_00006d28 & 0xfffffffe;
  }
  *DAT_00006d28 = uVar2;
  if (param_1 == 0) {
    return;
  }
  while ((*puVar1 & 4) == 0) {
    bVar4 = iVar3 == 0;
    iVar3 = iVar3 + -1;
    if (bVar4) {
      FUN_000006e4(s_tmr_out___00006d2c,s_dma_phy_c_00006cf4,0x73);
    }
  }
  return;
}



/* Function: FUN_00006b68 */

void FUN_00006b68(uint param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar4 = (uint *)(DAT_00006cec + param_1 * 0x40);
  puVar3 = (uint *)(DAT_00006cf0 + param_1 * 0x40);
  if (param_2 == 0) {
    puVar2 = puVar4;
    if (0x1f < param_1) {
      puVar2 = puVar3;
    }
    uVar1 = *puVar2 & 0xfffffffe;
  }
  else {
    puVar2 = puVar3;
    if (param_1 < 0x20) {
      puVar2 = puVar4;
    }
    uVar1 = *puVar2 | 1;
  }
  if (param_1 < 0x20) {
    puVar3 = puVar4;
  }
  *puVar3 = uVar1;
  return;
}



/* Function: FUN_00006c68 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00006c68(void)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  
  FUN_000006f4();
  uVar4 = *(uint *)(_DAT_00006d3c + 0x28);
  if (uVar4 == 0) {
    FUN_00000704();
    uVar1 = FUN_000006ec(s__grp1_audio_callback_err__00006d3f + 1);
    FUN_000006e8(&LAB_00006d5c,s_dma_phy_c_00006cf4,0xbc,uVar1);
  }
  iVar5 = ((uVar4 & 0x3fff) >> 8) + 0x17;
  iVar2 = FUN_00006ab8(iVar5);
  FUN_00006a58(iVar5);
  pcVar3 = *(code **)(DAT_00006d38 + iVar5 * 0x10 + 0xc);
  if (pcVar3 != Reset) {
    iVar5 = *(int *)(DAT_00006d38 + iVar5 * 0x10);
    if (iVar5 == 0) {
      iVar5 = iVar2;
    }
    (*pcVar3)(iVar5);
  }
  FUN_00000704();
  return 0;
}



/* Function: FUN_00006de4 */

void FUN_00006de4(void)

{
  int iVar1;
  
  FUN_000006f4();
  FUN_0001f538(DAT_00006d38,0x206);
  iVar1 = FUN_00000794(0x32,DAT_00007050);
  if (iVar1 == 0) {
    FUN_00000738(0x32);
  }
  iVar1 = FUN_00000794(0x4f,DAT_00007054);
  if (iVar1 == 0) {
    FUN_00000738(0x4f);
  }
  iVar1 = FUN_00000794(0x51,DAT_00007058);
  if (iVar1 == 0) {
    FUN_00000738(0x51);
  }
  FUN_00000704();
  return;
}



/* Function: FUN_00006e48 */

/* WARNING: Removing unreachable block (ram,0x0001f576) */
/* WARNING: Removing unreachable block (ram,0x0001f56c) */
/* WARNING: Removing unreachable block (ram,0x0001f55c) */
/* WARNING: Removing unreachable block (ram,0x0001f562) */
/* WARNING: Removing unreachable block (ram,0x0001f574) */
/* WARNING: Removing unreachable block (ram,0x0001f57a) */
/* WARNING: Removing unreachable block (ram,0x0001f580) */
/* WARNING: Removing unreachable block (ram,0x0001f584) */

undefined4 * FUN_00006e48(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  iVar2 = DAT_00006cec;
  if (0x1f < param_1) {
    iVar2 = DAT_00006cf0;
  }
  puVar1 = (undefined4 *)(iVar2 + param_1 * 0x40);
  bVar4 = true;
  uVar3 = 0x20;
  do {
    if (bVar4) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1 = puVar1 + 8;
      bVar4 = 0x1f < uVar3;
      uVar3 = uVar3 - 0x20;
    }
  } while (bVar4);
  return puVar1;
}



/* Function: FUN_00006e60 */

int FUN_00006e60(int param_1)

{
  int iVar1;
  
  FUN_000006c0(0x80);
  if (param_1 == 2) {
    iVar1 = 0x20;
    do {
      if (*(int *)(DAT_00006d38 + iVar1 * 0x10 + 8) == 0) {
        *(undefined4 *)(DAT_00006d38 + iVar1 * 0x10 + 8) = 1;
        FUN_000006c0();
        FUN_000078e8(1);
LAB_00006efc:
        FUN_00006e48(iVar1);
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x26);
  }
  else {
    iVar1 = 0;
    do {
      if (*(int *)(DAT_00006d38 + iVar1 * 0x10 + 8) == 0) {
        *(undefined4 *)(DAT_00006d38 + iVar1 * 0x10 + 8) = 1;
        FUN_000006c0();
        FUN_000078d0(1);
        goto LAB_00006efc;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x20);
  }
  FUN_000006c0();
  return -1;
}



/* Function: FUN_00006f0c */

void FUN_00006f0c(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_00006d38;
  iVar4 = DAT_00006d38 + param_1 * 0x10;
  if (*(int *)(iVar4 + 8) == 0) {
    FUN_000006e4(s_g_channel_channel__status____DMA_0000705c,s_dma_phy_c_00006cf4,0x137);
  }
  if (*(char *)(iVar4 + 4) != '\0') {
    iVar3 = 0;
    do {
      if (param_1 < 0x20) {
        if (*(int *)(iVar3 * 4 + DAT_00007090) == param_1 + 1) {
          puVar2 = (undefined4 *)(iVar3 * 4 + DAT_00007090);
LAB_00006f7c:
          *puVar2 = 0;
          break;
        }
      }
      else if (*(int *)(iVar3 * 4 + DAT_00007090 + 0x20000000) == param_1 - 0x17) {
        puVar2 = (undefined4 *)(iVar3 * 4 + DAT_00007090 + 0x20000000);
        goto LAB_00006f7c;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x26);
  }
  FUN_000006c0(0x80);
  *(undefined4 *)(iVar4 + 8) = 0;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(undefined1 *)(iVar4 + 4) = 0;
  if (param_1 < 0x20) {
    iVar4 = 0;
  }
  *(undefined4 *)(iVar1 + param_1 * 0x10) = 0;
  if (param_1 >= 0x20) {
    iVar4 = 0x20;
    do {
      if (*(int *)(iVar1 + iVar4 * 0x10 + 8) != 0) break;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x26);
    FUN_000006c0();
    if (iVar4 == 0x26) {
      FUN_000078e8(0);
      return;
    }
    return;
  }
  do {
    if (*(int *)(iVar1 + iVar4 * 0x10 + 8) != 0) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x20);
  FUN_000006c0();
  if (iVar4 == 0x20) {
    FUN_000078d0(0);
    return;
  }
  return;
}



/* Function: FUN_000070fc */

void FUN_000070fc(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  iVar2 = DAT_00006cec;
  if (0x1f < param_1) {
    iVar2 = DAT_00006cf0;
  }
  iVar2 = iVar2 + param_1 * 0x40;
  FUN_000006c0(0x80);
  puVar3 = (uint *)(iVar2 + 8);
  *puVar3 = *(uint *)(iVar2 + 8) & 0xffffcfff;
  if (param_2 == 0) {
    uVar1 = *puVar3;
  }
  else if (param_2 == 1) {
    uVar1 = *puVar3 | 0x1000;
  }
  else if (param_2 == 2) {
    uVar1 = *puVar3 | 0x2000;
  }
  else {
    if (param_2 != 3) goto LAB_00007168;
    uVar1 = *puVar3 | 0x3000;
  }
  *puVar3 = uVar1;
LAB_00007168:
  FUN_000006c0();
  return;
}



/* Function: FUN_00007268 */

void FUN_00007268(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_00006cec;
  if (0x1f < param_1) {
    iVar1 = DAT_00006cf0;
  }
  FUN_00006a58(param_1);
  puVar2 = (uint *)(iVar1 + param_1 * 0x40 + 0xc);
  *puVar2 = 0;
  if ((param_2 & 1) != 0) {
    *puVar2 = *puVar2 | 1;
  }
  if ((param_2 & 2) != 0) {
    *puVar2 = *puVar2 | 2;
  }
  if ((param_2 & 4) != 0) {
    *puVar2 = *puVar2 | 4;
  }
  if ((param_2 & 8) != 0) {
    *puVar2 = *puVar2 | 8;
  }
  *puVar2 = *puVar2 | 0x10;
  iVar1 = DAT_00006d38;
  *(undefined4 *)(DAT_00006d38 + param_1 * 0x10 + 0xc) = param_3;
  *(undefined4 *)(iVar1 + param_1 * 0x10) = 0;
  return;
}



/* Function: FUN_00007314 */

void FUN_00007314(uint param_1,int param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar5 = 0;
  if (param_3 == 0) {
    param_3 = DAT_00006cec;
    if (0x1f < param_1) {
      param_3 = DAT_00006cf0;
    }
    param_3 = param_3 + param_1 * 0x40;
  }
  iVar3 = *(int *)(param_2 + 8);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      FUN_000006c0(0x80);
      *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x10;
      *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_2 + 0x48);
      FUN_000006c0();
    }
    else if (iVar3 != 2) {
      uVar4 = FUN_000006ec(s_DMA_workmode_err__000075cc);
      FUN_000006e8(&DAT_000075c8,DAT_000075c4,0x1e8,uVar4);
    }
  }
  iVar3 = *(int *)(param_2 + 0x50);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      uVar5 = 0x4000000;
    }
    else if (iVar3 == 2) {
      uVar5 = 0x8000000;
    }
    else if (iVar3 == 3) {
      uVar5 = 0xc000000;
    }
    else {
      uVar4 = FUN_000006ec(s_DMA_switchmode_err__000075e0);
      FUN_000006e8(&DAT_000075c8,DAT_000075c4,0x1fb,uVar4);
    }
  }
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      uVar5 = uVar5 | 0x40000000;
    }
    else if (iVar3 == 2) {
      uVar5 = uVar5 | 0x80000000;
    }
    else if (iVar3 == 3) {
      uVar5 = uVar5 | 0xc0000000;
    }
    else {
      uVar4 = FUN_000006ec(s_DMA_src_datawidth_err__000075f4);
      FUN_000006e8(&DAT_000075c8,DAT_000075c4,0x20e,uVar4);
    }
  }
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      uVar5 = uVar5 | 0x10000000;
    }
    else if (iVar3 == 2) {
      uVar5 = uVar5 | 0x20000000;
    }
    else if (iVar3 == 3) {
      uVar5 = uVar5 | 0x30000000;
    }
    else {
      uVar4 = FUN_000006ec(s_DMA_dest_datawidth_err__0000760c);
      FUN_000006e8(&DAT_000075c8,DAT_000075c4,0x220,uVar4);
    }
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    if (*(int *)(param_2 + 0x2c) != 0) {
      uVar5 = uVar5 | 0x100000;
    }
  }
  else if (*(int *)(param_2 + 0x2c) == 0) {
    uVar5 = uVar5 | 0x300000;
  }
  if (*(short *)(param_2 + 0x22) == 0) {
    FUN_000006e4(s_chnparam_>block_length_00007624,DAT_000075c4,0x22e);
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    FUN_000006e4(s_chnparam_>total_length_0000763c,DAT_000075c4,0x22f);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  uVar6 = (uint)(iVar3 == 0);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      uVar6 = 2;
    }
    else if (iVar3 == 2) {
      uVar6 = 3;
    }
  }
  uVar5 = (uint)*(byte *)(param_2 + 0xc) << 0x1e | (uint)*(byte *)(param_2 + 0x10) << 0x1c |
          uVar6 << 0x18 | uVar5 | (uint)*(ushort *)(param_2 + 0x20);
  cVar1 = *(char *)(param_2 + 0x38);
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = *(char *)(param_2 + 0x39);
  }
  uVar6 = uVar5;
  if (!bVar7 || cVar1 != '\0') {
    uVar6 = uVar5 | 0x400000;
    if (*(char *)(param_2 + 0x39) != '\0') {
      uVar6 = uVar5 | 0xc00000;
    }
    *(uint *)(param_3 + 0x28) = *(uint *)(param_2 + 0x40) & 0xfffffff;
    *(uint *)(param_3 + 0x2c) = *(uint *)(param_2 + 0x3c) & 0xfffffff;
  }
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  *(uint *)(param_3 + 0x18) = uVar6;
  uVar2 = *(ushort *)(param_2 + 0x2c);
  uVar5 = *(uint *)(param_2 + 0x28);
  *(uint *)(param_3 + 0x1c) = (uint)*(ushort *)(param_2 + 0x22);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_2 + 0x24);
  *(uint *)(param_3 + 0x24) = uVar5 | (uint)uVar2 << 0x10;
  *(undefined4 *)(param_3 + 0x34) = 0;
  *(undefined4 *)(param_3 + 0x38) = 0;
  *(undefined4 *)(param_3 + 0x3c) = 0;
  return;
}



/* Function: thunk_FUN_00007314 */

void thunk_FUN_00007314(uint param_1,int param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar5 = 0;
  if (param_3 == 0) {
    param_3 = DAT_00006cec;
    if (0x1f < param_1) {
      param_3 = DAT_00006cf0;
    }
    param_3 = param_3 + param_1 * 0x40;
  }
  iVar3 = *(int *)(param_2 + 8);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      FUN_000006c0(0x80);
      *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x10;
      *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_2 + 0x48);
      FUN_000006c0();
    }
    else if (iVar3 != 2) {
      uVar4 = FUN_000006ec(s_DMA_workmode_err__000075cc);
      FUN_000006e8(&DAT_000075c8,DAT_000075c4,0x1e8,uVar4);
    }
  }
  iVar3 = *(int *)(param_2 + 0x50);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      uVar5 = 0x4000000;
    }
    else if (iVar3 == 2) {
      uVar5 = 0x8000000;
    }
    else if (iVar3 == 3) {
      uVar5 = 0xc000000;
    }
    else {
      uVar4 = FUN_000006ec(s_DMA_switchmode_err__000075e0);
      FUN_000006e8(&DAT_000075c8,DAT_000075c4,0x1fb,uVar4);
    }
  }
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      uVar5 = uVar5 | 0x40000000;
    }
    else if (iVar3 == 2) {
      uVar5 = uVar5 | 0x80000000;
    }
    else if (iVar3 == 3) {
      uVar5 = uVar5 | 0xc0000000;
    }
    else {
      uVar4 = FUN_000006ec(s_DMA_src_datawidth_err__000075f4);
      FUN_000006e8(&DAT_000075c8,DAT_000075c4,0x20e,uVar4);
    }
  }
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      uVar5 = uVar5 | 0x10000000;
    }
    else if (iVar3 == 2) {
      uVar5 = uVar5 | 0x20000000;
    }
    else if (iVar3 == 3) {
      uVar5 = uVar5 | 0x30000000;
    }
    else {
      uVar4 = FUN_000006ec(s_DMA_dest_datawidth_err__0000760c);
      FUN_000006e8(&DAT_000075c8,DAT_000075c4,0x220,uVar4);
    }
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    if (*(int *)(param_2 + 0x2c) != 0) {
      uVar5 = uVar5 | 0x100000;
    }
  }
  else if (*(int *)(param_2 + 0x2c) == 0) {
    uVar5 = uVar5 | 0x300000;
  }
  if (*(short *)(param_2 + 0x22) == 0) {
    FUN_000006e4(s_chnparam_>block_length_00007624,DAT_000075c4,0x22e);
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    FUN_000006e4(s_chnparam_>total_length_0000763c,DAT_000075c4,0x22f);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  uVar6 = (uint)(iVar3 == 0);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      uVar6 = 2;
    }
    else if (iVar3 == 2) {
      uVar6 = 3;
    }
  }
  uVar5 = (uint)*(byte *)(param_2 + 0xc) << 0x1e | (uint)*(byte *)(param_2 + 0x10) << 0x1c |
          uVar6 << 0x18 | uVar5 | (uint)*(ushort *)(param_2 + 0x20);
  cVar1 = *(char *)(param_2 + 0x38);
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = *(char *)(param_2 + 0x39);
  }
  uVar6 = uVar5;
  if (!bVar7 || cVar1 != '\0') {
    uVar6 = uVar5 | 0x400000;
    if (*(char *)(param_2 + 0x39) != '\0') {
      uVar6 = uVar5 | 0xc00000;
    }
    *(uint *)(param_3 + 0x28) = *(uint *)(param_2 + 0x40) & 0xfffffff;
    *(uint *)(param_3 + 0x2c) = *(uint *)(param_2 + 0x3c) & 0xfffffff;
  }
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  *(uint *)(param_3 + 0x18) = uVar6;
  uVar2 = *(ushort *)(param_2 + 0x2c);
  uVar5 = *(uint *)(param_2 + 0x28);
  *(uint *)(param_3 + 0x1c) = (uint)*(ushort *)(param_2 + 0x22);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_2 + 0x24);
  *(uint *)(param_3 + 0x24) = uVar5 | (uint)uVar2 << 0x10;
  *(undefined4 *)(param_3 + 0x34) = 0;
  *(undefined4 *)(param_3 + 0x38) = 0;
  *(undefined4 *)(param_3 + 0x3c) = 0;
  return;
}



/* Function: FUN_000078d0 */

void FUN_000078d0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_00007960;
  if (param_1 == 0) {
    puVar1 = DAT_00007964;
  }
  *puVar1 = 0x20;
  return;
}



/* Function: FUN_000078e8 */

void FUN_000078e8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00007968;
  if (param_1 == 0) {
    iVar1 = DAT_0000796c;
  }
  *(undefined4 *)(iVar1 + 0x14) = 1;
  return;
}



/* Function: FUN_00007900 */

void FUN_00007900(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_00006cec;
  if (0x1f < param_1) {
    iVar1 = DAT_00006cf0;
  }
  iVar1 = iVar1 + param_1 * 0x40;
  *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x2000000;
  return;
}



/* Function: FUN_00007920 */

void FUN_00007920(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_00006cec;
  if (0x1f < param_1) {
    iVar1 = DAT_00006cf0;
  }
  iVar1 = iVar1 + param_1 * 0x40;
  *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x4000000;
  return;
}



/* Function: FUN_00007940 */

void FUN_00007940(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_00006cec;
  if (0x1f < param_1) {
    iVar1 = DAT_00006cf0;
  }
  iVar1 = iVar1 + param_1 * 0x40;
  *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x8000000;
  return;
}



/* Function: FUN_00007970 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00007970(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((0x25 < param_1) || (param_2 == 0)) {
    FUN_000006e4(s_channel_<_DMA_CHANNEL_MAX_&&_NUL_00007b7c,s_dma_hal_c_00007b70,0x93);
  }
  FUN_000070fc(param_1,*(undefined4 *)(param_2 + 4));
  FUN_00007314(param_1,param_2,0);
  iVar3 = *(int *)(param_2 + 0x4c);
  if (iVar3 != 0) {
    *(undefined1 *)(DAT_00006d38 + param_1 * 0x10 + 4) = 1;
    if (iVar3 != 0xff) {
      if (param_1 < 0x20) {
        iVar2 = param_1 + 1;
        iVar1 = DAT_00006cec;
      }
      else {
        iVar2 = param_1 - 0x17;
        iVar1 = _DAT_000075ac;
      }
      *(int *)(iVar3 * 4 + iVar1 + 0xffc) = iVar2;
      return;
    }
    return;
  }
  return;
}



/* Function: FUN_000079d0 */

void FUN_000079d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_00007bac;
  if ((0xf < *(byte *)(DAT_00007bac + param_1 * 2)) || (param_2 == 0)) {
    FUN_000006e4(s_DMA_LIST_SIZE_MAX_>_list_st_chn__00007bb0,s_dma_hal_c_00007b70,0x23);
  }
  piVar1 = DAT_00007bec;
  *(uint *)(param_2 + 0x48) =
       *DAT_00007bec + ((uint)*(byte *)(iVar2 + param_1 * 2) + param_1 * 0x10) * 0x40 + 0x50;
  thunk_FUN_00007314(param_1,param_2);
  *(char *)(iVar2 + param_1 * 2) = *(char *)(iVar2 + param_1 * 2) + '\x01';
  iVar2 = iVar2 + param_1 * 2;
  if (*(char *)(iVar2 + 1) != '\0') {
    return;
  }
  *(int *)(param_2 + 0x48) = *piVar1 + param_1 * 0x400 + 0x10;
  FUN_00007970(param_1,param_2);
  *(undefined1 *)(iVar2 + 1) = 1;
  return;
}



/* Function: FUN_00007a74 */

void FUN_00007a74(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  bool bVar5;
  
  if (0x25 < param_1) {
    FUN_000006e4(s_channel_<_DMA_CHANNEL_MAX_00007bfc,s_dma_hal_c_00007bf0,0xa7);
  }
  iVar4 = DAT_00006d24;
  iVar1 = DAT_00006cec;
  if (0x1f < param_1) {
    iVar1 = DAT_00006cf0;
  }
  puVar3 = (uint *)(iVar1 + param_1 * 0x40);
  FUN_00006a58(param_1);
  if (param_2 != 0) {
    FUN_000006c0(0x80);
    puVar3[2] = puVar3[2] | 0x1000001;
    FUN_000006c0();
    return;
  }
  if ((puVar3[2] & 1) == 0) {
    return;
  }
  FUN_00006b68(param_1,1);
  while ((*puVar3 & 4) == 0) {
    bVar5 = iVar4 == 0;
    iVar4 = iVar4 + -1;
    if (bVar5) {
      uVar2 = FUN_000006ec(s__DMA_PAUSE_TIME_OUT__000075af + 1);
      FUN_000006e8(&DAT_000075c8,DAT_000075c4,0x1a5,uVar2,unaff_r4,unaff_r5,unaff_r6);
    }
  }
  FUN_000006c0(0x80);
  puVar3[2] = puVar3[2] & 0xfffffffe;
  FUN_000006c0();
  FUN_00006b68(param_1,0);
  return;
}



/* Function: FUN_00007aac */

/* WARNING: Removing unreachable block (ram,0x0001f576) */
/* WARNING: Removing unreachable block (ram,0x0001f56c) */
/* WARNING: Removing unreachable block (ram,0x0001f55c) */
/* WARNING: Removing unreachable block (ram,0x0001f562) */
/* WARNING: Removing unreachable block (ram,0x0001f574) */
/* WARNING: Removing unreachable block (ram,0x0001f57a) */
/* WARNING: Removing unreachable block (ram,0x0001f580) */
/* WARNING: Removing unreachable block (ram,0x0001f584) */

undefined4 * FUN_00007aac(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar1 = DAT_00007bac;
  iVar5 = DAT_00007bac + param_1 * 2;
  if (*(char *)(iVar5 + 1) != '\0') {
    FUN_000006e4(s_list_st_chn__configured____FALSE_00007c18,s_dma_hal_c_00007b70,100);
  }
  *(undefined1 *)(iVar5 + 1) = 0;
  piVar2 = DAT_00007bec;
  *(undefined1 *)(iVar1 + param_1 * 2) = 0;
  if (0x3fffff < param_1 * 0x400) {
    FUN_000006e4(&DAT_00007c3c,s_dma_hal_c_00007b70,0x6b);
  }
  puVar3 = (undefined4 *)(*piVar2 + param_1 * 0x400);
  bVar6 = true;
  uVar4 = 0x3e0;
  do {
    if (bVar6) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3 = puVar3 + 8;
      bVar6 = 0x1f < uVar4;
      uVar4 = uVar4 - 0x20;
    }
  } while (bVar6);
  return puVar3;
}



/* Function: FUN_00007b2c */

void FUN_00007b2c(uint param_1,uint param_2,undefined4 param_3)

{
  if ((0x25 < param_1) || (0xe < param_2)) {
    FUN_000006e4(DAT_00007c40,s_dma_hal_c_00007b70,0x7d);
  }
  FUN_00007268(param_1,param_2,param_3);
  return;
}



/* Function: FUN_00007c44 */

void FUN_00007c44(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  if ((0x25 < param_1) || (0xe < param_2)) {
    FUN_000006e4(DAT_00007c40,s_dma_hal_c_00007bf0,0x89);
  }
  FUN_00007268(param_1,param_2,param_3,param_4,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  *(undefined4 *)(DAT_00006d38 + param_1 * 0x10) = param_4;
  return;
}



/* Function: FUN_00007c94 */

void FUN_00007c94(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  bool bVar5;
  
  if (0x25 < param_1) {
    FUN_000006e4(s_channel_<_DMA_CHANNEL_MAX_00007bfc,s_dma_hal_c_00007b70,0xaf);
  }
  iVar4 = DAT_00006d24;
  iVar1 = DAT_00006cec;
  if (0x1f < param_1) {
    iVar1 = DAT_00006cf0;
  }
  puVar3 = (uint *)(iVar1 + param_1 * 0x40);
  FUN_00006a58(param_1);
  if (param_2 != 0) {
    FUN_000006c0(0x80);
    puVar3[2] = puVar3[2] | 0x1000001;
    FUN_000006c0();
    return;
  }
  if ((puVar3[2] & 1) == 0) {
    return;
  }
  FUN_00006b68(param_1,1);
  while ((*puVar3 & 4) == 0) {
    bVar5 = iVar4 == 0;
    iVar4 = iVar4 + -1;
    if (bVar5) {
      uVar2 = FUN_000006ec(s__DMA_PAUSE_TIME_OUT__000075af + 1);
      FUN_000006e8(&DAT_000075c8,DAT_000075c4,0x1a5,uVar2,unaff_r4,unaff_r5,unaff_r6);
    }
  }
  FUN_000006c0(0x80);
  puVar3[2] = puVar3[2] & 0xfffffffe;
  FUN_000006c0();
  FUN_00006b68(param_1,0);
  return;
}



/* Function: FUN_00007d20 */

undefined4 FUN_00007d20(uint param_1)

{
  int iVar1;
  
  if (0x25 < param_1) {
    FUN_000006e4(s_channel_<_DMA_CHANNEL_MAX_00007bfc,s_dma_hal_c_00007b70,0xcd);
  }
  iVar1 = DAT_00006cec;
  if (0x1f < param_1) {
    iVar1 = DAT_00006cf0;
  }
  if ((*(uint *)(iVar1 + param_1 * 0x40 + 0xc) & 0x400) == 0) {
    return 0;
  }
  FUN_00007920(param_1);
  return 1;
}



/* Function: FUN_00007d78 */

int FUN_00007d78(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00006e60(1);
  if (iVar1 != -1) {
    FUN_00007c44(iVar1,8,param_1,param_2);
    FUN_00007aac(iVar1);
    return iVar1;
  }
  return -1;
}



/* Function: FUN_00007dbc */

undefined4 FUN_00007dbc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_2c;
  
  FUN_0001f538(local_70,0x58);
  local_70[0] = 1;
  local_48 = 4;
  local_44 = 4;
  local_2c = 0;
  local_64 = 2;
  local_68 = 1;
  local_60 = 2;
  local_50 = (undefined2)param_4;
  local_54 = 2;
  local_5c = param_3;
  uStack_58 = param_2;
  local_4e = local_50;
  local_4c = param_4;
  FUN_000079d0(param_1,local_70);
  return 0;
}



/* Function: FUN_00007e38 */

undefined4 FUN_00007e38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_34;
  int local_30;
  
  FUN_0001f538(local_78,0x58);
  local_78[0] = 1;
  local_50 = 4;
  local_4c = 4;
  local_34 = 0;
  local_6c = 2;
  local_68 = 2;
  local_70 = 1;
  local_58 = (undefined2)param_4;
  local_5c = 2;
  local_30 = *DAT_00007bec + param_1 * 0x400 + 0x10;
  local_64 = param_3;
  uStack_60 = param_2;
  local_56 = local_58;
  local_54 = param_4;
  FUN_00007970(param_1,local_78);
  return 0;
}



/* Function: FUN_00007ecc */

undefined4 FUN_00007ecc(void)

{
  FUN_000079d0();
  return 0;
}



/* Function: FUN_00007fb0 */

void FUN_00007fb0(undefined4 param_1)

{
  FUN_00007ff8();
  FUN_00006f0c(param_1);
  return;
}



/* Function: FUN_00007ff8 */

/* WARNING: Removing unreachable block (ram,0x000071d4) */

void FUN_00007ff8(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = DAT_00007bac;
  *(undefined1 *)(DAT_00007bac + param_1 * 2 + 1) = 0;
  *(undefined1 *)(iVar4 + param_1 * 2) = 0;
  iVar4 = DAT_00006d24;
  iVar1 = DAT_00006cec;
  if (0x1f < param_1) {
    iVar1 = DAT_00006cf0;
  }
  puVar3 = (uint *)(iVar1 + param_1 * 0x40);
  FUN_00006a58(param_1);
  if ((puVar3[2] & 1) == 0) {
    return;
  }
  FUN_00006b68(param_1,1);
  while ((*puVar3 & 4) == 0) {
    bVar5 = iVar4 == 0;
    iVar4 = iVar4 + -1;
    if (bVar5) {
      uVar2 = FUN_000006ec(s__DMA_PAUSE_TIME_OUT__000075af + 1);
      FUN_000006e8(&DAT_000075c8,DAT_000075c4,0x1a5,uVar2);
    }
  }
  FUN_000006c0(0x80);
  puVar3[2] = puVar3[2] & 0xfffffffe;
  FUN_000006c0();
  FUN_00006b68(param_1,0);
  return;
}



/* Function: FUN_00008014 */

void FUN_00008014(int param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 4) {
    iVar3 = param_1 + uVar2;
    uVar1 = *(undefined1 *)(param_1 + uVar2);
    *(undefined1 *)(param_1 + uVar2) = *(undefined1 *)(iVar3 + 3);
    *(undefined1 *)(iVar3 + 3) = uVar1;
    uVar1 = *(undefined1 *)(iVar3 + 1);
    *(undefined1 *)(iVar3 + 1) = *(undefined1 *)(iVar3 + 2);
    *(undefined1 *)(iVar3 + 2) = uVar1;
  }
  return;
}



/* Function: FUN_00008054 */

undefined4 FUN_00008054(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)(DAT_0000833c + param_1 * 0x20);
  uVar3 = param_2[3] | param_2[2] << 8;
  iVar2 = *(int *)(*piVar1 + 4);
  piVar1[4] = uVar3;
  *(uint *)(iVar2 + 0x14) = uVar3;
  uVar3 = param_2[1] | *param_2 << 8;
  piVar1[6] = uVar3;
  *(uint *)(iVar2 + 0x40) = uVar3;
  return 0;
}



/* Function: FUN_00008094 */

uint FUN_00008094(int param_1)

{
  uint uVar1;
  
  uVar1 = (*(byte *)(DAT_0000833c + param_1 * 0x20 + 4) & 0x7f) >> 2;
  if (uVar1 == 0) {
    uVar1 = 0x20;
  }
  return uVar1;
}



/* Function: FUN_000080b0 */

void FUN_000080b0(int param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  
  uVar10 = 0;
  uVar8 = 0;
  puVar9 = *(uint **)(*(int *)(DAT_0000833c + param_1 * 0x20) + 4);
  uVar5 = FUN_00008094();
  puVar3 = DAT_00008340;
  uVar7 = uVar5;
LAB_00008164:
  do {
    while( true ) {
      do {
        if (param_3 <= uVar8) {
          return;
        }
        uVar10 = uVar10 + 1;
        if (0xff00000 < uVar10) {
          uVar6 = FUN_000006ec(s_ctl0_0x_x_ctl1_0x_x_ctl4_0x_x_st_00008344,puVar9[2],puVar9[3],
                               puVar9[6],puVar9[0xc],puVar9[0xd]);
          uVar7 = FUN_000006e8(&DAT_00008388,s_spi_phy_v5_c_00008378,0x111,uVar6);
        }
        iVar4 = DAT_0000838c;
        if (param_4 != 1) {
          uVar7 = puVar9[0xd];
        }
      } while (param_4 != 1 && (uVar7 & 0x40) != 0);
      if (param_2 != 0) break;
      if (uVar5 == 8) {
        if (param_4 == 0) {
          bVar1 = (byte)*puVar3;
LAB_0000825c:
          uVar7 = (uint)bVar1;
          *puVar9 = uVar7;
          uVar8 = uVar8 + 1;
        }
        else if (param_4 == 1) {
          for (uVar7 = 0; uVar7 < param_3; uVar7 = uVar7 + 1) {
            *puVar9 = (uint)(byte)*puVar3;
            uVar8 = uVar8 + 1;
          }
        }
      }
      else if (uVar5 == 0x10) {
        if (param_4 == 0) {
          uVar2 = *puVar3;
LAB_000082b8:
          uVar7 = (uint)uVar2;
          *puVar9 = uVar7;
          uVar8 = uVar8 + 2;
        }
        else if (param_4 == 1) {
          for (uVar7 = 0; uVar7 < param_3 >> 1; uVar7 = uVar7 + 1) {
            *puVar9 = (uint)*puVar3;
            uVar8 = uVar8 + 2;
          }
        }
      }
      else if (uVar5 == 0x20) {
        if (param_4 == 0) {
          uVar7 = *(uint *)(DAT_0000838c + 4);
LAB_00008314:
          *puVar9 = uVar7;
          uVar8 = uVar8 + 4;
        }
        else if (param_4 == 1) {
          for (uVar7 = 0; uVar7 < param_3 >> 2; uVar7 = uVar7 + 1) {
            *puVar9 = *(uint *)(iVar4 + 4);
            uVar8 = uVar8 + 4;
          }
        }
      }
      else {
LAB_00008158:
        uVar7 = FUN_000006e4(&DAT_00008388,s_spi_phy_v5_c_00008378);
      }
    }
    if (uVar5 == 8) {
      if (param_4 == 0) {
        bVar1 = *(byte *)(param_2 + uVar8);
        goto LAB_0000825c;
      }
      if (param_4 == 1) {
        for (uVar7 = 0; uVar7 < param_3; uVar7 = uVar7 + 1) {
          *puVar9 = (uint)*(byte *)(param_2 + uVar8);
          uVar8 = uVar8 + 1;
        }
      }
      goto LAB_00008164;
    }
    if (uVar5 == 0x10) {
      if (param_4 == 0) {
        FUN_0000a5d8(param_2 + uVar8,2);
        uVar2 = *(ushort *)(param_2 + uVar8);
        goto LAB_000082b8;
      }
      if (param_4 == 1) {
        FUN_0000a5d8(param_2 + uVar8,param_3);
        for (uVar7 = 0; uVar7 < param_3 >> 1; uVar7 = uVar7 + 1) {
          *puVar9 = (uint)*(ushort *)(param_2 + uVar8);
          uVar8 = uVar8 + 2;
        }
      }
    }
    else {
      if (uVar5 != 0x20) goto LAB_00008158;
      if (param_4 == 0) {
        FUN_00008014(param_2 + uVar8,4);
        uVar7 = *(uint *)(param_2 + uVar8);
        goto LAB_00008314;
      }
      if (param_4 == 1) {
        FUN_00008014(param_2 + uVar8,param_3);
        for (uVar7 = 0; uVar7 < param_3 >> 2; uVar7 = uVar7 + 1) {
          *puVar9 = *(uint *)(param_2 + uVar8);
          uVar8 = uVar8 + 4;
        }
      }
    }
  } while( true );
}



/* Function: FUN_00008390 */

void FUN_00008390(int param_1,int param_2,code *param_3,int param_4)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  uVar9 = 0;
  pcVar7 = Reset;
  puVar8 = *(undefined4 **)(*(int *)(DAT_0000833c + param_1 * 0x20) + 4);
  pcVar3 = (code *)FUN_00008094();
  pcVar1 = DAT_0000838c;
  pcVar5 = pcVar3;
LAB_00008444:
  do {
    while( true ) {
      do {
        if (param_3 <= pcVar7) {
          return;
        }
        uVar9 = uVar9 + 1;
        if (0xff00000 < uVar9) {
          uVar4 = FUN_000006ec(s_ctl0_0x_x_ctl1_0x_x_ctl4_0x_x_st_00008344,puVar8[2],puVar8[3],
                               puVar8[6],puVar8[0xc],puVar8[0xd]);
          pcVar5 = (code *)FUN_000006e8(&DAT_00008388,s_spi_phy_v5_c_00008378,0x1a6,uVar4);
        }
        pcVar2 = DAT_0000838c;
        if (param_4 != 1) {
          pcVar5 = (code *)puVar8[0xd];
        }
      } while (param_4 != 1 && ((uint)pcVar5 & 0x20) != 0);
      if (param_2 != 0) break;
      if (pcVar3 == SupervisorCall) {
        if (param_4 == 0) {
          pcVar5 = (code *)*puVar8;
          *pcVar1 = SUB41(pcVar5,0);
LAB_0000854c:
          pcVar7 = pcVar7 + 1;
        }
        else if (param_4 == 1) {
          for (pcVar5 = Reset; pcVar5 < param_3; pcVar5 = pcVar5 + 1) {
            pcVar7 = pcVar7 + 1;
            *pcVar1 = SUB41(*puVar8,0);
          }
        }
      }
      else if (pcVar3 == DataAbort) {
        if (param_4 == 0) {
          pcVar5 = (code *)*puVar8;
          *(short *)pcVar1 = (short)pcVar5;
LAB_0000859c:
          pcVar7 = pcVar7 + 2;
        }
        else if (param_4 == 1) {
          for (pcVar5 = Reset; pcVar5 < (code *)((uint)param_3 >> 1); pcVar5 = pcVar5 + 1) {
            pcVar7 = pcVar7 + 2;
            *(short *)pcVar1 = (short)*puVar8;
          }
        }
      }
      else if (pcVar3 == (code *)0x20) {
        if (param_4 == 0) {
          *(undefined4 *)DAT_0000838c = *puVar8;
          pcVar5 = pcVar2;
LAB_000085fc:
          pcVar7 = pcVar7 + 4;
        }
        else if (param_4 == 1) {
          for (pcVar5 = Reset; pcVar5 < (code *)((uint)param_3 >> 2); pcVar5 = pcVar5 + 1) {
            pcVar7 = pcVar7 + 4;
            *(undefined4 *)pcVar2 = *puVar8;
          }
        }
      }
      else {
LAB_00008438:
        pcVar5 = (code *)FUN_000006e4(&DAT_00008388,s_spi_phy_v5_c_00008378);
      }
    }
    if (pcVar3 == SupervisorCall) {
      if (param_4 == 0) {
        pcVar5 = (code *)*puVar8;
        pcVar7[param_2] = SUB41(pcVar5,0);
        goto LAB_0000854c;
      }
      if (param_4 == 1) {
        for (pcVar5 = Reset; pcVar5 < param_3; pcVar5 = pcVar5 + 1) {
          pcVar7[param_2] = SUB41(*puVar8,0);
          pcVar7 = pcVar7 + 1;
        }
      }
      goto LAB_00008444;
    }
    if (pcVar3 == DataAbort) {
      if (param_4 == 0) {
        *(short *)(pcVar7 + param_2) = (short)*puVar8;
        pcVar5 = (code *)FUN_0000a5d8(pcVar7 + param_2,2);
        goto LAB_0000859c;
      }
      if (param_4 == 1) {
        for (uVar6 = 0; uVar6 < (uint)param_3 >> 1; uVar6 = uVar6 + 1) {
          *(short *)(pcVar7 + param_2) = (short)*puVar8;
          pcVar7 = pcVar7 + 2;
        }
        pcVar5 = (code *)FUN_0000a5d8(pcVar7 + (param_2 - (int)param_3),param_3);
      }
    }
    else {
      if (pcVar3 != (code *)0x20) goto LAB_00008438;
      if (param_4 == 0) {
        *(undefined4 *)(pcVar7 + param_2) = *puVar8;
        pcVar5 = (code *)FUN_00008014(pcVar7 + param_2,4);
        goto LAB_000085fc;
      }
      if (param_4 == 1) {
        for (uVar6 = 0; uVar6 < (uint)param_3 >> 2; uVar6 = uVar6 + 1) {
          *(undefined4 *)(pcVar7 + param_2) = *puVar8;
          pcVar7 = pcVar7 + 4;
        }
        pcVar5 = (code *)FUN_00008014(pcVar7 + (param_2 - (int)param_3),param_3);
      }
    }
  } while( true );
}



/* Function: FUN_00008630 */

void FUN_00008630(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_44 [32];
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c [2];
  
  piVar1 = DAT_000089f0;
  iVar4 = *(int *)(*(int *)(DAT_0000833c + *DAT_000089f0 * 0x20) + 4);
  FUN_000007ac(DAT_000089f0[-10]);
  local_20 = 0;
  local_24[0] = 0;
  local_1c[0] = 0;
  FUN_000007a8(piVar1[-10],auStack_44,local_24,&local_20,local_1c);
  uVar2 = *(uint *)(iVar4 + 0x30);
  uVar3 = uVar2 & 0x1f;
  uVar2 = (uVar2 & 0x1fff) >> 8;
  if (uVar2 < uVar3) {
    uVar2 = uVar2 + 0x20;
  }
  if (piVar1[1] == (uVar2 - uVar3) * piVar1[6] >> 3) {
    FUN_00008390(*piVar1,piVar1[3],piVar1[1],1);
    iVar4 = piVar1[1];
    piVar1[1] = 0;
    piVar1[3] = piVar1[3] + iVar4;
                    /* WARNING: Could not recover jumptable at 0x000086e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)piVar1[-8])(0);
    return;
  }
  FUN_000007b4(piVar1[-10],DAT_000089f4,1);
  FUN_000007b8(piVar1[-10]);
  return;
}



/* Function: FUN_00008708 */

undefined4 FUN_00008708(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = DAT_000089f0;
  iVar4 = *(int *)(*(int *)(DAT_0000833c + *DAT_000089f0 * 0x20) + 4);
  *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 1;
  *(uint *)(iVar4 + 0x20) = *(uint *)(iVar4 + 0x20) & 0xffffffbf;
  uVar3 = piVar2[6];
  iVar1 = (uVar3 >> 3) * 0x10;
  if (piVar2[1] == 0) {
    FUN_000006e4(s_s_spi_irq_ctx_spi_rw_remain_size_000089f8,s_spi_phy_v5_c_00008378,0x33a);
  }
  FUN_00008390(*piVar2,piVar2[3],iVar1,1);
  piVar2[3] = piVar2[3] + iVar1;
  iVar1 = DAT_0000838c;
  uVar3 = piVar2[1] + (uVar3 >> 3) * -0x10;
  piVar2[1] = uVar3;
  if (uVar3 == 0) {
    (**(code **)(iVar1 + 0x10))(0);
  }
  else if (uVar3 < ((uint)piVar2[6] >> 3) << 4) {
    FUN_000007b4(*(undefined4 *)(iVar1 + 8),DAT_000089f4,1);
    FUN_000007b8(*(undefined4 *)(iVar1 + 8));
  }
  else {
    *(uint *)(iVar4 + 0x20) = *(uint *)(iVar4 + 0x20) | 0x40;
  }
  return 0;
}



/* Function: FUN_000087e0 */

undefined4 FUN_000087e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((*(uint *)(param_1 + 0x4c) & 0x8000) != 0) {
    do {
      if ((*(uint *)(param_1 + 0x28) & 0x100) != 0) break;
    } while (*(int *)(param_1 + 100) != 0);
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 0x100;
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xffff7fff;
  }
  do {
    if ((*(uint *)(param_1 + 0x34) & 0x80) != 0) goto LAB_00008864;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff00001);
  uVar1 = FUN_000006ec(s_SPI_TIME_OUT__00008a20);
  FUN_000006e8(&DAT_00008a34,DAT_00008a30,0x47d,uVar1,param_4);
LAB_00008864:
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  do {
    if ((*(uint *)(param_1 + 0x34) & 0x100) == 0) {
      return 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xff00001);
  uVar2 = FUN_000006ec(s_SPI_TIME_OUT__00008a20);
  FUN_000006e8(&DAT_00008a34,DAT_00008a30,0x48a,uVar2,uVar1);
  return 0;
}



/* Function: FUN_000088b0 */

undefined4 FUN_000088b0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  piVar6 = (int *)(DAT_0000833c + param_1 * 0x20);
  iVar7 = *(int *)(*piVar6 + 4);
  FUN_000087e0(iVar7);
  uVar3 = FUN_00008094(param_1);
  uVar8 = param_3 / (uVar3 >> 3);
  if (0x100 < uVar8) {
    uVar4 = FUN_000006ec(s_read__d_words_has_exceeded_the_m_00008a38,uVar8);
    FUN_000006e8(s__num_<__(_(SPI_MAX_RECEIVE_BYTE)_00008a70,DAT_00008a30,0x798,uVar4);
  }
  uVar5 = piVar6[2] & 0xffffdfffU | 0x1000;
  piVar6[2] = uVar5;
  *(uint *)(iVar7 + 0xc) = uVar5;
  piVar6[5] = uVar8 + 0x8000;
  *(uint *)(iVar7 + 0x18) = uVar8 + 0x8000;
  local_2c = 0x10;
  FUN_00008054(param_1,&local_38);
  piVar2 = DAT_000089f0;
  DAT_000089f0[6] = uVar3;
  piVar2[3] = param_2;
  *piVar2 = param_1;
  piVar2[1] = param_3;
  iVar1 = DAT_0000838c;
  if (param_3 < (uVar3 >> 3) << 4) {
    FUN_000007b4(*(undefined4 *)(DAT_0000838c + 8),DAT_000089f4,1);
    FUN_000007b8(*(undefined4 *)(iVar1 + 8));
  }
  else {
    if (param_1 == 0) {
      uVar4 = 7;
    }
    else {
      uVar4 = 8;
    }
    FUN_00000798(uVar4);
    if (param_1 == 0) {
      uVar4 = 7;
    }
    else {
      uVar4 = 8;
    }
    FUN_00000794(uVar4,DAT_00008a98);
    if (param_1 == 0) {
      uVar4 = 7;
    }
    else {
      uVar4 = 8;
    }
    FUN_00000738(uVar4);
    *(uint *)(iVar7 + 0x20) = *(uint *)(iVar7 + 0x20) | 0x40;
  }
  uVar3 = piVar6[5];
  piVar6[5] = uVar3 | 0x200;
  *(uint *)(iVar7 + 0x18) = uVar3 | 0x200;
  return 0;
}



/* Function: FUN_00008b80 */

undefined4 FUN_00008b80(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  piVar5 = (int *)(DAT_0000833c + param_1 * 0x20);
  iVar4 = *(int *)(*piVar5 + 4);
  uVar1 = FUN_00008094(param_1);
  FUN_000087e0(iVar4);
  uVar2 = piVar5[2] & 0xffffefffU | 0x2000;
  piVar5[2] = uVar2;
  *(uint *)(iVar4 + 0xc) = uVar2;
  local_30 = 0x10;
  FUN_00008054(param_1,&local_30);
  piVar5 = DAT_000089f0;
  uVar2 = uVar1 >> 3;
  DAT_000089f0[6] = uVar1;
  piVar5[3] = param_2;
  *piVar5 = param_1;
  piVar5[1] = param_3;
  if (uVar2 * 0x20 < param_3) {
    FUN_000080b0(param_1,param_2,uVar2 << 5,0);
    piVar5[1] = piVar5[1] + uVar2 * -0x20;
    piVar5[3] = piVar5[3] + uVar2 * 0x20;
    if (param_1 == 0) {
      uVar3 = 7;
    }
    else {
      uVar3 = 8;
    }
    FUN_00000798(uVar3);
    if (param_1 == 0) {
      uVar3 = 7;
    }
    else {
      uVar3 = 8;
    }
    FUN_00000794(uVar3,DAT_000090b0);
    if (param_1 == 0) {
      uVar3 = 7;
    }
    else {
      uVar3 = 8;
    }
    FUN_00000738(uVar3);
    *(uint *)(iVar4 + 0x20) = *(uint *)(iVar4 + 0x20) | 0x80;
  }
  else {
    FUN_000080b0(param_1,param_2,param_3,0);
    (**(code **)(DAT_0000838c + 0xc))(0);
  }
  return 0;
}



/* Function: FUN_00008cb0 */

void FUN_00008cb0(void)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar5;
  int iVar6;
  
  piVar2 = DAT_000090b4;
  piVar5 = (int *)(DAT_0000833c + *DAT_000090b4 * 0x20);
  iVar3 = *piVar5;
  iVar6 = *(int *)(iVar3 + 4);
  uVar1 = *(undefined2 *)(iVar3 + 8);
  FUN_00007a74(*(undefined2 *)(iVar3 + 10),0);
  FUN_00007a74(uVar1,0);
  uVar4 = piVar5[3];
  piVar5[3] = uVar4 & 0xffffffbf;
  *(uint *)(iVar6 + 0x10) = uVar4 & 0xffffffbf;
  if ((piVar2[5] & 2U) == 0) {
    if ((piVar2[5] & 1U) == 0) {
      return;
    }
    if (piVar2[1] != 0) {
      FUN_000088b0(*piVar2,piVar2[4]);
      piVar2[1] = 0;
      piVar2[4] = 0;
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)piVar2[-1];
  }
  else {
    if (piVar2[1] != 0) {
      FUN_00008b80(*piVar2,piVar2[3]);
      piVar2[1] = 0;
      piVar2[3] = 0;
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)piVar2[-2];
  }
                    /* WARNING: Could not recover jumptable at 0x00008d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}



/* Function: FUN_00008d7c */

undefined4 FUN_00008d7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  code *extraout_r1;
  code *extraout_r1_00;
  int iVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  piVar1 = DAT_000089f0;
  iVar2 = *DAT_000089f0;
  iVar5 = *(int *)(*(int *)(DAT_0000833c + iVar2 * 0x20) + 4);
  *(uint *)(iVar5 + 0x24) = *(uint *)(iVar5 + 0x24) | 1;
  *(uint *)(iVar5 + 0x20) = *(uint *)(iVar5 + 0x20) & 0xffffffbf;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  FUN_00008390(iVar2,piVar1[4],piVar1[2],0);
  iVar2 = piVar1[1];
  pcVar4 = (code *)0xffff;
  piVar1[1] = iVar2 - piVar1[2];
  if (0xfffe < (uint)(iVar2 - piVar1[2])) {
    FUN_000006e4(s_s_spi_irq_ctx_spi_rw_remain_size_000090b8,DAT_00008a30,0x2ad);
    pcVar4 = extraout_r1;
  }
  iVar2 = DAT_0000838c;
  uVar3 = piVar1[1];
  if (uVar3 == 0) {
    if (piVar1[3] != 0) {
      pcVar4 = *(code **)(DAT_0000838c + 0xc);
    }
    if (piVar1[3] != 0 && pcVar4 != Reset) {
      (*pcVar4)(0);
      pcVar4 = extraout_r1_00;
    }
    if (piVar1[4] != 0) {
      pcVar4 = *(code **)(iVar2 + 0x10);
    }
    if (piVar1[4] != 0 && pcVar4 != Reset) {
      (*pcVar4)(0);
    }
  }
  else {
    if (piVar1[3] != 0) {
      piVar1[3] = piVar1[3] + piVar1[2];
    }
    if (piVar1[4] != 0) {
      piVar1[4] = piVar1[4] + piVar1[2];
    }
    local_14 = (uint)piVar1[6] >> 3;
    if (local_14 * 0x10 < uVar3) {
      uVar3 = local_14 << 4;
    }
    piVar1[2] = uVar3;
    local_14 = uVar3 / local_14;
    local_18 = 0;
    local_20 = 0;
    local_1c = 0;
    FUN_00008054(*piVar1,&local_20);
    *(uint *)(iVar5 + 0x20) = *(uint *)(iVar5 + 0x20) | 0x40;
    FUN_000080b0(*piVar1,piVar1[3],piVar1[2],0);
  }
  return 0;
}



/* Function: FUN_00008eb4 */

undefined4 FUN_00008eb4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  int local_1c [5];
  
  local_1c[0] = param_1;
  FUN_0001fd4c(local_1c);
  iVar1 = DAT_000090e8;
  if (param_1 == 0) {
    *DAT_00009100 = 0x20;
    *(undefined4 *)(iVar1 + 0x48) = 3;
  }
  else if (param_1 == 1) {
    *(undefined4 *)(DAT_00009104 + 0x134) = 0x200;
    *(undefined4 *)(iVar1 + 0x54) = 3;
  }
  else {
    FUN_000006e4(&DAT_000090ec,DAT_00008a30,0x3b7);
  }
  local_24 = 2;
  uStack_20 = 8;
  local_2c = 2;
  uStack_28 = 8;
  FUN_00008054(param_1,&local_2c);
  uVar2 = FUN_000007a4(s_SPI_RX_TIMER_000090f0,DAT_000089f4,0,1,0);
  *(undefined4 *)(DAT_0000838c + 8) = uVar2;
  return 0;
}



/* Function: FUN_00008f68 */

undefined4 FUN_00008f68(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(DAT_0000833c + param_1 * 0x20) + 4);
  FUN_000087e0(iVar2);
  if (DAT_00009108 < (uint)(param_2 << 1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = DAT_00009108 / (uint)(param_2 << 1);
  }
  *(uint *)(iVar2 + 4) = uVar1 - 1;
  return 0;
}



/* Function: FUN_00008fa8 */

undefined4 FUN_00008fa8(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_30;
  int local_2c;
  uint uStack_28;
  undefined4 uStack_24;
  
  local_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_0001fd4c(&local_30);
  iVar1 = local_2c;
  iVar3 = DAT_0000833c + param_1 * 0x20;
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(local_2c + 8);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(local_2c + 0xc);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(local_2c + 0x10);
  *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(local_2c + 0x18);
  *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(local_2c + 0x4c);
  uVar2 = *(ushort *)(iVar3 + 4) & 0xf00;
  *(uint *)(iVar3 + 4) = uVar2;
  if (param_2 == 0) {
    uVar2 = uVar2 | 2;
  }
  else if (param_2 == 1) {
    uVar2 = uVar2 | 1;
  }
  else if (param_2 == 2) {
    uVar2 = uVar2 | 0x2002;
  }
  else {
    if (param_2 != 3) {
      FUN_000006e4(s_SCI_FALSE_0000910c,DAT_00008a30,0x404);
      uVar2 = *(uint *)(iVar3 + 4);
      goto LAB_00009054;
    }
    uVar2 = uVar2 | 0x2001;
  }
  *(uint *)(iVar3 + 4) = uVar2;
LAB_00009054:
  *(uint *)(iVar3 + 4) = uVar2 | (param_3 & 0x1f) << 2;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar3 + 4);
  uVar2 = *(uint *)(iVar3 + 8) & 0xffffcfff;
  *(uint *)(iVar3 + 8) = uVar2;
  *(uint *)(iVar1 + 0xc) = uVar2;
  *(undefined4 *)(iVar3 + 0x14) = 0x8000;
  *(undefined4 *)(iVar1 + 0x18) = 0x8000;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  FUN_00008f68(param_1,param_4);
  return 0;
}



/* Function: FUN_00009298 */

longlong FUN_00009298(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  piVar3 = (int *)(DAT_0000833c + param_1 * 0x20);
  iVar4 = *(int *)(*piVar3 + 4);
  iVar6 = param_2;
  uVar7 = param_3;
  FUN_000087e0(iVar4);
  uVar1 = FUN_00008094(param_1);
  uVar1 = uVar1 >> 3;
  uVar5 = piVar3[2] & 0xffffdfffU | 0x1000;
  piVar3[2] = uVar5;
  *(uint *)(iVar4 + 0xc) = uVar5;
  for (uVar5 = param_3 / uVar1; 0x100 < uVar5; uVar5 = uVar5 - 0x100) {
    piVar3[5] = 0x8100;
    *(undefined4 *)(iVar4 + 0x18) = 0x8100;
    uVar2 = piVar3[5];
    piVar3[5] = uVar2 | 0x200;
    *(uint *)(iVar4 + 0x18) = uVar2 | 0x200;
    FUN_00008390(param_1,param_2,uVar1 << 8,0,param_1,iVar6,uVar7);
    param_3 = param_3 + uVar1 * -0x100;
    param_2 = param_2 + uVar1 * 0x100;
    piVar3[5] = piVar3[5] & 0xfffffdff;
  }
  piVar3[5] = uVar5 + 0x8000;
  *(uint *)(iVar4 + 0x18) = uVar5 + 0x8000;
  uVar1 = piVar3[5];
  piVar3[5] = uVar1 | 0x200;
  *(uint *)(iVar4 + 0x18) = uVar1 | 0x200;
  FUN_00008390(param_1,param_2,param_3,0,param_1,iVar6,uVar7);
  uVar1 = piVar3[5];
  piVar3[5] = uVar1 & 0xfffffdff;
  *(uint *)(iVar4 + 0x18) = uVar1 & 0xfffffdff;
  uVar1 = piVar3[2];
  piVar3[2] = uVar1 & 0xffffcfff;
  *(uint *)(iVar4 + 0xc) = uVar1 & 0xffffcfff;
  return (ulonglong)param_1 << 0x20;
}



/* Function: FUN_00009398 */

undefined4 FUN_00009398(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  int local_94;
  uint local_90;
  undefined4 local_8c;
  undefined2 local_86;
  uint local_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_58;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  uint uStack_28;
  
  local_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  FUN_0001f538(&local_a8,0x58);
  uVar9 = 0;
  uVar7 = 0;
  local_3c = 0;
  piVar5 = (int *)(DAT_00009640 + local_30 * 0x20);
  iVar6 = *(int *)(*piVar5 + 4);
  FUN_000087e0(iVar6);
  local_50 = (uint)*(ushort *)(*piVar5 + 10);
  if (local_50 == 0xffff) {
    FUN_000006e4(s_INVALID_U16____rx_channel_00009644,DAT_00008a30,0x526);
  }
  if (0x400 < param_3) {
    uVar1 = FUN_000006ec(s_read__d_bytes_has_exceeded_the_m_00009660,param_3);
    FUN_000006e8(s__dma_len_<__(SPI_MAX_RECEIVE_BYT_00009698,DAT_00008a30,0x527,uVar1);
  }
  iVar2 = FUN_00008094(local_30);
  bVar10 = iVar2 == 8;
  if (bVar10) {
    uVar7 = 0x10;
  }
  uVar8 = (uint)bVar10;
  local_94 = iVar6;
  uVar4 = param_3;
  if (!bVar10) {
    if (iVar2 == 0x10) {
      uVar9 = 1;
      uVar7 = 0x20;
      uVar8 = 2;
      local_3c = 2;
      uVar4 = param_3 >> 1;
    }
    else if (iVar2 == 0x20) {
      uVar9 = 2;
      uVar7 = 0x40;
      uVar8 = 4;
      local_3c = 1;
      uVar4 = param_3 >> 2;
    }
    else {
      FUN_000006e4(&DAT_000090ec,DAT_00008a30,0x555);
      local_94 = 0;
      uVar4 = 0;
    }
  }
  uVar3 = piVar5[2] & 0xffffdfffU | 0x1000;
  piVar5[2] = uVar3;
  *(uint *)(iVar6 + 0xc) = uVar3;
  piVar5[5] = uVar4 + 0x8000;
  *(uint *)(iVar6 + 0x18) = uVar4 + 0x8000;
  local_40 = 0x10;
  local_44 = 0;
  local_4c = 0;
  local_48 = 0;
  FUN_00008054(local_30,&local_4c);
  uVar4 = piVar5[3];
  piVar5[3] = uVar4 | 0x40;
  *(uint *)(iVar6 + 0x10) = uVar4 | 0x40;
  FUN_00007b2c(local_50,0);
  local_a8 = 0;
  local_a4 = 1;
  uStack_a0 = 0;
  local_90 = local_2c;
  local_8c = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_58 = local_3c;
  local_74 = 0;
  uStack_9c = uVar9;
  local_98 = uVar9;
  local_86 = uVar7;
  local_84 = param_3;
  uStack_7c = uVar8;
  FUN_00007970(local_50,&local_a8);
  local_3c = local_2c;
  local_34 = 2;
  local_38 = param_3;
  FUN_00007c94(local_50,1,&local_3c);
  uVar4 = piVar5[5];
  piVar5[5] = uVar4 | 0x200;
  *(uint *)(iVar6 + 0x18) = uVar4 | 0x200;
  local_3c = 0;
  while (iVar2 = FUN_00007d20(local_50), iVar2 == 0) {
    local_38 = 0;
    do {
      local_38 = local_38 + 1;
    } while (local_38 < 100);
    local_3c = local_3c + 1;
    if (0x80000 < local_3c) {
      uVar9 = FUN_000006ec(s_DMA_all_transfer_time_out__000096bc);
      FUN_000006e8(DAT_000096d8,DAT_00008a30,0x58f,uVar9);
    }
  }
  FUN_00007a74(local_50,0);
  uVar4 = piVar5[3];
  piVar5[3] = uVar4 & 0xffffffbf;
  *(uint *)(iVar6 + 0x10) = uVar4 & 0xffffffbf;
  uVar4 = piVar5[5];
  piVar5[5] = uVar4 & 0xfffffdff;
  *(uint *)(iVar6 + 0x18) = uVar4 & 0xfffffdff;
  uVar4 = piVar5[2];
  piVar5[2] = uVar4 & 0xffffcfff;
  *(uint *)(iVar6 + 0xc) = uVar4 & 0xffffcfff;
  return 0;
}



/* Function: FUN_00009e70 */

undefined4 FUN_00009e70(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint uStack_28;
  
  uVar6 = 0;
  local_38 = 0;
  local_3c = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  piVar7 = (int *)(DAT_00009640 + param_1 * 0x20);
  iVar5 = *(int *)(*piVar7 + 4);
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  local_40 = FUN_00008094(param_1);
  FUN_000087e0(iVar5);
  uVar1 = local_40 >> 3;
  if (param_4 != uVar1 * (param_4 / uVar1)) {
    FUN_000006e4(s_len____bitlen___BITLEN_8_____0_00009ca0,DAT_00009cc0,0x7e4);
  }
  uVar3 = piVar7[2];
  piVar7[2] = uVar3 | 0x3000;
  *(uint *)(iVar5 + 0xc) = uVar3 | 0x3000;
  iVar2 = DAT_00009d00;
  piVar7 = (int *)(DAT_00009d00 + 0x30);
  do {
    if (param_4 <= local_38) {
      return 0;
    }
    if (*(int *)(iVar2 + 0xc) != 0 || *(int *)(iVar2 + 0x10) != 0) {
      *piVar7 = param_1;
      *(uint *)(iVar2 + 0x48) = local_40;
      uVar6 = param_4 - local_3c;
      if (uVar1 * 0x10 < uVar6) {
        uVar6 = uVar1 << 4;
      }
      local_44 = uVar6 / uVar1;
      local_48 = 0;
      local_50 = 0;
      local_4c = 0;
      FUN_00008054(param_1,&local_50);
      if (param_1 == 0) {
        uVar4 = 7;
      }
      else {
        uVar4 = 8;
      }
      FUN_00000798(uVar4);
      if (param_1 == 0) {
        uVar4 = 7;
      }
      else {
        uVar4 = 8;
      }
      FUN_00000794(uVar4,DAT_0000a2ac);
      if (param_1 == 0) {
        uVar4 = 7;
      }
      else {
        uVar4 = 8;
      }
      FUN_00000738(uVar4);
      *(uint *)(iVar5 + 0x20) = *(uint *)(iVar5 + 0x20) | 0x40;
    }
    *(undefined4 *)(iVar5 + 0x48) = 1;
    *(undefined4 *)(iVar5 + 0x48) = 0;
    *(uint *)(iVar2 + 0x34) = param_4;
    if (param_4 == 0) {
      FUN_000006e4(s_s_spi_irq_ctx_spi_rw_remain_size_0000a2b0,DAT_00009cc0,0x80e);
    }
    *(uint *)(iVar2 + 0x38) = uVar6;
    *(undefined4 *)(iVar2 + 0x40) = local_30;
    *(undefined4 *)(iVar2 + 0x3c) = local_2c;
    FUN_000080b0(param_1,local_2c,uVar6,0);
  } while (*(int *)(iVar2 + 0xc) == 0 && *(int *)(iVar2 + 0x10) == 0);
  return 0;
}



/* Function: FUN_0000a008 */

undefined4 FUN_0000a008(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 unaff_r10;
  undefined4 uVar9;
  bool bVar10;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  int local_f0;
  undefined4 local_ec;
  undefined2 local_e6;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined2 local_8e;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_60;
  int local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  local_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  FUN_0001f538(&local_108,0x58);
  FUN_0001f538(&local_b0,0x58);
  uVar8 = 0;
  uVar7 = 0;
  local_58 = 0;
  uVar9 = 0;
  piVar5 = (int *)(DAT_00009640 + local_34 * 0x20);
  iVar6 = *(int *)(*piVar5 + 4);
  FUN_000087e0(iVar6);
  local_38 = (uint)*(ushort *)(*piVar5 + 10);
  local_3c = (uint)*(ushort *)(*piVar5 + 8);
  uVar2 = local_38;
  if (local_38 != 0xffff) {
    uVar2 = local_3c;
  }
  if (local_38 == 0xffff || uVar2 == 0xffff) {
    FUN_000006e4(s__INVALID_U16____rx_channel_______00009cc4,DAT_00009cc0,0x847);
  }
  *DAT_000090b4 = local_34;
  *(uint *)(DAT_0000a2d8 + 0x14) = (uint)(param_2 != 0) | (uint)(param_3 != 0) << 1;
  iVar1 = FUN_00008094(local_34);
  if (iVar1 == 8) {
    bVar10 = param_2 != 0;
    uVar8 = 0;
    if (!bVar10) {
      param_2 = DAT_00009d00;
    }
    local_54 = (uint)bVar10;
    if (param_3 == 0) {
      param_3 = DAT_00009d04;
    }
    uVar7 = 0x10;
    local_58 = 1;
    unaff_r10 = uVar8;
    local_50 = iVar6;
  }
  else if (iVar1 == 0x10) {
    if (param_2 == 0) {
      local_54 = 0;
      param_2 = DAT_00009d00;
    }
    else {
      local_54 = 2;
    }
    uVar8 = 1;
    if (param_3 == 0) {
      param_3 = DAT_00009d04;
    }
    uVar7 = 0x20;
    uVar9 = 2;
    local_58 = 2;
    unaff_r10 = uVar8;
    local_50 = iVar6;
  }
  else if (iVar1 == 0x20) {
    uVar8 = 2;
    if (param_2 == 0) {
      local_54 = 0;
      param_2 = DAT_00009d00;
    }
    else {
      local_54 = 4;
    }
    if (param_3 == 0) {
      param_3 = DAT_00009d04;
    }
    uVar7 = 0x40;
    uVar9 = 1;
    local_58 = 4;
    unaff_r10 = uVar8;
    local_50 = iVar6;
  }
  else {
    FUN_000006e4(s_s_spi_irq_ctx_spi_rw_remain_size_0000a2b0 + 0x24,DAT_00009cc0,0x88b);
  }
  if ((*(byte *)(DAT_0000a2d8 + 0x14) & 1) == 0) {
    uVar2 = piVar5[2] & 0xffffefffU | 0x2000;
  }
  else {
    uVar2 = piVar5[2] | 0x3000;
  }
  piVar5[2] = uVar2;
  *(uint *)(iVar6 + 0xc) = uVar2;
  local_44 = 0;
  uStack_40 = 0x10;
  local_4c = 4;
  uStack_48 = 0x10;
  FUN_00008054(local_34,&local_4c);
  if ((*(byte *)(DAT_0000a2d8 + 0x14) & 1) == 0) {
    uVar3 = 4;
    uVar4 = DAT_0000a2dc;
  }
  else {
    uVar3 = 0;
    uVar4 = uVar3;
  }
  FUN_00007b2c(local_3c,uVar3,uVar4);
  local_100 = 0;
  local_108 = 0;
  uStack_104 = 1;
  local_e4 = local_28;
  local_ec = 0;
  local_dc = 0;
  local_e0 = local_58;
  local_d8 = 0;
  local_d4 = 0;
  local_fc = uVar8;
  local_f8 = uVar8;
  local_f4 = param_3;
  local_f0 = iVar6;
  local_e6 = uVar7;
  local_b8 = uVar9;
  FUN_00007970(local_3c,&local_108);
  iVar1 = DAT_0000a2d8;
  if ((*(byte *)(DAT_0000a2d8 + 0x14) & 1) != 0) {
    FUN_00007b2c(local_38,4,DAT_0000a2dc);
    local_b0 = 0;
    uStack_ac = 3;
    local_9c = local_50;
    local_8c = local_28;
    local_a8 = 0;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    local_7c = 0;
    local_84 = local_54;
    local_a4 = unaff_r10;
    local_a0 = unaff_r10;
    local_98 = param_2;
    local_8e = uVar7;
    local_60 = uVar9;
    FUN_00007970(local_38,&local_b0);
  }
  uVar2 = piVar5[3];
  piVar5[3] = uVar2 | 0x40;
  *(uint *)(iVar6 + 0x10) = uVar2 | 0x40;
  if ((*(byte *)(iVar1 + 0x14) & 1) != 0) {
    local_58 = local_98;
    local_54 = local_8c;
    local_50 = 2;
    FUN_00007c94(local_38,1,&local_58);
  }
  local_58 = local_f4;
  local_54 = local_e4;
  local_50 = 1;
  FUN_00007c94(local_3c,1,&local_58,1);
  return 0;
}



/* Function: FUN_0000a3a8 */

undefined4 FUN_0000a3a8(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(DAT_00009640 + param_1 * 0x20);
  iVar4 = *(int *)(*piVar3 + 4);
  FUN_000087e0(iVar4);
  FUN_000087e0(iVar4);
  if (param_2 == 0) {
    iVar1 = 1;
  }
  else if (param_2 == 1) {
    iVar1 = 2;
  }
  else if (param_2 == 2) {
    iVar1 = 4;
  }
  else if (param_2 == 3) {
    iVar1 = 8;
  }
  else {
    iVar1 = 0xf;
  }
  if (param_3 == 0) {
    uVar2 = piVar3[1] & 0xffff7fffU | iVar1 << 8;
  }
  else {
    uVar2 = piVar3[1] & 0xffff7fffU & ~(iVar1 << 8);
  }
  *(uint *)(iVar4 + 8) = uVar2;
  piVar3[1] = uVar2;
  return 0;
}



/* Function: FUN_0000a428 */

undefined4 FUN_0000a428(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(DAT_00009640 + param_1 * 0x20);
  iVar3 = *(int *)(*piVar2 + 4);
  FUN_000087e0(iVar3);
  if ((((param_2 != 7 && param_2 != 8) && (param_2 != 9 && param_2 != 10)) &&
      (param_2 != 0xb && param_2 != 0xc)) && (param_2 != 0x10 && param_2 != 0x20)) {
    FUN_000006e4(DAT_0000a60c,DAT_00009cc0,0x99f);
  }
  uVar1 = piVar2[1] & 0xffffff83U | (param_2 & 0x1f) << 2;
  piVar2[1] = uVar1;
  *(uint *)(iVar3 + 8) = uVar1;
  return 0;
}



/* Function: FUN_0000a4a8 */

undefined4 FUN_0000a4a8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    iVar2 = *(int *)(DAT_0000a610 + iVar1 * 0x14);
    if (iVar2 == 8) {
      return 0xffffffff;
    }
    if (iVar2 == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return *(undefined4 *)(DAT_0000a610 + iVar1 * 0x14 + 0x10);
}



/* Function: FUN_0000a4e8 */

undefined4 FUN_0000a4e8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = (uint *)0x0;
  uVar4 = 0;
  iVar1 = 0;
  do {
    iVar2 = *(int *)(DAT_0000a610 + iVar1 * 0x14);
    if (iVar2 == 8) {
LAB_0000a530:
      if (puVar3 == (uint *)0x0) {
        FUN_000006e4(s_pin_addr_0000a614,DAT_00009cc0,0x9f4);
      }
      *puVar3 = *puVar3 & 0xffffffcf | uVar4;
      return 0;
    }
    if (iVar2 == param_1) {
      iVar1 = DAT_0000a610 + iVar1 * 0x14;
      puVar3 = *(uint **)(iVar1 + 4);
      if (param_2 == 0) {
        uVar4 = *(uint *)(iVar1 + 8);
      }
      else {
        uVar4 = *(uint *)(iVar1 + 0xc);
      }
      goto LAB_0000a530;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}



/* Function: FUN_0000a560 */

undefined4 FUN_0000a560(undefined4 param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  FUN_0000a4e8();
  iVar1 = FUN_0000a4a8(param_1);
  if (iVar1 == -1) {
    FUN_000006e4(s_gpio_id____INVALID_U32_0000a620,DAT_00009cc0,0xa0f);
  }
  if (param_2 == 1) {
    FUN_000109ac(iVar1);
    FUN_0001092c(iVar1,1);
    FUN_000108d4(iVar1,param_3);
  }
  else {
    FUN_000109c4();
  }
  return 0;
}



/* Function: FUN_0000a5d8 */

void FUN_0000a5d8(int param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 2) {
    uVar1 = *(undefined1 *)(param_1 + uVar2);
    *(undefined1 *)(param_1 + uVar2) = *(undefined1 *)(param_1 + uVar2 + 1);
    *(undefined1 *)(param_1 + uVar2 + 1) = uVar1;
  }
  return;
}



/* Function: FUN_0000a638 */

undefined4 FUN_0000a638(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar6 = DAT_0000a880 + param_1 * 0x14;
  uVar7 = *(undefined4 *)(iVar6 + 0xc);
  iVar8 = *(int *)(iVar6 + 4);
  iVar2 = FUN_000007e0(s_SPI_SYNC_MUTEX_0000a884,1);
  iVar1 = DAT_0000a894;
  *(int *)(DAT_0000a894 + iVar8 * 0x1c) = iVar2;
  if (iVar2 == 0) {
    uVar3 = FUN_000006ec(s_SPI_Great_MUTEX_fail__0000a898);
    FUN_000006e8(s__NULL______spi_bus_bus_id__mutex_0000a8bc,s_spi_hal_c_0000a8b0,0x86,uVar3);
  }
  iVar4 = DAT_0000a8e0 + param_1 * 0x1c;
  iVar2 = iVar1 + iVar8 * 0x1c;
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
  *(undefined4 *)(iVar2 + 0x10) = uVar7;
  *(undefined4 *)(iVar1 + *(int *)(iVar6 + 4) * 0x1c + 0x18) = *(undefined4 *)(iVar6 + 0x10);
  pcVar5 = *(code **)(*(int *)(iVar2 + 0x18) + 0x54);
  if (pcVar5 != Reset) {
    (*pcVar5)(iVar8,uVar7);
  }
  return 0;
}



/* Function: FUN_0000a6f0 */

undefined4 FUN_0000a6f0(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == (uint *)0x0) {
    FUN_000006e4(s_NULL____dev_0000a8e4,s_spi_hal_c_0000a8b0,0xd4);
  }
  uVar3 = *param_1;
  if (2 < uVar3) {
    FUN_000006e4(s_SPI_ID_MAX_>_dev_>id_0000a8f0,s_spi_hal_c_0000a8b0,0xd8);
  }
  iVar4 = *(int *)(DAT_0000a880 + uVar3 * 0x14 + 4);
  iVar2 = DAT_0000a8e0 + uVar3 * 0x1c;
  *(uint *)(DAT_0000a8e0 + uVar3 * 0x1c) = uVar3;
  *(uint *)(iVar2 + 4) = param_1[1];
  *(uint *)(iVar2 + 8) = param_1[2];
  *(uint *)(iVar2 + 0xc) = param_1[3];
  *(uint *)(iVar2 + 0x10) = param_1[4];
  *(uint *)(iVar2 + 0x14) = param_1[5];
  *(uint *)(iVar2 + 0x18) = param_1[6];
  iVar1 = DAT_0000a894 + iVar4 * 0x1c;
  if (*(int *)(iVar1 + 0x14) == 0) {
    FUN_0000a638(uVar3);
    (*(code *)**(undefined4 **)(iVar1 + 0x18))(iVar4);
    (**(code **)(*(int *)(iVar1 + 0x18) + 4))
              (iVar4,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
               *(undefined4 *)(iVar2 + 0xc));
  }
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  return 0;
}



/* Function: FUN_0000a7d4 */

void FUN_0000a7d4(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (2 < param_1) {
    FUN_000006e4(s_SPI_ID_MAX_>_logic_id_0000a908,s_spi_hal_c_0000a8b0,0x11a);
  }
  iVar1 = DAT_0000a8e0;
  iVar3 = DAT_0000a8e0 + param_1 * 0x1c;
  if (*(int *)(iVar3 + 0xc) != 0) {
    iVar4 = *(int *)(DAT_0000a880 + param_1 * 0x14 + 4);
    iVar2 = DAT_0000a894 + iVar4 * 0x1c;
    if (*(int *)(iVar2 + 0x14) == 1) {
      (**(code **)(*(int *)(iVar2 + 0x18) + 0x3c))(iVar4);
      FUN_0000b394(iVar4);
    }
    else {
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
    }
    *(undefined4 *)(iVar1 + param_1 * 0x1c) = 0;
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    return;
  }
  return;
}



/* Function: FUN_0000a9e4 */

int FUN_0000a9e4(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (2 < param_1) {
    FUN_000006e4(s_SPI_ID_MAX_>_logic_id_0000a908,s_spi_hal_c_0000a8b0,0x18c);
  }
  if (param_2 == 0) {
    FUN_000006e4(s_NULL____buffer_ptr_0000acf8,s_spi_hal_c_0000a8b0,0x18d);
  }
  if (param_3 == 0) {
    FUN_000006e4(s_0_<_len_0000ad0c,s_spi_hal_c_0000a8b0,0x18e);
  }
  if (*(int *)(DAT_0000a8e0 + param_1 * 0x1c + 0xc) == 0) {
    FUN_000006e4(s_0______spi_dev_logic_id__freq_0000ad14,s_spi_hal_c_0000a8b0,400);
  }
  iVar1 = *(int *)(DAT_0000a880 + param_1 * 0x14 + 4);
  iVar2 = (**(code **)(*(int *)(DAT_0000a894 + iVar1 * 0x1c + 0x18) + 8))(iVar1,param_2,param_3);
  iVar1 = 0;
  if (iVar2 == 0) {
    iVar1 = param_3;
  }
  return iVar1;
}



/* Function: FUN_0000aab0 */

undefined4 FUN_0000aab0(void)

{
  return 0;
}



/* Function: FUN_0000aab8 */

undefined8 FUN_0000aab8(uint param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *extraout_r2;
  code *extraout_r2_00;
  code *extraout_r2_01;
  code *extraout_r2_02;
  code *extraout_r2_03;
  code *pcVar5;
  code *extraout_r2_04;
  int iVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  uint local_30;
  undefined4 uStack_2c;
  int *piStack_28;
  
  uVar10 = 0;
  local_30 = param_1;
  uStack_2c = param_2;
  piStack_28 = param_3;
  if (2 < param_1) {
    FUN_000006e4(s_SPI_ID_MAX_>_logic_id_0000a908,s_spi_hal_c_0000a8b0,0x1ec);
  }
  if (param_3 == (int *)0x0) {
    FUN_000006e4(s_NULL____arg_0000ad34,s_spi_hal_c_0000a8b0,0x1ed);
  }
  iVar1 = DAT_0000a8e0;
  pcVar5 = (code *)(local_30 * 5);
  iVar3 = DAT_0000a880 + local_30 * 0x14;
  iVar6 = *(int *)(iVar3 + 4);
  uVar8 = *(uint *)(iVar3 + 8);
  pcVar9 = *(code **)(DAT_0000a8e0 + local_30 * 0x1c + 0x10);
  iVar7 = *(int *)(iVar3 + 0xc);
  iVar3 = DAT_0000a8e0 + 0x54;
  switch(param_2) {
  case 0x30:
    iVar1 = *(int *)(iVar3 + iVar6 * 0x1c + 4);
    goto LAB_0000abb0;
  case 0x31:
    iVar1 = *param_3;
    pcVar5 = *(code **)(*(int *)(iVar3 + iVar6 * 0x1c + 0x18) + 0x24);
    goto LAB_0000ac08;
  case 0x32:
    iVar1 = *(int *)(iVar3 + iVar6 * 0x1c + 8);
    goto LAB_0000abb0;
  case 0x33:
    iVar3 = iVar3 + iVar6 * 0x1c;
    uVar10 = (**(code **)(*(int *)(iVar3 + 0x18) + 0x2c))(iVar6,*param_3);
    *(int *)(iVar3 + 8) = *param_3;
    break;
  case 0x34:
    iVar1 = *(int *)(iVar3 + iVar6 * 0x1c + 0xc);
LAB_0000abb0:
    *param_3 = iVar1;
    break;
  case 0x35:
    iVar1 = *param_3;
    pcVar5 = *(code **)(*(int *)(iVar3 + iVar6 * 0x1c + 0x18) + 0x34);
LAB_0000ac08:
    uVar10 = (*pcVar5)(iVar6,iVar1);
    break;
  case 0x36:
    if (*param_3 == 0) {
      iVar1 = iVar3 + iVar6 * 0x1c;
      bVar11 = *(int *)(iVar1 + 0x10) != iVar7;
      if (bVar11) {
        pcVar5 = *(code **)(*(int *)(iVar1 + 0x18) + 0x54);
      }
      if (bVar11 && pcVar5 != Reset) {
        (*pcVar5)(iVar6,iVar7);
        *(int *)(iVar1 + 0x10) = iVar7;
      }
      uVar10 = (**(code **)(*(int *)(iVar1 + 0x18) + 0x20))(iVar6,0xf,*param_3);
      if (*(int *)(iVar3 + iVar6 * 0x1c) == 0) goto LAB_0000ae94;
      iVar1 = FUN_00000650();
      if (iVar1 == 0) break;
      iVar1 = FUN_000007e8(*(undefined4 *)(iVar3 + iVar6 * 0x1c));
      goto joined_r0x0000ae88;
    }
    if (*(int *)(iVar3 + iVar6 * 0x1c) == 0) {
LAB_0000ae94:
      return CONCAT44(local_30,3);
    }
    iVar2 = FUN_00000650();
    pcVar5 = extraout_r2;
    if (iVar2 != 0) {
      iVar2 = FUN_000007d4();
      uVar10 = 0;
      if (iVar2 != -1) {
        uVar10 = 0xffffffff;
      }
      iVar2 = FUN_000007e4(*(undefined4 *)(iVar3 + iVar6 * 0x1c),uVar10);
      pcVar5 = extraout_r2_00;
      if (iVar2 != 0) {
        FUN_000006e4(s_ret____SCI_SUCCESS_0000ad40,s_spi_hal_c_0000a8b0,0x218);
        pcVar5 = extraout_r2_01;
      }
    }
    iVar3 = iVar3 + iVar6 * 0x1c;
    bVar11 = *(int *)(iVar3 + 0x10) != iVar7;
    if (bVar11) {
      pcVar5 = *(code **)(*(int *)(iVar3 + 0x18) + 0x54);
    }
    if (bVar11 && pcVar5 != Reset) {
      (*pcVar5)(iVar6,iVar7);
      *(int *)(iVar3 + 0x10) = iVar7;
      pcVar5 = extraout_r2_02;
    }
    if (pcVar9 != Reset) {
      (*pcVar9)(&local_30);
      pcVar5 = extraout_r2_03;
    }
LAB_0000aca0:
    pcVar9 = *(code **)(iVar3 + 0xc);
    iVar7 = iVar1 + local_30 * 0x1c;
    bVar11 = pcVar9 == *(code **)(iVar7 + 0xc);
    if (bVar11) {
      pcVar9 = *(code **)(iVar3 + 8);
      pcVar5 = *(code **)(iVar7 + 8);
    }
    bVar12 = bVar11 && pcVar9 == pcVar5;
    if (bVar11 && pcVar9 == pcVar5) {
      bVar12 = *(int *)(iVar3 + 4) == *(int *)(iVar7 + 4);
    }
    if (!bVar12) {
      (**(code **)(*(int *)(iVar3 + 0x18) + 4))
                (iVar6,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
      iVar1 = iVar1 + local_30 * 0x1c;
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar1 + 8);
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar1 + 4);
    }
    goto LAB_0000adf8;
  case 0x37:
    break;
  case 0x38:
    iVar7 = param_3[2];
    iVar1 = iVar6 * 0x1c;
    iVar6 = *param_3;
    pcVar5 = *(code **)(*(int *)(iVar3 + iVar1 + 0x18) + 0x40);
    uVar8 = (uint)(param_3[1] != 0);
    goto LAB_0000ae0c;
  case 0x39:
    iVar3 = iVar3 + iVar6 * 0x1c;
    iVar2 = *(int *)(iVar3 + 0x10);
    if (*param_3 != 0) {
      if (iVar2 != iVar7) {
        pcVar5 = *(code **)(*(int *)(iVar3 + 0x18) + 0x54);
      }
      if (iVar2 != iVar7 && pcVar5 != Reset) {
        (*pcVar5)(iVar6,iVar7);
        *(int *)(iVar3 + 0x10) = iVar7;
        pcVar5 = extraout_r2_04;
      }
      goto LAB_0000aca0;
    }
    if (iVar2 != iVar7) {
      pcVar5 = *(code **)(*(int *)(iVar3 + 0x18) + 0x54);
    }
    if (iVar2 != iVar7 && pcVar5 != Reset) {
      (*pcVar5)(iVar6,iVar7);
      *(int *)(iVar3 + 0x10) = iVar7;
    }
LAB_0000adf8:
    iVar7 = *param_3;
    pcVar5 = *(code **)(*(int *)(iVar3 + 0x18) + 0x20);
LAB_0000ae0c:
    uVar10 = (*pcVar5)(iVar6,uVar8,iVar7);
    break;
  case 0x3a:
    break;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    break;
  case 0x3e:
    break;
  case 0x3f:
    break;
  case 0x40:
    iVar1 = *(int *)(iVar3 + iVar6 * 0x1c);
    if (*param_3 == 0) {
      if (iVar1 == 0) goto LAB_0000ae94;
      iVar1 = FUN_00000650();
      if (iVar1 == 0) break;
      iVar1 = FUN_000007e8(*(undefined4 *)(iVar3 + iVar6 * 0x1c));
    }
    else {
      if (iVar1 == 0) goto LAB_0000ae94;
      iVar1 = FUN_00000650();
      if (iVar1 == 0) break;
      iVar1 = FUN_000007d4();
      uVar4 = 0;
      if (iVar1 != -1) {
        uVar4 = 0xffffffff;
      }
      iVar1 = FUN_000007e4(*(undefined4 *)(iVar3 + iVar6 * 0x1c),uVar4);
    }
joined_r0x0000ae88:
    if (iVar1 != 0) {
      FUN_000006e4(s_ret____SCI_SUCCESS_0000ad40,DAT_0000b1f8);
    }
  }
  return CONCAT44(local_30,uVar10);
}



/* Function: FUN_0000b06c */

uint FUN_0000b06c(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = -(param_2 & 0x1f) + 0x20;
  if (2 < param_1) {
    FUN_000006e4(DAT_0000b1fc,DAT_0000b1f8,0x2df);
  }
  if (param_2 == 0) {
    FUN_000006e4(s_NULL____buffer_ptr_0000acf8,DAT_0000b1f8,0x2e0);
  }
  if (param_3 == 0) {
    FUN_000006e4(s_0_<_len_0000ad0c,DAT_0000b1f8,0x2e1);
  }
  if (*(int *)(DAT_0000a8e0 + param_1 * 0x1c + 0xc) == 0) {
    FUN_000006e4(s_0______spi_dev_logic_id__freq_0000ad14,DAT_0000b1f8,0x2e3);
  }
  iVar4 = *(int *)(DAT_0000a880 + param_1 * 0x14 + 4);
  iVar3 = DAT_0000a894 + iVar4 * 0x1c;
  uVar5 = *(uint *)(iVar3 + 8);
  *DAT_0000b230 = param_4;
  if (param_4 == 0) {
    FUN_000006e4(s_PNULL____spi_rx_callback_0000b234,DAT_0000b1f8,0x2ea);
  }
  uVar5 = uVar5 >> 3;
  if ((param_3 < uVar5 * 0x10 + 0x20) || (*(int *)(*(int *)(iVar3 + 0x18) + 0x50) == 0)) {
    iVar2 = (**(code **)(*(int *)(iVar3 + 0x18) + 0x48))(iVar4,param_2,param_3);
  }
  else {
    if (-(param_2 & 0x1f) + 0x1f < 0x1f) {
      iVar1 = (**(code **)(*(int *)(iVar3 + 0x18) + 0xc))(iVar4,param_2,iVar2);
      if (iVar1 != 0) {
        return 0;
      }
      param_3 = param_3 - iVar2;
      param_2 = param_2 + iVar2;
    }
    iVar2 = DAT_0000b250;
    uVar5 = uVar5 * 0x10;
    iVar1 = param_3 - uVar5 * (param_3 / uVar5);
    *(int *)(DAT_0000b250 + 4) = iVar1;
    *(uint *)(iVar2 + 0x10) = param_2 + (param_3 - iVar1);
    iVar2 = (**(code **)(*(int *)(iVar3 + 0x18) + 0x50))(iVar4,param_2,0);
  }
  uVar5 = 0;
  if (iVar2 == 0) {
    uVar5 = param_3;
  }
  return uVar5;
}



/* Function: FUN_0000b394 */

undefined4 FUN_0000b394(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_0000a894;
  uVar2 = 0;
  iVar3 = DAT_0000a894 + param_1 * 0x1c;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  if (*(int *)(iVar1 + param_1 * 0x1c) != 0) {
    FUN_000007ec();
    *(undefined4 *)(iVar1 + param_1 * 0x1c) = 0;
  }
  *(undefined4 *)(iVar3 + 0x18) = 0;
  do {
    if (*(int *)(iVar1 + uVar2 * 0x1c + 0x14) != 0) {
      return 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return 0;
}



/* Function: FUN_0000b41c */

void FUN_0000b41c(uint param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar2 = DAT_0000b638;
  puVar6 = DAT_0000b638 + 4;
  puVar5 = (undefined4 *)((uint)puVar6 | (int)puVar6 >> 0x19);
  psVar3 = (short *)FUN_0000c374(param_2);
  if (1 < param_1) {
    FUN_000006e4(s_bus_width_<__BUS_WIDTH_16BIT_0000b64c,&DAT_0000b63c,0x51);
  }
  if (param_1 == 0) {
    uVar4 = 0x28;
  }
  else {
    uVar4 = 1;
  }
  do {
  } while ((*(uint *)(DAT_0000b66c + 8) & 2) != 0);
  sVar1 = *psVar3;
  if (sVar1 == 0) {
    *puVar2 = uVar4;
  }
  else if (sVar1 == 1) {
    *puVar6 = uVar4;
  }
  else if (sVar1 == 2) {
    *puVar5 = uVar4;
  }
  else if (sVar1 == 3) {
    puVar5[4] = uVar4;
  }
  else {
    FUN_000006d8(0x10,DAT_0000b670,&DAT_0000b648);
    FUN_000006e4(&DAT_0000b674,&DAT_0000b63c,0x6e);
  }
  return;
}



/* Function: FUN_0000b520 */

void FUN_0000b520(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_0000b688;
  puVar2 = DAT_0000b688 + -0x400;
  if (param_2 == 1) {
    *DAT_0000b688 = 1;
    FUN_00000664();
    *puVar2 = 1;
    FUN_00000664(param_1);
    *puVar1 = 1;
  }
  else {
    *puVar2 = 1;
    FUN_00000664();
    *puVar1 = 1;
    FUN_00000664(param_1);
    *puVar2 = 1;
  }
  FUN_00000664(param_1);
  return;
}



/* Function: FUN_0000b57c */

undefined4 FUN_0000b57c(undefined2 param_1,int param_2)

{
  FUN_0000b41c(1);
  do {
  } while ((*(uint *)(DAT_0000b66c + 8) & 2) != 0);
  **(undefined2 **)(DAT_0000b68c + param_2 * 8) = param_1;
  return 0;
}



/* Function: FUN_0000b5b4 */

undefined4 FUN_0000b5b4(undefined2 param_1,int param_2)

{
  FUN_0000b41c(1);
  do {
  } while ((*(uint *)(DAT_0000b66c + 8) & 2) != 0);
  **(undefined2 **)(DAT_0000b68c + param_2 * 8 + 4) = param_1;
  return 0;
}



/* Function: FUN_0000b5f0 */

void FUN_0000b5f0(uint param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = 2 < param_1;
  bVar2 = param_1 == 3;
  if (param_1 < 4) {
    bVar3 = param_2 != 0;
    bVar2 = param_2 == 1;
  }
  if (bVar3 && !bVar2) {
    FUN_000006e4(s__lcd_cs_<__3)_&&_(lcd_cd_<__1)_0000b690,&DAT_0000b63c,0x166);
  }
  iVar1 = DAT_0000b68c;
  *(uint *)(DAT_0000b68c + param_3 * 8) = param_1 * 0x4000000 + 0x60000000;
  *(uint *)(iVar1 + param_3 * 8 + 4) = param_1 * 0x4000000 + 0x60020000;
  return;
}



/* Function: FUN_0000b9ac */

undefined2 FUN_0000b9ac(int param_1,int param_2)

{
  undefined2 *puVar1;
  
  FUN_0000b41c(1,param_1);
  do {
  } while ((*(uint *)(DAT_0000b66c + 8) & 2) != 0);
  if (param_2 == 1) {
    puVar1 = *(undefined2 **)(DAT_0000b68c + param_1 * 8 + 4);
  }
  else {
    puVar1 = *(undefined2 **)(DAT_0000b68c + param_1 * 8);
  }
  return *puVar1;
}



/* Function: FUN_0000ba38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000ba38(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = _DAT_0000bd48;
  puVar2 = _DAT_0000bd48 + -0x400;
  if (param_2 == 1) {
    *_DAT_0000bd48 = 1;
    FUN_00000664();
    *puVar2 = 1;
    FUN_00000664(param_1);
    *puVar1 = 1;
  }
  else {
    *puVar2 = 1;
    FUN_00000664();
    *puVar1 = 1;
    FUN_00000664(param_1);
    *puVar2 = 1;
  }
  FUN_00000664(param_1);
  return;
}



/* Function: FUN_0000ba94 */

undefined4 FUN_0000ba94(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_14 [2];
  
  FUN_0001f538(&local_30,0x1c);
  uVar2 = param_1[2];
  uVar3 = *param_1;
  uVar4 = uVar3 & 0xffff;
  local_2c = *(uint *)(*(int *)(uVar2 + 0x14) + 8) | *(int *)(*(int *)(uVar2 + 0x14) + 4) << 1;
  local_24 = **(undefined4 **)(uVar2 + 0x14);
  local_28 = *(undefined4 *)(*(int *)(uVar2 + 0x14) + 0xc);
  local_30 = uVar4;
  iVar1 = FUN_0000a6f0(&local_30);
  if (iVar1 == 0) {
    FUN_000006c8(s____SPI_HAL_Open____SUCCESS__0000bd49 + 3);
  }
  local_14[0] = 3;
  FUN_0000aab8(uVar4,0x43,local_14);
  local_14[0] = 2;
  FUN_0000aab8(uVar4,0x44,local_14);
  FUN_0000c248(uVar4,0);
  local_14[0] = local_28;
  FUN_0000aab8(uVar4,0x33,local_14);
  if ((uVar3 & 0xffff) == uVar3 >> 0x10) {
    FUN_000006e4(s__lcm_spec_info_t_cs_pin_____lcm__0000bd78,s_lcd_if_spi_c_0000bd68,0x172);
  }
  local_30 = uVar3 >> 0x10;
  iVar1 = FUN_0000a6f0(&local_30);
  if (iVar1 == 0) {
    FUN_000006c8(s____SPI_HAL_Open____SUCCESS__0000bd49 + 3);
  }
  return 0;
}



/* Function: FUN_0000bb94 */

void FUN_0000bb94(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  FUN_0000aab8(param_1,0x42,&local_10);
  iVar1 = DAT_0000bdac;
  *(undefined4 *)(DAT_0000bdac + param_3 * 8) = local_10;
  *(undefined4 *)(iVar1 + param_3 * 8 + 4) = local_10;
  return;
}



/* Function: FUN_0000bbc0 */

longlong FUN_0000bbc0(undefined2 param_1,uint param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  uint *puVar4;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  
  puVar4 = &local_20;
  local_20 = param_2 & 0xffffff00;
  local_1c = param_3 & 0xffff0000;
  local_18 = param_4;
  puVar3 = (undefined2 *)FUN_0000c374(param_2);
  uVar2 = *puVar3;
  cVar1 = *(char *)(*(int *)(*(int *)(puVar3 + 4) + 0x14) + 0xc);
  FUN_0000c248(uVar2,1);
  if (cVar1 == '\x10') {
    local_18 = 0x10;
    FUN_0000aab8(uVar2,0x33,&local_18);
    FUN_0000c224(uVar2,0);
    puVar4 = &local_1c;
    local_1c = CONCAT22(local_1c._2_2_,param_1);
  }
  else {
    local_18 = 8;
    FUN_0000aab8(uVar2,0x33,&local_18);
    FUN_0000c224(uVar2,0);
    local_20 = CONCAT31(local_20._1_3_,(char)param_1);
  }
  FUN_0000aab0(uVar2,puVar4,1,0);
  FUN_0000c224(uVar2,1);
  FUN_0000c248(uVar2,0);
  return (ulonglong)local_20 << 0x20;
}



/* Function: FUN_0000bc94 */

longlong FUN_0000bc94(undefined2 param_1,uint param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  uint *puVar4;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  
  puVar4 = &local_20;
  local_20 = param_2 & 0xffffff00;
  local_1c = param_3 & 0xffff0000;
  local_18 = param_4;
  puVar3 = (undefined2 *)FUN_0000c374(param_2);
  uVar2 = *puVar3;
  cVar1 = *(char *)(*(int *)(*(int *)(puVar3 + 4) + 0x14) + 0xc);
  FUN_0000c248(uVar2,1);
  if (cVar1 == '\x10') {
    local_18 = 0x10;
    FUN_0000aab8(uVar2,0x33,&local_18);
    puVar4 = &local_1c;
    local_1c = CONCAT22(local_1c._2_2_,param_1);
  }
  else {
    local_18 = 8;
    FUN_0000aab8(uVar2,0x33,&local_18);
    local_20 = CONCAT31(local_20._1_3_,(char)param_1);
  }
  FUN_0000aab0(uVar2,puVar4,1,0);
  FUN_0000c248(uVar2,0);
  return (ulonglong)local_20 << 0x20;
}



/* Function: FUN_0000bdf4 */

void FUN_0000bdf4(void)

{
  *(uint *)(DAT_0000c260 + 100) = *(uint *)(DAT_0000c260 + 100) | 1;
  return;
}



/* Function: FUN_0000be08 */

void FUN_0000be08(uint param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = DAT_0000c260;
  puVar1 = (uint *)(DAT_0000c260 + 0x60);
  *(uint *)(DAT_0000c260 + 0x5c) =
       *(uint *)(DAT_0000c260 + 0x5c) & 0xfffffc00 | param_2 << 4 | (param_1 & 0xffffff) >> 0x10;
  *(uint *)(iVar2 + 0x60) = param_1 & 0xffff | *puVar1 & 0xffff0000;
  return;
}



/* Function: FUN_0000be40 */

void FUN_0000be40(uint param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = DAT_0000c260;
  puVar1 = (uint *)(DAT_0000c260 + 0x58);
  *(uint *)(DAT_0000c260 + 0x54) =
       *(uint *)(DAT_0000c260 + 0x54) & 0xfffffc00 | param_2 << 4 | (param_1 & 0xfffff) >> 0x10;
  *(uint *)(iVar2 + 0x58) = param_1 & 0xffff | *puVar1 & 0xffff0000;
  return;
}



/* Function: FUN_0000beec */

void FUN_0000beec(void)

{
  *(uint *)(DAT_0000c260 + 0xc) = *(uint *)(DAT_0000c260 + 0xc) & 0xffffcfff | 0x1000;
  return;
}



/* Function: FUN_0000bf04 */

void FUN_0000bf04(void)

{
  *(uint *)(DAT_0000c260 + 0xc) = *(uint *)(DAT_0000c260 + 0xc) & 0xffffcfff | 0x2000;
  return;
}



/* Function: FUN_0000bf1c */

void FUN_0000bf1c(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0x20) {
    uVar1 = *(uint *)(DAT_0000c260 + 8) & 0xffffff83;
  }
  else {
    uVar1 = *(uint *)(DAT_0000c260 + 8) & 0xffffff83 | param_1 << 2;
  }
  *(uint *)(DAT_0000c260 + 8) = uVar1;
  return;
}



/* Function: FUN_0000bf70 */

void FUN_0000bf70(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = *(uint *)(DAT_0000c260 + 0x54) & 0xffff7fff;
  }
  else {
    uVar1 = *(uint *)(DAT_0000c260 + 0x54) | 0x8000;
  }
  *(uint *)(DAT_0000c260 + 0x54) = uVar1;
  return;
}



/* Function: FUN_0000bf8c */

void FUN_0000bf8c(void)

{
  *(uint *)(DAT_0000c260 + 100) = *(uint *)(DAT_0000c260 + 100) | 2;
  return;
}



/* Function: FUN_0000bfa0 */

void FUN_0000bfa0(void)

{
  *(uint *)(DAT_0000c260 + 100) = *(uint *)(DAT_0000c260 + 100) | 3;
  return;
}



/* Function: FUN_0000bfb4 */

void FUN_0000bfb4(void)

{
  int iVar1;
  
  iVar1 = DAT_0000c260;
  do {
  } while ((*(uint *)(DAT_0000c260 + 0x28) & 0x100) == 0);
  *(uint *)(DAT_0000c260 + 0x24) = *(uint *)(DAT_0000c260 + 0x24) | 0x100;
  do {
  } while ((*(uint *)(iVar1 + 0x34) & 0x100) != 0);
  do {
  } while ((*(uint *)(iVar1 + 0x34) & 0x80) == 0);
  return;
}



/* Function: FUN_0000c020 */

undefined4 FUN_0000c020(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0000c260;
  FUN_0000be40(param_2,param_3);
  FUN_0000be08(param_2,param_3);
  FUN_0000bfa0();
  *puVar1 = param_1;
  FUN_0000bfb4();
  do {
  } while ((puVar1[0xd] & 0x20) != 0);
  return *puVar1;
}



/* Function: FUN_0000c06c */

undefined4 FUN_0000c06c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0000c260;
  FUN_0000be40(param_2,0);
  FUN_0000bf8c();
  *puVar1 = param_1;
  FUN_0000bfb4();
  FUN_0000be08(param_2,0);
  FUN_0000bdf4();
  do {
  } while ((puVar1[0xd] & 0x20) != 0);
  return *puVar1;
}



/* Function: FUN_0000c0b8 */

void FUN_0000c0b8(undefined4 param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = DAT_0000c260;
  FUN_0000bf04();
  FUN_0000bf70(0);
  FUN_0000be40(1);
  FUN_0000bf8c();
  *puVar1 = param_1;
  FUN_0000bfb4();
  FUN_0000bf70(1);
  FUN_0000beec();
  FUN_0000be40(0);
  FUN_0000be08(param_3,0);
  FUN_0000bdf4();
  for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 1) {
    do {
    } while ((puVar1[0xd] & 0x20) != 0);
    *(undefined4 *)(param_2 + uVar2 * 4) = *puVar1;
  }
  return;
}



/* Function: FUN_0000c1ac */

undefined4 FUN_0000c1ac(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)FUN_0000c374(param_2);
  *(uint *)(DAT_0000c260 + 0x4c) = *(uint *)(DAT_0000c260 + 0x4c) | 0x80;
  uVar1 = *puVar2;
  FUN_0000c248(uVar1,1);
  FUN_0000c224(uVar1,1);
  FUN_0000bf1c(0x10);
  FUN_0000be40(param_1,0);
  FUN_0000bf8c();
  return 1;
}



/* Function: FUN_0000c208 */

undefined4 FUN_0000c208(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_0000c374();
  FUN_0000c248(*puVar1,0);
  return 1;
}



/* Function: FUN_0000c224 */

void FUN_0000c224(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = param_2;
  iVar1 = FUN_0000c374(0);
  FUN_0000aab8(*(undefined2 *)(iVar1 + 2),0x41,&local_8);
  return;
}



/* Function: FUN_0000c248 */

void FUN_0000c248(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_8;
  
  local_8 = param_2;
  FUN_0000aab8(param_1,0x39,&local_8);
  return;
}



/* Function: FUN_0000c264 */

void FUN_0000c264(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0000c4d4;
  puVar1 = DAT_0000c4d0;
  if (param_1 == 0) {
    *DAT_0000c4d0 = *DAT_0000c4d4;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[6] = puVar2[6];
    puVar1[7] = puVar2[7];
  }
  if ((code *)puVar1[param_1 * 9] == Reset) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0000c2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)puVar1[param_1 * 9])();
  return;
}



/* Function: FUN_0000c2c8 */

void FUN_0000c2c8(void)

{
  if (*(code **)(DAT_0000c4d0 + 4) == Reset) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0000c2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_0000c4d0 + 4))();
  return;
}



/* Function: FUN_0000c2f0 */

undefined4 FUN_0000c2f0(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)(DAT_0000c4d8 + param_3 * 0xc);
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  *puVar1 = *param_1;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  pcVar2 = *(code **)(DAT_0000c4d0 + param_3 * 0x24 + 8);
  if (pcVar2 != Reset) {
    (*pcVar2)(param_1,param_2,param_3 & 0xffff);
  }
  return 0;
}



/* Function: FUN_0000c32c */

void FUN_0000c32c(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(DAT_0000c4d0 + param_3 * 0x24 + 0xc);
  if (UNRECOVERED_JUMPTABLE != Reset) {
                    /* WARNING: Could not recover jumptable at 0x0000c34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Function: FUN_0000c358 */

undefined4 FUN_0000c358(int param_1)

{
  return *(undefined4 *)(DAT_0000c4dc + param_1 * 8 + 4);
}



/* Function: FUN_0000c374 */

int FUN_0000c374(int param_1)

{
  return DAT_0000c4d8 + param_1 * 0xc;
}



/* Function: FUN_0000c3a4 */

undefined4 FUN_0000c3a4(undefined4 param_1,int param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(DAT_0000c4d0 + param_2 * 0x24 + 0x14);
  if (pcVar1 != Reset) {
    (*pcVar1)();
  }
  return 0;
}



/* Function: FUN_0000c3c8 */

undefined4 FUN_0000c3c8(undefined4 param_1,int param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(DAT_0000c4d0 + param_2 * 0x24 + 0x10);
  if (pcVar1 != Reset) {
    (*pcVar1)();
  }
  return 0;
}



/* Function: FUN_0000c3ec */

undefined4 FUN_0000c3ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0000c3a4(param_1,param_3);
  FUN_0000c3c8(param_2,param_3);
  return 0;
}



/* Function: FUN_0000c414 */

undefined4 FUN_0000c414(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_000006e4(s_PNULL____func_0000c4f4,s_lcd_if_hal_c_0000c4e4,0x138);
  }
  *DAT_0000c4e0 = param_2;
  return 1;
}



/* Function: FUN_0000c440 */

undefined4 FUN_0000c440(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 extraout_r12;
  
  uVar1 = FUN_0000c358();
  *(int *)(DAT_0000c4e0 + 4) = param_1;
  pcVar2 = *(code **)(DAT_0000c4d0 + param_1 * 0x24 + 0x18);
  if (pcVar2 != Reset) {
    (*pcVar2)(extraout_r12,param_3,uVar1);
  }
  return 0;
}



/* Function: FUN_0000c4b0 */

void FUN_0000c4b0(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(DAT_0000c4d0 + param_1 * 0x24 + 0x1c);
  if (UNRECOVERED_JUMPTABLE != Reset) {
                    /* WARNING: Could not recover jumptable at 0x0000c4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  return;
}



/* Function: FUN_0000c504 */

void FUN_0000c504(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    FUN_000006e4(s_PNULL____sm_0000c81c,&DAT_0000c810,0x102);
  }
  iVar2 = FUN_00000650();
  puVar1 = DAT_0000c82c;
  if (iVar2 == 0) {
    return;
  }
  if (param_1 == *(int *)(DAT_0000c828 + 0x34)) {
    uVar3 = FUN_000007d4();
    *puVar1 = uVar3;
    puVar1[1] = puVar1[1] + 1;
  }
  else {
    uVar3 = FUN_000007d4();
    puVar1[2] = uVar3;
    puVar1[3] = puVar1[3] + 1;
  }
  iVar2 = FUN_000007d8(param_1,0xffffffff);
  if (iVar2 != 0xff) {
    return;
  }
  FUN_000006d8(0x10,DAT_0000c830,&DAT_0000c818);
  return;
}



/* Function: FUN_0000c594 */

void FUN_0000c594(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    FUN_000006e4(s_PNULL____sm_0000c81c,&DAT_0000c810,0x122);
  }
  iVar2 = FUN_00000650();
  puVar1 = DAT_0000c82c;
  if (iVar2 == 0) {
    return;
  }
  bVar3 = param_1 == *(int *)(DAT_0000c828 + 0x34);
  if (bVar3) {
    *DAT_0000c82c = 0;
    iVar2 = puVar1[1];
  }
  else {
    DAT_0000c82c[2] = 0;
    iVar2 = puVar1[3];
  }
  if (bVar3) {
    puVar1[1] = iVar2 + -1;
  }
  else {
    puVar1[3] = iVar2 + -1;
  }
  iVar2 = FUN_000007dc(param_1);
  if (iVar2 != 0) {
    FUN_000006e4(s_ret____SCI_SUCCESS_0000c834,&DAT_0000c810,0x132);
    return;
  }
  return;
}



/* Function: FUN_0000c610 */

void FUN_0000c610(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined1 auStack_40 [32];
  undefined1 local_20;
  
  FUN_0001f538(auStack_40,0x30);
  FUN_000006bc(DAT_0000c848,10);
  FUN_00010098(0);
  puVar1 = DAT_0000c828;
  iVar3 = *(int *)(DAT_0000c828 + 0x2c);
  local_20 = 0;
  *DAT_0000c828 = 0;
  FUN_0000fbc4(auStack_40);
  FUN_0000c594(*(undefined4 *)(puVar1 + 0x34),1);
  FUN_0000c594(*(undefined4 *)(DAT_0000c84c + iVar3 * 0x1c),1);
  pcVar2 = *(code **)(puVar1 + 0x30);
  if (pcVar2 == Reset) {
    FUN_000006d8(0x10,DAT_0000c850,&DAT_0000c818);
  }
  else {
    (*pcVar2)(1);
  }
  return;
}



/* Function: FUN_0000c6a4 */

void FUN_0000c6a4(int param_1,short param_2,short param_3,short param_4,short param_5)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  short local_a0;
  short local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  short local_98;
  short local_96;
  short local_94;
  short local_92;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_80;
  uint local_7c;
  uint local_78;
  uint local_68;
  undefined1 local_64;
  undefined1 local_63;
  short local_60;
  short local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_0001f538(&local_60,0x30);
  FUN_0001f538(&local_a0,0x40);
  local_30 = 0;
  local_2c = 0;
  FUN_00010010();
  psVar3 = (short *)(DAT_0000c854 + param_1 * 0x150);
  iVar4 = 0;
  do {
    if (*psVar3 == 0) {
      local_34 = 0;
    }
    else {
      local_34 = 1;
      local_50 = *(undefined4 *)(psVar3 + 2);
      local_4c = *(undefined4 *)(psVar3 + 6);
      local_48 = FUN_0001fdbc((char)psVar3[0xe]);
      local_44 = (uint)*(byte *)(psVar3 + 0x11);
      local_60 = psVar3[0xd];
      local_52 = psVar3[9];
      local_5c = 0;
      local_5a = 0;
      local_5e = (psVar3[0xb] - local_52) + 1;
      local_54 = psVar3[8];
      local_58 = (psVar3[10] - local_54) + 1;
      local_56 = local_5e;
    }
    iVar1 = 0;
    psVar2 = &local_60;
    while( true ) {
      FUN_0000fad0(iVar1,psVar2);
      local_30 = CONCAT22(param_3,param_2);
      local_2c = CONCAT22((param_5 - param_3) + 1,(param_4 - param_2) + 1);
      FUN_0000fe44(&local_30);
      iVar1 = iVar4 + 1;
      if (5 < iVar1) {
        return;
      }
      iVar4 = iVar1;
      if (iVar1 == 0) break;
      psVar2 = psVar3 + iVar1 * 0x1c;
      if (*psVar2 == 0) {
        local_64 = 0;
        psVar2 = &local_a0;
      }
      else {
        local_64 = 1;
        local_84 = *(undefined1 *)((int)psVar2 + 0x1f);
        local_8c = *(undefined4 *)(psVar2 + 4);
        local_7c = (uint)*(byte *)((int)psVar2 + 0x21);
        local_68 = (uint)(ushort)psVar2[0xc];
        local_63 = (undefined1)psVar2[0x10];
        local_94 = psVar2[8];
        local_92 = psVar2[9];
        local_80 = FUN_0001fdbc((char)psVar2[0xe]);
        local_88 = *(undefined4 *)(psVar2 + 0x12);
        local_78 = (uint)*(byte *)(psVar2 + 0x11);
        local_90 = *(undefined4 *)(psVar2 + 2);
        local_a0 = psVar2[0xd];
        local_9c = 0;
        local_9a = 0;
        local_9e = (psVar2[0xb] - psVar2[9]) + 1;
        local_98 = (psVar2[10] - psVar2[8]) + 1;
        psVar2 = &local_a0;
        local_96 = local_9e;
      }
    }
  } while( true );
}



/* Function: FUN_0000c8e4 */

undefined4 FUN_0000c8e4(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(uint *)(DAT_0000c828 + 0x24) <= param_1) {
    FUN_000006e4(s_lcd_id_<_s_lcd_used_num_0000cb80,&DAT_0000c810,0x68b);
  }
  if (5 < param_2) {
    FUN_000006e4(s_blk_num<BLOCK_SUM_0000cb98,&DAT_0000c810,0x68c);
  }
  uVar1 = *(undefined4 *)(DAT_0000c84c + param_1 * 0x1c);
  FUN_0000c504(uVar1,0);
  *(undefined2 *)(DAT_0000c854 + param_1 * 0x150 + param_2 * 0x38) = 1;
  FUN_0000c594(uVar1,0);
  return 0;
}



/* Function: FUN_0000c978 */

undefined4 FUN_0000c978(uint param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(uint *)(DAT_0000c828 + 0x24) <= param_1) {
    FUN_000006e4(s_lcd_id_<_s_lcd_used_num_0000cb80,&DAT_0000c810,0x673);
  }
  if (5 < param_2) {
    FUN_000006e4(s_blk_num_<_BLOCK_SUM_0000cbac,&DAT_0000c810,0x674);
  }
  if (param_3 == 0) {
    FUN_000006e4(s_buf_ptr____PNULL_0000cbc0,&DAT_0000c810,0x675);
  }
  uVar1 = *(undefined4 *)(DAT_0000c84c + param_1 * 0x1c);
  FUN_0000c504(uVar1,0);
  *(int *)(DAT_0000c854 + param_1 * 0x150 + param_2 * 0x38 + 4) = param_3;
  FUN_0000c594(uVar1,0);
  return 0;
}



/* Function: FUN_0000ca24 */

undefined8
FUN_0000ca24(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,uint param_6,
            uint param_7,undefined4 param_8)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  if (*(uint *)(DAT_0000c828 + 0x24) <= param_1) {
    FUN_000006e4(s_lcd_id_<_s_lcd_used_num_0000cb80,&DAT_0000c810,0x62f,param_4,0,param_3,param_4);
  }
  if (5 < param_2) {
    uVar3 = FUN_000006ec(s_blk_num__d_0000cbd4,param_2);
    FUN_000006e8(s__blk_num<BLOCK_SUM)_0000cbe0,&DAT_0000c810,0x630,uVar3);
  }
  uVar2 = (undefined2)param_3;
  bVar6 = (param_3 & 0xffff) < (param_4 & 0xffff);
  uVar1 = param_4;
  if (bVar6) {
    param_3 = param_3 >> 0x10;
    uVar1 = param_4 >> 0x10;
  }
  if (!bVar6 || uVar1 <= param_3) {
    uVar3 = 2;
    goto LAB_0000cb64;
  }
  uVar3 = *(undefined4 *)(DAT_0000c84c + param_1 * 0x1c);
  FUN_0000c504(uVar3,uVar7);
  bVar6 = param_7 >> 0x18 == 0;
  iVar4 = DAT_0000c854 + param_1 * 0x150 + param_2 * 0x38;
  *(char *)(iVar4 + 0x1f) = (char)(param_6 >> 0x18);
  *(short *)(iVar4 + 0x1a) = (short)((uint)param_5 >> 0x10);
  *(char *)(iVar4 + 0x1d) = (char)(param_6 >> 8);
  *(undefined2 *)(iVar4 + 0x10) = uVar2;
  uVar5 = param_6 & 0xff;
  *(short *)(iVar4 + 0x12) = (short)param_3;
  *(short *)(iVar4 + 0x14) = (short)param_4;
  *(short *)(iVar4 + 0x16) = (short)uVar1;
  *(short *)(iVar4 + 0x18) = (short)param_5;
  *(char *)(iVar4 + 0x1c) = (char)param_6;
  if (!bVar6) {
    uVar5 = param_7 >> 0x10;
  }
  *(char *)(iVar4 + 0x20) = (char)param_7;
  *(char *)(iVar4 + 0x21) = (char)(param_7 >> 8);
  *(undefined4 *)(iVar4 + 0x28) = 0;
  *(undefined4 *)(iVar4 + 0x2c) = 0;
  *(undefined4 *)(iVar4 + 0x30) = 0;
  if (bVar6) {
    if (uVar5 == 2 || uVar5 == 3) {
      uVar5 = 2;
      goto LAB_0000cb48;
    }
    *(undefined1 *)(iVar4 + 0x22) = 0;
  }
  else {
LAB_0000cb48:
    *(char *)(iVar4 + 0x22) = (char)uVar5;
  }
  *(undefined4 *)(iVar4 + 0x24) = param_8;
  FUN_0000c594(uVar3,uVar7);
  uVar3 = 0;
LAB_0000cb64:
  return CONCAT44(uVar7,uVar3);
}



/* Function: FUN_0000cbfc */

undefined4 FUN_0000cbfc(void)

{
  return DAT_0000cffc;
}



/* Function: FUN_0000cc04 */

undefined4 FUN_0000cc04(uint param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  
  if (*(uint *)(DAT_0000c828 + 0x24) <= param_1) {
    FUN_000006e4(s_lcd_id_<_s_lcd_used_num_0000cb80,DAT_0000d000,0x35a);
  }
  *param_2 = 0xf800;
  param_2[1] = 0x7e0;
  param_2[2] = 0x1f;
  *(undefined2 *)(param_2 + 3) = 0x10;
  *(undefined2 *)((int)param_2 + 0x12) = 0;
  *(undefined2 *)(param_2 + 5) = 0x3f;
  *(undefined2 *)((int)param_2 + 0x16) = 10;
  iVar3 = DAT_0000d004;
  *(undefined2 *)(param_2 + 7) =
       *(undefined2 *)(*(int *)(*(int *)(DAT_0000d004 + param_1 * 4) + 8) + 0x1c);
  *(undefined2 *)((int)param_2 + 0x1e) =
       *(undefined2 *)(*(int *)(*(int *)(iVar3 + param_1 * 4) + 8) + 0x1e);
  puVar4 = *(ushort **)(*(int *)(iVar3 + param_1 * 4) + 8);
  uVar1 = *puVar4;
  uVar2 = puVar4[2];
  FUN_00010834(param_1,(int)param_2 + 0xe,param_2 + 4);
  if ((uVar1 < *(ushort *)((int)param_2 + 0xe)) || (uVar2 < *(ushort *)(param_2 + 4))) {
    FUN_000006d8(0x10,DAT_0000d00c,&DAT_0000d008,param_1);
  }
  uVar5 = DAT_0000cffc;
  if ((param_1 == 0) || (uVar5 = DAT_0000cff8, param_1 == 1)) {
    param_2[6] = uVar5;
  }
  return 0;
}



/* Function: FUN_0000cd04 */

void FUN_0000cd04(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = *(int *)(*(int *)(*DAT_0000d004 + 8) + 0x18);
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x28);
  if (UNRECOVERED_JUMPTABLE != Reset && iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0000cd24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000c2c8(0x10,0);
  return;
}



/* Function: FUN_0000cd34 */

undefined4 FUN_0000cd34(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  short local_6e;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 auStack_50 [14];
  short local_42;
  short local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_0001f538(auStack_50,0x20);
  FUN_0001f538(&local_78,0x28);
  iVar3 = DAT_0000c828;
  local_28 = 0;
  local_30 = 0;
  local_2c = 0;
  if (*(int *)(DAT_0000c828 + 0x24) == 0) {
    FUN_0000c264(0);
    piVar11 = (int *)(iVar3 + 0x48);
    uVar10 = 0;
    *(undefined4 *)(iVar3 + 0x28) = 1;
    do {
      iVar4 = FUN_00010634(uVar10);
      piVar11[uVar10] = iVar4;
      if (iVar4 != 0) {
        if (*(int *)(*(int *)(iVar4 + 8) + 0x18) == 0) {
          FUN_000006e4(s_PNULL____s_lcd_spec_info_ptr_lcd_0000d010,DAT_0000d000,0x2b4);
        }
        puVar5 = (undefined2 *)piVar11[uVar10];
        *(undefined4 *)(iVar3 + 0x40 + uVar10 * 4) = 1;
        FUN_0000c32c(*puVar5,puVar5[1],uVar10 & 0xffff);
        *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 2);
    if ((2 < *(uint *)(iVar3 + 0x24)) || (*(uint *)(iVar3 + 0x24) == 0)) {
      FUN_000006e4(s__s_lcd_used_num_<__LCD_SUPPORT_M_0000d04c,DAT_0000d000,0x2c0);
    }
    FUN_0000ff6c();
    for (uVar10 = 0; uVar10 < *(uint *)(iVar3 + 0x24); uVar10 = uVar10 + 1) {
      FUN_0000f844(uVar10,1,0);
    }
    FUN_0000fdf4(0);
    uVar1 = **(undefined2 **)(*piVar11 + 8);
    uVar2 = (*(undefined2 **)(*piVar11 + 8))[2];
    *(undefined4 *)(iVar3 + 0x38) = 0x80;
    *(undefined4 *)(iVar3 + 0x3c) = 0xa0;
    local_28 = 0x2800280;
    local_30 = 0;
    local_2c = CONCAT22(uVar2,uVar1);
    FUN_0000fe28(&local_28);
    FUN_0000fe44(&local_30);
    FUN_0000fe18();
    iVar4 = DAT_0000c84c;
    for (uVar10 = 0; uVar10 < *(uint *)(iVar3 + 0x24); uVar10 = uVar10 + 1) {
      FUN_000006e4(DAT_0000d08c,DAT_0000d000,0x2e0);
      *(undefined4 *)(iVar4 + uVar10 * 0x1c) = 0;
      iVar6 = iVar4 + uVar10 * 0x1c;
      *(undefined4 *)(iVar6 + 4) = 0;
      puVar8 = (undefined4 *)piVar11[uVar10];
      uVar7 = *puVar8;
      uVar9 = puVar8[1];
      uVar12 = puVar8[2];
      *(undefined4 *)(iVar6 + 8) = 0;
      *(undefined4 *)(iVar6 + 0xc) = 0;
      *(undefined4 *)(iVar6 + 0x10) = uVar7;
      *(undefined4 *)(iVar6 + 0x14) = uVar9;
      *(undefined4 *)(iVar6 + 0x18) = uVar12;
      FUN_00012c38(*(undefined2 *)puVar8,*(undefined4 *)(puVar8[2] + 0x10));
    }
    FUN_0000cd04();
    uVar7 = FUN_00001c78();
    uVar10 = 0;
    do {
      if (*(int *)(iVar3 + 0x40 + uVar10 * 4) != 0) {
        FUN_0000c2f0(piVar11[uVar10],uVar7,uVar10);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 2);
    for (uVar10 = 0; uVar10 < *(uint *)(iVar3 + 0x24); uVar10 = uVar10 + 1) {
      FUN_0000cc04(uVar10,auStack_50);
      local_6c = 2;
      local_70 = 0;
      local_6e = local_42;
      local_69 = 0xff;
      local_68 = 0;
      local_6a = 0;
      local_78 = 0;
      local_74 = CONCAT22(local_40 + -1,local_42 + -1);
      local_67 = 1;
      local_6b = 1;
      FUN_0001f478(auStack_98,&local_70,0x20);
      FUN_0000ca24(uVar10,0,local_78,local_74);
      FUN_0000c978(uVar10,0,local_38);
      FUN_0000c8e4(uVar10,0);
    }
    for (uVar10 = 0; uVar10 < *(uint *)(iVar3 + 0x24); uVar10 = uVar10 + 1) {
      puVar8 = *(undefined4 **)(*(int *)(piVar11[uVar10] + 8) + 0x18);
      if (puVar8 != (undefined4 *)0x0) {
        (*(code *)*puVar8)();
        *(undefined4 *)(iVar4 + 0xc) = 0;
      }
    }
  }
  return 0;
}



/* Function: FUN_0000d0cc */

undefined4 FUN_0000d0cc(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_0000d004;
  for (uVar3 = 0; iVar2 = DAT_0000f9d0, uVar3 < *(uint *)(iVar1 + -0x24); uVar3 = uVar3 + 1 & 0xffff
      ) {
    iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + uVar3 * 4) + 8) + 0x18);
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 0x1c))();
    }
  }
  if (*(char *)(DAT_0000f9d0 + 0x16d) != '\0') {
    *(undefined1 *)(DAT_0000f9d0 + 0x16d) = 0;
    *(undefined4 *)(iVar2 + -0x10) = 0;
    *(undefined4 *)(iVar2 + -0xc) = 0;
    *(undefined4 *)(iVar2 + -8) = 0;
    *(undefined4 *)(iVar2 + -4) = 0;
  }
  return 0;
}



/* Function: FUN_0000d114 */

undefined4 FUN_0000d114(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0000c828;
  if (*(uint *)(DAT_0000c828 + 0x24) <= param_1) {
    FUN_000006e4(DAT_0000d390,DAT_0000d000,0x73f);
  }
  iVar2 = DAT_0000c84c;
  uVar3 = *(undefined4 *)(DAT_0000c84c + param_1 * 0x1c);
  FUN_0000c504(uVar3,0);
  iVar2 = iVar2 + param_1 * 0x1c;
  if (*(int *)(iVar2 + 4) != param_2) {
    FUN_0000c504(*(undefined4 *)(iVar1 + 0x34),0);
    *(int *)(iVar2 + 4) = param_2;
    FUN_0000c594(*(undefined4 *)(iVar1 + 0x34),0);
  }
  FUN_0000c594(uVar3,0);
  return 0;
}



/* Function: FUN_0000d19c */

undefined4 FUN_0000d19c(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_4 <= param_2 || param_5 <= param_3) {
    uVar5 = param_5;
    uVar2 = FUN_000006ec(s_LCD_InvalidateRect_l__d_t__d_r___0000d394);
    FUN_000006e8(s____left<right)_&&_(top<bottom))_0000d3bc,DAT_0000d000,0x38d,uVar2,uVar5);
  }
  iVar3 = FUN_00000650();
  if (iVar3 == 0) {
    FUN_0000d114(param_1,0);
  }
  iVar3 = FUN_0000e2c4(param_1);
  if (iVar3 == 0) {
    FUN_000100bc(0);
    pcVar1 = DAT_0000c828;
    iVar3 = DAT_0000c84c + param_1 * 0x1c;
    iVar4 = *(int *)(iVar3 + 4);
    *(int *)(DAT_0000c828 + 0x2c) = param_1;
    if (*pcVar1 == '\0') {
      (**(code **)(*(int *)(*(int *)(iVar3 + 0x18) + 0x18) + 0x14))(param_2,param_3,param_4,param_5)
      ;
    }
    FUN_0000c6a4(param_1,param_2,param_3,param_4,param_5);
    FUN_00010044(0,DAT_0000d3dc);
    FUN_00010020(0,DAT_0000d3e0);
    if (iVar4 == 0) {
      FUN_000006bc(DAT_0000c848,0xd);
      iVar3 = FUN_00000650();
      if (iVar3 == 0) {
        FUN_000100bc(1);
        FUN_00010098(0);
        FUN_000006d8(0x10,DAT_0000d3e4,s__s_lcd_used_num_<__LCD_SUPPORT_M_0000d04c + 0x3c);
      }
      else {
        FUN_000100bc(0);
      }
    }
    iVar3 = FUN_0000fec4(param_1,param_2,param_3,param_4,param_5);
    if (iVar3 != 0) {
      uVar2 = FUN_000006ec(s_lcd_invalidate_timeout_0000d3e8);
      FUN_000006e8(&LAB_0000d400,DAT_0000d000,0x3d5,uVar2);
    }
    if (iVar4 == 0) {
      iVar3 = FUN_00000650();
      if (iVar3 != 0) {
        FUN_0000feb8();
      }
      iVar3 = FUN_0000feb8();
      if (iVar3 != 0) {
        FUN_0000c610();
      }
    }
  }
  return 0;
}



/* Function: FUN_0000d334 */

undefined4 FUN_0000d334(undefined4 param_1)

{
  undefined1 auStack_2c [14];
  short local_1e;
  short local_1c;
  
  FUN_0001f538(auStack_2c,0x20);
  FUN_0000cc04(param_1,auStack_2c);
  FUN_0000d19c(param_1,0,0,local_1e + -1,local_1c + -1);
  return 0;
}



/* Function: FUN_0000d4e0 */

undefined4
FUN_0000d4e0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(uint *)(DAT_0000c828 + 0x24) <= param_1) {
    FUN_000006e4(DAT_0000d390,DAT_0000d000,0x497);
  }
  iVar1 = DAT_0000d004;
  if (*(int *)(*(int *)(*(int *)(DAT_0000d004 + param_1 * 4) + 8) + 0x18) == 0) {
    uVar2 = 3;
  }
  else {
    uVar3 = *(undefined4 *)(DAT_0000c84c + param_1 * 0x1c);
    FUN_0000c504(uVar3,1);
    uVar2 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + param_1 * 4) + 8) + 0x18) + 0x10))
                      (param_2,param_3,param_4,param_5);
    FUN_0000c594(uVar3,1);
  }
  return uVar2;
}



/* Function: FUN_0000d598 */

undefined4 FUN_0000d598(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(uint *)(DAT_0000c828 + 0x24) <= param_1) {
    FUN_000006e4(DAT_0000d390,DAT_0000d000,0x6d8);
  }
  if (5 < param_2) {
    FUN_000006e4(DAT_0000dc04,DAT_0000d000,0x6d9);
  }
  uVar1 = *(undefined4 *)(DAT_0000c84c + param_1 * 0x1c);
  FUN_0000c504(uVar1,0);
  *(undefined2 *)(DAT_0000c854 + param_1 * 0x150 + param_2 * 0x38) = 0;
  FUN_0000c594(uVar1);
  return 0;
}



/* Function: FUN_0000d628 */

void FUN_0000d628(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  ushort local_4e;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 auStack_30 [14];
  ushort local_22;
  ushort local_20;
  undefined2 *local_18;
  
  if (*(uint *)(DAT_0000c828 + 0x24) <= param_1) {
    FUN_000006e4(DAT_0000d390,DAT_0000d000,0x4ef);
  }
  FUN_0000cc04(param_1,auStack_30);
  puVar2 = local_18;
  for (uVar1 = 0;
      uVar1 <= (uint)local_20 * (uint)local_22 && (uint)local_20 * (uint)local_22 - uVar1 != 0;
      uVar1 = uVar1 + 1) {
    *puVar2 = (short)param_2;
    puVar2 = puVar2 + 1;
  }
  FUN_0000fdf4(param_2);
  local_4c = 2;
  local_4b = 1;
  local_4a = 0;
  local_50 = 0;
  local_47 = 1;
  local_4e = local_22;
  local_58 = 0;
  local_54 = CONCAT22(local_20 - 1,local_22 - 1);
  local_49 = 0xff;
  local_48 = 0;
  FUN_0001f478(auStack_78,&local_50,0x20);
  FUN_0000ca24(param_1,0,local_58,local_54);
  FUN_0000d598(param_1,0);
  FUN_0000d598(param_1,1);
  FUN_0000d598(param_1,2);
  FUN_0000d598(param_1,3);
  FUN_0000c978(param_1,0,local_18);
  FUN_0000d334(param_1);
  return;
}



/* Function: FUN_0000d758 */

void FUN_0000d758(int param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined1 auStack_38 [14];
  ushort local_2a;
  int local_20;
  
  FUN_0000cc04(0,auStack_38);
  uVar2 = 0;
  uVar1 = *(undefined2 *)(DAT_0000c828 + 2);
  do {
    if ((param_3 & 1 << (uVar2 & 0xff)) != 0) {
      *(undefined2 *)(local_20 + param_2 * (uint)local_2a * 2 + param_1 * 2 + uVar2 * 2) = uVar1;
    }
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 8);
  return;
}



/* Function: FUN_0000d9a8 */

undefined4 FUN_0000d9a8(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(uint *)(DAT_0000dc14 + 0x24) <= param_1) {
    FUN_000006e4(DAT_0000d390,DAT_0000d000,0x6a2);
  }
  uVar1 = *(undefined4 *)(DAT_0000dc0c + param_1 * 0x1c);
  FUN_0000c504(uVar1,0);
  FUN_0001f478(param_2,DAT_0000dc18 + param_1 * 0x150,0xe0);
  FUN_0000c594(uVar1,0);
  return 0;
}



/* Function: FUN_0000daac */

undefined4 FUN_0000daac(uint param_1,uint param_2)

{
  if (*(uint *)(DAT_0000dc14 + 0x24) <= param_1) {
    FUN_000006e4(DAT_0000d390,DAT_0000d000,0x6ed);
  }
  if (5 < param_2) {
    FUN_000006e4(DAT_0000dc98,DAT_0000d000,0x6ee);
  }
  return *(undefined4 *)(DAT_0000dc18 + param_1 * 0x150 + param_2 * 0x38 + 4);
}



/* Function: FUN_0000db10 */

undefined4 FUN_0000db10(uint param_1,uint param_2)

{
  if (*(uint *)(DAT_0000dc14 + 0x24) <= param_1) {
    FUN_000006e4(DAT_0000d390,DAT_0000d000,0x6fe);
  }
  if (5 < param_2) {
    FUN_000006e4(DAT_0000dc98,DAT_0000d000,0x6ff);
  }
  return *(undefined4 *)(DAT_0000dc18 + param_1 * 0x150 + param_2 * 0x38 + 0xc);
}



/* Function: FUN_0000db74 */

undefined4 FUN_0000db74(uint param_1,uint param_2,int param_3)

{
  if (*(uint *)(DAT_0000dc14 + 0x24) <= param_1) {
    FUN_000006e4(DAT_0000d390,DAT_0000d000,0x711);
  }
  if (5 < param_2) {
    FUN_000006e4(DAT_0000dc98,DAT_0000d000,0x712);
  }
  if (param_3 == 0) {
    FUN_000006e4(s_cfg_ptr____PNULL_0000dc9c,DAT_0000d000,0x713);
  }
  FUN_0001f478(param_3,DAT_0000dc18 + param_1 * 0x150 + param_2 * 0x38 + 0x10,0x28);
  return 0;
}



/* Function: FUN_0000dcbc */

undefined4 FUN_0000dcbc(uint param_1)

{
  undefined4 uVar1;
  
  if (*(uint *)(DAT_0000dc14 + 0x24) <= param_1) {
    uVar1 = FUN_000006ec(s_LCD_GetBrushMode_lcd_id____d_0000df08,param_1);
    FUN_000006e8(s__lcd_id_<_s_lcd_used_num)_0000dc40,DAT_0000d000,0x75c,uVar1);
  }
  return *(undefined4 *)(DAT_0000dc0c + param_1 * 0x1c + 4);
}



/* Function: FUN_0000dd08 */

undefined4 FUN_0000dd08(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_40 [36];
  
  bVar1 = false;
  if (DAT_0000df28 < param_1 - 1U) {
    FUN_000006e4(s__ahb_clk_>_0______ahb_clk<_10000_0000df2c,DAT_0000d000,0x76d);
  }
  FUN_000006d8(0x10,DAT_0000df54,s_LCD_GetBlockIsEnable_blk_num_____0000dc5c + 0x20,param_1);
  iVar3 = DAT_0000dc14;
  iVar2 = DAT_0000dc0c;
  uVar4 = 0;
  do {
    if (*(uint *)(DAT_0000dc14 + 0x24) <= uVar4) {
      FUN_0000c504(*(undefined4 *)(DAT_0000dc14 + 0x34),0);
LAB_0000dd98:
      for (uVar4 = 0; uVar4 < *(uint *)(iVar3 + 0x24); uVar4 = uVar4 + 1) {
        FUN_0000cc04(uVar4,auStack_40);
        FUN_0000c2f0(iVar2 + uVar4 * 0x1c + 0x10,param_1,uVar4);
      }
      if (!bVar1) {
        FUN_0000c594(*(undefined4 *)(iVar3 + 0x34),0);
      }
      return 0;
    }
    if (*(int *)(DAT_0000dc0c + uVar4 * 0x1c + 0xc) == 0) {
      bVar1 = true;
      goto LAB_0000dd98;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}



/* Function: FUN_0000ddf0 */

undefined4 FUN_0000ddf0(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_0000dc14;
  FUN_0000c504(*(undefined4 *)(DAT_0000dc14 + 0x34),0);
  *puVar1 = *(undefined1 *)(param_2 + 0x20);
  FUN_0000fbc4(param_2);
  FUN_0000c594(*(undefined4 *)(puVar1 + 0x34),0);
  return 0;
}



/* Function: FUN_0000de2c */

undefined4 FUN_0000de2c(undefined4 param_1,undefined4 *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  short local_3c;
  short local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_0001f538(&local_4c,0x30);
  sVar1 = *(short *)(param_2 + 1);
  sVar2 = *(short *)(param_2 + 2);
  sVar3 = *(short *)((int)param_2 + 6);
  sVar4 = *(short *)((int)param_2 + 10);
  local_48 = (sVar2 - sVar1) + 1;
  local_46 = (sVar4 - sVar3) + 1;
  local_44 = *(undefined2 *)(param_2 + 3);
  local_42 = *(undefined2 *)((int)param_2 + 0xe);
  local_40 = *(undefined2 *)(param_2 + 4);
  local_3e = *(undefined2 *)((int)param_2 + 0x12);
  local_38 = param_2[6];
  local_34 = *param_2;
  local_2c = 1;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4c = sVar1;
  local_4a = sVar3;
  local_3c = local_48;
  local_3a = local_46;
  FUN_0000ddf0(param_1,&local_4c);
  FUN_0000d19c(param_1,sVar1,sVar3,sVar2,sVar4);
  local_2c = 0;
  FUN_0000ddf0(param_1,&local_4c);
  return 0;
}



/* Function: FUN_0000dfc4 */

undefined4 FUN_0000dfc4(uint param_1,int param_2)

{
  if (*(uint *)(DAT_0000dc14 + 0x24) <= param_1) {
    FUN_000006e4(DAT_0000d390,DAT_0000d000,0x7e5);
  }
  if (param_2 != 1) {
    FUN_000006e4(s_blk_num____BLOCK_ID_WITH_SINGLE__0000e174,DAT_0000e1a0,0x7e6);
  }
  return *(undefined4 *)(DAT_0000dc18 + param_1 * 0x150 + param_2 * 0x38 + 8);
}



/* Function: FUN_0000e028 */

undefined4 FUN_0000e028(uint param_1,int param_2,undefined4 param_3)

{
  if (*(uint *)(DAT_0000dc14 + 0x24) <= param_1) {
    FUN_000006e4(DAT_0000d390,DAT_0000e1a0,0x7f8);
  }
  if (param_2 != 0) {
    FUN_000006e4(s_blk_num____BLOCK_IMAGE_ID_0000e1a4,DAT_0000e1a0,0x7f9);
  }
  *(undefined4 *)(DAT_0000dc18 + param_1 * 0x150 + param_2 * 0x38 + 0xc) = param_3;
  return 0;
}



/* Function: FUN_0000e094 */

undefined4 FUN_0000e094(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_0000dc14;
  FUN_0000c504(*(undefined4 *)(DAT_0000dc14 + 0x34),0);
  FUN_0000f844(param_1,param_2,param_3);
  FUN_0000c594(*(undefined4 *)(iVar1 + 0x34),0);
  return 0;
}



/* Function: FUN_0000e0dc */

void FUN_0000e0dc(undefined4 param_1,undefined4 param_2)

{
  FUN_0000c3a4(param_2,param_1);
  FUN_0000c4b0(param_1,1);
  return;
}



/* Function: FUN_0000e144 */

undefined4 FUN_0000e144(void)

{
  FUN_0000c3ec();
  return 0;
}



/* Function: FUN_0000e154 */

undefined4 FUN_0000e154(void)

{
  FUN_0000c3a4();
  return 0;
}



/* Function: FUN_0000e164 */

undefined4 FUN_0000e164(void)

{
  FUN_0000c3c8();
  return 0;
}



/* Function: FUN_0000e1c0 */

void FUN_0000e1c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00000650();
  if (iVar1 != 0) {
    FUN_00000690();
    return;
  }
  FUN_00000664(param_1);
  return;
}



/* Function: FUN_0000e218 */

void FUN_0000e218(void)

{
  int iVar1;
  undefined1 auStack_34 [14];
  short local_26;
  short local_24;
  
  FUN_0000cc04(0,auStack_34);
  iVar1 = DAT_0000dc0c;
  (**(code **)(*(int *)(*(int *)(DAT_0000dc0c + 0x18) + 0x18) + 0x24))(0);
  (**(code **)(*(int *)(*(int *)(iVar1 + 0x18) + 0x18) + 0x14))(0,0,local_26 + -1,local_24 + -1);
  FUN_0000c8e4(0);
  FUN_000100bc(1);
  FUN_0000c6a4(0,0,0,local_26 + -1,local_24 + -1);
  FUN_0000fec4(0,0,0,local_26 + -1,local_24 + -1);
  return;
}



/* Function: FUN_0000e2c4 */

undefined4 FUN_0000e2c4(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0000dc14;
  if (*(uint *)(DAT_0000dc14 + 0x24) <= param_1) {
    FUN_000006d8(0x10,DAT_0000e3a8,&DAT_0000e3a4,param_1);
    return 2;
  }
  iVar2 = DAT_0000dc0c + param_1 * 0x1c;
  uVar3 = *(undefined4 *)(DAT_0000dc0c + param_1 * 0x1c);
  FUN_0000c504(uVar3,0);
  FUN_0000c504(*(undefined4 *)(iVar1 + 0x34),0);
  if (*(int *)(iVar2 + 0xc) == 1) {
    FUN_0000c594(*(undefined4 *)(iVar1 + 0x34),0);
    FUN_0000c594(uVar3,0);
    FUN_000006d8(0x10,DAT_0000e3b4,&DAT_0000e3ac);
    return 4;
  }
  if (*(int *)(*(int *)(iVar2 + 0x18) + 0x18) == 0) {
    FUN_0000c594(*(undefined4 *)(iVar1 + 0x34),0);
    FUN_0000c594(uVar3,0);
    FUN_000006d8(0x10,DAT_0000e3b0,&DAT_0000e3ac);
    return 3;
  }
  return 0;
}



/* Function: FUN_0000e3b8 */

undefined4 FUN_0000e3b8(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
    return 3;
  default:
    return 0;
  }
}



/* Function: FUN_0000e3f4 */

undefined4 FUN_0000e3f4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    goto LAB_0000e434;
  case 4:
LAB_0000e434:
    uVar1 = 4;
    goto LAB_0000e458;
  case 5:
    goto LAB_0000e43c;
  case 6:
LAB_0000e43c:
    uVar1 = 2;
    goto LAB_0000e458;
  case 7:
    break;
  default:
    FUN_000006d8(0x10,DAT_0000e63c,&DAT_0000e638,param_1);
    goto LAB_0000e458;
  }
  uVar1 = 1;
LAB_0000e458:
  *param_2 = uVar1;
  return 1;
}



/* Function: FUN_0000e464 */

undefined4 FUN_0000e464(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  switch(param_1) {
  case 0:
    goto LAB_0000e4a4;
  case 1:
    uVar1 = 3;
    uVar2 = 1;
    break;
  case 2:
    goto LAB_0000e4a4;
  case 3:
    break;
  case 4:
    break;
  case 5:
    goto LAB_0000e4b8;
  case 6:
LAB_0000e4b8:
    uVar1 = 1;
    break;
  case 7:
LAB_0000e4a4:
    uVar1 = 3;
    break;
  default:
    FUN_000006d8(0x10,DAT_0000e640,&DAT_0000e638,param_1);
  }
  *param_2 = uVar1;
  *param_3 = uVar2;
  return 1;
}



/* Function: FUN_0000e4e4 */

undefined1 FUN_0000e4e4(uint param_1,uint param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_r1;
  uint extraout_r3;
  uint extraout_r3_00;
  uint uVar6;
  uint unaff_r5;
  bool bVar7;
  uint local_18;
  uint local_14;
  
  puVar1 = DAT_0000e644;
  local_18 = 0;
  local_14 = 0;
  if ((char)DAT_0000e644[0x16] == '\0') {
    return 0;
  }
  if (*(int *)(DAT_0000e644 + 8) == 0) {
    uVar2 = FUN_000006ec(s_src_y_address_is_null_0000e648);
    FUN_000006e8(s_layer_ptr_>src_base_addr_y_addr_0000e66c,s_lcdc_app_c_0000e660,0x13b,uVar2);
  }
  if ((puVar1[8] & 3) != 0) {
    uVar2 = FUN_000006ec(s_y_address_is_not_word_aligned_0000e68c);
    FUN_000006e8(s_0_____layer_ptr_>src_base_addr_y_0000e6ac,s_lcdc_app_c_0000e660,0x13d,uVar2);
  }
  uVar3 = *(uint *)(puVar1 + 0xc);
  if (uVar3 < 2) {
    if (*(int *)(puVar1 + 10) == 0) {
      uVar2 = FUN_000006ec(s_src_y_address_is_null_0000e648);
      FUN_000006e8(s_layer_ptr_>src_base_addr_uv_addr_0000e704,s_lcdc_app_c_0000e660,0x141,uVar2);
    }
    if ((puVar1[10] & 3) != 0) {
      uVar2 = FUN_000006ec(s_u_address_is_not_word_aligned_0000e728);
      FUN_000006e8(s_0_____layer_ptr_>src_base_addr_u_0000e748,s_lcdc_app_c_0000e660,0x143,uVar2);
    }
    uVar3 = *(uint *)(puVar1 + 0xc);
    if (1 < uVar3) goto LAB_0000e564;
  }
  else {
LAB_0000e564:
    if ((uVar3 != 2 && uVar3 != 3) && ((uVar3 != 4 && uVar3 != 5) && uVar3 != 6)) {
      uVar2 = FUN_000006ec(s_LCDC_img_data_format_err_format__0000e6dc);
      FUN_000006e8(&DAT_0000e700,s_lcdc_app_c_0000e660,0x14d,uVar2);
    }
  }
  FUN_0000e464(*(undefined4 *)(puVar1 + 0xc),&local_18,&local_14);
  uVar3 = (uint)*puVar1;
  if ((uVar3 & local_18) == 0) {
    uVar4 = local_18;
    if (uVar3 != 0) {
      uVar4 = (uint)puVar1[1];
    }
    uVar6 = extraout_r3;
    if (uVar3 == 0 || uVar4 == 0) goto LAB_0000e778;
  }
  else {
LAB_0000e778:
    uVar2 = FUN_000006ec(s_LCDC_img_src_size_not_algin_data_0000eb2c,*(undefined4 *)(puVar1 + 0xc),
                         uVar3,puVar1[1]);
    FUN_000006e8(&DAT_0000e700,s_lcdc_app_c_0000e660,0x155,uVar2);
    uVar6 = extraout_r3_00;
  }
  uVar3 = (uint)puVar1[2];
  bVar7 = (uVar3 & local_18) == 0;
  if (bVar7) {
    uVar6 = (uint)puVar1[3];
    unaff_r5 = local_14;
  }
  if (bVar7 && (uVar6 & unaff_r5) == 0) {
    uVar5 = (uint)puVar1[4];
    bVar7 = (uVar5 & local_18) == 0;
    uVar4 = local_18;
    if (bVar7) {
      uVar4 = (uint)puVar1[5];
    }
    if ((((bVar7 && (uVar4 & unaff_r5) == 0) && (uVar5 != 0 && uVar4 != 0)) &&
        (uVar5 + uVar3 <= (uint)*puVar1)) && (uVar5 = (uint)puVar1[1], uVar4 + uVar6 <= uVar5))
    goto LAB_0000e828;
  }
  param_2 = (uint)puVar1[5];
  param_1 = (uint)puVar1[4];
  uVar2 = FUN_000006ec(DAT_0000eb6c,*(undefined4 *)(puVar1 + 0xc),uVar3,puVar1[3],param_1,param_2);
  FUN_000006e8(&DAT_0000e700,s_lcdc_app_c_0000e660,0x164,uVar2);
  uVar5 = extraout_r1;
LAB_0000e828:
  bVar7 = (puVar1[6] & local_18) == 0;
  uVar3 = local_18;
  if (bVar7) {
    uVar3 = (uint)puVar1[7];
    uVar5 = local_14;
  }
  if (!bVar7 || (uVar3 & uVar5) != 0) {
    uVar2 = FUN_000006ec(s_LCDC_img_postion_not_algin_data__0000eb70,*(undefined4 *)(puVar1 + 0xc),
                         (uint)puVar1[6],puVar1[7],param_1,param_2);
    FUN_000006e8(&DAT_0000e700,s_lcdc_app_c_0000e660,0x16b,uVar2);
  }
  uVar3 = FUN_00012ae8();
  if ((uVar3 < (uint)puVar1[6] + (uint)puVar1[4]) ||
     (uVar3 = FUN_00012af0(), uVar3 < (uint)puVar1[7] + (uint)puVar1[5])) {
    uVar2 = FUN_000006ec(s_LCDC_img_size_err_x__d__y__d__w__0000eba8,puVar1[6],puVar1[7],puVar1[4],
                         puVar1[5]);
    FUN_000006e8(&DAT_0000e700,s_lcdc_app_c_0000e660,0x173,uVar2);
  }
  return 0;
}



/* Function: FUN_0000e8d4 */

undefined1 FUN_0000e8d4(uint param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_r1;
  uint uVar8;
  uint extraout_r1_00;
  uint uVar9;
  uint extraout_r3;
  uint extraout_r3_00;
  uint uVar10;
  uint extraout_r12;
  uint extraout_r12_00;
  bool bVar11;
  bool bVar12;
  uint local_20;
  uint local_1c;
  
  uVar1 = *(ushort *)(DAT_0000ebd4 + 0x40);
  uVar2 = *(ushort *)(DAT_0000ebd4 + 0x42);
  local_20 = 0;
  local_1c = 0;
  puVar3 = (uint *)(DAT_0000e644 + param_1 * 0x40);
  if ((char)puVar3[0xb] == '\0') {
    return 0;
  }
  uVar7 = puVar3[4];
  uVar6 = param_1;
  if ((uVar7 != 3 && uVar7 != 4) && ((uVar7 != 5 && uVar7 != 6) && uVar7 != 7)) {
    uVar4 = FUN_000006ec(s_LCDC_osd1_data_format_err_format_0000ebd8);
    FUN_000006e8(&DAT_0000e700,s_lcdc_app_c_0000e660,400,uVar4);
  }
  FUN_0000e464(puVar3[4],&local_20,&local_1c);
  uVar9 = (uint)(ushort)puVar3[-4];
  bVar11 = (uVar9 & local_20) != 0;
  uVar7 = extraout_r1;
  uVar5 = local_20;
  if (!bVar11) {
    uVar5 = (uint)*(ushort *)((int)puVar3 + -0xe);
    uVar7 = local_1c;
  }
  if ((bVar11 || (uVar5 & uVar7) != 0) ||
     (uVar10 = extraout_r3, uVar7 = extraout_r12, uVar9 == 0 || uVar5 == 0)) {
    uVar4 = FUN_000006ec(DAT_0000ebfc,puVar3[4],uVar9,*(undefined2 *)((int)puVar3 + -0xe),uVar6,
                         param_2);
    FUN_000006e8(&DAT_0000e700,s_lcdc_app_c_0000e660,0x199,uVar4);
    uVar10 = extraout_r3_00;
    uVar7 = extraout_r12_00;
  }
  uVar5 = (uint)(ushort)puVar3[-3];
  bVar11 = (uVar5 & local_20) == 0;
  if (bVar11) {
    uVar10 = (uint)*(ushort *)((int)puVar3 + -10);
    uVar7 = local_1c;
  }
  if (bVar11 && (uVar10 & uVar7) == 0) {
    uVar8 = (uint)(ushort)puVar3[-2];
    bVar11 = (uVar8 & local_20) == 0;
    uVar9 = local_20;
    if (bVar11) {
      uVar9 = (uint)*(ushort *)((int)puVar3 + -6);
    }
    if ((((bVar11 && (uVar9 & uVar7) == 0) && (uVar8 != 0 && uVar9 != 0)) &&
        (uVar8 + uVar5 <= (uint)(ushort)puVar3[-4])) &&
       (uVar7 = (uint)*(ushort *)((int)puVar3 + -0xe), uVar9 + uVar10 <= uVar7)) goto LAB_0000ea30;
  }
  param_2 = (uint)*(ushort *)((int)puVar3 + -6);
  uVar6 = (uint)(ushort)puVar3[-2];
  uVar4 = FUN_000006ec(DAT_0000ec00,puVar3[4],uVar5,*(undefined2 *)((int)puVar3 + -10),uVar6,param_2
                      );
  FUN_000006e8(&DAT_0000e700,s_lcdc_app_c_0000e660,0x1a9,uVar4);
  uVar7 = extraout_r1_00;
LAB_0000ea30:
  bVar11 = ((ushort)puVar3[-1] & local_20) == 0;
  uVar5 = local_20;
  if (bVar11) {
    uVar5 = (uint)*(ushort *)((int)puVar3 + -2);
    uVar7 = local_1c;
  }
  if (!bVar11 || (uVar5 & uVar7) != 0) {
    uVar4 = FUN_000006ec(s_LCDC_osd1_postion_not_algin_data_0000ec04,puVar3[4],
                         (uint)(ushort)puVar3[-1],*(undefined2 *)((int)puVar3 + -2),uVar6,param_2);
    FUN_000006e8(&DAT_0000e700,DAT_0000ec3c,0x1b0,uVar4);
  }
  if (((uint)uVar1 < (uint)(ushort)puVar3[-1] + (uint)(ushort)puVar3[-2]) ||
     (uVar6 = (uint)*(ushort *)((int)puVar3 + -2) + (uint)*(ushort *)((int)puVar3 + -6),
     uVar2 < uVar6)) {
    uVar4 = FUN_000006ec(s_LCDC_osd1_size_err_x__d__y__d__w_0000ec40,(uint)(ushort)puVar3[-1],
                         *(undefined2 *)((int)puVar3 + -2),(uint)(ushort)puVar3[-2],
                         *(undefined2 *)((int)puVar3 + -6),param_2);
    uVar6 = FUN_000006e8(&DAT_0000e700,DAT_0000ec3c,0x1b6,uVar4);
  }
  if ((*puVar3 & 3) != 0) {
    uVar4 = FUN_000006ec(s_src_base_addr_is_not_word_aligne_0000ec6c);
    uVar6 = FUN_000006e8(&DAT_0000e700,DAT_0000ec3c,0x1bc,uVar4);
  }
  bVar11 = param_1 == 1;
  if (bVar11) {
    uVar6 = puVar3[4];
  }
  bVar12 = bVar11 && uVar6 == 5;
  if (bVar11 && uVar6 == 5) {
    bVar12 = puVar3[5] == 0;
  }
  if (bVar12) {
    if (puVar3[1] == 0) {
      uVar4 = FUN_000006ec(s_alpha_base_address_is_invalid_0000eca0);
      FUN_000006e8(s_layer_ptr_>alpha_base_addr_0000ecc0,DAT_0000ec3c,0x1c2,uVar4);
    }
    if ((puVar3[1] & 3) != 0) {
      uVar4 = FUN_000006ec(s_alpha_base_address_is_not_word_a_0000ee94);
      FUN_000006e8(s_LCDC_ZERO_____layer_ptr_>alpha_b_0000eec8,DAT_0000ec3c,0x1c4,uVar4);
    }
  }
  return 0;
}



/* Function: FUN_0000ed10 */

undefined1 FUN_0000ed10(undefined4 param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_r2;
  uint extraout_r3;
  uint uVar9;
  uint unaff_r5;
  bool bVar10;
  uint local_18;
  uint local_14;
  
  puVar3 = DAT_0000ef04;
  local_18 = 0;
  local_14 = 0;
  if ((char)DAT_0000ef04[0x10] == '\0') {
    return 0;
  }
  iVar6 = *(int *)(DAT_0000ef04 + 10);
  if ((iVar6 != 3 && iVar6 != 4) && iVar6 != 5) {
    uVar4 = FUN_000006ec(s_LCDC_cap_data_format_err_format__0000ef08);
    FUN_000006e8(&DAT_0000ef2c,DAT_0000ec3c,0x1de,uVar4);
  }
  FUN_0000e464(*(undefined4 *)(puVar3 + 10),&local_18,&local_14);
  uVar8 = (uint)puVar3[6];
  bVar10 = (uVar8 & local_18) != 0;
  uVar9 = extraout_r3;
  if (!bVar10) {
    uVar9 = (uint)puVar3[7];
    unaff_r5 = local_14;
  }
  if (bVar10 || (uVar9 & unaff_r5) != 0) {
LAB_0000edcc:
    param_2 = (uint)puVar3[9];
    uVar4 = FUN_000006ec(DAT_0000ef30,*(undefined4 *)(puVar3 + 10),uVar8,puVar3[7],puVar3[8],param_2
                        );
    FUN_000006e8(&DAT_0000ef2c,DAT_0000ec3c,0x1ec,uVar4);
    uVar8 = extraout_r2;
  }
  else {
    uVar5 = (uint)puVar3[8];
    bVar10 = (uVar5 & local_18) != 0;
    uVar7 = local_18;
    if (!bVar10) {
      uVar7 = (uint)puVar3[9];
    }
    if ((((bVar10 || (uVar7 & unaff_r5) != 0) || (uVar5 == 0 || uVar7 == 0)) ||
        ((uint)puVar3[4] < uVar5 + uVar8)) || ((uint)puVar3[5] < uVar9 + uVar7)) goto LAB_0000edcc;
  }
  bVar10 = (*puVar3 & local_18) == 0;
  uVar9 = local_18;
  if (bVar10) {
    uVar9 = (uint)puVar3[1];
    uVar8 = local_14;
  }
  if (bVar10 && (uVar9 & uVar8) == 0) {
    uVar1 = puVar3[2];
    uVar2 = puVar3[8];
    bVar10 = uVar1 == uVar2;
    if (bVar10) {
      uVar1 = puVar3[3];
      uVar2 = puVar3[9];
    }
    if (bVar10 && uVar1 == uVar2) goto LAB_0000ee60;
  }
  uVar4 = FUN_000006ec(s_LCDC_capture_rect_error__x__d__y_0000ef34,(uint)*puVar3,puVar3[1],puVar3[2]
                       ,puVar3[3],param_2);
  FUN_000006e8(&DAT_0000ef2c,DAT_0000ec3c,0x1f5,uVar4);
LAB_0000ee60:
  if ((*(uint *)(puVar3 + 0xc) & 3) != 0) {
    uVar4 = FUN_000006ec(s_dst_base_addr_is_not_word_aligne_0000ef70);
    FUN_000006e8(&DAT_0000ef2c,DAT_0000ec3c,0x1fb,uVar4);
  }
  return 0;
}



/* Function: FUN_0000efa4 */

void FUN_0000efa4(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  
  iVar4 = DAT_0000e644;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  uVar19 = (uint)*(ushort *)(DAT_0000e644 + 0xc);
  uVar15 = (uint)*(ushort *)(DAT_0000e644 + 0x15c);
  uVar3 = *(undefined4 *)(DAT_0000e644 + 0x15c);
  uVar14 = (uint)*(ushort *)(DAT_0000e644 + 0x15e);
  uVar9 = (*(ushort *)(DAT_0000e644 + 0x162) + uVar14) - 1;
  uVar17 = uVar9 & 0xffff;
  local_58 = (uint)*(ushort *)(DAT_0000e644 + 0xe);
  uVar11 = (*(ushort *)(DAT_0000e644 + 0x160) + uVar15) - 1;
  uVar18 = uVar11 & 0xffff;
  local_54 = (*(ushort *)(DAT_0000e644 + 8) + uVar19) - 1;
  local_3c = 0;
  local_40 = (local_58 + *(ushort *)(DAT_0000e644 + 10)) - 1;
  iVar13 = *(int *)(DAT_0000e644 + 0x14);
  iVar16 = *(int *)(DAT_0000e644 + 0x10);
  local_28 = param_1;
  FUN_000124b0(0,*(undefined1 *)(DAT_0000e644 + 0x2c));
  if (*(char *)(iVar4 + 0x2c) != '\0') {
    FUN_0000e3f4(*(undefined4 *)(iVar4 + 0x18),&local_3c);
    iVar5 = DAT_0000e644;
    bVar21 = SBORROW4(local_40,uVar14);
    iVar8 = local_40 - uVar14;
    bVar20 = local_40 == uVar14;
    uVar6 = local_40;
    if ((int)uVar14 < (int)local_40) {
      bVar21 = SBORROW4(local_54,uVar15);
      iVar8 = local_54 - uVar15;
      bVar20 = local_54 == uVar15;
      uVar6 = local_54;
    }
    if (!bVar20 && iVar8 < 0 == bVar21) {
      bVar21 = SBORROW4(uVar18,uVar19);
      iVar8 = uVar18 - uVar19;
      bVar20 = uVar18 == uVar19;
      if (uVar19 < uVar18) {
        bVar21 = SBORROW4(uVar17,local_58);
        iVar8 = uVar17 - local_58;
        bVar20 = uVar17 == local_58;
        uVar6 = local_58;
      }
      if (!bVar20 && iVar8 < 0 == bVar21) {
        iVar10 = uVar19 - uVar15;
        iVar8 = local_54 - uVar15;
        if ((int)(uVar18 - uVar15) <= (int)(local_54 - uVar15)) {
          iVar8 = uVar18 - uVar15;
        }
        uVar6 = uVar6 - uVar14;
        iVar12 = local_40 - uVar14;
        if ((int)(uVar17 - uVar14) < (int)(local_40 - uVar14)) {
          iVar12 = uVar17 - uVar14;
        }
        if ((int)uVar6 < 0) {
          if (*(int *)(iVar4 + 0x18) == 1) {
            if ((uVar6 & 1) != 0) {
              uVar6 = uVar6 + 1;
            }
            iVar7 = *(int *)(DAT_0000e644 + 0xf0) * uVar6 * local_3c;
            *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) - iVar7;
            iVar7 = *(int *)(iVar4 + 0x14) - (iVar7 >> 1);
          }
          else {
            iVar7 = *(int *)(DAT_0000e644 + 0xf0) * uVar6 * local_3c;
            *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) - iVar7;
            iVar7 = *(int *)(iVar4 + 0x14) - iVar7;
          }
          *(int *)(iVar4 + 0x14) = iVar7;
          uVar6 = 0;
        }
        if (iVar10 < 0) {
          *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) - iVar10 * local_3c;
          *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) - iVar10 * local_3c;
          iVar10 = 0;
        }
        local_38 = CONCAT22((short)uVar6,(short)iVar10);
        sVar1 = ((short)iVar8 - (short)iVar10) + 1;
        sVar2 = ((short)iVar12 - (short)uVar6) + 1;
        local_34 = CONCAT22(sVar2,sVar1);
        iVar8 = *(int *)(iVar4 + 0x28);
        if (iVar8 != 0) {
          local_58 = 0;
          if (iVar8 == 1 || iVar8 == 3) {
            local_34 = CONCAT22(sVar1,sVar2);
          }
          local_54 = 0;
          local_50 = 0;
          local_4c = 0;
          local_40 = 0;
          local_44 = CONCAT22((short)uVar9,(short)uVar11);
          local_48 = uVar3;
          local_40 = FUN_0000e3b8();
          FUN_00000764(local_28,&local_58,&local_48);
          uVar9 = local_54;
          local_48 = *(undefined4 *)(iVar4 + 0xc);
          local_44 = CONCAT22(*(short *)(iVar4 + 10) + *(short *)(iVar4 + 0xe) + -1,
                              *(short *)(iVar4 + 0xc) + *(short *)(iVar4 + 8) + -1);
          local_40 = FUN_0000e3b8(*(undefined4 *)(iVar4 + 0x28));
          FUN_00000764(local_28,&local_58,&local_48);
          iVar8 = (int)(short)((short)(local_54 >> 0x10) - (short)(uVar9 >> 0x10));
          iVar10 = (int)(short)((short)local_54 - (short)uVar9);
          if (iVar8 < 0) {
            iVar8 = *(int *)(iVar5 + 0xf0) * iVar8 * local_3c;
            iVar16 = iVar16 - iVar8;
            if (*(int *)(iVar4 + 0x18) == 1) {
              iVar13 = iVar13 - (iVar8 >> 1);
            }
            else {
              iVar13 = iVar13 - iVar8;
            }
          }
          if (iVar10 < 0) {
            iVar10 = iVar10 * local_3c;
            iVar16 = iVar16 - iVar10;
            iVar13 = iVar13 - iVar10;
          }
          *(int *)(iVar4 + 0x14) = iVar13;
          *(int *)(iVar4 + 0x10) = iVar16;
        }
        FUN_0001243c(local_30,*(undefined4 *)(iVar4 + 0x18));
        FUN_00012338(local_30,*(undefined4 *)(iVar4 + 0x1c),*(undefined4 *)(iVar4 + 0x20));
        FUN_00012290(local_30,*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14));
        FUN_000125c4(local_30,&local_38);
        FUN_00012550(local_30,*(undefined4 *)(iVar5 + 0xf0));
        FUN_00012d64(local_30,*(undefined4 *)(iVar4 + 0x24));
        FUN_00012cec(local_30,*(undefined4 *)(iVar4 + 0x28));
        return;
      }
    }
    FUN_000124b0(local_30,0);
  }
  return;
}



/* Function: FUN_0000f2f4 */

void FUN_0000f2f4(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  uint local_4c;
  uint local_48;
  int local_40 [3];
  undefined4 local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 local_28;
  
  piVar4 = (int *)(DAT_0000e644 + param_1 * 0x40);
  local_34 = 0;
  local_30 = 0;
  uVar10 = (uint)*(ushort *)(DAT_0000ebd4 + 0x5c);
  iVar6 = *(int *)(DAT_0000ebd4 + 0x5c);
  uVar9 = (uint)*(ushort *)(DAT_0000ebd4 + 0x5e);
  uVar5 = (*(ushort *)(DAT_0000ebd4 + 0x62) + uVar9) - 1;
  uVar12 = uVar5 & 0xffff;
  local_54 = (uint)*(ushort *)(piVar4 + -1);
  uVar8 = (*(ushort *)(DAT_0000ebd4 + 0x60) + uVar10) - 1;
  local_48 = (uint)*(ushort *)((int)piVar4 + -2);
  uVar13 = uVar8 & 0xffff;
  local_58 = (*(ushort *)(piVar4 + -2) + local_54) - 1;
  local_40[0] = 0;
  local_4c = (*(ushort *)((int)piVar4 + -6) + local_48) - 1;
  iVar11 = *piVar4;
  iStack_2c = param_1;
  local_28 = param_2;
  FUN_000124b0(param_1,(char)piVar4[0xb]);
  if ((char)piVar4[0xb] != '\0') {
    FUN_0000e3f4(piVar4[4],local_40);
    bVar16 = SBORROW4(local_4c,uVar9);
    iVar14 = local_4c - uVar9;
    bVar15 = local_4c == uVar9;
    if ((int)uVar9 < (int)local_4c) {
      bVar16 = SBORROW4(local_58,uVar10);
      iVar14 = local_58 - uVar10;
      bVar15 = local_58 == uVar10;
    }
    if (!bVar15 && iVar14 < 0 == bVar16) {
      bVar16 = SBORROW4(uVar13,local_54);
      iVar14 = uVar13 - local_54;
      bVar15 = uVar13 == local_54;
      if ((int)local_54 < (int)uVar13) {
        bVar16 = SBORROW4(uVar12,local_48);
        iVar14 = uVar12 - local_48;
        bVar15 = uVar12 == local_48;
      }
      if (!bVar15 && iVar14 < 0 == bVar16) {
        local_54 = local_54 - uVar10;
        local_48 = local_48 - uVar9;
        local_58 = local_58 - uVar10;
        local_4c = local_4c - uVar9;
        if ((int)(uVar13 - uVar10) < (int)local_58) {
          local_58 = uVar13 - uVar10;
        }
        if ((int)(uVar12 - uVar9) < (int)local_4c) {
          local_4c = uVar12 - uVar9;
        }
        iVar14 = DAT_0000e644 + param_1 * 4;
        if ((int)local_48 < 0) {
          *piVar4 = *piVar4 - *(int *)(iVar14 + 0xf0) * local_48 * local_40[0];
          local_48 = 0;
        }
        if ((int)local_54 < 0) {
          *piVar4 = *piVar4 - local_54 * local_40[0];
          local_54 = 0;
        }
        local_34 = CONCAT22((short)local_48,(short)local_54);
        sVar1 = ((short)local_58 - (short)local_54) + 1;
        sVar2 = ((short)local_4c - (short)local_48) + 1;
        local_30 = CONCAT22(sVar2,sVar1);
        iVar7 = piVar4[8];
        if (iVar7 != 0) {
          local_70 = 0;
          local_6c = 0;
          local_58 = 0;
          if (iVar7 == 1 || iVar7 == 3) {
            local_30 = CONCAT22(sVar2,sVar2);
          }
          local_68 = 0;
          local_64 = 0;
          if (iVar7 == 1 || iVar7 == 3) {
            local_30 = CONCAT22(sVar1,(undefined2)local_30);
          }
          local_5c = CONCAT22((short)uVar5,(short)uVar8);
          local_60 = iVar6;
          local_58 = FUN_0000e3b8(iVar7);
          FUN_00000764(local_28,&local_70,&local_60);
          uVar3 = local_6c;
          local_60 = piVar4[-1];
          local_5c = CONCAT22(*(short *)((int)piVar4 + -6) + *(short *)((int)piVar4 + -2) + -1,
                              (short)piVar4[-1] + (short)piVar4[-2] + -1);
          local_58 = FUN_0000e3b8(piVar4[8]);
          FUN_00000764(local_28,&local_70,&local_60);
          iVar6 = (int)(short)((short)((uint)local_6c >> 0x10) - (short)((uint)uVar3 >> 0x10));
          iVar7 = (int)(short)((short)local_6c - (short)uVar3);
          if (iVar6 < 0) {
            iVar11 = iVar11 - *(int *)(iVar14 + 0xf0) * iVar6 * local_40[0];
          }
          if (iVar7 < 0) {
            iVar11 = iVar11 - iVar7 * local_40[0];
          }
          *piVar4 = iVar11;
        }
        FUN_00012858(param_1,*(undefined1 *)((int)piVar4 + 0x2d));
        if (piVar4[4] == 5) {
          iVar6 = 1;
        }
        else {
          iVar6 = piVar4[5];
        }
        FUN_000126c4(param_1,iVar6);
        FUN_0001243c(param_1,piVar4[4]);
        FUN_00012338(param_1,piVar4[6],0);
        FUN_00012290(param_1,*piVar4,0);
        FUN_000125c4(param_1,&local_34);
        FUN_0001272c(param_1,(char)piVar4[3]);
        FUN_00012794(param_1,piVar4[2]);
        FUN_00012550(param_1,*(undefined4 *)(iVar14 + 0xf0));
        if (param_1 == 1) {
          FUN_00012300(1,piVar4[1]);
        }
        iVar6 = FUN_000100f8(piVar4[4],piVar4[10]);
        piVar4[10] = iVar6;
        FUN_000128c0(param_1,iVar6);
        FUN_00012d64(param_1,piVar4[7]);
        FUN_00012cec(param_1,piVar4[8]);
        FUN_00012dc8(param_1,piVar4[9]);
        return;
      }
    }
    FUN_000124b0(param_1,0);
  }
  return;
}



/* Function: FUN_0000f698 */

void FUN_0000f698(void)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  int local_30;
  uint local_2c;
  
  puVar1 = DAT_0000ef04;
  uVar8 = (uint)DAT_0000ef04[0x2a];
  uVar7 = (uint)DAT_0000ef04[0x2b];
  local_2c = (DAT_0000ef04[0x2c] + uVar8) - 1 & 0xffff;
  uVar3 = (uint)*DAT_0000ef04;
  uVar5 = (uint)DAT_0000ef04[1];
  uVar13 = (DAT_0000ef04[0x2d] + uVar7) - 1 & 0xffff;
  uVar9 = (DAT_0000ef04[2] + uVar3) - 1;
  uVar11 = (DAT_0000ef04[3] + uVar5) - 1;
  local_30 = 0;
  FUN_0000e3f4(*(undefined4 *)(DAT_0000ef04 + 10),&local_30);
  FUN_00012928((char)puVar1[0x10]);
  if ((char)puVar1[0x10] != '\0') {
    bVar15 = SBORROW4(uVar11,uVar7);
    iVar10 = uVar11 - uVar7;
    bVar14 = uVar11 == uVar7;
    if ((int)uVar7 < (int)uVar11) {
      bVar15 = SBORROW4(uVar9,uVar8);
      iVar10 = uVar9 - uVar8;
      bVar14 = uVar9 == uVar8;
    }
    if (!bVar14 && iVar10 < 0 == bVar15) {
      bVar15 = SBORROW4(local_2c,uVar3);
      iVar10 = local_2c - uVar3;
      bVar14 = local_2c == uVar3;
      if ((int)uVar3 < (int)local_2c) {
        bVar15 = SBORROW4(uVar13,uVar5);
        iVar10 = uVar13 - uVar5;
        bVar14 = uVar13 == uVar5;
      }
      if (!bVar14 && iVar10 < 0 == bVar15) {
        iVar10 = uVar9 - uVar8;
        if ((int)(local_2c - uVar8) < (int)(uVar9 - uVar8)) {
          iVar10 = local_2c - uVar8;
        }
        iVar4 = uVar3 - uVar8;
        iVar12 = uVar11 - uVar7;
        if ((int)(uVar13 - uVar7) < (int)(uVar11 - uVar7)) {
          iVar12 = uVar13 - uVar7;
        }
        iVar6 = uVar5 - uVar7;
        FUN_000006d8(0x10,DAT_0000f9cc,&DAT_0000f9c8,*(undefined4 *)(puVar1 + 0xc));
        if (iVar6 < 0) {
          iVar2 = *(int *)(DAT_0000f9d0 + 0x138) * iVar6;
          iVar6 = 0;
          *(int *)(puVar1 + 0xc) = *(int *)(puVar1 + 0xc) - iVar2 * local_30;
        }
        if (iVar4 < 0) {
          iVar2 = iVar4 * local_30;
          iVar4 = 0;
          *(int *)(puVar1 + 0xc) = *(int *)(puVar1 + 0xc) - iVar2;
        }
        *puVar1 = (ushort)iVar4;
        puVar1[1] = (ushort)iVar6;
        puVar1[2] = ((short)iVar10 - (ushort)iVar4) + 1;
        puVar1[3] = ((short)iVar12 - (ushort)iVar6) + 1;
        FUN_000129c4(*(undefined4 *)(puVar1 + 10));
        FUN_00012a28(*(undefined4 *)(puVar1 + 0xe));
        FUN_000006d8(0x10,DAT_0000f9d4,&DAT_0000f9c8,*(undefined4 *)(puVar1 + 0xc));
        FUN_0001299c(*(undefined4 *)(puVar1 + 0xc));
        FUN_00012948(puVar1);
        FUN_00012a40(*(undefined4 *)(DAT_0000f9d0 + 0x138));
        FUN_00012c40(0);
        FUN_00012e14(*(undefined4 *)(puVar1 + 0x16));
        FUN_00012d50(*(undefined4 *)(puVar1 + 0x14));
        FUN_00012cd8(*(undefined4 *)(puVar1 + 0x12));
        return;
      }
    }
    FUN_00012928(0);
  }
  return;
}



/* Function: FUN_0000f844 */

undefined4 FUN_0000f844(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (1 < param_1) {
    uVar1 = FUN_000006ec(s_LCDC_AppSetFmark_lcd_id_is_error_0000f9d8,param_1);
    FUN_000006e8(s__lcd_id_<_2)_0000fa00,DAT_0000ec3c,0x545,uVar1);
  }
  iVar2 = DAT_0000f9d0 + param_1 * 4;
  *(undefined4 *)(iVar2 + 0x144) = param_2;
  *(undefined4 *)(iVar2 + 0x14c) = param_3;
  return 0;
}



/* Function: FUN_0000f894 */

void FUN_0000f894(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_18;
  
  iVar1 = DAT_0000f9d0;
  local_18 = 0;
  FUN_00012264(*(undefined4 *)(DAT_0000f9d0 + 0x13c));
  iVar5 = iVar1 + param_1 * 4;
  if (*(char *)(iVar1 + 0x128) == '\0') {
    iVar3 = FUN_00000814();
    if ((iVar3 == 1) || (iVar3 = FUN_0000080c(), iVar3 != 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    FUN_0000f844(param_1,uVar2,0);
    uVar2 = *(undefined4 *)(iVar5 + 0x144);
    uVar4 = *(undefined4 *)(iVar5 + 0x14c);
  }
  else {
    FUN_0000f844(param_1,1,0);
    uVar4 = *(undefined4 *)(iVar5 + 0x14c);
    uVar2 = 1;
  }
  FUN_00012230(uVar2,uVar4);
  iVar5 = DAT_0000ebd4;
  if ((*(ushort *)(DAT_0000ebd4 + 0x60) < *(ushort *)(DAT_0000ebd4 + 0x58)) ||
     (*(ushort *)(DAT_0000ebd4 + 0x62) < *(ushort *)(DAT_0000ebd4 + 0x5a))) {
    uVar2 = FUN_000006ec(s_display_size_is_less_than_lcm_si_0000fa10);
    FUN_000006e8(&LAB_0000fa34,DAT_0000ec3c,0x421,uVar2);
  }
  local_18 = *(undefined4 *)(iVar5 + 0x60);
  FUN_00012524(&local_18);
  *(undefined2 *)(iVar5 + 0x54) = 0;
  *(undefined2 *)(iVar5 + 0x56) = 0;
  *(undefined2 *)(iVar5 + 0x58) = *(undefined2 *)(iVar5 + 0x60);
  *(undefined2 *)(iVar5 + 0x5a) = *(undefined2 *)(iVar5 + 0x62);
  FUN_00012af8(iVar1 + 0x154);
  FUN_00012ad0((int)*(short *)(iVar5 + 6));
  FUN_00012aa0(*(undefined1 *)(iVar1 + 0x104));
  FUN_00012ab8(*(undefined1 *)(iVar1 + 0x105));
  FUN_00012a58(*(undefined4 *)(iVar1 + 0x100));
  FUN_00012b4c(*(undefined1 *)(iVar1 + 0x164));
  FUN_00012cc4(*(undefined4 *)(iVar1 + 0x170));
  return;
}



/* Function: FUN_0000fa88 */

undefined4 FUN_0000fa88(uint param_1)

{
  undefined4 uVar1;
  
  if (3 < param_1) {
    uVar1 = FUN_000006ec(s_LCDC_AppUnRegisterIntFunc__The_i_0000fd0c,param_1);
    FUN_000006e8(s__uint32__LCD_INT_MAX_>__uint32__i_0000fce4,DAT_0000ec3c,0x4c4,uVar1);
  }
  FUN_00011fa4(param_1);
  FUN_00011c90(param_1);
  return 0;
}



/* Function: FUN_0000fad0 */

undefined4 FUN_0000fad0(uint param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0000f9d0;
  if (3 < param_1) {
    param_1 = 6;
  }
  switch(param_1) {
  case 0:
    if (param_2 == (ushort *)0x0) {
      FUN_000006e4(s_PNULL____param_ptr_0000fd54,s_lcdc_app_c_0000fd48,0x457);
    }
    FUN_0001f478(iVar2,param_2,0x30);
    if (*(int *)(iVar2 + 0x28) == 1 || *(int *)(iVar2 + 0x28) == 3) {
      uVar1 = param_2[1];
    }
    else {
      uVar1 = *param_2;
    }
    *(uint *)(iVar2 + 0xf0) = (uint)uVar1;
    return 0;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  default:
    FUN_000006d8(0x10,DAT_0000fd68,&DAT_0000f9c8,param_1);
    return 0;
  }
  if (param_2 == (ushort *)0x0) {
    FUN_000006e4(s_PNULL____param_ptr_0000fd54,s_lcdc_app_c_0000fd48,0x488);
  }
  iVar3 = iVar2 + param_1 * 0x40;
  FUN_0001f478((ushort *)(iVar3 + -0x10),param_2,0x40);
  if (*(int *)(iVar3 + 0x20) == 1 || *(int *)(iVar3 + 0x20) == 3) {
    uVar1 = *(ushort *)(iVar3 + -0xe);
  }
  else {
    uVar1 = *(ushort *)(iVar3 + -0x10);
  }
  *(uint *)(iVar2 + param_1 * 4 + 0xf0) = (uint)uVar1;
  return 0;
}



/* Function: FUN_0000fbc4 */

undefined4 FUN_0000fbc4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  
  iVar1 = DAT_0000f9d0;
  local_18 = 0;
  FUN_0001f478(DAT_0000f9d0 + 0x108,param_1,0x30);
  if (*(char *)(iVar1 + 0x128) == '\0') {
    FUN_00012928(0);
  }
  if (*(char *)(param_1 + 0x21) == '\0') {
    if (*(int *)(iVar1 + 0x11c) != 5) {
      *(undefined4 *)(iVar1 + 0x124) = 0;
      goto LAB_0000fc10;
    }
    uVar2 = 2;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
  }
  *(undefined4 *)(iVar1 + 0x124) = uVar2;
LAB_0000fc10:
  FUN_0000e3f4(*(undefined4 *)(param_1 + 0x14),&local_18);
  *(uint *)(iVar1 + 0x120) =
       ((uint)*(ushort *)(param_1 + 8) * (uint)*(ushort *)(param_1 + 0xe) +
       (uint)*(ushort *)(param_1 + 0xc)) * local_18 + *(int *)(iVar1 + 0x120);
  *(uint *)(iVar1 + 0x138) = (uint)*(ushort *)(param_1 + 8);
  if (*(short *)(param_1 + 4) != *(short *)(param_1 + 0x10)) {
    uVar2 = FUN_000006ec(DAT_0000fd6c);
    FUN_000006e8(s_param_ptr_>cap_rect_w____param_p_0000fd70,s_lcdc_app_c_0000fd48,0x513,uVar2);
  }
  if (*(short *)(param_1 + 6) != *(short *)(param_1 + 0x12)) {
    uVar2 = FUN_000006ec(DAT_0000fda4);
    FUN_000006e8(s_param_ptr_>cap_rect_h____param_p_0000fda8,s_lcdc_app_c_0000fd48,0x518,uVar2);
  }
  return 0;
}



/* Function: FUN_0000fdf4 */

undefined4 FUN_0000fdf4(undefined4 param_1)

{
  *(undefined4 *)(DAT_0000f9d0 + 0x13c) = param_1;
  return 0;
}



/* Function: FUN_0000fe18 */

void FUN_0000fe18(void)

{
  *(undefined1 *)(DAT_0000f9d0 + 0x16c) = 0;
  return;
}



/* Function: FUN_0000fe28 */

undefined4 FUN_0000fe28(undefined2 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0001005c;
  *(undefined2 *)(DAT_0001005c + 0x50) = *param_1;
  *(undefined2 *)(iVar1 + 0x52) = param_1[1];
  return 0;
}



/* Function: FUN_0000fe44 */

undefined4 FUN_0000fe44(undefined4 param_1)

{
  FUN_0001f3a4(DAT_00010060,param_1,8);
  return 0;
}



/* Function: FUN_0000fe78 */

void FUN_0000fe78(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (1 < param_1) {
    uVar1 = FUN_000006ec(s_LCDC_AppSetCSPin_lcd_id_is_error_00010068);
    FUN_000006e8(DAT_0001008c,s_lcdc_app_c_0000fd48,0x573,uVar1);
  }
  *(uint *)(DAT_00010090 + param_1 * 4) = param_2 & 1;
  return;
}



/* Function: FUN_0000feb8 */

undefined1 FUN_0000feb8(void)

{
  return *(undefined1 *)(DAT_0000f9d0 + 0x16e);
}



/* Function: FUN_0000fec4 */

undefined4 FUN_0000fec4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_00010094;
  *(short *)(DAT_00010094 + 0x5c) = (short)param_2;
  *(short *)(iVar1 + 0x5e) = (short)param_3;
  iVar2 = (param_4 - param_2) + 1;
  *(short *)(iVar1 + 0x60) = (short)iVar2;
  iVar3 = (param_5 - param_3) + 1;
  *(short *)(iVar1 + 0x62) = (short)iVar3;
  *(undefined1 *)(iVar1 + 0x6c) = 1;
  FUN_000101cc(param_1);
  if (*(char *)(iVar1 + 0x28) == '\0') {
    FUN_00012278(*(undefined1 *)(iVar1 + 0x6c));
    FUN_00012bd8(iVar2 * iVar3 | (uint)*(byte *)(DAT_00010090 + param_1 * 4) << 0x1a);
  }
  else {
    FUN_00012278(0);
  }
  FUN_0001220c();
  if ((*(char *)(iVar1 + 0x6e) != '\0') && (iVar1 = FUN_00011e9c(0,200), iVar1 == 0)) {
    return 0xff;
  }
  return 0;
}



/* Function: FUN_0000ff6c */

undefined4 FUN_0000ff6c(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00010094;
  iVar1 = DAT_0000f9d0;
  if (*(char *)(DAT_0000f9d0 + 0x16d) == '\0') {
    *(undefined4 *)(DAT_0000f9d0 + 0x100) = 1;
    *(undefined1 *)(iVar1 + 0x104) = 0x40;
    *(undefined1 *)(iVar1 + 0x105) = 0x40;
    *(undefined2 *)(iVar2 + 6) = 0;
    iVar2 = FUN_0000075c();
    if (iVar2 == 0) {
      FUN_00012074();
    }
    FUN_00012144(1);
    FUN_00012c3c(2);
    *(undefined1 *)(iVar1 + 0x16d) = 1;
  }
  return 0;
}



/* Function: FUN_00010010 */

undefined4 FUN_00010010(void)

{
  FUN_00012b64();
  return 0;
}



/* Function: FUN_00010020 */

undefined4 FUN_00010020(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    if (param_1 < 4) {
      *(int *)(DAT_00010064 + param_1 * 4) = param_2;
    }
    else {
      uVar1 = 0x21;
    }
    return uVar1;
  }
  return 0;
}



/* Function: FUN_00010044 */

undefined4 FUN_00010044(void)

{
  FUN_00012000();
  FUN_00000738(0x13);
  return 0;
}



/* Function: FUN_00010098 */

undefined4 FUN_00010098(void)

{
  FUN_00011fa4();
  return 0;
}



/* Function: FUN_000100bc */

void FUN_000100bc(undefined1 param_1)

{
  *(undefined1 *)(DAT_0000f9d0 + 0x16e) = param_1;
  return;
}



/* Function: FUN_000100f8 */

uint FUN_000100f8(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 != 5 && param_1 != 6) {
    return param_2;
  }
  iVar1 = *(int *)(DAT_0000f9d0 + 0x170);
  if (iVar1 == 0) {
    uVar2 = (((param_2 & 0xffff) >> 0xb) << 3 | (param_2 & 0xffff) >> 0xd) << 0x10 |
            (((param_2 & 0x7ff) >> 5) << 2 | (param_2 & 0x7ff) >> 9) << 8;
    uVar4 = (param_2 & 0x1f) << 3 | (param_2 & 0x1f) >> 2;
  }
  else {
    if (iVar1 == 1) {
      return ((param_2 & 0xffff) >> 0xb) << 0x13 | ((param_2 & 0x7ff) >> 5) << 10 |
             (param_2 & 0x1f) << 3;
    }
    if (iVar1 != 2) {
      FUN_000006c8(s__LCDC_GetColorKey__expand_mode_i_00010324);
      return 0;
    }
    uVar2 = (param_2 & 0xffff) >> 0xb;
    uVar4 = 0;
    if ((uVar2 & 1) != 0) {
      uVar4 = 7;
    }
    uVar3 = (param_2 & 0x7ff) >> 5;
    uVar5 = 0;
    if ((uVar3 & 1) != 0) {
      uVar5 = 3;
    }
    uVar2 = (uVar4 | uVar2 << 3) << 0x10 | (uVar5 | uVar3 << 2) << 8;
    uVar4 = 0;
    if ((param_2 & 1) != 0) {
      uVar4 = 7;
    }
    uVar4 = uVar4 | (param_2 & 0x1f) << 3;
  }
  return uVar4 | uVar2;
}



/* Function: FUN_000101cc */

undefined4 FUN_000101cc(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_0001029c();
  FUN_0000f894(param_1);
  FUN_0000efa4(param_1);
  uVar2 = 1;
  do {
    FUN_0000f2f4(uVar2,param_1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  FUN_0000f698(param_1);
  if (*(char *)(DAT_0000f9d0 + 0x128) == '\0') {
    iVar1 = FUN_00010634(param_1);
    if (*(int *)(iVar1 + 4) == 5) {
      FUN_00012c40(1);
      FUN_0000c358(param_1);
      FUN_000129b0();
      FUN_00012cb0(0);
      FUN_0000c1ac((uint)*(ushort *)(DAT_00010094 + 0x60) * (uint)*(ushort *)(DAT_00010094 + 0x62) *
                   2,param_1);
    }
    else {
      FUN_0000b41c(0,param_1);
      FUN_00012c40(2);
      FUN_00012cb0(0);
      FUN_0000c358(param_1);
      FUN_000129b0();
    }
  }
  return 0;
}



/* Function: FUN_0001029c */

undefined4 FUN_0001029c(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  iVar2 = DAT_00010094;
  bVar7 = *(short *)(DAT_00010094 + 0x40) != 0;
  sVar1 = 0;
  if (bVar7) {
    sVar1 = *(short *)(DAT_00010094 + 0x42);
  }
  if (((!bVar7 || sVar1 == 0) || (uVar3 = FUN_00012ae8(), uVar3 < *(ushort *)(iVar2 + 0x40))) ||
     (uVar3 = FUN_00012af0(), uVar3 < *(ushort *)(iVar2 + 0x42))) {
    uVar4 = FUN_000006ec(s_LCDC_lcdc_logic_size_err_width___00010350,*(undefined2 *)(iVar2 + 0x40),
                         *(undefined2 *)(iVar2 + 0x42));
    FUN_000006e8(&DAT_00010384,DAT_00010380,0x10c,uVar4);
  }
  FUN_0000e4e4();
  uVar3 = 1;
  do {
    FUN_0000e8d4(uVar3);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  FUN_0000ed10();
  if (*(char *)(DAT_0000f9d0 + 0x128) == '\0') {
    uVar3 = (uint)*(ushort *)(DAT_00010094 + 0x58);
    uVar6 = (uint)*(ushort *)(DAT_00010094 + 0x60);
    uVar5 = (uint)*(ushort *)(DAT_00010094 + 0x5a);
    bVar7 = uVar3 != uVar6;
    if (!bVar7) {
      uVar6 = (uint)*(ushort *)(DAT_00010094 + 0x62);
    }
    if (((bVar7 || uVar5 != uVar6) ||
        ((uint)*(ushort *)(DAT_00010094 + 0x40) < *(ushort *)(DAT_00010094 + 0x54) + uVar3)) ||
       ((uint)*(ushort *)(DAT_00010094 + 0x42) < *(ushort *)(DAT_00010094 + 0x56) + uVar5)) {
      uVar4 = FUN_000006ec(s_LCDC_trim_rect_error__x___d__y___0001040c);
      FUN_000006e8(&DAT_00010384,DAT_00010380,0x124,uVar4,uVar5,unaff_r4);
    }
  }
  return 0;
}



/* Function: FUN_00010440 */

uint FUN_00010440(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  uint local_24;
  
  uVar7 = 0;
  local_24 = 0;
  iVar3 = FUN_0000362c(param_1,&local_24,param_3,param_4,param_3);
  puVar2 = DAT_00010788;
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = local_24;
  }
  if (iVar3 != 0 && uVar1 != 0) {
    *DAT_00010788 = param_1;
    puVar2[1] = (uint)*(ushort *)(iVar3 + 0xc);
    puVar2[3] = (uint)*(ushort *)(iVar3 + 0xe);
    puVar2[2] = *(uint *)(*(int *)(iVar3 + 0x14) + 0xc);
    puVar2[4] = *(uint *)(*(int *)(iVar3 + 0x14) + 0x10);
    FUN_0001f478(puVar2 + 5,*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x14),0x18);
    puVar2[0xb] = *(uint *)(iVar3 + 0x10);
    FUN_0000c2c8(0x20,0);
    uVar4 = FUN_00001c78();
    FUN_0000c2f0(iVar3 + 0xc,uVar4,param_1);
    FUN_0000c32c(*(undefined2 *)(iVar3 + 0xc),*(undefined2 *)(iVar3 + 0xe),param_1);
    for (; uVar7 < local_24; uVar7 = uVar7 + 1) {
      iVar5 = iVar3 + uVar7 * 0x2c;
      pcVar6 = *(code **)(*(int *)(*(int *)(iVar5 + 0x14) + 0x18) + 0x2c);
      if (pcVar6 == Reset) {
        iVar5 = FUN_0000e0dc(param_1 & 0xffff,0);
        FUN_000006d8(0x10,DAT_00010790,&DAT_0001078c,param_1 & 0xffff,iVar5);
      }
      else {
        iVar5 = (*pcVar6)(*(undefined2 *)(iVar5 + 0xc),*(undefined2 *)(iVar5 + 0xe),param_1 & 0xffff
                         );
      }
      if (*(int *)(iVar3 + uVar7 * 0x2c) == iVar5) {
        return uVar7 & 0xffff;
      }
    }
  }
  return 0xffff;
}



/* Function: FUN_0001057c */

char FUN_0001057c(void)

{
  char *pcVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  int in_r3;
  uint uVar5;
  uint uVar6;
  
  psVar3 = DAT_000107a4;
  uVar2 = DAT_000107a0;
  pcVar1 = DAT_00010794;
  uVar5 = 0;
  if (*DAT_00010794 == '\0') {
    uVar6 = DAT_000107a0 ^ 3;
    do {
      iVar4 = FUN_00010440(uVar5);
      psVar3[uVar5] = (short)iVar4;
      if (iVar4 == 0xffff) {
        psVar3[uVar5] = -1;
        FUN_000006d8(0x10,uVar6,&LAB_000107a8,uVar5,in_r3);
      }
      else {
        FUN_000006d8(0x10,uVar2,&DAT_0001078c,uVar5,iVar4);
        in_r3 = iVar4;
      }
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < 2);
    if (*psVar3 == -1) {
      *psVar3 = 0;
    }
    *pcVar1 = '\x01';
    return '\x01';
  }
  FUN_000006d8(0x10,DAT_0001079c,&DAT_00010798,in_r3,in_r3);
  return *pcVar1;
}



/* Function: FUN_00010634 */

int FUN_00010634(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  local_10 = 0;
  if ((*DAT_00010794 != '\0') || (iVar1 = FUN_0001057c(), iVar2 = 0, iVar1 != 0)) {
    iVar2 = FUN_0000362c(param_1,&local_10);
    uVar3 = (uint)*(ushort *)(DAT_000107a4 + param_1 * 2);
    if ((local_10 <= uVar3) || (iVar2 == 0)) {
      return 0;
    }
    iVar2 = iVar2 + uVar3 * 0x2c + 0xc;
  }
  return iVar2;
}



/* Function: FUN_000106a8 */

undefined4 FUN_000106a8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint local_10;
  
  local_10 = 0;
  if ((*DAT_00010794 != '\0') || (iVar1 = FUN_0001057c(), iVar1 != 0)) {
    iVar1 = FUN_0000362c(param_1,&local_10);
    uVar2 = (uint)*(ushort *)(DAT_000107a4 + param_1 * 2);
    if ((uVar2 < local_10) && (iVar1 != 0)) {
      return *(undefined4 *)(iVar1 + uVar2 * 0x2c);
    }
  }
  return 0xffff;
}



/* Function: FUN_00010714 */

int FUN_00010714(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  local_10 = 0;
  if ((*DAT_00010794 != '\0') || (iVar1 = FUN_0001057c(), iVar2 = 0, iVar1 != 0)) {
    iVar2 = FUN_0000362c(param_1,&local_10);
    uVar3 = (uint)*(ushort *)(DAT_000107a4 + param_1 * 2);
    if ((local_10 <= uVar3) || (iVar2 == 0)) {
      return 0;
    }
    iVar2 = iVar2 + uVar3 * 0x2c + 0x18;
  }
  return iVar2;
}



/* Function: FUN_00010834 */

undefined4 FUN_00010834(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      *param_2 = 1;
    }
    uVar1 = 0;
    if (param_1 == 1) {
      *param_3 = 1;
    }
    else {
      *param_2 = 0;
      *param_3 = 0;
      uVar1 = 0xff;
    }
    return uVar1;
  }
  *param_2 = 0x80;
  *param_3 = 0xa0;
  return 0;
}



/* Function: FUN_000108d4 */

void FUN_000108d4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000113b4();
  FUN_0001150c(uVar1,param_1,param_2);
  return;
}



/* Function: FUN_000108f4 */

undefined1 FUN_000108f4(undefined4 param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_000113b4();
  uVar1 = FUN_000114d0(uVar2,param_1);
  return uVar1;
}



/* Function: FUN_00010910 */

undefined1 FUN_00010910(undefined4 param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_000113b4();
  uVar1 = FUN_00011504(uVar2,param_1);
  return uVar1;
}



/* Function: FUN_0001092c */

undefined4 FUN_0001092c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  uVar1 = FUN_000113b4();
  if (param_2 != 0) {
    FUN_000117c8(uVar1,param_1,8,1,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
    FUN_000117c8(uVar1,param_1,0x28,0);
    FUN_00011420(uVar1,param_1);
    FUN_000117c8(uVar1,param_1,0,0);
    return 0;
  }
  FUN_000117c8(uVar1,param_1,8,0,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  FUN_000117c8(uVar1,param_1,0x28,1);
  return 0;
}



/* Function: FUN_00010964 */

undefined1 FUN_00010964(undefined4 param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_000113b4();
  uVar1 = FUN_000114fc(uVar2,param_1);
  return uVar1;
}



/* Function: FUN_00010980 */

void FUN_00010980(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000113b4();
  if (param_2 != 0) {
    FUN_00011420();
    return;
  }
  FUN_000117c8(uVar1,param_1,4,0);
  return;
}



/* Function: FUN_000109ac */

void FUN_000109ac(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000113b4();
  FUN_00011420(uVar1,param_1);
  return;
}



/* Function: FUN_000109c4 */

void FUN_000109c4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000113b4();
  FUN_000117c8(uVar1,param_1,4,0);
  return;
}



/* Function: FUN_00010a10 */

void FUN_00010a10(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000113b4();
  FUN_000117c8(uVar1,param_1,0x18,1);
  return;
}



/* Function: FUN_00010a28 */

void FUN_00010a28(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000113b4();
  FUN_000117c8(uVar1,param_1,0x18,0);
  return;
}



/* Function: FUN_00010a40 */

void FUN_00010a40(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  uVar1 = FUN_000113b4();
  switch(param_2) {
  case 0:
    return;
  case 1:
    uVar2 = 1;
    break;
  case 2:
    uVar2 = 1;
    goto LAB_000115f4;
  case 3:
    FUN_000117c8(uVar1,param_1,0xc,0,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
    uVar3 = 1;
    uVar2 = 0x10;
    goto LAB_000115b8;
  case 4:
    uVar2 = 0;
    break;
  case 5:
    uVar2 = 0;
LAB_000115f4:
    FUN_000117c8(uVar1,param_1,0xc,uVar2,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
    FUN_000117c8(uVar1,param_1,0x10,0);
    uVar3 = 0;
    goto LAB_0001159c;
  default:
    return;
  }
  FUN_000117c8(uVar1,param_1,0xc,uVar2,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  FUN_000117c8(uVar1,param_1,0x10,0);
  uVar3 = 1;
LAB_0001159c:
  uVar2 = 0x14;
LAB_000115b8:
  FUN_000117c8(uVar1,param_1,uVar2,uVar3);
  return;
}



/* Function: FUN_00010a60 */

undefined1 FUN_00010a60(undefined4 param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_000113b4();
  uVar1 = FUN_000114f4(uVar2,param_1);
  return uVar1;
}



/* Function: FUN_00010a7c */

void FUN_00010a7c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000113b4();
  FUN_000117c8(uVar1,param_1,0x24,1);
  return;
}



/* Function: FUN_00010ab4 */

undefined4 FUN_00010ab4(void)

{
  FUN_00010a28();
  return 0;
}



/* Function: FUN_00010adc */

void FUN_00010adc(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = DAT_00010e98;
  uVar3 = FUN_00002078(DAT_00010e98);
  FUN_000020b4(iVar1,uVar3 | 0x200);
  iVar5 = iVar1 + 8;
  uVar3 = FUN_00002078(iVar5);
  FUN_000020b4(iVar5,uVar3 | 0x80);
  uVar3 = FUN_00002078(iVar5);
  FUN_000020b4(iVar5,uVar3 | 0x1000);
  uVar3 = FUN_00002078(iVar1 + 0x1e4);
  FUN_000020b4(iVar1 + 0x1e4,uVar3 & 0xfffffffa);
  uVar2 = DAT_00010e9c;
  uVar3 = FUN_00002078(DAT_00010e9c);
  FUN_000020b4(uVar2,uVar3 & 0xff00);
  uVar2 = DAT_00010ea0;
  uVar3 = FUN_00002078(DAT_00010ea0);
  FUN_000020b4(uVar2,uVar3 & 0xfffffff0 | 1);
  uVar3 = DAT_00010ea4;
  uVar4 = FUN_00002078(DAT_00010ea4);
  FUN_000020b4(uVar3,uVar4 & 0xffffffc0);
  uVar3 = uVar3 | (int)uVar3 >> 0x1c;
  uVar4 = FUN_00002078(uVar3);
  FUN_000020b4(uVar3,uVar4 & 0xffffffc0);
  uVar3 = uVar3 + 4;
  uVar4 = FUN_00002078(uVar3);
  FUN_000020b4(uVar3,uVar4 & 0xffffffc0);
  uVar3 = uVar3 | (int)uVar3 >> 0x1c;
  uVar4 = FUN_00002078(uVar3);
  FUN_000020b4(uVar3,uVar4 & 0xffffffc0);
  return;
}



/* Function: FUN_00010bd8 */

void FUN_00010bd8(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0xffff;
  uVar2 = 0;
  do {
    uVar1 = *(uint *)(DAT_00010ea8 + uVar2 * 0xc);
    bVar4 = param_1 <= uVar1;
    if (uVar1 == param_1) {
      param_1 = uVar2 * 3;
      iVar3 = DAT_00010ea8 + uVar2 * 0xc;
    }
    else {
      uVar2 = uVar2 + 1;
      bVar4 = 9 < uVar2;
    }
  } while (!bVar4);
  if (iVar3 == 0xffff) {
    FUN_000006e4(s_ANA_INVALID_VALUE_____uint32_ana_00010ebc,s_analog_phy_c_00010eac,0xbe);
  }
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_2 + 8);
  return;
}



/* Function: FUN_00010c3c */

void FUN_00010c3c(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = DAT_00010ee8;
  if (param_1 == 0) {
    uVar2 = FUN_00002078(DAT_00010ee8);
    uVar2 = uVar2 | 0x800;
  }
  else {
    if (0xf < param_1) {
      param_1 = 0xf;
    }
    uVar2 = FUN_00002078(DAT_00010ee8);
    FUN_000020b4(uVar1,(param_1 & 0xf) << 0xc | uVar2 & 0xffff0fff);
    uVar2 = FUN_00002078(uVar1);
    uVar2 = uVar2 & 0xfffff7ff;
  }
  FUN_000020b4(uVar1,uVar2);
  return;
}



/* Function: FUN_00010d34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00010d34(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = _DAT_00010f88;
  if (param_1 == 0) {
    uVar4 = FUN_00002078(_DAT_00010f88);
    FUN_000020b4(uVar1,uVar4 & 0xffffefff);
    uVar4 = FUN_00002078(uVar1);
    FUN_000020b4(uVar1,uVar4 & 0xfffffffe);
    uVar4 = FUN_00002078(uVar1);
    FUN_000020b4(uVar1,uVar4 & 0xffffffef);
    uVar4 = FUN_00002078(uVar1);
    FUN_000020b4(uVar1,uVar4 & 0xfffffeff);
    FUN_000006c8(s___LCMBrightness_duty_is__d__OFF__00010f8a + 2,0);
  }
  else if (0x32 < param_1) {
    param_1 = 0x32;
  }
  uVar4 = _DAT_00010f50;
  uVar2 = FUN_00002078(_DAT_00010f50);
  FUN_000020b4(uVar4,uVar2 & 0xffffffc0 | 10);
  uVar4 = uVar4 | (int)uVar4 >> 0x1b;
  FUN_00002078(uVar4);
  uVar3 = (param_1 & 0xff) << 8 | 0x32;
  FUN_000020b4(uVar4,uVar3);
  uVar2 = FUN_00002078(uVar4 - 0x14);
  FUN_000020b4(uVar4 - 0x14,uVar2 & 0xffffffc0 | 10);
  FUN_00002078(uVar4 - 0x44);
  FUN_000020b4(uVar4 - 0x44,uVar3);
  uVar2 = FUN_00002078(uVar4 - 0x10);
  FUN_000020b4(uVar4 - 0x10,uVar2 & 0xffffffc0 | 10);
  FUN_00002078(uVar4 - 0x34);
  FUN_000020b4(uVar4 - 0x34,uVar3);
  uVar2 = FUN_00002078(uVar4 - 0xc);
  FUN_000020b4(uVar4 - 0xc,uVar2 & 0xffffffc0 | 10);
  FUN_00002078(uVar4 - 0x24);
  FUN_000020b4(uVar4 - 0x24,uVar3);
  FUN_000006c8(s___LCMBrightness_duty_is__d__ON___00010f52 + 2,param_1);
  return;
}



/* Function: FUN_0001132c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0001132c(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = _DAT_00010f88;
  FUN_00002078(_DAT_00010f88);
  FUN_00002078(uVar1);
  FUN_00002078(uVar1);
  uVar2 = FUN_00002078(uVar1);
  return (uVar2 & 0x100) != 0;
}



/* Function: FUN_000113b4 */

undefined4 FUN_000113b4(uint param_1)

{
  undefined4 uVar1;
  
  if (0x7f < param_1) {
    uVar1 = FUN_000006ec(s__s___d__gpio__d_exceed_max__00011624,s_gpio_phy_c_00011618,0x19,param_1);
    FUN_000006e8(s_SCI_FALSE_00011640,s_gpio_phy_c_00011618,0x19,uVar1);
  }
  return DAT_0001164c;
}



/* Function: FUN_000113f0 */

void FUN_000113f0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_000113b4();
  iVar1 = iVar1 + param_1 * 4;
  if (*(int *)(iVar1 + 8) == 0) {
    *(undefined4 *)(iVar1 + 8) = param_2;
  }
  return;
}



/* Function: FUN_00011420 */

undefined4 FUN_00011420(undefined4 param_1,undefined4 param_2)

{
  FUN_000117c8(param_1,param_2,4,1);
  return 0;
}



/* Function: FUN_000114d0 */

bool FUN_000114d0(int param_1,uint param_2)

{
  FUN_00011420();
  return (*(uint *)(*(int *)(param_1 + 4) + (param_2 >> 4) * 0x80) & 1 << (param_2 & 0xf)) != 0;
}



/* Function: FUN_000114f4 */

bool FUN_000114f4(int param_1,uint param_2)

{
  return (*(uint *)(*(int *)(param_1 + 4) + (param_2 >> 4) * 0x80 + 0x20) & 1 << (param_2 & 0xf)) !=
         0;
}



/* Function: FUN_000114fc */

bool FUN_000114fc(int param_1,uint param_2)

{
  return (*(uint *)(*(int *)(param_1 + 4) + (param_2 >> 4) * 0x80 + 4) & 1 << (param_2 & 0xf)) != 0;
}



/* Function: FUN_00011504 */

bool FUN_00011504(int param_1,uint param_2)

{
  return (*(uint *)(*(int *)(param_1 + 4) + (param_2 >> 4) * 0x80 + 8) & 1 << (param_2 & 0xf)) != 0;
}



/* Function: FUN_0001150c */

void FUN_0001150c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00011420();
  FUN_000117c8(param_1,param_2,0,param_3);
  return;
}



/* Function: FUN_000117c8 */

void FUN_000117c8(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4) + (param_2 >> 4) * 0x80;
  FUN_000006f4();
  uVar2 = *(uint *)(iVar3 + param_3);
  uVar1 = 1 << (param_2 & 0xf);
  if (param_4 == 0) {
    uVar2 = uVar2 & ~uVar1;
  }
  else {
    uVar2 = uVar2 | uVar1;
  }
  *(uint *)(iVar3 + param_3) = uVar2;
  FUN_00000704();
  return;
}



/* Function: thunk_FUN_0000cd34 */

undefined4 thunk_FUN_0000cd34(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined2 uStack_70;
  short sStack_6e;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 auStack_50 [14];
  short sStack_42;
  short sStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_0001f538(auStack_50,0x20);
  FUN_0001f538(&uStack_78,0x28);
  iVar3 = DAT_0000c828;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  if (*(int *)(DAT_0000c828 + 0x24) == 0) {
    FUN_0000c264(0);
    piVar11 = (int *)(iVar3 + 0x48);
    uVar10 = 0;
    *(undefined4 *)(iVar3 + 0x28) = 1;
    do {
      iVar4 = FUN_00010634(uVar10);
      piVar11[uVar10] = iVar4;
      if (iVar4 != 0) {
        if (*(int *)(*(int *)(iVar4 + 8) + 0x18) == 0) {
          FUN_000006e4(s_PNULL____s_lcd_spec_info_ptr_lcd_0000d010,DAT_0000d000,0x2b4);
        }
        puVar5 = (undefined2 *)piVar11[uVar10];
        *(undefined4 *)(iVar3 + 0x40 + uVar10 * 4) = 1;
        FUN_0000c32c(*puVar5,puVar5[1],uVar10 & 0xffff);
        *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 2);
    if ((2 < *(uint *)(iVar3 + 0x24)) || (*(uint *)(iVar3 + 0x24) == 0)) {
      FUN_000006e4(s__s_lcd_used_num_<__LCD_SUPPORT_M_0000d04c,DAT_0000d000,0x2c0);
    }
    FUN_0000ff6c();
    for (uVar10 = 0; uVar10 < *(uint *)(iVar3 + 0x24); uVar10 = uVar10 + 1) {
      FUN_0000f844(uVar10,1,0);
    }
    FUN_0000fdf4(0);
    uVar1 = **(undefined2 **)(*piVar11 + 8);
    uVar2 = (*(undefined2 **)(*piVar11 + 8))[2];
    *(undefined4 *)(iVar3 + 0x38) = 0x80;
    *(undefined4 *)(iVar3 + 0x3c) = 0xa0;
    uStack_28 = 0x2800280;
    uStack_30 = 0;
    uStack_2c = CONCAT22(uVar2,uVar1);
    FUN_0000fe28(&uStack_28);
    FUN_0000fe44(&uStack_30);
    FUN_0000fe18();
    iVar4 = DAT_0000c84c;
    for (uVar10 = 0; uVar10 < *(uint *)(iVar3 + 0x24); uVar10 = uVar10 + 1) {
      FUN_000006e4(DAT_0000d08c,DAT_0000d000,0x2e0);
      *(undefined4 *)(iVar4 + uVar10 * 0x1c) = 0;
      iVar6 = iVar4 + uVar10 * 0x1c;
      *(undefined4 *)(iVar6 + 4) = 0;
      puVar8 = (undefined4 *)piVar11[uVar10];
      uVar7 = *puVar8;
      uVar9 = puVar8[1];
      uVar12 = puVar8[2];
      *(undefined4 *)(iVar6 + 8) = 0;
      *(undefined4 *)(iVar6 + 0xc) = 0;
      *(undefined4 *)(iVar6 + 0x10) = uVar7;
      *(undefined4 *)(iVar6 + 0x14) = uVar9;
      *(undefined4 *)(iVar6 + 0x18) = uVar12;
      FUN_00012c38(*(undefined2 *)puVar8,*(undefined4 *)(puVar8[2] + 0x10));
    }
    FUN_0000cd04();
    uVar7 = FUN_00001c78();
    uVar10 = 0;
    do {
      if (*(int *)(iVar3 + 0x40 + uVar10 * 4) != 0) {
        FUN_0000c2f0(piVar11[uVar10],uVar7,uVar10);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 2);
    for (uVar10 = 0; uVar10 < *(uint *)(iVar3 + 0x24); uVar10 = uVar10 + 1) {
      FUN_0000cc04(uVar10,auStack_50);
      uStack_6c = 2;
      uStack_70 = 0;
      sStack_6e = sStack_42;
      uStack_69 = 0xff;
      uStack_68 = 0;
      uStack_6a = 0;
      uStack_78 = 0;
      uStack_74 = CONCAT22(sStack_40 + -1,sStack_42 + -1);
      uStack_67 = 1;
      uStack_6b = 1;
      FUN_0001f478(auStack_98,&uStack_70,0x20);
      FUN_0000ca24(uVar10,0,uStack_78,uStack_74);
      FUN_0000c978(uVar10,0,uStack_38);
      FUN_0000c8e4(uVar10,0);
    }
    for (uVar10 = 0; uVar10 < *(uint *)(iVar3 + 0x24); uVar10 = uVar10 + 1) {
      puVar8 = *(undefined4 **)(*(int *)(piVar11[uVar10] + 8) + 0x18);
      if (puVar8 != (undefined4 *)0x0) {
        (*(code *)*puVar8)();
        *(undefined4 *)(iVar4 + 0xc) = 0;
      }
    }
  }
  return 0;
}



/* Function: FUN_00011870 */

void FUN_00011870(undefined4 param_1,uint param_2,uint param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = 0;
  uVar7 = param_4 - param_2 & 0xffff;
  uVar4 = 0;
  uVar6 = param_5 - param_3 & 0xffff;
  uVar10 = param_2;
  if (*(ushort *)(DAT_00011bd0 + 0xe) <= param_2) {
    uVar10 = (uint)*(ushort *)(DAT_00011bd0 + 0xe);
  }
  uVar9 = param_3;
  if (*(ushort *)(DAT_00011bd0 + 0x10) <= param_3) {
    uVar9 = (uint)*(ushort *)(DAT_00011bd0 + 0x10);
  }
  if ((param_4 - param_2 & 0x8000) == 0) {
    iVar1 = (uVar7 == 0) + 1;
  }
  else {
    uVar7 = -uVar7 & 0xffff;
    iVar1 = 0xffff;
  }
  if ((param_5 - param_3 & 0x8000) == 0) {
    iVar2 = (uVar6 == 0) + 1;
  }
  else {
    uVar6 = -uVar6 & 0xffff;
    iVar2 = 0xffff;
  }
  uVar8 = 0;
  uVar3 = uVar7;
  if (uVar7 <= uVar6) {
    uVar3 = uVar6;
  }
  for (; uVar8 <= uVar3; uVar8 = uVar8 + 1 & 0xffff) {
    FUN_0000d758(uVar10,uVar9,param_6);
    uVar5 = uVar5 + uVar7 & 0xffff;
    uVar4 = uVar4 + uVar6 & 0xffff;
    if (uVar3 <= uVar5) {
      uVar5 = uVar5 - uVar3 & 0xffff;
      uVar10 = iVar1 + uVar10 & 0xffff;
    }
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar3 & 0xffff;
      uVar9 = iVar2 + uVar9 & 0xffff;
    }
  }
  return;
}



/* Function: FUN_0001198c */

void FUN_0001198c(byte *param_1,uint param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_44 [14];
  ushort local_36;
  ushort local_34;
  undefined2 *local_2c;
  
  iVar3 = DAT_0000dc08;
  puVar7 = DAT_0000c828;
  uVar8 = (uint)(*(ushort *)(DAT_00011bd0 + 0xe) >> 3);
  uVar6 = 0;
  *(undefined4 *)(DAT_0000c828 + 0x28) = 0;
  *puVar7 = 0;
  if (*(int *)(iVar3 + 0x134) == 0) {
    FUN_0001f478(iVar3,&DAT_20800000,0x138);
  }
  *(undefined4 *)(iVar3 + 0x130) = *(undefined4 *)(DAT_0000c84c + 4);
  *(int *)(iVar3 + 0x134) = *(int *)(iVar3 + 0x134) + 1;
  FUN_0000cc04(0,auStack_44);
  uVar9 = (uint)local_36;
  uVar2 = *(undefined2 *)(puVar7 + 4);
  for (uVar5 = 0;
      uVar5 <= (uint)local_34 * (uint)local_36 && (uint)local_34 * (uint)local_36 - uVar5 != 0;
      uVar5 = uVar5 + 1) {
    *local_2c = uVar2;
    local_2c = local_2c + 1;
  }
  if (param_2 != 0 && param_1 != (byte *)0x0) {
    if ((int)(uVar9 - 8) < (int)uVar8) {
      uVar8 = 0;
      uVar6 = 0x10;
    }
    iVar3 = local_34 - 0x10;
    if ((int)uVar6 <= iVar3) {
      (**(code **)(*(int *)(*(int *)(DAT_0000dc0c + 0x18) + 0x18) + 0x24))(0);
      do {
        bVar10 = param_2 == 0;
        param_2 = param_2 - 1 & 0xffff;
        if (bVar10) break;
        bVar1 = *param_1;
        if ((bVar1 < 0x21) || ((bVar1 & 0x80) != 0)) {
          iVar4 = 0;
        }
        else {
          iVar4 = (bVar1 - 0x20 & 0xffff) << 4;
        }
        uVar5 = 0;
        puVar7 = (undefined1 *)(DAT_0000dc10 + iVar4);
        do {
          FUN_0000d758(uVar8,uVar6 + uVar5 & 0xffff,*puVar7);
          uVar5 = uVar5 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar5 < 0x10);
        uVar8 = uVar8 + 8 & 0xffff;
        if (uVar9 < uVar8 + 8) {
          uVar8 = 0;
          uVar6 = uVar6 + 0x10 & 0xffff;
        }
        param_1 = param_1 + 1;
      } while ((int)uVar6 <= iVar3);
      uVar8 = local_34 - 1;
      uVar9 = uVar9 - 1;
      (**(code **)(*(int *)(*(int *)(DAT_0000dc0c + 0x18) + 0x18) + 0x14))
                (0,0,uVar9 & 0xffff,uVar8 & 0xffff);
      FUN_0000c8e4(0);
      FUN_000100bc(1);
      uVar8 = uVar8 & 0xffff;
      FUN_0000c6a4(0,0,0,uVar9 & 0xffff,uVar8);
      FUN_0000fec4(0,0,0,uVar9 & 0xffff,uVar8);
    }
  }
  return;
}



/* Function: FUN_000119a8 */

void FUN_000119a8(undefined4 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_70 [100];
  
  FUN_0001f538(auStack_70,100);
  uVar2 = FUN_00013ee8(param_1);
  FUN_000009f8(&DAT_00011bd4,uVar2);
  FUN_00013ee8(param_1);
  uVar2 = FUN_0001f36a();
  uVar3 = FUN_00013ee8(param_1);
  FUN_0001f3a4(auStack_70,uVar3,uVar2);
  uVar1 = FUN_0001f36a(auStack_70);
  FUN_0001198c(auStack_70,uVar1);
  return;
}



/* Function: FUN_00011a18 */

void FUN_00011a18(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00011bd0;
  *(undefined4 *)(DAT_00011bd0 + 0x20) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x40);
  *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)(param_1 + 0x28);
  *(undefined2 *)(iVar1 + 0xe) = *(undefined2 *)(param_1 + 0x26);
  *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_1 + 0x48);
  FUN_000009f8(&DAT_00011bd8);
  return;
}



/* Function: FUN_00011a64 */

void FUN_00011a64(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 )

{
  uint uVar1;
  
  FUN_00011870(0,param_1,param_2,param_1,param_4,1);
  FUN_00011870(0,param_1,param_2,param_3,param_2,1);
  FUN_00011870(0,param_3,param_2,param_3,param_4,1);
  FUN_00011870(0,param_1,param_4,param_3,param_4,1);
  for (uVar1 = 0; uVar1 < param_5; uVar1 = uVar1 + 1 & 0xffff) {
    FUN_00011870(0,param_1,param_2,param_1,param_4,1);
    param_1 = param_1 + 1 & 0xffff;
  }
  FUN_0000e218(0,0,0,*(ushort *)(DAT_00011bd0 + 0xe) - 1,*(ushort *)(DAT_00011bd0 + 0x10) - 1);
  return;
}



/* Function: FUN_00011b48 */

void FUN_00011b48(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(((ulonglong)*(ushort *)(DAT_00011bd0 + 0xe) << 2) / 5);
  uVar2 = *(ushort *)(DAT_00011bd0 + 0xe) / 5;
  FUN_00011a64(uVar2,*(ushort *)(DAT_00011bd0 + 0x10) >> 2,iVar1,
               *(ushort *)(DAT_00011bd0 + 0x10) >> 1,((iVar1 - uVar2) * param_1) / param_2 & 0xffff)
  ;
  return;
}



/* Function: thunk_FUN_0000cbfc */

undefined4 thunk_FUN_0000cbfc(void)

{
  return DAT_0000cffc;
}



/* Function: FUN_00011ba0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00011ba0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  FUN_00002114();
  FUN_00010adc();
  FUN_00010d34(param_2);
  uVar1 = _DAT_00010f88;
  if (param_1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 100;
  }
  if (iVar4 == 0) {
    uVar2 = FUN_00002078(_DAT_00010f88);
    FUN_000020b4(uVar1,uVar2 & 0xffffefff);
    uVar2 = FUN_00002078(uVar1);
    FUN_000020b4(uVar1,uVar2 & 0xfffffffe);
    uVar2 = FUN_00002078(uVar1);
    FUN_000020b4(uVar1,uVar2 & 0xffffffef);
    uVar2 = FUN_00002078(uVar1);
    FUN_000020b4(uVar1,uVar2 & 0xfffffeff);
    pcVar3 = s_LCMBackLight_value_is__d__OFF____00011144;
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_00002078(_DAT_00010f88);
    FUN_000020b4(uVar1,uVar2 | 0x3000,extraout_r2,extraout_r3,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
    uVar2 = FUN_00002078(uVar1);
    FUN_000020b4(uVar1,uVar2 | 3);
    uVar2 = FUN_00002078(uVar1);
    FUN_000020b4(uVar1,uVar2 | 0x30);
    uVar2 = FUN_00002078(uVar1);
    FUN_000020b4(uVar1,uVar2 | 0x300);
    iVar4 = iVar4 * 0x54 + 0xa8;
    pcVar3 = s_LCMBackLight_value_is__d__ON_____0001110c;
  }
  FUN_000006c8(pcVar3,iVar4);
  return;
}



/* Function: FUN_00011c90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00011c90(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  
  puVar1 = _DAT_00011e58;
  puVar4 = _DAT_00011e58 + 1;
  uVar2 = FUN_00012e80();
  if (1 < uVar2) {
    uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1);
    FUN_000006e8(s__uint32__LCDC_IRQ_NUM_>_irq_num_00011e34,s_lcdc_drv_ums9117_c_00011e20,0x139,
                 uVar3);
  }
  uVar2 = 1 << (uVar2 & 0xff);
  if ((*puVar4 & uVar2) != 0) {
    *puVar1 = uVar2 | *puVar1;
  }
  return 0;
}



/* Function: FUN_00011cf4 */

bool FUN_00011cf4(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_00011e90;
  uVar2 = FUN_00012e80();
  if (1 < uVar2) {
    uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1);
    FUN_000006e8(s__uint32__LCDC_IRQ_NUM_>_irq_num_00011e34,s_lcdc_drv_ums9117_c_00011e20,0x14d,
                 uVar3);
  }
  return (*puVar1 & 1 << (uVar2 & 0xff)) != 0;
}



/* Function: FUN_00011d44 */

undefined4 FUN_00011d44(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  FUN_0000073c(0x13);
  *(undefined4 *)(DAT_00011e94 + 4) = *DAT_00011e90;
  do {
    uVar1 = FUN_00012eb0(uVar3);
    iVar2 = FUN_00011cf4();
    if (iVar2 != 0) {
      FUN_00011c90(uVar1);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return DAT_00011e98;
}



/* Function: FUN_00011d94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00011d94(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  puVar1 = _DAT_00011e58;
  uVar2 = FUN_00012e80();
  if (1 < uVar2) {
    uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1);
    FUN_000006e8(s__uint32__LCDC_IRQ_NUM_>_irq_num_00011e34,s_lcdc_drv_ums9117_c_00011e20,0x481,
                 uVar3);
  }
  *puVar1 = *puVar1 | 1 << (uVar2 & 0xff);
  return 0;
}



/* Function: FUN_00011e9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00011e9c(undefined4 param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  puVar1 = _DAT_000120a4;
  uVar3 = 0;
  uVar2 = FUN_00012e80();
  while( true ) {
    bVar4 = param_2 <= uVar3;
    uVar3 = uVar3 + 1;
    if (bVar4) {
      FUN_000006c8(s_LCDC___0x20800110____0x_08X_000120a7 + 1,_DAT_20800110);
      FUN_000006c8(s_LCDC___0x20800114____0x_08X_000120c8,_DAT_20800114);
      FUN_000006c8(s_LCDC___0x20800118____0x_08X_000120e8,_DAT_20800118);
      FUN_000006c8(s_LCDC___0x2080011c____0x_08X_00012108,_DAT_2080011c);
      return 0;
    }
    if ((*puVar1 & 1 << (uVar2 & 0xff)) != 0) break;
    FUN_00000690(10);
  }
  FUN_00011d94(param_1);
  return 1;
}



/* Function: FUN_00011f3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00011f3c(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  uVar1 = FUN_00012e80();
  FUN_0000073c(0x13);
  FUN_00011d94(3);
  do {
    if (param_2 <= uVar2) {
LAB_00011f94:
      FUN_00000738(0x13);
      return uVar3;
    }
    if ((*_DAT_000120a4 & 1 << (uVar1 & 0xff)) != 0) {
      FUN_000006c8(s_ESD_FMRAK_Done_00012128);
      uVar3 = 1;
      goto LAB_00011f94;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}



/* Function: FUN_00011fa4 */

void FUN_00011fa4(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_00012138;
  uVar2 = FUN_00012e80();
  if (1 < uVar2) {
    uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1);
    FUN_000006e8(s__uint32__LCDC_IRQ_NUM_>_irq_num_00011e34,s_lcdc_drv_ums9117_c_00011e20,0x110,
                 uVar3);
  }
  *puVar1 = *puVar1 & ~(1 << (uVar2 & 0xff));
  *(undefined4 *)(DAT_00011de8 + uVar2 * 4) = 0;
  return;
}



/* Function: FUN_00012000 */

undefined4 FUN_00012000(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  
  puVar2 = DAT_00012138;
  puVar5 = (uint *)((uint)DAT_00012138 | (int)DAT_00012138 >> 0x15);
  uVar3 = FUN_00012e80();
  if (1 < uVar3) {
    uVar4 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1);
    FUN_000006e8(s__uint32__LCDC_IRQ_NUM_>_irq_num_00011e34,s_lcdc_drv_ums9117_c_00011e20,0x124,
                 uVar4);
  }
  uVar1 = 1 << (uVar3 & 0xff);
  *puVar5 = *puVar5 | uVar1;
  *(undefined4 *)(DAT_00011de8 + uVar3 * 4) = param_2;
  *puVar2 = uVar1 | *puVar2;
  return 0;
}



/* Function: FUN_00012074 */

undefined4 FUN_00012074(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0001213c;
  *DAT_0001213c = 0x800;
  puVar1[1] = 2;
  FUN_00000690(10);
  *(undefined4 *)(DAT_00012140 + 4) = 2;
  return 0;
}



/* Function: FUN_00012144 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00012144(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = DAT_00011e94;
  if (param_1 == 0) {
    if (DAT_00011e94[1] != '\0') {
      *DAT_0001213c = 0x800;
      _DAT_20800000 = _DAT_20800000 & 0xfffffffe;
      *DAT_00012140 = 0x800;
      pcVar1[1] = '\0';
    }
  }
  else {
    *DAT_0001213c = 0x800;
    _DAT_20800000 = _DAT_20800000 | 1;
    if (*pcVar1 == '\0') {
      iVar2 = FUN_00000740(0x13,DAT_000123d8,DAT_000123d4,*DAT_000123d0,pcVar1 + 4);
      if (iVar2 != 0) {
        uVar3 = FUN_000006ec(s_Register_Interrupt_of_the_LCDC_f_000123dc);
        FUN_000006e8(&DAT_00012404,s_lcdc_drv_ums9117_c_00011e20,0x180,uVar3);
      }
      *pcVar1 = '\x01';
    }
    FUN_00000738(0x13);
    pcVar1[1] = '\x01';
  }
  return 0;
}



/* Function: FUN_0001220c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001220c(void)

{
  FUN_000006f4();
  _DAT_20800000 = _DAT_20800000 | 8;
  FUN_00000704();
  return 0;
}



/* Function: FUN_00012230 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00012230(int param_1,int param_2)

{
  if (param_1 == 0) {
    _DAT_20800000 = _DAT_20800000 & 0xfffffffd;
  }
  else {
    _DAT_20800000 = _DAT_20800000 | 2;
  }
  if (param_2 == 0) {
    _DAT_20800000 = _DAT_20800000 & 0xfffffffb;
  }
  else {
    _DAT_20800000 = _DAT_20800000 | 4;
  }
  return 0;
}



/* Function: FUN_00012264 */

undefined4 FUN_00012264(uint param_1)

{
  *DAT_00012408 = param_1 & 0xffffff;
  return 0;
}



/* Function: FUN_00012278 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00012278(uint param_1)

{
  _DAT_20800000 = _DAT_20800000 & 0xffffffef | (param_1 & 1) << 4;
  return 0;
}



/* Function: FUN_00012290 */

undefined4 FUN_00012290(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = DAT_0001240c + 1;
  if (param_1 == 0) {
    *DAT_0001240c = param_2 >> 2;
    *puVar1 = param_3 >> 2;
  }
  else {
    puVar1 = DAT_00012410;
    if (((param_1 == 1) || (puVar1 = DAT_00012414, param_1 == 2)) ||
       (puVar1 = DAT_00012418, param_1 == 3)) {
      *puVar1 = param_2 >> 2;
    }
    else {
      FUN_000006d8(0x10,DAT_00012420,&DAT_0001241c,param_1,param_2);
    }
  }
  return 0;
}



/* Function: FUN_00012300 */

undefined4 FUN_00012300(uint *param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = param_1 == (uint *)0x1;
  if (bVar1) {
    param_1 = DAT_00012424;
  }
  if (bVar1) {
    *param_1 = param_2 >> 2;
  }
  else {
    FUN_000006d8(0x10,DAT_00012428,&DAT_0001241c,param_1,param_2);
  }
  return 0;
}



/* Function: FUN_00012338 */

undefined4 FUN_00012338(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = DAT_00012438;
  puVar3 = DAT_0001242c;
  if (param_1 == 0) {
    *DAT_0001242c = *DAT_0001242c & 0xfffffcff | (param_2 & 3) << 8;
    uVar1 = *puVar3 & 0xffff9fff | (param_3 & 3) << 0xd;
LAB_000123a8:
    *puVar3 = uVar1;
  }
  else {
    if (param_1 == 1) {
      *DAT_00012438 = *DAT_00012438 & 0xfffffcff | (param_2 & 3) << 8;
      uVar1 = *puVar2 & 0xffff9fff | (param_2 & 3) << 0xd;
    }
    else {
      if (param_1 == 2) {
        puVar3 = DAT_0001242c + 0x18;
        uVar1 = *puVar3 & 0xfffffcff | (param_2 & 3) << 8;
        goto LAB_000123a8;
      }
      if (param_1 != 3) {
        FUN_000006c8(DAT_00012434,param_1,param_2);
        return 0;
      }
      uVar1 = *DAT_00012430 & 0xfffffcff | (param_2 & 3) << 8;
      puVar2 = DAT_00012430;
    }
    *puVar2 = uVar1;
  }
  return 0;
}



/* Function: FUN_0001243c */

undefined4 FUN_0001243c(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = DAT_0001242c;
  if (param_1 == 0) {
LAB_00012490:
    *puVar1 = *puVar1 & 0xffffff0f | (param_2 & 0xf) << 4;
  }
  else {
    if (param_1 == 1) {
      puVar1 = DAT_0001242c + 0xc;
    }
    else {
      puVar1 = DAT_000127fc;
      if (param_1 != 2) {
        puVar1 = DAT_00012430;
        if (param_1 != 3) {
          FUN_000006d8(0x10,DAT_00012800,&DAT_0001241c,param_1,param_2);
          return 0;
        }
        goto LAB_00012490;
      }
    }
    *puVar1 = *puVar1 & 0xffffff0f | (param_2 & 0xf) << 4;
  }
  return 0;
}



/* Function: FUN_000124b0 */

undefined4 FUN_000124b0(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = DAT_0001242c;
  if (param_1 == 0) {
LAB_00012504:
    *puVar1 = *puVar1 & 0xfffffffe | param_2 & 1;
  }
  else {
    if (param_1 == 1) {
      puVar1 = DAT_0001242c + 0xc;
    }
    else {
      puVar1 = DAT_000127fc;
      if (param_1 != 2) {
        puVar1 = DAT_00012430;
        if (param_1 != 3) {
          FUN_000006d8(0x10,DAT_00012804,&DAT_0001241c,param_1,param_2);
          return 0;
        }
        goto LAB_00012504;
      }
    }
    *puVar1 = *puVar1 & 0xfffffffe | param_2 & 1;
  }
  return 0;
}



/* Function: FUN_00012524 */

undefined4 FUN_00012524(ushort *param_1)

{
  uint *puVar1;
  
  puVar1 = DAT_00012808;
  *DAT_00012808 = *DAT_00012808 & 0xfffff000 | *param_1 & 0xfff;
  *puVar1 = *puVar1 & 0xf000ffff | (param_1[1] & 0xfff) << 0x10;
  return 0;
}



/* Function: FUN_00012550 */

undefined4 FUN_00012550(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = DAT_0001280c;
  if (param_1 == 0) {
LAB_000125a4:
    *puVar1 = *puVar1 & 0xfffff000 | param_2 & 0xfff;
  }
  else {
    if (param_1 == 1) {
      puVar1 = DAT_0001280c + 0xc;
    }
    else {
      puVar1 = DAT_00012810;
      if (param_1 != 2) {
        puVar1 = DAT_00012814;
        if (param_1 != 3) {
          FUN_000006d8(0x10,DAT_00012818,&DAT_0001241c,param_1,param_2);
          return 0;
        }
        goto LAB_000125a4;
      }
    }
    *puVar1 = *puVar1 & 0xfffff000 | param_2 & 0xfff;
  }
  return 0;
}



/* Function: FUN_000125c4 */

undefined4 FUN_000125c4(int param_1,ushort *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar1 = DAT_0001281c;
  uVar2 = (uint)*param_2;
  puVar3 = DAT_0001281c + -2;
  if (param_1 == 0) {
    *DAT_0001281c = *DAT_0001281c & 0xfffff000 | uVar2 & 0xfff;
    *puVar1 = *puVar1 & 0xf000ffff | (param_2[1] & 0xfff) << 0x10;
    *puVar3 = *puVar3 & 0xfffff000 | param_2[2] & 0xfff;
    *puVar3 = *puVar3 & 0xf000ffff | (param_2[3] & 0xfff) << 0x10;
  }
  else {
    if (param_1 == 1) {
      puVar3 = DAT_0001281c + 10;
      puVar1 = DAT_0001281c + 0xc;
    }
    else if (param_1 == 2) {
      puVar3 = DAT_00012820 + -2;
      puVar1 = DAT_00012820;
    }
    else {
      if (param_1 != 3) {
        FUN_000006d8(0x10,DAT_00012830,&DAT_00012828,param_1,uVar2,param_2[1],param_2[2],param_2[3])
        ;
        return 0;
      }
      puVar3 = DAT_00012824 + -2;
      puVar1 = DAT_00012824;
    }
    *puVar1 = *puVar1 & 0xfffff000 | uVar2 & 0xfff;
    *puVar1 = *puVar1 & 0xf000ffff | (param_2[1] & 0xfff) << 0x10;
    *puVar3 = *puVar3 & 0xfffff000 | param_2[2] & 0xfff;
    *puVar3 = *puVar3 & 0xf000ffff | (param_2[3] & 0xfff) << 0x10;
  }
  return 0;
}



/* Function: FUN_000126c4 */

undefined4 FUN_000126c4(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = DAT_00012438;
  if (param_1 != 1) {
    if (param_1 == 2) {
      *DAT_000127fc = *DAT_000127fc & 0xfffffff3 | (param_2 & 3) << 2;
      return 0;
    }
    puVar1 = DAT_00012430;
    if (param_1 != 3) {
      FUN_000006d8(0x10,DAT_00012834,&DAT_0001241c,param_1,param_2);
      return 0;
    }
  }
  *puVar1 = *puVar1 & 0xfffffff3 | (param_2 & 3) << 2;
  return 0;
}



/* Function: FUN_0001272c */

undefined4 FUN_0001272c(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = DAT_00012838;
  if (param_1 != 1) {
    if (param_1 == 2) {
      *DAT_00012844 = *DAT_00012844 & 0xffffff00 | param_2 & 0xff;
      return 0;
    }
    puVar1 = DAT_0001283c;
    if (param_1 != 3) {
      FUN_000006d8(0x10,DAT_00012840,&DAT_0001241c,param_1,param_2);
      return 0;
    }
  }
  *puVar1 = *puVar1 & 0xffffff00 | param_2 & 0xff;
  return 0;
}



/* Function: FUN_00012794 */

undefined4 FUN_00012794(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = DAT_00012848;
  if (param_1 != 1) {
    if (param_1 == 2) {
      *DAT_00012854 = *DAT_00012854 & 0xff000000 | param_2 & 0xffffff;
      return 0;
    }
    puVar1 = DAT_0001284c;
    if (param_1 != 3) {
      FUN_000006d8(0x10,DAT_00012850,&DAT_0001241c,param_1,param_2);
      return 0;
    }
  }
  *puVar1 = *puVar1 & 0xff000000 | param_2 & 0xffffff;
  return 0;
}



/* Function: FUN_00012858 */

undefined4 FUN_00012858(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = DAT_00012438;
  if (param_1 != 1) {
    if (param_1 == 2) {
      *DAT_000127fc = *DAT_000127fc & 0xfffffffd | (param_2 & 1) << 1;
      return 0;
    }
    puVar1 = DAT_00012430;
    if (param_1 != 3) {
      FUN_000006d8(0x10,DAT_00012a74,&DAT_00012a70,param_1,param_2);
      return 0;
    }
  }
  *puVar1 = *puVar1 & 0xfffffffd | (param_2 & 1) << 1;
  return 0;
}



/* Function: FUN_000128c0 */

undefined4 FUN_000128c0(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = DAT_00012a78;
  if (param_1 != 1) {
    if (param_1 == 2) {
      *DAT_00012a84 = *DAT_00012a84 & 0xff000000 | param_2 & 0xffffff;
      return 0;
    }
    puVar1 = DAT_00012a7c;
    if (param_1 != 3) {
      FUN_000006d8(0x10,DAT_00012a80,&DAT_00012a70,param_1,param_2);
      return 0;
    }
  }
  *puVar1 = *puVar1 & 0xff000000 | param_2 & 0xffffff;
  return 0;
}



/* Function: FUN_00012928 */

undefined4 FUN_00012928(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = *DAT_00012a88 & 0xfffffffe;
  }
  else {
    uVar1 = *DAT_00012a88 | 1;
  }
  *DAT_00012a88 = uVar1;
  return 0;
}



/* Function: FUN_00012948 */

undefined4 FUN_00012948(ushort *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = DAT_00012a8c;
  puVar2 = (uint *)((uint)DAT_00012a8c | (int)DAT_00012a8c >> 0x1b);
  *DAT_00012a8c = *DAT_00012a8c & 0xfffff000 | *param_1 & 0xfff;
  *puVar1 = *puVar1 & 0xf000ffff | (param_1[1] & 0xfff) << 0x10;
  *puVar2 = *puVar2 & 0xfffff000 | param_1[2] & 0xfff;
  *puVar2 = *puVar2 & 0xf000ffff | (param_1[3] & 0xfff) << 0x10;
  return 0;
}



/* Function: FUN_0001299c */

undefined4 FUN_0001299c(uint param_1)

{
  *DAT_00012a90 = param_1 >> 2;
  return 0;
}



/* Function: FUN_000129b0 */

undefined4 FUN_000129b0(uint param_1)

{
  *DAT_00012a90 = param_1 >> 2;
  return 0;
}



/* Function: FUN_000129c4 */

undefined4 FUN_000129c4(int param_1)

{
  uint uVar1;
  
  if (param_1 == 3) {
    uVar1 = *DAT_00012a88 & 0xfffffff9;
  }
  else if (param_1 == 4) {
    uVar1 = (*DAT_00012a88 & 0xfffffff9) + 2;
  }
  else {
    if (param_1 != 5) {
      FUN_000006d8(0x10,DAT_00012a94,&DAT_0001282c,param_1);
      return 0;
    }
    uVar1 = (*DAT_00012a88 & 0xfffffff9) + 4;
  }
  *DAT_00012a88 = uVar1;
  return 0;
}



/* Function: FUN_00012a28 */

undefined4 FUN_00012a28(uint param_1)

{
  *DAT_00012a88 = *DAT_00012a88 & 0xffffffe7 | (param_1 & 3) << 3;
  return 0;
}



/* Function: FUN_00012a40 */

undefined4 FUN_00012a40(uint param_1)

{
  *DAT_00012a98 = *DAT_00012a98 & 0xfffff000 | param_1 & 0xfff;
  return 0;
}



/* Function: FUN_00012a58 */

undefined4 FUN_00012a58(uint param_1)

{
  *DAT_00012a9c = *DAT_00012a9c & 0xfffffffe | param_1 & 1;
  return 0;
}



/* Function: FUN_00012aa0 */

undefined4 FUN_00012aa0(uint param_1)

{
  *DAT_00012ee0 = *DAT_00012ee0 & 0xffffff00 | param_1 & 0xff;
  return 0;
}



/* Function: FUN_00012ab8 */

undefined4 FUN_00012ab8(uint param_1)

{
  *DAT_00012ee4 = *DAT_00012ee4 & 0xffffff00 | param_1 & 0xff;
  return 0;
}



/* Function: FUN_00012ad0 */

undefined4 FUN_00012ad0(uint param_1)

{
  *DAT_00012ee8 = *DAT_00012ee8 & 0xfffffe00 | param_1 & 0x1ff;
  return 0;
}



/* Function: FUN_00012ae8 */

undefined4 FUN_00012ae8(void)

{
  return 0x3ff;
}



/* Function: FUN_00012af0 */

undefined4 FUN_00012af0(void)

{
  return 0x3ff;
}



/* Function: FUN_00012af8 */

undefined4 FUN_00012af8(ushort *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = DAT_00012eec;
  puVar2 = (uint *)((uint)DAT_00012eec | (int)DAT_00012eec >> 0x1b);
  *DAT_00012eec = *DAT_00012eec & 0xfffff000 | *param_1 & 0xfff;
  *puVar1 = *puVar1 & 0xf000ffff | (param_1[1] & 0xfff) << 0x10;
  *puVar2 = *puVar2 & 0xfffff000 | param_1[2] & 0xfff;
  *puVar2 = *puVar2 & 0xf000ffff | (param_1[3] & 0xfff) << 0x10;
  return 0;
}



/* Function: FUN_00012b4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00012b4c(uint param_1)

{
  _DAT_20800000 = _DAT_20800000 & 0xffff00ff | (param_1 & 0xff) << 8;
  return 0;
}



/* Function: FUN_00012b64 */

undefined4 FUN_00012b64(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = DAT_0001242c + 0xc;
  puVar3 = DAT_0001242c + 0x18;
  puVar1 = DAT_0001242c + 0x24;
  *DAT_0001242c = *DAT_0001242c & 0xfffffffe;
  *puVar2 = *puVar2 & 0xfffffffe;
  *puVar3 = *puVar3 & 0xfffffffe;
  *puVar1 = *puVar1 & 0xfffffffe;
  return 0;
}



/* Function: FUN_00012bd8 */

undefined4 FUN_00012bd8(void)

{
  return 0;
}



/* Function: FUN_00012be0 */

undefined4 FUN_00012be0(void)

{
  FUN_0000c3ec();
  return 0;
}



/* Function: FUN_00012bf0 */

undefined4 FUN_00012bf0(void)

{
  FUN_0000c3a4();
  return 0;
}



/* Function: FUN_00012c00 */

undefined4 FUN_00012c00(void)

{
  FUN_0000c3c8();
  return 0;
}



/* Function: FUN_00012c38 */

void FUN_00012c38(void)

{
  return;
}



/* Function: FUN_00012c3c */

void FUN_00012c3c(void)

{
  return;
}



/* Function: FUN_00012c40 */

void FUN_00012c40(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_00012a88;
  if (param_1 == 0) {
    *DAT_00012a88 = *DAT_00012a88 & 0xffffffdf;
    uVar2 = (*puVar1 & 0xffffff3f) + 0x40;
  }
  else if (param_1 == 1) {
    *DAT_00012a88 = *DAT_00012a88 | 0x20;
    uVar2 = *puVar1 & 0xffffff3f;
  }
  else {
    if (param_1 != 2) {
      return;
    }
    *DAT_00012a88 = *DAT_00012a88 | 0x20;
    uVar2 = (*puVar1 & 0xffffff3f) + 0x80;
  }
  *puVar1 = uVar2;
  return;
}



/* Function: FUN_00012cb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00012cb0(uint param_1)

{
  _DAT_20800000 = _DAT_20800000 & 0xffffff1f | (param_1 & 7) << 5;
  return;
}



/* Function: FUN_00012cc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00012cc4(uint param_1)

{
  _DAT_20800000 = _DAT_20800000 & 0xfffcffff | (param_1 & 3) << 0x10;
  return;
}



/* Function: FUN_00012cd8 */

void FUN_00012cd8(uint param_1)

{
  *DAT_00012a88 = *DAT_00012a88 & 0xfffff8ff | (param_1 & 7) << 8;
  return;
}



/* Function: FUN_00012cec */

void FUN_00012cec(int param_1,uint param_2)

{
  if (param_1 == 0) {
    *DAT_0001242c = *DAT_0001242c & 0xffffe3ff | (param_2 & 7) << 10;
    return;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      if (param_1 == 3) {
        DAT_0001242c[0x24] = DAT_0001242c[0x24] & 0xffffe3ff | (param_2 & 7) << 10;
      }
      return;
    }
    DAT_0001242c[0x18] = DAT_0001242c[0x18] & 0xffffe3ff | (param_2 & 7) << 10;
    return;
  }
  DAT_0001242c[0xc] = DAT_0001242c[0xc] & 0xffffe3ff | (param_2 & 7) << 10;
  return;
}



/* Function: FUN_00012d50 */

void FUN_00012d50(uint param_1)

{
  *DAT_00012a88 = *DAT_00012a88 & 0xffff7fff | (param_1 & 1) << 0xf;
  return;
}



/* Function: FUN_00012d64 */

void FUN_00012d64(int param_1,uint param_2)

{
  if (param_1 == 0) {
    *DAT_0001242c = *DAT_0001242c & 0xffff7fff | (param_2 & 1) << 0xf;
    return;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      if (param_1 == 3) {
        DAT_0001242c[0x24] = DAT_0001242c[0x24] & 0xffff7fff | (param_2 & 1) << 0xf;
      }
      return;
    }
    DAT_0001242c[0x18] = DAT_0001242c[0x18] & 0xffff7fff | (param_2 & 1) << 0xf;
    return;
  }
  DAT_0001242c[0xc] = DAT_0001242c[0xc] & 0xffff7fff | (param_2 & 1) << 0xf;
  return;
}



/* Function: FUN_00012dc8 */

void FUN_00012dc8(int param_1,uint param_2)

{
  if (param_1 == 1) {
    *DAT_00012438 = *DAT_00012438 & 0xfffeffff | (param_2 & 1) << 0x10;
    return;
  }
  if (param_1 != 2) {
    if (param_1 == 3) {
      DAT_00012438[0x18] = DAT_00012438[0x18] & 0xfffeffff | (param_2 & 1) << 0x10;
    }
    return;
  }
  DAT_00012438[0xc] = DAT_00012438[0xc] & 0xfffeffff | (param_2 & 1) << 0x10;
  return;
}



/* Function: FUN_00012e14 */

void FUN_00012e14(uint param_1)

{
  *DAT_00012a88 = *DAT_00012a88 & 0xfffeffff | (param_1 & 1) << 0x10;
  return;
}



/* Function: FUN_00012e48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00012e48(void)

{
  FUN_00012144(1);
  FUN_00012074();
  _DAT_20800000 = _DAT_20800000 | 1;
  return 0;
}



/* Function: FUN_00012e80 */

undefined4 FUN_00012e80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (param_1 == 3) {
    uVar1 = 1;
  }
  else {
    FUN_000006c8(s___LCDC_IRQ_type_is_wrong__irq_ty_00012ef6 + 2,param_1);
  }
  return uVar1;
}



/* Function: FUN_00012eb0 */

undefined4 FUN_00012eb0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (param_1 == 1) {
    uVar1 = 3;
  }
  else {
    FUN_000006c8(s_LCDC_IRQ_num_is_wrong__irq_numbe_00012f20,param_1);
  }
  return uVar1;
}



/* Function: FUN_00012f48 */

void FUN_00012f48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 unaff_r5;
  short *psVar6;
  undefined4 unaff_r6;
  bool bVar7;
  undefined8 uVar8;
  
  puVar4 = DAT_000137c4;
  *DAT_000137c4 = 0x100000;
  puVar4[0x2c] = 0x1000;
  iVar2 = DAT_000137c8;
  for (iVar5 = 0; *(int *)(iVar2 + iVar5 * 8) != -1; iVar5 = iVar5 + 1) {
    uVar8 = FUN_00002060();
    puVar4 = (undefined4 *)((ulonglong)uVar8 >> 0x20);
    bVar7 = (int)uVar8 == 0;
    if (bVar7) {
      puVar4 = *(undefined4 **)(iVar2 + iVar5 * 8);
    }
    iVar3 = iVar2 + iVar5 * 8;
    if (bVar7) {
      *puVar4 = *(undefined4 *)(iVar3 + 4);
      param_3 = extraout_r2;
      param_4 = extraout_r3;
    }
    else {
      FUN_000020b4(*(undefined4 *)(iVar2 + iVar5 * 8),*(undefined2 *)(iVar3 + 4));
      param_3 = extraout_r2_00;
      param_4 = extraout_r3_00;
    }
  }
  iVar5 = 0;
  *(uint *)(DAT_000137e0 + 0x18) = *(uint *)(DAT_000137e0 + 0x18) & 0xe0000000;
  *DAT_000137c4 = 8;
  iVar2 = DAT_00014038;
  while( true ) {
    psVar6 = (short *)(iVar2 + iVar5 * 0xc);
    sVar1 = *psVar6;
    if (sVar1 == -1) break;
    if (*(int *)(psVar6 + 2) == 0) {
      FUN_00010980(sVar1,1,param_3,param_4,unaff_r4,unaff_r5,unaff_r6);
      FUN_0001092c(sVar1,1);
      FUN_00010a28(sVar1);
      param_3 = extraout_r2_02;
      param_4 = extraout_r3_02;
      if (psVar6[1] != 0xffff) {
        FUN_000108d4(sVar1,psVar6[1] & 0xff);
        param_3 = extraout_r2_03;
        param_4 = extraout_r3_03;
      }
    }
    else {
      FUN_00010980(sVar1,1,param_3,param_4,unaff_r4,unaff_r5,unaff_r6);
      FUN_0001092c(sVar1,0);
      param_3 = extraout_r2_01;
      param_4 = extraout_r3_01;
    }
    iVar5 = iVar5 + 1;
  }
  return;
}



/* Function: FUN_00012fb0 */

void FUN_00012fb0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_668;
  int local_664 [403];
  
  if (param_1 != 0) {
    FUN_0001f478(&local_668,param_1 + 0xc,0x644);
    iVar1 = DAT_000137cc;
    uVar5 = 0;
    while (uVar4 = uVar5, uVar4 < local_668) {
      uVar3 = 0;
      iVar2 = local_664[uVar4 * 4];
      uVar5 = uVar4;
      do {
        iVar6 = iVar1 + uVar3 * 0x14;
        if (*(int *)(iVar6 + 8) == iVar2) {
          *(int *)(iVar6 + 0xc) = local_664[uVar4 * 4 + 2];
          *(int *)(iVar6 + 0x10) = local_664[uVar4 * 4 + 3];
        }
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 + (0x12 < uVar3);
      } while (0x12 >= uVar3);
    }
  }
  return;
}



/* Function: FUN_00013038 */

void FUN_00013038(undefined4 *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_100 [200];
  undefined4 local_38;
  undefined2 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 local_18;
  undefined1 local_17;
  
  iVar3 = *(int *)(DAT_000137d0 + 0x18);
  iVar5 = (uint)*(ushort *)(iVar3 + 0x14) * (uint)*(ushort *)(iVar3 + 0x18);
  uVar2 = *(ushort *)(iVar3 + 0x1a);
  *param_1 = DAT_000137d4;
  param_1[1] = 1;
  param_1[0x53] = (uint)*(ushort *)(iVar3 + 0x14);
  param_1[0x54] = (uint)*(byte *)(iVar3 + 0x2a);
  param_1[0x55] = 0;
  param_1[0x56] = (uint)*(byte *)(iVar3 + 0x29);
  param_1[0x57] = (uint)*(ushort *)(iVar3 + 0x16);
  bVar1 = *(byte *)(iVar3 + 0x24);
  if (bVar1 == 8) {
    uVar4 = 3;
  }
  else if (bVar1 < 9) {
    if (bVar1 == 1) {
      uVar4 = 0;
    }
    else if (bVar1 == 2) {
      uVar4 = 1;
    }
    else {
      if (bVar1 != 4) {
LAB_000130f4:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar4 = 2;
    }
  }
  else if (bVar1 == 0xc) {
    uVar4 = 4;
  }
  else if (bVar1 == 0x10) {
    uVar4 = 5;
  }
  else {
    if (bVar1 != 0x18) goto LAB_000130f4;
    uVar4 = 6;
  }
  param_1[0x58] = uVar4;
  param_1[0x59] = (uint)*(byte *)(iVar3 + 0x23);
  param_1[0x5a] = (uint)*(ushort *)(iVar3 + 0x18);
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  uVar4 = func_0xffff1488((uint)uVar2 * iVar5);
  param_1[0x78] = uVar4;
  uVar4 = func_0xffff1488(iVar5);
  param_1[0x79] = uVar4;
  FUN_0001f538(param_1 + 0x7a,0x14);
  FUN_0001f538(param_1 + 0x5d,0x6c);
  local_38 = 0;
  FUN_0001f4dc(auStack_100,200,0xff);
  local_30 = 0x200;
  local_17 = 0;
  local_2c = 0;
  local_1c = 0;
  local_34 = 0;
  local_38 = 0x6c0128;
  local_1a = 0;
  local_18 = 0;
  local_28 = param_1;
  local_24 = auStack_100;
  func_0xffff32a8(&local_38);
  FUN_0001f3a4(param_1 + 0x5d,local_24,0x6c);
  return;
}



/* Function: FUN_000131b4 */

undefined4 FUN_000131b4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = DAT_000137d0;
  uVar4 = (uint)*(ushort *)(*(int *)(DAT_000137d0 + 0x18) + 0x14) *
          (uint)*(ushort *)(*(int *)(DAT_000137d0 + 0x18) + 0x18);
  iVar2 = func_0xffff15ec(*(undefined4 *)(DAT_000137d0 + 0x20),0);
  if ((iVar2 == 0) && (iVar2 = func_0xffff15ec(*(undefined4 *)(iVar1 + 0x20),1), iVar2 == 0)) {
    FUN_00013038(param_1);
    func_0xffff0774();
    func_0xffff0734();
    for (uVar3 = 0; uVar3 < 0x8000 / uVar4; uVar3 = uVar3 + 1) {
      iVar2 = func_0xffff2fd0(*(undefined4 *)(iVar1 + 0x20),0,uVar3,0,
                              *(undefined2 *)(*(int *)(iVar1 + 0x18) + 0x18),uVar3 * uVar4 + param_1
                              ,0,1,0);
      if (iVar2 != 0) goto LAB_000132b4;
    }
    uVar3 = 0;
    while( true ) {
      if (0x8000 / uVar4 <= uVar3) {
        func_0xffff0754();
        return 0;
      }
      iVar2 = func_0xffff2fd0(*(undefined4 *)(iVar1 + 0x20),1,uVar3,0,
                              *(undefined2 *)(*(int *)(iVar1 + 0x18) + 0x18),uVar3 * uVar4 + param_1
                              ,0,1,0);
      if (iVar2 != 0) break;
      uVar3 = uVar3 + 1;
    }
LAB_000132b4:
    func_0xffff0754();
  }
  return 1;
}



/* Function: FUN_000132d8 */

void FUN_000132d8(void)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_18;
  
  iVar1 = DAT_000137d0;
  local_18 = 0;
  *(undefined1 **)(DAT_000137d0 + 0xc) = &LAB_00011c00;
  puVar2 = DAT_000137d8;
  *DAT_000137d8 = *DAT_000137d8 | 0x400;
  puVar2[2] = puVar2[2] | 8;
  puVar2 = DAT_000137dc;
  *DAT_000137dc = *DAT_000137dc | 0x4000;
  puVar2[1] = puVar2[1] | 0x4000;
  iVar4 = 0x32;
  do {
    bVar6 = iVar4 != 0;
    iVar4 = iVar4 + -1;
  } while (bVar6);
  puVar2[1] = puVar2[1] & 0xffffbfff;
  FUN_00012f48();
  *(undefined4 *)(DAT_000137e0 + 0xc) = 0;
  FUN_00001a98();
  thunk_FUN_0000cd34();
  FUN_00002e94();
  (*(code *)*DAT_000137e4)(DAT_000137e4,DAT_000137e8);
  func_0xffff09d0(DAT_000137ec);
  iVar4 = func_0xffff0e08(0);
  *(int *)(iVar1 + 0x20) = iVar4;
  if (iVar4 != 0) {
    func_0xffff0ba4();
    func_0xffff0fa8(*(undefined4 *)(iVar1 + 0x20),&local_18);
    iVar4 = FUN_000149d8(CONCAT11((undefined1)local_18,local_18._1_1_),0);
    *(int *)(iVar1 + 0x18) = iVar4;
    if (iVar4 == 0) {
      func_0xffff37ac(*(undefined4 *)(iVar1 + 0x20));
      return;
    }
    FUN_00016590();
    iVar4 = FUN_00016790(0);
    if (iVar4 == 0) {
      FUN_0001685a(0,DAT_000137f0);
      FUN_00012fb0(DAT_000137f0);
      piVar3 = DAT_000137f0;
      iVar4 = DAT_000137f0[1];
      iVar5 = DAT_000137f0[2];
      *(int *)(iVar1 + 4) = iVar5 * iVar4;
      *(int *)(iVar1 + 8) = *piVar3 * iVar5 * iVar4;
    }
  }
  return;
}



/* Function: FUN_00013410 */

undefined4 FUN_00013410(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_r11;
  int local_4c;
  int local_48;
  undefined1 auStack_44 [8];
  uint local_3c;
  int local_38;
  undefined4 local_34;
  uint uStack_30;
  uint local_2c;
  int iStack_28;
  
  uVar6 = 0;
  uVar7 = 0;
  uVar9 = 0;
  local_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  iVar3 = FUN_00016920(0,*(undefined4 *)(DAT_000137cc + param_4 * 0x14 + 8),DAT_000137cc + -0xa0,4);
  iVar1 = DAT_000137d0;
  if (iVar3 == 0) {
    iVar4 = FUN_00016a06(*(undefined4 *)(DAT_000137d0 + 0x1c),auStack_44);
    iVar3 = DAT_000137f4;
    puVar2 = DAT_000137f0;
    if (iVar4 == 0) {
      if (param_4 == 4) {
        iVar4 = DAT_000137f4 + 0x100000;
        if (local_3c < 0x100000 / *DAT_000137f0) {
          uVar9 = local_3c * *DAT_000137f0;
        }
        else {
          uVar9 = 0x100000;
        }
        FUN_0001f4dc(DAT_000137f4,0x100000,0xff);
        FUN_0001f4dc(iVar4,0x100000,0xff);
        iVar5 = FUN_00005234(local_34,iVar4,param_2,&local_4c);
        if (iVar5 != 0) {
          return 7;
        }
        iVar5 = FUN_00016a72(*(undefined4 *)(iVar1 + 0x1c),0,uVar9 / *puVar2,iVar3);
        if (iVar5 != 0 && iVar5 != 4) {
          FUN_00016c24(*(undefined4 *)(iVar1 + 0x1c));
          return 0x11;
        }
        iVar3 = FUN_000149c4(iVar3,uVar9,iVar4,param_2,DAT_000137f8);
        if (iVar3 == 1) {
          iVar3 = FUN_00016b56(*(undefined4 *)(iVar1 + 0x1c),0,uVar9 / *puVar2);
          if (iVar3 != 0) goto LAB_000134b4;
          iVar3 = FUN_00016ae4(*(undefined4 *)(iVar1 + 0x1c),0,uVar9 / *puVar2,iVar4);
          if (iVar3 == 0) goto LAB_000136fc;
        }
        return 0x10;
      }
      if ((local_38 != 0 && param_4 != 2) &&
         (iVar3 = FUN_00016b56(*(undefined4 *)(iVar1 + 0x1c),0,local_3c), iVar3 != 0)) {
LAB_000134b4:
        FUN_00016c24(*(undefined4 *)(iVar1 + 0x1c));
        return 0xf;
      }
      iVar3 = 0;
      if (param_4 != 2) {
        unaff_r11 = 10;
      }
      local_48 = DAT_000137f4;
      if (param_4 == 2) {
        iVar3 = FUN_00005234(local_34,DAT_000137f4,param_2,&local_4c);
        if (iVar3 == 0) {
          iVar3 = FUN_000131b4(local_48);
          if (iVar3 != 0) {
            return 1;
          }
          goto LAB_000136fc;
        }
      }
      else {
        while( true ) {
          if (uVar7 == unaff_r11 * (uVar7 / unaff_r11)) {
            FUN_00011b48((uVar6 * 100) / param_2 & 0xff,100);
          }
          uVar7 = uVar7 + 1;
          uVar8 = param_2 - uVar6;
          if (*(uint *)(iVar1 + 8) < param_2 - uVar6) {
            uVar8 = *(uint *)(iVar1 + 8);
          }
          FUN_0001f4dc(local_48,0x100000,0xff);
          iVar4 = FUN_00005234(local_34,local_48,uVar8,&local_4c);
          if (iVar4 != 0) {
            return 7;
          }
          uVar9 = FUN_00000cf8(uVar9,local_48,local_4c);
          uVar9 = uVar9 & 0xffff;
          iVar4 = FUN_00016ae4(*(undefined4 *)(iVar1 + 0x1c),iVar3,*(undefined4 *)(iVar1 + 4),
                               local_48);
          if (iVar4 != 0) {
            return 0x10;
          }
          iVar3 = iVar3 + *(int *)(iVar1 + 4);
          uVar6 = uVar6 + local_4c;
          if (uVar6 == param_2) break;
          thunk_FUN_000034fc(30000);
        }
        if (uVar9 == local_2c) {
LAB_000136fc:
          FUN_00016c24(*(undefined4 *)(iVar1 + 0x1c));
          FUN_00011b48(100);
          return 0;
        }
        FUN_000009f8(s_TF_Do_Program__newcrc_0x_x__orgc_000137fc,uVar9,local_2c);
      }
      return 7;
    }
    FUN_00016c24(*(undefined4 *)(iVar1 + 0x1c));
  }
  return 0xe;
}



/* Function: FUN_00013904 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_00013904(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  code *pcVar9;
  int iVar10;
  code *pcVar11;
  bool bVar12;
  undefined1 auStack_d08 [8];
  int local_d00;
  code *local_cfc;
  undefined1 auStack_ae4 [48];
  code *local_ab4;
  undefined1 auStack_ab0 [1024];
  char *local_6b0;
  undefined4 local_69c;
  undefined1 auStack_298 [512];
  undefined1 auStack_98 [100];
  code *local_34 [3];
  
  local_34[0] = Reset;
  if (_LAB_00011c00 == DAT_00013b24) {
    _LAB_00011c00 = 0;
    FUN_00014218();
    return Reset;
  }
  FUN_00004fe4(0,DAT_00013b28);
  pcVar11 = (code *)auStack_298;
  iVar1 = FUN_0001403c(param_1,u_tfload_pac_00013b2c,pcVar11);
  if (iVar1 != 0) {
    return (code *)0x1;
  }
  iVar1 = FUN_00005024(auStack_d08,pcVar11,1);
  if (iVar1 != 0) {
    return Reset;
  }
  if (local_cfc < &DAT_0000084c) {
    pcVar2 = s_TF_Load__nPacketSize_0x_x_00013b44;
    pcVar11 = SupervisorCall;
    pcVar9 = local_cfc;
  }
  else {
    pcVar9 = (code *)auStack_ae4;
    iVar1 = FUN_00005234(auStack_d08,pcVar9,0x84c,local_34);
    if (iVar1 == 0) {
      local_69c = 1;
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x18);
      if (local_34[0] == (code *)&DAT_0000084c) {
        iVar1 = FUN_00000a48(pcVar9,DAT_00013b88);
        uVar3 = 0;
        if (iVar1 == 0) {
          do {
            uVar3 = uVar3 + 1;
          } while (uVar3 < 0x100);
          iVar4 = FUN_00000a48(auStack_ab0,DAT_00013ba8);
          iVar1 = DAT_00013c18;
          if (iVar4 == 0) {
            if (local_ab4 == local_cfc) {
              if (local_6b0 == (char *)0x0) {
                pcVar11 = SupervisorCall;
                pcVar2 = s_TF_Load__err_packet_file_count___00013bf4;
                pcVar9 = Reset;
              }
              else {
                local_34[0] = Reset;
                FUN_0001f538(DAT_00013c18,(int)local_6b0 * 0xa14);
                iVar4 = FUN_00005234(auStack_d08,iVar1,(int)local_6b0 * 0xa14,local_34);
                pcVar9 = local_34[0];
                if (iVar4 == 0) {
                  bVar12 = local_34[0] == (code *)((int)local_6b0 * 0xa14);
                  pcVar2 = local_6b0;
                  if (!bVar12) {
                    pcVar11 = SupervisorCall;
                    pcVar2 = s_TF_Load__err_read_file_size_2____00013c40;
                  }
                  pcVar8 = (char *)0x0;
                  if (bVar12) {
                    local_6b0 = pcVar2 + -1;
                    for (; pcVar8 < local_6b0; pcVar8 = pcVar8 + 1) {
                      FUN_00005818(auStack_d08,
                                   local_d00 + *(int *)(iVar1 + (int)pcVar8 * 0xa14 + 0x604));
                    }
                    FUN_00005234(auStack_d08,DAT_000137f8,
                                 *(undefined4 *)(iVar1 + (int)local_6b0 * 0xa14 + 0x604),local_34);
                    FUN_000057fc(auStack_d08);
                    iVar4 = FUN_00005024(auStack_d08,pcVar11,1);
                    if (iVar4 != 0) {
                      return Reset;
                    }
                    FUN_00005818(auStack_d08,(int)local_6b0 * 0xa14 + 0x1260);
                    iVar4 = DAT_000137cc;
                    pcVar2 = (char *)0x0;
                    do {
                      iVar7 = DAT_00013f90;
                      if (local_6b0 <= pcVar2) {
                        return Reset;
                      }
                      iVar10 = iVar1 + (int)pcVar2 * 0xa14;
                      uVar3 = 0;
                      do {
                        uVar3 = uVar3 + 1;
                      } while (uVar3 < 0x100);
                      pcVar9 = Reset;
                      do {
                        iVar5 = FUN_00000a48(iVar10 + 4,*(undefined4 *)(iVar7 + (int)pcVar9 * 4));
                        if (iVar5 == 0) {
                          FUN_0001f538(auStack_98,100);
                          iVar7 = DAT_00013fc0;
                          FUN_000009f8(s_TF_Load__err__pac_ver____s_00013b8c + 0x18,
                                       *(undefined4 *)(DAT_00013fc0 + (int)pcVar9 * 4));
                          uVar6 = FUN_0001f36a(*(undefined4 *)(iVar7 + (int)pcVar9 * 4));
                          FUN_0001f3a4(auStack_98,*(undefined4 *)(iVar7 + (int)pcVar9 * 4),uVar6);
                          uVar6 = FUN_0001f36a(auStack_98);
                          FUN_0001198c(auStack_98,uVar6);
                          break;
                        }
                        pcVar9 = pcVar9 + 1;
                      } while (pcVar9 < (code *)0x13);
                      pcVar11 = *(code **)(iVar10 + 0x604);
                      if (((int)pcVar11 < 0) || (local_cfc <= pcVar11)) {
                        FUN_000009f8(s_TF_Load__nfilesize_error__nFileS_00013f94);
                      }
                      else {
                        iVar7 = *(int *)(iVar4 + (int)pcVar9 * 0x14 + 4);
                        if (iVar7 == 2) {
                          FUN_00005818(auStack_d08,pcVar11 + local_d00);
                        }
                        else {
                          if (iVar7 == 1) {
                            pcVar11 = (code *)FUN_00014178(pcVar9);
                            if (pcVar11 != Reset) {
                              pcVar2 = s_TF_Load__err_do_flash_erase__fil_00013fc4;
                              break;
                            }
                            pcVar11 = *(code **)(iVar10 + 0x604);
LAB_00013de0:
                            FUN_00005818(auStack_d08,pcVar11 + local_d00);
                          }
                          else {
                            if (iVar7 != 0) goto LAB_00013de0;
                            if ((pcVar11 != Reset) &&
                               (pcVar11 = (code *)FUN_00013410(auStack_d08,pcVar11,
                                                               *(uint *)(iVar10 + 0x630) & 0xffff,
                                                               pcVar9), pcVar11 != Reset)) {
                              FUN_000009f8(s_TF_Load__err_do_program_nfiletyp_00013ff4,pcVar9,
                                           *(undefined4 *)(iVar10 + 0x604));
                              return pcVar11;
                            }
                          }
                          thunk_FUN_000034fc(30000);
                        }
                      }
                      pcVar2 = pcVar2 + 1;
                    } while( true );
                  }
                }
                else {
                  pcVar2 = s_TF_Load__err_read_file_size_1____00013c1c;
                  pcVar11 = (code *)0x7;
                }
              }
            }
            else {
              pcVar11 = SupervisorCall;
              pcVar2 = s_TF_Load__err_packet_file_size_____00013bd0;
              pcVar9 = local_ab4;
            }
          }
          else {
            pcVar9 = (code *)auStack_ab0;
            pcVar11 = SupervisorCall;
            pcVar2 = s_TF_Load__err__pac_product_name___00013bac;
          }
          goto LAB_00013a14;
        }
      }
      pcVar2 = s_TF_Load__err__pac_ver____s_00013b8c;
      pcVar11 = SupervisorCall;
    }
    else {
      pcVar2 = s_TF_Load__err_packet_header_size___00013b60;
      pcVar11 = (code *)0x7;
      pcVar9 = local_34[0];
    }
  }
LAB_00013a14:
  FUN_000009f8(pcVar2,pcVar9);
  return pcVar11;
}



/* Function: FUN_00013e84 */

void FUN_00013e84(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined1 auStack_28 [14];
  undefined2 local_1a;
  undefined2 local_18;
  undefined4 local_10;
  
  iVar2 = DAT_000137d0;
  *(undefined4 *)(*(int *)(DAT_000137d0 + 0xc) + 8) = DAT_00013c18;
  uVar1 = thunk_FUN_0000cbfc();
  *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x48) = uVar1;
  FUN_0000cc04(0,auStack_28);
  iVar2 = *(int *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0xc) = unaff_r5;
  *(undefined4 *)(iVar2 + 0x10) = unaff_r7;
  *(undefined4 *)(iVar2 + 0x14) = unaff_r6;
  *(undefined4 *)(iVar2 + 0x48) = local_10;
  *(undefined2 *)(iVar2 + 0x28) = local_18;
  *(undefined2 *)(iVar2 + 0x26) = local_1a;
  FUN_00011a18();
  return;
}



/* Function: FUN_00013ee8 */

undefined4 FUN_00013ee8(int param_1)

{
  return *(undefined4 *)(DAT_00014034 + param_1 * 4);
}



/* Function: FUN_0001403c */

undefined4 FUN_0001403c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  short *psVar3;
  undefined1 auStack_480 [8];
  byte local_478;
  short local_476 [13];
  short *local_45c;
  undefined4 local_458;
  undefined1 auStack_454 [512];
  undefined1 auStack_254 [512];
  undefined1 auStack_54 [36];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  bVar1 = false;
  local_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  FUN_0001f538(auStack_454,0x200);
  FUN_0001f538(auStack_254,0x200);
  local_45c = DAT_000142e0;
  local_458 = 0x3fe;
  iVar2 = FUN_00005a58(auStack_54,local_30);
  if (iVar2 == 0) {
    FUN_00000b34(local_30);
    do {
      do {
        do {
          iVar2 = FUN_00005b00(auStack_54,auStack_480);
          if ((iVar2 != 0) || (local_476[0] == 0)) goto LAB_00014134;
        } while (local_476[0] == 0x2e);
        psVar3 = local_45c;
        if (*local_45c == 0) {
          psVar3 = local_476;
        }
      } while ((local_478 & 0x10) != 0);
      FUN_0001f538(auStack_454,0x200);
      FUN_00000b10(auStack_454,psVar3);
      FUN_00000be4(auStack_454);
      iVar2 = FUN_00000a48(auStack_454,local_2c);
    } while (iVar2 != 0);
    bVar1 = true;
    FUN_00000b10(auStack_254,psVar3);
LAB_00014134:
    if (bVar1) {
      FUN_00000b10(param_3,local_30);
      FUN_00000ba4(param_3,&DAT_000142e4);
      FUN_00000ba4(param_3,auStack_254);
      return 0;
    }
  }
  return 2;
}



/* Function: FUN_00014178 */

undefined4 FUN_00014178(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iStack_18 = param_1;
  uStack_14 = param_2;
  local_10 = param_3;
  uStack_c = param_4;
  iVar2 = FUN_00016920(0,*(undefined4 *)(DAT_000137cc + param_1 * 0x14 + 8),DAT_000137cc + -0xa0,4);
  iVar1 = DAT_000137d0;
  if (iVar2 == 0) {
    iVar2 = FUN_00016a06(*(undefined4 *)(DAT_000137d0 + 0x1c),&iStack_18);
    if (iVar2 == 0) {
      iVar2 = FUN_00016b56(*(undefined4 *)(iVar1 + 0x1c),0,local_10);
      if (iVar2 != 0) {
        FUN_00016c24(*(undefined4 *)(iVar1 + 0x1c));
        return 0xf;
      }
      FUN_00016c24(*(undefined4 *)(iVar1 + 0x1c));
      FUN_00011b48(100);
      return 0;
    }
    FUN_00016c24(*(undefined4 *)(iVar1 + 0x1c));
  }
  return 0xe;
}



/* Function: FUN_00014218 */

undefined4 FUN_00014218(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_238 [548];
  undefined1 auStack_14 [4];
  
  FUN_000009f8(s_TF_System_Dump___0001431c);
  uVar1 = FUN_0001f36a(s_tf_system_dump_begin_______000142e8);
  FUN_0001198c(s_tf_system_dump_begin_______000142e8,uVar1);
  FUN_00004fe4(0,DAT_00013b28);
  FUN_00005f54(u_0__tf_log_00014330);
  iVar2 = FUN_00005024(auStack_238,u_0__tf_Log_sysdump_mem_00014344,10);
  if (iVar2 == 0) {
    uVar3 = 0;
    do {
      FUN_0000545c(auStack_238,uVar3 * 0x80000 + -0x80000000,0x80000,auStack_14);
      FUN_00011b48((uVar3 + 1) * 100 >> 7);
      thunk_FUN_000034fc(30000);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x80);
    FUN_000057fc(auStack_238);
    uVar1 = FUN_0001f36a(s_tf_system_dump_finish_00014304);
    FUN_0001198c(s_tf_system_dump_finish_00014304,uVar1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_00014370 */

undefined4 FUN_00014370(void)

{
  return DAT_00014378;
}



/* Function: FUN_0001437c */

void FUN_0001437c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    uVar2 = (uint)*(byte *)(param_1 + iVar3);
    if (uVar2 == 0) {
      return;
    }
    if ((uVar2 != 0x20) && (uVar2 != 0x78 && uVar2 != 0x58 || iVar1 != 0)) {
      if (uVar2 - 0x30 < 10) {
        iVar1 = uVar2 + iVar1 * 0x10 + -0x30;
      }
      else if (uVar2 - 0x61 < 6) {
        iVar1 = uVar2 + iVar1 * 0x10 + -0x57;
      }
      else {
        if (5 < uVar2 - 0x41) {
          return;
        }
        iVar1 = uVar2 + iVar1 * 0x10 + -0x37;
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



/* Function: FUN_000143f8 */

undefined4 FUN_000143f8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  
  FUN_0001f4ec(DAT_00014504,0x80000);
  iVar1 = FUN_0001f2a8(param_1,s_<NVBackup_00014508);
  iVar2 = FUN_0001f2a8(param_1,s_<_NVBackup>_00014514);
  if (iVar1 == 0 || iVar2 == 0) {
    pcVar3 = s_The_xml_file_is_incomplete__00014520;
  }
  else {
    FUN_0001f588(DAT_00014504,iVar1,iVar2 - iVar1);
    uVar6 = 0;
    iVar1 = DAT_00014504;
    do {
      iVar2 = FUN_0001f2a8(iVar1,s_<NVItem_name___00014540);
      if (iVar2 == 0) break;
      iVar4 = FUN_0001f2a8(iVar2 + 0xe,&DAT_00014550);
      if (iVar4 == 0) {
        pcVar3 = s_nv_name_end_is_NULL_the_nv_iteam_00014554;
        iVar4 = iVar1;
LAB_00014614:
        FUN_000009f8(pcVar3);
      }
      else {
        if (0x31 < iVar4 - iVar2) {
          iVar4 = iVar2 + 0x31;
          FUN_000009f8(s_nv_table__d__name_too_long___00014588,uVar6);
        }
        iVar7 = param_2 + uVar6 * 0x38;
        FUN_0001f588(iVar7,iVar2 + 0xe,(iVar4 - iVar2) + -0xe);
        iVar1 = FUN_0001f2a8(iVar4,&DAT_000145a8);
        if (iVar1 == 0) {
          pcVar3 = s_nv_id_start_is_NULL_the_nv_iteam_000145b0;
          goto LAB_00014614;
        }
        iVar2 = FUN_0001f2a8(iVar1,&DAT_000145a8);
        if (iVar2 == 0) {
          pcVar3 = s_nv_id_end_is_NULL_the_nv_iteam_i_000145e4;
          goto LAB_00014614;
        }
        iVar1 = FUN_0001437c(iVar1 + 4);
        *(int *)(iVar7 + 0x34) = iVar1;
        if (iVar1 == -1) {
          iVar1 = FUN_0001f5f4(iVar7,s_Calibration_000148cc);
          if (iVar1 == 0) {
            *(undefined4 *)(iVar7 + 0x34) = 2;
            FUN_0001f324(iVar7 + 0x38,s_W_Calibration_000148d8);
            *(undefined4 *)(iVar7 + 0x6c) = 0x12d;
            uVar6 = uVar6 + 1 & 0xff;
          }
          iVar1 = param_2 + uVar6 * 0x38;
          if ((*(int *)(iVar1 + 0x34) == -1) &&
             (iVar2 = FUN_0001f5f4(iVar1,&DAT_000148e8), iVar2 == 0)) {
            *(undefined4 *)(iVar1 + 0x34) = 5;
            FUN_0001f324(iVar1 + 0x38,s_IMEI2_000148f0);
            *(undefined4 *)(iVar1 + 0x6c) = 0x179;
            FUN_0001f324(iVar1 + 0x70,s_IMEI3_000148f8);
            *(undefined4 *)(iVar1 + 0xa4) = 0x186;
            FUN_0001f324(iVar1 + 0xa8,s_IMEI4_00014900);
            *(undefined4 *)(iVar1 + 0xdc) = 0x1e4;
            uVar6 = uVar6 + 3 & 0xff;
          }
        }
      }
      uVar6 = uVar6 + 1 & 0xff;
      iVar1 = iVar4;
    } while (uVar6 < 200);
    if ((int)(uVar6 + 1) <= param_3 + -1) {
      puVar5 = (undefined1 *)(param_2 + uVar6 * 0x38);
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 0x34) = 0xffffffff;
      return 1;
    }
    pcVar3 = s_too_many_nv_item_need_to_backup__00014908;
  }
  FUN_000009f8(pcVar3);
  return 0;
}



/* Function: FUN_00014718 */

undefined4 FUN_00014718(uint param_1,int param_2,uint param_3,uint *param_4,int *param_5)

{
  uint uVar1;
  bool bVar2;
  uint *local_28;
  
  uVar1 = 4;
  local_28 = param_4;
  while( true ) {
    if ((*(short *)(param_2 + uVar1) == -1) || (param_3 < uVar1 + 4)) {
      return 0;
    }
    FUN_0001f3a4(&local_28,param_2 + uVar1,4);
    bVar2 = ((uint)local_28 & 0xffff) == param_1;
    if (bVar2) {
      *param_5 = uVar1 + 4;
    }
    if (bVar2) break;
    uVar1 = ((uint)local_28 >> 0x10) + uVar1 + 4 + 3 & 0xfffffffc;
  }
  *param_4 = (uint)local_28 >> 0x10;
  return 1;
}



/* Function: FUN_00014798 */

undefined4
FUN_00014798(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int local_2c1c;
  int iStack_2c18;
  int local_2c14;
  int local_2c10;
  undefined1 auStack_2c0c [52];
  int local_2bd8 [2798];
  
  FUN_0001f538(auStack_2c0c,&LAB_00002bc0);
  iVar1 = FUN_000143f8(param_5,auStack_2c0c,200);
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar1 = 0;
    while( true ) {
      puVar5 = auStack_2c0c + iVar1 * 0x38;
      iVar3 = FUN_0001f5f4(puVar5,&DAT_000148ec);
      if (iVar3 == 0) break;
      iVar3 = FUN_00014718(local_2bd8[iVar1 * 0xe],param_1,param_2,&local_2c1c,&local_2c14);
      if (iVar3 == 0) {
        pcVar2 = s_mergeItem_item__s__d__not_find_i_0001492c;
      }
      else {
        iVar3 = FUN_00014718(local_2bd8[iVar1 * 0xe],param_3,param_4,&iStack_2c18,&local_2c10);
        if (iVar3 == 0) {
          pcVar2 = s_mergeItem_item_s___d__not_find_i_0001495c;
        }
        else {
          if (local_2c1c != iStack_2c18) {
            FUN_000009f8(DAT_000149c0,puVar5,local_2bd8[iVar1 * 0xe],local_2c1c,iStack_2c18);
            return 0;
          }
          FUN_0001f3a4(local_2c10 + param_3,param_1 + local_2c14);
          puVar5 = (undefined1 *)local_2bd8[iVar1 * 0xe];
          pcVar2 = s_NVMERGE___mergeItem_success_id___0001498c;
        }
      }
      FUN_000009f8(pcVar2,puVar5);
      iVar1 = iVar1 + 1;
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* Function: FUN_000149c4 */

void FUN_000149c4(void)

{
  FUN_00014798();
  return;
}



/* Function: FUN_000149d8 */

void FUN_000149d8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = 0;
  while( true ) {
    piVar3 = (int *)(DAT_00014a1c + iVar1 * 0x38);
    iVar2 = *piVar3;
    iVar4 = piVar3[1];
    if (iVar2 == 0 && iVar4 == 0) {
      return;
    }
    if (iVar2 == param_1 && iVar4 == param_2) break;
    iVar1 = iVar1 + 1;
  }
  return;
}



/* Function: FUN_00014a64 */

void FUN_00014a64(void)

{
  ushort uVar1;
  ushort uVar2;
  
  FUN_0000cd04();
  FUN_0000e1c0(10);
  FUN_0000e154(0xfe,0);
  FUN_0000e154(0xfe,0);
  FUN_0000e154(0xef,0);
  FUN_0000e154(0xb3,0);
  FUN_0000e164(3,0);
  FUN_0000e154(0xb6,0);
  FUN_0000e164(0x10,0);
  FUN_0000e154(0xac,0);
  FUN_0000e164(0xb,0);
  FUN_0000e154(0xa3,0);
  FUN_0000e164(0x11,0);
  FUN_0000e154(0x21,0);
  FUN_0000e154(0x36,0);
  FUN_0000e164(0xd0,0);
  FUN_0000e154(0x3a,0);
  FUN_0000e164(5,0);
  FUN_0000e154(0xb4,0);
  FUN_0000e164(0x21,0);
  FUN_0000e154(0xf0,0);
  FUN_0000e164(0x31,0);
  FUN_0000e164(0x4c,0);
  FUN_0000e164(0x24,0);
  FUN_0000e164(0x58,0);
  FUN_0000e164(0xa8,0);
  FUN_0000e164(0x26,0);
  FUN_0000e164(0x28,0);
  FUN_0000e164(0);
  FUN_0000e164(0x2c,0);
  FUN_0000e164(0xc,0);
  FUN_0000e164(0xc,0);
  FUN_0000e164(0x15,0);
  FUN_0000e164(0x15,0);
  FUN_0000e164(0xf,0);
  FUN_0000e154(0xf1,0);
  FUN_0000e164(0xe,0);
  FUN_0000e164(0x2d,0);
  FUN_0000e164(0x24,0);
  FUN_0000e164(0x3e,0);
  FUN_0000e164(0x99,0);
  FUN_0000e164(0x12,0);
  FUN_0000e164(0x13,0);
  FUN_0000e164(0);
  FUN_0000e164(10,0);
  FUN_0000e164(0xd,0);
  FUN_0000e164(0xd,0);
  FUN_0000e164(0x14,0);
  FUN_0000e164(0x13,0);
  FUN_0000e164(0xf,0);
  FUN_0000e154(0x35,0);
  FUN_0000e164(0);
  FUN_0000e154(0xfe,0);
  FUN_0000e154(0xff,0);
  FUN_0000e154(0x11,0);
  FUN_0000e1c0(0x78);
  FUN_0000e154(0x29,0);
  uVar2 = 0;
  do {
    uVar1 = 0;
    do {
      FUN_0000e164(0);
      FUN_0000e164(0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0xa0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x80);
  FUN_0000e1c0(0x78);
  return;
}



/* Function: FUN_00014d50 */

undefined4 FUN_00014d50(void)

{
  FUN_000006c8(s_GC9106_Init_00015034);
  FUN_00014a64();
  return 0;
}



/* Function: FUN_00014d68 */

undefined4 FUN_00014d68(int param_1)

{
  FUN_000006c8(s_qinss_LCD__in_GC9106_EnterSleep__00015040,param_1);
  if (param_1 == 0) {
    FUN_000006c8(s_qinss_LCD__GC9106_mainlcd_id_____00015070,*(undefined4 *)(DAT_00015030 + 8));
    FUN_00014d50();
  }
  else {
    FUN_0000e154(0x28,0);
    FUN_0000e1c0(0x78);
    FUN_0000e154(0x10,0);
    FUN_0000e1c0(0x78);
  }
  return 0;
}



/* Function: FUN_00014e44 */

undefined4
FUN_00014e44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  undefined4 uVar1;
  
  if ((param_5 == 0) || ((uVar1 = param_4, param_5 != 1 && ((param_5 == 2 || (param_5 != 3)))))) {
    uVar1 = param_3;
    param_3 = param_4;
  }
  FUN_0001fca4(param_1,param_2,uVar1,param_3);
  return 0;
}



/* Function: FUN_00014ea0 */

undefined4 FUN_00014ea0(void)

{
  FUN_0001fca4();
  return 0;
}



/* Function: FUN_00014f14 */

undefined4 FUN_00014f14(void)

{
  byte *pbVar1;
  byte bVar2;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  
  FUN_0001f538(&local_24,0x14);
  FUN_0000e154(9,0);
  bVar2 = FUN_0000c4b0(0,1);
  pbVar1 = DAT_00015030;
  *DAT_00015030 = bVar2;
  bVar2 = FUN_0000c4b0(0,1);
  *pbVar1 = bVar2 & 0xfe;
  bVar2 = FUN_0000c4b0(0,1);
  pbVar1[1] = bVar2 & 0x7f;
  bVar2 = FUN_0000c4b0(0,1);
  pbVar1[2] = bVar2 & 7;
  bVar2 = FUN_0000c4b0(0,1);
  pbVar1[3] = bVar2 & 0xe0;
  *(uint *)(pbVar1 + 0x10) =
       (uint)*pbVar1 << 0x18 | (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 | (uint)pbVar1[3];
  FUN_000006c8(DAT_000150b4,*pbVar1,pbVar1[1],pbVar1[2],pbVar1[3],pbVar1[4],
               *(undefined4 *)(pbVar1 + 0x10));
  local_24 = (uint)*pbVar1;
  local_20 = (uint)pbVar1[1];
  local_1c = (uint)pbVar1[2];
  local_18 = (uint)pbVar1[3];
  local_14 = *(undefined4 *)(pbVar1 + 0x10);
  FUN_000006c8(DAT_000150b8,local_24,local_20,local_1c,local_18,local_14,
               *(undefined4 *)(pbVar1 + 0x10));
  return *(undefined4 *)(pbVar1 + 0x10);
}



/* Function: FUN_000155cc */

void FUN_000155cc(void)

{
  ushort uVar1;
  ushort uVar2;
  
  FUN_0000cd04();
  FUN_0000e1c0(10);
  FUN_0000e154(0xfe,0);
  FUN_0000e154(0xfe,0);
  FUN_0000e154(0xef,0);
  FUN_0000e154(0xb3,0);
  FUN_0000e164(3,0);
  FUN_0000e154(0xb6,0);
  FUN_0000e164(0x11,0);
  FUN_0000e154(0xac,0);
  FUN_0000e164(0xb,0);
  FUN_0000e154(0xa3,0);
  FUN_0000e164(0x11,0);
  FUN_0000e154(0x21,0);
  FUN_0000e154(0x36,0);
  FUN_0000e164(0xd0,0);
  FUN_0000e154(0x3a,0);
  FUN_0000e164(5,0);
  FUN_0000e154(0xb4,0);
  FUN_0000e164(0x21,0);
  FUN_0000e154(0xb1,0);
  FUN_0000e164(0xc0,0);
  FUN_0000e154(0xe6,0);
  FUN_0000e164(0x50,0);
  FUN_0000e164(0x43,0);
  FUN_0000e154(0xe7,0);
  FUN_0000e164(0x38,0);
  FUN_0000e164(0x43,0);
  FUN_0000e154(0xf0,0);
  FUN_0000e164(0xc,0);
  FUN_0000e164(0x46,0);
  FUN_0000e164(0x25,0);
  FUN_0000e164(0x56,0);
  FUN_0000e164(0xac,0);
  FUN_0000e164(0x24,0);
  FUN_0000e164(0x25,0);
  FUN_0000e164(0);
  FUN_0000e164(0);
  FUN_0000e164(0x12,0);
  FUN_0000e164(0x15,0);
  FUN_0000e164(0x16,0);
  FUN_0000e164(0x17,0);
  FUN_0000e164(0xf,0);
  FUN_0000e154(0xf1,0);
  FUN_0000e164(0);
  FUN_0000e164(0x26,0);
  FUN_0000e164(0x25,0);
  FUN_0000e164(0x3a,0);
  FUN_0000e164(0xb9,0);
  FUN_0000e164(0xf,0);
  FUN_0000e164(0x10,0);
  FUN_0000e164(0);
  FUN_0000e164(0);
  FUN_0000e164(7,0);
  FUN_0000e164(7,0);
  FUN_0000e164(0x17,0);
  FUN_0000e164(0x16,0);
  FUN_0000e164(0xf,0);
  FUN_0000e154(0x35,0);
  FUN_0000e164(0);
  FUN_0000e154(0xfe,0);
  FUN_0000e154(0xff,0);
  FUN_0000e154(0x11,0);
  FUN_0000e1c0(0x78);
  FUN_0000e154(0x29,0);
  FUN_0000e154(0x2c,0);
  uVar2 = 0;
  do {
    uVar1 = 0;
    do {
      FUN_0000e164(0);
      FUN_0000e164(0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0xa0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x80);
  FUN_0000e1c0(0x3c);
  return;
}



/* Function: FUN_00015a3c */

undefined4
FUN_00015a3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  undefined4 uVar1;
  
  if ((param_5 == 0) || ((uVar1 = param_4, param_5 != 1 && ((param_5 == 2 || (param_5 != 3)))))) {
    uVar1 = param_3;
    param_3 = param_4;
  }
  FUN_0001fbfc(param_1,param_2,uVar1,param_3);
  return 0;
}



/* Function: FUN_00015a98 */

undefined4 FUN_00015a98(void)

{
  FUN_0001fbfc();
  return 0;
}



/* Function: FUN_00015cc4 */

undefined4 FUN_00015cc4(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  FUN_0001f538(&local_1c,0x14);
  FUN_0000e154(9,0);
  FUN_0000c4b0(0,1);
  bVar2 = FUN_0000c4b0(0,1);
  bVar2 = bVar2 & 0xfe;
  bVar3 = FUN_0000c4b0(0,1);
  bVar3 = bVar3 & 0x7f;
  bVar4 = FUN_0000c4b0(0,1);
  bVar4 = bVar4 & 7;
  bVar5 = FUN_0000c4b0(0,1);
  bVar5 = bVar5 & 0xe0;
  uVar6 = (uint)bVar2 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar4 << 8 | (uint)bVar5;
  FUN_000006c8(DAT_0001610c,bVar2,bVar3,bVar4,bVar5,0,uVar6);
  local_1c = (uint)bVar2;
  local_18 = (uint)bVar3;
  local_14 = (uint)bVar4;
  local_10 = (uint)bVar5;
  local_c = uVar6;
  FUN_000006c8(DAT_00016110,local_1c,local_18,local_14,local_10,uVar6,uVar6);
  bVar1 = *DAT_00015b0c;
  bVar9 = bVar1 == bVar2;
  if (bVar9) {
    bVar1 = DAT_00015b0c[1];
    bVar2 = bVar3;
  }
  if (bVar9 && bVar1 == bVar2) {
    pbVar8 = (byte *)(uint)DAT_00015b0c[2];
    bVar9 = pbVar8 == (byte *)(uint)bVar4;
    pbVar7 = DAT_00015b0c;
    if (bVar9) {
      pbVar7 = (byte *)(uint)DAT_00015b0c[3];
      pbVar8 = (byte *)(uint)bVar5;
    }
    if (bVar9 && pbVar7 == pbVar8) {
      return 0;
    }
  }
  return 1;
}



/* Function: FUN_00016590 */

undefined4 FUN_00016590(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar1 = DAT_0001697c;
  *DAT_00016978 = 1;
  uVar5 = 0;
  do {
    uVar2 = uVar5 + 1;
    puVar4 = (undefined4 *)(iVar1 + uVar5 * 0xca0);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0xffffffff;
    puVar4[3] = 0;
    uVar5 = uVar2;
  } while (uVar2 < 2);
  if (uVar2 == 2) {
    uVar5 = 0;
    do {
      puVar4 = (undefined4 *)FUN_00014370();
      puVar6 = (undefined4 *)(iVar1 + uVar5 * 0xca0);
      puVar6[3] = puVar4;
      if ((((((code *)*puVar4 != Reset) && (puVar4[1] != 0)) && (puVar4[3] != 0)) &&
          ((((puVar4[4] != 0 && (puVar4[5] != 0)) &&
            ((puVar4[6] != 0 && ((puVar4[7] != 0 && (puVar4[8] != 0)))))) && (puVar4[9] != 0)))) &&
         (((puVar4[10] != 0 && (puVar4[0xb] != 0)) && (puVar4[0xc] != 0)))) {
        (*(code *)*puVar4)();
        *puVar6 = 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 2);
    uVar3 = 0;
  }
  else {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    }
    uVar3 = 7;
  }
  return uVar3;
}



/* Function: FUN_0001661e */

undefined4 FUN_0001661e(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (*param_1 < 0x65) {
    for (uVar2 = 0; uVar3 = uVar2, uVar2 < *param_1; uVar2 = uVar2 + 1) {
      while (uVar3 = uVar3 + 1, uVar3 < *param_1) {
        uVar5 = param_1[uVar2 * 4 + 3];
        uVar4 = param_1[uVar3 * 4 + 3];
        if (uVar4 < uVar5) {
          uVar7 = param_1[uVar3 * 4 + 1];
          uVar9 = param_1[uVar3 * 4 + 2];
          uVar8 = param_1[uVar3 * 4 + 4];
          uVar6 = param_1[uVar2 * 4 + 1];
          uVar10 = param_1[uVar2 * 4 + 2];
          param_1[uVar3 * 4 + 4] = param_1[uVar2 * 4 + 4];
          param_1[uVar3 * 4 + 1] = uVar6;
          param_1[uVar3 * 4 + 2] = uVar10;
          param_1[uVar3 * 4 + 3] = uVar5;
          param_1[uVar2 * 4 + 4] = uVar8;
          param_1[uVar2 * 4 + 1] = uVar7;
          param_1[uVar2 * 4 + 2] = uVar9;
          param_1[uVar2 * 4 + 3] = uVar4;
        }
        else if (uVar5 == uVar4) goto LAB_000166a0;
      }
    }
    for (uVar2 = 0; uVar2 < *param_1; uVar2 = uVar2 + 1) {
      uVar3 = param_1[uVar2 * 4 + 2];
      if ((((uVar3 != 1) && (uVar3 != 0x102)) && (uVar3 != 0x100)) && (uVar3 != 0x101))
      goto LAB_000166a0;
    }
    uVar1 = 1;
  }
  else {
LAB_000166a0:
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_00016790 */

int FUN_00016790(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int local_668;
  int local_664;
  int local_660;
  int local_65c;
  uint local_658 [401];
  
  iVar1 = FUN_00000754();
  piVar5 = (int *)(DAT_0001697c + param_1 * 0xca0);
  if ((iVar1 == 0) && (piVar5[2] != -1)) {
    return 7;
  }
  if (*piVar5 != 1) {
    iVar1 = 1;
    goto LAB_00016842;
  }
  if (*(code **)(piVar5[3] + 0xc) != Reset) {
    iVar1 = (**(code **)(piVar5[3] + 0xc))(param_1,&local_668);
    if (iVar1 != 0) goto LAB_00016842;
    iVar3 = FUN_0001661e(&local_65c);
    if (iVar3 != 0) {
      piVar5[4] = local_668;
      piVar5[5] = local_664;
      piVar5[6] = local_660;
      piVar5[7] = local_65c;
      for (uVar2 = 0; uVar2 < (uint)piVar5[7]; uVar2 = uVar2 + 1) {
        piVar5[uVar2 * 8 + 8] = 0;
        piVar5[uVar2 * 8 + 9] = 0;
        piVar5[uVar2 * 8 + 10] = 0;
        piVar5[uVar2 * 8 + 0xb] = local_658[uVar2 * 4];
        uVar4 = local_658[uVar2 * 4 + 1];
        piVar5[uVar2 * 8 + 0xc] = uVar4;
        piVar5[uVar2 * 8 + 0xd] = local_658[uVar2 * 4 + 2];
        piVar5[uVar2 * 8 + 0xe] = local_658[uVar2 * 4 + 3];
        if ((uVar4 & 0xff00) == 0) {
          piVar5[uVar2 * 8 + 0xf] = 0;
        }
        else {
          if ((uVar4 & 0xffff) >> 8 != 1) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          piVar5[uVar2 * 8 + 0xf] = local_660 * local_664;
        }
      }
      if (piVar5[7] == uVar2) {
        *piVar5 = 2;
      }
      goto LAB_00016842;
    }
    (**(code **)(piVar5[3] + 0x10))(param_1);
  }
  iVar1 = 7;
LAB_00016842:
  iVar3 = FUN_00000754();
  if (iVar3 != 0) {
    return iVar1;
  }
  if (piVar5[2] != -1) {
    return 7;
  }
  return iVar1;
}



/* Function: FUN_0001685a */

undefined4 FUN_0001685a(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00000754();
  piVar3 = (int *)(DAT_0001697c + param_1 * 0xca0);
  if ((iVar1 != 0) || (piVar3[2] == -1)) {
    if (*piVar3 == 2) {
      *param_2 = piVar3[4];
      param_2[1] = piVar3[5];
      param_2[2] = piVar3[6];
      param_2[3] = piVar3[7];
      for (uVar2 = 0; uVar2 < (uint)param_2[3]; uVar2 = uVar2 + 1) {
        param_2[uVar2 * 4 + 4] = piVar3[uVar2 * 8 + 0xb];
        param_2[uVar2 * 4 + 5] = piVar3[uVar2 * 8 + 0xc];
        param_2[uVar2 * 4 + 6] = piVar3[uVar2 * 8 + 0xd];
        param_2[uVar2 * 4 + 7] = piVar3[uVar2 * 8 + 0xe];
      }
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    iVar1 = FUN_00000754();
    if ((iVar1 != 0) || (piVar3[2] == -1)) {
      return uVar4;
    }
  }
  return 7;
}



/* Function: FUN_00016920 */

int FUN_00016920(int param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int local_28;
  
  uVar5 = 0;
  local_28 = param_4;
  iVar2 = FUN_00000754();
  piVar4 = (int *)(DAT_0001697c + param_1 * 0xca0);
  if ((iVar2 == 0) && (piVar4[2] != -1)) {
    return 7;
  }
  if ((*piVar4 == 2) || (*piVar4 == 3)) {
    while ((uVar5 < (uint)piVar4[7] && (piVar4[uVar5 * 8 + 0xb] != param_2))) {
      uVar5 = uVar5 + 1;
    }
    if (piVar4[7] == uVar5) {
      iVar2 = 5;
      goto LAB_000169ca;
    }
    if (piVar4[uVar5 * 8 + 8] == 0) {
      if (*(code **)(piVar4[3] + 0x14) == Reset) {
        iVar2 = 7;
      }
      else {
        iVar2 = (**(code **)(piVar4[3] + 0x14))(param_1,param_2,&local_28,param_4);
        piVar1 = DAT_00016d98;
        if (iVar2 == 0) {
          piVar4[uVar5 * 8 + 8] = 1;
          piVar4[uVar5 * 8 + 10] = local_28;
          iVar3 = *piVar1 + 1;
          *piVar1 = iVar3;
          piVar4[uVar5 * 8 + 9] = uVar5 | param_1 << 8 | iVar3 * 0x1000;
          piVar4[1] = piVar4[1] + 1;
          *param_3 = piVar4[uVar5 * 8 + 9];
          *piVar4 = 3;
        }
      }
      goto LAB_000169ca;
    }
  }
  iVar2 = 1;
LAB_000169ca:
  iVar3 = FUN_00000754();
  if (iVar3 != 0) {
    return iVar2;
  }
  if (piVar4[2] != -1) {
    return 7;
  }
  return iVar2;
}



/* Function: FUN_000169e0 */

undefined4 FUN_000169e0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = DAT_00016d9c + param_2 * 0xca0;
  if (((param_3 < *(uint *)(iVar1 + 0x1c)) &&
      (iVar1 = iVar1 + param_3 * 0x20, *(int *)(iVar1 + 0x20) != 0)) &&
     (*(int *)(iVar1 + 0x24) == param_1)) {
    return 1;
  }
  return 0;
}



/* Function: FUN_00016a06 */

undefined4 FUN_00016a06(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  
  iVar1 = FUN_00000754();
  iVar4 = DAT_00016d9c + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0;
  if ((iVar1 != 0) || (*(int *)(iVar4 + 8) == -1)) {
    iVar1 = FUN_000169e0(param_1,(param_1 & 0xfff) >> 8,param_1 & 0xff);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      pcVar3 = *(code **)(*(int *)(iVar4 + 0xc) + 0x18);
      if (pcVar3 == Reset) {
        uVar2 = 7;
      }
      else {
        uVar2 = (*pcVar3)(*(undefined4 *)(iVar4 + (param_1 & 0xff) * 0x20 + 0x28),param_2);
      }
    }
    iVar1 = FUN_00000754();
    if (iVar1 != 0) {
      return uVar2;
    }
    if (*(int *)(iVar4 + 8) == -1) {
      return uVar2;
    }
  }
  return 7;
}



/* Function: FUN_00016a72 */

undefined4 FUN_00016a72(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  
  iVar1 = FUN_00000754();
  iVar3 = DAT_00016d9c + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0;
  if ((iVar1 != 0) || (*(int *)(iVar3 + 8) == -1)) {
    iVar1 = FUN_000169e0(param_1,(param_1 & 0xfff) >> 8,param_1 & 0xff);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      pcVar4 = *(code **)(*(int *)(iVar3 + 0xc) + 0x1c);
      if (pcVar4 == Reset) {
        uVar2 = 7;
      }
      else {
        uVar2 = (*pcVar4)(*(undefined4 *)(iVar3 + (param_1 & 0xff) * 0x20 + 0x28),param_2,param_3,
                          param_4);
      }
    }
    iVar1 = FUN_00000754();
    if (iVar1 != 0) {
      return uVar2;
    }
    if (*(int *)(iVar3 + 8) == -1) {
      return uVar2;
    }
  }
  return 7;
}



/* Function: FUN_00016ae4 */

undefined4 FUN_00016ae4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  
  iVar1 = FUN_00000754();
  iVar3 = DAT_00016d9c + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0;
  if ((iVar1 != 0) || (*(int *)(iVar3 + 8) == -1)) {
    iVar1 = FUN_000169e0(param_1,(param_1 & 0xfff) >> 8,param_1 & 0xff);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      pcVar4 = *(code **)(*(int *)(iVar3 + 0xc) + 0x20);
      if (pcVar4 == Reset) {
        uVar2 = 7;
      }
      else {
        uVar2 = (*pcVar4)(*(undefined4 *)(iVar3 + (param_1 & 0xff) * 0x20 + 0x28),param_2,param_3,
                          param_4);
      }
    }
    iVar1 = FUN_00000754();
    if (iVar1 != 0) {
      return uVar2;
    }
    if (*(int *)(iVar3 + 8) == -1) {
      return uVar2;
    }
  }
  return 7;
}



/* Function: FUN_00016b56 */

undefined4 FUN_00016b56(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00000754();
  iVar4 = DAT_00016d9c + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0;
  if ((iVar1 == 0) && (*(int *)(iVar4 + 8) != -1)) {
    return 7;
  }
  iVar1 = FUN_000169e0(param_1,(param_1 & 0xfff) >> 8,param_1 & 0xff);
  if (iVar1 != 0) {
    iVar1 = iVar4 + (param_1 & 0xff) * 0x20;
    uVar2 = *(uint *)(iVar1 + 0x3c);
    if ((uVar2 == 0) ||
       ((param_2 == uVar2 * (param_2 / uVar2) && (param_3 == uVar2 * (param_3 / uVar2))))) {
      pcVar3 = *(code **)(*(int *)(iVar4 + 0xc) + 0x24);
      if (pcVar3 == Reset) {
        uVar5 = 7;
      }
      else {
        uVar5 = (*pcVar3)(*(undefined4 *)(iVar1 + 0x28),param_2,param_3);
      }
      goto LAB_00016bc2;
    }
  }
  uVar5 = 2;
LAB_00016bc2:
  iVar1 = FUN_00000754();
  if (iVar1 != 0) {
    return uVar5;
  }
  if (*(int *)(iVar4 + 8) != -1) {
    return 7;
  }
  return uVar5;
}



/* Function: FUN_00016c24 */

int FUN_00016c24(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = param_1 & 0xff;
  iVar1 = FUN_00000754();
  piVar3 = (int *)(DAT_00016d9c + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0);
  if ((iVar1 != 0) || (piVar3[2] == -1)) {
    if (*piVar3 == 3) {
      iVar1 = FUN_000169e0(param_1,(param_1 & 0xfff) >> 8,uVar4);
      if (iVar1 == 0) {
        iVar1 = 2;
      }
      else if (*(code **)(piVar3[3] + 0x2c) == Reset) {
        iVar1 = 7;
      }
      else {
        iVar1 = (**(code **)(piVar3[3] + 0x2c))(piVar3[uVar4 * 8 + 10]);
        if (iVar1 == 0) {
          piVar3[uVar4 * 8 + 8] = 0;
          piVar3[uVar4 * 8 + 9] = 0;
          piVar3[uVar4 * 8 + 10] = 0;
          iVar2 = piVar3[1];
          piVar3[1] = iVar2 + -1;
          if (iVar2 + -1 == 0) {
            *piVar3 = 2;
          }
        }
      }
    }
    else {
      iVar1 = 1;
    }
    iVar2 = FUN_00000754();
    if (iVar2 != 0) {
      return iVar1;
    }
    if (piVar3[2] == -1) {
      return iVar1;
    }
  }
  return 7;
}



/* Function: FUN_00016da4 */

uint FUN_00016da4(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = 0;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    for (uVar3 = 0; uVar3 < param_3; uVar3 = uVar3 + 1) {
      uVar2 = (uint)*(byte *)(param_1 + param_2 + uVar3);
      if (((uVar2 & 3) == 1) || ((uVar2 & 0xf) >> 2 == 1)) {
        uVar1 = uVar1 | 2;
      }
      if (((uVar2 & 3) == 2) || ((uVar2 & 0xf) >> 2 == 2)) {
        uVar1 = uVar1 | 4;
      }
      if (((~uVar2 & 3) == 0) && ((~uVar2 & 0xc) == 0)) {
        uVar4 = uVar4 + 1;
      }
    }
    if (uVar4 == param_3) {
      return uVar1 | 8;
    }
  }
  return uVar1;
}



/* Function: FUN_00016e5c */

void FUN_00016e5c(int *param_1)

{
  int iVar1;
  
  if ((((*param_1 == s_SLTFVBM_BOOT_000171fc._0_4_) &&
       (iVar1 = s_SLTFVBM_BOOT_000171fc._0_4_ + -0xe, param_1[0x216] == iVar1)) &&
      (*(int *)param_1[0x214] == s_SLTFVBM_BOOT_000171fc._0_4_)) &&
     (((*(int *)(param_1[0x214] + (param_1[6] * param_1[7] & 0xfffffffcU) + 8) == iVar1 &&
       (*(int *)param_1[0x215] == s_SLTFVBM_BOOT_000171fc._0_4_)) &&
      (*(int *)(param_1[0x215] + (param_1[8] * param_1[6] & 0xfffffffcU) + 8) == iVar1)))) {
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_000177be */

void FUN_000177be(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  FUN_0001f3a4(param_2,&DAT_00017768,4);
  FUN_0001f6fe(0x102,param_2 + 4);
  uVar1 = *(undefined2 *)(param_1 + 0x528);
  *(char *)(param_2 + 8) = (char)uVar1;
  *(char *)(param_2 + 9) = (char)((ushort)uVar1 >> 8);
  uVar1 = *(undefined2 *)(param_1 + 0x52c);
  *(char *)(param_2 + 10) = (char)uVar1;
  *(char *)(param_2 + 0xb) = (char)((ushort)uVar1 >> 8);
  for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0x52c); uVar2 = uVar2 + 1) {
    iVar3 = param_1 + uVar2 * 8;
    iVar4 = param_2 + uVar2 * 4;
    uVar1 = *(undefined2 *)(iVar3 + 0x530);
    *(char *)(iVar4 + 0xc) = (char)uVar1;
    *(char *)(iVar4 + 0xd) = (char)((ushort)uVar1 >> 8);
    uVar1 = *(undefined2 *)(iVar3 + 0x534);
    *(char *)(iVar4 + 0xe) = (char)uVar1;
    *(char *)(iVar4 + 0xf) = (char)((ushort)uVar1 >> 8);
  }
  return;
}



/* Function: FUN_00017d30 */

undefined4 FUN_00017d30(int param_1,int param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint *local_18;
  
  *param_4 = 0xffffffff;
  *param_3 = param_2;
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x52c); uVar1 = uVar1 + 1) {
    if (*(int *)(param_1 + uVar1 * 8 + 0x530) == param_2) {
      *param_3 = *(int *)(param_1 + uVar1 * 8 + 0x534);
      break;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x514);
  local_18 = param_4;
  do {
    if (*(uint *)(param_1 + 0x518) < uVar1) {
LAB_00017d98:
      if (*(uint *)(param_1 + 0x518) < uVar1) {
        return 0;
      }
      return 1;
    }
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x48),uVar1,&local_18);
    if ((char)local_18 == '\x01') {
      iVar2 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x48),uVar1);
      if (iVar2 == 0) {
        *param_4 = uVar1;
        goto LAB_00017d98;
      }
      (**(code **)(param_1 + 0x3c))(*(undefined4 *)(param_1 + 0x48),uVar1);
    }
    uVar1 = uVar1 + 1;
  } while( true );
}



/* Function: FUN_00017dac */

undefined8 FUN_00017dac(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x514) = param_3 + 1;
  uVar1 = 0;
  while ((uVar1 < *(uint *)(param_1 + 0x52c) && (*(int *)(param_1 + uVar1 * 8 + 0x530) != param_2)))
  {
    uVar1 = uVar1 + 1;
  }
  iVar3 = param_1 + uVar1 * 8;
  *(int *)(iVar3 + 0x530) = param_2;
  *(int *)(iVar3 + 0x534) = param_3;
  if (*(uint *)(param_1 + 0x52c) == uVar1) {
    *(uint *)(param_1 + 0x52c) = *(uint *)(param_1 + 0x52c) + 1;
  }
  *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) + 1;
  FUN_0001f4dc(*(int *)(param_1 + 0x850) + 4,*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x1c),
               0xff,iVar3 + 0x538,param_1,param_2,param_3,param_4);
  FUN_0001f4dc(*(int *)(param_1 + 0x854) + 4,*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x20),
               0xff);
  FUN_000177be(param_1,*(int *)(param_1 + 0x850) + 4);
  uVar1 = *(int *)(param_1 + 0x520) + 1;
  *(uint *)(param_1 + 0x520) = uVar1;
  if (*(uint *)(param_1 + 0x14) <= uVar1) {
    (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x520) = 0;
  }
  (**(code **)(param_1 + 0x34))
            (*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x54),
             *(undefined4 *)(param_1 + 0x520),0,*(undefined4 *)(param_1 + 0x18),
             *(int *)(param_1 + 0x850) + 4,0,1);
  uVar1 = *(int *)(param_1 + 0x524) + 1;
  *(uint *)(param_1 + 0x524) = uVar1;
  if (*(uint *)(param_1 + 0x14) <= uVar1) {
    (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x524) = 0;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x850) + 4;
  (**(code **)(param_1 + 0x34))
            (*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x58),
             *(undefined4 *)(param_1 + 0x524),0,uVar2,iVar3,0,1);
  return CONCAT44(iVar3,uVar2);
}



/* Function: FUN_00017ea0 */

undefined4 FUN_00017ea0(uint param_1,int param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  *param_3 = 0;
  if (((param_1 < 5) && (*(int *)(DAT_00018038 + param_1 * 8) != 0)) &&
     (iVar4 = *(int *)(DAT_00018038 + param_1 * 8 + 4), iVar4 != 0)) {
    FUN_00016e5c(iVar4);
    piVar1 = DAT_0001803c;
    uVar2 = 0;
    while ((uVar2 < *(uint *)(iVar4 + 0x5c) && (*(int *)(iVar4 + uVar2 * 0x18 + 0x68) != param_2)))
    {
      uVar2 = uVar2 + 1;
    }
    if ((*(uint *)(iVar4 + 0x5c) != uVar2) &&
       (iVar4 = iVar4 + uVar2 * 0x18, *(char *)(iVar4 + 0x60) != '\x01')) {
      *(undefined1 *)(iVar4 + 0x60) = 1;
      iVar3 = *piVar1 + 1;
      *piVar1 = iVar3;
      uVar2 = (param_1 & 0xf) << 0xc | iVar3 * 0x100000 | uVar2 & 0xfff | 0x10000;
      *param_3 = uVar2;
      *(uint *)(iVar4 + 100) = uVar2;
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_0001832e */

void FUN_0001832e(int param_1,int param_2,uint *param_3,int *param_4,char *param_5,char *param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  *param_5 = '\x01';
  uVar6 = *(uint *)(param_1 + 0x18);
  while ((uVar4 < uVar6 && ((~(*(byte *)(param_2 + uVar4) >> 2) & 3) == 0))) {
    uVar4 = uVar4 + 1;
  }
  if (uVar6 != uVar4) {
    do {
      if (uVar6 == 0) {
LAB_00018382:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if ((~(*(byte *)(param_2 + uVar6 + -1) >> 2) & 3) != 0) {
        if (uVar6 != 0) {
          uVar6 = uVar6 - 1;
          if (uVar6 < uVar4) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          goto LAB_00018384;
        }
        goto LAB_00018382;
      }
      uVar6 = uVar6 - 1;
    } while( true );
  }
  uVar4 = 0;
  *param_5 = '\0';
  uVar6 = 0;
LAB_00018384:
  *param_6 = '\x01';
  uVar3 = 0;
  uVar5 = *(uint *)(param_1 + 0x18);
  while ((uVar3 < uVar5 && ((~*(byte *)(param_2 + uVar3) & 3) == 0))) {
    uVar3 = uVar3 + 1;
  }
  if (uVar5 != uVar3) {
    do {
      if (uVar5 == 0) {
LAB_000183c6:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if ((~*(byte *)(param_2 + uVar5 + -1) & 3) != 0) {
        if (uVar5 != 0) {
          uVar5 = uVar5 - 1;
          if (uVar5 < uVar3) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          goto LAB_000183c8;
        }
        goto LAB_000183c6;
      }
      uVar5 = uVar5 - 1;
    } while( true );
  }
  uVar3 = 0;
  *param_6 = '\0';
  uVar5 = 0;
LAB_000183c8:
  cVar1 = *param_5;
  if (cVar1 == '\0') {
    if (*param_6 == '\0') {
      iVar2 = 0;
      *param_3 = 0;
      goto LAB_00018406;
    }
LAB_000183dc:
    if (*param_6 != '\x01') goto LAB_000183f4;
    *param_3 = uVar3;
LAB_00018402:
    iVar2 = uVar5 - uVar3;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\0') goto LAB_000183dc;
LAB_000183f4:
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      *param_3 = uVar3;
      if (uVar5 < uVar6) {
        uVar5 = uVar6;
      }
      goto LAB_00018402;
    }
    if (*param_6 != '\0') goto LAB_000183f4;
    iVar2 = uVar6 - uVar4;
    *param_3 = uVar4;
  }
  iVar2 = iVar2 + 1;
LAB_00018406:
  *param_4 = iVar2;
  return;
}



/* Function: FUN_00018414 */

undefined4 FUN_00018414(uint param_1,uint *param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 & 0xfffff) >> 0x10 == 1) {
    uVar1 = (param_1 & 0xffff) >> 0xc;
    *param_2 = uVar1;
    iVar2 = DAT_00018824;
    if ((uVar1 < 5) && (*(int *)(DAT_00018824 + uVar1 * 8) != 0)) {
      *param_4 = param_1 & 0xfff;
      iVar2 = *(int *)(iVar2 + *param_2 * 8 + 4);
      *param_3 = iVar2;
      if ((iVar2 != 0) &&
         ((*param_4 < *(uint *)(iVar2 + 0x5c) &&
          (*(uint *)(iVar2 + *param_4 * 0x18 + 100) == param_1)))) {
        FUN_00016e5c();
        return 1;
      }
    }
  }
  return 0;
}



/* Function: FUN_0001846c */

void FUN_0001846c(int param_1,uint param_2,uint param_3,uint *param_4,uint *param_5,int *param_6)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  iVar1 = param_2 - uVar2 * (param_2 / uVar2);
  if (iVar1 == 0) {
    *param_4 = 0;
    *param_5 = param_3 / *(uint *)(param_1 + 0x18);
    iVar1 = param_3 - *(uint *)(param_1 + 0x18) * (param_3 / *(uint *)(param_1 + 0x18));
  }
  else {
    uVar2 = uVar2 - iVar1;
    if (param_3 <= uVar2) {
      *param_4 = param_3;
      *param_5 = 0;
      *param_6 = 0;
      return;
    }
    *param_4 = uVar2;
    param_3 = param_3 - uVar2;
    *param_5 = param_3 / *(uint *)(param_1 + 0x18);
    iVar1 = param_3 - *(uint *)(param_1 + 0x18) * (param_3 / *(uint *)(param_1 + 0x18));
  }
  *param_6 = iVar1;
  return;
}



/* Function: FUN_000184be */

int FUN_000184be(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                int *param_10,uint param_11)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_6c [32];
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  char local_3c [4];
  char local_38 [4];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  iVar1 = *(int *)(param_1 + param_2 * 0x18 + 0x70) + param_3;
  iStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  uVar2 = FUN_00018eba(param_1,iVar1);
  iVar3 = (**(code **)(param_1 + 0x30))
                    (*(undefined4 *)(param_1 + 0x48),uVar2,local_28,param_5,param_6,param_7,param_8,
                     param_9,(param_11 & 1) != 0);
  iVar4 = FUN_00016da4(param_9,param_5,param_6);
  *param_10 = iVar4;
  if (((iVar3 == 0) && (iVar4 << 0x1d < 0)) && ((int)(param_11 << 0x1d) < 0)) {
    iVar4 = 2;
LAB_0001853c:
    do {
      iVar5 = FUN_00017d30(param_1,iVar1,&local_44,&local_4c);
      if (iVar5 == 0) {
        return 0;
      }
      for (uVar6 = 0; uVar6 < *(uint *)(param_1 + 0x14); uVar6 = uVar6 + 1) {
        (**(code **)(param_1 + 0x30))
                  (*(undefined4 *)(param_1 + 0x48),local_44,uVar6,0,*(undefined4 *)(param_1 + 0x18),
                   *(int *)(param_1 + 0x850) + 4,*(int *)(param_1 + 0x854) + 4,auStack_6c,1);
        FUN_0001832e(param_1,auStack_6c,&local_48,&local_40,local_3c,local_38);
        iVar4 = 0;
        if (local_38[0] != '\0') {
          iVar4 = local_48 * *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x854) + 4;
        }
        iVar5 = 0;
        if (local_3c[0] != '\0') {
          iVar5 = local_48 * *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x850) + 4;
        }
        iVar4 = (**(code **)(param_1 + 0x34))
                          (*(undefined4 *)(param_1 + 0x48),local_4c,uVar6,local_48,local_40,iVar5,
                           iVar4,1);
        if (iVar4 == 2) {
          (**(code **)(param_1 + 0x3c))(*(undefined4 *)(param_1 + 0x48),local_4c);
          goto LAB_0001853c;
        }
      }
    } while (iVar4 == 2);
    FUN_00017dac(param_1,iVar1,local_4c);
    (**(code **)(param_1 + 0x3c))(*(undefined4 *)(param_1 + 0x48),local_44);
  }
  return iVar3;
}



/* Function: FUN_00018600 */

undefined4
FUN_00018600(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  int local_34;
  int local_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  local_34 = 0;
  local_30 = 0;
  iVar1 = FUN_00018414(param_1,auStack_2c,&local_34,&local_30);
  if (iVar1 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar1 = local_34 + local_30 * 0x18;
  if ((uint)(*(int *)(iVar1 + 0x74) - *(int *)(iVar1 + 0x70)) < param_2) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((param_4 < *(uint *)(local_34 + 0x18)) &&
     ((param_4 + param_5) - 1 < *(uint *)(local_34 + 0x18))) {
    uVar2 = FUN_000184be(local_34,local_30,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         auStack_28,param_9);
    FUN_00016e5c(local_34);
    return uVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_0001887c */

int FUN_0001887c(int param_1,int param_2,int param_3,uint param_4,int param_5,undefined4 param_6,
                int param_7,int param_8,uint param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_74 [32];
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  char local_3c [4];
  char local_38 [4];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  uint local_28;
  
  local_4c = *(int *)(param_1 + param_2 * 0x18 + 0x70) + param_3;
  iStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  uVar1 = FUN_00018eba(param_1,local_4c);
  iVar2 = (**(code **)(param_1 + 0x34))
                    (*(undefined4 *)(param_1 + 0x48),uVar1,local_28,param_5,param_6,param_7,param_8,
                     (param_9 & 1) != 0);
  if ((iVar2 == 2) && (iVar4 = 2, local_50 = 2, (int)(param_9 << 0x1d) < 0)) {
LAB_000188e2:
    do {
      iVar2 = FUN_00017d30(param_1,local_4c,&local_44,&local_54);
      if (iVar2 == 0) {
        return local_50;
      }
      for (uVar8 = 0; uVar8 < *(uint *)(param_1 + 0x14); uVar8 = uVar8 + 1) {
        if (uVar8 == local_28) {
          bVar9 = (param_9 & 1) != 0;
          pcVar7 = *(code **)(param_1 + 0x34);
          uVar3 = *(undefined4 *)(param_1 + 0x48);
          uVar5 = local_28;
          iVar6 = param_5;
          uVar1 = param_6;
          iVar4 = param_7;
          iVar2 = param_8;
        }
        else {
          (**(code **)(param_1 + 0x30))
                    (*(undefined4 *)(param_1 + 0x48),local_44,uVar8,0,
                     *(undefined4 *)(param_1 + 0x18),*(int *)(param_1 + 0x850) + 4,
                     *(int *)(param_1 + 0x854) + 4,auStack_74,1);
          FUN_0001832e(param_1,auStack_74,&local_48,&local_40,local_3c,local_38);
          iVar2 = 0;
          if (local_38[0] != '\0') {
            iVar2 = local_48 * *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x854) + 4;
          }
          iVar4 = 0;
          if (local_3c[0] != '\0') {
            iVar4 = local_48 * *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x850) + 4;
          }
          bVar9 = true;
          pcVar7 = *(code **)(param_1 + 0x34);
          uVar3 = *(undefined4 *)(param_1 + 0x48);
          uVar5 = uVar8;
          iVar6 = local_48;
          uVar1 = local_40;
        }
        iVar4 = (*pcVar7)(uVar3,local_54,uVar5,iVar6,uVar1,iVar4,iVar2,bVar9);
        if (iVar4 == 2) {
          (**(code **)(param_1 + 0x3c))(*(undefined4 *)(param_1 + 0x48),local_54);
          goto LAB_000188e2;
        }
      }
    } while (iVar4 == 2);
    FUN_00017dac(param_1,local_4c,local_54);
    (**(code **)(param_1 + 0x3c))(*(undefined4 *)(param_1 + 0x48),local_44);
    local_50 = 0;
    iVar2 = local_50;
  }
  local_50 = iVar2;
  return local_50;
}



/* Function: FUN_000189d4 */

undefined4
FUN_000189d4(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int local_2c;
  int local_28;
  undefined1 auStack_24 [4];
  
  local_2c = 0;
  local_28 = 0;
  iVar1 = FUN_00018414(param_1,auStack_24,&local_2c,&local_28);
  if (iVar1 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar1 = local_2c + local_28 * 0x18;
  if ((uint)(*(int *)(iVar1 + 0x74) - *(int *)(iVar1 + 0x70)) < param_2) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((param_4 < *(uint *)(local_2c + 0x18)) &&
     ((param_4 + param_5) - 1 < *(uint *)(local_2c + 0x18))) {
    uVar2 = FUN_0001887c(local_2c,local_28,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_00016e5c(local_2c);
    return uVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_00018a44 */

int FUN_00018a44(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 auStack_28 [8];
  
  local_38 = 0;
  local_3c = 0;
  iVar1 = FUN_00018414(param_1,auStack_28,&local_38,&local_3c);
  if (iVar1 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar1 = local_38 + local_3c * 0x18;
  uVar2 = *(int *)(local_38 + 0x14) * *(int *)(local_38 + 0x18) *
          ((*(int *)(iVar1 + 0x74) - *(int *)(iVar1 + 0x70)) + 1);
  if (param_2 <= uVar2 && uVar2 - param_2 != 0) {
    if (uVar2 < param_2 + param_3) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    FUN_0001846c(local_38,param_2,param_3,&local_34,&local_30,&local_2c);
    uVar2 = *(uint *)(local_38 + 0x18);
    uVar3 = uVar2 * *(int *)(local_38 + 0x14);
    uVar4 = param_2 / uVar3;
    param_2 = param_2 - uVar3 * uVar4;
    uVar3 = param_2 / uVar2;
    if (local_34 == 0) goto LAB_00018b08;
    iVar1 = FUN_0001887c(local_38,local_3c,uVar4,uVar3,param_2 - uVar2 * uVar3,local_34,param_4,
                         param_5,param_6);
    if (iVar1 == 0) {
      if (param_4 != 0) {
        param_4 = local_34 * *(int *)(local_38 + 0x1c) + param_4;
      }
      if (param_5 != 0) {
        param_5 = local_34 * *(int *)(local_38 + 0x20) + param_5;
      }
      while( true ) {
        uVar3 = uVar3 + 1;
        if (*(uint *)(local_38 + 0x14) == uVar3) {
          uVar3 = 0;
          uVar4 = uVar4 + 1;
        }
LAB_00018b08:
        if (local_30 == 0) {
          if ((local_2c != 0) &&
             (iVar1 = FUN_0001887c(local_38,local_3c,uVar4,uVar3,0,local_2c,param_4,param_5,param_6)
             , iVar1 != 0)) {
            FUN_00016e5c(local_38);
            return iVar1;
          }
          FUN_00016e5c(local_38);
          return 0;
        }
        iVar1 = FUN_0001887c(local_38,local_3c,uVar4,uVar3,0,*(undefined4 *)(local_38 + 0x18),
                             param_4,param_5,param_6);
        if (iVar1 != 0) break;
        if (param_4 != 0) {
          param_4 = *(int *)(local_38 + 0x18) * *(int *)(local_38 + 0x1c) + param_4;
        }
        if (param_5 != 0) {
          param_5 = *(int *)(local_38 + 0x18) * *(int *)(local_38 + 0x20) + param_5;
        }
        local_30 = local_30 + -1;
      }
    }
    FUN_00016e5c(local_38);
    return iVar1;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_00018b88 */

int FUN_00018b88(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [8];
  
  local_28 = 0;
  local_24 = 0;
  iVar1 = FUN_00018414(param_1,auStack_18,&local_28,&local_24);
  if (iVar1 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar1 = local_28 + local_24 * 0x18;
  iVar4 = *(int *)(iVar1 + 0x70);
  if ((uint)(*(int *)(iVar1 + 0x74) - iVar4) < param_2) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar4 = iVar4 + param_2;
  uVar2 = FUN_00018eba(local_28,iVar4);
  iVar1 = (**(code **)(local_28 + 0x38))(*(undefined4 *)(local_28 + 0x48),uVar2);
  if (((iVar1 == 2) && (param_3 << 0x1d < 0)) &&
     (iVar3 = FUN_00017d30(local_28,iVar4,&local_20,&local_1c), iVar3 != 0)) {
    FUN_00017dac(local_28,iVar4,local_1c);
    (**(code **)(local_28 + 0x3c))(*(undefined4 *)(local_28 + 0x48),local_20);
    iVar1 = 0;
  }
  FUN_00016e5c(local_28);
  return iVar1;
}



/* Function: FUN_00018c0a */

undefined8
FUN_00018c0a(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  local_18 = 0;
  local_14 = 0;
  uStack_10 = param_4;
  iVar1 = FUN_00018414(param_1,&uStack_10,&local_18,&local_14);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(local_18 + 0x1c);
    param_2[1] = *(undefined4 *)(local_18 + 0x20);
    param_2[2] = *(undefined4 *)(local_18 + 0x18);
    param_2[3] = *(undefined4 *)(local_18 + 0x14);
    iVar2 = local_18 + local_14 * 0x18;
    param_2[4] = (*(int *)(iVar2 + 0x74) - *(int *)(iVar2 + 0x70)) + 1;
    *(undefined2 *)(param_2 + 5) = *(undefined2 *)(iVar2 + 0x6c);
    FUN_00016e5c();
  }
  return CONCAT44(local_18,(uint)(iVar1 != 0));
}



/* Function: FUN_00018c5e */

longlong FUN_00018c5e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  int local_14;
  undefined4 uStack_10;
  
  local_18 = 0;
  local_14 = 0;
  uStack_10 = param_4;
  iVar1 = FUN_00018414(param_1,&uStack_10,&local_18,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = local_18 + local_14 * 0x18;
    if (*(char *)(iVar1 + 0x60) == '\0') {
      FUN_00016e5c();
      return (ulonglong)local_18 << 0x20;
    }
    *(undefined1 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(local_18 + local_14 * 0x18 + 100) = 0;
    FUN_00016e5c();
    uVar2 = 1;
  }
  return CONCAT44(local_18,uVar2);
}



/* Function: FUN_00018e18 */

void FUN_00018e18(int param_1)

{
  (**(code **)(param_1 + 0x44))(*(undefined4 *)(param_1 + 0x48));
  FUN_00016e5c(param_1);
  FUN_0001e550(*(undefined4 *)(param_1 + 0x850));
  FUN_0001e550(*(undefined4 *)(param_1 + 0x854));
  FUN_0001e550(param_1);
  return;
}



/* Function: FUN_00018eba */

int FUN_00018eba(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(param_1 + 0x52c) <= uVar1) {
      return param_2;
    }
    if (*(int *)(param_1 + uVar1 * 8 + 0x530) == param_2) break;
    uVar1 = uVar1 + 1;
  }
  return *(int *)(param_1 + uVar1 * 8 + 0x534);
}



/* Function: FUN_0001b3ac */

void FUN_0001b3ac(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_0001d86e();
  *(byte *)(*(int *)(param_1 + 0x838) + param_2) =
       *(byte *)(*(int *)(param_1 + 0x838) + param_2) & 0xfe;
  if ((*(uint *)(*(int *)(param_1 + 0x828) + param_2 * 4) & 0x1ffff) - *(int *)(param_1 + 0x34) < 10
     ) {
    iVar3 = *(int *)(param_1 + 0x828);
    if (DAT_0001ded0 == *(int *)(iVar3 + param_2 * 4) * 0x8000) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    uVar2 = *(uint *)(param_1 + 0x28);
    if (uVar2 == 0x1fff) {
      *(int *)(param_1 + 0x28) = param_2;
      *(undefined2 *)(*(int *)(param_1 + 0x818) + param_2 * 2) = 0x1fff;
      return;
    }
    uVar5 = *(uint *)(iVar3 + param_2 * 4) & 0x1ffff;
    if ((*(uint *)(iVar3 + uVar2 * 4) & 0x1ffff) < uVar5) {
      uVar1 = uVar2;
      uVar4 = uVar2;
      while ((uVar2 = uVar1, (*(uint *)(iVar3 + uVar2 * 4) & 0x1ffff) < uVar5 && (uVar2 != 0x1fff)))
      {
        uVar4 = uVar2;
        uVar1 = *(ushort *)(*(int *)(param_1 + 0x818) + uVar2 * 2) & 0x1fff;
      }
      *(ushort *)(*(int *)(param_1 + 0x818) + uVar4 * 2) = (ushort)((uint)(param_2 << 0x13) >> 0x13)
      ;
    }
    else {
      *(int *)(param_1 + 0x28) = param_2;
    }
    *(ushort *)(*(int *)(param_1 + 0x818) + param_2 * 2) = (ushort)((uVar2 << 0x13) >> 0x13);
    return;
  }
  iVar3 = *(int *)(param_1 + 0x828);
  if (DAT_0001dd74 == *(int *)(iVar3 + param_2 * 4) * 0x8000) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 == 0x1fff) {
    *(int *)(param_1 + 0x30) = param_2;
    *(undefined2 *)(*(int *)(param_1 + 0x818) + param_2 * 2) = 0x1fff;
    return;
  }
  uVar5 = *(uint *)(iVar3 + param_2 * 4) & 0x1ffff;
  if (uVar5 < (*(uint *)(iVar3 + uVar2 * 4) & 0x1ffff)) {
    uVar1 = uVar2;
    uVar4 = uVar2;
    while ((uVar2 = uVar1, uVar5 < (*(uint *)(iVar3 + uVar2 * 4) & 0x1ffff) && (uVar2 != 0x1fff))) {
      uVar4 = uVar2;
      uVar1 = *(ushort *)(*(int *)(param_1 + 0x818) + uVar2 * 2) & 0x1fff;
    }
    *(ushort *)(*(int *)(param_1 + 0x818) + uVar4 * 2) = (ushort)((uint)(param_2 << 0x13) >> 0x13);
  }
  else {
    *(int *)(param_1 + 0x30) = param_2;
  }
  *(ushort *)(*(int *)(param_1 + 0x818) + param_2 * 2) = (ushort)((uVar2 << 0x13) >> 0x13);
  return;
}



/* Function: FUN_0001b3ea */

undefined4 FUN_0001b3ea(int param_1,int param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14);
  if (uVar3 < param_3 || uVar3 - param_3 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar5 = param_2 + param_3 * 4;
  uVar3 = (param_4 & 0xffffff) >> 0xb;
  uVar4 = *(uint *)(iVar5 + 0x18);
  *(uint *)(iVar5 + 0x18) = param_4;
  uVar6 = (uVar4 & 0xffffff) >> 0xb;
  if (uVar4 == 0xffffff) {
    if (param_4 == 0xffffff) {
      return 0;
    }
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x820) + uVar3 * 2);
    if (*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) - (uint)uVar1 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *(ushort *)(*(int *)(param_1 + 0x820) + uVar3 * 2) = uVar1 + 1;
    if (-1 < (int)param_4) {
      return 0;
    }
    uVar4 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14);
    uVar3 = *(uint *)(param_2 + 0x14);
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    if (uVar6 != uVar3) {
      sVar2 = *(short *)(*(int *)(param_1 + 0x820) + uVar6 * 2);
      if (sVar2 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *(short *)(*(int *)(param_1 + 0x820) + uVar6 * 2) = sVar2 + -1;
      if ((int)uVar4 < 0) {
        if (*(int *)(param_2 + 0x14) == 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
      }
      if (param_4 != 0xffffff) {
        uVar1 = *(ushort *)(*(int *)(param_1 + 0x820) + uVar3 * 2);
        if (*(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x10) - (uint)uVar1 == 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        *(ushort *)(*(int *)(param_1 + 0x820) + uVar3 * 2) = uVar1 + 1;
        if ((int)param_4 < 0) {
          uVar4 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14);
          uVar3 = *(uint *)(param_2 + 0x14);
          if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          *(uint *)(param_2 + 0x14) = uVar3 + 1;
        }
      }
      if (*(short *)(*(int *)(param_1 + 0x820) + uVar6 * 2) != 0) {
        return 0;
      }
      FUN_0001db1a(param_1,*(undefined4 *)(param_2 + 4),uVar6);
      if ((*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb == uVar6) {
        *(undefined4 *)(param_2 + 0x10) = 0xffffff;
        iVar7 = 0;
        *(undefined1 *)(param_2 + 0xc) = 0x7f;
        iVar5 = FUN_0001dbe8(param_1,*(undefined4 *)(param_2 + 4),0);
        while (iVar5 != 0x1fff) {
          iVar7 = iVar7 + 1;
          *(byte *)(param_2 + 0xc) = *(byte *)(*(int *)(param_1 + 0x830) + iVar5) & 0x7f;
          iVar5 = FUN_0001dbe8(param_1,*(undefined4 *)(param_2 + 4),iVar7);
        }
      }
      FUN_0001b3ac(param_1,uVar6);
      return 1;
    }
    if ((int)uVar4 < 0) {
      if (*(int *)(param_2 + 0x14) == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
    }
    if (-1 < (int)param_4) {
      return 0;
    }
    uVar4 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14);
    uVar3 = *(uint *)(param_2 + 0x14);
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  *(uint *)(param_2 + 0x14) = uVar3 + 1;
  return 0;
}



/* Function: FUN_0001bcb0 */

undefined4 FUN_0001bcb0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_b0;
  undefined1 local_ac [60];
  uint local_70 [16];
  undefined1 auStack_30 [8];
  uint local_28;
  
  iVar4 = *(int *)(param_2 + 4);
  uVar6 = 0;
  if ((-1 < (int)((uint)*(byte *)(*(int *)(param_1 + 0x838) + iVar4) << 0x1e)) &&
     (*(int *)(param_2 + 0x14) == 0)) {
    return 1;
  }
  uVar7 = 0;
  if (*(int *)(param_2 + 0x14) == 0) {
    iVar3 = 0;
    if (*(int *)(param_2 + 0x10) == 0xffffff) {
      while (iVar2 = FUN_0001dbe8(param_1,iVar4,iVar3), iVar2 != 0x1fff) {
        iVar4 = *(int *)(param_2 + 4);
        uVar7 = uVar7 + *(ushort *)(*(int *)(param_1 + 0x820) + iVar2 * 2);
        iVar3 = iVar3 + 1;
      }
    }
    else {
      while (uVar1 = FUN_0001dbe8(param_1,iVar4,iVar3),
            (*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb != uVar1) {
        if (uVar1 == 0x1fff) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        iVar4 = *(int *)(param_2 + 4);
        uVar7 = uVar7 + *(ushort *)(*(int *)(param_1 + 0x820) + uVar1 * 2);
        iVar3 = iVar3 + 1;
      }
      iVar4 = FUN_0001dbe8(param_1,*(undefined4 *)(param_2 + 4),iVar3 + 1);
      if (iVar4 != 0x1fff) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
  }
  else {
    uVar1 = 0;
    if (*(uint *)(param_2 + 0x10) == 0xffffff) {
      uVar5 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14);
      for (; uVar1 <= uVar5 && uVar5 - uVar1 != 0; uVar1 = uVar1 + 1) {
        if (*(int *)(param_2 + uVar1 * 4 + 0x18) != 0xffffff) {
          uVar7 = uVar7 + 1;
        }
      }
    }
    else {
      uVar5 = *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x10);
      for (; uVar1 <= uVar5 && uVar5 - uVar1 != 0; uVar1 = uVar1 + 1) {
        uVar8 = *(uint *)(param_2 + uVar1 * 4 + 0x18);
        if ((uVar8 != 0xffffff) &&
           (((uVar8 & 0xffffff) >> 0xb != (*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb ||
            ((int)uVar8 < 0)))) {
          uVar7 = uVar7 + 1;
        }
      }
    }
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 < 0xffffff) {
    uVar5 = *(int *)(param_1 + 0x10) * (*(int *)(param_1 + 0x14) - ((uVar1 & 0x7ff) >> 3));
  }
  else {
    uVar5 = 0;
  }
  if (uVar5 < uVar7) {
    iVar4 = FUN_0001de28(param_1);
    *(undefined1 *)(param_2 + 0xc) = 0;
    FUN_0001da06(param_1,*(undefined4 *)(param_2 + 4),iVar4);
    *(int *)(param_2 + 0x10) = iVar4 << 0xb;
    uVar7 = 0;
    iVar4 = 0;
    while (uVar5 = iVar4 + uVar7, uVar1 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14),
          uVar5 <= uVar1 && uVar1 - uVar5 != 0) {
      uVar1 = *(uint *)(param_2 + uVar5 * 4 + 0x18);
      if (uVar1 == 0xffffff) {
        iVar4 = iVar4 + 1;
      }
      else {
        FUN_0001d772(param_1,(uVar1 & 0xffffff) >> 0xb,(uVar1 & 0x7ff) >> 3,uVar1 & 7,1,
                     *(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x83c) + 4,0,auStack_30);
        *(uint *)(local_ac + uVar7 * 8 + -4) =
             uVar5 & 0x7ff | (*(ushort *)(param_2 + 4) & 0x1fff) << 0xb;
        local_ac[uVar7 * 8] = *(undefined1 *)(param_2 + 0xc);
        local_70[uVar6 * 2] = uVar5;
        uVar1 = uVar6 + 1;
        local_70[uVar6 * 2 + 1] =
             uVar7 | ((*(uint *)(param_2 + 0x10) & 0x7ff) >> 3 |
                     ((*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb) << 8) << 3;
        if (*(uint *)(param_1 + 0x10) < uVar1) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar7 = uVar7 + 1;
        uVar6 = uVar1;
        if (*(uint *)(param_1 + 0x10) == uVar7) {
          FUN_0001e072(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar7);
          iVar3 = FUN_0001d79c(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                               (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar7,
                               *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
          if ((iVar3 != 0) && (iVar3 != 1)) {
            uVar6 = *(uint *)(param_2 + 0x10);
            if (uVar6 == 0xffffff) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            goto LAB_0001c132;
          }
          iVar4 = iVar4 + uVar7;
          uVar7 = 0;
          for (uVar6 = 0; uVar6 < uVar1; uVar6 = uVar6 + 1) {
            FUN_0001b3ea(param_1,param_2,local_70[uVar6 * 2],local_70[uVar6 * 2 + 1]);
          }
          uVar1 = *(uint *)(param_2 + 0x10);
          uVar6 = 0;
          if (uVar1 == 0xffffff) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar5 = ((uVar1 & 0x7ff) >> 3) + 1;
          if (*(uint *)(param_1 + 0x14) == uVar5) {
            *(undefined4 *)(param_2 + 0x10) = 0xffffff;
          }
          else {
            *(uint *)(param_2 + 0x10) = uVar1 & 7 | (uVar5 | ((uVar1 & 0xffffff) >> 0xb) << 8) << 3;
          }
        }
      }
    }
    if (uVar7 == 0) goto LAB_0001c178;
    if (*(int *)(param_2 + 0x10) == 0xffffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    FUN_0001e072(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar7);
    iVar4 = FUN_0001d79c(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                         (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar7,
                         *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
    if ((iVar4 != 0) && (iVar4 != 1)) {
      uVar6 = *(uint *)(param_2 + 0x10);
      if (uVar6 == 0xffffff) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      goto LAB_0001c132;
    }
    for (uVar7 = 0; uVar7 < uVar6; uVar7 = uVar7 + 1) {
      FUN_0001b3ea(param_1,param_2,local_70[uVar7 * 2],local_70[uVar7 * 2 + 1]);
    }
    uVar6 = *(uint *)(param_2 + 0x10);
    if (uVar6 == 0xffffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    uVar7 = 0;
    local_28 = (uVar1 & 0xffffff) >> 0xb;
    iVar4 = 0;
    while (uVar5 = iVar4 + uVar7, uVar1 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14),
          uVar5 <= uVar1 && uVar1 - uVar5 != 0) {
      uVar1 = *(uint *)(param_2 + uVar5 * 4 + 0x18);
      if ((uVar1 == 0xffffff) ||
         ((uVar8 = (uVar1 & 0xffffff) >> 0xb, uVar8 == local_28 && (-1 < (int)uVar1)))) {
        iVar4 = iVar4 + 1;
      }
      else {
        FUN_0001d772(param_1,uVar8,(uVar1 & 0x7ff) >> 3,uVar1 & 7,1,
                     *(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x83c) + 4,0,auStack_30);
        *(uint *)(local_ac + uVar7 * 8 + -4) =
             uVar5 & 0x7ff | (*(ushort *)(param_2 + 4) & 0x1fff) << 0xb;
        local_ac[uVar7 * 8] = *(undefined1 *)(param_2 + 0xc);
        local_70[uVar6 * 2] = uVar5;
        uVar1 = uVar6 + 1;
        local_70[uVar6 * 2 + 1] =
             uVar7 | ((*(uint *)(param_2 + 0x10) & 0x7ff) >> 3 |
                     ((*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb) << 8) << 3;
        if (*(uint *)(param_1 + 0x10) < uVar1) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar7 = uVar7 + 1;
        uVar6 = uVar1;
        if (*(uint *)(param_1 + 0x10) == uVar7) {
          FUN_0001e072(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar7);
          iVar3 = FUN_0001d79c(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                               (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar7,
                               *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
          if ((iVar3 != 0) && (iVar3 != 1)) {
            uVar6 = *(uint *)(param_2 + 0x10);
            if (uVar6 == 0xffffff) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            goto LAB_0001c132;
          }
          iVar4 = iVar4 + uVar7;
          uVar7 = 0;
          for (uVar6 = 0; uVar6 < uVar1; uVar6 = uVar6 + 1) {
            FUN_0001b3ea(param_1,param_2,local_70[uVar6 * 2],local_70[uVar6 * 2 + 1]);
          }
          uVar1 = *(uint *)(param_2 + 0x10);
          uVar6 = 0;
          if (uVar1 == 0xffffff) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar5 = ((uVar1 & 0x7ff) >> 3) + 1;
          if (*(uint *)(param_1 + 0x14) == uVar5) {
            *(undefined4 *)(param_2 + 0x10) = 0xffffff;
          }
          else {
            *(uint *)(param_2 + 0x10) = uVar1 & 7 | (uVar5 | ((uVar1 & 0xffffff) >> 0xb) << 8) << 3;
          }
        }
      }
    }
    if (uVar7 == 0) goto LAB_0001c178;
    if (*(int *)(param_2 + 0x10) == 0xffffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    FUN_0001e072(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar7);
    iVar4 = FUN_0001d79c(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                         (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar7,
                         *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
    if ((iVar4 != 0) && (iVar4 != 1)) {
      uVar6 = *(uint *)(param_2 + 0x10);
      if (uVar6 == 0xffffff) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
LAB_0001c132:
      uVar7 = ((uVar6 & 0x7ff) >> 3) + 1;
      if (*(uint *)(param_1 + 0x14) == uVar7) {
        *(undefined4 *)(param_2 + 0x10) = 0xffffff;
      }
      else {
        *(uint *)(param_2 + 0x10) = uVar6 & 7 | (uVar7 | ((uVar6 & 0xffffff) >> 0xb) << 8) << 3;
      }
      return 0;
    }
    for (uVar7 = 0; uVar7 < uVar6; uVar7 = uVar7 + 1) {
      FUN_0001b3ea(param_1,param_2,local_70[uVar7 * 2],local_70[uVar7 * 2 + 1]);
    }
    uVar6 = *(uint *)(param_2 + 0x10);
    if (uVar6 == 0xffffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  uVar7 = ((uVar6 & 0x7ff) >> 3) + 1;
  if (*(uint *)(param_1 + 0x14) == uVar7) {
    *(undefined4 *)(param_2 + 0x10) = 0xffffff;
  }
  else {
    *(uint *)(param_2 + 0x10) = uVar6 & 7 | (uVar7 | ((uVar6 & 0xffffff) >> 0xb) << 8) << 3;
  }
LAB_0001c178:
  if (*(int *)(param_2 + 0x14) == 0) {
    return 1;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_0001d27e */

void FUN_0001d27e(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + param_2 * 4 + 0x3c);
  if ((*piVar3 == DAT_0001d614) &&
     (piVar3[*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) + 6] == DAT_0001d614 + -0xe)) {
    if (piVar3[1] != 0x1fff) {
      iVar1 = FUN_0001deb2(param_1);
      if ((iVar1 == 1) || (uVar2 = FUN_0001dc20(param_1,piVar3[1]), 3 < uVar2)) {
        FUN_0001bcb0(param_1,piVar3);
      }
      *(byte *)(*(int *)(param_1 + 0x838) + piVar3[1]) =
           *(byte *)(*(int *)(param_1 + 0x838) + piVar3[1]) & 0xfb;
      piVar3[1] = 0x1fff;
      *(undefined1 *)(piVar3 + 3) = 0x7f;
      piVar3[4] = 0xffffff;
      piVar3[5] = 0;
    }
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_0001d700 */

undefined4 FUN_0001d700(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  ushort local_14;
  
  iVar1 = FUN_00017ea0(param_2,param_3,param_1 + 0x1c);
  if (iVar1 != 0) {
    FUN_00018c0a(*(undefined4 *)(param_1 + 0x1c),&local_28);
    if (local_14 >> 8 == 0) {
      *(uint *)(param_1 + 0x18) = local_18;
      *(uint *)(param_1 + 0x14) = local_1c - 1U;
      *(uint *)(param_1 + 0x10) = local_20;
      *(undefined4 *)(param_1 + 8) = local_28;
      *(int *)(param_1 + 0xc) = local_24;
      if ((((local_18 < 0x1fff) && (local_1c - 1U < 0x101)) && (local_20 < 9)) &&
         ((0x1e < (uint)(local_24 * 8) && (0x10 < (uint)(local_24 * 8))))) {
        return 1;
      }
    }
    FUN_00018c5e(*(undefined4 *)(param_1 + 0x1c));
  }
  return 0;
}



/* Function: FUN_0001d772 */

int FUN_0001d772(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = FUN_00018600(*(undefined4 *)(param_1 + 0x1c),param_2,param_3 + 1,param_4,param_5,param_6,
                       param_7,param_8,1);
  if ((iVar1 != 0) && (iVar1 != 3)) {
    iVar1 = 2;
  }
  return iVar1;
}



/* Function: FUN_0001d79c */

int FUN_0001d79c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_000189d4(*(undefined4 *)(param_1 + 0x1c),param_2,param_3 + 1,param_4,param_5,param_6,
                       param_7,5);
  if ((iVar1 != 0) && (iVar1 != 3)) {
    iVar1 = 2;
  }
  return iVar1;
}



/* Function: FUN_0001d86e */

int FUN_0001d86e(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint local_18 [2];
  
  local_18[0] = *(int *)(*(int *)(param_1 + 0x828) + param_2 * 4) + 1U & 0x1ffff;
  *(uint *)(*(int *)(param_1 + 0x828) + param_2 * 4) = local_18[0];
  FUN_0001e362(param_1,*(int *)(param_1 + 0x840) + 4,local_18,*(undefined4 *)(param_1 + 0x10));
  iVar2 = 0;
  iVar1 = FUN_00018b88(*(undefined4 *)(param_1 + 0x1c),param_2,4);
  if (((iVar1 != 0) ||
      (iVar1 = FUN_000189d4(*(undefined4 *)(param_1 + 0x1c),param_2,0,0,
                            *(undefined4 *)(param_1 + 0x10),0,*(int *)(param_1 + 0x840) + 4,5),
      iVar1 != 0)) && (iVar2 = iVar1, iVar2 != 3)) {
    iVar2 = 2;
  }
  return iVar2;
}



/* Function: FUN_0001da06 */

void FUN_0001da06(int param_1,int param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r5;
  
  if (((~*(byte *)(*(int *)(param_1 + 0x830) + param_3) & 0x7f) != 0) || (param_4 == 0x7f)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(byte *)(*(int *)(param_1 + 0x830) + param_3) = (byte)param_4 & 0x7f;
  *(undefined2 *)(*(int *)(param_1 + 0x820) + param_3 * 2) = 0;
  uVar2 = *(ushort *)(*(int *)(param_1 + 0x810) + param_2 * 2) & 0x1fff;
  uVar1 = (ushort)((param_3 << 0x13) >> 0x13);
  if (uVar2 == 0x1fff) {
    *(ushort *)(*(int *)(param_1 + 0x810) + param_2 * 2) = uVar1;
  }
  else {
    *(byte *)(*(int *)(param_1 + 0x838) + param_2) =
         *(byte *)(*(int *)(param_1 + 0x838) + param_2) | 2;
    while (uVar3 = uVar2, uVar3 != 0x1fff) {
      uVar2 = *(ushort *)(*(int *)(param_1 + 0x818) + uVar3 * 2) & 0x1fff;
      unaff_r5 = uVar3;
      if (uVar2 == param_3) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    if ((param_4 != 0) && (param_4 <= (*(byte *)(*(int *)(param_1 + 0x830) + unaff_r5) & 0x7f))) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *(ushort *)(*(int *)(param_1 + 0x818) + unaff_r5 * 2) = uVar1;
  }
  *(undefined2 *)(*(int *)(param_1 + 0x818) + param_3 * 2) = 0x1fff;
  return;
}



/* Function: FUN_0001db1a */

void FUN_0001db1a(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r7;
  
  iVar1 = DAT_0001dd70;
  uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x810) + param_2 * 2);
  if (DAT_0001dd70 == uVar2 * 0x80000) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar2 = uVar2 & 0x1fff;
  if (uVar2 == param_3) {
    *(ushort *)(*(int *)(param_1 + 0x810) + param_2 * 2) =
         (ushort)(((uint)*(ushort *)(*(int *)(param_1 + 0x818) + param_3 * 2) << 0x13) >> 0x13);
    *(undefined2 *)(*(int *)(param_1 + 0x818) + param_3 * 2) = 0x1fff;
    *(undefined1 *)(*(int *)(param_1 + 0x830) + param_3) = 0x7f;
    *(undefined2 *)(*(int *)(param_1 + 0x820) + param_3 * 2) = 0;
  }
  else {
    while ((uVar3 = uVar2, uVar3 != param_3 && (uVar3 != 0x1fff))) {
      unaff_r7 = uVar3;
      uVar2 = *(ushort *)(*(int *)(param_1 + 0x818) + uVar3 * 2) & 0x1fff;
    }
    if (uVar3 == 0x1fff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *(ushort *)(*(int *)(param_1 + 0x818) + unaff_r7 * 2) =
         (ushort)(((uint)*(ushort *)(*(int *)(param_1 + 0x818) + param_3 * 2) << 0x13) >> 0x13);
    *(undefined2 *)(*(int *)(param_1 + 0x818) + param_3 * 2) = 0x1fff;
    *(undefined1 *)(*(int *)(param_1 + 0x830) + uVar3) = 0x7f;
    *(undefined2 *)(*(int *)(param_1 + 0x820) + uVar3 * 2) = 0;
  }
  uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x810) + param_2 * 2);
  if (iVar1 == uVar2 * 0x80000) {
    if ((int)((uint)*(byte *)(*(int *)(param_1 + 0x838) + param_2) << 0x1e) < 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else if (iVar1 == (uint)*(ushort *)(*(int *)(param_1 + 0x818) + (uVar2 & 0x1fff) * 2) * 0x80000) {
    *(byte *)(*(int *)(param_1 + 0x838) + param_2) =
         *(byte *)(*(int *)(param_1 + 0x838) + param_2) & 0xfd;
  }
  return;
}



/* Function: FUN_0001dbe8 */

uint FUN_0001dbe8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x810) + param_2 * 2) & 0x1fff;
  if (param_3 != 0) {
    uVar2 = 0;
    do {
      if (uVar1 == 0x1fff) {
        return 0x1fff;
      }
      uVar2 = uVar2 + 1 & 0xff;
      uVar1 = *(ushort *)(*(int *)(param_1 + 0x818) + uVar1 * 2) & 0x1fff;
    } while (param_3 != uVar2);
  }
  return uVar1;
}



/* Function: FUN_0001dc20 */

int FUN_0001dc20(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(ushort *)(*(int *)(param_1 + 0x810) + param_2 * 2) & 0x1fff;
  iVar1 = 0;
  if (uVar2 != 0x1fff) {
    for (; uVar2 != 0x1fff; uVar2 = *(ushort *)(*(int *)(param_1 + 0x818) + uVar2 * 2) & 0x1fff) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}



/* Function: FUN_0001de28 */

uint FUN_0001de28(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint in_r12;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar6 = *(int *)(param_1 + 0x2c);
    if (iVar6 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (iVar6 == 1) {
      uVar2 = *(uint *)(param_1 + 0x30);
      if (DAT_0001ded4 != (uint)*(ushort *)(*(int *)(param_1 + 0x818) + uVar2 * 2) * 0x80000) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0x1fff;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x818);
      uVar4 = *(uint *)(param_1 + 0x30);
      for (iVar3 = 1; uVar2 = uVar4, iVar6 != iVar3; iVar3 = iVar3 + 1) {
        uVar4 = (uint)*(ushort *)(iVar5 + uVar2 * 2);
        if (DAT_0001ded4 == uVar4 * 0x80000) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar4 = uVar4 & 0x1fff;
        in_r12 = uVar2;
      }
      if (DAT_0001ded4 != (uint)*(ushort *)(iVar5 + uVar2 * 2) * 0x80000) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *(undefined2 *)(iVar5 + in_r12 * 2) = 0x1fff;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x818) + uVar2 * 2);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    *(uint *)(param_1 + 0x28) = uVar1 & 0x1fff;
    *(undefined2 *)(*(int *)(param_1 + 0x818) + uVar2 * 2) = 0x1fff;
  }
  return uVar2;
}



/* Function: FUN_0001deb2 */

undefined4 FUN_0001deb2(int param_1)

{
  if ((uint)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x2c)) < 4) {
    return 1;
  }
  return 0;
}



/* Function: FUN_0001e072 */

undefined8 FUN_0001e072(int param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  FUN_0001f4dc(param_2,param_4 * *(int *)(param_1 + 0xc),0xff);
  uVar8 = 0;
  do {
    if (param_4 <= uVar8) {
      return CONCAT44(param_2,param_1);
    }
    uVar10 = *(uint *)(param_3 + uVar8 * 8);
    bVar1 = *(byte *)(param_3 + uVar8 * 8 + 4);
    if ((((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20)) <= (uVar10 & 0xffffff) >> 0xb)
        || (uVar3 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14),
           uVar3 < (uVar10 & 0x7ff) || uVar3 - (uVar10 & 0x7ff) == 0)) || (0x7e < bVar1)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar5 = uVar8 * *(int *)(param_1 + 0xc);
    uVar6 = 0;
    uVar3 = 0;
    do {
      bVar2 = bVar1 >> (uVar3 & 0xff);
      if (7 - uVar3 < 8) {
        uVar6 = -uVar3 + 7;
        if (uVar6 < 9) {
          bVar1 = (byte)(0xff << (uVar6 & 0xff));
          *(byte *)(param_2 + iVar5) = *(byte *)(param_2 + iVar5) & bVar1 | bVar2 & ~bVar1;
          if (uVar6 == 8) {
            uVar6 = 0;
            iVar5 = iVar5 + 1;
          }
        }
        else {
          uVar6 = -uVar3 - 1;
          *(byte *)(param_2 + iVar5) = bVar2;
          iVar5 = iVar5 + 1;
          *(byte *)(param_2 + iVar5) = *(byte *)(param_2 + iVar5) & (byte)(0xff << (uVar6 & 0xff));
        }
        break;
      }
      *(byte *)(param_2 + iVar5) = bVar2;
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 8;
      *(undefined1 *)(param_2 + iVar5) = *(undefined1 *)(param_2 + iVar5);
    } while (uVar3 < 7);
    uVar3 = 0;
    uVar4 = 8 - uVar6;
    do {
      uVar7 = uVar10 >> (uVar3 & 0xff) & 0xff;
      if (0x18 - uVar3 < 8) {
        uVar3 = 0x18 - uVar3;
        if (uVar4 < uVar3) {
          uVar10 = 0xff << (uVar4 & 0xff);
          *(byte *)(param_2 + iVar5) =
               *(byte *)(param_2 + iVar5) & ~(byte)(~uVar10 << (uVar6 & 0xff)) |
               (byte)((uVar7 & ~uVar10) << (uVar6 & 0xff));
          bVar1 = (byte)(0xff << (uVar3 - uVar4 & 0xff));
          *(byte *)(param_2 + iVar5 + 1) =
               *(byte *)(param_2 + iVar5 + 1) & bVar1 | (byte)(uVar7 >> (uVar4 & 0xff)) & ~bVar1;
        }
        else {
          uVar10 = 0xff << (uVar3 & 0xff);
          *(byte *)(param_2 + iVar5) =
               *(byte *)(param_2 + iVar5) & ~(byte)(~uVar10 << (uVar6 & 0xff)) |
               (byte)((uVar7 & ~uVar10) << (uVar6 & 0xff));
        }
        break;
      }
      uVar9 = 0xff << (uVar4 & 0xff);
      *(byte *)(param_2 + iVar5) =
           *(byte *)(param_2 + iVar5) & ~(byte)(~uVar9 << (uVar6 & 0xff)) |
           (byte)((uVar7 & ~uVar9) << (uVar6 & 0xff));
      iVar5 = iVar5 + 1;
      bVar1 = (byte)(0xff << (uVar6 & 0xff));
      uVar3 = uVar3 + 8;
      *(byte *)(param_2 + iVar5) =
           *(byte *)(param_2 + iVar5) & bVar1 | (byte)(uVar7 >> (uVar4 & 0xff)) & ~bVar1;
    } while (uVar3 < 0x18);
    uVar8 = uVar8 + 1;
  } while( true );
}



/* Function: FUN_0001e27a */

void FUN_0001e27a(int param_1,int param_2,uint *param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_50 [8];
  int iStack_30;
  int iStack_2c;
  uint *local_28;
  
  iStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  FUN_0001f538(local_50,0x20);
  uVar5 = 0;
  do {
    if (*(uint *)(param_1 + 0x10) <= uVar5) {
      uVar5 = 1;
      while( true ) {
        if (*(uint *)(param_1 + 0x10) <= uVar5) {
          *local_28 = local_50[0];
          return;
        }
        if (local_50[uVar5] != local_50[0]) break;
        uVar5 = uVar5 + 1;
      }
      *local_28 = DAT_0001e488 + 1;
      return;
    }
    uVar2 = 0;
    uVar3 = 0;
    iVar4 = uVar5 * *(int *)(param_1 + 0xc);
    do {
      if (0x11 - uVar3 < 8) {
        if (0x11 - uVar3 < 9) {
          uVar2 = uVar2 | ((uint)*(byte *)(param_2 + iVar4) & ~(0xff << (0x11 - uVar3 & 0xff))) <<
                          (uVar3 & 0xff);
        }
        else {
          uVar2 = uVar2 | (uint)*(byte *)(param_2 + iVar4) << (uVar3 & 0xff);
        }
        break;
      }
      pbVar1 = (byte *)(param_2 + iVar4);
      iVar4 = iVar4 + 1;
      uVar2 = uVar2 | (uint)*pbVar1 << (uVar3 & 0xff);
      uVar3 = uVar3 + 8;
    } while (uVar3 < 0x11);
    if ((uVar5 & 1) != 0) {
      uVar2 = ~uVar2 & 0x1ffff;
    }
    if (DAT_0001e488 < uVar2) {
      uVar2 = DAT_0001e488 + 1;
    }
    local_50[uVar5] = uVar2;
    uVar5 = uVar5 + 1;
  } while( true );
}



/* Function: FUN_0001e362 */

undefined8 FUN_0001e362(int param_1,int param_2,uint *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_0001f4dc(param_2,*(int *)(param_1 + 0xc) * param_4,0xff);
  uVar6 = 0;
  do {
    if (param_4 <= uVar6) {
      return CONCAT44(param_2,param_1);
    }
    uVar5 = *param_3;
    if ((DAT_0001e488 < uVar5) || (uVar5 == DAT_0001e488 + 1)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if ((uVar6 & 1) != 0) {
      uVar5 = ~uVar5 & 0x1ffff;
    }
    iVar4 = uVar6 * *(int *)(param_1 + 0xc);
    uVar3 = 0;
    do {
      bVar1 = (byte)(uVar5 >> (uVar3 & 0xff));
      if (0x11 - uVar3 < 8) {
        uVar5 = -uVar3 + 0x11;
        if (uVar5 < 9) {
          bVar2 = (byte)(0xff << (uVar5 & 0xff));
          *(byte *)(param_2 + iVar4) = *(byte *)(param_2 + iVar4) & bVar2 | bVar1 & ~bVar2;
        }
        else {
          *(byte *)(param_2 + iVar4) = bVar1;
          *(byte *)(param_2 + iVar4 + 1) =
               *(byte *)(param_2 + iVar4 + 1) & (byte)(0xff << (-uVar3 + 9 & 0xff));
        }
        break;
      }
      *(byte *)(param_2 + iVar4) = bVar1;
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 + 8;
      *(undefined1 *)(param_2 + iVar4) = *(undefined1 *)(param_2 + iVar4);
    } while (uVar3 < 0x11);
    uVar6 = uVar6 + 1;
  } while( true );
}



/* Function: FUN_0001e48c */

void FUN_0001e48c(void)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar2 = DAT_0001e578;
  piVar1 = DAT_0001e574;
  iVar5 = 0;
  if (*DAT_0001e574 == 0) {
    while (piVar1[iVar5 * 3 + 2] != 0) {
      for (uVar3 = 0; uVar3 < (uint)piVar1[iVar5 * 3 + 2]; uVar3 = uVar3 + 1) {
        puVar4 = (undefined4 *)
                 ((uVar3 * (piVar1[iVar5 * 3 + 1] + 0xc) & 0xfffffffc) + piVar1[iVar5 * 3 + 3]);
        *puVar4 = uVar2;
        puVar4[1] = 0;
        puVar4[2] = uVar2;
      }
      iVar5 = iVar5 + 1;
    }
    *piVar1 = 1;
  }
  return;
}



/* Function: FUN_0001e550 */

void FUN_0001e550(int param_1)

{
  FUN_0001e48c();
  if (((*(int *)(param_1 + -0xc) == DAT_0001e578) && (*(int *)(param_1 + -4) == DAT_0001e578)) &&
     (*(int *)(param_1 + -8) != 0)) {
    *(undefined4 *)(param_1 + -8) = 0;
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_0001e57c */

undefined4 FUN_0001e57c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int local_20 [4];
  
  local_20[0] = param_1;
  local_20[1] = param_2;
  local_20[2] = param_3;
  local_20[3] = param_4;
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
    *(undefined1 *)((int)local_20 + uVar2) = *(undefined1 *)(param_1 + uVar2);
  }
  for (; uVar2 < 0x10; uVar2 = uVar2 + 1) {
    *(undefined1 *)((int)local_20 + uVar2) = 0xff;
  }
  uVar1 = FUN_0001ed2c(local_20,param_3);
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
    *(undefined1 *)(param_1 + uVar2) = *(undefined1 *)((int)local_20 + uVar2);
  }
  return uVar1;
}



/* Function: FUN_0001e8ba */

void FUN_0001e8ba(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_0001ea74;
  iVar6 = 0;
  uVar3 = 0;
LAB_0001e986:
  do {
    while( true ) {
      iVar5 = *(int *)(iVar2 + 4);
      if (*(ushort *)(iVar5 + 0x16) <= uVar3) {
        return;
      }
      if (*(byte *)(iVar5 + 0x1f) != uVar3) break;
      if (param_5 == 0) {
        uVar4 = *(uint *)(iVar2 + 0x14);
LAB_0001e972:
        uVar3 = uVar3 + uVar4;
      }
      else {
        for (uVar4 = 0; uVar4 < *(uint *)(iVar2 + 0x14); uVar4 = uVar4 + 1) {
          puVar1 = (undefined1 *)(param_1 + uVar3);
          uVar3 = uVar3 + 1;
          *(undefined1 *)(param_5 + uVar4) = *puVar1;
        }
      }
    }
    if (*(byte *)(iVar5 + 0x23) == uVar3) {
      if (param_3 == 0) {
        uVar4 = *(uint *)(iVar2 + 0x18);
        goto LAB_0001e972;
      }
      for (uVar4 = 0; uVar4 < *(uint *)(iVar2 + 0x18); uVar4 = uVar4 + 1) {
        puVar1 = (undefined1 *)(param_1 + uVar3);
        uVar3 = uVar3 + 1;
        *(undefined1 *)(param_3 + uVar4) = *puVar1;
      }
      goto LAB_0001e986;
    }
    if ((int)*(char *)(iVar5 + 0x26) == uVar3) {
      if (param_4 == 0) {
        uVar4 = *(uint *)(iVar2 + 0x1c);
        goto LAB_0001e972;
      }
      for (uVar4 = 0; uVar4 < *(uint *)(iVar2 + 0x1c); uVar4 = uVar4 + 1) {
        puVar1 = (undefined1 *)(param_1 + uVar3);
        uVar3 = uVar3 + 1;
        *(undefined1 *)(param_4 + uVar4) = *puVar1;
      }
    }
    else if ((int)*(char *)(iVar5 + 0x21) == uVar3) {
      if (param_2 == 0) {
        uVar4 = (uint)*(byte *)(iVar5 + 0x22);
        goto LAB_0001e972;
      }
      for (uVar4 = 0; uVar4 < *(byte *)(*(int *)(iVar2 + 4) + 0x22); uVar4 = uVar4 + 1) {
        puVar1 = (undefined1 *)(param_1 + uVar3);
        uVar3 = uVar3 + 1;
        *(undefined1 *)(param_2 + uVar4) = *puVar1;
      }
    }
    else {
      if ((param_2 != 0) && ((int)*(char *)(iVar5 + 0x21) == 0xffffffff)) {
        *(undefined1 *)(param_2 + iVar6) = *(undefined1 *)(param_1 + uVar3);
      }
      uVar3 = uVar3 + 1;
      iVar6 = iVar6 + 1;
    }
  } while( true );
}



/* Function: FUN_0001e998 */

undefined4
FUN_0001e998(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
            undefined4 *param_6,int param_7,int param_8,int param_9)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  byte bVar6;
  undefined1 auStack_144 [128];
  undefined1 auStack_c4 [128];
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  char local_38 [4];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  bVar6 = 0;
  if (param_9 == 1) {
    if (param_8 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else if (param_8 == 0) goto LAB_0001e9d0;
  for (uVar3 = 0; uVar3 < param_5; uVar3 = uVar3 + 1) {
    *(undefined1 *)(param_8 + param_4 + uVar3) = 0;
  }
LAB_0001e9d0:
  if (param_6 == (undefined4 *)0x0 && param_7 == 0) {
    return 0;
  }
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  FUN_0001ecca(DAT_0001ea74,param_3,param_4,&local_40,&uStack_3c);
  puVar2 = DAT_0001ea74;
  if (param_9 == 1) {
    if (param_6 == (undefined4 *)0x0) {
      param_6 = DAT_0001ea74 + 0x10;
    }
    iVar5 = func_0xffff2610(*DAT_0001ea74,local_30,local_40,uStack_3c,param_5,param_6,auStack_144,
                            local_38,1);
    if (iVar5 != 0) {
      return 3;
    }
    for (uVar3 = 0; uVar3 < param_5; uVar3 = uVar3 + 1) {
      iVar5 = puVar2[1];
      if (*(char *)(iVar5 + 0x21) == -1) {
        if (param_7 == 0) {
          FUN_0001e8ba(auStack_144 + uVar3 * *(ushort *)(iVar5 + 0x16),
                       auStack_c4 + uVar3 * puVar2[8],0,auStack_44,0);
          iVar5 = puVar2[8];
          puVar4 = auStack_c4 + uVar3 * iVar5;
        }
        else {
          FUN_0001e8ba(auStack_144 + uVar3 * *(ushort *)(iVar5 + 0x16),uVar3 * puVar2[8] + param_7,0
                       ,auStack_44,0);
          iVar5 = puVar2[8];
          puVar4 = (undefined1 *)(uVar3 * iVar5 + param_7);
        }
        iVar5 = FUN_0001e57c(puVar4,iVar5,auStack_44);
        cVar1 = local_38[uVar3];
        if (cVar1 == '\0' && iVar5 == 0) {
          bVar6 = 0;
        }
        else if (((cVar1 == '\x02') || (cVar1 == '\0')) && ((iVar5 == -1 || (iVar5 == 0)))) {
          bVar6 = 1;
        }
        else if (cVar1 == '\b') {
          bVar6 = 3;
        }
        else {
          if (((cVar1 != '\x03') && (iVar5 != -2)) && (iVar5 != 1)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          bVar6 = 2;
        }
      }
      *(byte *)(param_8 + uVar3 + param_4) =
           *(byte *)(param_8 + uVar3 + param_4) | bVar6 << 2 | bVar6;
    }
  }
  else {
    if (param_7 == 0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4 = auStack_144;
    }
    iVar5 = func_0xffff2610(*DAT_0001ea74,local_30,local_40,uStack_3c,param_5,param_6,puVar4,0,0);
    if (iVar5 != 0) {
      return 3;
    }
    if (param_7 != 0) {
      for (uVar3 = 0; uVar3 < param_5; uVar3 = uVar3 + 1) {
        FUN_0001e8ba(auStack_144 + uVar3 * *(ushort *)(puVar2[1] + 0x16),uVar3 * puVar2[8] + param_7
                     ,0,0,0);
      }
    }
  }
  return 0;
}



/* Function: FUN_0001ecca */

void FUN_0001ecca(int param_1,uint param_2,int param_3,uint *param_4,int *param_5)

{
  *param_4 = param_2 >> *(sbyte *)(param_1 + 0x10);
  *param_5 = (param_3 + param_2) -
             ((param_2 >> *(sbyte *)(param_1 + 0x10)) << *(sbyte *)(param_1 + 0x10));
  return;
}



/* Function: FUN_0001ed2c */

undefined4 FUN_0001ed2c(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  puVar4 = DAT_0001eed8;
  uVar8 = (uint)param_1[3] ^ (uint)*param_1 << 0x18 ^
          (uint)param_1[1] << 0x10 ^ (uint)param_1[2] << 8;
  bVar1 = *param_2;
  bVar2 = param_2[1];
  uVar6 = 0;
  do {
    puVar4[uVar6] = 0xff;
    iVar5 = DAT_0001eedc;
    uVar6 = uVar6 + 1 & 0xffff;
  } while (uVar6 < 0x3f);
  *puVar4 = 0;
  uVar6 = 1;
  do {
    uVar3 = *(ushort *)(iVar5 + uVar6 * 2) ^ *(ushort *)(iVar5 + (0x3f - uVar6) * 2);
    if (puVar4[uVar3] == 0xff) {
      puVar4[uVar3] = (short)uVar6;
    }
    uVar6 = uVar6 + 1 & 0xffff;
  } while (uVar6 < 0x40);
  uVar11 = 0;
  uVar14 = 0x100000;
  uVar6 = 0;
  iVar9 = 0;
  iVar12 = 0;
  iVar13 = 0;
  do {
    if ((((uint)bVar1 << 0x18 ^ (uint)bVar2 << 0x10) & uVar14) != 0) {
      uVar11 = *(ushort *)(iVar5 + iVar9 * 2) ^ uVar11;
      uVar6 = *(ushort *)(iVar5 + iVar13 * 2) ^ uVar6;
    }
    uVar14 = uVar14 << 1;
    iVar7 = iVar13 + 3;
    iVar9 = iVar9 + 1;
    if (0x3e < iVar7) {
      iVar7 = iVar13 + -0x3c;
    }
    iVar12 = iVar12 + 1;
    iVar13 = iVar7;
  } while (iVar12 < 0xc);
  uVar14 = 1;
  iVar13 = 0;
  do {
    if ((uVar8 & uVar14) != 0) {
      uVar11 = *(ushort *)(iVar5 + iVar9 * 2) ^ uVar11;
      uVar6 = *(ushort *)(iVar5 + iVar7 * 2) ^ uVar6;
    }
    uVar14 = uVar14 << 1;
    iVar12 = iVar7 + 3;
    iVar9 = iVar9 + 1;
    if (0x3e < iVar12) {
      iVar12 = iVar7 + -0x3c;
    }
    iVar13 = iVar13 + 1;
    iVar7 = iVar12;
  } while (iVar13 < 0x20);
  if (uVar11 == 0) {
    if (uVar6 == 0) {
      return 0;
    }
  }
  else {
    iVar13 = DAT_0001eedc + 0x7e;
    uVar14 = (uint)*(ushort *)(iVar13 + uVar11 * 2);
    uVar10 = (uint)*(ushort *)(iVar5 + ((uVar14 * 3) % 0x3f) * 2);
    if (uVar10 == uVar6) {
      if (uVar14 < 0x2c) {
        if (0xb < uVar14) {
          uVar8 = uVar8 ^ 1 << (uVar14 - 0xc & 0xff);
        }
        *param_1 = (byte)(uVar8 >> 0x18);
        param_1[1] = (byte)(uVar8 >> 0x10);
        param_1[2] = (byte)(uVar8 >> 8);
        param_1[3] = (byte)uVar8;
        return 0;
      }
    }
    else {
      uVar6 = (int)((*(ushort *)(iVar13 + (uVar10 ^ uVar6) * 2) - uVar14) + 0x3f) % 0x3f;
      uVar10 = uVar6 & 0xffff;
      if ((uVar6 & 1) != 0) {
        uVar10 = uVar10 + 0x3f;
      }
      if (puVar4[*(ushort *)(iVar5 + ((int)((uVar14 - (uVar10 >> 1)) + 0x3f) % 0x3f) * 2)] != 0xff)
      {
        uVar6 = ((uint)(ushort)puVar4[*(ushort *)
                                       (iVar5 + ((int)((uVar14 - (uVar10 >> 1)) + 0x3f) % 0x3f) * 2)
                                     ] + (uVar10 >> 1)) % 0x3f;
        uVar11 = (uint)*(ushort *)(iVar13 + (*(ushort *)(iVar5 + uVar6 * 2) ^ uVar11) * 2);
        if (uVar6 < 0x2c) {
          if (0xb < uVar6) {
            uVar8 = uVar8 ^ 1 << (uVar6 - 0xc & 0xff);
          }
          if (0xb < uVar11) {
            uVar8 = uVar8 ^ 1 << (uVar11 - 0xc & 0xff);
          }
          *param_1 = (byte)(uVar8 >> 0x18);
          param_1[1] = (byte)(uVar8 >> 0x10);
          param_1[2] = (byte)(uVar8 >> 8);
          param_1[3] = (byte)uVar8;
          return 0xffffffff;
        }
      }
    }
  }
  return 1;
}



/* Function: FUN_0001eee0 */

undefined4 FUN_0001eee0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_18;
  int local_14;
  
  local_14 = param_1;
  if (param_2 != 0) {
    local_14 = param_1 + param_2 + -1;
  }
  local_18 = param_1;
  uVar1 = FUN_0001f81e(param_3,&local_18,param_4,DAT_0001ef10 + 0x1eef6);
  if (param_2 != 0) {
    FUN_0001f844(0,&local_18);
  }
  return uVar1;
}



/* Function: FUN_0001ef40 */

void FUN_0001ef40(uint *param_1)

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



/* Function: FUN_0001ef6c */

void FUN_0001ef6c(byte *param_1)

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



/* Function: FUN_0001ef8e */

void FUN_0001ef8e(byte *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  
  if (param_3 == 1) {
    uVar1 = 1;
  }
  else {
    if ((int)((uint)*param_1 << 0x1a) < 0) {
      param_3 = *(uint *)(param_1 + 0x1c);
    }
    for (uVar1 = 0; (uVar1 < param_3 && (param_2[uVar1] != '\0')); uVar1 = uVar1 + 1) {
    }
  }
  puVar2 = param_2 + uVar1;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar1;
  *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar1;
  FUN_0001ef40(param_1);
  for (; param_2 < puVar2; param_2 = param_2 + 1) {
    (**(code **)(param_1 + 4))(*param_2,*(undefined4 *)(param_1 + 8));
  }
  FUN_0001ef6c(param_1);
  return;
}



/* Function: FUN_0001f0e4 */

uint FUN_0001f0e4(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  iVar1 = DAT_0001f268;
  param_1[8] = 0;
  while (uVar2 = (*(code *)param_1[3])(param_1), uVar2 != 0) {
    if (uVar2 == 0x25) {
      uVar5 = 0;
      while (((uVar2 = (*(code *)param_1[3])(param_1), 0x1f < (int)uVar2 && (uVar2 < 0x31)) &&
             (uVar3 = (uint)*(byte *)(iVar1 + uVar2 + 0x1f0d8), uVar3 != 0))) {
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
          iVar4 = FUN_0001fdac(uVar2);
          if (iVar4 != 0) {
            param_1[iVar6 + 6] = uVar2 - 0x30;
            while( true ) {
              uVar2 = (*(code *)param_1[3])(param_1);
              iVar4 = FUN_0001fdac();
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
          if (uVar2 == 0x6c) goto LAB_0001f250;
          uVar2 = 0x400;
          goto LAB_0001f206;
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
LAB_0001f250:
            uVar2 = 0x80;
            goto LAB_0001f206;
          }
          if ((uVar2 != 0x74) && (uVar2 != 0x7a)) goto LAB_0001f21c;
        }
        uVar2 = 0;
LAB_0001f206:
        uVar5 = uVar5 | uVar2;
        uVar2 = (*(code *)param_1[3])(param_1);
      }
LAB_0001f21c:
      if (uVar2 == 0) break;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 + 0x20;
        uVar5 = uVar5 | 0x800;
      }
      *param_1 = uVar5;
      iVar6 = FUN_0000054c(param_1,uVar2,param_2);
      if (iVar6 == 0) goto LAB_0001f108;
      if (iVar6 == 1) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = (uint *)(((int)param_2 + 7U & 0xfffffff8) + 8);
      }
    }
    else {
LAB_0001f108:
      (*(code *)param_1[1])(uVar2,param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
  }
  return param_1[8];
}



/* Function: FUN_0001f296 */

void FUN_0001f296(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_0001f2a0;
  iVar3 = DAT_0001f29c;
  uVar2 = 1;
  iVar4 = DAT_0001f29c + -0x7c;
  *(int *)(DAT_0001f29c + 0x60) = DAT_0001f29c;
  *(int *)(iVar3 + 100) = iVar4;
  iVar3 = 0x37;
  while (0 < iVar3) {
    *(uint *)(iVar4 + (iVar3 + -1) * 4) = uVar2 + (uVar2 >> 0x10);
    uVar2 = uVar2 * DAT_0001f2a4 + iVar1;
    iVar3 = iVar3 + -1;
  }
  return;
}



/* Function: FUN_0001f2a8 */

char * FUN_0001f2a8(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = param_2;
  pcVar4 = param_1;
LAB_0001f2b0:
  cVar1 = *pcVar3;
  cVar2 = *param_1;
  if (cVar2 != '\0') goto code_r0x0001f2ba;
  goto LAB_0001f2be;
code_r0x0001f2ba:
  param_1 = param_1 + 1;
  pcVar3 = pcVar3 + 1;
  if (cVar2 != cVar1) {
LAB_0001f2be:
    pcVar3 = pcVar4;
    if ((cVar1 == '\0') || (pcVar3 = (char *)0x0, cVar2 == '\0')) {
      return pcVar3;
    }
    param_1 = pcVar4 + 1;
    pcVar3 = param_2;
    pcVar4 = param_1;
  }
  goto LAB_0001f2b0;
}



/* Function: FUN_0001f324 */

void FUN_0001f324(uint *param_1,uint *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    while( true ) {
      uVar8 = *param_2;
      param_2 = param_2 + 1;
      uVar2 = UnsignedSaturate(1 - (uVar8 & 0xff),8);
      uVar3 = UnsignedSaturate(1 - (uVar8 >> 8 & 0xff),8);
      uVar4 = UnsignedSaturate(1 - (uVar8 >> 0x10 & 0xff),8);
      uVar5 = UnsignedSaturate(1 - (uVar8 >> 0x18),8);
      if (CONCAT13((char)uVar5,CONCAT12((char)uVar4,CONCAT11((char)uVar3,(char)uVar2))) != 0) break;
      *param_1 = uVar8;
      param_1 = param_1 + 1;
    }
    while( true ) {
      *(char *)param_1 = (char)uVar8;
      if ((uVar8 & 0xff) == 0) break;
      uVar8 = uVar8 >> 8;
      param_1 = (uint *)((int)param_1 + 1);
    }
  }
  else {
    do {
      pcVar6 = (char *)((int)param_2 + 1);
      uVar8 = *param_2;
      pcVar7 = (char *)((int)param_1 + 1);
      *(char *)param_1 = (char)uVar8;
      if ((char)uVar8 == '\0') {
        return;
      }
      param_2 = (uint *)((int)param_2 + 2);
      cVar1 = *pcVar6;
      param_1 = (uint *)((int)param_1 + 2);
      *pcVar7 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}



/* Function: FUN_0001f36a */

int FUN_0001f36a(uint *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  int3 iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  
  puVar8 = param_1;
  while (((uint)puVar8 & 3) != 0) {
    puVar7 = (uint *)((int)puVar8 + 1);
    uVar10 = *puVar8;
    puVar8 = puVar7;
    if ((char)uVar10 == '\0') {
      return (int)puVar7 - ((int)param_1 + 1);
    }
  }
  do {
    uVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    uVar1 = UnsignedSaturate(1 - (uVar10 & 0xff),8);
    uVar2 = UnsignedSaturate(1 - (uVar10 >> 8 & 0xff),8);
    uVar3 = UnsignedSaturate(1 - (uVar10 >> 0x10 & 0xff),8);
    uVar4 = UnsignedSaturate(1 - (uVar10 >> 0x18),8);
    sVar5 = CONCAT11((char)uVar2,(char)uVar1);
    iVar6 = CONCAT12((char)uVar3,sVar5);
  } while (CONCAT13((char)uVar4,iVar6) == 0);
  iVar9 = (int)puVar8 - (int)((int)param_1 + 1);
  if ((char)uVar1 == '\0') {
    if (sVar5 == 0) {
      if (iVar6 != 0) {
        return iVar9 + -1;
      }
    }
    else {
      iVar9 = iVar9 + -2;
    }
    return iVar9;
  }
  return iVar9 + -3;
}



/* Function: FUN_0001f3a4 */

undefined8 FUN_0001f3a4(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  uint *puVar5;
  byte bVar6;
  undefined2 uVar7;
  byte bVar8;
  uint in_r12;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  if (3 < param_3) {
    uVar9 = (uint)param_1 & 3;
    in_r12 = uVar9;
    if (uVar9 != 0) {
      bVar6 = (byte)*param_2;
      puVar3 = (uint *)((int)param_2 + 1);
      if (uVar9 < 3) {
        puVar3 = (uint *)((int)param_2 + 2);
        in_r12 = (uint)*(byte *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar6;
      param_2 = puVar3;
      if (uVar9 < 2) {
        param_2 = (uint *)((int)puVar3 + 1);
        bVar6 = (byte)*puVar3;
      }
      puVar3 = (uint *)((int)param_1 + 1);
      if (uVar9 < 3) {
        puVar3 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)in_r12;
      }
      param_3 = (param_3 + uVar9) - 4;
      param_1 = puVar3;
      if (uVar9 < 2) {
        param_1 = (uint *)((int)puVar3 + 1);
        *(byte *)puVar3 = bVar6;
      }
    }
    param_4 = (uint)param_2 & 3;
    if (param_4 == 0) {
      uVar9 = 0;
      while (uVar1 = param_3 - 0x20, 0x1f < param_3) {
        uVar9 = param_2[1];
        uVar10 = param_2[2];
        uVar11 = param_2[3];
        *param_1 = *param_2;
        param_1[1] = uVar9;
        param_1[2] = uVar10;
        param_1[3] = uVar11;
        uVar9 = param_2[4];
        uVar10 = param_2[5];
        uVar11 = param_2[6];
        uVar12 = param_2[7];
        param_2 = param_2 + 8;
        param_1[4] = uVar9;
        param_1[5] = uVar10;
        param_1[6] = uVar11;
        param_1[7] = uVar12;
        param_1 = param_1 + 8;
        param_3 = uVar1;
      }
      if ((bool)((byte)(uVar1 >> 4) & 1)) {
        uVar9 = *param_2;
        uVar10 = param_2[1];
        uVar11 = param_2[2];
        uVar12 = param_2[3];
        param_2 = param_2 + 4;
        *param_1 = uVar9;
        param_1[1] = uVar10;
        param_1[2] = uVar11;
        param_1[3] = uVar12;
        param_1 = param_1 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        uVar9 = *param_2;
        uVar10 = param_2[1];
        param_2 = param_2 + 2;
        *param_1 = uVar9;
        param_1[1] = uVar10;
        param_1 = param_1 + 2;
      }
      puVar2 = param_1;
      puVar3 = param_2;
      if ((bool)((byte)(uVar1 >> 2) & 1)) {
        puVar3 = param_2 + 1;
        uVar9 = *param_2;
        puVar2 = param_1 + 1;
        *param_1 = uVar9;
      }
      uVar7 = (undefined2)uVar9;
      if ((uVar1 & 3) == 0) {
        return CONCAT44(puVar3,puVar2);
      }
      bVar14 = (bool)((byte)(uVar1 >> 1) & 1);
      param_3 = param_3 << 0x1f;
      bVar13 = (int)param_3 < 0;
      puVar5 = puVar3;
      if (bVar14) {
        puVar5 = (uint *)((int)puVar3 + 2);
        uVar7 = (undefined2)*puVar3;
      }
      puVar3 = puVar5;
      if (bVar13) {
        puVar3 = (uint *)((int)puVar5 + 1);
        param_3 = (uint)(byte)*puVar5;
      }
      puVar5 = puVar2;
      if (bVar14) {
        puVar5 = (uint *)((int)puVar2 + 2);
        *(undefined2 *)puVar2 = uVar7;
      }
      puVar2 = puVar5;
      if (bVar13) {
        puVar2 = (uint *)((int)puVar5 + 1);
        *(byte *)puVar5 = (byte)param_3;
      }
      return CONCAT44(puVar3,puVar2);
    }
    bVar13 = 3 < param_3;
    param_3 = param_3 - 4;
    if (bVar13) {
      param_2 = (uint *)((int)param_2 - param_4);
      in_r12 = *param_2;
      puVar3 = param_1;
      if (param_4 == 2) {
        do {
          puVar2 = param_2;
          param_4 = in_r12 >> 0x10;
          param_2 = puVar2 + 1;
          in_r12 = *param_2;
          bVar13 = 3 < param_3;
          param_3 = param_3 - 4;
          param_4 = param_4 | in_r12 << 0x10;
          param_1 = puVar3 + 1;
          *puVar3 = param_4;
          puVar3 = param_1;
        } while (bVar13);
        param_2 = (uint *)((int)puVar2 + 6);
      }
      else if (param_4 < 3) {
        do {
          puVar2 = param_2;
          param_4 = in_r12 >> 8;
          param_2 = puVar2 + 1;
          in_r12 = *param_2;
          bVar13 = 3 < param_3;
          param_3 = param_3 - 4;
          param_4 = param_4 | in_r12 << 0x18;
          param_1 = puVar3 + 1;
          *puVar3 = param_4;
          puVar3 = param_1;
        } while (bVar13);
        param_2 = (uint *)((int)puVar2 + 5);
      }
      else {
        do {
          puVar2 = param_2;
          param_4 = in_r12 >> 0x18;
          param_2 = puVar2 + 1;
          in_r12 = *param_2;
          bVar13 = 3 < param_3;
          param_3 = param_3 - 4;
          param_4 = param_4 | in_r12 << 8;
          param_1 = puVar3 + 1;
          *puVar3 = param_4;
          puVar3 = param_1;
        } while (bVar13);
        param_2 = (uint *)((int)puVar2 + 7);
      }
    }
  }
  bVar8 = (byte)in_r12;
  bVar6 = (byte)param_4;
  bVar14 = (bool)((byte)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  bVar13 = (int)param_3 < 0;
  if (bVar14) {
    pbVar4 = (byte *)((int)param_2 + 1);
    bVar6 = (byte)*param_2;
    param_2 = (uint *)((int)param_2 + 2);
    bVar8 = *pbVar4;
  }
  puVar3 = param_2;
  if (bVar13) {
    puVar3 = (uint *)((int)param_2 + 1);
    param_3 = (uint)(byte)*param_2;
  }
  if (bVar14) {
    pbVar4 = (byte *)((int)param_1 + 1);
    *(byte *)param_1 = bVar6;
    param_1 = (uint *)((int)param_1 + 2);
    *pbVar4 = bVar8;
  }
  puVar2 = param_1;
  if (bVar13) {
    puVar2 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)param_3;
  }
  return CONCAT44(puVar3,puVar2);
}



/* Function: FUN_0001f478 */

undefined8 FUN_0001f478(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  
  while (uVar1 = param_3 - 0x20, 0x1f < param_3) {
    uVar7 = *(undefined4 *)(param_2 + 4);
    uVar8 = *(undefined4 *)(param_2 + 8);
    uVar9 = *(undefined4 *)(param_2 + 0xc);
    *param_1 = *(undefined4 *)param_2;
    param_1[1] = uVar7;
    param_1[2] = uVar8;
    param_1[3] = uVar9;
    param_4 = *(undefined4 *)(param_2 + 0x10);
    uVar7 = *(undefined4 *)(param_2 + 0x14);
    uVar8 = *(undefined4 *)(param_2 + 0x18);
    uVar9 = *(undefined4 *)(param_2 + 0x1c);
    param_2 = param_2 + 0x20;
    param_1[4] = param_4;
    param_1[5] = uVar7;
    param_1[6] = uVar8;
    param_1[7] = uVar9;
    param_1 = param_1 + 8;
    param_3 = uVar1;
  }
  if ((bool)((byte)(uVar1 >> 4) & 1)) {
    param_4 = *(undefined4 *)param_2;
    uVar7 = *(undefined4 *)(param_2 + 4);
    uVar8 = *(undefined4 *)(param_2 + 8);
    uVar9 = *(undefined4 *)(param_2 + 0xc);
    param_2 = param_2 + 0x10;
    *param_1 = param_4;
    param_1[1] = uVar7;
    param_1[2] = uVar8;
    param_1[3] = uVar9;
    param_1 = param_1 + 4;
  }
  if ((int)(param_3 << 0x1c) < 0) {
    param_4 = *(undefined4 *)param_2;
    uVar7 = *(undefined4 *)(param_2 + 4);
    param_2 = param_2 + 8;
    *param_1 = param_4;
    param_1[1] = uVar7;
    param_1 = param_1 + 2;
  }
  puVar3 = param_1;
  pbVar4 = param_2;
  if ((bool)((byte)(uVar1 >> 2) & 1)) {
    pbVar4 = param_2 + 4;
    param_4 = *(undefined4 *)param_2;
    puVar3 = param_1 + 1;
    *param_1 = param_4;
  }
  uVar6 = (undefined2)param_4;
  if ((uVar1 & 3) == 0) {
    return CONCAT44(pbVar4,puVar3);
  }
  bVar11 = (bool)((byte)(uVar1 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  bVar10 = (int)param_3 < 0;
  pbVar5 = pbVar4;
  if (bVar11) {
    pbVar5 = pbVar4 + 2;
    uVar6 = *(undefined2 *)pbVar4;
  }
  pbVar4 = pbVar5;
  if (bVar10) {
    pbVar4 = pbVar5 + 1;
    param_3 = (uint)*pbVar5;
  }
  puVar2 = puVar3;
  if (bVar11) {
    puVar2 = (undefined4 *)((int)puVar3 + 2);
    *(undefined2 *)puVar3 = uVar6;
  }
  puVar3 = puVar2;
  if (bVar10) {
    puVar3 = (undefined4 *)((int)puVar2 + 1);
    *(char *)puVar2 = (char)param_3;
  }
  return CONCAT44(pbVar4,puVar3);
}



/* Function: FUN_0001f4dc */

undefined4 * FUN_0001f4dc(undefined4 *param_1,uint param_2,undefined1 param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  
  uVar1 = CONCAT11(param_3,param_3);
  uVar6 = CONCAT22(uVar1,uVar1);
  if (param_2 < 4) {
    if ((param_2 & 2) != 0) {
      puVar3 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_3;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar3 = param_3;
    }
    puVar2 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar2 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_3;
    }
    return puVar2;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar7 = 4 - ((uint)param_1 & 3);
    puVar2 = param_1;
    if (iVar7 != 2) {
      puVar2 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_3;
    }
    param_1 = puVar2;
    if (1 < iVar7) {
      param_1 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = uVar1;
    }
    param_2 = param_2 - iVar7;
  }
  bVar8 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar8) {
      *param_1 = uVar6;
      param_1[1] = uVar6;
      param_1[2] = uVar6;
      param_1[3] = uVar6;
      param_1[4] = uVar6;
      param_1[5] = uVar6;
      param_1[6] = uVar6;
      param_1[7] = uVar6;
      param_1 = param_1 + 8;
      bVar8 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar8);
  if ((param_2 & 0x10) != 0) {
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1[2] = uVar6;
    param_1[3] = uVar6;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1 = param_1 + 2;
  }
  uVar5 = param_2 << 0x1e;
  puVar2 = param_1;
  if ((param_2 << 0x1c & 0x40000000) != 0) {
    puVar2 = param_1 + 1;
    *param_1 = uVar6;
  }
  if (uVar5 != 0) {
    puVar4 = puVar2;
    if ((int)uVar5 < 0) {
      puVar4 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = uVar1;
    }
    puVar2 = puVar4;
    if ((uVar5 & 0x40000000) != 0) {
      puVar2 = (undefined4 *)((int)puVar4 + 1);
      *(undefined1 *)puVar4 = param_3;
    }
    return puVar2;
  }
  return puVar2;
}



/* Function: FUN_0001f4ec */

undefined4 * FUN_0001f4ec(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  if (param_2 < 4) {
    if ((param_2 & 2) != 0) {
      puVar2 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar2 = 0;
    }
    puVar1 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar1 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
    }
    return puVar1;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar5 = 4 - ((uint)param_1 & 3);
    puVar1 = param_1;
    if (iVar5 != 2) {
      puVar1 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
    }
    param_1 = puVar1;
    if (1 < iVar5) {
      param_1 = (undefined4 *)((int)puVar1 + 2);
      *(undefined2 *)puVar1 = 0;
    }
    param_2 = param_2 - iVar5;
  }
  bVar6 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar6) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar6 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar6);
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
  uVar4 = param_2 << 0x1e;
  puVar1 = param_1;
  if ((param_2 << 0x1c & 0x40000000) != 0) {
    puVar1 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar4 != 0) {
    puVar3 = puVar1;
    if ((int)uVar4 < 0) {
      puVar3 = (undefined4 *)((int)puVar1 + 2);
      *(undefined2 *)puVar1 = 0;
    }
    puVar1 = puVar3;
    if ((uVar4 & 0x40000000) != 0) {
      puVar1 = (undefined4 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = 0;
    }
    return puVar1;
  }
  return puVar1;
}



/* Function: FUN_0001f538 */

undefined4 * FUN_0001f538(undefined4 *param_1,uint param_2)

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



/* Function: FUN_0001f588 */

uint * FUN_0001f588(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = DAT_0001f5f0;
  puVar1 = param_1;
  if (((uint)param_1 & 3) == 0 && ((uint)param_2 & 3) == 0) {
    while (3 < param_3) {
      uVar4 = *param_2;
      if ((uVar4 - iVar3 & ~uVar4 & iVar3 << 7) != 0) break;
      *puVar1 = uVar4;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
    }
  }
  do {
    iVar3 = param_3 + -1;
    if (param_3 < 1) {
      return param_1;
    }
    uVar4 = *param_2;
    puVar2 = (uint *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)uVar4;
    puVar1 = puVar2;
    param_2 = (uint *)((int)param_2 + 1);
    param_3 = iVar3;
  } while ((char)uVar4 != '\0');
  FUN_0001f4ec(puVar2,iVar3);
  return param_1;
}



/* Function: FUN_0001f5f4 */

uint FUN_0001f5f4(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  if ((((uint)param_1 ^ (uint)param_2) & 3) == 0) {
    puVar1 = param_1;
    puVar5 = param_2;
    if (((uint)param_1 & 3) != 0) {
      puVar1 = (uint *)((int)param_1 + 1);
      uVar7 = (uint)(byte)*param_1;
      uVar8 = (uint)(byte)*param_2;
      bVar10 = uVar7 == 1;
      if (uVar7 != 0) {
        bVar10 = uVar7 == uVar8;
      }
      if (!bVar10) goto LAB_0001f6dc;
      puVar5 = (uint *)((int)param_2 + 1);
      if (((uint)puVar1 & 3) != 0) {
        puVar2 = (uint *)((int)param_1 + 2);
        uVar7 = (uint)*(byte *)puVar1;
        uVar8 = (uint)*(byte *)((int)param_2 + 1);
        bVar10 = uVar7 == 1;
        if (uVar7 != 0) {
          bVar10 = uVar7 == uVar8;
        }
        if (!bVar10) goto LAB_0001f6dc;
        puVar1 = puVar2;
        puVar5 = (uint *)((int)param_2 + 2);
        if (((uint)puVar2 & 3) != 0) {
          puVar1 = (uint *)((int)param_1 + 3);
          uVar7 = (uint)*(byte *)puVar2;
          puVar5 = (uint *)((int)param_2 + 3);
          uVar8 = (uint)*(byte *)((int)param_2 + 2);
          bVar10 = uVar7 == 1;
          if (uVar7 != 0) {
            bVar10 = uVar7 == uVar8;
          }
          if (!bVar10) goto LAB_0001f6dc;
        }
      }
    }
    do {
      uVar7 = *puVar1;
      uVar8 = *puVar5;
      uVar9 = uVar7 - DAT_0001f6e4 & ~uVar7 & DAT_0001f6e4 << 7;
      puVar1 = puVar1 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar9 == 0 && uVar7 == uVar8);
    uVar3 = uVar8 * 0x1000000 + uVar7 * -0x1000000;
    bVar11 = uVar3 == 0;
    bVar13 = !bVar11 && uVar7 * 0x1000000 <= uVar8 * 0x1000000;
    bVar12 = (uVar9 & 0xff0) == 0;
    bVar10 = bVar11 && bVar12;
    if (bVar11 && bVar12) {
      uVar3 = uVar8 * 0x10000 + uVar7 * -0x10000;
      bVar11 = uVar3 == 0;
      bVar13 = !bVar11 && uVar7 * 0x10000 <= uVar8 * 0x10000;
      bVar12 = (uVar9 & 0xff00) == 0;
      bVar10 = bVar11 && bVar12;
      if (bVar11 && bVar12) {
        uVar3 = uVar8 * 0x100 + uVar7 * -0x100;
        bVar11 = uVar3 == 0;
        bVar13 = !bVar11 && uVar7 * 0x100 <= uVar8 * 0x100;
        bVar12 = (uVar9 & 0xff0000) == 0;
        bVar10 = bVar11 && bVar12;
        if (bVar11 && bVar12) {
          bVar13 = uVar7 <= uVar8;
          uVar3 = uVar8 - uVar7;
          bVar10 = uVar3 == 0;
        }
      }
    }
    if (!bVar10) {
      uVar3 = (uint)bVar13 << 0x1f | uVar3 >> 1;
    }
    return uVar3;
  }
  do {
    pbVar4 = (byte *)((int)param_1 + 1);
    uVar7 = (uint)(byte)*param_1;
    pbVar6 = (byte *)((int)param_2 + 1);
    uVar8 = (uint)(byte)*param_2;
    bVar10 = uVar7 == 1;
    if (uVar7 != 0) {
      bVar10 = uVar7 == uVar8;
    }
    if (!bVar10) break;
    param_1 = (uint *)((int)param_1 + 2);
    uVar7 = (uint)*pbVar4;
    param_2 = (uint *)((int)param_2 + 2);
    uVar8 = (uint)*pbVar6;
    bVar10 = uVar7 == 1;
    if (uVar7 != 0) {
      bVar10 = uVar7 == uVar8;
    }
  } while (bVar10);
LAB_0001f6dc:
  return uVar7 - uVar8;
}



/* Function: FUN_0001f6e8 */

undefined4 FUN_0001f6e8(undefined4 *param_1)

{
  return *param_1;
}



/* Function: FUN_0001f6fe */

void FUN_0001f6fe(undefined4 param_1,undefined1 *param_2)

{
  *param_2 = (char)param_1;
  param_2[1] = (char)((uint)param_1 >> 8);
  param_2[2] = (char)((uint)param_1 >> 0x10);
  param_2[3] = (char)((uint)param_1 >> 0x18);
  return;
}



/* Function: FUN_0001f714 */

int FUN_0001f714(int param_1,int *param_2)

{
  if (*param_2 << 0x15 < 0) {
    param_1 = (int)(char)param_1;
  }
  else if (*param_2 << 0x17 < 0) {
    return (int)(short)param_1;
  }
  return param_1;
}



/* Function: FUN_0001f726 */

uint FUN_0001f726(uint param_1,int *param_2)

{
  if (*param_2 << 0x15 < 0) {
    param_1 = param_1 & 0xff;
  }
  else if (*param_2 << 0x17 < 0) {
    return param_1 & 0xffff;
  }
  return param_1;
}



/* Function: FUN_0001f738 */

undefined4 FUN_0001f738(uint *param_1,int param_2,int param_3,int param_4)

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
    FUN_0001ef40(param_1);
  }
  for (iVar3 = 0; iVar3 < param_4; iVar3 = iVar3 + 1) {
    (*(code *)param_1[1])(*(undefined1 *)(param_3 + iVar3),param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)((uint)(byte)*param_1 << 0x1b) < 0) {
    FUN_0001ef40(param_1);
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
  FUN_0001ef6c(param_1);
  if ((int)((uint)(byte)*param_1 << 0x18) < 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Function: FUN_0001f81e */

void FUN_0001f81e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  local_2c = 0;
  local_34 = DAT_0001f840 + 0x1f830;
  local_3c = param_4;
  uStack_38 = param_2;
  uStack_30 = param_1;
  FUN_0001f0e4(auStack_40,param_3);
  return;
}



/* Function: FUN_0001f844 */

void FUN_0001f844(undefined1 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = param_1;
  *param_2 = puVar1 + 1;
  return;
}



/* Function: FUN_0001f88c */

undefined8 FUN_0001f88c(byte *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 uStack_2c;
  
  iVar2 = DAT_0001f944;
  puVar7 = (undefined4 *)(DAT_0001f944 + 0x1f89e);
  iVar6 = 0;
  local_38 = *puVar7;
  uStack_34 = *(undefined4 *)(DAT_0001f944 + 0x1f8a2);
  iVar5 = 0;
  local_30 = param_3;
  uStack_2c = param_4;
  do {
    if ((((int)((uint)*param_1 << 0x1a) < 0) && (*(int *)(param_1 + 0x1c) <= iVar6)) ||
       ((param_3 <= iVar5 && (*(short *)(param_2 + iVar5 * 2) == 0)))) goto LAB_0001f8e4;
    iVar1 = FUN_0001fb24(&local_30,*(undefined2 *)(param_2 + iVar5 * 2),&local_38);
    if (iVar1 != -1) {
      if (((int)((uint)*param_1 << 0x1a) < 0) && (*(uint *)(param_1 + 0x1c) < (uint)(iVar6 + iVar1))
         ) {
LAB_0001f8e4:
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar6;
        FUN_0001ef40(param_1);
        local_38 = *puVar7;
        uStack_34 = *(undefined4 *)(iVar2 + 0x1f8a2);
        for (iVar2 = 0; iVar2 < iVar5; iVar2 = iVar2 + 1) {
          uVar3 = FUN_0001fb24(&local_30,*(undefined2 *)(param_2 + iVar2 * 2),&local_38);
          if (uVar3 != 0xffffffff) {
            for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
              (**(code **)(param_1 + 4))
                        (*(undefined1 *)((int)&local_30 + uVar4),*(undefined4 *)(param_1 + 8));
            }
          }
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar6;
        FUN_0001ef6c(param_1);
        return CONCAT44(uStack_34,local_38);
      }
      iVar6 = iVar6 + iVar1;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



/* Function: FUN_0001fa34 */

undefined8 FUN_0001fa34(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 - (param_1 >> 2);
  uVar1 = uVar1 + (uVar1 >> 4);
  uVar1 = uVar1 + (uVar1 >> 8);
  uVar1 = uVar1 + (uVar1 >> 0x10) >> 3;
  iVar2 = (param_1 - 10) + uVar1 * -10;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 10;
  }
  else {
    uVar1 = uVar1 + 1;
  }
  return CONCAT44(iVar2,uVar1);
}



/* Function: FUN_0001fa60 */

undefined8 FUN_0001fa60(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 >> 2 | param_2 << 0x1e;
  uVar1 = param_1 - uVar3;
  uVar2 = param_2 - ((param_2 >> 2) + (uint)(param_1 < uVar3));
  uVar4 = uVar1 >> 4 | uVar2 * 0x10000000;
  uVar3 = uVar1 + uVar4;
  uVar2 = uVar2 + (uVar2 >> 4) + (uint)CARRY4(uVar1,uVar4);
  uVar4 = uVar3 >> 8 | uVar2 * 0x1000000;
  uVar1 = uVar3 + uVar4;
  uVar2 = uVar2 + (uVar2 >> 8) + (uint)CARRY4(uVar3,uVar4);
  uVar4 = uVar1 >> 0x10 | uVar2 * 0x10000;
  uVar3 = uVar1 + uVar4;
  uVar1 = uVar2 + (uVar2 >> 0x10) + (uint)CARRY4(uVar1,uVar4);
  uVar2 = uVar1 + CARRY4(uVar3,uVar1);
  uVar3 = uVar3 + uVar1 >> 3 | uVar2 * 0x20000000;
  uVar1 = uVar2 >> 3;
  if (-1 < (int)((param_2 - (param_1 < 10)) -
                (((uVar1 << 2 | (uVar2 & 7) >> 1) + uVar1 + (uint)CARRY4(uVar3,uVar3 * 4)) * 2 +
                 (uint)CARRY4(uVar3 * 5,uVar3 * 5) + (uint)(param_1 - 10 < uVar3 * 10)))) {
    return CONCAT44(uVar1 + (0xfffffffe < uVar3),uVar3 + 1);
  }
  return CONCAT44(uVar1,uVar3);
}



/* Function: FUN_0001fb24 */

undefined4 FUN_0001fb24(undefined1 *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_0001fbb0();
  iVar3 = *piVar1;
  if (*(char *)(iVar3 + 0x101) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001fb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(iVar3 + 0x107 + *(int *)(iVar3 + 0x107)))(param_1,param_2,param_3);
    return uVar2;
  }
  if ((param_2 < 0x100) && (*(char *)(iVar3 + param_2) != '\0')) {
    *param_1 = (char)param_2;
    return 1;
  }
  return 0xffffffff;
}



/* Function: FUN_0001fb64 */

void FUN_0001fb64(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 unaff_lr;
  uint *puVar3;
  
  uVar1 = FUN_0001fbd4();
  *(undefined4 *)((uVar1 & 0xfffffff8) + 0x5c) = unaff_lr;
  puVar3 = (uint *)((uVar1 & 0xfffffff8) + 0x58);
  *puVar3 = uVar1;
  FUN_000001b8();
  puVar2 = (undefined4 *)*puVar3;
  *puVar2 = 0;
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
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  return;
}



/* Function: FUN_0001fbb0 */

int FUN_0001fbb0(void)

{
  int iVar1;
  
  iVar1 = FUN_0001fbdc();
  return iVar1 + 4;
}



/* Function: FUN_0001fbc0 */

void FUN_0001fbc0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_000005fa();
  FUN_0001fbe8(param_1,param_2);
  do {
    piVar1 = DAT_0000064c;
    piVar2 = (int *)DAT_0000064c[1];
    piVar4 = (int *)*DAT_0000064c + 1;
    piVar3 = piVar2 + 1;
    *piVar2 = *piVar2 + *(int *)*DAT_0000064c;
    if (piVar1 <= piVar4) {
      piVar4 = piVar1 + -0x37;
    }
    if (piVar1 <= piVar3) {
      piVar3 = piVar1 + -0x37;
    }
    *piVar1 = (int)piVar4;
    piVar1[1] = (int)piVar3;
  } while( true );
}



/* Function: FUN_0001fbd4 */

undefined4 FUN_0001fbd4(void)

{
  return DAT_0001fbd8;
}



/* Function: FUN_0001fbdc */

undefined4 FUN_0001fbdc(void)

{
  return DAT_0001fbe0;
}



/* Function: FUN_0001fbe8 */

void FUN_0001fbe8(void)

{
  software_interrupt(0xab);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_0001fbfc */

void FUN_0001fbfc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  FUN_000006c8(DAT_0001fca0);
  FUN_0000e154(0x2a,0);
  FUN_0000e164(param_1 >> 8,0);
  FUN_0000e164(param_1 & 0xff,0);
  FUN_0000e164(param_3 >> 8,0);
  FUN_0000e164(param_3 & 0xff,0);
  FUN_0000e154(0x2b,0);
  FUN_0000e164(param_2 >> 8,0);
  FUN_0000e164(param_2 & 0xff,0);
  FUN_0000e164(param_4 >> 8,0);
  FUN_0000e164(param_4 & 0xff,0);
  FUN_0000e154(0x2c,0);
  return;
}



/* Function: FUN_0001fca4 */

void FUN_0001fca4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  FUN_000006c8(DAT_0001fd48);
  FUN_0000e154(0x2a,0);
  FUN_0000e164(param_1 >> 8,0);
  FUN_0000e164(param_1 & 0xff,0);
  FUN_0000e164(param_3 >> 8,0);
  FUN_0000e164(param_3 & 0xff,0);
  FUN_0000e154(0x2b,0);
  FUN_0000e164(param_2 >> 8,0);
  FUN_0000e164(param_2 & 0xff,0);
  FUN_0000e164(param_4 >> 8,0);
  FUN_0000e164(param_4 & 0xff,0);
  FUN_0000e154(0x2c,0);
  return;
}



/* Function: FUN_0001fd4c */

undefined4 FUN_0001fd4c(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 == *(int *)(DAT_0001fda4 + iVar1 * 0x10)) {
      iVar1 = DAT_0001fda4 + iVar1 * 0x10;
      *(int *)(DAT_0001fda8 + *param_1 * 0x20) = iVar1;
      param_1[1] = *(int *)(iVar1 + 4);
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar1 + 8);
      *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)(iVar1 + 10);
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 0;
}



/* Function: FUN_0001fdac */

undefined4 FUN_0001fdac(int param_1)

{
  if (param_1 - 0x30U < 10) {
    return 1;
  }
  return 0;
}



/* Function: FUN_0001fdbc */

undefined4 FUN_0001fdbc(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 3;
  case 1:
    return 4;
  case 2:
    return 5;
  case 3:
    return 6;
  case 4:
    return 7;
  case 5:
    return 0;
  case 6:
    return 1;
  case 7:
    return 2;
  default:
    FUN_000006d8(0x10,DAT_0001fe48,DAT_0001fe44);
    return 8;
  }
}



/* Function: FUN_0001fe4c */

int FUN_0001fe4c(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar1 = FUN_0001f5f4(DAT_0001fe70 + 0x1fe5e), iVar1 != 0)) {
    return 0;
  }
  return DAT_0001fe74 + 0x1fe6e;
}



/* Function: FUN_0001fe9c */

undefined4 FUN_0001fe9c(undefined4 param_1)

{
  coproc_moveto_Invalidate_Entire_Instruction(0);
  return param_1;
}



/* Function: FUN_0001fec0 */

undefined4 FUN_0001fec0(undefined4 param_1)

{
  coproc_movefrom_Control();
  return param_1;
}



/* Function: FUN_0001fecc */

undefined8 FUN_0001fecc(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = param_1;
  uVar2 = param_2;
  do {
    coproc_moveto_Clean_Data_Cache_by_MVA(iVar1);
    iVar1 = iVar1 + 0x20;
    bVar3 = 0x1f < uVar2;
    uVar2 = uVar2 - 0x20;
  } while (bVar3 && uVar2 != 0);
  DataSynchronizationBarrier(0xf);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0001fefc */

undefined8 FUN_0001fefc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_cr0;
  
  DataMemoryBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  FUN_00020568();
  uVar3 = coprocessor_movefromRt(0xf,1,0,in_cr0,in_cr0);
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      coproc_moveto_Invalidate_Entire_Data_by_Index(iVar1 << 0x1e | iVar2 << 5);
      iVar2 = iVar2 + 1;
    } while (iVar2 <= (int)(uVar3 >> 0xd & 0x1ff));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0001ff54 */

undefined8 FUN_0001ff54(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_cr0;
  
  DataMemoryBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  uVar3 = coprocessor_movefromRt(0xf,1,0,in_cr0,in_cr0);
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      coproc_moveto_Invalidate_Entire_Data_by_Index(iVar1 << 0x1e | iVar2 << 5);
      iVar2 = iVar2 + 1;
    } while (iVar2 <= (int)(uVar3 >> 0xd & 0x1ff));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0001ffa8 */

undefined8 FUN_0001ffa8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr10;
  
  coproc_moveto_Invalidate_Entire_Instruction(0);
  uVar3 = coprocessor_movefromRt(0xf,1,0,in_cr0,in_cr0);
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      coproc_moveto_Invalidate_Entire_Data_by_Index(iVar1 << 0x1e | iVar2 << 5);
      iVar2 = iVar2 + 1;
    } while (iVar2 <= (int)(uVar3 >> 0xd & 0x1ff));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  coproc_moveto_Invalidate_unified_TLB_unlocked(0);
  uVar3 = coproc_movefrom_Main_ID();
  if (((uVar3 & 0xff000000) == 0x41000000) && ((uVar3 & 0xffff) >> 4 == 0xc05)) {
    coproc_moveto_Invalidate_Entire_Instruction(0);
    DataSynchronizationBarrier(0xf);
    uVar3 = coproc_movefrom_Control();
    coproc_moveto_Control(uVar3 & 0xfffffff8 | 0x10003c02);
    coproc_moveto_Translation_table_control(0);
    coproc_moveto_Translation_table_base_1(0x41);
    coprocessor_moveto(0xf,0,0,0,in_cr10,in_cr2);
    coprocessor_moveto(0xf,0,1,0,in_cr10,in_cr2);
    coproc_movefrom_Control();
    return CONCAT44(param_2,param_1);
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_0002008c */

undefined8 FUN_0002008c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_r1;
  
  coproc_moveto_Translation_table_base_0(*DAT_000205b0 | 0x49);
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Domain_Access_Control(DAT_000205b4);
  coproc_moveto_Invalidate_Entire_Instruction(0);
  FUN_0001ff54(param_1,uVar1 & 0xfffff7ff | 0x1007,DAT_000205b4,0,param_1,param_2,param_3,param_4);
  coproc_moveto_Invalidate_unified_TLB_unlocked(0);
  coproc_moveto_Control(extraout_r1);
  coproc_movefrom_Main_ID();
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00020100 */

undefined8 FUN_00020100(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 in_cr2;
  undefined4 in_cr10;
  
  uVar1 = coprocessor_movefromRt(0xf,0,0,in_cr10,in_cr2);
  coprocessor_moveto(0xf,0,0,uVar1 | param_1,in_cr10,in_cr2);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00020128 */

undefined8 FUN_00020128(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 in_cr2;
  undefined4 in_cr10;
  
  uVar1 = coprocessor_movefromRt(0xf,0,1,in_cr10,in_cr2);
  coprocessor_moveto(0xf,0,1,uVar1 | param_1,in_cr10,in_cr2);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00020150 */

undefined4 FUN_00020150(undefined4 param_1)

{
  coproc_movefrom_Control();
  return param_1;
}



/* Function: FUN_00020160 */

undefined4 FUN_00020160(undefined4 param_1)

{
  coproc_movefrom_Control();
  return param_1;
}



/* Function: FUN_00020170 */

uint FUN_00020170(uint param_1)

{
  coproc_moveto_Translation_table_base_0(param_1 | 1);
  return param_1;
}



/* Function: FUN_0002019c */

undefined8 FUN_0002019c(undefined4 param_1,undefined4 param_2)

{
  coproc_movefrom_Control();
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_000201b0 */

undefined8 FUN_000201b0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_000204cc();
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xffffe7f8);
  coproc_movefrom_Main_ID();
  DataMemoryBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0002022c */

undefined4 FUN_0002022c(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xffffefff);
  return param_1;
}



/* Function: FUN_00020254 */

undefined4 FUN_00020254(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xfffffffb);
  return param_1;
}



/* Function: FUN_00020268 */

undefined4 FUN_00020268(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x1000);
  return param_1;
}



/* Function: FUN_0002027c */

undefined4 FUN_0002027c(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x1000);
  return param_1;
}



/* Function: FUN_000202a4 */

undefined4 FUN_000202a4(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 4);
  return param_1;
}



/* Function: FUN_000202b8 */

undefined8 FUN_000202b8(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Domain_Access_Control();
  coproc_moveto_Domain_Access_Control(uVar1 & ~param_2 | param_1);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00020300 */

undefined8 FUN_00020300(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 2);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0002032c */

undefined8 FUN_0002032c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xfffffffd);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00020358 */

undefined8 FUN_00020358(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00020360 */

undefined8 FUN_00020360(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = coproc_movefrom_Cache_Type();
  iVar1 = 4 << (uVar2 >> 0x10 & 0xf);
  uVar2 = param_1 & ~(iVar1 - 1U);
  do {
    coproc_moveto_Invalidate_Data_Cache_by_MVA(uVar2);
    uVar2 = uVar2 + iVar1;
  } while (uVar2 < param_2);
  DataSynchronizationBarrier(0xf);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00020398 */

undefined8 FUN_00020398(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = coproc_movefrom_Cache_Type();
  iVar1 = 4 << (uVar2 >> 0x10 & 0xf);
  uVar3 = iVar1 - 1;
  uVar2 = param_1 & ~uVar3;
  if ((param_1 & uVar3) != 0) {
    coproc_moveto_Invalidate_Data_Cache_by_MVA(uVar2);
  }
  if ((param_2 & uVar3) != 0) {
    coproc_moveto_Invalidate_Data_Cache_by_MVA(param_2 & ~uVar3);
  }
  do {
    coproc_moveto_Invalidate_Entire_Data_by_MVA(uVar2);
    uVar2 = uVar2 + iVar1;
  } while (uVar2 < (param_2 & ~uVar3));
  DataSynchronizationBarrier(0xf);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_000203e4 */

undefined8 FUN_000203e4(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = coproc_movefrom_Cache_Type();
  iVar1 = 4 << (uVar2 >> 0x10 & 0xf);
  uVar2 = param_1 & ~(iVar1 - 1U);
  do {
    coproc_moveto_Clean_Data_Cache_by_MVA(uVar2);
    uVar2 = uVar2 + iVar1;
  } while (uVar2 < param_2);
  DataSynchronizationBarrier(0xf);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0002041c */

void FUN_0002041c(void)

{
  FUN_000203e4();
  return;
}



/* Function: FUN_00020428 */

void FUN_00020428(void)

{
  FUN_00020398();
  return;
}



/* Function: FUN_00020434 */

void FUN_00020434(void)

{
  FUN_00020360();
  return;
}



/* Function: FUN_00020460 */

undefined8 FUN_00020460(undefined4 param_1,undefined4 param_2)

{
  FUN_0001fe9c();
  FUN_00020568();
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00020484 */

undefined4 FUN_00020484(undefined4 param_1)

{
  coproc_moveto_Domain_Access_Control(0xffffffcd);
  return param_1;
}



/* Function: FUN_00020494 */

undefined4 FUN_00020494(undefined4 param_1)

{
  coproc_moveto_Domain_Access_Control(0xffffffff);
  return param_1;
}



/* Function: FUN_000204a4 */

undefined4 FUN_000204a4(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x2000);
  return param_1;
}



/* Function: FUN_000204b8 */

undefined4 FUN_000204b8(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xffffdfff);
  return param_1;
}



/* Function: FUN_000204cc */

void FUN_000204cc(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 in_cr0;
  undefined4 in_cr7;
  undefined4 in_cr14;
  
  DataMemoryBarrier(0xf);
  uVar2 = coprocessor_movefromRt(0xf,1,1,in_cr0,in_cr0);
  uVar4 = uVar2 >> 0x17 & 0xe;
  if (uVar4 != 0) {
    uVar9 = 0;
    do {
      if (1 < (uVar2 >> (uVar9 + (uVar9 >> 1) & 0xff) & 7)) {
        coprocessor_moveto(0xf,2,0,uVar9,in_cr0,in_cr0);
        InstructionSynchronizationBarrier(0xf);
        uVar3 = coprocessor_movefromRt(0xf,1,0,in_cr0,in_cr0);
        uVar5 = uVar3 >> 3 & 0x3ff;
        uVar7 = uVar3 >> 0xd & 0x7fff;
        uVar8 = uVar7;
        uVar6 = uVar5;
        do {
          do {
            coprocessor_moveto(0xf,0,2,uVar9 | uVar6 << LZCOUNT(uVar5) | uVar8 << (uVar3 & 7) + 4,
                               in_cr7,in_cr14);
            bVar1 = 0 < (int)uVar8;
            uVar8 = uVar8 - 1;
          } while (bVar1);
          bVar1 = 0 < (int)uVar6;
          uVar8 = uVar7;
          uVar6 = uVar6 - 1;
        } while (bVar1);
      }
      uVar9 = uVar9 + 2;
    } while ((int)uVar9 < (int)uVar4);
  }
  coprocessor_moveto(0xf,2,0,0,in_cr0,in_cr0);
  DataSynchronizationBarrier(0xe);
  InstructionSynchronizationBarrier(0xf);
  return;
}



/* Function: FUN_00020568 */

undefined8 FUN_00020568(undefined4 param_1,undefined4 param_2)

{
  FUN_000204cc();
  coproc_moveto_Invalidate_Entire_Instruction(0);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_000205b8 */

undefined4 FUN_000205b8(void)

{
  return 0x3000000;
}



/* Function: FUN_000251f0 */

void FUN_000251f0(void)

{
  bool bVar1;
  undefined4 local_c;
  
  local_c = *DAT_00026020;
  do {
    bVar1 = local_c != *DAT_00026020;
    local_c = *DAT_00026020;
  } while (bVar1);
  return;
}



/* Function: FUN_00025220 */

void FUN_00025220(uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar5 = 0;
  if ((param_1 & 0xffffff00) != 0) {
    return;
  }
  func_0x00054128(DAT_00026024,0x200);
  puVar2 = DAT_00026024;
  param_1 = param_1 >> 4;
  do {
    iVar3 = DAT_00026028;
    uVar4 = uVar5 & 3;
    if (uVar4 == 0) {
      iVar6 = 0xd;
    }
    else if (uVar4 == 1) {
      iVar6 = 0x11;
    }
    else if (uVar4 == 2) {
      iVar6 = 0x13;
    }
    else if (uVar4 == 3) {
      iVar6 = 0x17;
    }
    for (uVar4 = 0; uVar4 <= iVar6 - 1U; uVar4 = uVar4 + 1) {
      if ((*(uint *)(iVar3 + uVar5 * 4) & 1 << (uVar4 & 0xff)) != 0) {
        puVar2[uVar5] = puVar2[uVar5] | 1 << ((iVar6 - uVar4) - 1 & 0xff);
      }
    }
    if (param_1 != 0) {
      uVar4 = param_1;
      if (iVar6 - 1U < param_1) {
        uVar4 = param_1 - iVar6;
      }
      uVar1 = (1 << iVar6) + -1 >> (uVar4 & 0xff);
      puVar2[uVar5] =
           (uVar1 & puVar2[uVar5]) << (uVar4 & 0xff) |
           (puVar2[uVar5] & ~uVar1) >> (iVar6 - uVar4 & 0xff);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x40);
  puVar2[0x40] = *puVar2;
  puVar2[0x41] = puVar2[1];
  puVar2[0x42] = puVar2[2];
  puVar2[0x43] = puVar2[3];
  return;
}



/* Function: FUN_00025364 */

void FUN_00025364(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  iVar2 = DAT_00026038;
  iVar1 = DAT_00026034;
  uVar3 = 0;
  do {
    uVar4 = uVar3 & 3;
    if (uVar4 == 0) {
      param_3 = 0xd;
    }
    else if (uVar4 == 1) {
      param_3 = 0x11;
    }
    else if (uVar4 == 2) {
      param_3 = 0x13;
    }
    else if (uVar4 == 3) {
      param_3 = 0x17;
    }
    if (uVar3 < 0x40) {
      uVar6 = *(uint *)(iVar1 + uVar3 * 4);
      uVar5 = 0;
      uVar4 = 0;
      *(uint *)(iVar2 + uVar3 * 4) = uVar6;
      do {
        if ((uVar6 & 1 << (0x1f - uVar4 & 0xff)) != 0) {
          uVar5 = uVar5 | 1 << (uVar4 - (0x20 - param_3) & 0xff);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x20);
      *(uint *)(iVar1 + uVar3 * 4) = uVar5;
    }
    else {
      uVar4 = *(uint *)(iVar1 + uVar3 * 4 + -0x100);
      uVar5 = 1 << (param_3 - 1U & 0xff);
      bVar7 = (uVar4 & uVar5) != 0;
      if (bVar7) {
        uVar4 = uVar4 & ~uVar5;
      }
      uVar4 = uVar4 << 1;
      if (bVar7) {
        uVar4 = uVar4 | 1;
      }
      *(uint *)(iVar1 + uVar3 * 4) = uVar4;
      uVar4 = *(uint *)(iVar2 + uVar3 * 4 + -0x100);
      *(uint *)(iVar2 + uVar3 * 4) = uVar4 >> 1 | (uVar4 & 1) << (param_3 - 1U & 0xff);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x400);
  return;
}



/* Function: FUN_00025434 */

void FUN_00025434(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = DAT_00026030;
  *(undefined4 *)(DAT_00026030 + 0xb0) = 0x100d;
  uVar3 = DAT_0002603c;
  *(uint *)(iVar2 + 0xb4) = DAT_0002603c;
  uVar4 = DAT_00026040;
  *(undefined4 *)(iVar2 + 0xb8) = DAT_00026040;
  uVar1 = uVar3 >> 0xc | uVar3 << 0x14;
  *(uint *)(iVar2 + 0xbc) = uVar1;
  *(undefined4 *)(iVar2 + 0x60) = 0x100d;
  *(uint *)(iVar2 + 100) = uVar3;
  *(undefined4 *)(iVar2 + 0x68) = uVar4;
  *(uint *)(iVar2 + 0x6c) = uVar1;
  *(undefined4 *)(iVar2 + 0x218) = 0;
  *(undefined4 *)(iVar2 + 0x21c) = param_1;
  *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 2;
  return;
}



/* Function: FUN_00025594 */

void FUN_00025594(void)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_00026050 + 4) == 0) {
    if (*(int *)(DAT_00026054 + 0x60) == 8) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
    *(undefined4 *)(DAT_00026050 + 4) = uVar1;
    return;
  }
  return;
}



/* Function: FUN_00025664 */

undefined4 FUN_00025664(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x100;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if (uVar1 != 0) {
    *(uint *)(DAT_00026030 + 0x10) = uVar1 | *(uint *)(DAT_00026030 + 0x10);
  }
  return 0;
}



/* Function: FUN_000256a8 */

undefined4 FUN_000256a8(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *extraout_r12;
  undefined4 *puVar5;
  
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = FUN_000251f0();
  puVar5 = DAT_00026030;
  do {
    if (((param_1 & ~uVar3) == 0) ||
       (iVar2 = FUN_000251f0(), puVar5 = extraout_r12, 4999 < (uint)(iVar2 - iVar1)))
    goto LAB_000256f8;
    if ((extraout_r12[4] & 0x1000000) != 0) {
      uVar3 = 1;
    }
  } while ((extraout_r12[4] & 0x8000000) == 0);
  uVar3 = uVar3 | 8;
LAB_000256f8:
  if ((uVar3 & 8) == 0) {
    if ((param_1 & ~uVar3) != 0) {
      *puVar5 = 2;
      FUN_00025664(0x6f);
      uVar4 = 1;
    }
  }
  else {
    *puVar5 = 2;
    FUN_00025664(0x6f);
    uVar4 = 5;
  }
  FUN_00025664(0x6f);
  return uVar4;
}



/* Function: FUN_00025740 */

void FUN_00025740(uint param_1)

{
  int iVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  
  puVar3 = DAT_00026050;
  uVar2 = *DAT_00026050;
  iVar1 = (uint)(uVar2 >> 1) * 4;
  uVar4 = *(uint *)(iVar1 + 0x21a00220);
  if ((uVar2 & 1) == 0) {
    param_1 = param_1 | uVar4 & 0xffff0000;
  }
  else {
    param_1 = uVar4 & 0xffff | param_1 << 0x10;
  }
  *(uint *)(iVar1 + 0x21a00220) = param_1;
  *puVar3 = uVar2 + 1;
  return;
}



/* Function: FUN_00025794 */

undefined4 FUN_00025794(short *param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 extraout_r12;
  
  uVar6 = 0;
  iVar3 = FUN_00028418();
  if ((iVar3 == 0) && (*param_1 != 0)) {
    FUN_00025594();
    puVar2 = DAT_00026050;
    puVar1 = DAT_00026030;
    uVar7 = 0;
    if (*(int *)(DAT_00026050 + 2) == 1) {
      uVar4 = (uint)*(byte *)((int)param_1 + 0x15);
      if (uVar4 != 0) {
        uVar6 = uVar4 << 9;
        DAT_00026030[100] = uVar4 << 0x1e | DAT_00026030[100];
      }
      puVar1[5] = DAT_00026060;
      puVar1[6] = DAT_00026064;
      puVar1[0xd] = 0x81000000;
      puVar1[0xe] = DAT_00026068;
      puVar1[0x2c] = 0x1004;
      puVar1[0x2d] = 0x1004;
      puVar1[0x2e] = 0x4013;
      puVar1[0x2f] = DAT_0002606c;
      puVar1[0x37] = 6;
      puVar1[0x38] = 0x100;
      puVar1[0x39] = 0x100;
      puVar1[0x3a] = 0xbf;
      puVar1[0x3b] = 0xc80;
      puVar1[0x60] = 0x680;
      puVar1[0x62] = 3;
      puVar1[0x4b] = 0x548a;
      uVar5 = DAT_00026070;
      uVar6 = uVar6 | 2;
      puVar1[1] = uVar6;
      puVar1[2] = 0x3000;
      puVar1[0x3b] = uVar5;
      puVar1[0x3e] = puVar1[0x3e] | 2;
      *puVar2 = 0;
      FUN_00025740(0xff);
      FUN_00025740(0xe000);
      FUN_00025740(0xf);
      FUN_00025740(0xc0);
      FUN_00025740(0x1000);
      FUN_00025740(0xe001);
      FUN_00025740(0xf000);
      uVar7 = extraout_r12;
    }
    uVar5 = DAT_00026074;
    if (*(int *)(puVar2 + 2) == 2) {
      if (*(byte *)((int)param_1 + 0x15) != 0) {
        uVar6 = uVar6 | (uint)*(byte *)((int)param_1 + 0x15) << 9;
      }
      puVar1[1] = uVar6 | 2;
      puVar1[5] = uVar5;
      puVar1[6] = puVar1[6] | 0x1f;
      puVar1[0x3e] = puVar1[0x3e] | 2;
      *puVar2 = uVar7;
      FUN_00025740(&DAT_0000ffcd);
      FUN_00025740(0xb0);
      FUN_00025740(0xff);
    }
    FUN_00025664(0x6f);
    *puVar1 = 1;
    uVar5 = FUN_000256a8();
    return uVar5;
  }
  return 4;
}



/* Function: FUN_00025950 */

undefined4 FUN_00025950(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_r3;
  
  FUN_00025594();
  iVar1 = DAT_00026054;
  if (*(int *)(DAT_00026050 + 4) == 2) {
    uVar3 = 8;
  }
  else {
    if (*(int *)(DAT_00026050 + 4) != 1) goto LAB_00025990;
    uVar3 = 3;
  }
  *(undefined4 *)(DAT_00026054 + 0x60) = uVar3;
  *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
LAB_00025990:
  puVar2 = DAT_0002605c;
  *DAT_0002605c = *DAT_0002605c | 0x200;
  puVar2[1] = puVar2[1] | 0x80;
  uVar4 = 0;
  do {
    uVar4 = uVar4 + 1;
  } while (uVar4 < 1000);
  puVar2[1] = puVar2[1] & 0xffffff7f;
  FUN_00025794(extraout_r3);
  return 0;
}



/* Function: FUN_000259d8 */

void FUN_000259d8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}



/* Function: FUN_00025a38 */

undefined4 FUN_00025a38(short *param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  FUN_00025594();
  puVar2 = DAT_00026050;
  puVar1 = DAT_00026030;
  if (*(int *)(DAT_00026050 + 2) == 2) {
    iVar3 = FUN_00028418(param_1);
    if (iVar3 != 0) {
      return 4;
    }
    if (*param_1 == 0) {
      return 4;
    }
    puVar1[1] = 0x8002;
    puVar1[2] = (*(byte *)(param_1 + 1) & 7) << 0xc;
    *puVar2 = 0;
    FUN_00025740(0x70cd);
    FUN_00025740(0xdd);
    FUN_00025740(0xff);
    FUN_00025664(0x6f);
    *puVar1 = 1;
    FUN_000256a8(1);
    uVar4 = puVar1[0x10];
    if ((uVar4 & 1) == 0) {
      if ((uVar4 & 0x40) == 0) {
        return 6;
      }
      if ((uVar4 & 0x80) == 0) {
        uVar5 = 7;
      }
      else {
        uVar5 = 0;
      }
      return uVar5;
    }
  }
  else {
    if (*(int *)(DAT_00026050 + 2) != 1) {
      return 9;
    }
    iVar3 = FUN_00028418(param_1);
    if ((iVar3 != 0) || (*param_1 == 0)) {
      return 4;
    }
    puVar1[1] = 0x8002;
    puVar1[2] = 0x3000;
    *puVar2 = 0;
    FUN_00025740(0xf);
    FUN_00025740(0xc0);
    FUN_00025740(0x1000);
    FUN_00025740(0xe000);
    FUN_00025740(0xf000);
    FUN_00025664(0x6f);
    *puVar1 = 1;
    FUN_000256a8(1);
    if ((puVar1[0x67] & 0xd) == 0) {
      uVar5 = 0;
      if ((puVar1[0x67] & 0x20) != 0) {
        uVar5 = 3;
      }
      return uVar5;
    }
  }
  return 5;
}



/* Function: FUN_00025b98 */

int FUN_00025b98(short *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_r2;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  uVar7 = 0;
  iVar3 = FUN_00028418();
  puVar1 = DAT_00026030;
  if ((iVar3 != 0) || (*param_1 == 0 || param_2 == (undefined1 *)0x0)) {
    return 4;
  }
  uVar4 = (uint)*(byte *)((int)param_1 + 0x15);
  if (uVar4 != 0) {
    uVar8 = uVar4 << 9;
  }
  if (uVar4 != 0) {
    uVar7 = uVar4 << 0x1e;
  }
  DAT_00026030[1] = uVar8 | 2;
  FUN_00025594(uVar8 | 2,uVar4,0x3000);
  puVar2 = DAT_00026050;
  if (*(int *)(DAT_00026050 + 2) == 1) {
    puVar1[2] = extraout_r2;
    puVar1[100] = puVar1[100] | uVar7;
    *puVar2 = 0;
    FUN_00025740(0x9f);
    FUN_00025740(0);
    FUN_00025740(0x1000);
    FUN_00025740(0x1000);
    FUN_00025740(0xe000);
    FUN_00025740(0xf000);
    FUN_00025664(0x6f);
    *puVar1 = 1;
    iVar3 = FUN_000256a8(1);
    iVar5 = puVar1[0x67];
    if (iVar5 != 0) {
      param_2[1] = (char)iVar5;
      *param_2 = (char)((uint)iVar5 >> 8);
      return iVar3;
    }
    *(undefined4 *)(puVar2 + 2) = 2;
    FUN_00025950(param_1);
  }
  if (*(int *)(puVar2 + 2) == 2) {
    *puVar2 = 0;
    FUN_00025740(s_s_spi_irq_ctx_spi_rw_remain_size_000090b8 + 0x15);
    FUN_00025740(0xa0);
    FUN_00025740(0x6dd);
    FUN_00025740(0xff);
    FUN_00025664(0x6f);
    *puVar1 = 1;
    iVar3 = FUN_000256a8(1);
    uVar6 = puVar1[0x10];
    *param_2 = (char)uVar6;
    param_2[1] = (char)((uint)uVar6 >> 8);
    return iVar3;
  }
  return *(int *)(puVar2 + 2);
}



/* Function: FUN_00025ce8 */

int FUN_00025ce8(short *param_1,int param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00025594();
  puVar2 = DAT_00026050;
  puVar1 = DAT_00026030;
  if (*(int *)(DAT_00026050 + 2) == 2) {
    iVar3 = FUN_00028418(param_1);
    if ((iVar3 == 0) && (*param_1 != 0)) {
      puVar1[1] = 2;
      puVar1[2] = (*(byte *)(param_1 + 1) & 7) << 0xc;
      puVar1[0x3e] = 2;
      puVar1[0x97] = param_3;
      *puVar2 = 0;
      FUN_00025740(0xefcd);
      FUN_00025740(param_2 << 8 | 0xa0);
      FUN_00025740(0x7de);
      FUN_00025740(0xb0);
      FUN_00025740(0xff);
      FUN_00025664(0x6f);
      *puVar1 = 1;
      iVar3 = FUN_000256a8(1);
      uVar4 = puVar1[0x10];
      if (iVar3 == 0) {
        if ((*(byte *)(param_1 + 1) & 7) != 0) {
          uVar4 = (uVar4 & 0xff) + ((uVar4 & 0xffffff) >> 0x10) * 0x100;
          *param_3 = uVar4;
          uVar4 = uVar4 + (puVar1[0x11] & 0xff) * 0x10000 + ((uint)puVar1[0x11] >> 0x10) * 0x1000000
          ;
        }
        *param_3 = uVar4;
      }
      return iVar3;
    }
  }
  else {
    if (*(int *)(DAT_00026050 + 2) != 1) {
      return 9;
    }
    iVar3 = FUN_00028418(param_1);
    if ((iVar3 == 0) && (*param_1 != 0)) {
      puVar1[1] = 2;
      puVar1[2] = 0x3000;
      puVar1[0x3e] = 2;
      if (*(char *)((int)param_1 + 0x15) != '\0') {
        puVar1[100] = 0x40000000;
      }
      *puVar2 = 0;
      FUN_00025740(0xf);
      FUN_00025740(param_2);
      FUN_00025740(0x1000);
      FUN_00025740(0xe000);
      FUN_00025740(0xf000);
      FUN_00025664(0x6f);
      *puVar1 = 1;
      iVar3 = FUN_000256a8(1);
      *param_3 = puVar1[0x67] & 0xff;
      return iVar3;
    }
  }
  return 4;
}



/* Function: FUN_00025e90 */

undefined4 FUN_00025e90(short *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  FUN_00025594();
  puVar2 = DAT_00026050;
  puVar1 = DAT_00026030;
  if (*(int *)(DAT_00026050 + 2) == 2) {
    iVar3 = FUN_00028418(param_1);
    if (iVar3 != 0) {
      return 4;
    }
    if (*param_1 == 0) {
      return 4;
    }
    puVar1[1] = 2;
    puVar1[2] = (*(byte *)(param_1 + 1) & 7) << 0xc;
    puVar1[0x3e] = 2;
    if ((*(byte *)(param_1 + 1) & 7) == 0) {
      puVar1[0x97] = param_3;
    }
    else {
      uVar4 = (param_3 & 0xffff) >> 8;
      puVar1[0x97] = uVar4 << 0x18 | uVar4 << 0x10 | param_3 & 0xff | (param_3 & 0xff) << 8;
      uVar4 = (param_3 & 0xffffff) >> 0x10;
      puVar1[0x96] = (param_3 >> 0x18) << 0x18 | (param_3 >> 0x18) << 0x10 | uVar4 | uVar4 << 8;
    }
    *puVar2 = 0;
    FUN_00025740(0xefcd);
    FUN_00025740(param_2 << 8 | 0xa0);
    FUN_00025740(0x7de);
    FUN_00025740(0xb0);
    uVar5 = 0xff;
  }
  else {
    if (*(int *)(DAT_00026050 + 2) != 1) {
      return 9;
    }
    iVar3 = FUN_00028418(param_1);
    if ((iVar3 != 0) || (*param_1 == 0)) {
      return 4;
    }
    puVar1[1] = 2;
    puVar1[2] = 0x3000;
    uVar4 = 0;
    if (*(char *)((int)param_1 + 0x15) != '\0') {
      uVar4 = 0x40000000;
    }
    puVar1[100] = uVar4 | puVar1[100];
    puVar1[0x3e] = 2;
    *puVar2 = 0;
    FUN_00025740(0x1f);
    FUN_00025740(param_2);
    FUN_00025740(param_3 & 0xffff);
    FUN_00025740(0xe000);
    uVar5 = 0xf000;
  }
  FUN_00025740(uVar5);
  FUN_00025664(0x6f);
  *puVar1 = 1;
  uVar5 = FUN_000256a8(1);
  return uVar5;
}



/* Function: FUN_00026078 */

void FUN_00026078(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((param_1 & 1 << (uVar1 & 0xff)) != 0) {
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x20);
  return;
}



/* Function: FUN_000260a0 */

undefined4 FUN_000260a0(short *param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_00028418();
  if ((iVar2 == 0) && (*param_1 != 0)) {
    func_0x00054068(param_1 + 0x1a,param_2,0x24);
    *(undefined1 *)((int)param_1 + 0x15) = param_4;
    FUN_00025594();
    if (*(int *)(DAT_00026050 + 4) == 2) {
      param_1[1] = 0;
    }
    else {
      if (*(int *)(DAT_00026050 + 4) != 1) {
        return 9;
      }
      param_1[1] = 3;
    }
    param_1[7] = *(short *)(param_2 + 10);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0xc);
    *(uint *)(param_1 + 2) = (uint)*(ushort *)(param_2 + 10) * (uint)*(ushort *)(param_2 + 8);
    *(uint *)(param_1 + 4) = (uint)*(ushort *)(param_2 + 8);
    uVar1 = FUN_00026078(*(undefined4 *)(param_1 + 2));
    *(undefined1 *)((int)param_1 + 0x11) = uVar1;
    uVar1 = FUN_00026078(*(undefined4 *)(param_1 + 4));
    *(undefined1 *)(param_1 + 9) = uVar1;
    uVar1 = FUN_00026078(*(undefined2 *)(param_2 + 6));
    *(undefined1 *)((int)param_1 + 0x13) = uVar1;
    param_1[6] = *(short *)(param_2 + 6);
    param_1[0x13] = *(short *)(param_2 + 0x12);
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 4);
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xe);
    *(undefined1 *)((int)param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x14);
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x16);
    param_1[0x12] = *(short *)(param_2 + 0x18);
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x1a);
    *(undefined1 *)((int)param_1 + 0x19) = *(undefined1 *)(param_2 + 0x1c);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0x20);
    *(undefined1 *)((int)param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x22);
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined1 *)((int)param_1 + 0x31) = 1;
    *(undefined1 *)((int)param_1 + 0x17) = 1;
    *(undefined1 *)((int)param_1 + 0x1f) = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    return 0;
  }
  return 4;
}



/* Function: FUN_000261dc */

int FUN_000261dc(short *param_1,int param_2)

{
  sbyte sVar1;
  byte bVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  uint extraout_r12;
  uint extraout_r12_00;
  undefined4 local_28;
  
  local_28 = 0xffffffff;
  iVar6 = FUN_00028418(param_1);
  if ((iVar6 != 0) || (*param_1 == 0)) {
    return 4;
  }
  FUN_00025594();
  puVar5 = DAT_00026050;
  puVar4 = DAT_00026030;
  if (*(int *)(DAT_00026050 + 2) != 2) {
    if (*(int *)(DAT_00026050 + 2) == 1) {
      iVar6 = FUN_00025ce8(param_1,0xa0,&local_28);
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar6 = FUN_00025e90(param_1,0xa0,0);
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar6 = FUN_00025e90(param_1,0xb0,0);
      if (iVar6 != 0) {
        return iVar6;
      }
      sVar1 = *(sbyte *)((int)param_1 + 0x11);
      bVar2 = *(byte *)(param_1 + 9);
      *puVar5 = 0;
      uVar7 = (uint)(param_2 << sVar1) >> (uint)bVar2;
      FUN_00025740(6);
      FUN_00025740(0xe000);
      FUN_00025740(0xd8);
      FUN_00025740((uVar7 & 0xffffff) >> 0x10);
      FUN_00025740((uVar7 & 0xffff) >> 8);
      FUN_00025740(uVar7 & 0xff);
      FUN_00025740(0xe000);
      FUN_00025740(0xf000);
      FUN_00025664(0x6f);
      puVar4[1] = 0x8102;
      puVar4[2] = 0x3000;
      puVar4[0x3e] = 0x3a;
      *puVar4 = 1;
      FUN_000256a8(1);
      *puVar5 = 0;
      FUN_00025740(0xf);
      FUN_00025740(0xc0);
      FUN_00025740(0x1000);
      FUN_00025740(0xe001);
      FUN_00025740(0xf000);
      FUN_00025664(0x6f);
    }
    goto LAB_000263f0;
  }
  uVar7 = 0x8002;
  sVar3 = param_1[9];
  if (*(byte *)((int)param_1 + 0x15) != 0) {
    uVar7 = (uint)*(byte *)((int)param_1 + 0x15) << 9 | 0x8002;
  }
  *DAT_00026050 = 0;
  FUN_00025740(0x60cd,(char)sVar3);
  FUN_00025740((extraout_r12 & 0xff) << 8 | 0xa0);
  FUN_00025740((extraout_r12_00 >> 8 & 0xff) << 8 | 0xa0);
  if (*(int *)(param_1 + 4) == 0x200) {
    if ((char)param_1[10] == '\x04') goto LAB_000262b4;
  }
  else if ((char)param_1[10] == '\x05') {
LAB_000262b4:
    FUN_00025740(extraout_r12_00 >> 8 & 0xff00 | 0xa0);
  }
  FUN_00025740(0xd0cd);
  FUN_00025740(0xb0);
  FUN_00025740(0xff);
  puVar4[1] = uVar7;
  puVar4[2] = (*(byte *)(param_1 + 1) & 7) << 0xc;
LAB_000263f0:
  *puVar4 = 1;
  FUN_000256a8(1);
  iVar6 = FUN_00025a38(param_1);
  return iVar6;
}



/* Function: FUN_00026510 */

undefined4 FUN_00026510(int param_1)

{
  if (param_1 == 0xc) {
    return 0x2000;
  }
  if (param_1 < 0xd) {
    if (param_1 != 1) {
      if (param_1 == 2) {
        return 0x800;
      }
      if (param_1 == 4) {
        return 0x1000;
      }
      if (param_1 == 8) {
        return 0x1800;
      }
    }
  }
  else {
    if (param_1 == 0x10) {
      return 0x2800;
    }
    if (param_1 == 0x18) {
      return 0x3000;
    }
    if (param_1 == 0x20) {
      return 0x3800;
    }
    if (param_1 == 0x28) {
      return 0x4000;
    }
  }
  return 0;
}



/* Function: FUN_00026588 */

int FUN_00026588(int param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,
                uint param_7,int param_8,uint param_9)

{
  char cVar1;
  ushort uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  uint extraout_r12_02;
  uint extraout_r12_03;
  uint extraout_r12_04;
  uint extraout_r12_05;
  uint extraout_r12_06;
  uint extraout_r12_07;
  bool bVar11;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_2c;
  
  FUN_00025594();
  puVar3 = DAT_00026030;
  iVar8 = DAT_00026024 + (param_3 & 0xf) * 0x10;
  uVar9 = param_9 | param_7;
  local_2c = param_3;
  if (*(int *)(DAT_00026050 + 2) != 2) {
    if (*(int *)(DAT_00026050 + 2) != 1) {
      return 9;
    }
    uVar10 = 0;
    local_40 = 0;
    iVar4 = FUN_00025e90(param_1,0xa0,0);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = FUN_00025e90(param_1,0xb0,9);
    if (iVar4 != 0) {
      return iVar4;
    }
    local_4c = 0x3000;
    local_48 = 8;
    if (param_9 != 0) {
      local_48 = 0xc;
    }
    if (*(byte *)(param_1 + 0x1f) != 0) {
      local_48 = local_48 | 0x2000;
    }
    uVar6 = (uint)*(byte *)(param_1 + 0x1f);
    if (param_6 != 0) {
      uVar6 = uVar9;
    }
    if (param_6 == 0 || uVar6 == 0) {
      local_48 = local_48 | 0x10;
      if (param_6 != 0) {
        local_4c = *(ushort *)(param_1 + 0xc) - 1 | 0x3000;
      }
      if (param_7 != 0) {
        local_4c = local_4c | *(ushort *)(param_1 + 0x26) - 1;
      }
    }
    else {
      local_48 = local_48 | 0x30;
      local_4c = DAT_00027620 + (uint)*(ushort *)(param_1 + 0x26) * 0x10000 |
                 *(ushort *)(param_1 + 0xc) - 1 | 0x3000;
    }
    if (*DAT_0002602c != '\0') {
      FUN_00025220(param_3);
      func_0x00035324(DAT_00026024,0x80,1);
      FUN_00025434(iVar8);
    }
    if (*(byte *)(param_1 + 0x15) != 0) {
      local_48 = local_48 | (uint)*(byte *)(param_1 + 0x15) << 9;
    }
    if (*(char *)(param_1 + 0x17) != '\0') {
      local_48 = local_48 | 0x40;
    }
    do {
      local_58 = 1;
      local_44 = (uint)*(byte *)(param_1 + 0x19) | (uint)*(byte *)(param_1 + 0x1a) << 0x10;
      uVar6 = FUN_00026510(*(undefined1 *)(param_1 + 0x18));
      local_40 = uVar6 | local_40;
      local_4c = local_4c | (uint)*(byte *)(param_1 + 0x1b) << 0x18;
      if (param_4 == 0) {
        uVar7 = (uint)*(byte *)(param_1 + 0x10);
        uVar6 = param_5 - uVar10;
        if (uVar7 < uVar6) {
          local_58 = uVar6 / uVar7;
          uVar6 = uVar7 * local_58;
        }
LAB_00026de0:
        local_50 = uVar6;
      }
      else {
        if (*(byte *)(param_1 + 0x10) < param_4) {
          return 4;
        }
        local_50 = *(byte *)(param_1 + 0x10) - param_4;
        uVar6 = param_5 - uVar10;
        if (uVar6 < local_50) goto LAB_00026de0;
      }
      *DAT_00026050 = 0;
      FUN_00025740(0x13);
      FUN_00025740((extraout_r12_03 & 0xffffff) >> 0x10);
      FUN_00025740((extraout_r12_04 & 0xffff) >> 8);
      FUN_00025740(extraout_r12_05 & 0xff);
      FUN_00025740(0xe000);
      FUN_00025740(0xf);
      FUN_00025740(0xc0);
      FUN_00025740(0x1000);
      FUN_00025740(0xe001);
      if (param_6 == 0) {
        if (param_7 != 0) {
          uVar6 = (uint)*(ushort *)(param_1 + 0x26);
          if (*(char *)(param_1 + 0x17) == '\0') {
            uVar7 = (uint)*(ushort *)(param_1 + 0xc);
            uVar6 = uVar6 + uVar7;
          }
          else {
            uVar7 = *(uint *)(param_1 + 8);
          }
          param_4 = param_4 * uVar6 + uVar7;
          cVar1 = *(char *)(param_1 + 0x1f);
          puVar3[0x80] = 0;
          if (cVar1 == '\0') {
            uVar6 = (uint)*(ushort *)(param_1 + 0x26);
          }
          else {
            uVar6 = (uint)*(byte *)(param_1 + 0x1b);
          }
          uVar6 = uVar10 * uVar6 + param_7;
          goto LAB_00026f74;
        }
      }
      else {
        if (param_7 == 0) {
          if (*(char *)(param_1 + 0x17) == '\0') {
            param_4 = ((uint)*(ushort *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x26)) *
                      param_4;
          }
          else {
            param_4 = param_4 << (uint)*(byte *)(param_1 + 0x13);
          }
          puVar3[0x80] = 0;
          uVar6 = param_6 + (uVar10 << *(sbyte *)(param_1 + 0x13));
LAB_00026f74:
          puVar3[0x81] = uVar6;
          puVar3[0x82] = 0xffffffff;
          puVar3[0x83] = 0xffffffff;
        }
        else {
          if (*(char *)(param_1 + 0x17) == '\0') {
            param_4 = ((uint)*(ushort *)(param_1 + 0x26) + (uint)*(ushort *)(param_1 + 0xc)) *
                      param_4;
          }
          else {
            param_4 = param_4 << *(sbyte *)(param_1 + 0x13);
          }
          param_4 = param_4 | 0x4000;
          if (*(char *)(param_1 + 0x31) == '\0') {
            puVar3[0x82] = 0xffffffff;
            puVar3[0x83] = 0xffffffff;
          }
          else {
            cVar1 = *(char *)(param_1 + 0x1f);
            puVar3[0x82] = 0;
            if (cVar1 == '\0') {
              uVar6 = (uint)*(ushort *)(param_1 + 0x26);
            }
            else {
              uVar6 = (uint)*(byte *)(param_1 + 0x1b);
            }
            puVar3[0x83] = uVar10 * uVar6 + param_7;
            FUN_00025740(0x6b);
            FUN_00025740((extraout_r12_06 & 0xffff) >> 8);
            FUN_00025740(extraout_r12_07 & 0xff);
            FUN_00025740(0x6000);
            FUN_00025740(0x5200);
            FUN_00025740(0xe000);
          }
          uVar6 = local_50;
          if (1 < local_58) {
            uVar6 = (uint)*(byte *)(param_1 + 0x10);
          }
          local_44 = local_44 | uVar6 * 0x1000000 - 0x1000000;
          puVar3[0x80] = 0;
          puVar3[0x81] = param_6 + (uVar10 << *(sbyte *)(param_1 + 0x13));
        }
        FUN_00025740(0x6b);
        FUN_00025740((param_4 & 0xffff) >> 8);
        FUN_00025740(param_4 & 0xff);
        FUN_00025740(0x6000);
        FUN_00025740(s___CLR_WDG_INT_Timeout__000031fe + 2);
        FUN_00025740(0xe000);
        FUN_00025740(0xf000);
      }
      if (local_58 < 2) {
        uVar6 = local_48 | local_50 * 0x1000000 - 0x1000000;
      }
      else {
        uVar6 = DAT_00027620 + local_58 * 0x10000 |
                (uint)*(byte *)(param_1 + 0x10) * 0x1000000 - 0x1000000 | local_48;
      }
      puVar3[1] = uVar6;
      if (param_6 != 0) {
        uVar6 = uVar9;
      }
      if (param_6 == 0 || uVar6 == 0) {
        local_44 = 0;
      }
      puVar3[3] = local_44;
      if (*DAT_00027628 != '\0') {
        FUN_00025220(local_2c);
        func_0x00035324(DAT_0002762c,0x80,1);
        FUN_00025434(DAT_0002762c + (local_2c & 0xf) * 0x10);
      }
      if (param_8 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = 0;
      }
      puVar3[0x84] = uVar6;
      if (param_8 != 0) {
        uVar6 = DAT_00027624;
      }
      puVar3[0x85] = uVar6;
      FUN_00025664(0x6f);
      puVar3[2] = local_4c;
      puVar3[0x3e] = 0x3a;
      *puVar3 = local_40;
      func_0x00035324(param_6,*(ushort *)(param_1 + 0xc) * param_5,1);
      func_0x00035324(param_7,*(ushort *)(param_1 + 0x26) * param_5,1);
      func_0x00035324(DAT_00027624,0x10,1);
      func_0x00035324(param_6,*(ushort *)(param_1 + 0xc) * param_5,2);
      func_0x00035324(param_7,*(ushort *)(param_1 + 0x26) * param_5,2);
      func_0x00035324(DAT_00027624,0x10,2);
      *puVar3 = *puVar3 | 1;
      FUN_000256a8(1);
      uVar6 = DAT_00027624;
      param_4 = 0;
      local_2c = local_2c + local_58;
      uVar10 = uVar10 + local_50;
      if (param_5 <= uVar10) {
        if (param_8 != 0) {
          local_50 = param_9;
        }
        if (param_8 == 0 || local_50 == 0) {
          return 0;
        }
        for (uVar9 = 0; uVar9 < uVar10; uVar9 = uVar9 + 1) {
          uVar2 = *(ushort *)(uVar6 + uVar9 * 2);
          if ((~uVar2 & 0x3f) == 0) {
            *(undefined1 *)(param_8 + uVar9) = 3;
          }
          else if ((~uVar2 & 0x3e) == 0) {
            *(undefined1 *)(param_8 + uVar9) = 8;
          }
          else if ((uVar2 & 0x3f) < *(ushort *)(param_1 + 0x52)) {
            *(undefined1 *)(param_8 + uVar9) = 0;
          }
          else {
            *(undefined1 *)(param_8 + uVar9) = 2;
          }
        }
        return 0;
      }
    } while( true );
  }
  local_40 = 0;
  local_4c = 8;
  uVar10 = 0;
  local_58 = (*(byte *)(param_1 + 2) & 7) << 0xc;
  if (param_9 != 0) {
    local_4c = 0xc;
  }
  if (*(byte *)(param_1 + 0x1f) != 0) {
    local_4c = local_4c | 0x2000;
  }
  uVar6 = (uint)*(byte *)(param_1 + 0x1f);
  if (param_6 != 0) {
    uVar6 = uVar9;
  }
  if (param_6 == 0 || uVar6 == 0) {
    if (param_7 != 0) {
      uVar6 = param_9;
    }
    if (param_7 != 0 && uVar6 != 0) goto LAB_000266e0;
    local_4c = local_4c | 0x10;
    if (param_6 != 0) {
      local_58 = local_58 | *(ushort *)(param_1 + 0xc) - 1;
    }
    if (param_7 == 0) goto LAB_0002670c;
    uVar6 = *(ushort *)(param_1 + 0x26) - 1;
  }
  else {
LAB_000266e0:
    local_4c = local_4c | 0x30;
    uVar6 = *(ushort *)(param_1 + 0xc) - 1 |
            DAT_00027620 + (uint)*(ushort *)(param_1 + 0x26) * 0x10000;
  }
  local_58 = local_58 | uVar6;
LAB_0002670c:
  if (*(byte *)(param_1 + 0x15) != 0) {
    local_4c = local_4c | (uint)*(byte *)(param_1 + 0x15) << 9;
  }
  if (*(char *)(param_1 + 0x17) != '\0') {
    local_4c = local_4c | 0x40;
  }
  if (*DAT_0002602c != '\0') {
    FUN_00025220(param_3);
    func_0x00035324(DAT_00026024,0x80,1);
    FUN_00025434(iVar8);
  }
  do {
    local_50 = 1;
    local_44 = (uint)*(byte *)(param_1 + 0x19) | (uint)*(byte *)(param_1 + 0x1a) << 0x10;
    uVar6 = FUN_00026510(*(undefined1 *)(param_1 + 0x18));
    local_40 = uVar6 | local_40;
    local_58 = local_58 | (uint)*(byte *)(param_1 + 0x1b) << 0x18;
    if (param_4 == 0) {
      uVar7 = (uint)*(byte *)(param_1 + 0x10);
      uVar6 = param_5 - uVar10;
      if (uVar7 < uVar6) {
        local_50 = uVar6 / uVar7;
        uVar6 = uVar7 * local_50;
      }
LAB_0002682c:
      local_48 = uVar6;
    }
    else {
      if (*(byte *)(param_1 + 0x10) < param_4) {
        return 4;
      }
      local_48 = *(byte *)(param_1 + 0x10) - param_4;
      uVar6 = param_5 - uVar10;
      if (uVar6 < local_48) goto LAB_0002682c;
    }
    uVar6 = local_2c +
            (param_2 << ((uint)*(byte *)(param_1 + 0x11) - (uint)*(byte *)(param_1 + 0x12) & 0xff));
    *DAT_00026050 = 0;
    FUN_00025740(0xcd);
    FUN_00025740((extraout_r12 & 0xff) << 8 | 0xa0);
    FUN_00025740(extraout_r12_00 & 0xff00 | 0xa0);
    if (local_50 < 2) {
      uVar7 = (uVar6 & 0xff) << 8 | 0xa0;
    }
    else {
      uVar7 = (uVar6 & 0xff) << 8 | 0xa1;
    }
    FUN_00025740(uVar7);
    FUN_00025740((uVar6 >> 8 & 0xff) << 8 | 0xa0);
    if (*(char *)(param_1 + 0x14) == '\x05') {
      FUN_00025740(extraout_r12_01 & 0xff00 | 0xa0);
    }
    FUN_00025740(&DAT_000030cd);
    FUN_00025740(0xb0);
    if (uVar9 == 0) {
      FUN_00025740(0xd0);
      bVar11 = *(char *)(param_1 + 0x30) != '\0';
      if (bVar11) {
        uVar6 = (uVar10 << (uint)*(byte *)(param_1 + 0x13)) + param_6;
      }
      else {
        uVar6 = 0xffffffff;
      }
      puVar3[0x81] = uVar6;
      if (bVar11) {
        uVar6 = 0;
      }
      puVar3[0x80] = uVar6;
    }
    else if (param_6 == 0) {
      FUN_00025740(0xd0);
      if (*(char *)(param_1 + 0x31) == '\0') {
        uVar6 = 0xffffffff;
        puVar3[0x80] = 0xffffffff;
      }
      else {
        cVar1 = *(char *)(param_1 + 0x1f);
        puVar3[0x80] = 0;
        if (cVar1 == '\0') {
          uVar6 = (uint)*(ushort *)(param_1 + 0x26);
        }
        else {
          uVar6 = (uint)*(byte *)(param_1 + 0x1b);
        }
        uVar6 = uVar10 * uVar6 + param_7;
      }
      puVar3[0x81] = uVar6;
    }
    else {
      uVar6 = uVar9;
      if (param_7 != 0) {
        uVar6 = (uint)*(byte *)(param_1 + 0x31);
      }
      if (param_7 != 0 && uVar6 != 0) {
        cVar1 = *(char *)(param_1 + 0x1f);
        puVar3[0x82] = 0;
        if (cVar1 == '\0') {
          uVar6 = (uint)*(ushort *)(param_1 + 0x26);
        }
        else {
          uVar6 = (uint)*(byte *)(param_1 + 0x1b);
        }
        uVar6 = uVar10 * uVar6 + param_7;
      }
      else {
        uVar6 = 0xffffffff;
        puVar3[0x82] = 0xffffffff;
      }
      puVar3[0x83] = uVar6;
      uVar6 = local_48;
      if (1 < local_50) {
        uVar6 = (uint)*(byte *)(param_1 + 0x10);
      }
      local_44 = local_44 | uVar6 * 0x1000000 - 0x1000000;
      if (*(char *)(param_1 + 0x17) == '\0') {
        uVar5 = 0xd0;
      }
      else {
        uVar5 = 0xd2;
      }
      FUN_00025740(uVar5);
    }
    if (*(byte *)(param_1 + 0x17) == 0) {
      uVar6 = 0;
      if (param_6 != 0) {
        uVar6 = uVar9;
      }
      if (param_6 != 0 && uVar6 != 0) goto LAB_00026a40;
    }
    else {
      uVar6 = (uint)*(byte *)(param_1 + 0x17);
      if (param_6 != 0) {
        uVar6 = uVar9;
      }
      if (param_6 != 0 && uVar6 != 0) {
        FUN_00025740(0x5cd);
        param_4 = param_4 << *(sbyte *)(param_1 + 0x13);
        FUN_00025740((param_4 & 0xff) << 8 | 0xa0);
        FUN_00025740(extraout_r12_02 | param_4 & 0xff00);
        FUN_00025740(0xe0cd);
        FUN_00025740(0xd0);
LAB_00026a40:
        bVar11 = *(char *)(param_1 + 0x30) == '\0';
        if (bVar11) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = 0;
        }
        puVar3[0x80] = uVar6;
        if (!bVar11) {
          uVar6 = (uVar10 << *(sbyte *)(param_1 + 0x13)) + param_6;
        }
        puVar3[0x81] = uVar6;
      }
    }
    FUN_00025740(0xff);
    FUN_00025664(0x6f);
    if (local_50 < 2) {
      uVar6 = local_4c | local_48 * 0x1000000 - 0x1000000;
    }
    else {
      uVar6 = DAT_00027620 + local_50 * 0x10000 |
              (uint)*(byte *)(param_1 + 0x10) * 0x1000000 - 0x1000000 | local_4c;
    }
    puVar3[1] = uVar6;
    if (uVar9 == 0 || param_6 == 0) {
      local_44 = 0;
    }
    puVar3[3] = local_44;
    puVar3[2] = local_58;
    puVar3[0x3e] = 0x3a;
    if (param_9 != 0 && param_8 != 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0xffffffff;
    }
    puVar3[0x84] = uVar6;
    if (param_9 != 0 && param_8 != 0) {
      uVar6 = DAT_00027624 + uVar10;
    }
    puVar3[0x85] = uVar6;
    *puVar3 = local_40;
    func_0x00035324(param_6,*(ushort *)(param_1 + 0xc) * param_5,1);
    func_0x00035324(param_7,*(ushort *)(param_1 + 0x26) * param_5,1);
    func_0x00035324(DAT_00027624,0x10,1);
    func_0x00035324(param_6,*(ushort *)(param_1 + 0xc) * param_5,2);
    func_0x00035324(param_7,*(ushort *)(param_1 + 0x26) * param_5,2);
    func_0x00035324(DAT_00027624,0x10,2);
    *puVar3 = *puVar3 | 1;
    FUN_000256a8(1);
    uVar6 = DAT_00027624;
    param_4 = 0;
    local_2c = local_2c + local_50;
    uVar10 = uVar10 + local_48;
    if (param_5 <= uVar10) {
      if (param_8 != 0) {
        local_48 = param_9;
      }
      if (param_8 != 0 && local_48 != 0) {
        for (uVar9 = 0; uVar9 < uVar10; uVar9 = uVar9 + 1) {
          uVar2 = *(ushort *)(uVar6 + uVar9 * 2);
          if ((~uVar2 & 0x3f) == 0) {
            *(undefined1 *)(param_8 + uVar9) = 3;
          }
          else if ((~uVar2 & 0x3e) == 0) {
            *(undefined1 *)(param_8 + uVar9) = 8;
          }
          else if ((uVar2 & 0x3f) < *(ushort *)(param_1 + 0x52)) {
            *(undefined1 *)(param_8 + uVar9) = 0;
          }
          else {
            *(undefined1 *)(param_8 + uVar9) = 2;
          }
        }
      }
      return 0;
    }
  } while( true );
}



/* Function: FUN_00027200 */

undefined4
FUN_00027200(short *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  uint uVar4;
  
  uVar2 = 0;
  psVar3 = param_1;
  uVar4 = param_3;
  iVar1 = FUN_00028418();
  if (((iVar1 == 0) && (param_3 < (ushort)param_1[7])) && (*param_1 != 0)) {
    if (param_6 == 0) {
      param_6 = DAT_00027630;
    }
    if (param_7 == 0) {
      param_7 = DAT_00027634;
    }
    if (*(int *)(param_1 + 4) != 0x200) {
      uVar2 = FUN_00026588(param_1,param_2,param_3,param_4,param_5,param_6,param_7,DAT_00027638,
                           param_9,psVar3,param_2,uVar4);
    }
    if (param_8 != 0) {
      FUN_000259d8(param_8,DAT_00027638,param_5);
    }
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



/* Function: FUN_000272c8 */

int FUN_000272c8(int param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,
                int param_7,uint param_8,int param_9)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  uint extraout_r12_02;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_2c;
  
  uVar11 = 0;
  uVar10 = 0;
  uVar12 = 0;
  local_44 = 0;
  local_50 = 0;
  FUN_00025594();
  if (*(int *)(DAT_0002763c + 2) == 1) {
    iVar6 = FUN_00025e90(param_1,0xa0,0);
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = FUN_00025e90(param_1,0xb0,9);
    if (iVar6 != 0) {
      return iVar6;
    }
    local_50 = 0x3000;
  }
  else if (*(int *)(DAT_0002763c + 2) == 2) {
    local_50 = (*(byte *)(param_1 + 2) & 7) << 0xc;
  }
  local_48 = 0x8108;
  if (param_9 != 0) {
    local_48 = 0x810c;
  }
  if (*(char *)(param_1 + 0x1f) != '\0') {
    local_48 = local_48 | 0x2000;
  }
  if (param_6 == 0 || param_7 == 0) {
    local_48 = local_48 | 0x10;
    if (param_6 != 0) {
      local_50 = local_50 | *(ushort *)(param_1 + 0xc) - 1;
    }
    if (param_7 == 0) goto LAB_000273c0;
    uVar7 = *(ushort *)(param_1 + 0x26) - 1;
  }
  else {
    local_48 = local_48 | 0x30;
    uVar7 = *(ushort *)(param_1 + 0xc) - 1 |
            DAT_00027620 + (uint)*(ushort *)(param_1 + 0x26) * 0x10000;
  }
  local_50 = local_50 | uVar7;
LAB_000273c0:
  if (*(byte *)(param_1 + 0x15) != 0) {
    local_48 = local_48 | (uint)*(byte *)(param_1 + 0x15) << 9;
  }
  if (*(char *)(param_1 + 0x17) != '\0') {
    local_48 = local_48 | 0x40;
  }
  bVar1 = *(byte *)(param_1 + 0x21);
  if (*(char *)(param_1 + 0x22) != '\0') {
    uVar12 = 0x20000;
  }
  bVar2 = *(byte *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x23) != '\0') {
    uVar12 = uVar12 | 0x10000;
  }
  local_2c = param_3;
  do {
    local_4c = 1;
    uVar13 = (uint)*(byte *)(param_1 + 0x19) | (uint)*(byte *)(param_1 + 0x1a) << 0x10;
    uVar7 = FUN_00026510(*(undefined1 *)(param_1 + 0x18));
    local_44 = uVar7 | local_44;
    local_50 = local_50 | (uint)*(byte *)(param_1 + 0x1b) << 0x18;
    if (param_4 == 0) {
      uVar7 = param_5 - uVar10;
      uVar8 = (uint)*(byte *)(param_1 + 0x10);
      if (uVar8 < uVar7) {
        local_4c = uVar7 / uVar8;
        uVar7 = uVar8 * local_4c;
      }
    }
    else {
      if (*(byte *)(param_1 + 0x10) < param_4) {
        return 4;
      }
      uVar7 = *(byte *)(param_1 + 0x10) - param_4;
      if (param_5 - uVar10 < uVar7) {
        uVar7 = param_5 - uVar10;
      }
    }
    if (*(int *)(DAT_0002763c + 2) == 1) {
      uVar11 = (param_2 <<
               ((uint)*(byte *)(param_1 + 0x11) - (uint)*(byte *)(param_1 + 0x12) & 0xff)) +
               local_2c;
      *DAT_0002763c = 0;
      FUN_00025740(0x13);
      FUN_00025740((uVar11 & 0xffffff) >> 0x10);
      FUN_00025740((uVar11 & 0xffff) >> 8);
      FUN_00025740(uVar11 & 0xff);
      FUN_00025740(0xe000);
      FUN_00025740(0xf);
      FUN_00025740(0xc0);
      FUN_00025740(0x1000);
      FUN_00025740(0xe001);
      FUN_00025740(6);
      FUN_00025740(0xe000);
      puVar5 = DAT_00027640;
      if (param_6 == 0) {
        if (param_7 == 0) goto LAB_000279b0;
        uVar8 = (uint)*(ushort *)(param_1 + 0x26);
        if (*(char *)(param_1 + 0x17) == '\0') {
          uVar4 = (uint)*(ushort *)(param_1 + 0xc);
          uVar8 = uVar8 + uVar4;
        }
        else {
          uVar4 = *(uint *)(param_1 + 8);
        }
        param_4 = param_4 * uVar8 + uVar4;
        cVar3 = *(char *)(param_1 + 0x1f);
        DAT_00027640[0x80] = 0;
        if (cVar3 == '\0') {
          uVar8 = (uint)*(ushort *)(param_1 + 0x26);
        }
        else {
          uVar8 = (uint)*(byte *)(param_1 + 0x1b);
        }
        puVar5[0x81] = uVar10 * uVar8 + param_7;
        puVar5 = DAT_00027640;
        DAT_00027640[0x82] = 0xffffffff;
        puVar5[0x83] = 0xffffffff;
LAB_00027738:
        FUN_00025740(0x32);
        FUN_00025740((param_4 & 0xffff) >> 8);
        FUN_00025740(param_4 & 0xff);
        FUN_00025740(0x2200);
      }
      else {
        if (param_7 == 0) {
          if (*(char *)(param_1 + 0x17) == '\0') {
            param_4 = ((uint)*(ushort *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x26)) *
                      param_4;
          }
          else {
            param_4 = param_4 << (uint)*(byte *)(param_1 + 0x13);
          }
          DAT_00027640[0x80] = 0;
          puVar5[0x81] = param_6 + (uVar10 << *(sbyte *)(param_1 + 0x13));
          puVar5[0x82] = 0xffffffff;
          puVar5[0x82] = 0xffffffff;
          goto LAB_00027738;
        }
        if (*(char *)(param_1 + 0x17) == '\0') {
          uVar8 = (uint)*(ushort *)(param_1 + 0xc) +
                  ((uint)*(ushort *)(param_1 + 0x26) + (uint)*(ushort *)(param_1 + 0xc)) * param_4;
        }
        else {
          uVar8 = *(ushort *)(param_1 + 0x26) * param_4 + *(int *)(param_1 + 8);
        }
        DAT_00027640[0x80] = 0;
        puVar5[0x81] = param_6 + (uVar10 << *(sbyte *)(param_1 + 0x13));
        FUN_00025740(0x32);
        FUN_00025740((extraout_r12 & 0xffff) >> 8);
        FUN_00025740(extraout_r12_00 & 0xff);
        FUN_00025740(0x2200);
        if (*(char *)(param_1 + 0x31) == '\0') {
          puVar5[0x82] = 0xffffffff;
          puVar5[0x83] = 0xffffffff;
        }
        else {
          cVar3 = *(char *)(param_1 + 0x1f);
          puVar5[0x82] = 0;
          if (cVar3 == '\0') {
            uVar4 = (uint)*(ushort *)(param_1 + 0x26);
          }
          else {
            uVar4 = (uint)*(byte *)(param_1 + 0x1b);
          }
          puVar5[0x83] = uVar10 * uVar4 + param_7;
          FUN_00025740(0xe000);
          FUN_00025740(0x34);
          FUN_00025740((uVar8 & 0xffff) >> 8);
          FUN_00025740(uVar8 & 0xff);
          FUN_00025740(0x4200);
        }
        uVar8 = uVar7;
        if (1 < local_4c) {
          uVar8 = (uint)*(byte *)(param_1 + 0x10);
        }
        uVar13 = uVar13 | uVar8 * 0x1000000 - 0x1000000;
      }
      uVar9 = 0xe000;
LAB_000279ac:
      FUN_00025740(uVar9);
    }
    else if (*(int *)(DAT_0002763c + 2) == 2) {
      if (param_6 == 0) {
        uVar11 = (uint)*(ushort *)(param_1 + 0x26);
        if (*(char *)(param_1 + 0x17) == '\0') {
          uVar8 = (uint)*(ushort *)(param_1 + 0xc);
          uVar11 = uVar11 + uVar8;
        }
        else {
          uVar8 = *(uint *)(param_1 + 8);
        }
        uVar8 = param_4 * uVar11 + uVar8;
      }
      else if (*(char *)(param_1 + 0x17) == '\0') {
        uVar8 = ((uint)*(ushort *)(param_1 + 0x26) + (uint)*(ushort *)(param_1 + 0xc)) * param_4;
      }
      else {
        uVar8 = param_4 << *(sbyte *)(param_1 + 0x13);
      }
      uVar4 = local_2c +
              (param_2 << ((uint)*(byte *)(param_1 + 0x11) - (uint)*(byte *)(param_1 + 0x12) & 0xff)
              );
      *DAT_0002763c = 0;
      FUN_00025740(0x80cd);
      FUN_00025740((uVar8 & 0xff) << 8 | 0xa0);
      FUN_00025740(uVar8 & 0xff00 | 0xa0);
      if (local_4c < 2) {
        uVar11 = (uVar4 & 0xff) << 8 | 0xa0;
      }
      else {
        uVar11 = (uVar4 & 0xff) << 8 | 0xa1;
      }
      FUN_00025740(uVar11);
      uVar11 = uVar4 >> 8;
      FUN_00025740((uVar11 & 0xff) << 8 | 0xa0);
      if (*(char *)(param_1 + 0x14) == '\x05') {
        uVar11 = uVar4 >> 0x10;
        FUN_00025740((uVar11 & 0xff) << 8 | 0xa0);
      }
      FUN_00025740(0xd1);
      puVar5 = DAT_00027640;
      if (*(char *)(param_1 + 0x17) == '\0') {
        if (param_7 == 0) {
          if (param_6 == 0) goto LAB_00027988;
        }
        else {
          if (param_6 == 0) goto LAB_00027910;
          cVar3 = *(char *)(param_1 + 0x1f);
          DAT_00027640[0x82] = extraout_r12_01;
          if (cVar3 == '\0') {
            uVar8 = (uint)*(ushort *)(param_1 + 0x26);
          }
          else {
            uVar8 = (uint)*(byte *)(param_1 + 0x1b);
          }
          puVar5[0x83] = uVar10 * uVar8 + param_7;
        }
LAB_00027974:
        puVar5 = DAT_00027640;
        DAT_00027640[0x80] = extraout_r12_01;
        uVar8 = param_6 + (uVar10 << *(sbyte *)(param_1 + 0x13));
LAB_00027964:
        puVar5[0x81] = uVar8;
      }
      else if (param_6 == 0) {
        if (param_7 != 0) {
LAB_00027910:
          cVar3 = *(char *)(param_1 + 0x1f);
          DAT_00027640[0x80] = extraout_r12_01;
          if (cVar3 == '\0') {
            uVar8 = (uint)*(ushort *)(param_1 + 0x26);
          }
          else {
            uVar8 = (uint)*(byte *)(param_1 + 0x1b);
          }
          uVar8 = uVar10 * uVar8 + param_7;
          goto LAB_00027964;
        }
      }
      else {
        if (param_7 == 0) goto LAB_00027974;
        FUN_00025740(0x85cd);
        uVar8 = param_4 * *(ushort *)(param_1 + 0x26) + *(int *)(param_1 + 8);
        FUN_00025740((uVar8 & 0xff) << 8 | 0xa0);
        FUN_00025740(uVar8 & 0xff00 | 0xa0);
        FUN_00025740(0xd3);
        puVar5 = DAT_00027640;
        cVar3 = *(char *)(param_1 + 0x1f);
        DAT_00027640[0x82] = extraout_r12_02;
        if (cVar3 == '\0') {
          uVar8 = (uint)*(ushort *)(param_1 + 0x26);
        }
        else {
          uVar8 = (uint)*(byte *)(param_1 + 0x1b);
        }
        puVar5[0x83] = uVar10 * uVar8 + param_7;
        puVar5 = DAT_00027640;
        DAT_00027640[0x80] = extraout_r12_02;
        puVar5[0x81] = param_6 + (uVar10 << *(sbyte *)(param_1 + 0x13));
        uVar8 = uVar7;
        if (1 < local_4c) {
          uVar8 = (uint)*(byte *)(param_1 + 0x10);
        }
        uVar13 = uVar13 | uVar8 * 0x1000000 - 0x1000000;
      }
LAB_00027988:
      FUN_00025740(0x10cd);
      FUN_00025740(0xb0);
      FUN_00025740(0x70cd);
      FUN_00025740(0xdd);
      uVar9 = 0xff;
      goto LAB_000279ac;
    }
LAB_000279b0:
    FUN_00025664(0x6f);
    if (local_4c < 2) {
      if (*(int *)(DAT_0002763c + 2) == 2) {
        uVar13 = uVar13 | uVar7 * 0x1000000 - 0x1000000;
      }
      uVar8 = uVar7 * 0x1000000 - 0x1000000 | local_48;
    }
    else {
      uVar8 = (uint)*(byte *)(param_1 + 0x10) * 0x1000000 - 0x1000000 | local_48 |
              DAT_00027620 + local_4c * 0x10000;
    }
    DAT_00027640[1] = uVar8;
    if (*DAT_00027628 != '\0') {
      FUN_00025220(local_2c);
      if (*(int *)(DAT_0002763c + 2) == 2) {
        uVar9 = 0x200;
LAB_00027a60:
        func_0x00035324(DAT_0002762c,uVar9);
      }
      else if (*(int *)(DAT_0002763c + 2) == 1) {
        uVar9 = 0x80;
        goto LAB_00027a60;
      }
      FUN_00025434(DAT_0002762c + (local_2c & 0xf) * 0x10);
    }
    if (param_6 == 0 || param_9 == 0 && param_7 == 0) {
      DAT_00027640[3] = 0;
    }
    else {
      DAT_00027640[3] = uVar13;
    }
    puVar5 = DAT_00027640;
    *DAT_00027640 = local_44;
    puVar5[2] = local_50;
    puVar5[0x3e] = 0x3a;
    iVar6 = *(int *)(DAT_0002763c + 2);
    if (iVar6 == 2) {
      puVar5[0xc] = uVar12 | (uint)bVar2 << 8 | (uint)bVar1;
    }
    if (param_8 == 0) {
      uVar13 = 0xffffffff;
    }
    else {
      uVar13 = 0;
    }
    puVar5[0x84] = uVar13;
    if (param_8 != 0) {
      uVar13 = param_8;
    }
    puVar5[0x85] = uVar13;
    if (iVar6 == 1) {
      FUN_00025740(0x10);
      FUN_00025740((uVar11 & 0xffffff) >> 0x10);
      FUN_00025740((uVar11 & 0xffff) >> 8);
      FUN_00025740(uVar11 & 0xff);
      FUN_00025740(0xe000);
      FUN_00025740(0xf);
      FUN_00025740(0xc0);
      FUN_00025740(0x1000);
      FUN_00025740(&DAT_0000e201);
      FUN_00025740(0xf000);
    }
    func_0x00035324(param_6,*(ushort *)(param_1 + 0xc) * param_5,1);
    func_0x00035324(param_7,*(ushort *)(param_1 + 0x26) * param_5,1);
    *puVar5 = *puVar5 | 1;
    iVar6 = FUN_000256a8(1);
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar10 = uVar10 + uVar7;
    param_4 = 0;
    local_2c = local_2c + local_4c;
    if (param_5 <= uVar10) {
      return 0;
    }
  } while( true );
}



/* Function: FUN_00027bc0 */

undefined4
FUN_00027bc0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,int param_6
            ,int param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = 0;
  iVar3 = param_1;
  uVar4 = param_3;
  iVar1 = FUN_00028418();
  if (((iVar1 == 0) && (param_3 < *(ushort *)(param_1 + 0xe))) && (param_5 < 9)) {
    if (param_6 == 0) {
      func_0x000540cc(DAT_00027630,*(ushort *)(param_1 + 0xc) * param_5,0xff);
      param_6 = DAT_00027630;
    }
    if (param_7 == 0) {
      func_0x000540cc(DAT_00027634,*(ushort *)(param_1 + 0x26) * param_5,0xff);
      param_7 = DAT_00027634;
    }
    if (*(int *)(param_1 + 8) != 0x200) {
      uVar2 = FUN_000272c8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,DAT_00027638,
                           param_8,iVar3,param_2,uVar4);
    }
    if (param_9 != 0) {
      FUN_000259d8(param_9,DAT_00027638,param_5);
    }
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



/* Function: FUN_00027cac */

void FUN_00027cac(undefined4 *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 extraout_r12;
  
  puVar3 = DAT_00027640;
  uVar6 = 0;
  iVar7 = 0;
  DAT_00027640[1] = 2;
  puVar3[0x3e] = 0x3a;
  *DAT_0002763c = 0;
  FUN_00025740(0x1f0);
  FUN_00025740(0xff);
  if (*(char *)(param_1 + 2) != '\0') {
    puVar3[0x80] = 0;
    puVar3[0x81] = *param_1;
  }
  if (*(char *)((int)param_1 + 9) != '\0') {
    puVar3[0x82] = 0;
    puVar3[0x83] = param_1[1];
  }
  puVar3[1] = extraout_r12;
  puVar3[2] = 0;
  puVar3[3] = 0;
  FUN_00025664(0x6f);
  *puVar3 = 1;
  FUN_000256a8();
  uVar4 = 0;
  if (param_1[5] != 0) {
    uVar4 = 0x8100;
  }
  uVar4 = uVar4 | (uint)*(byte *)(param_1 + 6) << 0x1e | 0x41;
  if (*(byte *)(param_1 + 2) != 0) {
    iVar5 = param_1[3];
    uVar4 = uVar4 | (uint)*(byte *)(param_1 + 2) * 0x1000000 - 0x1000000 | 0x10;
    puVar3[0x80] = 0;
    uVar6 = iVar5 - 1;
    puVar3[0x81] = *param_1;
  }
  iVar5 = DAT_00027620;
  bVar1 = *(byte *)((int)param_1 + 9);
  if (bVar1 != 0) {
    uVar2 = *(ushort *)(param_1 + 4);
    uVar4 = uVar4 | 0x20;
    puVar3[0x82] = 0;
    uVar6 = uVar6 | iVar5 + (uint)uVar2 * 0x10000;
    iVar7 = (uint)bVar1 * 0x1000000 + -0x1000000;
    puVar3[0x83] = param_1[1];
  }
  puVar3[1] = uVar4;
  puVar3[2] = uVar6;
  puVar3[3] = iVar7;
  puVar3[0x3e] = 0x403a;
  *puVar3 = 8;
  FUN_000256a8(1);
  return;
}



/* Function: FUN_00027dd8 */

void FUN_00027dd8(undefined1 *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  FUN_00025664(0x6f);
  uVar6 = (uint)(byte)param_1[1] * 0x1000000 - 0x1000000;
  uVar7 = uVar6 | 0x8000;
  if (param_2 != 0) {
    uVar7 = uVar6 | 0x8100;
  }
  uVar9 = uVar7 | 3;
  uVar6 = DAT_00027620 + (uint)*(ushort *)(param_1 + 2) * 0x10000;
  bVar1 = param_1[0x1c];
  if (param_1[0x21] != '\0') {
    uVar9 = uVar7 | 0x43;
  }
  iVar8 = *(int *)(param_1 + 8);
  uVar3 = *(ushort *)(param_1 + 0x1e);
  uVar7 = FUN_00026510(*param_1);
  puVar5 = DAT_00027640;
  bVar2 = param_1[0x20];
  uVar4 = *(ushort *)(param_1 + 4);
  *DAT_00027640 = uVar7;
  puVar5[1] = uVar9;
  puVar5[2] = iVar8 - 1U | (uint)bVar1 << 0x18 | uVar6;
  puVar5[3] = (uint)uVar4 | (uint)uVar3 << 0x10 | (uint)bVar2 << 7;
  puVar5[0x3e] = 0x4038;
  *puVar5 = *puVar5 | 8;
  FUN_000256a8(1);
  return;
}



/* Function: FUN_00027e98 */

undefined4 FUN_00027e98(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  func_0x00054128(&local_30,0x1c);
  func_0x00054128(DAT_00028460,0x1000);
  iVar4 = DAT_00028460;
  if (*(char *)(param_1 + 0x21) == '\0') {
    for (uVar3 = 0; uVar3 < *(byte *)(param_1 + 1); uVar3 = uVar3 + 1) {
      func_0x00053f94(uVar3 * ((uint)*(ushort *)(param_1 + 2) + *(int *)(param_1 + 8)) + iVar4,
                      uVar3 * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10));
      func_0x00053f94(*(int *)(param_1 + 8) +
                      uVar3 * (*(int *)(param_1 + 8) + (uint)*(ushort *)(param_1 + 2)) + iVar4,
                      uVar3 * *(ushort *)(param_1 + 2) + *(int *)(param_1 + 0x14));
    }
    local_30 = iVar4;
    local_27 = 0;
    local_24 = *(int *)(param_1 + 8) + (uint)*(ushort *)(param_1 + 2);
  }
  else {
    local_30 = *(int *)(param_1 + 0x10);
    local_27 = *(undefined1 *)(param_1 + 1);
    local_2c = *(undefined4 *)(param_1 + 0x14);
    local_24 = *(int *)(param_1 + 8);
    local_20 = (uint)*(ushort *)(param_1 + 2);
  }
  local_28 = *(undefined1 *)(param_1 + 1);
  local_1c = 1;
  local_18 = 0;
  FUN_00025664(0x6f);
  func_0x00035324(local_30,local_24,1);
  func_0x00035324(local_2c,local_20,1);
  FUN_00027cac(&local_30);
  iVar1 = FUN_00027dd8(param_1,1);
  uVar2 = 1;
  if (iVar1 != 1) {
    if (*(char *)(param_1 + 0x21) == '\0') {
      local_27 = 0;
      local_28 = *(undefined1 *)(param_1 + 1);
      local_24 = *(int *)(param_1 + 8) + (uint)*(ushort *)(param_1 + 2);
      local_30 = iVar4;
    }
    else {
      local_2c = *(undefined4 *)(param_1 + 0x14);
      local_27 = *(undefined1 *)(param_1 + 1);
      local_28 = 0;
      local_24 = 0;
      local_20 = (uint)*(ushort *)(param_1 + 2);
    }
    local_1c = 0;
    local_18 = 0;
    FUN_00025664(0x6f);
    func_0x00035324(local_30,local_24,2);
    func_0x00035324(local_2c,local_20,2);
    FUN_00027cac(&local_30);
    if (*(char *)(param_1 + 0x21) == '\0') {
      for (uVar3 = 0; uVar3 < *(byte *)(param_1 + 1); uVar3 = uVar3 + 1) {
        func_0x00053f94(uVar3 * *(ushort *)(param_1 + 2) + *(int *)(param_1 + 0x14),
                        uVar3 * (*(int *)(param_1 + 8) + (uint)*(ushort *)(param_1 + 2)) + iVar4 +
                        *(int *)(param_1 + 8));
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_00028094 */

undefined4 FUN_00028094(int param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  int local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  bVar2 = false;
  func_0x00054128(&local_38,0x1c);
  func_0x00054128(DAT_00028460,0x1000);
  iVar4 = DAT_00028460;
  if (*(char *)(param_1 + 0x21) == '\0') {
    for (uVar3 = 0; uVar3 < *(byte *)(param_1 + 1); uVar3 = uVar3 + 1) {
      func_0x00053f94(uVar3 * ((uint)*(ushort *)(param_1 + 2) + *(int *)(param_1 + 8)) + iVar4,
                      uVar3 * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10));
      func_0x00053f94(*(int *)(param_1 + 8) +
                      uVar3 * (*(int *)(param_1 + 8) + (uint)*(ushort *)(param_1 + 2)) + iVar4,
                      uVar3 * *(ushort *)(param_1 + 2) + *(int *)(param_1 + 0x14));
    }
    local_38 = iVar4;
    local_2f = 0;
    local_2c = *(int *)(param_1 + 8) + (uint)*(ushort *)(param_1 + 2);
  }
  else {
    local_38 = *(int *)(param_1 + 0x10);
    local_2f = *(undefined1 *)(param_1 + 1);
    local_34 = *(undefined4 *)(param_1 + 0x14);
    local_2c = *(int *)(param_1 + 8);
    local_28 = (uint)*(ushort *)(param_1 + 2);
  }
  local_30 = *(undefined1 *)(param_1 + 1);
  local_24 = 1;
  local_20 = 0;
  FUN_00025664(0x6f);
  func_0x00035324(local_38,local_2c,1);
  func_0x00035324(local_34,local_28,1);
  FUN_00027cac(&local_38);
  FUN_00027dd8(param_1,0);
  for (uVar3 = 0; uVar3 < *(byte *)(param_1 + 1); uVar3 = uVar3 + 1) {
    uVar1 = *(uint *)(DAT_00028464 + (uVar3 & 0xfffffffc)) >> ((uVar3 & 3) << 3);
    if ((uVar1 & 0xff) != 0) {
      bVar2 = true;
    }
    *(char *)(*(int *)(param_1 + 0x18) + uVar3) = (char)uVar1;
  }
  if (bVar2) {
    if (*(char *)(param_1 + 0x21) == '\0') {
      local_2f = 0;
      local_2c = *(int *)(param_1 + 8) + (uint)*(ushort *)(param_1 + 2);
      local_38 = iVar4;
    }
    else {
      local_34 = *(undefined4 *)(param_1 + 0x14);
      local_2f = *(undefined1 *)(param_1 + 1);
      local_30 = *(undefined1 *)(param_1 + 1);
      local_2c = *(int *)(param_1 + 8);
      local_28 = (uint)*(ushort *)(param_1 + 2);
    }
    local_24 = 0;
    local_20 = 0;
    FUN_00025664(0x6f);
    func_0x00035324(local_38,local_2c,2);
    func_0x00035324(local_34,local_28,2);
    FUN_00027cac(&local_38);
    if (*(char *)(param_1 + 0x21) == '\0') {
      for (uVar3 = 0; uVar3 < *(byte *)(param_1 + 1); uVar3 = uVar3 + 1) {
        func_0x00053f94(uVar3 * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10),
                        uVar3 * ((uint)*(ushort *)(param_1 + 2) + *(int *)(param_1 + 8)) + iVar4);
        func_0x00053f94(uVar3 * *(ushort *)(param_1 + 2) + *(int *)(param_1 + 0x14),
                        uVar3 * (*(int *)(param_1 + 8) + (uint)*(ushort *)(param_1 + 2)) + iVar4 +
                        *(int *)(param_1 + 8));
      }
    }
  }
  return 0;
}



/* Function: FUN_000282f8 */

int FUN_000282f8(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_24 [4];
  
  iVar3 = DAT_00028468;
  iVar2 = FUN_00027200(param_1,param_2,*(undefined1 *)(param_1 + 0x1d),
                       *(undefined1 *)(param_1 + 0x1e),1,0,DAT_00028468,auStack_24,0);
  if (iVar2 != 0) {
    return iVar2;
  }
  uVar1 = *(undefined1 *)(iVar3 + (uint)*(ushort *)(param_1 + 0x24));
  if (*(char *)(param_1 + 0x16) == '\0') {
    uVar4 = FUN_00028434(uVar1);
    if (5 < uVar4) goto LAB_00028384;
  }
  else {
    iVar2 = FUN_00028434(uVar1);
    iVar3 = FUN_00028434(*(undefined1 *)((uint)*(ushort *)(param_1 + 0x24) + iVar3 + 1));
    if (0xb < (uint)(iVar3 + iVar2)) {
LAB_00028384:
      *param_3 = 1;
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}



/* Function: FUN_000283a4 */

void FUN_000283a4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00028468;
  iVar2 = FUN_00027200(param_1,param_2,*(undefined2 *)(param_1 + 0x48),0,1,0,DAT_00028468,0,0);
  if (iVar2 == 0) {
    *(undefined1 *)(iVar1 + (uint)*(ushort *)(param_1 + 0x4c)) = 0;
    FUN_00027bc0(param_1,param_2,*(undefined2 *)(param_1 + 0x48),0,1,0,iVar1,0,0);
  }
  return;
}



/* Function: FUN_00028418 */

undefined4 FUN_00028418(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_0002846c;
  if (param_1 != DAT_0002846c) {
    iVar2 = DAT_0002846c + 0x68;
  }
  if (param_1 != DAT_0002846c && param_1 != iVar2) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_00028434 */

int FUN_00028434(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 >> 1 & 0x55) + (param_1 & 0x55);
  uVar1 = (uVar1 >> 2 & 0x33) + (uVar1 & 0x33);
  return (uVar1 & 0xf) + (uVar1 >> 4);
}



/* Decompiled: 649; failed: 0 */
