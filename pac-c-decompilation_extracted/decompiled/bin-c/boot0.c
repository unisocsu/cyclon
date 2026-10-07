/* Automatically generated C decompilation by Ghidra. */

/* Function: Reset */

void Reset(void)

{
                    /* WARNING: Could not recover jumptable at 0x00000000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00000074)();
  return;
}



/* Function: UndefinedInstruction */

/* WARNING: This function may have set the stack pointer */

void UndefinedInstruction(void)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar2 & 0xffffef7a);
  coproc_moveto_Coprocessor_Access_Control(0xf00000);
  InstructionSynchronizationBarrier(0xf);
  FUN_00001eac(0x40000000,0x1004);
  FUN_00000080();
  FUN_000001f6();
  iVar1 = DAT_000000ac;
  puVar4 = (undefined4 *)(DAT_000000ac + 0xac);
  iVar3 = DAT_000000ac + 0xab;
  if (puVar4 == (undefined4 *)(DAT_000000b0 + 0xac)) {
    FUN_000001f6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xb8);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x000000aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0xb0),*(undefined4 *)(iVar1 + 0xb4));
  return;
}



/* Function: SupervisorCall */

/* WARNING: This function may have set the stack pointer */

void SupervisorCall(void)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar2 & 0xffffef7a);
  coproc_moveto_Coprocessor_Access_Control(0xf00000);
  InstructionSynchronizationBarrier(0xf);
  FUN_00001eac(0x40000000,0x1004);
  FUN_00000080();
  FUN_000001f6();
  iVar1 = DAT_000000ac;
  puVar4 = (undefined4 *)(DAT_000000ac + 0xac);
  iVar3 = DAT_000000ac + 0xab;
  if (puVar4 == (undefined4 *)(DAT_000000b0 + 0xac)) {
    FUN_000001f6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xb8);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x000000aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0xb0),*(undefined4 *)(iVar1 + 0xb4));
  return;
}



/* Function: PrefetchAbort */

/* WARNING: This function may have set the stack pointer */

void PrefetchAbort(void)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar2 & 0xffffef7a);
  coproc_moveto_Coprocessor_Access_Control(0xf00000);
  InstructionSynchronizationBarrier(0xf);
  FUN_00001eac(0x40000000,0x1004);
  FUN_00000080();
  FUN_000001f6();
  iVar1 = DAT_000000ac;
  puVar4 = (undefined4 *)(DAT_000000ac + 0xac);
  iVar3 = DAT_000000ac + 0xab;
  if (puVar4 == (undefined4 *)(DAT_000000b0 + 0xac)) {
    FUN_000001f6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xb8);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x000000aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0xb0),*(undefined4 *)(iVar1 + 0xb4));
  return;
}



/* Function: DataAbort */

/* WARNING: This function may have set the stack pointer */

void DataAbort(void)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar2 & 0xffffef7a);
  coproc_moveto_Coprocessor_Access_Control(0xf00000);
  InstructionSynchronizationBarrier(0xf);
  FUN_00001eac(0x40000000,0x1004);
  FUN_00000080();
  FUN_000001f6();
  iVar1 = DAT_000000ac;
  puVar4 = (undefined4 *)(DAT_000000ac + 0xac);
  iVar3 = DAT_000000ac + 0xab;
  if (puVar4 == (undefined4 *)(DAT_000000b0 + 0xac)) {
    FUN_000001f6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xb8);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x000000aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0xb0),*(undefined4 *)(iVar1 + 0xb4));
  return;
}



/* Function: NotUsed */

/* WARNING: This function may have set the stack pointer */

void NotUsed(void)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar2 & 0xffffef7a);
  coproc_moveto_Coprocessor_Access_Control(0xf00000);
  InstructionSynchronizationBarrier(0xf);
  FUN_00001eac(0x40000000,0x1004);
  FUN_00000080();
  FUN_000001f6();
  iVar1 = DAT_000000ac;
  puVar4 = (undefined4 *)(DAT_000000ac + 0xac);
  iVar3 = DAT_000000ac + 0xab;
  if (puVar4 == (undefined4 *)(DAT_000000b0 + 0xac)) {
    FUN_000001f6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xb8);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x000000aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0xb0),*(undefined4 *)(iVar1 + 0xb4));
  return;
}



/* Function: IRQ */

/* WARNING: This function may have set the stack pointer */

void IRQ(void)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar2 & 0xffffef7a);
  coproc_moveto_Coprocessor_Access_Control(0xf00000);
  InstructionSynchronizationBarrier(0xf);
  FUN_00001eac(0x40000000,0x1004);
  FUN_00000080();
  FUN_000001f6();
  iVar1 = DAT_000000ac;
  puVar4 = (undefined4 *)(DAT_000000ac + 0xac);
  iVar3 = DAT_000000ac + 0xab;
  if (puVar4 == (undefined4 *)(DAT_000000b0 + 0xac)) {
    FUN_000001f6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xb8);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x000000aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0xb0),*(undefined4 *)(iVar1 + 0xb4));
  return;
}



/* Function: FIQ */

/* WARNING: This function may have set the stack pointer */

void FIQ(void)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar2 & 0xffffef7a);
  coproc_moveto_Coprocessor_Access_Control(0xf00000);
  InstructionSynchronizationBarrier(0xf);
  FUN_00001eac(0x40000000,0x1004);
  FUN_00000080();
  FUN_000001f6();
  iVar1 = DAT_000000ac;
  puVar4 = (undefined4 *)(DAT_000000ac + 0xac);
  iVar3 = DAT_000000ac + 0xab;
  if (puVar4 == (undefined4 *)(DAT_000000b0 + 0xac)) {
    FUN_000001f6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xb8);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x000000aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0xb0),*(undefined4 *)(iVar1 + 0xb4));
  return;
}



/* Function: FUN_00000064 */

void FUN_00000064(void)

{
  return;
}



/* Function: FUN_00000068 */

void FUN_00000068(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_000057c0();
                    /* WARNING: Could not recover jumptable at 0x0000006c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: FUN_00000080 */

void FUN_00000080(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_000000ac;
  puVar3 = (undefined4 *)(DAT_000000ac + 0xac);
  iVar2 = DAT_000000ac + 0xab;
  if (puVar3 == (undefined4 *)(DAT_000000b0 + 0xac)) {
    FUN_000001f6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xb8);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar2 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x000000aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar3,*(undefined4 *)(iVar1 + 0xb0),*(undefined4 *)(iVar1 + 0xb4));
  return;
}



/* Function: FUN_00000148 */

undefined4 FUN_00000148(uint *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  char extraout_r1;
  int iVar2;
  uint *puVar3;
  char extraout_r2;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  longlong lVar13;
  
  if (param_2 == 0x6e) {
    param_3 = (uint *)*param_3;
    uVar8 = *param_1;
    uVar6 = param_1[8];
    if ((int)(uVar8 << 0x15) < 0) {
      *(char *)param_3 = (char)uVar6;
    }
    else if ((int)(uVar8 << 0x17) < 0) {
      *(short *)param_3 = (short)uVar6;
    }
    else if ((int)(uVar8 << 0x18) < 0) {
      *param_3 = uVar6;
      param_3[1] = (int)uVar6 >> 0x1f;
    }
    else {
      *param_3 = uVar6;
    }
    return 1;
  }
  if (param_2 == 0x70) {
    uVar6 = *param_3;
    *param_1 = *param_1 | 0x20;
    param_1[7] = 8;
    uVar8 = 0;
  }
  else {
    uVar6 = *param_1 >> 8;
    if ((*param_1 >> 7 & 1) != 0) {
      param_2 = param_2 | 0x80;
    }
    if (((param_2 == 0x69) || (param_2 == 100)) || (param_2 == 0x75)) {
      iVar7 = 0;
      iVar9 = 0x4c5c;
      if (param_2 == 0x75) {
        iVar11 = FUN_00004b96(*param_3,param_1,param_3,uVar6);
      }
      else {
        iVar11 = FUN_00004b84();
        if (iVar11 < 0) {
          iVar11 = -iVar11;
          iVar9 = 0x4c60;
        }
        else if ((int)(*param_1 << 0x1e) < 0) {
          iVar9 = 0x4c64;
        }
        else {
          if (-1 < (int)(*param_1 << 0x1d)) goto LAB_00004c36;
          iVar9 = 0x4c68;
        }
        iVar7 = 1;
      }
LAB_00004c36:
      iVar2 = 0;
      while (iVar11 != 0) {
        iVar11 = FUN_00005288();
        *(byte *)((int)param_1 + iVar2 + 0x24) = extraout_r1 + 0x30;
        iVar2 = iVar2 + 1;
      }
      goto LAB_0000513c;
    }
    if (param_2 == 0x6f) {
      uVar6 = FUN_00004b96(*param_3,param_1,param_3,uVar6);
      uVar8 = 0;
LAB_00004e18:
      iVar2 = 0;
      for (; uVar6 != 0 || uVar8 != 0; uVar6 = uVar6 >> 3 | uVar1) {
        uVar1 = uVar8 << 0x1d;
        uVar8 = uVar8 >> 3;
        *(byte *)((int)param_1 + iVar2 + 0x24) = ((byte)uVar6 & 7) + 0x30;
        iVar2 = iVar2 + 1;
      }
      iVar7 = 0;
      iVar9 = 0x4e80;
      if (((int)(*param_1 << 0x1c) < 0) && (((int)(*param_1 << 0x1a) < 0 || (iVar2 != 0)))) {
        iVar7 = 1;
        iVar9 = 0x4e84;
        param_1[7] = param_1[7] - 1;
      }
      goto LAB_0000513c;
    }
    if (param_2 == 0x78) {
      uVar6 = FUN_00004b96(*param_3,param_1,param_3,uVar6);
      uVar8 = 0;
    }
    else {
      if (((param_2 == 0xe9) || (param_2 == 0xe4)) || (param_2 == 0xf5)) {
        piVar4 = (int *)((uint)((int)param_3 + 7) & 0xfffffff8);
        iVar7 = 0;
        iVar11 = *piVar4;
        iVar2 = piVar4[1];
        iVar9 = 0x4e08;
        if (param_2 != 0xf5) {
          if (iVar2 < 0) {
            bVar12 = iVar11 != 0;
            iVar11 = -iVar11;
            iVar2 = -(uint)bVar12 - iVar2;
            iVar9 = 0x4e0c;
          }
          else if ((int)(*param_1 << 0x1e) < 0) {
            iVar9 = 0x4e10;
          }
          else {
            if (-1 < (int)(*param_1 << 0x1d)) goto LAB_00004dde;
            iVar9 = 0x4e14;
          }
          iVar7 = 1;
        }
LAB_00004dde:
        lVar13 = CONCAT44(iVar2,iVar11);
        iVar2 = 0;
        while (lVar13 != 0) {
          lVar13 = FUN_000050a4();
          *(byte *)((int)param_1 + iVar2 + 0x24) = extraout_r2 + 0x30;
          iVar2 = iVar2 + 1;
        }
        goto LAB_0000513c;
      }
      if (param_2 == 0xef) {
        puVar3 = (uint *)((uint)((int)param_3 + 7) & 0xfffffff8);
        uVar6 = *puVar3;
        uVar8 = puVar3[1];
        goto LAB_00004e18;
      }
      if (param_2 != 0xf8) {
        if ((*param_1 >> 6 & 1) != 0) {
          param_2 = param_2 | 0x80;
        }
        if (param_2 == 99) {
          puVar3 = param_1 + 9;
          *(byte *)puVar3 = (byte)*param_3;
          *(byte *)((int)param_1 + 0x25) = 0;
          uVar5 = 1;
        }
        else {
          if (param_2 != 0x73) {
            if (param_2 == 0xe3) {
              puVar3 = param_1 + 9;
              *(ushort *)(param_1 + 9) = (ushort)*param_3;
              *(ushort *)((int)param_1 + 0x26) = 0;
              uVar5 = 1;
            }
            else {
              if (param_2 != 0xf3) {
                return 0;
              }
              puVar3 = (uint *)*param_3;
              uVar5 = 0xffffffff;
            }
            if (param_1[5] == 0) {
              FUN_00004ce0(param_1,puVar3,uVar5);
            }
            return 1;
          }
          puVar3 = (uint *)*param_3;
          uVar5 = 0xffffffff;
        }
        if (param_1[5] == 0) {
          FUN_00004ba8(param_1,puVar3,uVar5);
        }
        return 1;
      }
      puVar3 = (uint *)((uint)((int)param_3 + 7) & 0xfffffff8);
      uVar6 = *puVar3;
      uVar8 = puVar3[1];
    }
  }
  if ((int)((uint)(ushort)*param_1 << 0x14) < 0) {
    iVar9 = DAT_00004f18 + 0x4e98;
  }
  else {
    iVar9 = DAT_00004f18 + 0x4eac;
  }
  iVar2 = 0;
  for (; uVar6 != 0 || uVar8 != 0; uVar6 = uVar6 >> 4 | uVar1) {
    uVar1 = uVar8 << 0x1c;
    uVar8 = uVar8 >> 4;
    *(byte *)((int)param_1 + iVar2 + 0x24) = *(byte *)(iVar9 + (uVar6 & 0xf));
    iVar2 = iVar2 + 1;
  }
  iVar7 = 0;
  if ((int)((uint)(byte)*param_1 << 0x1c) < 0) {
    if (param_2 == 0x70) {
      iVar7 = 1;
      iVar9 = iVar9 + 0x10;
    }
    else if (iVar2 != 0) {
      iVar7 = 2;
      iVar9 = iVar9 + 0x11;
    }
  }
LAB_0000513c:
  if ((int)(*param_1 << 0x1a) < 0) {
    uVar6 = param_1[7];
    *param_1 = *param_1 & 0xffffffef;
  }
  else {
    uVar6 = 1;
  }
  if (iVar2 < (int)uVar6) {
    iVar11 = uVar6 - iVar2;
  }
  else {
    iVar11 = 0;
  }
  param_1[6] = param_1[6] - (iVar11 + iVar2 + iVar7);
  if (-1 < (int)((uint)(byte)*param_1 << 0x1b)) {
    FUN_00004b36(param_1);
  }
  for (iVar10 = 0; iVar10 < iVar7; iVar10 = iVar10 + 1) {
    (*(code *)param_1[1])(*(undefined1 *)(iVar9 + iVar10),param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)((uint)(byte)*param_1 << 0x1b) < 0) {
    FUN_00004b36(param_1);
  }
  while (0 < iVar11) {
    (*(code *)param_1[1])(0x30,param_1[2]);
    param_1[8] = param_1[8] + 1;
    iVar11 = iVar11 + -1;
  }
  while (0 < iVar2) {
    (*(code *)param_1[1])(*(byte *)((int)param_1 + iVar2 + 0x23),param_1[2]);
    param_1[8] = param_1[8] + 1;
    iVar2 = iVar2 + -1;
  }
  FUN_00004b62(param_1);
  if ((int)((uint)(byte)*param_1 << 0x18) < 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



/* Function: FUN_000001d8 */

undefined8 FUN_000001d8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00005b94();
  iVar1 = FUN_0000532c();
  iVar2 = FUN_00005460(0,0);
  *(int *)(iVar1 + 4) = iVar2 + 1;
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_000001f2 */

void FUN_000001f2(void)

{
  return;
}



/* Function: FUN_000001f6 */

int FUN_000001f6(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined8 uVar3;
  int iStack_c;
  
  uVar2 = FUN_000052b4();
  FUN_000001d8(uVar2,extraout_r2);
  FUN_0000196c();
  uVar3 = FUN_00005310();
  FUN_000001f2();
  FUN_00005428((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  iVar1 = *DAT_00000604;
  do {
    iStack_c = iVar1;
    iVar1 = *DAT_00000604;
  } while (iStack_c != *DAT_00000604);
  return iStack_c;
}



/* Function: FUN_00000214 */

int FUN_00000214(void)

{
  int iVar1;
  int local_c;
  
  iVar1 = *DAT_00000604;
  do {
    local_c = iVar1;
    iVar1 = *DAT_00000604;
  } while (local_c != *DAT_00000604);
  return local_c;
}



/* Function: FUN_00000230 */

void FUN_00000230(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  uVar4 = 0;
  if (param_1 >> 8 == 0) {
    FUN_00004ae8(DAT_00000608,0x200);
    puVar1 = DAT_00000608;
    param_1 = param_1 >> 4;
    do {
      iVar2 = DAT_0000060c;
      uVar3 = uVar4 & 3;
      if (uVar3 == 0) {
        iVar5 = 0xd;
      }
      else if (uVar3 == 1) {
        iVar5 = 0x11;
      }
      else if (uVar3 == 2) {
        iVar5 = 0x13;
      }
      else if (uVar3 == 3) {
        iVar5 = 0x17;
      }
      for (uVar3 = 0; uVar3 <= iVar5 - 1U; uVar3 = uVar3 + 1) {
        if ((*(uint *)(iVar2 + uVar4 * 4) & 1 << (uVar3 & 0xff)) != 0) {
          puVar1[uVar4] = puVar1[uVar4] | 1 << ((iVar5 - uVar3) - 1 & 0xff);
        }
      }
      if (param_1 != 0) {
        uVar3 = param_1;
        if (iVar5 - 1U < param_1) {
          uVar3 = param_1 - iVar5;
        }
        uVar6 = (1 << iVar5) + -1 >> (uVar3 & 0xff);
        puVar1[uVar4] =
             (puVar1[uVar4] & uVar6) << (uVar3 & 0xff) |
             (puVar1[uVar4] & ~uVar6) >> (iVar5 - uVar3 & 0xff);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x40);
    puVar1[0x40] = *puVar1;
    puVar1[0x41] = puVar1[1];
    puVar1[0x42] = puVar1[2];
    puVar1[0x43] = puVar1[3];
  }
  return;
}



/* Function: FUN_0000031c */

void FUN_0000031c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = DAT_00000618;
  uVar2 = 0;
  iVar6 = DAT_00000610 + 0xc;
  do {
    uVar3 = uVar2 & 3;
    if (uVar3 == 0) {
      param_3 = 0xd;
    }
    else if (uVar3 == 1) {
      param_3 = 0x11;
    }
    else if (uVar3 == 2) {
      param_3 = 0x13;
    }
    else if (uVar3 == 3) {
      param_3 = 0x17;
    }
    if (uVar2 < 0x40) {
      uVar5 = *(uint *)(iVar6 + uVar2 * 4);
      uVar4 = 0;
      uVar3 = 0;
      *(uint *)(iVar1 + uVar2 * 4) = uVar5;
      do {
        if ((uVar5 & 1 << (0x1f - uVar3 & 0xff)) != 0) {
          uVar4 = uVar4 | 1 << (uVar3 - (0x20 - param_3) & 0xff);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x20);
      *(uint *)(iVar6 + uVar2 * 4) = uVar4;
    }
    else {
      uVar3 = *(uint *)(iVar6 + uVar2 * 4 + -0x100);
      uVar4 = 1 << (param_3 - 1U & 0xff);
      if ((uVar3 & uVar4) == 0) {
        uVar3 = uVar3 << 1;
      }
      else {
        uVar3 = (uVar3 & ~uVar4) << 1 | 1;
      }
      *(uint *)(iVar6 + uVar2 * 4) = uVar3;
      uVar3 = *(uint *)(iVar1 + uVar2 * 4 + -0x100);
      *(uint *)(iVar1 + uVar2 * 4) = (uVar3 & 1) << (param_3 - 1U & 0xff) | uVar3 >> 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x400);
  return;
}



/* Function: FUN_000003d4 */

void FUN_000003d4(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = DAT_00000614;
  *(undefined4 *)(DAT_00000614 + 0xb0) = 0x100d;
  uVar3 = DAT_0000061c;
  *(uint *)(iVar2 + 0xb4) = DAT_0000061c;
  uVar4 = DAT_00000620;
  *(undefined4 *)(iVar2 + 0xb8) = DAT_00000620;
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



/* Function: FUN_00000410 */

void FUN_00000410(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = DAT_00000624;
  *DAT_00000624 = *DAT_00000624 | 0x100000;
  puVar1[0x2c] = puVar1[0x2c] | 0x1000;
  iVar2 = DAT_00000628;
  *(uint *)(DAT_00000628 + 0x24) = *(uint *)(DAT_00000628 + 0x24) | 0x1000;
  *(undefined4 *)(iVar2 + 0x194) = 0;
  *(undefined4 *)(iVar2 + 0x174) = 0;
  *(undefined4 *)(iVar2 + 0x160) = 0;
  *(undefined4 *)(iVar2 + 0x15c) = 0;
  *(undefined4 *)(iVar2 + 0x184) = 0;
  *(undefined4 *)(iVar2 + 0x164) = 0;
  *(undefined4 *)(iVar2 + 0x158) = 0;
  *(undefined4 *)(iVar2 + 0x154) = 0;
  *(undefined4 *)(iVar2 + 0x180) = 0;
  *(undefined4 *)(iVar2 + 0x18c) = 0;
  *(undefined4 *)(iVar2 + 400) = 0;
  *(undefined4 *)(iVar2 + 0x188) = 0;
  *(undefined4 *)(iVar2 + 0x17c) = 0;
  *(undefined4 *)(iVar2 + 0x168) = 0;
  *(undefined4 *)(iVar2 + 0x16c) = 0;
  *(undefined4 *)(iVar2 + 0x178) = 0;
  *(undefined4 *)(iVar2 + 0x170) = 0;
  *DAT_0000062c = 0x300000;
  puVar3 = DAT_0000062c;
  DAT_0000062c[-8] = DAT_00000630;
  puVar4 = DAT_0000062c;
  DAT_0000062c[-0xd] = 0x300000;
  puVar4[-0xe] = 0x300000;
  DAT_0000062c[-4] = 0x300000;
  DAT_0000062c[-0xc] = 0x300000;
  DAT_0000062c[-0x10] = 0x300000;
  DAT_0000062c[-5] = 0x300000;
  puVar4 = DAT_0000062c;
  DAT_0000062c[-2] = 0x300000;
  puVar4[-1] = 0x300000;
  DAT_0000062c[-3] = 0x300000;
  DAT_0000062c[-6] = 0x300000;
  puVar4 = DAT_0000062c;
  DAT_0000062c[-0xb] = 0x300000;
  puVar4[-10] = 0x300000;
  puVar3[-7] = 0x300000;
  puVar3[-9] = 0x300000;
  DAT_0000062c[-0xf] = DAT_00000634;
  return;
}



/* Function: FUN_000004da */

void FUN_000004da(void)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_00000610 + 8) == 0) {
    if (*(int *)(DAT_00000638 + 0x60) == 8) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
    *(undefined4 *)(DAT_00000610 + 8) = uVar1;
  }
  return;
}



/* Function: FUN_000004f6 */

undefined4 FUN_000004f6(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0000063c;
  iVar2 = 0;
  do {
    *(char *)(iVar4 + iVar2 * 0x68 + 0x15) = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 1);
  FUN_000004da();
  iVar4 = DAT_00000638;
  if (*(int *)(DAT_00000610 + 8) == 2) {
    uVar3 = 8;
  }
  else {
    if (*(int *)(DAT_00000610 + 8) != 1) goto LAB_00000536;
    uVar3 = 3;
  }
  *(undefined4 *)(DAT_00000638 + 0x60) = uVar3;
  *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 2;
LAB_00000536:
  puVar1 = DAT_00000640;
  *DAT_00000640 = *DAT_00000640 | 0x200;
  puVar1[1] = puVar1[1] | 0x80;
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
  } while (iVar4 < 1000);
  puVar1[1] = puVar1[1] & 0xffffff7f;
  FUN_00000410();
  return 0;
}



/* Function: FUN_00000564 */

undefined4 FUN_00000564(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x100;
  }
  if ((int)(param_1 << 0x1e) < 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((int)(param_1 << 0x1d) < 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((int)(param_1 << 0x1c) < 0) {
    uVar1 = uVar1 | 0x800;
  }
  if (uVar1 != 0) {
    *(uint *)(DAT_00000614 + 0x10) = *(uint *)(DAT_00000614 + 0x10) | uVar1;
  }
  return 0;
}



/* Function: FUN_00000594 */

undefined4 FUN_00000594(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *extraout_r12;
  undefined4 *puVar5;
  
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = FUN_00000214();
  puVar5 = DAT_00000614;
  do {
    if (((param_1 & ~uVar3) == 0) ||
       (iVar2 = FUN_00000214(), puVar5 = extraout_r12, 4999 < (uint)(iVar2 - iVar1)))
    goto LAB_000005d4;
    if ((int)(extraout_r12[4] << 7) < 0) {
      uVar3 = 1;
    }
  } while (-1 < (int)(extraout_r12[4] << 4));
  uVar3 = uVar3 | 8;
LAB_000005d4:
  if ((int)(uVar3 << 0x1c) < 0) {
    *puVar5 = 2;
    FUN_00000564(0x6f);
    uVar4 = 5;
  }
  else if ((param_1 & ~uVar3) != 0) {
    *puVar5 = 2;
    FUN_00000564(0x6f);
    uVar4 = 1;
  }
  FUN_00000564(0x6f);
  return uVar4;
}



/* Function: FUN_00000644 */

void FUN_00000644(uint param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar2 = DAT_00000a40;
  uVar1 = *DAT_00000a40;
  iVar4 = (uint)(uVar1 >> 1) * 4 + DAT_00000a44;
  uVar3 = *(uint *)(iVar4 + 0x220);
  if ((uVar1 & 1) == 0) {
    param_1 = uVar3 & 0xffff0000 | param_1;
  }
  else {
    param_1 = uVar3 & 0xffff | param_1 << 0x10;
  }
  *(uint *)(iVar4 + 0x220) = param_1;
  *puVar2 = uVar1 + 1;
  return;
}



/* Function: FUN_0000067e */

undefined4 FUN_0000067e(short *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 *extraout_r12;
  undefined2 *puVar6;
  
  uVar5 = 0;
  iVar2 = FUN_00001554();
  if ((iVar2 == 0) && (*param_1 != 0)) {
    FUN_000004da();
    puVar1 = DAT_00000a44;
    puVar6 = DAT_00000a40;
    if (*(int *)(DAT_00000a40 + 2) == 1) {
      uVar3 = (uint)*(byte *)((int)param_1 + 0x15);
      if (uVar3 != 0) {
        uVar5 = uVar3 << 9;
        DAT_00000a44[100] = DAT_00000a44[100] | uVar3 << 0x1e;
      }
      puVar1[5] = DAT_00000a48;
      puVar1[6] = DAT_00000a4c;
      puVar1[0xd] = 0x81000000;
      puVar1[0xe] = DAT_00000a50;
      puVar1[0x2c] = 0x1004;
      puVar1[0x2d] = 0x1004;
      puVar1[0x2e] = s_pcb_swap_type_error_00004010 + 3;
      puVar1[0x2f] = DAT_00000a54;
      puVar1[0x37] = 6;
      puVar1[0x38] = 0x100;
      puVar1[0x39] = 0x100;
      puVar1[0x3a] = 0xbf;
      puVar1[0x3b] = 0xc80;
      puVar1[0x60] = 0x680;
      puVar1[0x62] = 3;
      puVar1[0x4b] = 0x548a;
      uVar4 = DAT_00000a58;
      uVar5 = uVar5 | 2;
      puVar1[1] = uVar5;
      puVar1[2] = 0x3000;
      puVar1[0x3b] = uVar4;
      puVar1[0x3e] = puVar1[0x3e] | 2;
      *puVar6 = 0;
      FUN_00000644(0xff);
      FUN_00000644(0xe000);
      FUN_00000644(0xf);
      FUN_00000644(0xc0);
      FUN_00000644(0x1000);
      FUN_00000644(0xe001);
      FUN_00000644(0xf000);
      puVar6 = extraout_r12;
    }
    uVar4 = DAT_00000a5c;
    if (*(int *)(puVar6 + 2) == 2) {
      if (*(byte *)((int)param_1 + 0x15) != 0) {
        uVar5 = uVar5 | (uint)*(byte *)((int)param_1 + 0x15) << 9;
      }
      puVar1[1] = uVar5 | 2;
      puVar1[5] = uVar4;
      puVar1[6] = puVar1[6] | 0x1f;
      puVar1[0x3e] = puVar1[0x3e] | 2;
      *puVar6 = 0;
      FUN_00000644(0xffcd);
      FUN_00000644(0xb0);
      FUN_00000644(0xff);
    }
    FUN_00000564(0x6f);
    *puVar1 = 1;
    uVar4 = FUN_00000594();
    return uVar4;
  }
  return 4;
}



/* Function: FUN_000007ce */

undefined4 FUN_000007ce(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_r3;
  
  FUN_000004da();
  iVar1 = DAT_00000a60;
  if (*(int *)(DAT_00000a40 + 4) == 2) {
    uVar3 = 8;
  }
  else {
    if (*(int *)(DAT_00000a40 + 4) != 1) goto LAB_000007f6;
    uVar3 = 3;
  }
  *(undefined4 *)(DAT_00000a60 + 0x60) = uVar3;
  *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
LAB_000007f6:
  puVar2 = DAT_00000a64;
  *DAT_00000a64 = *DAT_00000a64 | 0x200;
  puVar2[1] = puVar2[1] | 0x80;
  uVar4 = 0;
  do {
    uVar4 = uVar4 + 1;
  } while (uVar4 < 1000);
  puVar2[1] = puVar2[1] & 0xffffff7f;
  FUN_0000067e(extraout_r3);
  return 0;
}



/* Function: FUN_00000826 */

void FUN_00000826(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}



/* Function: FUN_00000838 */

short * FUN_00000838(int param_1)

{
  short *psVar1;
  
  if (param_1 != 0) {
    return (short *)0x0;
  }
  FUN_000004f6();
  psVar1 = DAT_00000a68;
  *DAT_00000a68 = *DAT_00000a68 + 1;
  *(undefined1 *)((int)psVar1 + 0x15) = 0;
  psVar1[0x32] = 0;
  psVar1[0x33] = 0;
  *(undefined1 *)((int)psVar1 + 0x17) = 1;
  *(undefined1 *)(psVar1 + 0xe) = 1;
  return psVar1;
}



/* Function: FUN_0000085a */

int FUN_0000085a(short *param_1,undefined1 *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_r2;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar8 = 0;
  uVar7 = 0;
  uVar9 = FUN_00001554();
  puVar2 = DAT_00000a44;
  if ((((int)uVar9 == 0) && (*param_1 != 0)) && (param_2 != (undefined1 *)0x0)) {
    uVar3 = (uint)*(byte *)((int)param_1 + 0x15);
    if (uVar3 != 0) {
      uVar8 = uVar3 << 9;
      uVar7 = uVar3 << 0x1e;
    }
    DAT_00000a44[1] = uVar8 | 2;
    FUN_000004da(uVar8 | 2,(int)((ulonglong)uVar9 >> 0x20),0x3000);
    puVar1 = DAT_00000a40;
    if (*(int *)(DAT_00000a40 + 2) == 1) {
      puVar2[2] = extraout_r2;
      puVar2[100] = puVar2[100] | uVar7;
      *puVar1 = 0;
      FUN_00000644(0x9f);
      FUN_00000644(0);
      FUN_00000644(0x1000);
      FUN_00000644(0x1000);
      FUN_00000644(0xe000);
      FUN_00000644(0xf000);
      FUN_00000564(0x6f);
      *puVar2 = 1;
      iVar4 = FUN_00000594(1);
      iVar5 = puVar2[0x67];
      if (iVar5 != 0) {
        param_2[1] = (char)iVar5;
        *param_2 = (char)((uint)iVar5 >> 8);
        return iVar4;
      }
      *(undefined4 *)(puVar1 + 2) = 2;
      FUN_000007ce(param_1);
    }
    iVar4 = *(int *)(puVar1 + 2);
    if (iVar4 == 2) {
      *puVar1 = 0;
      FUN_00000644(0x90cd);
      FUN_00000644(0xa0);
      FUN_00000644(0x6dd);
      FUN_00000644(0xff);
      FUN_00000564(0x6f);
      *puVar2 = 1;
      iVar4 = FUN_00000594(1);
      uVar6 = puVar2[0x10];
      *param_2 = (char)uVar6;
      param_2[1] = (char)((uint)uVar6 >> 8);
    }
  }
  else {
    iVar4 = 4;
  }
  return iVar4;
}



/* Function: FUN_0000094e */

undefined4 FUN_0000094e(short *param_1,int param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  FUN_000004da();
  puVar2 = DAT_00000a44;
  puVar1 = DAT_00000a40;
  if (*(int *)(DAT_00000a40 + 2) == 2) {
    iVar3 = FUN_00001554(param_1);
    if ((iVar3 == 0) && (*param_1 != 0)) {
      puVar2[1] = 2;
      puVar2[2] = (*(byte *)(param_1 + 1) & 7) << 0xc;
      puVar2[0x3e] = 2;
      if ((*(byte *)(param_1 + 1) & 7) == 0) {
        puVar2[0x97] = param_3;
      }
      else {
        uVar4 = (param_3 & 0xffff) >> 8;
        puVar2[0x97] = uVar4 << 0x18 | uVar4 << 0x10 | param_3 & 0xff | (param_3 & 0xff) << 8;
        uVar4 = (param_3 & 0xffffff) >> 0x10;
        puVar2[0x96] = (param_3 >> 0x18) << 0x18 | (param_3 >> 0x18) << 0x10 | uVar4 | uVar4 << 8;
      }
      *puVar1 = 0;
      FUN_00000644(0xefcd);
      FUN_00000644(param_2 << 8 | 0xa0);
      FUN_00000644(0x7de);
      FUN_00000644(0xb0);
      uVar5 = 0xff;
      goto LAB_00000a82;
    }
  }
  else {
    if (*(int *)(DAT_00000a40 + 2) != 1) {
      return 9;
    }
    iVar3 = FUN_00001554(param_1);
    if ((iVar3 == 0) && (*param_1 != 0)) {
      puVar2[1] = 2;
      puVar2[2] = 0x3000;
      uVar4 = 0;
      if (*(char *)((int)param_1 + 0x15) != '\0') {
        uVar4 = 0x40000000;
      }
      puVar2[100] = puVar2[100] | uVar4;
      puVar2[0x3e] = 2;
      *puVar1 = 0;
      FUN_00000644(0x1f);
      FUN_00000644(param_2);
      FUN_00000644(param_3 & 0xffff);
      FUN_00000644(0xe000);
      uVar5 = 0xf000;
LAB_00000a82:
      FUN_00000644(uVar5);
      FUN_00000564(0x6f);
      *puVar2 = 1;
      uVar5 = FUN_00000594(1);
      return uVar5;
    }
  }
  return 4;
}



/* Function: FUN_00000a9c */

uint FUN_00000a9c(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((1 << (uVar1 & 0xff) & param_1) != 0) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x20);
  return 0;
}



/* Function: FUN_00000ab4 */

undefined4 FUN_00000ab4(short *param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_00001554();
  if ((iVar2 == 0) && (*param_1 != 0)) {
    FUN_00004a84(param_1 + 0x1a,param_2,0x24);
    *(undefined1 *)((int)param_1 + 0x15) = param_4;
    FUN_000004da();
    if (*(int *)(DAT_00000ed4 + 4) == 2) {
      param_1[1] = 0;
    }
    else {
      if (*(int *)(DAT_00000ed4 + 4) != 1) {
        return 9;
      }
      param_1[1] = 3;
    }
    param_1[7] = *(short *)(param_2 + 10);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0xc);
    *(uint *)(param_1 + 2) = (uint)*(ushort *)(param_2 + 8) * (uint)*(ushort *)(param_2 + 10);
    *(uint *)(param_1 + 4) = (uint)*(ushort *)(param_2 + 8);
    uVar1 = FUN_00000a9c(*(undefined4 *)(param_1 + 2));
    *(undefined1 *)((int)param_1 + 0x11) = uVar1;
    uVar1 = FUN_00000a9c(*(undefined4 *)(param_1 + 4));
    *(undefined1 *)(param_1 + 9) = uVar1;
    uVar1 = FUN_00000a9c(*(undefined2 *)(param_2 + 6));
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



/* Function: FUN_00000b72 */

undefined4 FUN_00000b72(int param_1)

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



/* Function: FUN_00000bce */

int FUN_00000bce(int param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,
                int param_7,int param_8,int param_9)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  FUN_000004da();
  puVar3 = DAT_00000edc;
  iVar8 = DAT_00000ed8 + (param_3 & 0xf) * 0x10;
  local_2c = param_3;
  if (*(int *)(DAT_00000ed4 + 2) != 2) {
    if (*(int *)(DAT_00000ed4 + 2) != 1) {
      return 9;
    }
    local_40 = 0;
    uVar10 = 0;
    iVar5 = FUN_0000094e(param_1,0xa0,0);
    bVar11 = iVar5 == 0;
    do {
      if (!bVar11) {
        return iVar5;
      }
      iVar5 = FUN_0000094e(param_1,0xb0,9);
      bVar11 = iVar5 == 0;
    } while (!bVar11);
    local_4c = 0x3000;
    local_48 = 8;
    if (param_9 != 0) {
      local_48 = 0xc;
    }
    if (*(char *)(param_1 + 0x1f) != '\0') {
      local_48 = local_48 | 0x2000;
    }
    if ((param_6 == 0) || (param_7 == 0 && param_9 == 0)) {
      local_48 = local_48 | 0x10;
      if (param_6 != 0) {
        local_4c = *(ushort *)(param_1 + 0xc) - 1 | 0x3000;
      }
      if (param_7 != 0) {
        local_4c = *(ushort *)(param_1 + 0x26) - 1 | local_4c;
      }
    }
    else {
      local_48 = local_48 | 0x30;
      local_4c = *(ushort *)(param_1 + 0xc) - 1 |
                 DAT_00001348 + (uint)*(ushort *)(param_1 + 0x26) * 0x10000 | 0x3000;
    }
    if (*DAT_00001350 != '\0') {
      FUN_00000230(param_3);
      FUN_00002594(DAT_00001354,0x80,1);
      FUN_000003d4(iVar8);
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
      uVar6 = FUN_00000b72(*(undefined1 *)(param_1 + 0x18));
      local_40 = uVar6 | local_40;
      local_4c = local_4c | (uint)*(byte *)(param_1 + 0x1b) << 0x18;
      if (param_4 == 0) {
        uVar6 = (uint)*(byte *)(param_1 + 0x10);
        local_50 = param_5 - uVar10;
        if (uVar6 < local_50) {
          local_58 = local_50 / uVar6;
          uVar6 = local_58 * uVar6;
          goto LAB_00001184;
        }
      }
      else {
        if (*(byte *)(param_1 + 0x10) < param_4) {
          return 4;
        }
        local_50 = *(byte *)(param_1 + 0x10) - param_4;
        uVar6 = param_5 - uVar10;
        if (uVar6 < local_50) {
LAB_00001184:
          local_50 = uVar6;
        }
      }
      pcVar2 = DAT_00001350;
      pcVar2[4] = '\0';
      pcVar2[5] = '\0';
      FUN_00000644(0x13);
      FUN_00000644((extraout_r12_03 & 0xffffff) >> 0x10);
      FUN_00000644((extraout_r12_04 & 0xffff) >> 8);
      FUN_00000644(extraout_r12_05 & 0xff);
      FUN_00000644(0xe000);
      FUN_00000644(0xf);
      FUN_00000644(0xc0);
      FUN_00000644(0x1000);
      FUN_00000644(0xe001);
      if (param_6 == 0) {
        if (param_7 != 0) {
          if (*(char *)(param_1 + 0x17) == '\0') {
            uVar6 = (uint)*(ushort *)(param_1 + 0xc);
            uVar7 = *(ushort *)(param_1 + 0x26) + uVar6;
          }
          else {
            uVar7 = (uint)*(ushort *)(param_1 + 0x26);
            uVar6 = *(uint *)(param_1 + 8);
          }
          param_4 = param_4 * uVar7 + uVar6;
          cVar1 = *(char *)(param_1 + 0x1f);
          puVar3[0x80] = 0;
          if (cVar1 == '\0') {
            uVar6 = (uint)*(ushort *)(param_1 + 0x26);
          }
          else {
            uVar6 = (uint)*(byte *)(param_1 + 0x1b);
          }
          uVar6 = uVar10 * uVar6 + param_7;
          goto LAB_00001312;
        }
      }
      else {
        if (param_7 == 0) {
          if (*(char *)(param_1 + 0x17) == '\0') {
            param_4 = ((uint)*(ushort *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x26)) *
                      param_4;
          }
          else {
            param_4 = param_4 << *(sbyte *)(param_1 + 0x13);
          }
          puVar3[0x80] = 0;
          uVar6 = (uVar10 << *(sbyte *)(param_1 + 0x13)) + param_6;
LAB_00001312:
          puVar3[0x81] = uVar6;
          puVar3[0x82] = 0xffffffff;
          puVar3[0x83] = 0xffffffff;
        }
        else {
          if (*(char *)(param_1 + 0x17) == '\0') {
            param_4 = param_4 * ((uint)*(ushort *)(param_1 + 0x26) +
                                (uint)*(ushort *)(param_1 + 0xc));
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
            FUN_00000644(0x6b);
            FUN_00000644((extraout_r12_06 & 0xffff) >> 8);
            FUN_00000644(extraout_r12_07 & 0xff);
            FUN_00000644(0x6000);
            FUN_00000644(0x5200);
            FUN_00000644(0xe000);
          }
          uVar6 = local_50;
          if (1 < local_58) {
            uVar6 = (uint)*(byte *)(param_1 + 0x10);
          }
          local_44 = uVar6 * 0x1000000 - 0x1000000 | local_44;
          puVar3[0x80] = 0;
          puVar3[0x81] = (uVar10 << *(sbyte *)(param_1 + 0x13)) + param_6;
        }
        FUN_00000644(0x6b);
        FUN_00000644((param_4 & 0xffff) >> 8);
        FUN_00000644(param_4 & 0xff);
        FUN_00000644(0x6000);
        FUN_00000644(&DAT_00003200);
        FUN_00000644(0xe000);
        FUN_00000644(0xf000);
      }
      if (local_58 < 2) {
        uVar7 = local_50 * 0x1000000 - 0x1000000;
        uVar6 = local_48;
      }
      else {
        uVar7 = (uint)*(byte *)(param_1 + 0x10) * 0x1000000 - 0x1000000 | local_48;
        uVar6 = DAT_0000156c + local_58 * 0x10000;
      }
      puVar3[1] = uVar7 | uVar6;
      if ((param_6 == 0) || (param_7 == 0 && param_9 == 0)) {
        local_44 = 0;
      }
      puVar3[3] = local_44;
      if (*DAT_00001570 != '\0') {
        FUN_00000230(local_2c);
        FUN_00002594(DAT_00001574,0x80,1);
        FUN_000003d4(DAT_00001574 + (local_2c & 0xf) * 0x10);
      }
      if (param_8 == 0) {
        uVar6 = 0xffffffff;
        puVar3[0x84] = 0xffffffff;
      }
      else {
        puVar3[0x84] = 0;
        uVar6 = DAT_00001578;
      }
      puVar3[0x85] = uVar6;
      FUN_00000564(0x6f);
      puVar3[2] = local_4c;
      puVar3[0x3e] = 0x3a;
      *puVar3 = local_40;
      FUN_00002594(param_6,*(ushort *)(param_1 + 0xc) * param_5,1);
      FUN_00002594(param_7,*(ushort *)(param_1 + 0x26) * param_5,1);
      FUN_00002594(DAT_00001578,0x10,1);
      FUN_00002594(param_6,*(ushort *)(param_1 + 0xc) * param_5,2);
      FUN_00002594(param_7,*(ushort *)(param_1 + 0x26) * param_5,2);
      FUN_00002594(DAT_00001578,0x10,2);
      *puVar3 = *puVar3 | 1;
      FUN_00000594(1);
      uVar6 = DAT_00001578;
      param_4 = 0;
      local_2c = local_58 + local_2c;
      uVar10 = uVar10 + local_50;
      if (param_5 <= uVar10) {
        if (param_8 == 0) {
          return 0;
        }
        if (param_9 == 0) {
          return 0;
        }
        for (uVar7 = 0; uVar7 < uVar10; uVar7 = uVar7 + 1) {
          uVar9 = (uint)*(ushort *)(uVar6 + uVar7 * 2);
          if ((~uVar9 & 0x3f) == 0) {
            *(undefined1 *)(param_8 + uVar7) = 3;
          }
          else if ((uVar9 & 0x3f) >> 1 == 0x1f) {
            *(undefined1 *)(param_8 + uVar7) = 8;
          }
          else if ((uVar9 & 0x3f) < (uint)*(ushort *)(param_1 + 0x52)) {
            *(undefined1 *)(param_8 + uVar7) = 0;
          }
          else {
            *(undefined1 *)(param_8 + uVar7) = 2;
          }
        }
        return 0;
      }
    } while( true );
  }
  local_40 = 0;
  uVar10 = 0;
  local_4c = 8;
  local_58 = (*(byte *)(param_1 + 2) & 7) << 0xc;
  if (param_9 != 0) {
    local_4c = 0xc;
  }
  if (*(char *)(param_1 + 0x1f) != '\0') {
    local_4c = local_4c | 0x2000;
  }
  if (((param_6 == 0) || (param_7 == 0 && param_9 == 0)) && ((param_7 == 0 || (param_9 == 0)))) {
    local_4c = local_4c | 0x10;
    if (param_6 != 0) {
      local_58 = *(ushort *)(param_1 + 0xc) - 1 | local_58;
    }
    if (param_7 == 0) goto LAB_00000c8e;
    uVar6 = *(ushort *)(param_1 + 0x26) - 1;
  }
  else {
    local_4c = local_4c | 0x30;
    uVar6 = *(ushort *)(param_1 + 0xc) - 1 |
            DAT_00000ee0 + (uint)*(ushort *)(param_1 + 0x26) * 0x10000;
  }
  local_58 = uVar6 | local_58;
LAB_00000c8e:
  if (*(byte *)(param_1 + 0x15) != 0) {
    local_4c = local_4c | (uint)*(byte *)(param_1 + 0x15) << 9;
  }
  if (*(char *)(param_1 + 0x17) != '\0') {
    local_4c = local_4c | 0x40;
  }
  if (*(char *)(DAT_00000ed4 + -2) != '\0') {
    FUN_00000230(param_3);
    FUN_00002594(DAT_00000ed8,0x80,1);
    FUN_000003d4(iVar8);
  }
  do {
    local_50 = 1;
    local_44 = (uint)*(byte *)(param_1 + 0x19) | (uint)*(byte *)(param_1 + 0x1a) << 0x10;
    uVar6 = FUN_00000b72(*(undefined1 *)(param_1 + 0x18));
    local_40 = uVar6 | local_40;
    local_58 = local_58 | (uint)*(byte *)(param_1 + 0x1b) << 0x18;
    if (param_4 == 0) {
      uVar6 = (uint)*(byte *)(param_1 + 0x10);
      local_48 = param_5 - uVar10;
      if (uVar6 < local_48) {
        local_50 = local_48 / uVar6;
        uVar6 = local_50 * uVar6;
        goto LAB_00000cfc;
      }
    }
    else {
      if (*(byte *)(param_1 + 0x10) < param_4) {
        return 4;
      }
      local_48 = *(byte *)(param_1 + 0x10) - param_4;
      uVar6 = param_5 - uVar10;
      if (uVar6 < local_48) {
LAB_00000cfc:
        local_48 = uVar6;
      }
    }
    uVar6 = (param_2 << ((uint)*(byte *)(param_1 + 0x11) - (uint)*(byte *)(param_1 + 0x12) & 0xff))
            + local_2c;
    *DAT_00000ed4 = 0;
    FUN_00000644(0xcd);
    FUN_00000644((extraout_r12 & 0xff) << 8 | 0xa0);
    FUN_00000644(extraout_r12_00 & 0xff00 | 0xa0);
    if (local_50 < 2) {
      uVar7 = (uVar6 & 0xff) << 8 | 0xa0;
    }
    else {
      uVar7 = (uVar6 & 0xff) << 8 | 0xa1;
    }
    FUN_00000644(uVar7);
    FUN_00000644((uVar6 >> 8 & 0xff) << 8 | 0xa0);
    if (*(char *)(param_1 + 0x14) == '\x05') {
      FUN_00000644(extraout_r12_01 & 0xff00 | 0xa0);
    }
    FUN_00000644(0x30cd);
    FUN_00000644(0xb0);
    if (param_7 == 0 && param_9 == 0) {
      FUN_00000644(0xd0);
      if (*(char *)(param_1 + 0x30) == '\0') {
        uVar6 = 0xffffffff;
        puVar3[0x81] = 0xffffffff;
      }
      else {
        puVar3[0x81] = (uVar10 << *(sbyte *)(param_1 + 0x13)) + param_6;
        uVar6 = 0;
      }
      puVar3[0x80] = uVar6;
    }
    else if (param_6 == 0) {
      FUN_00000644(0xd0);
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
      if ((param_7 == 0) || (*(char *)(param_1 + 0x31) == '\0')) {
        uVar6 = 0xffffffff;
        puVar3[0x82] = 0xffffffff;
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
        uVar6 = uVar10 * uVar6 + param_7;
      }
      puVar3[0x83] = uVar6;
      uVar6 = local_48;
      if (1 < local_50) {
        uVar6 = (uint)*(byte *)(param_1 + 0x10);
      }
      local_44 = uVar6 * 0x1000000 - 0x1000000 | local_44;
      if (*(char *)(param_1 + 0x17) == '\0') {
        uVar4 = 0xd0;
      }
      else {
        uVar4 = 0xd2;
      }
      FUN_00000644(uVar4);
    }
    if (*(char *)(param_1 + 0x17) == '\0') {
      if ((param_6 != 0) && (param_7 != 0 || param_9 != 0)) goto LAB_00000f62;
    }
    else if ((param_6 != 0) && (param_7 != 0 || param_9 != 0)) {
      FUN_00000644(0x5cd);
      param_4 = param_4 << *(sbyte *)(param_1 + 0x13);
      FUN_00000644((param_4 & 0xff) << 8 | 0xa0);
      FUN_00000644(extraout_r12_02 | param_4 & 0xff00);
      FUN_00000644(0xe0cd);
      FUN_00000644(0xd0);
LAB_00000f62:
      if (*(char *)(param_1 + 0x30) == '\0') {
        uVar6 = 0xffffffff;
        puVar3[0x80] = 0xffffffff;
      }
      else {
        puVar3[0x80] = 0;
        uVar6 = (uVar10 << *(sbyte *)(param_1 + 0x13)) + param_6;
      }
      puVar3[0x81] = uVar6;
    }
    FUN_00000644(0xff);
    FUN_00000564(0x6f);
    if (local_50 < 2) {
      uVar7 = local_48 * 0x1000000 - 0x1000000;
      uVar6 = local_4c;
    }
    else {
      uVar7 = (uint)*(byte *)(param_1 + 0x10) * 0x1000000 - 0x1000000 | local_4c;
      uVar6 = DAT_00001348 + local_50 * 0x10000;
    }
    puVar3[1] = uVar7 | uVar6;
    if ((param_7 == 0 && param_9 == 0) || (param_6 == 0)) {
      local_44 = 0;
    }
    puVar3[3] = local_44;
    puVar3[2] = local_58;
    puVar3[0x3e] = 0x3a;
    if ((param_9 == 0) || (param_8 == 0)) {
      uVar6 = 0xffffffff;
      puVar3[0x84] = 0xffffffff;
    }
    else {
      puVar3[0x84] = 0;
      uVar6 = DAT_0000134c + uVar10;
    }
    puVar3[0x85] = uVar6;
    *puVar3 = local_40;
    FUN_00002594(param_6,*(ushort *)(param_1 + 0xc) * param_5,1);
    FUN_00002594(param_7,*(ushort *)(param_1 + 0x26) * param_5,1);
    FUN_00002594(DAT_0000134c,0x10,1);
    FUN_00002594(param_6,*(ushort *)(param_1 + 0xc) * param_5,2);
    FUN_00002594(param_7,*(ushort *)(param_1 + 0x26) * param_5,2);
    FUN_00002594(DAT_0000134c,0x10,2);
    *puVar3 = *puVar3 | 1;
    FUN_00000594(1);
    iVar8 = DAT_0000134c;
    param_4 = 0;
    local_2c = local_2c + local_50;
    uVar10 = uVar10 + local_48;
    if (param_5 <= uVar10) {
      bVar11 = param_8 == 0;
      do {
        if (bVar11) {
          return 0;
        }
        bVar11 = true;
      } while (param_9 == 0);
      for (uVar6 = 0; uVar6 < uVar10; uVar6 = uVar6 + 1) {
        uVar7 = (uint)*(ushort *)(iVar8 + uVar6 * 2);
        if ((~uVar7 & 0x3f) == 0) {
          *(undefined1 *)(param_8 + uVar6) = 3;
        }
        else if ((uVar7 & 0x3f) >> 1 == 0x1f) {
          *(undefined1 *)(param_8 + uVar6) = 8;
        }
        else if ((uVar7 & 0x3f) < (uint)*(ushort *)(param_1 + 0x52)) {
          *(undefined1 *)(param_8 + uVar6) = 0;
        }
        else {
          *(undefined1 *)(param_8 + uVar6) = 2;
        }
      }
      return 0;
    }
  } while( true );
}



/* Function: FUN_000014cc */

undefined4
FUN_000014cc(short *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  uint uVar4;
  
  uVar2 = 0;
  psVar3 = param_1;
  uVar4 = param_3;
  iVar1 = FUN_00001554();
  if (((iVar1 == 0) && (param_3 < (ushort)param_1[7])) && (*param_1 != 0)) {
    iVar1 = DAT_0000157c;
    if (param_6 != 0) {
      iVar1 = param_6;
    }
    if (param_7 == 0) {
      param_7 = DAT_00001580;
    }
    if (*(int *)(param_1 + 4) != 0x200) {
      uVar2 = FUN_00000bce(param_1,param_2,param_3,param_4,param_5,iVar1,param_7,
                           DAT_00001574 + -0x40,param_9,psVar3,param_2,uVar4);
    }
    if (param_8 != 0) {
      FUN_00000826(param_8,DAT_00001574 + -0x40,param_5);
    }
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



/* Function: FUN_0000154c */

undefined4 FUN_0000154c(void)

{
  return 0;
}



/* Function: FUN_00001554 */

undefined4 FUN_00001554(int param_1)

{
  if ((param_1 != DAT_0000157c + -0x80) && (param_1 != DAT_0000157c + -0x18)) {
    return 4;
  }
  return 0;
}



/* Function: FUN_00001584 */

bool FUN_00001584(void)

{
  return (*DAT_0000180c & 1) != 0;
}



/* Function: FUN_00001592 */

undefined4 FUN_00001592(void)

{
  int in_r3;
  int local_10;
  
  local_10 = in_r3;
  FUN_000018d8(1,&local_10);
  FUN_00001942(DAT_00001810);
  if (local_10 << 0x1e < 0) {
    if (*DAT_00001810 >> 0x16 != 0x3ff) {
      return 0;
    }
    if ((~(byte)DAT_00001810[1] & 0x3f) != 0) {
      return 0;
    }
  }
  else if ((*DAT_00001810 & 0x3fffff) >> 6 != 0xffff) {
    return 0;
  }
  return 1;
}



/* Function: FUN_000015d8 */

void FUN_000015d8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_a0 [136];
  
  iVar3 = 0;
  piVar4 = (int *)(DAT_00001810 + -8);
  (**(code **)(*piVar4 + 0x14))(auStack_a0);
  while( true ) {
    iVar1 = *piVar4;
    iVar2 = param_1 + iVar3 * 0x40;
    if (param_2 < 0x40) break;
    (**(code **)(iVar1 + 0x18))(auStack_a0,iVar2,0x40);
    iVar3 = iVar3 + 1;
    param_2 = param_2 + -0x40;
  }
  (**(code **)(iVar1 + 0x1c))(auStack_a0,iVar2,param_2);
  FUN_000049b0(param_3,auStack_a0,0x20);
  return;
}



/* Function: FUN_00001622 */

int FUN_00001622(int param_1)

{
  if (param_1 == 0) {
    FUN_00001e28(s_input_of_get_sechdr_Addr_err_00001814);
  }
  return *(int *)(param_1 + 0x30) + param_1 + 0x200;
}



/* Function: FUN_00001638 */

int FUN_00001638(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00001622();
  return *(int *)(iVar1 + 0x18) + param_1;
}



/* Function: FUN_00001646 */

int FUN_00001646(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00001622();
  return *(int *)(iVar1 + 0x28) + param_1;
}



/* Function: FUN_00001654 */

undefined8 FUN_00001654(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  undefined2 uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  
  iVar1 = FUN_00001646();
  puVar3 = (uint *)(iVar1 + 300);
  uVar6 = 0x20;
  uVar11 = (uint)param_2 & 3;
  uVar12 = uVar11;
  if (uVar11 != 0) {
    bVar8 = *(byte *)puVar3;
    puVar4 = (uint *)(iVar1 + 0x12d);
    if (uVar11 < 3) {
      puVar4 = (uint *)(iVar1 + 0x12e);
      uVar12 = (uint)*(byte *)(iVar1 + 0x12d);
    }
    *(byte *)param_2 = bVar8;
    puVar3 = puVar4;
    if (uVar11 < 2) {
      puVar3 = (uint *)((int)puVar4 + 1);
      bVar8 = (byte)*puVar4;
    }
    puVar4 = (uint *)((int)param_2 + 1);
    if (uVar11 < 3) {
      puVar4 = (uint *)((int)param_2 + 2);
      *(byte *)((int)param_2 + 1) = (byte)uVar12;
    }
    uVar6 = uVar11 + 0x1c;
    param_2 = puVar4;
    if (uVar11 < 2) {
      param_2 = (uint *)((int)puVar4 + 1);
      *(byte *)puVar4 = bVar8;
    }
  }
  uVar11 = (uint)puVar3 & 3;
  if (uVar11 != 0) {
    uVar7 = uVar6 - 4;
    if (3 < uVar6) {
      puVar3 = (uint *)((int)puVar3 - uVar11);
      uVar12 = *puVar3;
      puVar4 = param_2;
      if (uVar11 == 2) {
        do {
          puVar2 = puVar3;
          uVar11 = uVar12 >> 0x10;
          puVar3 = puVar2 + 1;
          uVar12 = *puVar3;
          bVar15 = 3 < uVar7;
          uVar7 = uVar7 - 4;
          uVar11 = uVar11 | uVar12 << 0x10;
          param_2 = puVar4 + 1;
          *puVar4 = uVar11;
          puVar4 = param_2;
        } while (bVar15);
        puVar3 = (uint *)((int)puVar2 + 6);
      }
      else if (uVar11 < 3) {
        do {
          puVar2 = puVar3;
          uVar11 = uVar12 >> 8;
          puVar3 = puVar2 + 1;
          uVar12 = *puVar3;
          bVar15 = 3 < uVar7;
          uVar7 = uVar7 - 4;
          uVar11 = uVar11 | uVar12 << 0x18;
          param_2 = puVar4 + 1;
          *puVar4 = uVar11;
          puVar4 = param_2;
        } while (bVar15);
        puVar3 = (uint *)((int)puVar2 + 5);
      }
      else {
        do {
          puVar2 = puVar3;
          uVar11 = uVar12 >> 0x18;
          puVar3 = puVar2 + 1;
          uVar12 = *puVar3;
          bVar15 = 3 < uVar7;
          uVar7 = uVar7 - 4;
          uVar11 = uVar11 | uVar12 << 8;
          param_2 = puVar4 + 1;
          *puVar4 = uVar11;
          puVar4 = param_2;
        } while (bVar15);
        puVar3 = (uint *)((int)puVar2 + 7);
      }
    }
    bVar10 = (byte)uVar12;
    bVar8 = (byte)uVar11;
    bVar16 = (bool)((byte)(uVar7 >> 1) & 1);
    uVar7 = uVar7 << 0x1f;
    bVar15 = (int)uVar7 < 0;
    if (bVar16) {
      pbVar5 = (byte *)((int)puVar3 + 1);
      bVar8 = (byte)*puVar3;
      puVar3 = (uint *)((int)puVar3 + 2);
      bVar10 = *pbVar5;
    }
    puVar4 = puVar3;
    if (bVar15) {
      puVar4 = (uint *)((int)puVar3 + 1);
      uVar7 = (uint)(byte)*puVar3;
    }
    if (bVar16) {
      pbVar5 = (byte *)((int)param_2 + 1);
      *(byte *)param_2 = bVar8;
      param_2 = (uint *)((int)param_2 + 2);
      *pbVar5 = bVar10;
    }
    puVar3 = param_2;
    if (bVar15) {
      puVar3 = (uint *)((int)param_2 + 1);
      *(byte *)param_2 = (byte)uVar7;
    }
    return CONCAT44(puVar4,puVar3);
  }
  uVar12 = 0;
  while (uVar11 = uVar6 - 0x20, 0x1f < uVar6) {
    uVar6 = puVar3[1];
    uVar12 = puVar3[2];
    uVar7 = puVar3[3];
    *param_2 = *puVar3;
    param_2[1] = uVar6;
    param_2[2] = uVar12;
    param_2[3] = uVar7;
    uVar12 = puVar3[4];
    uVar6 = puVar3[5];
    uVar7 = puVar3[6];
    uVar13 = puVar3[7];
    puVar3 = puVar3 + 8;
    param_2[4] = uVar12;
    param_2[5] = uVar6;
    param_2[6] = uVar7;
    param_2[7] = uVar13;
    param_2 = param_2 + 8;
    uVar6 = uVar11;
  }
  if ((bool)((byte)(uVar11 >> 4) & 1)) {
    uVar12 = *puVar3;
    uVar7 = puVar3[1];
    uVar13 = puVar3[2];
    uVar14 = puVar3[3];
    puVar3 = puVar3 + 4;
    *param_2 = uVar12;
    param_2[1] = uVar7;
    param_2[2] = uVar13;
    param_2[3] = uVar14;
    param_2 = param_2 + 4;
  }
  if ((int)(uVar6 << 0x1c) < 0) {
    uVar12 = *puVar3;
    uVar7 = puVar3[1];
    puVar3 = puVar3 + 2;
    *param_2 = uVar12;
    param_2[1] = uVar7;
    param_2 = param_2 + 2;
  }
  puVar2 = param_2;
  puVar4 = puVar3;
  if ((bool)((byte)(uVar11 >> 2) & 1)) {
    puVar4 = puVar3 + 1;
    uVar12 = *puVar3;
    puVar2 = param_2 + 1;
    *param_2 = uVar12;
  }
  uVar9 = (undefined2)uVar12;
  if ((uVar11 & 3) != 0) {
    bVar16 = (bool)((byte)(uVar11 >> 1) & 1);
    uVar6 = uVar6 << 0x1f;
    bVar15 = (int)uVar6 < 0;
    puVar3 = puVar4;
    if (bVar16) {
      puVar3 = (uint *)((int)puVar4 + 2);
      uVar9 = (undefined2)*puVar4;
    }
    puVar4 = puVar3;
    if (bVar15) {
      puVar4 = (uint *)((int)puVar3 + 1);
      uVar6 = (uint)(byte)*puVar3;
    }
    puVar3 = puVar2;
    if (bVar16) {
      puVar3 = (uint *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = uVar9;
    }
    puVar2 = puVar3;
    if (bVar15) {
      puVar2 = (uint *)((int)puVar3 + 1);
      *(byte *)puVar3 = (byte)uVar6;
    }
    return CONCAT44(puVar4,puVar2);
  }
  return CONCAT44(puVar4,puVar2);
}



/* Function: FUN_0000166c */

bool FUN_0000166c(int param_1)

{
  if (param_1 != 0) {
    FUN_000018d8(2,param_1,1);
  }
  return param_1 != 0;
}



/* Function: FUN_00001682 */

undefined4 FUN_00001682(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  undefined1 auStack_154 [256];
  undefined1 auStack_54 [32];
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  byte *pbStack_28;
  
  bVar1 = *param_3;
  local_30 = param_1;
  local_2c = param_2;
  pbStack_28 = param_3;
  FUN_00004ae8(auStack_154,0x100);
  FUN_00004ae8(auStack_54,0x20);
  piVar6 = (int *)(DAT_00001810 + -8);
  pbVar5 = param_3 + 0x10c;
  if (bVar1 == 0) {
    FUN_000015d8(param_3 + 4,(*(uint *)(param_3 + 4) >> 3) + 8,auStack_54);
    iVar3 = FUN_00004954(local_2c,pbVar5,0x20);
    if ((iVar3 != 0) || (iVar3 = FUN_00004954(local_30,auStack_54,0x20), iVar3 != 0)) {
LAB_000016ec:
      pcVar2 = s_compare_hash_fail_0000184c;
      goto LAB_00001788;
    }
    iVar3 = (**(code **)(*piVar6 + 0x20))
                      (param_3 + 8,param_3 + 0xc,*(undefined4 *)(param_3 + 4),param_3 + 0x134,
                       auStack_154);
    if (((0x20 << *param_3) + 8 != iVar3) || (iVar3 = FUN_00004954(pbVar5,auStack_154), iVar3 != 0))
    {
      pcVar2 = s_content_cert_hash_verify_fail_00001894;
      goto LAB_00001788;
    }
    FUN_0000166c(&local_34);
    uVar4 = *(uint *)(param_3 + 0x130);
  }
  else {
    if (bVar1 != 1) {
      pcVar2 = s_cert_type_invalid_00001838;
      goto LAB_00001788;
    }
    FUN_000015d8(param_3 + 4,(*(uint *)(param_3 + 4) >> 3) + 8,auStack_54);
    iVar3 = FUN_00004954(local_2c,pbVar5,0x20);
    if ((iVar3 != 0) || (iVar3 = FUN_00004954(local_30,auStack_54,0x20), iVar3 != 0))
    goto LAB_000016ec;
    iVar3 = (**(code **)(*piVar6 + 0x20))
                      (param_3 + 8,param_3 + 0xc,*(undefined4 *)(param_3 + 4),param_3 + 0x154,
                       auStack_154);
    if (((0x20 << (uint)*param_3) + 8 != iVar3) ||
       (iVar3 = FUN_00004954(pbVar5,auStack_154), iVar3 != 0)) {
      pcVar2 = s_key_cert_hash_verify_fail_00001860;
      goto LAB_00001788;
    }
    FUN_0000166c(&local_34);
    uVar4 = *(uint *)(param_3 + 0x150);
  }
  if (local_34 <= uVar4) {
    return 1;
  }
  pcVar2 = s_antiroll_back_error_0000187c;
LAB_00001788:
  FUN_00001e28(pcVar2);
  return 0;
}



/* Function: FUN_000017a8 */

undefined4 FUN_000017a8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [32];
  
  uVar3 = 0;
  FUN_00004ae8(auStack_58,0x20);
  FUN_00001654(param_1,auStack_58);
  iVar1 = DAT_00001810;
  iVar2 = *(int *)(param_2 + 0x30) + param_2 + 0x200;
  *(int *)(DAT_00001810 + -4) = iVar2;
  FUN_00004ae8(auStack_38,0x20);
  if (*(int *)(iVar2 + 0x20) == 0 && *(int *)(iVar2 + 0x24) == 0) {
    FUN_00001e28(s_cert_empty_000018b4);
  }
  else {
    FUN_000015d8(param_2 + 0x200,*(undefined4 *)(param_2 + 0x30),auStack_38);
    uVar3 = FUN_00001682(auStack_58,auStack_38,*(int *)(*(int *)(iVar1 + -4) + 0x28) + param_2);
  }
  return uVar3;
}



/* Function: FUN_000018d8 */

undefined4 FUN_000018d8(uint param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = DAT_00001964;
  if (0x39 < param_1) {
    return 6;
  }
  *(undefined4 *)(DAT_00001964 + 0x48) = 0xffff;
  *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) | 2;
  *(undefined4 *)(iVar1 + 0x40) = 1;
  if (param_3 == 1) {
    uVar3 = *(uint *)(iVar1 + 0x40) | 4;
  }
  else {
    uVar3 = *(uint *)(iVar1 + 0x40) & 0xfffffffb;
  }
  *(uint *)(iVar1 + 0x40) = uVar3;
  *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) | 4;
  uVar2 = *(undefined4 *)(DAT_00001968 + param_1 * 4);
  *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) & 0xfffffffb;
  *param_2 = uVar2;
  return 0;
}



/* Function: FUN_00001942 */

undefined4 FUN_00001942(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_000018d8(uVar1,param_1 + uVar1 * 4,0);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  return 0;
}



/* Function: FUN_0000196c */

undefined4 FUN_0000196c(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_6c [4];
  ushort local_68;
  undefined2 local_66;
  short local_64;
  undefined2 local_62;
  undefined2 local_60;
  ushort local_5e;
  ushort local_5c;
  undefined2 local_5a;
  ushort local_58;
  ushort local_56;
  ushort local_54;
  ushort local_52;
  ushort local_50;
  ushort local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined4 local_3c;
  char local_38 [16];
  uint local_28;
  
  iVar10 = DAT_00001b7c;
  local_3c = 0;
  (*(code *)*DAT_00001b80)(DAT_00001b80,0x1c200);
  uVar4 = FUN_0000232c();
  FUN_00001e28(s_boot0_started____x_00001b84,uVar4);
  FUN_00002416();
  FUN_000004f6(*DAT_00001b98);
  uVar4 = FUN_00000838(0);
  puVar3 = DAT_00001b9c;
  *DAT_00001b9c = uVar4;
  FUN_0000067e();
  iVar5 = FUN_0000085a(*puVar3,&local_3c);
  if (iVar5 == 0) {
    uVar2 = CONCAT11((undefined1)local_3c,local_3c._1_1_);
    FUN_00001e28(s_boot0_nand_flash_ID___0x_0x__00001bbc);
    iVar5 = FUN_000025b4(uVar2,0);
    if (iVar5 != 0) {
      local_68 = (ushort)*(byte *)(iVar5 + 0x2a);
      local_66 = *(undefined2 *)(iVar5 + 0x14);
      local_64 = *(short *)(iVar5 + 0x18) * *(short *)(iVar5 + 0x14);
      local_62 = *(undefined2 *)(iVar5 + 0x1a);
      local_60 = *(undefined2 *)(iVar5 + 0x18);
      local_5e = (ushort)*(byte *)(iVar5 + 0x29);
      local_5c = (ushort)*(byte *)(iVar5 + 0x2b);
      local_5a = *(undefined2 *)(iVar5 + 0x16);
      local_58 = (ushort)*(byte *)(iVar5 + 0x1d);
      local_56 = (ushort)*(byte *)(iVar5 + 0x1e);
      local_54 = (ushort)*(byte *)(iVar5 + 0x1f);
      local_52 = (ushort)*(byte *)(iVar5 + 0x24);
      local_50 = (ushort)*(byte *)(iVar5 + 0x23);
      local_4e = (ushort)*(byte *)(iVar5 + 0x25);
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_4a = 0;
      local_46 = 0;
      local_42 = 0;
      local_40 = *(undefined2 *)(iVar5 + 0x32);
      iVar6 = FUN_00000ab4(*puVar3,auStack_6c,&local_48,0);
      if (iVar6 == 0) {
        iVar6 = 0;
        uVar12 = 2;
        iVar13 = (uint)*(ushort *)(iVar5 + 0x14) * (uint)*(ushort *)(iVar5 + 0x18);
        uVar7 = (uint)*(ushort *)(iVar5 + 0x1a) * iVar13;
        local_28 = (DAT_00001c34 + uVar7) / uVar7 + 2;
        do {
          if (local_28 <= uVar12) {
            FUN_00001e28(s_load_boot1_suc_00001ca4);
            iVar5 = FUN_00001584();
            if ((iVar5 != 0) && (iVar5 = FUN_00001592(), iVar5 != 0)) {
              uVar4 = FUN_0000232c();
              FUN_00001e28(s_start_verify_boot1___x_00001cb4,uVar4);
              iVar10 = FUN_000017a8(&DAT_00006200,iVar10);
              if (iVar10 == 0) {
                uVar4 = FUN_0000232c();
                FUN_00001e28(s_verify_boot1_fail___x_00001cf8,uVar4);
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while( true );
              }
              uVar4 = FUN_0000232c();
              FUN_00001e28(s_verify_boot1_suc___x_00001ccc,uVar4);
            }
            uVar4 = FUN_0000232c();
            FUN_00001e28(s_run_boot1__x_00001ce4,uVar4);
            FUN_00000068(DAT_00001cf4);
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          for (uVar7 = 0; uVar7 < *(ushort *)(iVar5 + 0x1a); uVar7 = uVar7 + 1) {
            iVar8 = FUN_000014cc(*puVar3,uVar12,uVar7,0,*(undefined2 *)(iVar5 + 0x18),iVar10 + iVar6
                                 ,0,local_38,1);
            if (iVar8 != 0) {
              pcVar9 = s_read_boot1_block__d_page__d_fail_00001c38;
LAB_00001afe:
              FUN_00001e28(pcVar9,uVar12,uVar7);
              return 0;
            }
            for (uVar11 = 0; uVar11 < *(ushort *)(iVar5 + 0x18); uVar11 = uVar11 + 1) {
              cVar1 = local_38[uVar11];
              if ((cVar1 != '\0') && (cVar1 != '\x02')) {
                pcVar9 = s_read_boot1_block__d_page__d_sect_00001c68;
                goto LAB_00001afe;
              }
            }
            iVar6 = iVar6 + iVar13;
          }
          uVar12 = uVar12 + 1;
        } while( true );
      }
      FUN_00001e28(s_boot0_nand_set_param_fail__00001bdc);
      uVar4 = *puVar3;
      goto LAB_00001a8c;
    }
    FUN_00001e28(s_fdl2_not_fand_NandFlash_ID_in_Na_00001bf8,local_3c & 0xff,local_3c._1_1_);
  }
  else {
    FUN_00001e28(s_boot0_read_Nand_ID_fail__00001ba0);
  }
  uVar4 = *puVar3;
LAB_00001a8c:
  FUN_0000154c(uVar4);
  return 0;
}



/* Function: FUN_00001dc2 */

undefined4 FUN_00001dc2(int param_1,undefined4 param_2)

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
  return 0;
}



/* Function: FUN_00001dde */

undefined4 FUN_00001dde(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(*(int *)param_1[8] + 8) << 0x10 < 0) {
      (*(code *)*param_1)();
      return 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10000);
  return 0xffffffff;
}



/* Function: FUN_00001e0a */

void FUN_00001e0a(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  while (uVar1 < param_2) {
    FUN_00001dc2(DAT_00001e5c,*param_1);
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* Function: FUN_00001e28 */

undefined4 FUN_00001e28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_110 [252];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_00004920(auStack_110,0xfa,param_1,&uStack_c);
  if (0 < iVar1) {
    auStack_110[iVar1] = 0;
    FUN_00001e0a(auStack_110);
  }
  return 0;
}



/* Function: FUN_00001e60 */

void FUN_00001e60(void)

{
  int iVar1;
  uint uVar2;
  
  FUN_00001fe8();
  uVar2 = (DAT_00001ec0 + ((uint)DAT_00001ebc[1] >> 1)) / (uint)DAT_00001ebc[1];
  iVar1 = *DAT_00001ebc;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *DAT_00001ec4 = *DAT_00001ec4 | 0x6000;
  *(uint *)(iVar1 + 0x24) = uVar2 & 0xffff;
  *(uint *)(iVar1 + 0x28) = uVar2 >> 0x10;
  *(undefined4 *)(iVar1 + 0x18) = 0x1c;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  FUN_00002318();
  FUN_00002148();
  FUN_000022ae();
  FUN_0000235e();
  iVar1 = DAT_00002504;
  uVar2 = FUN_00002246(DAT_00002504);
  FUN_0000226c(iVar1,uVar2 | 4);
  iVar1 = DAT_00002504 + 8;
  uVar2 = FUN_00002246(iVar1);
  FUN_0000226c(iVar1,uVar2 | 4);
  return;
}



/* Function: FUN_00001eac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001eac(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00001e60();
  iVar1 = _DAT_000031cc;
  *(undefined4 *)(_DAT_000031cc + 0x130) = 0;
  FUN_000034f8(s___DDR_init_start_000031ce + 2);
  iVar4 = DAT_000031a4;
  iVar5 = *(int *)(DAT_000031a4 + 0x24);
  FUN_000034f8(s_sdram_clk_init_begin_000031e0);
  FUN_00003150(iVar5);
  FUN_0000288a(0xf);
  iVar3 = FUN_00002a6a(iVar5);
  if (iVar3 != 0) {
    FUN_000034f8(&DAT_000031f8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*(int *)(iVar4 + 0x24) == iVar5) {
    FUN_00003ba6();
  }
  iVar4 = FUN_00002b46(8);
  if (iVar4 != 0) {
    FUN_000034f8(s_error__4_00003204);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  FUN_000034f8(s_dmc_dll_init_end_00003210);
  iVar4 = FUN_00003998(iVar5);
  if (iVar4 != 0) {
    FUN_000034f8(s_error__5_00003224);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  FUN_000034f8(s_lpddr_powerup_init_end_00003230);
  FUN_00002d58(iVar5);
  FUN_000034f8(s_dmc_init_post_setting_end_00003248);
  FUN_00002c0a();
  FUN_000034f8(s_qos_init_end_00003264);
  uVar2 = DAT_00003274;
  iVar4 = FUN_00002246(DAT_00003274);
  if ((((-1 < iVar4 << 0x13) || (iVar4 = FUN_00002246(uVar2), iVar4 << 0x18 < 0)) &&
      (iVar4 = FUN_00002246(DAT_00003278), -1 < iVar4 << 0x1c)) &&
     (iVar4 = FUN_000044da(iVar5), iVar4 != 0)) {
    FUN_000034f8(s_error__6_0000327c);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  _DAT_30000100 = _DAT_30000100 | 0x1000;
  *(undefined4 *)(_DAT_00003288 + 0x230) = 0x400;
  *(undefined4 *)(iVar1 + 0x130) = 1;
  *(uint *)(iVar1 + 0x250) = *(uint *)(iVar1 + 0x250) | 1;
  FUN_000034f8(s___DDR_init_OK_00003289 + 3);
  return 0;
}



/* Function: FUN_00001ec8 */

void FUN_00001ec8(void)

{
  int iVar1;
  
  *(uint *)(DAT_00002110 + 0x14) = *(uint *)(DAT_00002110 + 0x14) | 1;
  iVar1 = DAT_00002114;
  *(uint *)(DAT_00002114 + 0x9c) = *(uint *)(DAT_00002114 + 0x9c) & 0xfffffcff;
  *(uint *)(iVar1 + 0x9c) = *(uint *)(iVar1 + 0x9c) | 0x100;
  *(uint *)(iVar1 + 0xa0) = *(uint *)(iVar1 + 0xa0) & 0xfffffcff;
  *(uint *)(iVar1 + 0xa0) = *(uint *)(iVar1 + 0xa0) | 0x100;
  return;
}



/* Function: FUN_00001f06 */

void FUN_00001f06(void)

{
  int iVar1;
  
  iVar1 = DAT_00002114;
  *(uint *)(DAT_00002114 + 0x80) = *(uint *)(DAT_00002114 + 0x80) | 0x33;
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



/* Function: FUN_00001f8e */

undefined4 FUN_00001f8e(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_0000211c;
  uVar1 = DAT_00002118;
  *(uint *)(DAT_0000211c + 0x300) = *(uint *)(DAT_0000211c + 0x300) | 3;
  FUN_00002024();
  FUN_00002034(uVar1);
  FUN_000020a2(uVar1);
  *(undefined4 *)(DAT_00002120 + 0x54) = 3;
  FUN_00002024();
  *(uint *)(DAT_00002124 + 0x20) = *(uint *)(DAT_00002124 + 0x20) | 3;
  *(uint *)(iVar2 + 0x220) = *(uint *)(iVar2 + 0x220) | 3;
  *(uint *)(iVar2 + 0x2f8) = *(uint *)(iVar2 + 0x2f8) | 1;
  return 0;
}



/* Function: FUN_00001fe8 */

void FUN_00001fe8(void)

{
  *(uint *)(DAT_0000212c + 0xb0) = *(uint *)(DAT_0000212c + 0xb0) | 0x2800;
  *(uint *)(DAT_00002124 + 0x20) = *(uint *)(DAT_00002124 + 0x20) & 0xfffffffc;
  *(uint *)(DAT_0000211c + 0x300) = *(uint *)(DAT_0000211c + 0x300) & 0xfffffffc;
  FUN_00001ec8();
  FUN_00001f06();
  FUN_00001f8e();
  *(undefined4 *)(DAT_00002128 + 4) = 0x30;
  return;
}



/* Function: FUN_00002024 */

void FUN_00002024(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x100);
  return;
}



/* Function: FUN_00002034 */

undefined4 FUN_00002034(uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_1 / DAT_00002134;
  bVar2 = param_1 != DAT_00002134 * uVar1;
  *(uint *)(DAT_00002120 + 0x38) =
       (bVar2 + uVar1) - 1 |
       DAT_00002138 + (bVar2 + uVar1) * 0x10000 |
       (bVar2 + uVar1) * 0x100 - 0x100 | *(uint *)(DAT_00002120 + 0x38) & DAT_00002130;
  *(uint *)(DAT_0000211c + 0x270) = *(uint *)(DAT_0000211c + 0x270) | 3;
  return 0;
}



/* Function: FUN_000020a2 */

undefined4 FUN_000020a2(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  param_1 = param_1 / DAT_00002140;
  puVar3 = DAT_00002144 + 1;
  for (puVar1 = DAT_0000213c; *puVar1 < param_1 * 1000000; puVar1 = puVar1 + 2) {
  }
  *DAT_00002144 = *DAT_00002144 & 0xffffff3f | 5 | ((byte)puVar1[1] & 3) << 6;
  *puVar3 = ((param_1 % 0x1a) * 0x800000) / 0x1a & 0x7fffff | (param_1 / 0x1a & 0x7f) << 0x17 |
            *puVar3 & 0xc0000000;
  uVar2 = 0;
  do {
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xc80);
  return 0;
}



/* Function: FUN_00002148 */

void FUN_00002148(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_00002220;
  *DAT_00002220 = *DAT_00002220 & 0xff000000;
  *puVar1 = *puVar1 | DAT_00002224;
  puVar1[0x1c] = 0x2222;
  puVar1[0x1d] = 0x101;
  puVar1[6] = puVar1[6] & 0xff000000;
  puVar1[6] = puVar1[6] | DAT_00002228;
  puVar1[10] = puVar1[10] & 0xff000000;
  puVar1[10] = puVar1[10] | DAT_00002228 + 0xfe;
  puVar1[0xd] = puVar1[0xd] & 0xff000000;
  puVar1[0xd] = puVar1[0xd] | DAT_0000222c;
  puVar1[0xe] = puVar1[0xe] & 0xff000000;
  puVar1[0xe] = puVar1[0xe] | DAT_0000222c + 0xff;
  puVar1[0xf] = puVar1[0xf] & 0xff000000;
  puVar1[0xf] = puVar1[0xf] | DAT_0000222c - 0xff;
  puVar1[0x11] = puVar1[0x11] & 0xff000000;
  puVar1[0x11] = puVar1[0x11] | DAT_00002228 - 1;
  puVar1[0x17] = puVar1[0x17] & 0xff000000;
  uVar2 = DAT_00002228 - 5;
  puVar1[0x17] = puVar1[0x17] | uVar2;
  puVar1[0x1e] = 0x8080808;
  puVar1[0x1f] = DAT_00002230;
  puVar1[0x5f] = uVar2 * 8;
  puVar1[0x60] = 0x800;
  puVar1[0xce] = 0;
  puVar1[0xcf] = 0x7f;
  puVar1[0xd0] = 1;
  puVar1[0xd1] = uVar2;
  puVar1[0xd7] = puVar1[0xd7] & 0xf | 0x10;
  return;
}



/* Function: FUN_00002246 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00002246(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = _DAT_000022d4;
  *(undefined4 *)(_DAT_000022d4 + 0x28) = param_1;
  iVar2 = FUN_0000232c();
  iVar3 = iVar2;
  do {
    uVar4 = *(uint *)(iVar1 + 0x2c);
    if (3 < (uint)(iVar3 - iVar2)) {
      FUN_00001e28(s___adi_reg_read_timeout__000022d6 + 2);
    }
    iVar3 = FUN_0000232c();
  } while ((int)uVar4 < 0);
  return uVar4 & 0xffff;
}



/* Function: FUN_0000226c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000226c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 1000;
  iVar2 = FUN_0000232c();
  iVar1 = _DAT_000022d4;
  iVar3 = iVar2;
  do {
    if (-1 < *(int *)(iVar1 + 0x30) << 0x14) {
      if (iVar4 == 0) {
        return 0xffffffff;
      }
      *param_1 = param_2;
      return 0;
    }
    if (3 < (uint)(iVar3 - iVar2)) {
      FUN_00001e28(s_adi_reg_write_timeout__000022f0);
    }
    iVar3 = FUN_0000232c();
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0xffffffff;
}



/* Function: FUN_000022ae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000022ae(void)

{
  int iVar1;
  
  *DAT_00002308 = 0x10000;
  iVar1 = _DAT_000022d4;
  *(undefined4 *)(_DAT_000022d4 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 0x80000000;
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xbfffffff;
  return;
}



/* Function: FUN_00002318 */

void FUN_00002318(void)

{
  uint *puVar1;
  
  puVar1 = DAT_000024fc;
  *DAT_000024fc = *DAT_000024fc | 0x400;
  puVar1[4] = puVar1[4] | 8;
  return;
}



/* Function: FUN_0000232c */

undefined4 FUN_0000232c(void)

{
  return *(undefined4 *)(DAT_00002500 + 0xc);
}



/* Function: FUN_0000235e */

void FUN_0000235e(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = DAT_00002508;
  uVar2 = FUN_00002246(DAT_00002508);
  FUN_0000226c(uVar1,uVar2 & 0xfffffeff);
  uVar2 = FUN_00002246(uVar1);
  FUN_0000226c(uVar1,uVar2 & 0xfffffffe);
  return;
}



/* Function: FUN_00002386 */

void FUN_00002386(int param_1)

{
  do {
  } while (*(uint *)(DAT_00002500 + 0xc) < (uint)(*(int *)(DAT_00002500 + 0xc) + param_1));
  return;
}



/* Function: FUN_000023b0 */

void FUN_000023b0(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_00002386(0x14);
  puVar3 = DAT_00002510;
  iVar2 = DAT_0000250c;
  *DAT_00002510 = *(undefined4 *)(DAT_0000250c + 8);
  puVar3[1] = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(DAT_0000250c + 0x10) = 0xfff;
  puVar1 = DAT_000024fc;
  *DAT_000024fc = *DAT_000024fc & 0xfffffeff;
  puVar1[4] = puVar1[4] & 0xfffffffd;
  return;
}



/* Function: FUN_000023ca */

undefined4 FUN_000023ca(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 2;
  FUN_000024a0();
  FUN_0000244a();
  FUN_000023b0();
  if ((*DAT_00002510 & 0xf) != 0) {
    uVar1 = 0;
    do {
      if ((1 << (uVar1 & 0xff) & *DAT_00002510 & 0xf) != 0) {
        uVar2 = *(uint *)(DAT_00002510 + 4) >> ((uVar1 & 0x1f) << 3) & 0x77;
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



/* Function: FUN_00002416 */

void FUN_00002416(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_000023ca();
  FUN_00001e28(s_boot0_UART_JTAG_mode____d_00002514,iVar2);
  iVar1 = DAT_00002530;
  if (iVar2 != 2) {
    *(uint *)(DAT_00002530 + 0x18) = *(uint *)(DAT_00002530 + 0x18) | 0x40000000;
    if (iVar2 == 1) {
      *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x80000000;
      *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x20000000;
    }
  }
  return;
}



/* Function: FUN_0000244a */

void FUN_0000244a(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_000024fc;
  uVar2 = 0;
  *DAT_000024fc = *DAT_000024fc | 0x100;
  puVar1[4] = puVar1[4] | 2;
  puVar1[2] = puVar1[2] | 0x100;
  do {
    uVar2 = uVar2 + 1;
  } while (uVar2 < 100);
  puVar1[2] = puVar1[2] & 0xfffffeff;
  puVar1 = DAT_0000250c;
  DAT_0000250c[4] = 0xfff;
  puVar1[1] = 0xf;
  puVar1[6] = 0xffff;
  puVar1[10] = 0;
  puVar1[7] = 0xf;
  *puVar1 = 0;
  uVar2 = DAT_00002534;
  *puVar1 = *puVar1 | DAT_00002534;
  *puVar1 = *puVar1 | uVar2 + 1;
  return;
}



/* Function: FUN_000024a0 */

void FUN_000024a0(void)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  bool bVar5;
  
  puVar3 = DAT_000024fc;
  *DAT_000024fc = *DAT_000024fc | 0x100000;
  puVar3[0x2c] = puVar3[0x2c] | 0x1000;
  puVar3[2] = puVar3[2] | 0x200000;
  iVar2 = 0x32;
  do {
    bVar5 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar5);
  puVar3[2] = puVar3[2] & 0xffdfffff;
  puVar4 = DAT_00002538 + 1;
  puVar3 = DAT_00002538;
  do {
    *puVar3 = *puVar3 & 0xffffffbf;
    *puVar3 = *puVar3 | 0x80;
    puVar1 = DAT_00002538;
    puVar3 = puVar3 + 1;
  } while (puVar3 <= puVar4);
  DAT_00002538[-5] = DAT_00002538[-5] & 0xffffffbf;
  puVar1[-4] = puVar1[-4] & 0xffffffbf;
  return;
}



/* Function: FUN_00002594 */

undefined4 FUN_00002594(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (param_3 < 3)) {
    if (param_2 < 0x100001) {
      FUN_00005a50();
      return param_1;
    }
    uVar1 = FUN_00005b78();
    return uVar1;
  }
  return param_1;
}



/* Function: FUN_000025b4 */

int FUN_000025b4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = 0;
  while( true ) {
    piVar3 = (int *)(DAT_000025e8 + iVar1 * 0x38);
    iVar2 = *piVar3;
    iVar4 = piVar3[1];
    if (iVar2 == 0 && iVar4 == 0) {
      return 0;
    }
    if (iVar2 == param_1 && iVar4 == param_2) break;
    iVar1 = iVar1 + 1;
  }
  return DAT_000025e8 + iVar1 * 0x38;
}



/* Function: FUN_000025ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000025ec(void)

{
  _DAT_30000100 = _DAT_30000100 & 0xfffeffff;
  return;
}



/* Function: FUN_00002610 */

undefined4 FUN_00002610(void)

{
  return *(undefined4 *)(DAT_00002a04 + -0x28);
}



/* Function: FUN_0000261e */

undefined4 FUN_0000261e(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0;
  uVar1 = *(uint *)(DAT_00002a04 + -0x20);
  if (*(int *)(DAT_00002a04 + 8) != 1) {
    if (*(int *)(DAT_00002a04 + 8) != 2) {
      return 0xffffffff;
    }
    bVar3 = CARRY4(uVar1,*(uint *)(DAT_00002a04 + -4));
    uVar1 = uVar1 + *(uint *)(DAT_00002a04 + -4);
    uVar2 = (uint)bVar3;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return 0;
}



/* Function: FUN_00002648 */

undefined4 FUN_00002648(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = DAT_00002a04 + -0x38;
  }
  else {
    if (param_1 != 1) {
      return 0xffffffff;
    }
    iVar1 = DAT_00002a04 + -0x1c;
  }
  *param_2 = *(undefined4 *)(iVar1 + 0x18);
  return 0;
}



/* Function: FUN_00002666 */

int FUN_00002666(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_00002a04 + 0x10) + 0x10);
  return ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1d)) >> 3) <<
         *(sbyte *)(*(int *)(DAT_00002a04 + 0x10) + 0xc);
}



/* Function: FUN_0000267a */

int FUN_0000267a(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00002a04 + 0x10);
  return ((int)(*(int *)(iVar1 + 0x10) + ((uint)(*(int *)(iVar1 + 0x10) >> 0x1f) >> 0x1d)) >> 3) *
         (*(int *)(iVar1 + 4) << *(sbyte *)(iVar1 + 0xc));
}



/* Function: FUN_00002692 */

int FUN_00002692(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00002a04 + 0x14);
  return ((int)(*(int *)(iVar1 + 0x10) + ((uint)(*(int *)(iVar1 + 0x10) >> 0x1f) >> 0x1d)) >> 3) *
         (*(int *)(iVar1 + 4) << *(sbyte *)(iVar1 + 0xc));
}



/* Function: FUN_000026aa */

int FUN_000026aa(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_00002a04 + 0x10) + 0x10);
  return (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1d)) >> 3;
}



/* Function: FUN_000026ba */

undefined8 FUN_000026ba(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_r12;
  uint *local_28;
  uint uStack_24;
  uint local_20;
  
  local_28 = param_2;
  uStack_24 = param_3;
  local_20 = param_4;
  uVar2 = FUN_00002666();
  uVar3 = FUN_0000267a();
  FUN_000026aa();
  iVar1 = DAT_00002a04;
  if (*(uint **)(DAT_00002a04 + -0x20) < param_1) {
    uVar3 = FUN_00002692();
  }
  iVar4 = FUN_0000261e(&local_28);
  if (iVar4 == 0) {
    iVar4 = FUN_00002648(0,&local_20);
    if (iVar4 == 0) {
      uVar6 = (int)(*(int *)(iVar1 + -0x28) + ((uint)(*(int *)(iVar1 + -0x28) >> 0x1f) >> 0x1d)) >>
              3;
      if (param_1 == (uint *)(uVar6 * ((uint)param_1 / uVar6))) {
        if (uStack_24 == 0 && (param_1 <= local_28) <= uStack_24) {
          uVar5 = 0xfffffffc;
        }
        else {
          *param_2 = (uint)param_1 / local_20;
          uVar6 = (int)param_1 - local_20 * ((uint)param_1 / local_20);
          uVar7 = uVar6 / uVar3;
          param_2[2] = uVar7;
          uVar6 = uVar6 - uVar3 * uVar7;
          uVar3 = uVar6 / uVar2;
          param_2[1] = uVar3;
          param_2[3] = (uVar6 - uVar2 * uVar3) / extraout_r12;
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0xfffffffd;
      }
    }
    else {
      uVar5 = 0xfffffffe;
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  return CONCAT44(local_28,uVar5);
}



/* Function: FUN_0000277c */

void FUN_0000277c(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_1c;
  
  FUN_000034f8(s_DDR_dpll_clk_get_begin_00002a08);
  uVar2 = FUN_000030e8();
  if (uVar2 != param_1) {
    FUN_000034f8(s_DDR_dpll_clk_get_end_00002a24);
    iVar1 = DAT_00002a3c;
    uVar3 = *(undefined4 *)(DAT_00002a3c + 0x1b4);
    if (param_1 - 0x4d9 < 0x168) {
      uVar4 = 2;
    }
    else if (param_1 < 0x3a9) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    uVar4 = FUN_000032a4(*(undefined4 *)(DAT_00002a3c + 0x1b4),0xf,2,uVar4);
    if (param_1 % 0x1a == 0) {
      uVar4 = FUN_000032a4(uVar4,0x11,0xb,param_1 / 0x1a,uVar4);
      uVar6 = FUN_000032a4(uVar4,9,1,0,uVar4);
      uVar5 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),uVar3);
      uVar4 = (undefined4)uVar6;
    }
    else {
      uVar4 = FUN_000032a4(uVar4,9,1,1,uVar4);
      uVar4 = FUN_000032a4(uVar4,0xb,1,1,uVar4);
      uVar3 = FUN_000032a4(uVar3,0x17,7,param_1 / 0x1a);
      uVar5 = FUN_000032a4(uVar3,0,0x17,((param_1 % 0x1a) * 0x800000) / 0x1a);
    }
    local_1c = (undefined4)uVar5;
    *(undefined4 *)(iVar1 + 0x1b4) = uVar4;
    *(undefined4 *)(iVar1 + 0x1b4) = local_1c;
    FUN_000032d4(200,(int)((ulonglong)uVar5 >> 0x20),uVar4,local_1c);
    return;
  }
  return;
}



/* Function: FUN_0000288a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000288a(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = FUN_000032a4(_DAT_30000008,0x10,1,0);
  _DAT_30000008 = FUN_000032a4(uVar1,10,5,param_1);
  FUN_000032d4(2);
  iVar5 = 0;
  uVar1 = FUN_000032a4(_DAT_30000008,0xf,1,0);
  iVar2 = FUN_000032a4(uVar1,0,5,0);
  _DAT_30000008 = iVar2;
  while ((int)(_DAT_30000008 << 0xe) < 0) {
    iVar5 = iVar5 + 1;
    iVar2 = FUN_000032a4(iVar2,0,5,iVar5);
    _DAT_30000008 = iVar2;
    FUN_000032d4(1);
  }
  iVar3 = 0x1f;
  uVar1 = FUN_000032a4(_DAT_30000008,0xf,1,0);
  iVar2 = FUN_000032a4(uVar1,0,5,0x1f);
  _DAT_30000008 = iVar2;
  while (-1 < (int)(_DAT_30000008 << 0xe)) {
    iVar3 = iVar3 + -1;
    iVar2 = FUN_000032a4(iVar2,0,5,iVar3);
    _DAT_30000008 = iVar2;
    FUN_000032d4(1);
  }
  _DAT_30000008 = FUN_000032a4(_DAT_30000008,0,5,(uint)(iVar5 + iVar3) >> 1);
  iVar5 = 0;
  uVar1 = FUN_000032a4(_DAT_30000008,0xf,1);
  iVar2 = FUN_000032a4(uVar1,5,5,0);
  _DAT_30000008 = iVar2;
  while (-1 < (int)(_DAT_30000008 << 0xe)) {
    iVar5 = iVar5 + 1;
    iVar2 = FUN_000032a4(iVar2,5,5,iVar5);
    _DAT_30000008 = iVar2;
    FUN_000032d4(1);
  }
  iVar3 = 0x1f;
  uVar1 = FUN_000032a4(_DAT_30000008,0xf,1);
  iVar2 = FUN_000032a4(uVar1,5,5,0x1f);
  _DAT_30000008 = iVar2;
  while ((int)(_DAT_30000008 << 0xe) < 0) {
    iVar3 = iVar3 + -1;
    iVar2 = FUN_000032a4(iVar2,5,5,iVar3);
    _DAT_30000008 = iVar2;
    FUN_000032d4(1);
  }
  _DAT_30000008 = FUN_000032a4(_DAT_30000008,5,5,(uint)(iVar5 + iVar3) >> 1);
  _DAT_30000008 = FUN_000032a4(_DAT_30000008,0x10,1);
  uVar6 = _DAT_30000008 & 0x1f;
  uVar4 = (_DAT_30000008 & 0x3ff) >> 5;
  uVar1 = FUN_000032a4(_DAT_30000390,0x15,1);
  uVar1 = FUN_000032a4(uVar1,0,5,uVar4);
  _DAT_30000390 = FUN_000032a4(uVar1,8,5,uVar6);
  uVar1 = FUN_000032a4(_DAT_30000490,0x15,1);
  uVar1 = FUN_000032a4(uVar1,0,5,uVar4);
  _DAT_30000490 = FUN_000032a4(uVar1,8,5,uVar6);
  return;
}



/* Function: FUN_00002a6a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002a6a(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000032a4(_DAT_30000004,0,3,1);
  uVar1 = FUN_000032a4(uVar1,0x10,3,1);
  _DAT_30000004 = FUN_000032a4(uVar1,0x14,6,0);
  _DAT_3000000c = FUN_000032a4(_DAT_3000000c,0,0xf);
  _DAT_30000100 = FUN_000032a4(_DAT_30000100,0x11,1);
  FUN_0000361e(*DAT_00002eb0,DAT_00002eb0 + 7);
  if (DAT_00002eb0[7] != param_1) {
    if (DAT_00002eb0[8] == param_1) {
      uVar1 = 1;
      goto LAB_00002ae4;
    }
    if (DAT_00002eb0[9] == param_1) {
      uVar1 = 2;
      goto LAB_00002ae4;
    }
  }
  uVar1 = 0;
LAB_00002ae4:
  _DAT_3000012c = FUN_000032a4(_DAT_3000012c,4,2,uVar1);
  uVar1 = FUN_000032a4(_DAT_30000000,0,3,1);
  uVar1 = FUN_000032a4(uVar1,0xe,2,1);
  _DAT_30000000 = FUN_000032a4(uVar1,4,3,2);
  uVar1 = FUN_000032a4(_DAT_30000100,8,1,0);
  uVar1 = FUN_000032a4(uVar1,0x11,1);
  uVar1 = FUN_000032a4(uVar1,7,1,0);
  _DAT_30000100 = FUN_000032a4(uVar1,4,3,2);
  return 0;
}



/* Function: FUN_00002b46 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002b46(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_000036bc(*DAT_00002eb0);
  do {
  } while ((_DAT_30000304 & _DAT_30000404 & _DAT_30000504 & 0x10000000) == 0);
  uVar1 = FUN_000032a4(_DAT_30000300,9,2,3);
  uVar1 = FUN_000032a4(uVar1,0xc,1);
  uVar1 = FUN_000032a4(uVar1,0xe,2,3);
  uVar1 = FUN_000032a4(uVar1,0x1b,1);
  _DAT_30000300 = FUN_000032a4(uVar1,0,7,param_1);
  _DAT_30000400 = _DAT_30000300;
  _DAT_30000500 = _DAT_30000300;
  return 0;
}



/* Function: FUN_00002bb2 */

void FUN_00002bb2(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000032a4(*param_1,0,4,param_2);
  uVar1 = FUN_000032a4(uVar1,0x10,8,param_3);
  uVar1 = FUN_000032a4(uVar1,0x18,8,param_4);
  *param_1 = uVar1;
  return;
}



/* Function: FUN_00002bde */

void FUN_00002bde(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000032a4(*param_1,0,4,param_2);
  uVar1 = FUN_000032a4(uVar1,0x10,10,param_3);
  uVar1 = FUN_000032a4(uVar1,0x1f,1,param_4);
  *param_1 = uVar1;
  return;
}



/* Function: FUN_00002c0a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002c0a(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = DAT_00002eb0 + 0x28;
  do {
    iVar3 = iVar4 * 3 + iVar5;
    FUN_00002bb2(iVar4 * 4 + 0x30000020,*(undefined1 *)(iVar5 + iVar4 * 3),
                 *(undefined1 *)(iVar3 + 1),*(undefined1 *)(iVar3 + 2));
    iVar4 = iVar4 + 2;
  } while (iVar4 < 8);
  iVar4 = 1;
  do {
    iVar3 = iVar4 * 3 + iVar5;
    FUN_00002bde(iVar4 * 4 + 0x30000020,*(undefined1 *)(iVar5 + iVar4 * 3),
                 *(undefined1 *)(iVar3 + 1),*(undefined1 *)(iVar3 + 2));
    iVar4 = iVar4 + 2;
  } while (iVar4 < 8);
  uVar2 = FUN_000032a4(_DAT_30000000,0x10,0xb,400);
  uVar2 = FUN_000032a4(uVar2,0x1b,1,0);
  _DAT_30000000 = FUN_000032a4(uVar2,9,2,3);
  _DAT_30000128 = DAT_00002eb4;
  *(undefined4 *)(DAT_00002ebc + 0x2ec) = DAT_00002eb8;
  iVar4 = DAT_00002ec4;
  *(undefined4 *)(DAT_00002ec4 + 0xa4) = DAT_00002ec0;
  *(undefined4 *)(iVar4 + 0xb8) = DAT_00002ec8;
  *(undefined4 *)(iVar4 + 0xbc) = DAT_00002ecc;
  iVar4 = DAT_00002ed0;
  uVar2 = FUN_000032a4(*(undefined4 *)(DAT_00002ed0 + 0x58),0,0x18,DAT_00002ed4);
  *(undefined4 *)(iVar4 + 0x58) = uVar2;
  iVar4 = DAT_00002ed8;
  puVar1 = (undefined4 *)(DAT_00002ed8 + 0x74);
  uVar2 = FUN_000032a4(*puVar1,0xc,4,9);
  *puVar1 = uVar2;
  uVar2 = FUN_000032a4(*(undefined4 *)(iVar4 + 0x78),0x14,4,0xc);
  uVar2 = FUN_000032a4(uVar2,0xc,4,9);
  uVar2 = FUN_000032a4(uVar2,0,4,9);
  *(undefined4 *)(iVar4 + 0x78) = uVar2;
  uVar2 = FUN_000032a4(*(undefined4 *)(iVar4 + 0x7c),0xc,4,9);
  *(undefined4 *)(iVar4 + 0x7c) = uVar2;
  uVar2 = FUN_000032a4(*(undefined4 *)(iVar4 + 0x80),0x14,4,0xc);
  uVar2 = FUN_000032a4(uVar2,0xc,4,9);
  uVar2 = FUN_000032a4(uVar2,0,4,9);
  *(undefined4 *)(iVar4 + 0x80) = uVar2;
  return;
}



/* Function: FUN_00002d0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002d0c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_000032a4(_DAT_30000124,0x10,4,0xf);
  if (param_1 == 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 5;
  }
  uVar1 = FUN_000032a4(uVar1,0,3,uVar2);
  uVar1 = FUN_000032a4(uVar1,4,4,0xf);
  uVar1 = FUN_000032a4(uVar1,8,4,0xf);
  _DAT_30000124 = FUN_000032a4(uVar1,0x11,2,3);
  return 0;
}



/* Function: FUN_00002d58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002d58(void)

{
  undefined4 uVar1;
  
  _DAT_30000234 = FUN_000032a4(_DAT_30000234,0,0x10,0x400);
  _DAT_30000274 = FUN_000032a4(_DAT_30000274,0,0x10,0x600);
  _DAT_300002b4 = FUN_000032a4(_DAT_300002b4,0,0x10,0x854);
  uVar1 = FUN_000032a4(_DAT_30000124,0x10,4,0xf);
  uVar1 = FUN_000032a4(uVar1,0,3,5);
  uVar1 = FUN_000032a4(uVar1,4,4,0xf);
  _DAT_30000124 = FUN_000032a4(uVar1,8,4,0xf);
  uVar1 = FUN_000032a4(_DAT_30000114,0,0x18,0x1ff0);
  _DAT_30000114 = FUN_000032a4(uVar1,0x18,1,0);
  uVar1 = FUN_000032a4(_DAT_30000118,0x1a,2);
  _DAT_30000118 = FUN_000032a4(uVar1,0x18,1,0);
  uVar1 = FUN_000032a4(_DAT_3000010c,0xc,1);
  _DAT_3000010c = FUN_000032a4(uVar1,0xf,1,0);
  uVar1 = FUN_000032a4(_DAT_3000012c,0,4,0xf);
  uVar1 = FUN_000032a4(uVar1,0x11,1);
  _DAT_3000012c = FUN_000032a4(uVar1,0x14,0xc,0);
  _DAT_3000000c = FUN_000032a4(_DAT_3000000c,0,0xf,0x7fff);
  _DAT_30000100 = FUN_000032a4(_DAT_30000100,0x10,1);
  FUN_000032d4(1);
  _DAT_30000100 = FUN_000032a4(_DAT_30000100,0x10,1,0);
  _DAT_30000000 = FUN_000032a4(_DAT_30000000,4,6,3);
  FUN_00003410(2,1,0x23);
  _DAT_30000000 = FUN_000032a4(_DAT_30000000,8,1);
  _DAT_30000100 = FUN_000032a4(_DAT_30000100,0xc,1);
  uVar1 = DAT_00002edc;
  FUN_000032ba(DAT_00002edc,6,1);
  FUN_000032ba(uVar1,2,1,0);
  return 0;
}



/* Function: FUN_00002ef4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002ef4(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_000031a4;
  _DAT_82000020 = *(int *)(DAT_000031a4 + 8);
  _DAT_82000024 = *(uint *)(DAT_000031a4 + -0x20);
  _DAT_82000028 = *(uint *)(DAT_000031a4 + -4);
  if (_DAT_82000020 == 1) {
    *(undefined4 *)(DAT_000031a4 + -4) = 0;
    _DAT_82000028 = 0;
    _DAT_82000008 = _DAT_82000024;
    _DAT_8200000c = 0;
    _DAT_82000024 = _DAT_82000024 - 0x40000;
  }
  else if (_DAT_82000020 == 2) {
    _DAT_82000008 = _DAT_82000024 + _DAT_82000028;
    _DAT_8200000c = (uint)CARRY4(_DAT_82000024,_DAT_82000028);
    if (_DAT_8200000c == 0 || 1 - _DAT_8200000c < (uint)(_DAT_82000008 == 0)) {
      _DAT_82000028 = _DAT_82000028 - 0x40000;
    }
    else {
      _DAT_82000028 = DAT_000031a8 - _DAT_82000024;
    }
  }
  _DAT_300001b4 = _DAT_82000008;
  _DAT_300001b8 = _DAT_8200000c;
  if (*(int *)(iVar2 + 0x18) != 0) {
    puVar1 = (undefined4 *)(DAT_000031ac + 0xa4);
    uVar3 = FUN_000032a4(*puVar1,0,4,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0xc));
    *puVar1 = uVar3;
  }
  return;
}



/* Function: FUN_000030e8 */

int FUN_000030e8(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(DAT_0000329c + 0x1b4);
  uVar3 = (*(uint *)(DAT_0000329c + 0x1b4) & 0x3fffffff) >> 0x17;
  uVar2 = (uVar1 & 0xffffff) >> 0x16;
  if (uVar2 == 0) {
    param_1 = 2;
  }
  else if (uVar2 == 1) {
    param_1 = 4;
  }
  else if (uVar2 == 2) {
    param_1 = 0xd;
  }
  else if (uVar2 == 3) {
    param_1 = 0x1a;
  }
  if ((int)(uVar1 << 0xb) < 0) {
    if ((int)(uVar1 << 0xd) < 0) {
      uVar1 = param_1 * (*(uint *)(DAT_0000329c + 0x1b4) & 0x7fffff);
      return uVar3 * param_1 + (uint)(DAT_000032a0 <= (uVar1 & 0x7fffff)) + (uVar1 >> 0x17);
    }
    return uVar3 * param_1;
  }
  return (uVar1 & 0x7ff) * param_1;
}



/* Function: FUN_00003150 */

void FUN_00003150(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0000329c + 0x8c;
  iVar3 = DAT_0000329c + 0xac;
  if (param_1 == 0x215) {
    uVar1 = 0xc;
  }
  else if (param_1 == 0x180) {
    uVar1 = 0xb;
  }
  else {
    uVar1 = 9;
  }
  FUN_000032ba(iVar2,0xb,8,uVar1);
  FUN_000032ba(iVar3,0,1);
  FUN_000032ba(iVar2,0,1);
  FUN_000032ba(iVar2,0,1);
  return;
}



/* Function: FUN_000032a4 */

uint FUN_000032a4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = (1 << (param_3 & 0xff)) - 1;
  return param_1 & ~(uVar1 << (param_2 & 0xff)) | (param_4 & uVar1) << (param_2 & 0xff);
}



/* Function: FUN_000032ba */

void FUN_000032ba(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = (1 << (param_3 & 0xff)) - 1;
  *param_1 = (param_4 & uVar1) << (param_2 & 0xff) | *param_1 & ~(uVar1 << (param_2 & 0xff));
  return;
}



/* Function: FUN_000032d4 */

undefined4 FUN_000032d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  for (local_c = 0; local_c < param_1 * 2; local_c = local_c + 1) {
    local_8 = *(undefined4 *)(DAT_000035b0 + 0xc4);
  }
  return local_8;
}



/* Function: FUN_000032f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000032f6(int param_1,undefined4 param_2,byte *param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  int extraout_r12;
  
  piVar1 = DAT_000035b4;
  if ((param_1 != 0) && (param_1 != 1)) {
    return 0xffffffff;
  }
  uVar2 = DAT_000035bc;
  if (*DAT_000035b4 == 0x101) {
    uVar2 = DAT_000035b8;
  }
  _DAT_30000110 = FUN_000032a4(_DAT_30000110,0,0x18,uVar2);
  uVar2 = FUN_000032a4(_DAT_30000104,0,0x10,param_2);
  uVar2 = FUN_000032a4(uVar2,0x1f,1,0);
  if (extraout_r12 == 0) {
    uVar6 = 0;
  }
  else {
    if (extraout_r12 != 1) goto LAB_00003370;
    uVar6 = 1;
  }
  uVar2 = FUN_000032a4(uVar2,0x1c,1,uVar6);
LAB_00003370:
  _DAT_30000104 = FUN_000032a4(uVar2,0x19,1);
  do {
  } while ((_DAT_30000104 >> 0x14 & 0x7f) != 0);
  do {
    if (param_4 < 1) {
      FUN_000025ec();
      return 0xffffffff;
    }
    param_4 = param_4 + -1;
  } while (-1 < (int)(_DAT_30000108 << 0xf));
  uVar3 = (_DAT_30000108 & 0xffff) >> 8;
  if (*piVar1 == 0x101) {
    bVar4 = (byte)((uVar3 << 0x1b) >> 0x18);
    bVar5 = (byte)((uVar3 & 0x40) << 1) | (byte)(((uVar3 & 0xf) >> 3) << 6) |
            (byte)((uVar3 & 3) << 4) | (byte)(((uVar3 & 0x3f) >> 5) << 3) |
            (byte)(((_DAT_30000108 & 0xffff) >> 0xf) << 2);
  }
  else {
    bVar4 = (byte)((uVar3 << 0x1c) >> 0x18);
    bVar5 = (byte)((_DAT_30000108 & 0xffff) >> 8) & 0x80 | (byte)(((uVar3 & 0x1f) >> 4) << 6) |
            (byte)((uVar3 & 3) << 4) | (byte)(((uVar3 & 0x3f) >> 5) << 3) |
            (byte)(((uVar3 & 0x7f) >> 6) << 2) | (byte)(((uVar3 & 7) >> 2) << 1);
  }
  *param_3 = bVar5 | bVar4 >> 7;
  FUN_000025ec();
  return 0;
}



/* Function: FUN_00003410 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003410(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_000032a4(_DAT_30000108,0,8,param_3);
  _DAT_30000108 = param_3;
  if (param_1 == 0) {
    uVar1 = FUN_000032a4(_DAT_30000104,0x1f,1);
    uVar3 = 0;
  }
  else {
    if (param_1 != 1) {
      uVar3 = 1;
      uVar2 = 0x1f;
      uVar1 = _DAT_30000104;
      goto LAB_00003442;
    }
    uVar1 = FUN_000032a4(_DAT_30000104,0x1f,1,0);
    uVar3 = 1;
  }
  uVar2 = 0x1c;
LAB_00003442:
  uVar1 = FUN_000032a4(uVar1,uVar2,1,uVar3);
  uVar1 = FUN_000032a4(uVar1,0x18,1);
  _DAT_30000104 = FUN_000032a4(uVar1,0,0x10,param_2);
  return;
}



/* Function: FUN_00003480 */

undefined4 FUN_00003480(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 4) {
    if (param_2 == 2) {
      uVar1 = 2;
      goto LAB_000034ac;
    }
  }
  else if (param_1 == 6) {
    if (param_2 == 3) {
      uVar1 = 4;
      goto LAB_000034ac;
    }
  }
  else if ((param_1 == 8) && (param_2 == 4)) {
    uVar1 = 6;
LAB_000034ac:
    FUN_00003410(0,2,uVar1);
    return 0;
  }
  return 0xffffffff;
}



/* Function: FUN_000034b8 */

undefined4 FUN_000034b8(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x3c) {
    uVar1 = 4;
    goto LAB_000034ec;
  }
  if (param_1 < 0x3d) {
    if (param_1 == 0x22) {
      uVar1 = 1;
      goto LAB_000034ec;
    }
    if ((param_1 != 0x28) && (param_1 == 0x30)) {
      uVar1 = 3;
      goto LAB_000034ec;
    }
  }
  else {
    if (param_1 == 0x50) {
      uVar1 = 6;
      goto LAB_000034ec;
    }
    if (param_1 == 0x78) {
      uVar1 = 7;
      goto LAB_000034ec;
    }
  }
  uVar1 = 2;
LAB_000034ec:
  FUN_00003410(2,3,uVar1);
  return 0;
}



/* Function: FUN_000034f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000034f8(byte *param_1)

{
  uint *puVar1;
  
  puVar1 = _DAT_000035c0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    do {
    } while ((puVar1[3] & 0xff00) != 0);
    *puVar1 = (uint)*param_1;
  }
  return;
}



/* Function: FUN_00003510 */

char * FUN_00003510(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char acStack_38 [40];
  
  FUN_00004a84(acStack_38,s_p0123456789ABCDEFGHIJKLMNOPQRSTU_000035c3 + 1,0x28);
  iVar3 = 0;
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    param_1 = -param_1;
    *param_2 = '-';
    iVar3 = 1;
  }
  do {
    uVar4 = param_1 / param_3;
    param_2[iVar3] = acStack_38[param_1 - param_3 * uVar4];
    iVar3 = iVar3 + 1;
    param_1 = uVar4;
  } while (uVar4 != 0);
  param_2[iVar3] = '\0';
  uVar4 = (uint)(*param_2 == '-');
  iVar2 = iVar3 - uVar4;
  for (; (int)uVar4 <= (iVar2 + -1) / 2; uVar4 = uVar4 + 1) {
    cVar1 = param_2[uVar4];
    param_2[uVar4] = param_2[(iVar3 - uVar4) + -1];
    param_2[(iVar3 - uVar4) + -1] = cVar1;
  }
  return param_2;
}



/* Function: FUN_000035fe */

int FUN_000035fe(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (param_2 <= iVar1) {
      return -1;
    }
    if (*(int *)(param_1 + iVar1 * 0x3c) == param_3) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* Function: FUN_0000361e */

undefined4 FUN_0000361e(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r12;
  
  iVar1 = DAT_000039f0;
  uVar5 = 0xffffffff;
  if (param_1 == 0x101) {
    iVar4 = 0;
    do {
      iVar2 = FUN_000035fe(iVar1,3,*(undefined4 *)(param_2 + iVar4 * 4));
      if (iVar2 < 0) {
        return extraout_r12;
      }
      iVar3 = iVar1 + iVar2 * 0x3c;
      iVar2 = iVar4 * 0x40;
      *(undefined4 *)(iVar2 + 0x30000200) = *(undefined4 *)(iVar3 + 4);
      *(undefined4 *)(iVar2 + 0x30000204) = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(iVar2 + 0x30000208) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(iVar2 + 0x3000020c) = *(undefined4 *)(iVar3 + 0x10);
      *(undefined4 *)(iVar2 + 0x30000210) = *(undefined4 *)(iVar3 + 0x14);
      *(undefined4 *)(iVar2 + 0x30000214) = *(undefined4 *)(iVar3 + 0x18);
      *(undefined4 *)(iVar2 + 0x30000218) = *(undefined4 *)(iVar3 + 0x1c);
      *(undefined4 *)(iVar2 + 0x3000021c) = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(iVar2 + 0x30000220) = *(undefined4 *)(iVar3 + 0x24);
      *(undefined4 *)(iVar2 + 0x30000224) = *(undefined4 *)(iVar3 + 0x28);
      *(undefined4 *)(iVar2 + 0x30000228) = *(undefined4 *)(iVar3 + 0x2c);
      *(undefined4 *)(iVar2 + 0x3000022c) = *(undefined4 *)(iVar3 + 0x30);
      *(undefined4 *)(iVar2 + 0x30000230) = *(undefined4 *)(iVar3 + 0x34);
      *(undefined4 *)(&DAT_30000234 + iVar2) = *(undefined4 *)(iVar3 + 0x38);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    uVar5 = 0;
  }
  return uVar5;
}



/* Function: FUN_000036bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000036bc(void)

{
  _DAT_30000308 = *(undefined4 *)(DAT_000039f0 + -0x60);
  _DAT_30000300 = *(uint *)(DAT_000039f0 + -0x74) & 0xfefffeff | 0x2004000;
  _DAT_30000408 = *(undefined4 *)(DAT_000039f0 + -0x5c);
  _DAT_3000040c = *(undefined4 *)(DAT_000039f0 + -0x4c);
  _DAT_30000410 = *(undefined4 *)(DAT_000039f0 + -0x3c);
  _DAT_30000400 = *(uint *)(DAT_000039f0 + -0x70) & 0xfefffeff | 0x2004000;
  _DAT_30000508 = *(undefined4 *)(DAT_000039f0 + -0x58);
  _DAT_3000050c = *(undefined4 *)(DAT_000039f0 + -0x48);
  _DAT_30000510 = *(undefined4 *)(DAT_000039f0 + -0x38);
  _DAT_30000500 = *(uint *)(DAT_000039f0 + -0x6c) & 0xfefffeff | 0x2004000;
  return 0;
}



/* Function: FUN_00003794 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003794(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000032a4(_DAT_3000010c,0xc,1,0);
  _DAT_3000010c = FUN_000032a4(uVar1,0xf,1,0);
  FUN_00003410(0,10,0xff);
  FUN_000032d4(2);
  FUN_00003410(1,10,0xff);
  FUN_000032d4(2);
  return 0;
}



/* Function: FUN_00003998 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003998(int param_1)

{
  undefined4 uVar1;
  
  _DAT_3000000c = 0;
  _DAT_30000100 = FUN_000032a4(_DAT_30000100,0xe,1);
  FUN_000032d4(500);
  FUN_00003410(3,0x3f,0);
  FUN_000032d4(10);
  FUN_00003410(0,10,0xff);
  FUN_00003410(1,10,0xff);
  FUN_000032d4(500);
  _DAT_30000490 = FUN_000032a4(_DAT_30000490,0x18,2,3);
  if (param_1 == 0x215) {
    uVar1 = 6;
LAB_00003a3a:
    FUN_00003410(0,2,uVar1);
    if (param_1 == 0x215) {
      _DAT_30000108 = 0xc3;
      goto LAB_00003a5e;
    }
    if (param_1 != 0x180) {
      if (param_1 == 0x100) {
        _DAT_30000108 = 0x43;
      }
      goto LAB_00003a5e;
    }
  }
  else {
    if (param_1 != 0x180) {
      uVar1 = 2;
      goto LAB_00003a3a;
    }
    FUN_00003410(0,2,4);
  }
  _DAT_30000108 = 0x83;
LAB_00003a5e:
  _DAT_3000000c = 0x7fff;
  do {
  } while ((DAT_00003b44 >> 0x14 & 0x7f) != 0);
  _DAT_30000104 = DAT_00003b44;
  do {
  } while ((DAT_00003b44 >> 0x14 & 0x7f) != 0);
  return;
}



/* Function: FUN_00003a8a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003a8a(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  _DAT_3000010c = _DAT_3000010c & 0xffffefff;
  FUN_00003410(2,0x3f,0);
  piVar1 = DAT_00003b48;
  uVar4 = 0xffffffff;
  iVar2 = *DAT_00003b48;
  if (iVar2 == 4) {
    uVar3 = 2;
  }
  else if (iVar2 == 8) {
    uVar3 = 3;
  }
  else {
    if (iVar2 != 0x10) {
      return 0xffffffff;
    }
    uVar3 = 4;
  }
  if (DAT_00003b48[1] == 1) {
    uVar3 = uVar3 | 8;
  }
  if (DAT_00003b48[2] == 1) {
    uVar3 = uVar3 | 0x10;
  }
  iVar2 = DAT_00003b48[3];
  if (iVar2 - 3U < 5) {
    FUN_000032d4(10);
    FUN_00003410(2,1,iVar2 * 0x20 + 0xc0U & 0xff | uVar3);
    FUN_000032d4(10);
    iVar2 = FUN_00003480(piVar1[4],piVar1[5]);
    if (iVar2 == 0) {
      FUN_000032d4(10);
      iVar2 = FUN_000034b8(piVar1[6]);
      if (iVar2 == 0) {
        FUN_000032d4(10);
        FUN_000032d4(10);
        FUN_00003794();
        _DAT_3000010c = _DAT_3000010c | 0x1000;
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



/* Function: FUN_00003b4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00003b4c(void)

{
  return (*(uint *)(((_DAT_3000012c & 0x3f) >> 4) * 0x40 + 0x30000230) & 0xffff) >> 0xf;
}



/* Function: FUN_00003b66 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00003b66(void)

{
  return (*(uint *)(((_DAT_3000012c & 0x3f) >> 4) * 0x40 + 0x3000022c) & 0x1ff) >> 8;
}



/* Function: FUN_00003b80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003b80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((_DAT_3000012c & 0x3f) >> 4) * 0x40;
  uVar2 = FUN_000032a4(*(undefined4 *)(iVar1 + 0x3000022c),8,1,param_1);
  *(undefined4 *)(iVar1 + 0x3000022c) = uVar2;
  return;
}



/* Function: FUN_00003ba6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00003ba6(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r1;
  uint uVar4;
  uint extraout_r2;
  uint uVar5;
  uint local_20 [4];
  
  local_20[0] = param_1;
  local_20[1] = param_2;
  local_20[2] = param_3;
  local_20[3] = param_4;
  uVar2 = FUN_00003b66();
  FUN_00003b80(0);
  FUN_00002b46(8);
  FUN_000032d4(10);
  local_20[0] = _DAT_30000404 & 0x7f;
  local_20[1] = _DAT_30000504 & 0x7f;
  iVar3 = FUN_00003b4c(local_20[1],extraout_r1,_DAT_30000304 & 0x7f);
  iVar1 = DAT_00003ff4;
  uVar5 = extraout_r2;
  if (iVar3 == 1) {
    uVar5 = extraout_r2 >> 1;
    local_20[0] = local_20[0] >> 1;
    local_20[1] = local_20[1] >> 1;
  }
  uVar4 = 0;
  do {
    *(uint *)(iVar1 + uVar4 * 4) = local_20[uVar4] << 2;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  *DAT_00003ff8 = uVar5 << 2;
  FUN_00003b80(uVar2);
  return CONCAT44(local_20[1],local_20[0]);
}



/* Function: FUN_00003c1a */

undefined4 FUN_00003c1a(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_68;
  uint uStack_64;
  undefined4 local_5c;
  int local_58;
  uint local_54;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [36];
  
  FUN_00004a84(auStack_30,DAT_00003ffc,0x20);
  local_54 = 0x40000;
  local_5c = 0;
  FUN_0000261e(&local_68);
  if (uStack_64 == 0 && (local_54 <= local_68) <= uStack_64) {
    local_54 = local_68;
  }
  local_58 = local_68 - local_54;
  FUN_00004a84(auStack_50,auStack_30,0x20);
  iVar1 = FUN_00004758(param_1,&local_5c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: FUN_00003ca4 */

undefined4 FUN_00003ca4(void)

{
  int iVar1;
  undefined4 uVar2;
  uint local_60;
  uint uStack_5c;
  undefined4 local_54;
  int local_50;
  uint local_4c;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [32];
  
  FUN_00004a84(auStack_28,DAT_00003ffc + -0x20,0x20);
  local_4c = 0x40000;
  local_54 = 0;
  FUN_0000261e(&local_60);
  if (uStack_5c == 0 && (local_4c <= local_60) <= uStack_5c) {
    local_4c = local_60;
  }
  local_50 = local_60 - local_4c;
  FUN_00004a84(auStack_48,auStack_28,0x20);
  iVar1 = FUN_00004758(1,&local_54);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: FUN_00003cf8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003cf8(undefined4 *param_1)

{
  _DAT_30000428 = FUN_000032a4(_DAT_30000428,0,5,*param_1);
  _DAT_30000528 = FUN_000032a4(_DAT_30000528,0,5,param_1[1]);
  _DAT_30000628 = FUN_000032a4(_DAT_30000628,0,5,param_1[2]);
  _DAT_30000728 = FUN_000032a4(_DAT_30000728,0,5,param_1[3]);
  return;
}



/* Function: FUN_00003e10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003e10(int param_1,ushort *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_48 [4];
  undefined4 local_38 [5];
  
  local_38[0] = DAT_00004000;
  local_38[1] = DAT_00004004;
  local_48[0] = ((*param_2 & 0x7fff) >> 8) << 2;
  local_48[1] = ((param_2[2] & 0x7fff) >> 8) << 2;
  iVar1 = FUN_00003b66(_DAT_30000504,_DAT_30000404);
  if (iVar1 == 0) {
    local_48[0] = local_48[0] >> 1;
    local_48[1] = local_48[1] >> 1;
  }
  iVar1 = 0;
  do {
    uVar2 = local_48[iVar1];
    uVar3 = *(int *)(param_3 + iVar1 * 4) - param_4;
    if (uVar3 < uVar2) {
      uVar2 = uVar2 - uVar3;
      uVar4 = 3;
    }
    else {
      uVar2 = uVar3 - uVar2;
      uVar4 = 2;
    }
    uVar4 = FUN_000032a4(*(undefined4 *)(param_2 + iVar1 * 2),0x1e,2,uVar4);
    uVar4 = FUN_000032a4(uVar4,0x10,7,uVar2 >> 2);
    uVar4 = FUN_000032a4(uVar4,0x1c,2,uVar2);
    **(undefined4 **)(param_1 + iVar1 * 4) = uVar4;
    *(uint *)local_38[iVar1] = *(uint *)local_38[iVar1] | 0x800;
    FUN_000032d4(10);
    *(uint *)local_38[iVar1] = *(uint *)local_38[iVar1] & 0xfffff7ff;
    FUN_000025ec();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 0;
}



/* Function: FUN_00003ee2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003ee2(uint param_1)

{
  if (0x1f < param_1) {
    param_1 = 0x1f;
  }
  _DAT_30000318 = FUN_000032a4(_DAT_30000318,0x18,5,param_1);
  return;
}



/* Function: FUN_000041ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000041ec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *local_60 [4];
  undefined4 local_50 [4];
  int local_40 [4];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_30 = 0;
  local_28 = _DAT_30000194;
  local_60[0] = (undefined4 *)(&DAT_3000040c + param_1 * 4);
  local_60[1] = (undefined4 *)(&DAT_3000050c + param_1 * 4);
  local_50[0] = *local_60[0];
  local_50[1] = *local_60[1];
  local_2c = 0x1c;
  FUN_000046ae();
  iVar4 = 0;
  do {
    iVar6 = -1;
    iVar2 = -1;
    iVar3 = -1;
    iVar5 = DAT_000045a8;
    if (param_1 == 0) {
      iVar5 = DAT_000045a8 + -0x10;
    }
    _DAT_30000194 = *(undefined4 *)(iVar5 + iVar4 * 4);
    iVar5 = 0;
    do {
      *local_60[iVar4] = iVar5;
      FUN_000025ec();
      iVar1 = FUN_00003c1a(2);
      if (iVar1 == 0) {
        if (iVar3 == -1) {
          iVar3 = iVar5;
        }
        if (iVar5 == 0x7f) {
          iVar6 = 1;
        }
      }
      else {
        iVar2 = iVar5 + -1;
        if (iVar3 != -1) {
          if ((iVar2 == -1) || (0x10 < iVar2 - iVar3)) {
            if ((iVar2 != -1) && (0x10 < iVar2 - iVar3)) {
              iVar6 = 1;
              break;
            }
          }
          else {
            iVar3 = -1;
            iVar2 = -1;
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x80);
    if (iVar3 < 0) {
LAB_0000429a:
      local_30 = -1;
      *local_60[iVar4] = local_50[iVar4];
      break;
    }
    if (((iVar2 < 0) || (iVar2 < iVar3)) && (iVar6 == 1)) {
      iVar2 = 0x7f;
    }
    if (iVar2 - iVar3 < 0x10) goto LAB_0000429a;
    *local_60[iVar4] = local_50[iVar4];
    FUN_000025ec();
    iVar5 = (iVar3 + iVar2) * 4 + ((iVar3 + iVar2 & 0x3fffffffU) >> 0x1d);
    iVar3 = iVar5 >> 1;
    local_40[iVar4] = iVar3;
    *(int *)(DAT_000045ac + param_1 * 0x10 + iVar4 * 4) =
         (int)(iVar3 + ((uint)(iVar5 >> 0x1f) >> 0x1e)) >> 2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  _DAT_30000194 = local_28;
  FUN_000046ae(0);
  if (local_30 == 0) {
    FUN_00003e10(local_60,local_50,local_40,local_2c);
  }
  FUN_000025ec();
  return 0;
}



/* Function: FUN_00004320 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004320(uint param_1)

{
  if (0x1f < param_1) {
    param_1 = 0x1f;
  }
  _DAT_30000428 = FUN_000032a4(_DAT_30000428,0,5,param_1);
  _DAT_30000528 = FUN_000032a4(_DAT_30000528,0,5,param_1);
  _DAT_30000628 = FUN_000032a4(_DAT_30000628,0,5,param_1);
  _DAT_30000728 = FUN_000032a4(_DAT_30000728,0,5,param_1);
  return;
}



/* Function: FUN_00004378 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00004378(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  int local_48 [4];
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  
  local_38 = 0x30000000;
  local_34 = 0;
  local_30 = _DAT_30000194;
  local_58[0] = DAT_000045b0;
  local_58[1] = _DAT_000045b4;
  local_68[0] = _DAT_30000408;
  iVar4 = 0;
  local_68[1] = _DAT_30000508;
  do {
    local_2c = 1;
    iVar7 = -1;
    iVar5 = -1;
    uVar6 = 0xffffffff;
    *(undefined4 *)(local_38 + 0x194) = *(undefined4 *)(DAT_000045a8 + -0x20 + iVar4 * 4);
    FUN_00004320(0x1f);
    uVar2 = *(uint *)(DAT_000045ac + -0x20 + iVar4 * 4) >> 2;
    for (uVar3 = 0; uVar3 < uVar2 + 8; uVar3 = uVar3 + 1) {
      if (uVar3 < uVar2) {
        *(uint *)local_58[iVar4] = uVar3;
      }
      else {
        FUN_00004320(0);
        *(uint *)local_58[iVar4] = uVar3 - 8;
      }
      FUN_000025ec();
      iVar1 = FUN_00003c1a(2);
      if (iVar1 == 0) {
        if (uVar6 == 0xffffffff) {
          uVar6 = uVar3;
        }
        if (uVar3 == uVar2 + 7) {
          iVar7 = 1;
        }
      }
      else {
        iVar5 = uVar3 - 1;
        if (uVar6 != 0xffffffff) {
          if ((iVar5 == -1) || (0x10 < (int)(iVar5 - uVar6))) {
            if ((iVar5 != -1) && (0x10 < (int)(iVar5 - uVar6))) {
              iVar7 = 1;
              break;
            }
          }
          else {
            uVar6 = 0xffffffff;
            iVar5 = -1;
          }
        }
      }
    }
    if ((int)uVar6 < 0) {
      local_34 = -1;
      *(undefined4 *)local_58[iVar4] = local_68[iVar4];
      goto LAB_000044ae;
    }
    if (((iVar5 < 0) || (iVar5 < (int)uVar6)) && (iVar7 == 1)) {
      iVar5 = uVar2 + 7;
    }
    iVar7 = uVar6 - local_2c;
    *(undefined4 *)local_58[iVar4] = local_68[iVar4];
    FUN_000025ec();
    uVar2 = iVar7 + 1 + iVar5;
    iVar5 = (int)(uVar2 * 4 + ((uVar2 & 0x3fffffff) >> 0x1d)) >> 1;
    local_48[iVar4] = iVar5;
    iVar5 = iVar5 + -0x20;
    local_48[iVar4] = iVar5;
    *(int *)(DAT_000045ac + -0x10 + iVar4 * 4) = (int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1e)) >> 2
    ;
    iVar4 = iVar4 + 1;
    if (1 < iVar4) {
LAB_000044ae:
      *(undefined4 *)(local_38 + 0x194) = local_30;
      if (local_34 == 0) {
        FUN_00003e10(local_58,local_68,local_48,0);
      }
      FUN_00004320(0);
      FUN_000025ec();
      return 0;
    }
  } while( true );
}



/* Function: FUN_000044da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000044da(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  
  iVar1 = FUN_00003ca4();
  if (iVar1 != 0) {
    FUN_000034f8(s_0sipi_bist_simple_test_first_fai_000045b7 + 1);
  }
  if (*(int *)(DAT_000045ec + 8) == param_1) {
    uVar4 = 7;
    do {
      uVar2 = FUN_000032a4(*(undefined4 *)(&DAT_30000180 + uVar4 * 4),0,0x20,0xffff);
      *(undefined4 *)(&DAT_30000180 + uVar4 * 4) = uVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0xf);
    iVar1 = FUN_00004378();
    if (iVar1 == 0) {
      iVar1 = FUN_000041ec(0);
      if (iVar1 == 0) {
        iVar1 = FUN_000041ec(1);
        if (iVar1 == 0) {
          _DAT_3000019c = FUN_000032a4(_DAT_3000019c,0,0x20,DAT_00004664);
          _DAT_300001a0 = FUN_000032a4(_DAT_300001a0,0,0x20,DAT_00004668);
          _DAT_300001a4 = FUN_000032a4(_DAT_300001a4,0,0x20,DAT_0000466c);
          _DAT_300001a8 = FUN_000032a4(_DAT_300001a8,0,0x20,DAT_00004670);
          _DAT_300001ac = FUN_000032a4(_DAT_300001ac,0,0x20,DAT_00004674);
          _DAT_300001b0 = FUN_000032a4(_DAT_300001b0,0,0x20,0x55);
          _DAT_300001b4 = FUN_000032a4(_DAT_300001b4,0,0x20);
          _DAT_300001b8 = FUN_000032a4(_DAT_300001b8,0,0x20);
          iVar1 = FUN_00003ca4();
          if (iVar1 == 0) goto LAB_000046a6;
          pcVar3 = s_sipi_bist_simple_test_lasted_Fai_00004730;
        }
        else {
          pcVar3 = s_dmc_lpddr3_rde_training_neg_fail_0000463c;
        }
      }
      else {
        pcVar3 = s_dmc_lpddr3_rde_training_pos_fail_00004614;
      }
    }
    else {
      pcVar3 = s_dmc_lpddr3_wde_training_Failed_000045f0;
    }
    FUN_000034f8(pcVar3);
    uVar2 = 0xffffffff;
  }
  else {
LAB_000046a6:
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_000046ae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000046ae(uint param_1)

{
  param_1 = param_1 & 0x1f;
  _DAT_30000420 = param_1 << 0x18 | param_1 << 0x10 | param_1 << 8 | param_1;
  _DAT_30000520 = _DAT_30000420;
  _DAT_30000620 = _DAT_30000420;
  _DAT_30000720 = _DAT_30000420;
  _DAT_30000424 = _DAT_30000420;
  _DAT_30000524 = _DAT_30000420;
  _DAT_30000624 = _DAT_30000420;
  _DAT_30000724 = _DAT_30000420;
  return;
}



/* Function: FUN_000046e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000046e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _DAT_30000480 = param_1;
  _DAT_30000484 = param_2;
  _DAT_30000488 = param_3;
  _DAT_3000048c = param_4;
  _DAT_30000580 = param_1;
  _DAT_30000584 = param_2;
  _DAT_30000588 = param_3;
  _DAT_3000058c = param_4;
  _DAT_30000680 = param_1;
  _DAT_30000684 = param_2;
  _DAT_30000688 = param_3;
  _DAT_3000068c = param_4;
  _DAT_30000780 = param_1;
  _DAT_30000784 = param_2;
  _DAT_30000788 = param_3;
  _DAT_3000078c = param_4;
  return 0;
}



/* Function: FUN_00004758 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00004758(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_2c;
  uint *puStack_28;
  
  uVar9 = *param_2;
  uVar8 = param_2[1];
  uVar10 = param_2[2];
  uVar6 = 0xfffffffd;
  uVar5 = 0;
  if (param_1 == 0) {
    uVar5 = param_2[3];
  }
  else if (((param_1 != 1) && (param_1 != 2)) && (param_1 != 3)) {
    return 0xfffffffd;
  }
  uVar1 = (_DAT_30000000 & 0x7f) >> 4;
  if ((uVar1 < 5) && (iVar7 = 1 << uVar1, uVar9 < 3)) {
    local_2c = param_1;
    puStack_28 = param_2;
    iVar2 = FUN_00002610();
    uVar1 = (uint)(iVar2 * iVar7) >> 3;
    if (uVar8 == uVar1 * (uVar8 / uVar1)) {
      iVar3 = FUN_000026ba(uVar8,&local_40);
      uVar4 = _DAT_30000100;
      iVar2 = DAT_0000491c;
      if (iVar3 == 0) {
        uVar6 = 0;
        _DAT_30000198 = uVar5;
        if (*(int *)(DAT_0000491c + 0x18) != 0) {
          _DAT_30000100 =
               FUN_000032a4(_DAT_30000100,4,3,*(int *)(*(int *)(DAT_0000491c + 0x14) + 0xc) + -8);
          uVar6 = uVar4;
        }
        _DAT_30000184 = uVar10 >> 2;
        _DAT_30000188 = 0;
        _DAT_3000018c =
             ((1 << (local_38 & 0xff)) + -1) * 0x10000 | (~(1 << (local_40 & 0xff)) & 1U) << 0xf |
             ((1 << (local_3c & 0xff)) - 1U & 7) << 0xc | (1 << (local_34 & 0xff)) - 1U & 0xff8;
        uVar4 = FUN_000032a4(_DAT_30000180,0xd,1);
        uVar4 = FUN_000032a4(uVar4,0,1);
        _DAT_30000180 = FUN_000032a4(uVar4,0x10,10,iVar7);
        uVar4 = FUN_000032a4(_DAT_30000180,0xd,1,0);
        _DAT_30000180 = FUN_000032a4(uVar4,8,2,local_2c);
        uVar4 = FUN_000032a4(_DAT_30000180,0xc,2,0);
        uVar4 = FUN_000032a4(uVar4,4,2,uVar9);
        _DAT_30000180 = FUN_000032a4(uVar4,0,2,3);
        iVar7 = _DAT_30000184 * 2 + -2;
        while ((0 < iVar7 && (-1 < _DAT_30000180 << 0x1d))) {
          iVar7 = iVar7 + -1;
        }
        _DAT_30000180 = FUN_000032a4(_DAT_30000180,0,1);
        if (*(int *)(iVar2 + 0x18) != 0) {
          _DAT_30000100 = uVar6;
        }
        if (iVar7 < 1) {
          uVar6 = 0xfffffffe;
        }
        else if (_DAT_30000180 << 0x1c < 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0xffffffff;
        }
      }
    }
    else {
      FUN_000034f8(s_Data_len_must_aligned_with_burst_000048e8);
    }
  }
  return uVar6;
}



/* Function: FUN_00004920 */

undefined4 FUN_00004920(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_18;
  int local_14;
  
  local_14 = param_1;
  if (param_2 != 0) {
    local_14 = param_1 + param_2 + -1;
  }
  local_18 = param_1;
  uVar1 = FUN_00004c9e(param_3,&local_18,param_4,DAT_00004950 + 0x4936);
  if (param_2 != 0) {
    FUN_00004cc4(0,&local_18);
  }
  return uVar1;
}



/* Function: FUN_00004954 */

int FUN_00004954(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    while (3 < param_3) {
      uVar5 = *param_1;
      param_1 = param_1 + 1;
      uVar3 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 - 4;
      if (uVar5 != uVar3) {
        if ((uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
            uVar5 >> 0x18) <=
            (uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
            uVar3 >> 0x18)) {
          return -1;
        }
        return 1;
      }
    }
  }
  if (param_3 != 0) {
    if ((param_3 & 1) == 0) goto LAB_0000498c;
    param_3 = param_3 + 1;
    puVar1 = param_1;
    puVar2 = param_2;
    while( true ) {
      param_1 = (uint *)((int)puVar1 + 1);
      param_2 = (uint *)((int)puVar2 + 1);
      iVar4 = (uint)(byte)*puVar1 - (uint)(byte)*puVar2;
      if (iVar4 != 0) {
        return iVar4;
      }
      param_3 = param_3 - 2;
      if (param_3 == 0) break;
LAB_0000498c:
      puVar1 = (uint *)((int)param_1 + 1);
      puVar2 = (uint *)((int)param_2 + 1);
      iVar4 = (uint)(byte)*param_1 - (uint)(byte)*param_2;
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    return 0;
  }
  return 0;
}



/* Function: FUN_000049b0 */

undefined8 FUN_000049b0(uint *param_1,uint *param_2,uint param_3,uint param_4)

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



/* Function: FUN_00004a84 */

undefined8 FUN_00004a84(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

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



/* Function: FUN_00004ae8 */

undefined4 * FUN_00004ae8(undefined4 *param_1,uint param_2)

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



/* Function: FUN_00004b36 */

void FUN_00004b36(uint *param_1)

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



/* Function: FUN_00004b62 */

void FUN_00004b62(byte *param_1)

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



/* Function: FUN_00004b84 */

int FUN_00004b84(int param_1,int *param_2)

{
  if (*param_2 << 0x15 < 0) {
    param_1 = (int)(char)param_1;
  }
  else if (*param_2 << 0x17 < 0) {
    return (int)(short)param_1;
  }
  return param_1;
}



/* Function: FUN_00004b96 */

uint FUN_00004b96(uint param_1,int *param_2)

{
  if (*param_2 << 0x15 < 0) {
    param_1 = param_1 & 0xff;
  }
  else if (*param_2 << 0x17 < 0) {
    return param_1 & 0xffff;
  }
  return param_1;
}



/* Function: FUN_00004ba8 */

void FUN_00004ba8(byte *param_1,undefined1 *param_2,uint param_3)

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
  FUN_00004b36(param_1);
  for (; param_2 < puVar2; param_2 = param_2 + 1) {
    (**(code **)(param_1 + 4))(*param_2,*(undefined4 *)(param_1 + 8));
  }
  FUN_00004b62(param_1);
  return;
}



/* Function: FUN_00004c9e */

void FUN_00004c9e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  local_2c = 0;
  local_34 = DAT_00004cc0 + 0x4cb0;
  local_3c = param_4;
  uStack_38 = param_2;
  uStack_30 = param_1;
  FUN_00004f1c(auStack_40,param_3);
  return;
}



/* Function: FUN_00004cc4 */

void FUN_00004cc4(undefined1 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = param_1;
  *param_2 = puVar1 + 1;
  return;
}



/* Function: FUN_00004ce0 */

undefined8 FUN_00004ce0(byte *param_1,int param_2,int param_3,undefined4 param_4)

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
  
  iVar2 = DAT_00004d98;
  puVar7 = (undefined4 *)(DAT_00004d98 + 0x4cf2);
  iVar6 = 0;
  local_38 = *puVar7;
  uStack_34 = *(undefined4 *)(DAT_00004d98 + 0x4cf6);
  iVar5 = 0;
  local_30 = param_3;
  uStack_2c = param_4;
  do {
    if ((((int)((uint)*param_1 << 0x1a) < 0) && (*(int *)(param_1 + 0x1c) <= iVar6)) ||
       ((param_3 <= iVar5 && (*(short *)(param_2 + iVar5 * 2) == 0)))) goto LAB_00004d38;
    iVar1 = FUN_00005246(&local_30,*(undefined2 *)(param_2 + iVar5 * 2),&local_38);
    if (iVar1 != -1) {
      if (((int)((uint)*param_1 << 0x1a) < 0) && (*(uint *)(param_1 + 0x1c) < (uint)(iVar6 + iVar1))
         ) {
LAB_00004d38:
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar6;
        FUN_00004b36(param_1);
        local_38 = *puVar7;
        uStack_34 = *(undefined4 *)(iVar2 + 0x4cf6);
        for (iVar2 = 0; iVar2 < iVar5; iVar2 = iVar2 + 1) {
          uVar3 = FUN_00005246(&local_30,*(undefined2 *)(param_2 + iVar2 * 2),&local_38);
          if (uVar3 != 0xffffffff) {
            for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
              (**(code **)(param_1 + 4))
                        (*(undefined1 *)((int)&local_30 + uVar4),*(undefined4 *)(param_1 + 8));
            }
          }
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar6;
        FUN_00004b62(param_1);
        return CONCAT44(uStack_34,local_38);
      }
      iVar6 = iVar6 + iVar1;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



/* Function: FUN_00004f1c */

uint FUN_00004f1c(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  iVar1 = DAT_000050a0;
  param_1[8] = 0;
  while (uVar2 = (*(code *)param_1[3])(param_1), uVar2 != 0) {
    if (uVar2 == 0x25) {
      uVar5 = 0;
      while (((uVar2 = (*(code *)param_1[3])(param_1), 0x1f < (int)uVar2 && (uVar2 < 0x31)) &&
             (uVar3 = (uint)*(byte *)(iVar1 + uVar2 + 0x4f10), uVar3 != 0))) {
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
          iVar4 = FUN_00005450(uVar2);
          if (iVar4 != 0) {
            param_1[iVar6 + 6] = uVar2 - 0x30;
            while( true ) {
              uVar2 = (*(code *)param_1[3])(param_1);
              iVar4 = FUN_00005450();
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
          if (uVar2 == 0x6c) goto LAB_00005088;
          uVar2 = 0x400;
          goto LAB_0000503e;
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
LAB_00005088:
            uVar2 = 0x80;
            goto LAB_0000503e;
          }
          if ((uVar2 != 0x74) && (uVar2 != 0x7a)) goto LAB_00005054;
        }
        uVar2 = 0;
LAB_0000503e:
        uVar5 = uVar5 | uVar2;
        uVar2 = (*(code *)param_1[3])(param_1);
      }
LAB_00005054:
      if (uVar2 == 0) break;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 + 0x20;
        uVar5 = uVar5 | 0x800;
      }
      *param_1 = uVar5;
      iVar6 = FUN_00000148(param_1,uVar2,param_2);
      if (iVar6 == 0) goto LAB_00004f40;
      if (iVar6 == 1) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = (uint *)(((int)param_2 + 7U & 0xfffffff8) + 8);
      }
    }
    else {
LAB_00004f40:
      (*(code *)param_1[1])(uVar2,param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
  }
  return param_1[8];
}



/* Function: FUN_000050a4 */

undefined8 FUN_000050a4(uint param_1,uint param_2)

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



/* Function: FUN_00005246 */

undefined4 FUN_00005246(undefined1 *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_00005300();
  iVar3 = *piVar1;
  if (*(char *)(iVar3 + 0x101) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0000527e. Too many branches */
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



/* Function: FUN_00005288 */

undefined8 FUN_00005288(uint param_1)

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



/* Function: FUN_000052b4 */

void FUN_000052b4(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 unaff_lr;
  uint *puVar3;
  
  uVar1 = FUN_00005324();
  *(undefined4 *)((uVar1 & 0xfffffff8) + 0x5c) = unaff_lr;
  puVar3 = (uint *)((uVar1 & 0xfffffff8) + 0x58);
  *puVar3 = uVar1;
  FUN_00000064();
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



/* Function: FUN_00005300 */

int FUN_00005300(void)

{
  int iVar1;
  
  iVar1 = FUN_0000532c();
  return iVar1 + 4;
}



/* Function: FUN_00005310 */

int FUN_00005310(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iStack_c;
  
  FUN_000001f2();
  FUN_00005428(param_1,param_2);
  iVar1 = *DAT_00000604;
  do {
    iStack_c = iVar1;
    iVar1 = *DAT_00000604;
  } while (iStack_c != *DAT_00000604);
  return iStack_c;
}



/* Function: FUN_00005324 */

undefined4 FUN_00005324(void)

{
  return DAT_00005328;
}



/* Function: FUN_0000532c */

undefined4 FUN_0000532c(void)

{
  return DAT_00005330;
}



/* Function: FUN_00005334 */

uint FUN_00005334(uint *param_1,uint *param_2)

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
      if (!bVar10) goto LAB_0000541c;
      puVar5 = (uint *)((int)param_2 + 1);
      if (((uint)puVar1 & 3) != 0) {
        puVar2 = (uint *)((int)param_1 + 2);
        uVar7 = (uint)*(byte *)puVar1;
        uVar8 = (uint)*(byte *)((int)param_2 + 1);
        bVar10 = uVar7 == 1;
        if (uVar7 != 0) {
          bVar10 = uVar7 == uVar8;
        }
        if (!bVar10) goto LAB_0000541c;
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
          if (!bVar10) goto LAB_0000541c;
        }
      }
    }
    do {
      uVar7 = *puVar1;
      uVar8 = *puVar5;
      uVar9 = uVar7 - DAT_00005424 & ~uVar7 & DAT_00005424 << 7;
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
LAB_0000541c:
  return uVar7 - uVar8;
}



/* Function: FUN_00005428 */

void FUN_00005428(void)

{
  software_interrupt(0xab);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_00005450 */

undefined4 FUN_00005450(int param_1)

{
  if (param_1 - 0x30U < 10) {
    return 1;
  }
  return 0;
}



/* Function: FUN_00005460 */

int FUN_00005460(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar1 = FUN_00005334(DAT_00005484 + 0x5472), iVar1 != 0)) {
    return 0;
  }
  return DAT_00005488 + 0x5482;
}



/* Function: FUN_000054b0 */

undefined4 FUN_000054b0(undefined4 param_1)

{
  coproc_moveto_Invalidate_Entire_Instruction(0);
  return param_1;
}



/* Function: FUN_000054d4 */

undefined4 FUN_000054d4(undefined4 param_1)

{
  coproc_movefrom_Control();
  return param_1;
}



/* Function: FUN_000054e0 */

undefined8 FUN_000054e0(int param_1,uint param_2)

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



/* Function: FUN_00005510 */

undefined8 FUN_00005510(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_cr0;
  
  DataMemoryBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  FUN_00005b78();
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



/* Function: FUN_00005568 */

undefined8 FUN_00005568(undefined4 param_1,undefined4 param_2)

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



/* Function: FUN_000055bc */

undefined8 FUN_000055bc(undefined4 param_1,undefined4 param_2)

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



/* Function: FUN_000056a0 */

undefined8 FUN_000056a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_r1;
  
  coproc_moveto_Translation_table_base_0(*DAT_00005b8c);
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Domain_Access_Control(DAT_00005b90);
  coproc_moveto_Invalidate_Entire_Instruction(0);
  FUN_00005568(param_1,uVar1 & 0xfffff7ff | 0x1007,DAT_00005b90,0,param_1,param_2,param_3,param_4);
  coproc_moveto_Invalidate_unified_TLB_unlocked(0);
  coproc_moveto_Control(extraout_r1);
  coproc_movefrom_Main_ID();
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00005710 */

undefined8 FUN_00005710(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 in_cr2;
  undefined4 in_cr10;
  
  uVar1 = coprocessor_movefromRt(0xf,0,0,in_cr10,in_cr2);
  coprocessor_moveto(0xf,0,0,uVar1 | param_1,in_cr10,in_cr2);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00005738 */

undefined8 FUN_00005738(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 in_cr2;
  undefined4 in_cr10;
  
  uVar1 = coprocessor_movefromRt(0xf,0,1,in_cr10,in_cr2);
  coprocessor_moveto(0xf,0,1,uVar1 | param_1,in_cr10,in_cr2);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00005760 */

undefined4 FUN_00005760(undefined4 param_1)

{
  coproc_movefrom_Control();
  return param_1;
}



/* Function: FUN_00005770 */

undefined4 FUN_00005770(undefined4 param_1)

{
  coproc_movefrom_Control();
  return param_1;
}



/* Function: FUN_00005780 */

uint FUN_00005780(uint param_1)

{
  coproc_moveto_Translation_table_base_0(param_1 | 1);
  return param_1;
}



/* Function: FUN_000057ac */

undefined8 FUN_000057ac(undefined4 param_1,undefined4 param_2)

{
  coproc_movefrom_Control();
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_000057c0 */

undefined8 FUN_000057c0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_00005adc();
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xffffe7f8);
  coproc_movefrom_Main_ID();
  DataMemoryBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00005814 */

undefined4 FUN_00005814(undefined4 param_1)

{
  coproc_moveto_Invalidate_Entire_Instruction(0);
  coproc_moveto_Invalidate_unified_TLB_unlocked(0);
  return param_1;
}



/* Function: FUN_0000583c */

undefined4 FUN_0000583c(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xffffefff);
  return param_1;
}



/* Function: FUN_00005864 */

undefined4 FUN_00005864(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xfffffffb);
  return param_1;
}



/* Function: FUN_00005878 */

undefined4 FUN_00005878(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x1000);
  return param_1;
}



/* Function: FUN_0000588c */

undefined4 FUN_0000588c(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x1000);
  return param_1;
}



/* Function: FUN_000058b4 */

undefined4 FUN_000058b4(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 4);
  return param_1;
}



/* Function: FUN_000058c8 */

undefined8 FUN_000058c8(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Domain_Access_Control();
  coproc_moveto_Domain_Access_Control(uVar1 & ~param_2 | param_1);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00005910 */

undefined8 FUN_00005910(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 2);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0000593c */

undefined8 FUN_0000593c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xfffffffd);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00005968 */

undefined8 FUN_00005968(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00005970 */

undefined8 FUN_00005970(uint param_1,uint param_2)

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



/* Function: FUN_000059a8 */

undefined8 FUN_000059a8(uint param_1,uint param_2)

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



/* Function: FUN_000059f4 */

undefined8 FUN_000059f4(uint param_1,uint param_2)

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



/* Function: FUN_00005a50 */

void FUN_00005a50(int param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_000059f4(param_1,param_2 + param_1);
    return;
  }
  if (param_3 == 0) {
    FUN_00005970();
    return;
  }
  FUN_000059a8();
  return;
}



/* Function: FUN_00005a70 */

undefined8 FUN_00005a70(undefined4 param_1,undefined4 param_2)

{
  FUN_000054b0();
  FUN_00005b78();
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00005a94 */

undefined4 FUN_00005a94(undefined4 param_1)

{
  coproc_moveto_Domain_Access_Control(0xffffffcd);
  return param_1;
}



/* Function: FUN_00005aa4 */

undefined4 FUN_00005aa4(undefined4 param_1)

{
  coproc_moveto_Domain_Access_Control(0xffffffff);
  return param_1;
}



/* Function: FUN_00005ab4 */

undefined4 FUN_00005ab4(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x2000);
  return param_1;
}



/* Function: FUN_00005ac8 */

undefined4 FUN_00005ac8(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xffffdfff);
  return param_1;
}



/* Function: FUN_00005adc */

void FUN_00005adc(void)

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



/* Function: FUN_00005b78 */

undefined8 FUN_00005b78(undefined4 param_1,undefined4 param_2)

{
  FUN_00005adc();
  coproc_moveto_Invalidate_Entire_Instruction(0);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00005b94 */

undefined4 FUN_00005b94(void)

{
  return 0x3000000;
}



/* Function: FUN_00006420 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00006420(uint param_1)

{
  undefined4 *puVar1;
  uint unaff_r4;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_ZR;
  bool bVar2;
  
  bVar2 = false;
  if (in_ZR) {
    param_1 = param_1 & unaff_r7 << (param_1 & 0xff);
    param_1 = param_1 & param_1 << 4;
    bVar2 = param_1 == 0;
  }
  if (bVar2) {
    puVar1 = (undefined4 *)(param_1 - unaff_r4 & unaff_r4);
    *puVar1 = 0x6438;
    puVar1[-1] = unaff_lr;
    puVar1[-2] = register0x00000054;
    puVar1[-3] = in_r12;
    puVar1[-4] = unaff_r11;
    puVar1[-5] = unaff_r10;
    puVar1[-6] = unaff_r9;
    puVar1[-7] = unaff_r8;
    puVar1[-8] = puVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* Decompiled: 194; failed: 0 */
