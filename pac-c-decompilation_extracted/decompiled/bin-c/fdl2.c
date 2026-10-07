/* Automatically generated C decompilation by Ghidra. */

/* Function: Reset */

void Reset(void)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar2 & 0xffffff7f);
  uVar2 = coproc_movefrom_Auxiliary_Control();
  coproc_moveto_Auxiliary_Control(uVar2 | 0x40);
  coproc_moveto_Coprocessor_Access_Control(0xf00000);
  InstructionSynchronizationBarrier(0xf);
  FUN_00000068(0xd3);
  FUN_000001c6();
  iVar1 = DAT_00000094;
  puVar4 = (undefined4 *)(DAT_00000094 + 0x94);
  iVar3 = DAT_00000094 + 0x93;
  if (puVar4 == (undefined4 *)(DAT_00000098 + 0x94)) {
    FUN_000001c6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xa0);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x00000092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0x98),*(undefined4 *)(iVar1 + 0x9c));
  return;
}



/* Function: UndefinedInstruction */

void UndefinedInstruction(uint param_1)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined4 *puVar4;
  
  coproc_moveto_Control(param_1 & 0xffffff7f);
  uVar2 = coproc_movefrom_Auxiliary_Control();
  coproc_moveto_Auxiliary_Control(uVar2 | 0x40);
  coproc_moveto_Coprocessor_Access_Control(0xf00000);
  InstructionSynchronizationBarrier(0xf);
  FUN_00000068(0xd3);
  FUN_000001c6();
  iVar1 = DAT_00000094;
  puVar4 = (undefined4 *)(DAT_00000094 + 0x94);
  iVar3 = DAT_00000094 + 0x93;
  if (puVar4 == (undefined4 *)(DAT_00000098 + 0x94)) {
    FUN_000001c6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xa0);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x00000092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0x98),*(undefined4 *)(iVar1 + 0x9c));
  return;
}



/* Function: SupervisorCall */

void SupervisorCall(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined4 *puVar4;
  
  coproc_moveto_Control(param_1);
  uVar2 = coproc_movefrom_Auxiliary_Control();
  coproc_moveto_Auxiliary_Control(uVar2 | 0x40);
  coproc_moveto_Coprocessor_Access_Control(0xf00000);
  InstructionSynchronizationBarrier(0xf);
  FUN_00000068(0xd3);
  FUN_000001c6();
  iVar1 = DAT_00000094;
  puVar4 = (undefined4 *)(DAT_00000094 + 0x94);
  iVar3 = DAT_00000094 + 0x93;
  if (puVar4 == (undefined4 *)(DAT_00000098 + 0x94)) {
    FUN_000001c6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xa0);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x00000092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0x98),*(undefined4 *)(iVar1 + 0x9c));
  return;
}



/* Function: PrefetchAbort */

void PrefetchAbort(void)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = coproc_movefrom_Auxiliary_Control();
  coproc_moveto_Auxiliary_Control(uVar2 | 0x40);
  coproc_moveto_Coprocessor_Access_Control(0xf00000);
  InstructionSynchronizationBarrier(0xf);
  FUN_00000068(0xd3);
  FUN_000001c6();
  iVar1 = DAT_00000094;
  puVar4 = (undefined4 *)(DAT_00000094 + 0x94);
  iVar3 = DAT_00000094 + 0x93;
  if (puVar4 == (undefined4 *)(DAT_00000098 + 0x94)) {
    FUN_000001c6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xa0);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x00000092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0x98),*(undefined4 *)(iVar1 + 0x9c));
  return;
}



/* Function: DataAbort */

void DataAbort(uint param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined4 *puVar3;
  
  coproc_moveto_Auxiliary_Control(param_1 | 0x40);
  coproc_moveto_Coprocessor_Access_Control(0xf00000);
  InstructionSynchronizationBarrier(0xf);
  FUN_00000068(0xd3);
  FUN_000001c6();
  iVar1 = DAT_00000094;
  puVar3 = (undefined4 *)(DAT_00000094 + 0x94);
  iVar2 = DAT_00000094 + 0x93;
  if (puVar3 == (undefined4 *)(DAT_00000098 + 0x94)) {
    FUN_000001c6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xa0);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar2 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x00000092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar3,*(undefined4 *)(iVar1 + 0x98),*(undefined4 *)(iVar1 + 0x9c));
  return;
}



/* Function: NotUsed */

void NotUsed(undefined4 param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined4 *puVar3;
  
  coproc_moveto_Auxiliary_Control(param_1);
  coproc_moveto_Coprocessor_Access_Control(0xf00000);
  InstructionSynchronizationBarrier(0xf);
  FUN_00000068(0xd3);
  FUN_000001c6();
  iVar1 = DAT_00000094;
  puVar3 = (undefined4 *)(DAT_00000094 + 0x94);
  iVar2 = DAT_00000094 + 0x93;
  if (puVar3 == (undefined4 *)(DAT_00000098 + 0x94)) {
    FUN_000001c6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xa0);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar2 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x00000092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar3,*(undefined4 *)(iVar1 + 0x98),*(undefined4 *)(iVar1 + 0x9c));
  return;
}



/* Function: IRQ */

void IRQ(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined4 *puVar3;
  
  coproc_moveto_Coprocessor_Access_Control(0xf00000);
  InstructionSynchronizationBarrier(0xf);
  FUN_00000068(0xd3);
  FUN_000001c6();
  iVar1 = DAT_00000094;
  puVar3 = (undefined4 *)(DAT_00000094 + 0x94);
  iVar2 = DAT_00000094 + 0x93;
  if (puVar3 == (undefined4 *)(DAT_00000098 + 0x94)) {
    FUN_000001c6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xa0);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar2 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x00000092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar3,*(undefined4 *)(iVar1 + 0x98),*(undefined4 *)(iVar1 + 0x9c));
  return;
}



/* Function: FIQ */

void FIQ(undefined4 param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined4 *puVar3;
  
  coproc_moveto_Coprocessor_Access_Control(param_1);
  InstructionSynchronizationBarrier(0xf);
  FUN_00000068(0xd3);
  FUN_000001c6();
  iVar1 = DAT_00000094;
  puVar3 = (undefined4 *)(DAT_00000094 + 0x94);
  iVar2 = DAT_00000094 + 0x93;
  if (puVar3 == (undefined4 *)(DAT_00000098 + 0x94)) {
    FUN_000001c6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xa0);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar2 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x00000092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar3,*(undefined4 *)(iVar1 + 0x98),*(undefined4 *)(iVar1 + 0x9c));
  return;
}



/* Function: FUN_00000044 */

void FUN_00000044(void)

{
  return;
}



/* Function: FUN_00000068 */

void FUN_00000068(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_00000094;
  puVar3 = (undefined4 *)(DAT_00000094 + 0x94);
  iVar2 = DAT_00000094 + 0x93;
  if (puVar3 == (undefined4 *)(DAT_00000098 + 0x94)) {
    FUN_000001c6();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xa0);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar2 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x00000092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar3,*(undefined4 *)(iVar1 + 0x98),*(undefined4 *)(iVar1 + 0x9c));
  return;
}



/* Function: FUN_00000114 */

undefined4 FUN_00000114(uint *param_1,uint param_2,uint *param_3)

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
      iVar9 = 0x1131c;
      if (param_2 == 0x75) {
        iVar11 = FUN_000117f0(*param_3,param_1,param_3,uVar6);
      }
      else {
        iVar11 = FUN_000117de();
        if (iVar11 < 0) {
          iVar11 = -iVar11;
          iVar9 = 0x11320;
        }
        else if ((int)(*param_1 << 0x1e) < 0) {
          iVar9 = 0x11324;
        }
        else {
          if (-1 < (int)(*param_1 << 0x1d)) goto LAB_000112f6;
          iVar9 = 0x11328;
        }
        iVar7 = 1;
      }
LAB_000112f6:
      iVar2 = 0;
      while (iVar11 != 0) {
        iVar11 = FUN_00011b40();
        *(byte *)((int)param_1 + iVar2 + 0x24) = extraout_r1 + 0x30;
        iVar2 = iVar2 + 1;
      }
      goto LAB_00011802;
    }
    if (param_2 == 0x6f) {
      uVar6 = FUN_000117f0(*param_3,param_1,param_3,uVar6);
      uVar8 = 0;
LAB_00011a8c:
      iVar2 = 0;
      for (; uVar6 != 0 || uVar8 != 0; uVar6 = uVar6 >> 3 | uVar1) {
        uVar1 = uVar8 << 0x1d;
        uVar8 = uVar8 >> 3;
        *(byte *)((int)param_1 + iVar2 + 0x24) = ((byte)uVar6 & 7) + 0x30;
        iVar2 = iVar2 + 1;
      }
      iVar7 = 0;
      iVar9 = 0x11af4;
      if (((int)(*param_1 << 0x1c) < 0) && (((int)(*param_1 << 0x1a) < 0 || (iVar2 != 0)))) {
        iVar7 = 1;
        iVar9 = 0x11af8;
        param_1[7] = param_1[7] - 1;
      }
      goto LAB_00011802;
    }
    if (param_2 == 0x78) {
      uVar6 = FUN_000117f0(*param_3,param_1,param_3,uVar6);
      uVar8 = 0;
    }
    else {
      if (((param_2 == 0xe9) || (param_2 == 0xe4)) || (param_2 == 0xf5)) {
        piVar4 = (int *)((uint)((int)param_3 + 7) & 0xfffffff8);
        iVar7 = 0;
        iVar11 = *piVar4;
        iVar2 = piVar4[1];
        iVar9 = 0x11a7c;
        if (param_2 != 0xf5) {
          if (iVar2 < 0) {
            bVar12 = iVar11 != 0;
            iVar11 = -iVar11;
            iVar2 = -(uint)bVar12 - iVar2;
            iVar9 = 0x11a80;
          }
          else if ((int)(*param_1 << 0x1e) < 0) {
            iVar9 = 0x11a84;
          }
          else {
            if (-1 < (int)(*param_1 << 0x1d)) goto LAB_00011a52;
            iVar9 = 0x11a88;
          }
          iVar7 = 1;
        }
LAB_00011a52:
        lVar13 = CONCAT44(iVar2,iVar11);
        iVar2 = 0;
        while (lVar13 != 0) {
          lVar13 = FUN_00011b6c();
          *(byte *)((int)param_1 + iVar2 + 0x24) = extraout_r2 + 0x30;
          iVar2 = iVar2 + 1;
        }
        goto LAB_00011802;
      }
      if (param_2 == 0xef) {
        puVar3 = (uint *)((uint)((int)param_3 + 7) & 0xfffffff8);
        uVar6 = *puVar3;
        uVar8 = puVar3[1];
        goto LAB_00011a8c;
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
              FUN_00011954(param_1,puVar3,uVar5);
            }
            return 1;
          }
          puVar3 = (uint *)*param_3;
          uVar5 = 0xffffffff;
        }
        if (param_1[5] == 0) {
          FUN_0001126a(param_1,puVar3,uVar5);
        }
        return 1;
      }
      puVar3 = (uint *)((uint)((int)param_3 + 7) & 0xfffffff8);
      uVar6 = *puVar3;
      uVar8 = puVar3[1];
    }
  }
  if ((int)((uint)(ushort)*param_1 << 0x14) < 0) {
    iVar9 = DAT_000113bc + 0x1133c;
  }
  else {
    iVar9 = DAT_000113bc + 0x11350;
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
LAB_00011802:
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
    FUN_0001121c(param_1);
  }
  for (iVar10 = 0; iVar10 < iVar7; iVar10 = iVar10 + 1) {
    (*(code *)param_1[1])(*(undefined1 *)(iVar9 + iVar10),param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)((uint)(byte)*param_1 << 0x1b) < 0) {
    FUN_0001121c(param_1);
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
  FUN_00011248(param_1);
  if ((int)((uint)(byte)*param_1 << 0x18) < 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



/* Function: FUN_000001a4 */

undefined8 FUN_000001a4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00012564();
  FUN_00011572();
  iVar1 = FUN_00011ce8();
  iVar2 = FUN_00011e30(0,0);
  *(int *)(iVar1 + 4) = iVar2 + 1;
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_000001c2 */

void FUN_000001c2(void)

{
  return;
}



/* Function: FUN_000001c6 */

void FUN_000001c6(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar2 = FUN_00011c70();
  FUN_000001a4(uVar2,extraout_r2);
  FUN_000059b8();
  uVar6 = FUN_00011ccc();
  FUN_000001c2();
  FUN_00011cf6((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  do {
    piVar1 = DAT_00000214;
    piVar3 = (int *)DAT_00000214[1];
    piVar5 = (int *)*DAT_00000214 + 1;
    piVar4 = piVar3 + 1;
    *piVar3 = *piVar3 + *(int *)*DAT_00000214;
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



/* Function: FUN_000001e4 */

void FUN_000001e4(void)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = DAT_00000214;
  puVar3 = (uint *)DAT_00000214[1];
  puVar5 = (uint *)((int *)*DAT_00000214 + 1);
  uVar2 = *puVar3 + *(int *)*DAT_00000214;
  puVar4 = puVar3 + 1;
  *puVar3 = uVar2;
  if (puVar1 <= puVar5) {
    puVar5 = puVar1 + -0x37;
  }
  if (puVar1 <= puVar4) {
    puVar4 = puVar1 + -0x37;
  }
  *puVar1 = (uint)puVar5;
  puVar1[1] = (uint)puVar4;
                    /* WARNING: Could not recover jumptable at 0x00000212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2 & 0x7fffffff);
  return;
}



/* Function: FUN_00000218 */

void FUN_00000218(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = 0;
  while( true ) {
    piVar3 = (int *)(DAT_0000025c + iVar1 * 0x38);
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



/* Function: FUN_00000260 */

undefined4 FUN_00000260(void)

{
  return DAT_00000268;
}



/* Function: FUN_0000026c */

void FUN_0000026c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    iVar2 = *(int *)(DAT_0000029c + iVar1 * 8);
    if (iVar2 == 0) {
      return;
    }
    if (iVar2 == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return;
}



/* Function: FUN_000002a0 */

void FUN_000002a0(void)

{
  bool bVar1;
  undefined4 local_c;
  
  local_c = *DAT_000010d0;
  do {
    bVar1 = local_c != *DAT_000010d0;
    local_c = *DAT_000010d0;
  } while (bVar1);
  return;
}



/* Function: FUN_000002d0 */

void FUN_000002d0(uint param_1)

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
  FUN_00011764(DAT_000010d4,0x200);
  puVar2 = DAT_000010d4;
  param_1 = param_1 >> 4;
  do {
    iVar3 = DAT_000010d8;
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



/* Function: FUN_000003d4 */

void FUN_000003d4(void)

{
  *DAT_000010dc = 1;
  *(uint *)(DAT_000010e0 + 0x38) = *(uint *)(DAT_000010e0 + 0x38) | 1;
  return;
}



/* Function: FUN_000003f4 */

void FUN_000003f4(void)

{
  *DAT_000010dc = 0;
  *(uint *)(DAT_000010e0 + 0x38) = *(uint *)(DAT_000010e0 + 0x38) & 0xfffffffe;
  return;
}



/* Function: FUN_00000414 */

void FUN_00000414(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  iVar2 = DAT_000010e8;
  iVar1 = DAT_000010e4;
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



/* Function: FUN_000004e4 */

void FUN_000004e4(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = DAT_000010e0;
  *(undefined4 *)(DAT_000010e0 + 0xb0) = 0x100d;
  uVar3 = DAT_000010ec;
  *(uint *)(iVar2 + 0xb4) = DAT_000010ec;
  uVar4 = DAT_000010f0;
  *(undefined4 *)(iVar2 + 0xb8) = DAT_000010f0;
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



/* Function: FUN_00000538 */

void FUN_00000538(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_000010f4;
  *DAT_000010f4 = *DAT_000010f4 | 0x100000;
  puVar1[0x2c] = puVar1[0x2c] | 0x1000;
  puVar1[-0xfff7] = puVar1[-0xfff7] | 0x1000;
  puVar1[-0xff9b] = 0;
  puVar1[-0xffa3] = 0;
  puVar1[-0xffa8] = 0;
  puVar1[-0xffa9] = 0;
  puVar1[-0xff9f] = 0;
  puVar1[-0xffa7] = 0;
  puVar1[-0xffaa] = 0;
  puVar1[-0xffab] = 0;
  puVar1[-0xffa0] = 0;
  puVar1[-0xff9d] = 0;
  puVar1[-0xff9c] = 0;
  puVar1[-0xff9e] = 0;
  puVar1[-0xffa1] = 0;
  puVar1[-0xffa6] = 0;
  puVar1[-0xffa5] = 0;
  puVar1[-0xffa2] = 0;
  puVar1[-0xffa4] = 0;
  *DAT_000010f8 = 0x300000;
  puVar2 = DAT_000010fc;
  *DAT_000010fc = 0x300080;
  puVar2[-5] = 0x300000;
  puVar2[-6] = 0x300000;
  puVar2[4] = 0x300000;
  *(undefined4 *)((uint)puVar2 & 0xffffffe7) = 0x300000;
  *(undefined4 *)((uint)puVar2 & 0xffffffe7 ^ 0x30) = 0x300000;
  puVar2[3] = 0x300000;
  puVar2[6] = 0x300000;
  puVar2[7] = 0x300000;
  *(undefined4 *)((uint)(puVar2 + 7) ^ 0x18) = 0x300000;
  *(undefined4 *)((uint)puVar2 | 0x18) = 0x300000;
  puVar2[-3] = 0x300000;
  *(undefined4 *)((uint)puVar2 ^ 0x18) = 0x300000;
  puVar2 = (undefined4 *)((uint)puVar2 ^ 0x18) + 3;
  *puVar2 = 0x300000;
  puVar2 = (undefined4 *)((uint)puVar2 & 0xfffffff3);
  *puVar2 = 0x300000;
  puVar2[-6] = 0x301000;
  return;
}



/* Function: FUN_00000644 */

void FUN_00000644(void)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_00001100 + 4) == 0) {
    if (*(int *)(DAT_00001104 + 0x60) == 8) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
    *(undefined4 *)(DAT_00001100 + 4) = uVar1;
    return;
  }
  return;
}



/* Function: FUN_00000670 */

undefined4 FUN_00000670(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_00001108;
  iVar2 = 0;
  do {
    *(char *)(iVar4 + iVar2 * 0x68 + 0x15) = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 1);
  FUN_00000644();
  iVar4 = DAT_00001104;
  if (*(int *)(DAT_00001100 + 4) == 2) {
    uVar3 = 8;
  }
  else {
    if (*(int *)(DAT_00001100 + 4) != 1) goto LAB_000006d0;
    uVar3 = 3;
  }
  *(undefined4 *)(DAT_00001104 + 0x60) = uVar3;
  *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 2;
LAB_000006d0:
  puVar1 = DAT_0000110c;
  *DAT_0000110c = *DAT_0000110c | 0x200;
  puVar1[1] = puVar1[1] | 0x80;
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
  } while (iVar4 < 1000);
  puVar1[1] = puVar1[1] & 0xffffff7f;
  FUN_00000538();
  return 0;
}



/* Function: FUN_00000714 */

undefined4 FUN_00000714(uint param_1)

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
    *(uint *)(DAT_000010e0 + 0x10) = uVar1 | *(uint *)(DAT_000010e0 + 0x10);
  }
  return 0;
}



/* Function: FUN_00000758 */

undefined4 FUN_00000758(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *extraout_r12;
  undefined4 *puVar5;
  
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = FUN_000002a0();
  puVar5 = DAT_000010e0;
  do {
    if (((param_1 & ~uVar3) == 0) ||
       (iVar2 = FUN_000002a0(), puVar5 = extraout_r12, 4999 < (uint)(iVar2 - iVar1)))
    goto LAB_000007a8;
    if ((extraout_r12[4] & 0x1000000) != 0) {
      uVar3 = 1;
    }
  } while ((extraout_r12[4] & 0x8000000) == 0);
  uVar3 = uVar3 | 8;
LAB_000007a8:
  if ((uVar3 & 8) == 0) {
    if ((param_1 & ~uVar3) != 0) {
      *puVar5 = 2;
      FUN_00000714(0x6f);
      uVar4 = 1;
    }
  }
  else {
    *puVar5 = 2;
    FUN_00000714(0x6f);
    uVar4 = 5;
  }
  FUN_00000714(0x6f);
  return uVar4;
}



/* Function: FUN_000007f0 */

void FUN_000007f0(uint param_1)

{
  int iVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  
  puVar3 = DAT_00001100;
  uVar2 = *DAT_00001100;
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



/* Function: FUN_00000844 */

undefined4 FUN_00000844(short *param_1)

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
  iVar3 = FUN_000034c8();
  if ((iVar3 == 0) && (*param_1 != 0)) {
    FUN_00000644();
    puVar2 = DAT_00001100;
    puVar1 = DAT_000010e0;
    uVar7 = 0;
    if (*(int *)(DAT_00001100 + 2) == 1) {
      uVar4 = (uint)*(byte *)((int)param_1 + 0x15);
      if (uVar4 != 0) {
        uVar6 = uVar4 << 9;
        DAT_000010e0[100] = uVar4 << 0x1e | DAT_000010e0[100];
      }
      puVar1[5] = DAT_00001110;
      puVar1[6] = DAT_00001114;
      puVar1[0xd] = 0x81000000;
      puVar1[0xe] = DAT_00001118;
      puVar1[0x2c] = 0x1004;
      puVar1[0x2d] = 0x1004;
      puVar1[0x2e] = 0x4013;
      puVar1[0x2f] = DAT_0000111c;
      puVar1[0x37] = 6;
      puVar1[0x38] = 0x100;
      puVar1[0x39] = 0x100;
      puVar1[0x3a] = 0xbf;
      puVar1[0x3b] = 0xc80;
      puVar1[0x60] = 0x680;
      puVar1[0x62] = 3;
      puVar1[0x4b] = 0x548a;
      uVar5 = DAT_00001120;
      uVar6 = uVar6 | 2;
      puVar1[1] = uVar6;
      puVar1[2] = 0x3000;
      puVar1[0x3b] = uVar5;
      puVar1[0x3e] = puVar1[0x3e] | 2;
      *puVar2 = 0;
      FUN_000007f0(0xff);
      FUN_000007f0(0xe000);
      FUN_000007f0(0xf);
      FUN_000007f0(0xc0);
      FUN_000007f0(0x1000);
      FUN_000007f0(&DAT_0000e001);
      FUN_000007f0(0xf000);
      uVar7 = extraout_r12;
    }
    uVar5 = DAT_00001124;
    if (*(int *)(puVar2 + 2) == 2) {
      if (*(byte *)((int)param_1 + 0x15) != 0) {
        uVar6 = uVar6 | (uint)*(byte *)((int)param_1 + 0x15) << 9;
      }
      puVar1[1] = uVar6 | 2;
      puVar1[5] = uVar5;
      puVar1[6] = puVar1[6] | 0x1f;
      puVar1[0x3e] = puVar1[0x3e] | 2;
      *puVar2 = uVar7;
      FUN_000007f0(0xffcd);
      FUN_000007f0(0xb0);
      FUN_000007f0(0xff);
    }
    FUN_00000714(0x6f);
    *puVar1 = 1;
    uVar5 = FUN_00000758();
    return uVar5;
  }
  return 4;
}



/* Function: FUN_00000a00 */

undefined4 FUN_00000a00(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_r3;
  
  FUN_00000644();
  iVar1 = DAT_00001104;
  if (*(int *)(DAT_00001100 + 4) == 2) {
    uVar3 = 8;
  }
  else {
    if (*(int *)(DAT_00001100 + 4) != 1) goto LAB_00000a40;
    uVar3 = 3;
  }
  *(undefined4 *)(DAT_00001104 + 0x60) = uVar3;
  *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
LAB_00000a40:
  puVar2 = DAT_0000110c;
  *DAT_0000110c = *DAT_0000110c | 0x200;
  puVar2[1] = puVar2[1] | 0x80;
  uVar4 = 0;
  do {
    uVar4 = uVar4 + 1;
  } while (uVar4 < 1000);
  puVar2[1] = puVar2[1] & 0xffffff7f;
  FUN_00000844(extraout_r3);
  return 0;
}



/* Function: FUN_00000a88 */

void FUN_00000a88(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}



/* Function: FUN_00000aa8 */

void FUN_00000aa8(int param_1)

{
  short *psVar1;
  
  if (param_1 == 0) {
    FUN_00000670(0);
    psVar1 = DAT_00001108;
    *DAT_00001108 = *DAT_00001108 + 1;
    *(undefined1 *)((int)psVar1 + 0x15) = 0;
    psVar1[0x32] = 0;
    psVar1[0x33] = 0;
    *(undefined1 *)((int)psVar1 + 0x17) = 1;
    *(undefined1 *)(psVar1 + 0xe) = 1;
    return;
  }
  return;
}



/* Function: FUN_00000ae8 */

undefined4 FUN_00000ae8(short *param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  FUN_00000644();
  puVar2 = DAT_00001100;
  puVar1 = DAT_000010e0;
  if (*(int *)(DAT_00001100 + 2) == 2) {
    iVar3 = FUN_000034c8(param_1);
    if (iVar3 != 0) {
      return 4;
    }
    if (*param_1 == 0) {
      return 4;
    }
    puVar1[1] = 0x8002;
    puVar1[2] = (*(byte *)(param_1 + 1) & 7) << 0xc;
    *puVar2 = 0;
    FUN_000007f0(0x70cd);
    FUN_000007f0(0xdd);
    FUN_000007f0(0xff);
    FUN_00000714(0x6f);
    *puVar1 = 1;
    FUN_00000758(1);
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
    if (*(int *)(DAT_00001100 + 2) != 1) {
      return 9;
    }
    iVar3 = FUN_000034c8(param_1);
    if ((iVar3 != 0) || (*param_1 == 0)) {
      return 4;
    }
    puVar1[1] = 0x8002;
    puVar1[2] = 0x3000;
    *puVar2 = 0;
    FUN_000007f0(0xf);
    FUN_000007f0(0xc0);
    FUN_000007f0(0x1000);
    FUN_000007f0(0xe000);
    FUN_000007f0(0xf000);
    FUN_00000714(0x6f);
    *puVar1 = 1;
    FUN_00000758(1);
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



/* Function: FUN_00000c48 */

int FUN_00000c48(short *param_1,undefined1 *param_2)

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
  iVar3 = FUN_000034c8();
  puVar1 = DAT_000010e0;
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
  DAT_000010e0[1] = uVar8 | 2;
  FUN_00000644(uVar8 | 2,uVar4,0x3000);
  puVar2 = DAT_00001100;
  if (*(int *)(DAT_00001100 + 2) == 1) {
    puVar1[2] = extraout_r2;
    puVar1[100] = puVar1[100] | uVar7;
    *puVar2 = 0;
    FUN_000007f0(0x9f);
    FUN_000007f0(0);
    FUN_000007f0(0x1000);
    FUN_000007f0(0x1000);
    FUN_000007f0(0xe000);
    FUN_000007f0(0xf000);
    FUN_00000714(0x6f);
    *puVar1 = 1;
    iVar3 = FUN_00000758(1);
    iVar5 = puVar1[0x67];
    if (iVar5 != 0) {
      param_2[1] = (char)iVar5;
      *param_2 = (char)((uint)iVar5 >> 8);
      return iVar3;
    }
    *(undefined4 *)(puVar2 + 2) = 2;
    FUN_00000a00(param_1);
  }
  if (*(int *)(puVar2 + 2) == 2) {
    *puVar2 = 0;
    FUN_000007f0(&LAB_000090cc_1);
    FUN_000007f0(0xa0);
    FUN_000007f0(0x6dd);
    FUN_000007f0(0xff);
    FUN_00000714(0x6f);
    *puVar1 = 1;
    iVar3 = FUN_00000758(1);
    uVar6 = puVar1[0x10];
    *param_2 = (char)uVar6;
    param_2[1] = (char)((uint)uVar6 >> 8);
    return iVar3;
  }
  return *(int *)(puVar2 + 2);
}



/* Function: FUN_00000d98 */

int FUN_00000d98(short *param_1,int param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00000644();
  puVar2 = DAT_00001100;
  puVar1 = DAT_000010e0;
  if (*(int *)(DAT_00001100 + 2) == 2) {
    iVar3 = FUN_000034c8(param_1);
    if ((iVar3 == 0) && (*param_1 != 0)) {
      puVar1[1] = 2;
      puVar1[2] = (*(byte *)(param_1 + 1) & 7) << 0xc;
      puVar1[0x3e] = 2;
      puVar1[0x97] = param_3;
      *puVar2 = 0;
      FUN_000007f0(0xefcd);
      FUN_000007f0(param_2 << 8 | 0xa0);
      FUN_000007f0(0x7de);
      FUN_000007f0(0xb0);
      FUN_000007f0(0xff);
      FUN_00000714(0x6f);
      *puVar1 = 1;
      iVar3 = FUN_00000758(1);
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
    if (*(int *)(DAT_00001100 + 2) != 1) {
      return 9;
    }
    iVar3 = FUN_000034c8(param_1);
    if ((iVar3 == 0) && (*param_1 != 0)) {
      puVar1[1] = 2;
      puVar1[2] = 0x3000;
      puVar1[0x3e] = 2;
      if (*(char *)((int)param_1 + 0x15) != '\0') {
        puVar1[100] = 0x40000000;
      }
      *puVar2 = 0;
      FUN_000007f0(0xf);
      FUN_000007f0(param_2);
      FUN_000007f0(0x1000);
      FUN_000007f0(0xe000);
      FUN_000007f0(0xf000);
      FUN_00000714(0x6f);
      *puVar1 = 1;
      iVar3 = FUN_00000758(1);
      *param_3 = puVar1[0x67] & 0xff;
      return iVar3;
    }
  }
  return 4;
}



/* Function: FUN_00000f40 */

undefined4 FUN_00000f40(short *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  FUN_00000644();
  puVar2 = DAT_00001100;
  puVar1 = DAT_000010e0;
  if (*(int *)(DAT_00001100 + 2) == 2) {
    iVar3 = FUN_000034c8(param_1);
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
    FUN_000007f0(0xefcd);
    FUN_000007f0(param_2 << 8 | 0xa0);
    FUN_000007f0(0x7de);
    FUN_000007f0(0xb0);
    uVar5 = 0xff;
  }
  else {
    if (*(int *)(DAT_00001100 + 2) != 1) {
      return 9;
    }
    iVar3 = FUN_000034c8(param_1);
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
    FUN_000007f0(0x1f);
    FUN_000007f0(param_2);
    FUN_000007f0(param_3 & 0xffff);
    FUN_000007f0(0xe000);
    uVar5 = 0xf000;
  }
  FUN_000007f0(uVar5);
  FUN_00000714(0x6f);
  *puVar1 = 1;
  uVar5 = FUN_00000758(1);
  return uVar5;
}



/* Function: FUN_00001128 */

void FUN_00001128(uint param_1)

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



/* Function: FUN_00001150 */

undefined4 FUN_00001150(short *param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_000034c8();
  if ((iVar2 == 0) && (*param_1 != 0)) {
    FUN_000116f0(param_1 + 0x1a,param_2,0x24);
    *(undefined1 *)((int)param_1 + 0x15) = param_4;
    FUN_00000644();
    if (*(int *)(DAT_00001100 + 4) == 2) {
      param_1[1] = 0;
    }
    else {
      if (*(int *)(DAT_00001100 + 4) != 1) {
        return 9;
      }
      param_1[1] = 3;
    }
    param_1[7] = *(short *)(param_2 + 10);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0xc);
    *(uint *)(param_1 + 2) = (uint)*(ushort *)(param_2 + 10) * (uint)*(ushort *)(param_2 + 8);
    *(uint *)(param_1 + 4) = (uint)*(ushort *)(param_2 + 8);
    uVar1 = FUN_00001128(*(undefined4 *)(param_1 + 2));
    *(undefined1 *)((int)param_1 + 0x11) = uVar1;
    uVar1 = FUN_00001128(*(undefined4 *)(param_1 + 4));
    *(undefined1 *)(param_1 + 9) = uVar1;
    uVar1 = FUN_00001128(*(undefined2 *)(param_2 + 6));
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



/* Function: FUN_0000128c */

int FUN_0000128c(short *param_1,int param_2)

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
  iVar6 = FUN_000034c8(param_1);
  if ((iVar6 != 0) || (*param_1 == 0)) {
    return 4;
  }
  FUN_00000644();
  puVar5 = DAT_00001100;
  puVar4 = DAT_000010e0;
  if (*(int *)(DAT_00001100 + 2) != 2) {
    if (*(int *)(DAT_00001100 + 2) == 1) {
      iVar6 = FUN_00000d98(param_1,0xa0,&local_28);
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar6 = FUN_00000f40(param_1,0xa0,0);
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar6 = FUN_00000f40(param_1,0xb0,0);
      if (iVar6 != 0) {
        return iVar6;
      }
      sVar1 = *(sbyte *)((int)param_1 + 0x11);
      bVar2 = *(byte *)(param_1 + 9);
      *puVar5 = 0;
      uVar7 = (uint)(param_2 << sVar1) >> (uint)bVar2;
      FUN_000007f0(6);
      FUN_000007f0(0xe000);
      FUN_000007f0(0xd8);
      FUN_000007f0((uVar7 & 0xffffff) >> 0x10);
      FUN_000007f0((uVar7 & 0xffff) >> 8);
      FUN_000007f0(uVar7 & 0xff);
      FUN_000007f0(0xe000);
      FUN_000007f0(0xf000);
      FUN_00000714(0x6f);
      puVar4[1] = &DAT_00008102;
      puVar4[2] = 0x3000;
      puVar4[0x3e] = 0x3a;
      *puVar4 = 1;
      FUN_00000758(1);
      *puVar5 = 0;
      FUN_000007f0(0xf);
      FUN_000007f0(0xc0);
      FUN_000007f0(0x1000);
      FUN_000007f0(&DAT_0000e001);
      FUN_000007f0(0xf000);
      FUN_00000714(0x6f);
    }
    goto LAB_000014a0;
  }
  uVar7 = 0x8002;
  sVar3 = param_1[9];
  if (*(byte *)((int)param_1 + 0x15) != 0) {
    uVar7 = (uint)*(byte *)((int)param_1 + 0x15) << 9 | 0x8002;
  }
  *DAT_00001100 = 0;
  FUN_000007f0(0x60cd,(char)sVar3);
  FUN_000007f0((extraout_r12 & 0xff) << 8 | 0xa0);
  FUN_000007f0((extraout_r12_00 >> 8 & 0xff) << 8 | 0xa0);
  if (*(int *)(param_1 + 4) == 0x200) {
    if ((char)param_1[10] == '\x04') goto LAB_00001364;
  }
  else if ((char)param_1[10] == '\x05') {
LAB_00001364:
    FUN_000007f0(extraout_r12_00 >> 8 & 0xff00 | 0xa0);
  }
  FUN_000007f0(0xd0cd);
  FUN_000007f0(0xb0);
  FUN_000007f0(0xff);
  puVar4[1] = uVar7;
  puVar4[2] = (*(byte *)(param_1 + 1) & 7) << 0xc;
LAB_000014a0:
  *puVar4 = 1;
  FUN_00000758(1);
  iVar6 = FUN_00000ae8(param_1);
  return iVar6;
}



/* Function: FUN_000015c0 */

undefined4 FUN_000015c0(int param_1)

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



/* Function: FUN_00001638 */

int FUN_00001638(int param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,
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
  
  FUN_00000644();
  puVar3 = DAT_000010e0;
  iVar8 = DAT_000010d4 + (param_3 & 0xf) * 0x10;
  uVar9 = param_9 | param_7;
  local_2c = param_3;
  if (*(int *)(DAT_00001100 + 2) != 2) {
    if (*(int *)(DAT_00001100 + 2) != 1) {
      return 9;
    }
    uVar10 = 0;
    local_40 = 0;
    iVar4 = FUN_00000f40(param_1,0xa0,0);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = FUN_00000f40(param_1,0xb0,9);
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
      local_4c = DAT_000026d0 + (uint)*(ushort *)(param_1 + 0x26) * 0x10000 |
                 *(ushort *)(param_1 + 0xc) - 1 | 0x3000;
    }
    if (*DAT_000010dc != '\0') {
      FUN_000002d0(param_3);
      FUN_00005d04(DAT_000010d4,0x80,1);
      FUN_000004e4(iVar8);
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
      uVar6 = FUN_000015c0(*(undefined1 *)(param_1 + 0x18));
      local_40 = uVar6 | local_40;
      local_4c = local_4c | (uint)*(byte *)(param_1 + 0x1b) << 0x18;
      if (param_4 == 0) {
        uVar7 = (uint)*(byte *)(param_1 + 0x10);
        uVar6 = param_5 - uVar10;
        if (uVar7 < uVar6) {
          local_58 = uVar6 / uVar7;
          uVar6 = uVar7 * local_58;
        }
LAB_00001e90:
        local_50 = uVar6;
      }
      else {
        if (*(byte *)(param_1 + 0x10) < param_4) {
          return 4;
        }
        local_50 = *(byte *)(param_1 + 0x10) - param_4;
        uVar6 = param_5 - uVar10;
        if (uVar6 < local_50) goto LAB_00001e90;
      }
      *DAT_00001100 = 0;
      FUN_000007f0(0x13);
      FUN_000007f0((extraout_r12_03 & 0xffffff) >> 0x10);
      FUN_000007f0((extraout_r12_04 & 0xffff) >> 8);
      FUN_000007f0(extraout_r12_05 & 0xff);
      FUN_000007f0(0xe000);
      FUN_000007f0(0xf);
      FUN_000007f0(0xc0);
      FUN_000007f0(0x1000);
      FUN_000007f0(&DAT_0000e001);
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
          goto LAB_00002024;
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
LAB_00002024:
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
            FUN_000007f0(0x6b);
            FUN_000007f0((extraout_r12_06 & 0xffff) >> 8);
            FUN_000007f0(extraout_r12_07 & 0xff);
            FUN_000007f0(0x6000);
            FUN_000007f0(0x5200);
            FUN_000007f0(0xe000);
          }
          uVar6 = local_50;
          if (1 < local_58) {
            uVar6 = (uint)*(byte *)(param_1 + 0x10);
          }
          local_44 = local_44 | uVar6 * 0x1000000 - 0x1000000;
          puVar3[0x80] = 0;
          puVar3[0x81] = param_6 + (uVar10 << *(sbyte *)(param_1 + 0x13));
        }
        FUN_000007f0(0x6b);
        FUN_000007f0((param_4 & 0xffff) >> 8);
        FUN_000007f0(param_4 & 0xff);
        FUN_000007f0(0x6000);
        FUN_000007f0(0x3200);
        FUN_000007f0(0xe000);
        FUN_000007f0(0xf000);
      }
      if (local_58 < 2) {
        uVar6 = local_48 | local_50 * 0x1000000 - 0x1000000;
      }
      else {
        uVar6 = DAT_000026d0 + local_58 * 0x10000 |
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
      if (*DAT_000026d8 != '\0') {
        FUN_000002d0(local_2c);
        FUN_00005d04(DAT_000026dc,0x80,1);
        FUN_000004e4(DAT_000026dc + (local_2c & 0xf) * 0x10);
      }
      if (param_8 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = 0;
      }
      puVar3[0x84] = uVar6;
      if (param_8 != 0) {
        uVar6 = DAT_000026d4;
      }
      puVar3[0x85] = uVar6;
      FUN_00000714(0x6f);
      puVar3[2] = local_4c;
      puVar3[0x3e] = 0x3a;
      *puVar3 = local_40;
      FUN_00005d04(param_6,*(ushort *)(param_1 + 0xc) * param_5,1);
      FUN_00005d04(param_7,*(ushort *)(param_1 + 0x26) * param_5,1);
      FUN_00005d04(DAT_000026d4,0x10,1);
      FUN_00005d04(param_6,*(ushort *)(param_1 + 0xc) * param_5,2);
      FUN_00005d04(param_7,*(ushort *)(param_1 + 0x26) * param_5,2);
      FUN_00005d04(DAT_000026d4,0x10,2);
      *puVar3 = *puVar3 | 1;
      FUN_00000758(1);
      uVar6 = DAT_000026d4;
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
    if (param_7 != 0 && uVar6 != 0) goto LAB_00001790;
    local_4c = local_4c | 0x10;
    if (param_6 != 0) {
      local_58 = local_58 | *(ushort *)(param_1 + 0xc) - 1;
    }
    if (param_7 == 0) goto LAB_000017bc;
    uVar6 = *(ushort *)(param_1 + 0x26) - 1;
  }
  else {
LAB_00001790:
    local_4c = local_4c | 0x30;
    uVar6 = *(ushort *)(param_1 + 0xc) - 1 |
            DAT_000026d0 + (uint)*(ushort *)(param_1 + 0x26) * 0x10000;
  }
  local_58 = local_58 | uVar6;
LAB_000017bc:
  if (*(byte *)(param_1 + 0x15) != 0) {
    local_4c = local_4c | (uint)*(byte *)(param_1 + 0x15) << 9;
  }
  if (*(char *)(param_1 + 0x17) != '\0') {
    local_4c = local_4c | 0x40;
  }
  if (*DAT_000010dc != '\0') {
    FUN_000002d0(param_3);
    FUN_00005d04(DAT_000010d4,0x80,1);
    FUN_000004e4(iVar8);
  }
  do {
    local_50 = 1;
    local_44 = (uint)*(byte *)(param_1 + 0x19) | (uint)*(byte *)(param_1 + 0x1a) << 0x10;
    uVar6 = FUN_000015c0(*(undefined1 *)(param_1 + 0x18));
    local_40 = uVar6 | local_40;
    local_58 = local_58 | (uint)*(byte *)(param_1 + 0x1b) << 0x18;
    if (param_4 == 0) {
      uVar7 = (uint)*(byte *)(param_1 + 0x10);
      uVar6 = param_5 - uVar10;
      if (uVar7 < uVar6) {
        local_50 = uVar6 / uVar7;
        uVar6 = uVar7 * local_50;
      }
LAB_000018dc:
      local_48 = uVar6;
    }
    else {
      if (*(byte *)(param_1 + 0x10) < param_4) {
        return 4;
      }
      local_48 = *(byte *)(param_1 + 0x10) - param_4;
      uVar6 = param_5 - uVar10;
      if (uVar6 < local_48) goto LAB_000018dc;
    }
    uVar6 = local_2c +
            (param_2 << ((uint)*(byte *)(param_1 + 0x11) - (uint)*(byte *)(param_1 + 0x12) & 0xff));
    *DAT_00001100 = 0;
    FUN_000007f0(0xcd);
    FUN_000007f0((extraout_r12 & 0xff) << 8 | 0xa0);
    FUN_000007f0(extraout_r12_00 & 0xff00 | 0xa0);
    if (local_50 < 2) {
      uVar7 = (uVar6 & 0xff) << 8 | 0xa0;
    }
    else {
      uVar7 = (uVar6 & 0xff) << 8 | 0xa1;
    }
    FUN_000007f0(uVar7);
    FUN_000007f0((uVar6 >> 8 & 0xff) << 8 | 0xa0);
    if (*(char *)(param_1 + 0x14) == '\x05') {
      FUN_000007f0(extraout_r12_01 & 0xff00 | 0xa0);
    }
    FUN_000007f0(0x30cd);
    FUN_000007f0(0xb0);
    if (uVar9 == 0) {
      FUN_000007f0(0xd0);
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
      FUN_000007f0(0xd0);
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
      FUN_000007f0(uVar5);
    }
    if (*(byte *)(param_1 + 0x17) == 0) {
      uVar6 = 0;
      if (param_6 != 0) {
        uVar6 = uVar9;
      }
      if (param_6 != 0 && uVar6 != 0) goto LAB_00001af0;
    }
    else {
      uVar6 = (uint)*(byte *)(param_1 + 0x17);
      if (param_6 != 0) {
        uVar6 = uVar9;
      }
      if (param_6 != 0 && uVar6 != 0) {
        FUN_000007f0(0x5cd);
        param_4 = param_4 << *(sbyte *)(param_1 + 0x13);
        FUN_000007f0((param_4 & 0xff) << 8 | 0xa0);
        FUN_000007f0(extraout_r12_02 | param_4 & 0xff00);
        FUN_000007f0(&DAT_0000e0cd);
        FUN_000007f0(0xd0);
LAB_00001af0:
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
    FUN_000007f0(0xff);
    FUN_00000714(0x6f);
    if (local_50 < 2) {
      uVar6 = local_4c | local_48 * 0x1000000 - 0x1000000;
    }
    else {
      uVar6 = DAT_000026d0 + local_50 * 0x10000 |
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
      uVar6 = DAT_000026d4 + uVar10;
    }
    puVar3[0x85] = uVar6;
    *puVar3 = local_40;
    FUN_00005d04(param_6,*(ushort *)(param_1 + 0xc) * param_5,1);
    FUN_00005d04(param_7,*(ushort *)(param_1 + 0x26) * param_5,1);
    FUN_00005d04(DAT_000026d4,0x10,1);
    FUN_00005d04(param_6,*(ushort *)(param_1 + 0xc) * param_5,2);
    FUN_00005d04(param_7,*(ushort *)(param_1 + 0x26) * param_5,2);
    FUN_00005d04(DAT_000026d4,0x10,2);
    *puVar3 = *puVar3 | 1;
    FUN_00000758(1);
    uVar6 = DAT_000026d4;
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



/* Function: FUN_000022b0 */

undefined4
FUN_000022b0(short *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  uint uVar4;
  
  uVar2 = 0;
  psVar3 = param_1;
  uVar4 = param_3;
  iVar1 = FUN_000034c8();
  if (((iVar1 == 0) && (param_3 < (ushort)param_1[7])) && (*param_1 != 0)) {
    if (param_6 == 0) {
      param_6 = DAT_000026e0;
    }
    if (param_7 == 0) {
      param_7 = DAT_000026e4;
    }
    if (*(int *)(param_1 + 4) != 0x200) {
      uVar2 = FUN_00001638(param_1,param_2,param_3,param_4,param_5,param_6,param_7,DAT_000026e8,
                           param_9,psVar3,param_2,uVar4);
    }
    if (param_8 != 0) {
      FUN_00000a88(param_8,DAT_000026e8,param_5);
    }
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



/* Function: FUN_00002378 */

int FUN_00002378(int param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,
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
  FUN_00000644();
  if (*(int *)(DAT_000026ec + 2) == 1) {
    iVar6 = FUN_00000f40(param_1,0xa0,0);
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = FUN_00000f40(param_1,0xb0,9);
    if (iVar6 != 0) {
      return iVar6;
    }
    local_50 = 0x3000;
  }
  else if (*(int *)(DAT_000026ec + 2) == 2) {
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
    if (param_7 == 0) goto LAB_00002470;
    uVar7 = *(ushort *)(param_1 + 0x26) - 1;
  }
  else {
    local_48 = local_48 | 0x30;
    uVar7 = *(ushort *)(param_1 + 0xc) - 1 |
            DAT_000026d0 + (uint)*(ushort *)(param_1 + 0x26) * 0x10000;
  }
  local_50 = local_50 | uVar7;
LAB_00002470:
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
    uVar7 = FUN_000015c0(*(undefined1 *)(param_1 + 0x18));
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
    if (*(int *)(DAT_000026ec + 2) == 1) {
      uVar11 = (param_2 <<
               ((uint)*(byte *)(param_1 + 0x11) - (uint)*(byte *)(param_1 + 0x12) & 0xff)) +
               local_2c;
      *DAT_000026ec = 0;
      FUN_000007f0(0x13);
      FUN_000007f0((uVar11 & 0xffffff) >> 0x10);
      FUN_000007f0((uVar11 & 0xffff) >> 8);
      FUN_000007f0(uVar11 & 0xff);
      FUN_000007f0(0xe000);
      FUN_000007f0(0xf);
      FUN_000007f0(0xc0);
      FUN_000007f0(0x1000);
      FUN_000007f0(&DAT_0000e001);
      FUN_000007f0(6);
      FUN_000007f0(0xe000);
      puVar5 = DAT_000026f0;
      if (param_6 == 0) {
        if (param_7 == 0) goto LAB_00002a60;
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
        DAT_000026f0[0x80] = 0;
        if (cVar3 == '\0') {
          uVar8 = (uint)*(ushort *)(param_1 + 0x26);
        }
        else {
          uVar8 = (uint)*(byte *)(param_1 + 0x1b);
        }
        puVar5[0x81] = uVar10 * uVar8 + param_7;
        puVar5 = DAT_000026f0;
        DAT_000026f0[0x82] = 0xffffffff;
        puVar5[0x83] = 0xffffffff;
LAB_000027e8:
        FUN_000007f0(0x32);
        FUN_000007f0((param_4 & 0xffff) >> 8);
        FUN_000007f0(param_4 & 0xff);
        FUN_000007f0(0x2200);
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
          DAT_000026f0[0x80] = 0;
          puVar5[0x81] = param_6 + (uVar10 << *(sbyte *)(param_1 + 0x13));
          puVar5[0x82] = 0xffffffff;
          puVar5[0x82] = 0xffffffff;
          goto LAB_000027e8;
        }
        if (*(char *)(param_1 + 0x17) == '\0') {
          uVar8 = (uint)*(ushort *)(param_1 + 0xc) +
                  ((uint)*(ushort *)(param_1 + 0x26) + (uint)*(ushort *)(param_1 + 0xc)) * param_4;
        }
        else {
          uVar8 = *(ushort *)(param_1 + 0x26) * param_4 + *(int *)(param_1 + 8);
        }
        DAT_000026f0[0x80] = 0;
        puVar5[0x81] = param_6 + (uVar10 << *(sbyte *)(param_1 + 0x13));
        FUN_000007f0(0x32);
        FUN_000007f0((extraout_r12 & 0xffff) >> 8);
        FUN_000007f0(extraout_r12_00 & 0xff);
        FUN_000007f0(0x2200);
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
          FUN_000007f0(0xe000);
          FUN_000007f0(0x34);
          FUN_000007f0((uVar8 & 0xffff) >> 8);
          FUN_000007f0(uVar8 & 0xff);
          FUN_000007f0(0x4200);
        }
        uVar8 = uVar7;
        if (1 < local_4c) {
          uVar8 = (uint)*(byte *)(param_1 + 0x10);
        }
        uVar13 = uVar13 | uVar8 * 0x1000000 - 0x1000000;
      }
      uVar9 = 0xe000;
LAB_00002a5c:
      FUN_000007f0(uVar9);
    }
    else if (*(int *)(DAT_000026ec + 2) == 2) {
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
      *DAT_000026ec = 0;
      FUN_000007f0(&DAT_000080cd);
      FUN_000007f0((uVar8 & 0xff) << 8 | 0xa0);
      FUN_000007f0(uVar8 & 0xff00 | 0xa0);
      if (local_4c < 2) {
        uVar11 = (uVar4 & 0xff) << 8 | 0xa0;
      }
      else {
        uVar11 = (uVar4 & 0xff) << 8 | 0xa1;
      }
      FUN_000007f0(uVar11);
      uVar11 = uVar4 >> 8;
      FUN_000007f0((uVar11 & 0xff) << 8 | 0xa0);
      if (*(char *)(param_1 + 0x14) == '\x05') {
        uVar11 = uVar4 >> 0x10;
        FUN_000007f0((uVar11 & 0xff) << 8 | 0xa0);
      }
      FUN_000007f0(0xd1);
      puVar5 = DAT_000026f0;
      if (*(char *)(param_1 + 0x17) == '\0') {
        if (param_7 == 0) {
          if (param_6 == 0) goto LAB_00002a38;
        }
        else {
          if (param_6 == 0) goto LAB_000029c0;
          cVar3 = *(char *)(param_1 + 0x1f);
          DAT_000026f0[0x82] = extraout_r12_01;
          if (cVar3 == '\0') {
            uVar8 = (uint)*(ushort *)(param_1 + 0x26);
          }
          else {
            uVar8 = (uint)*(byte *)(param_1 + 0x1b);
          }
          puVar5[0x83] = uVar10 * uVar8 + param_7;
        }
LAB_00002a24:
        puVar5 = DAT_000026f0;
        DAT_000026f0[0x80] = extraout_r12_01;
        uVar8 = param_6 + (uVar10 << *(sbyte *)(param_1 + 0x13));
LAB_00002a14:
        puVar5[0x81] = uVar8;
      }
      else if (param_6 == 0) {
        if (param_7 != 0) {
LAB_000029c0:
          cVar3 = *(char *)(param_1 + 0x1f);
          DAT_000026f0[0x80] = extraout_r12_01;
          if (cVar3 == '\0') {
            uVar8 = (uint)*(ushort *)(param_1 + 0x26);
          }
          else {
            uVar8 = (uint)*(byte *)(param_1 + 0x1b);
          }
          uVar8 = uVar10 * uVar8 + param_7;
          goto LAB_00002a14;
        }
      }
      else {
        if (param_7 == 0) goto LAB_00002a24;
        FUN_000007f0(&DAT_000085cd);
        uVar8 = param_4 * *(ushort *)(param_1 + 0x26) + *(int *)(param_1 + 8);
        FUN_000007f0((uVar8 & 0xff) << 8 | 0xa0);
        FUN_000007f0(uVar8 & 0xff00 | 0xa0);
        FUN_000007f0(0xd3);
        puVar5 = DAT_000026f0;
        cVar3 = *(char *)(param_1 + 0x1f);
        DAT_000026f0[0x82] = extraout_r12_02;
        if (cVar3 == '\0') {
          uVar8 = (uint)*(ushort *)(param_1 + 0x26);
        }
        else {
          uVar8 = (uint)*(byte *)(param_1 + 0x1b);
        }
        puVar5[0x83] = uVar10 * uVar8 + param_7;
        puVar5 = DAT_000026f0;
        DAT_000026f0[0x80] = extraout_r12_02;
        puVar5[0x81] = param_6 + (uVar10 << *(sbyte *)(param_1 + 0x13));
        uVar8 = uVar7;
        if (1 < local_4c) {
          uVar8 = (uint)*(byte *)(param_1 + 0x10);
        }
        uVar13 = uVar13 | uVar8 * 0x1000000 - 0x1000000;
      }
LAB_00002a38:
      FUN_000007f0(0x10cd);
      FUN_000007f0(0xb0);
      FUN_000007f0(0x70cd);
      FUN_000007f0(0xdd);
      uVar9 = 0xff;
      goto LAB_00002a5c;
    }
LAB_00002a60:
    FUN_00000714(0x6f);
    if (local_4c < 2) {
      if (*(int *)(DAT_000026ec + 2) == 2) {
        uVar13 = uVar13 | uVar7 * 0x1000000 - 0x1000000;
      }
      uVar8 = uVar7 * 0x1000000 - 0x1000000 | local_48;
    }
    else {
      uVar8 = (uint)*(byte *)(param_1 + 0x10) * 0x1000000 - 0x1000000 | local_48 |
              DAT_000026d0 + local_4c * 0x10000;
    }
    DAT_000026f0[1] = uVar8;
    if (*DAT_000026d8 != '\0') {
      FUN_000002d0(local_2c);
      if (*(int *)(DAT_000026ec + 2) == 2) {
        uVar9 = 0x200;
LAB_00002b10:
        FUN_00005d04(DAT_000026dc,uVar9);
      }
      else if (*(int *)(DAT_000026ec + 2) == 1) {
        uVar9 = 0x80;
        goto LAB_00002b10;
      }
      FUN_000004e4(DAT_000026dc + (local_2c & 0xf) * 0x10);
    }
    if (param_6 == 0 || param_9 == 0 && param_7 == 0) {
      DAT_000026f0[3] = 0;
    }
    else {
      DAT_000026f0[3] = uVar13;
    }
    puVar5 = DAT_000026f0;
    *DAT_000026f0 = local_44;
    puVar5[2] = local_50;
    puVar5[0x3e] = 0x3a;
    iVar6 = *(int *)(DAT_000026ec + 2);
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
      FUN_000007f0(0x10);
      FUN_000007f0((uVar11 & 0xffffff) >> 0x10);
      FUN_000007f0((uVar11 & 0xffff) >> 8);
      FUN_000007f0(uVar11 & 0xff);
      FUN_000007f0(0xe000);
      FUN_000007f0(0xf);
      FUN_000007f0(0xc0);
      FUN_000007f0(0x1000);
      FUN_000007f0(&LAB_0000e200_1);
      FUN_000007f0(0xf000);
    }
    FUN_00005d04(param_6,*(ushort *)(param_1 + 0xc) * param_5,1);
    FUN_00005d04(param_7,*(ushort *)(param_1 + 0x26) * param_5,1);
    *puVar5 = *puVar5 | 1;
    iVar6 = FUN_00000758(1);
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



/* Function: FUN_00002c70 */

undefined4
FUN_00002c70(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,int param_6
            ,int param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = 0;
  iVar3 = param_1;
  uVar4 = param_3;
  iVar1 = FUN_000034c8();
  if (((iVar1 == 0) && (param_3 < *(ushort *)(param_1 + 0xe))) && (param_5 < 9)) {
    if (param_6 == 0) {
      FUN_00011754(DAT_000026e0,*(ushort *)(param_1 + 0xc) * param_5,0xff);
      param_6 = DAT_000026e0;
    }
    if (param_7 == 0) {
      FUN_00011754(DAT_000026e4,*(ushort *)(param_1 + 0x26) * param_5,0xff);
      param_7 = DAT_000026e4;
    }
    if (*(int *)(param_1 + 8) != 0x200) {
      uVar2 = FUN_00002378(param_1,param_2,param_3,param_4,param_5,param_6,param_7,DAT_000026e8,
                           param_8,iVar3,param_2,uVar4);
    }
    if (param_9 != 0) {
      FUN_00000a88(param_9,DAT_000026e8,param_5);
    }
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



/* Function: FUN_00002d5c */

void FUN_00002d5c(undefined4 *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 extraout_r12;
  
  puVar3 = DAT_000026f0;
  uVar6 = 0;
  iVar7 = 0;
  DAT_000026f0[1] = 2;
  puVar3[0x3e] = 0x3a;
  *DAT_000026ec = 0;
  FUN_000007f0(0x1f0);
  FUN_000007f0(0xff);
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
  FUN_00000714(0x6f);
  *puVar3 = 1;
  FUN_00000758();
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
  iVar5 = DAT_000026d0;
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
  FUN_00000758(1);
  return;
}



/* Function: FUN_00002e88 */

void FUN_00002e88(undefined1 *param_1,int param_2)

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
  
  FUN_00000714(0x6f);
  uVar6 = (uint)(byte)param_1[1] * 0x1000000 - 0x1000000;
  uVar7 = uVar6 | 0x8000;
  if (param_2 != 0) {
    uVar7 = uVar6 | 0x8100;
  }
  uVar9 = uVar7 | 3;
  uVar6 = DAT_000026d0 + (uint)*(ushort *)(param_1 + 2) * 0x10000;
  bVar1 = param_1[0x1c];
  if (param_1[0x21] != '\0') {
    uVar9 = uVar7 | 0x43;
  }
  iVar8 = *(int *)(param_1 + 8);
  uVar3 = *(ushort *)(param_1 + 0x1e);
  uVar7 = FUN_000015c0(*param_1);
  puVar5 = DAT_000026f0;
  bVar2 = param_1[0x20];
  uVar4 = *(ushort *)(param_1 + 4);
  *DAT_000026f0 = uVar7;
  puVar5[1] = uVar9;
  puVar5[2] = iVar8 - 1U | (uint)bVar1 << 0x18 | uVar6;
  puVar5[3] = (uint)uVar4 | (uint)uVar3 << 0x10 | (uint)bVar2 << 7;
  puVar5[0x3e] = 0x4038;
  *puVar5 = *puVar5 | 8;
  FUN_00000758(1);
  return;
}



/* Function: FUN_00002f48 */

undefined4 FUN_00002f48(int param_1)

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
  
  FUN_00011764(&local_30,0x1c);
  FUN_00011764(DAT_00003510,0x1000);
  iVar4 = DAT_00003510;
  if (*(char *)(param_1 + 0x21) == '\0') {
    for (uVar3 = 0; uVar3 < *(byte *)(param_1 + 1); uVar3 = uVar3 + 1) {
      FUN_0001161c(uVar3 * ((uint)*(ushort *)(param_1 + 2) + *(int *)(param_1 + 8)) + iVar4,
                   uVar3 * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10));
      FUN_0001161c(*(int *)(param_1 + 8) +
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
  FUN_00000714(0x6f);
  FUN_00005d04(local_30,local_24,1);
  FUN_00005d04(local_2c,local_20,1);
  FUN_00002d5c(&local_30);
  iVar1 = FUN_00002e88(param_1,1);
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
    FUN_00000714(0x6f);
    FUN_00005d04(local_30,local_24,2);
    FUN_00005d04(local_2c,local_20,2);
    FUN_00002d5c(&local_30);
    if (*(char *)(param_1 + 0x21) == '\0') {
      for (uVar3 = 0; uVar3 < *(byte *)(param_1 + 1); uVar3 = uVar3 + 1) {
        FUN_0001161c(uVar3 * *(ushort *)(param_1 + 2) + *(int *)(param_1 + 0x14),
                     uVar3 * (*(int *)(param_1 + 8) + (uint)*(ushort *)(param_1 + 2)) + iVar4 +
                     *(int *)(param_1 + 8));
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_00003144 */

undefined4 FUN_00003144(int param_1)

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
  FUN_00011764(&local_38,0x1c);
  FUN_00011764(DAT_00003510,0x1000);
  iVar4 = DAT_00003510;
  if (*(char *)(param_1 + 0x21) == '\0') {
    for (uVar3 = 0; uVar3 < *(byte *)(param_1 + 1); uVar3 = uVar3 + 1) {
      FUN_0001161c(uVar3 * ((uint)*(ushort *)(param_1 + 2) + *(int *)(param_1 + 8)) + iVar4,
                   uVar3 * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10));
      FUN_0001161c(*(int *)(param_1 + 8) +
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
  FUN_00000714(0x6f);
  FUN_00005d04(local_38,local_2c,1);
  FUN_00005d04(local_34,local_28,1);
  FUN_00002d5c(&local_38);
  FUN_00002e88(param_1,0);
  for (uVar3 = 0; uVar3 < *(byte *)(param_1 + 1); uVar3 = uVar3 + 1) {
    uVar1 = *(uint *)(DAT_00003514 + (uVar3 & 0xfffffffc)) >> ((uVar3 & 3) << 3);
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
    FUN_00000714(0x6f);
    FUN_00005d04(local_38,local_2c,2);
    FUN_00005d04(local_34,local_28,2);
    FUN_00002d5c(&local_38);
    if (*(char *)(param_1 + 0x21) == '\0') {
      for (uVar3 = 0; uVar3 < *(byte *)(param_1 + 1); uVar3 = uVar3 + 1) {
        FUN_0001161c(uVar3 * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10),
                     uVar3 * ((uint)*(ushort *)(param_1 + 2) + *(int *)(param_1 + 8)) + iVar4);
        FUN_0001161c(uVar3 * *(ushort *)(param_1 + 2) + *(int *)(param_1 + 0x14),
                     uVar3 * (*(int *)(param_1 + 8) + (uint)*(ushort *)(param_1 + 2)) + iVar4 +
                     *(int *)(param_1 + 8));
      }
    }
  }
  return 0;
}



/* Function: FUN_000033a8 */

int FUN_000033a8(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_24 [4];
  
  iVar3 = DAT_00003518;
  iVar2 = FUN_000022b0(param_1,param_2,*(undefined1 *)(param_1 + 0x1d),
                       *(undefined1 *)(param_1 + 0x1e),1,0,DAT_00003518,auStack_24,0);
  if (iVar2 != 0) {
    return iVar2;
  }
  uVar1 = *(undefined1 *)(iVar3 + (uint)*(ushort *)(param_1 + 0x24));
  if (*(char *)(param_1 + 0x16) == '\0') {
    uVar4 = FUN_000034e4(uVar1);
    if (5 < uVar4) goto LAB_00003434;
  }
  else {
    iVar2 = FUN_000034e4(uVar1);
    iVar3 = FUN_000034e4(*(undefined1 *)((uint)*(ushort *)(param_1 + 0x24) + iVar3 + 1));
    if (0xb < (uint)(iVar3 + iVar2)) {
LAB_00003434:
      *param_3 = 1;
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}



/* Function: FUN_0000344c */

undefined4 FUN_0000344c(void)

{
  return 0;
}



/* Function: FUN_00003454 */

void FUN_00003454(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00003518;
  iVar2 = FUN_000022b0(param_1,param_2,*(undefined2 *)(param_1 + 0x48),0,1,0,DAT_00003518,0,0);
  if (iVar2 == 0) {
    *(undefined1 *)(iVar1 + (uint)*(ushort *)(param_1 + 0x4c)) = 0;
    FUN_00002c70(param_1,param_2,*(undefined2 *)(param_1 + 0x48),0,1,0,iVar1,0,0);
  }
  return;
}



/* Function: FUN_000034c8 */

undefined4 FUN_000034c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_0000351c;
  if (param_1 != DAT_0000351c) {
    iVar2 = DAT_0000351c + 0x68;
  }
  if (param_1 != DAT_0000351c && param_1 != iVar2) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_000034e4 */

int FUN_000034e4(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 >> 1 & 0x55) + (param_1 & 0x55);
  uVar1 = (uVar1 >> 2 & 0x33) + (uVar1 & 0x33);
  return (uVar1 & 0xf) + (uVar1 >> 4);
}



/* Function: FUN_00003520 */

undefined4 FUN_00003520(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  uVar2 = *param_2;
  bVar11 = 99 < uVar2;
  bVar10 = uVar2 == 100;
  if (uVar2 < 0x65) {
    bVar11 = 0x1d < uVar2;
    bVar10 = uVar2 == 0x1e;
  }
  if (bVar11 && !bVar10) {
    return 0;
  }
  *param_1 = uVar2;
  uVar2 = 0;
  while (uVar2 < *param_2) {
    param_1[uVar2 * 4 + 1] = param_2[uVar2 * 4 + 1];
    param_1[uVar2 * 4 + 2] = param_2[uVar2 * 4 + 2];
    param_1[uVar2 * 4 + 3] = param_2[uVar2 * 4 + 3];
    if (param_2[uVar2 * 4 + 4] == 0xffffffff) {
      param_1[uVar2 * 4 + 4] = 0xffffffff;
      uVar2 = uVar2 + 1;
    }
    else {
      param_1[uVar2 * 4 + 4] = param_2[uVar2 * 4 + 4];
      uVar2 = uVar2 + 1;
    }
  }
  uVar2 = 0;
  do {
    uVar1 = uVar2;
    if (*param_1 <= uVar2) {
      for (uVar2 = 0; uVar2 < *param_1 - 1; uVar2 = uVar2 + 1) {
        if (param_1[uVar2 * 4 + 4] == 0xffffffff) {
          param_1[uVar2 * 4 + 4] = param_1[uVar2 * 4 + 7] - param_1[uVar2 * 4 + 3];
        }
      }
      if (param_1[uVar2 * 4 + 4] == 0xffffffff) {
        param_1[uVar2 * 4 + 4] =
             (*(int *)(param_3 + 8) - *(int *)(param_3 + 0x10)) - param_1[uVar2 * 4 + 3];
      }
      return 1;
    }
    while (uVar1 = uVar1 + 1, uVar1 < *param_1) {
      uVar4 = param_1[uVar2 * 4 + 3];
      uVar3 = param_1[uVar1 * 4 + 3];
      if (uVar3 < uVar4) {
        uVar6 = param_1[uVar2 * 4 + 2];
        uVar8 = param_1[uVar1 * 4 + 1];
        uVar9 = param_1[uVar1 * 4 + 2];
        uVar5 = param_1[uVar1 * 4 + 4];
        uVar7 = param_1[uVar2 * 4 + 4];
        param_1[uVar1 * 4 + 1] = param_1[uVar2 * 4 + 1];
        param_1[uVar1 * 4 + 2] = uVar6;
        param_1[uVar1 * 4 + 3] = uVar4;
        param_1[uVar1 * 4 + 4] = uVar7;
        param_1[uVar2 * 4 + 1] = uVar8;
        param_1[uVar2 * 4 + 2] = uVar9;
        param_1[uVar2 * 4 + 3] = uVar3;
        param_1[uVar2 * 4 + 4] = uVar5;
      }
      else if (uVar4 == uVar3) {
        return 0;
      }
    }
    uVar2 = uVar2 + 1;
  } while( true );
}



/* Function: FUN_00003660 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00003660(void)

{
  undefined2 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStack_cbc [12];
  uint local_cb0;
  int local_cac [400];
  uint local_66c;
  int local_668 [400];
  undefined4 local_28;
  
  local_28 = 0;
  FUN_00000670(DAT_000037e8);
  iVar2 = FUN_00000aa8(0);
  iVar4 = DAT_000037ec;
  *(int *)(DAT_000037ec + 0x18) = iVar2;
  if (iVar2 == 0) {
    pcVar3 = s_fdl2_NANDCTL_Open_failed__000037f0;
  }
  else {
    FUN_00000844(iVar2);
    iVar2 = FUN_00000c48(*(undefined4 *)(iVar4 + 0x18),&local_28);
    if (iVar2 != 0) {
      FUN_00005c74(s_fdl2_NANDCTL_ReadID_failed__0000380c);
      FUN_0000344c(*(undefined4 *)(iVar4 + 0x18));
      return 1;
    }
    uVar1 = CONCAT11((undefined1)local_28,local_28._1_1_);
    FUN_00005c74(s_fdl2_nand_flash_ID___0x_0x__0000382c);
    iVar2 = FUN_00000218(uVar1,0);
    *(int *)(iVar4 + 0x10) = iVar2;
    if (iVar2 == 0) {
      FUN_0000344c(*(undefined4 *)(iVar4 + 0x18));
      FUN_00005c74(s_fdl2_not_fand_NandFlash_ID_in_Na_0000384c,local_28 & 0xff,local_28._1_1_);
      return 1;
    }
    iVar2 = FUN_0000026c((uint)*(ushort *)(iVar2 + 0x14) * (uint)*(ushort *)(iVar2 + 0x1a) *
                         (uint)*(ushort *)(iVar2 + 0x18));
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = FUN_00003520(&local_66c,iVar2,*(undefined4 *)(iVar4 + 0x10));
    if (iVar2 == 0) {
      return 1;
    }
    *(undefined1 *)(iVar4 + 1) = 0;
    iVar4 = FUN_000051a4();
    if (iVar4 != 0) {
      return 1;
    }
    iVar4 = FUN_000053a4(0);
    if (iVar4 != 3) {
      if (iVar4 != 0) {
        FUN_00005c74(s_fdl2_SCI_FTL_Load_failed____0x_00003888);
        return 1;
      }
LAB_000037c4:
      iVar4 = FUN_0000546e(0,auStack_cbc);
      if (iVar4 == 0) {
        if (local_cb0 != local_66c) {
          return 4;
        }
        for (uVar5 = 0; uVar5 < local_cb0; uVar5 = uVar5 + 1) {
          iVar2 = local_cac[uVar5 * 4];
          iVar4 = local_668[uVar5 * 4];
          bVar6 = iVar2 == iVar4;
          if (bVar6) {
            iVar2 = local_cac[uVar5 * 4 + 1];
            iVar4 = local_668[uVar5 * 4 + 1];
          }
          bVar7 = bVar6 && iVar2 == iVar4;
          if (bVar6 && iVar2 == iVar4) {
            bVar7 = local_cac[uVar5 * 4 + 2] == local_668[uVar5 * 4 + 2];
          }
          if (!bVar7) {
            return 4;
          }
          if ((local_cac[uVar5 * 4 + 3] != local_668[uVar5 * 4 + 3] &&
              local_cac[uVar5 * 4 + 3] != -1) && local_668[uVar5 * 4 + 3] != -1) {
            return 4;
          }
        }
        iVar4 = FUN_000058be(0,1,0,0,0,0,0);
        if (iVar4 == 0) {
          FUN_00005c74(s_fdl2_nand_flash_init_success__00003cf8);
          return 0;
        }
      }
      else {
        FUN_00005c74(s_fdl2_SCI_FTL_GetDevInfo_failed__000038f8);
      }
      FUN_000054de(0);
      return 1;
    }
    FUN_00005c74(s_fdl2_start_format__000038a8);
    iVar4 = FUN_000052c4(0,&local_66c);
    if (iVar4 == 0) {
      iVar4 = FUN_000053a4(0);
      if (iVar4 == 0) goto LAB_000037c4;
      pcVar3 = s_fdl2_SCI_FTL_Load_failed__000038dc;
    }
    else {
      pcVar3 = s_fdl2_SCI_FTL_Format_failed__000038bc;
    }
  }
  FUN_00005c74(pcVar3);
  return 1;
}



/* Function: FUN_000039e0 */

undefined4 FUN_000039e0(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_660 [1604];
  undefined4 local_1c;
  
  local_1c = 0;
  FUN_000054de();
  iVar2 = DAT_000037ec;
  FUN_00000844(*(undefined4 *)(DAT_000037ec + 0x18));
  iVar1 = FUN_00000c48(*(undefined4 *)(iVar2 + 0x18),&local_1c);
  if (iVar1 == 0) {
    iVar1 = FUN_00000218(CONCAT11((undefined1)local_1c,local_1c._1_1_),0);
    *(int *)(iVar2 + 0x10) = iVar1;
    if (((iVar1 != 0) &&
        (iVar1 = FUN_0000026c((uint)*(ushort *)(iVar1 + 0x14) * (uint)*(ushort *)(iVar1 + 0x1a) *
                              (uint)*(ushort *)(iVar1 + 0x18)), iVar1 != 0)) &&
       (iVar2 = FUN_00003520(auStack_660,iVar1,*(undefined4 *)(iVar2 + 0x10)), iVar2 != 0)) {
      FUN_000054de(0);
      iVar2 = FUN_000052c4(0,auStack_660);
      if ((iVar2 == 0) && (iVar2 = FUN_000053a4(0), iVar2 == 0)) {
        return 0;
      }
    }
  }
  else {
    FUN_0000344c(*(undefined4 *)(iVar2 + 0x18));
  }
  return 1;
}



/* Function: FUN_00003abc */

undefined4 FUN_00003abc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_680 [12];
  uint local_674;
  undefined4 local_670 [400];
  undefined1 auStack_30 [4];
  int local_2c;
  int local_28;
  
  iVar2 = FUN_0000546e(param_1,auStack_680);
  iVar1 = DAT_000037ec;
  if (iVar2 == 0) {
    *(undefined4 *)(DAT_000037ec + 4) = 0xffff;
    FUN_00011764(DAT_00003d18,0x78);
    iVar2 = DAT_00003d18;
    for (uVar5 = 0; uVar5 < local_674; uVar5 = uVar5 + 1) {
      iVar3 = FUN_00005534(param_1,local_670[uVar5 * 4],DAT_00003d1c,4);
      if (iVar3 != 0) goto LAB_00003b60;
      iVar3 = FUN_0000561a(*(undefined4 *)(iVar1 + 0x1c),auStack_30);
      uVar4 = *(undefined4 *)(iVar1 + 0x1c);
      if (iVar3 != 0) {
        FUN_00005838(uVar4);
        goto LAB_00003b60;
      }
      iVar3 = FUN_00005838(uVar4);
      if (iVar3 != 0) goto LAB_00003b60;
      *(int *)(iVar2 + uVar5 * 4) = local_28 * local_2c;
    }
    uVar4 = 0;
  }
  else {
    FUN_000054de(param_1);
LAB_00003b60:
    uVar4 = 1;
  }
  return uVar4;
}



/* Function: FUN_00003b98 */

undefined4 FUN_00003b98(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint local_698 [3];
  uint local_68c;
  int local_688 [400];
  undefined1 auStack_48 [4];
  uint local_44;
  int local_40;
  undefined4 local_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  
  local_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  iVar2 = FUN_0000546e(param_1,local_698);
  iVar1 = DAT_000037ec;
  if (iVar2 != 0) {
    FUN_000054de(local_34);
    return 1;
  }
  if (param_2 != local_698[0] * (param_2 / local_698[0])) {
    return 1;
  }
  if (param_3 != local_698[0] * (param_3 / local_698[0])) {
    return 1;
  }
  for (uVar3 = 0;
      (uVar3 < local_68c && (uVar4 = *(uint *)(DAT_00003d18 + uVar3 * 4), uVar4 <= param_2));
      uVar3 = uVar3 + 1) {
    param_2 = param_2 - uVar4;
  }
  if (local_68c != uVar3) {
    for (; uVar3 < local_68c; uVar3 = uVar3 + 1) {
      iVar2 = FUN_00005534(local_34,local_688[uVar3 * 4],DAT_00003d1c,4);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_0000561a(*(undefined4 *)(iVar1 + 0x1c),auStack_48);
      if (iVar2 != 0) {
LAB_00003c80:
        FUN_00005838(*(undefined4 *)(iVar1 + 0x1c));
        return 1;
      }
      uVar4 = local_40 * local_44 - param_2;
      if (uVar4 < param_3) {
        iVar2 = FUN_00005686(*(undefined4 *)(iVar1 + 0x1c),param_2 / local_44,uVar4 / local_44,
                             param_4);
        bVar5 = iVar2 != 0;
        bVar6 = iVar2 != 4;
        if (bVar5 && bVar6) {
          iVar2 = local_688[uVar3 * 4];
        }
        if ((bVar5 && bVar6) && iVar2 != 0) goto LAB_00003c80;
        param_4 = param_4 + uVar4;
        param_2 = 0;
        param_3 = param_3 - uVar4;
      }
      else {
        iVar2 = FUN_00005686(*(undefined4 *)(iVar1 + 0x1c),param_2 / local_44,param_3 / local_44,
                             param_4);
        bVar5 = iVar2 != 0;
        bVar6 = iVar2 != 4;
        if (bVar5 && bVar6) {
          iVar2 = local_688[uVar3 * 4];
        }
        bVar7 = iVar2 != 0;
        if ((!bVar5 || !bVar6) || !bVar7) {
          param_4 = param_4 + param_3;
        }
        if ((!bVar5 || !bVar6) || !bVar7) {
          param_2 = param_2 + param_3;
        }
        if ((!bVar5 || !bVar6) || !bVar7) {
          param_3 = 0;
        }
        if ((bVar5 && bVar6) && bVar7) goto LAB_00003c80;
      }
      iVar2 = FUN_00005838(*(undefined4 *)(iVar1 + 0x1c));
      if (iVar2 != 0) {
        return 1;
      }
      if (param_3 == 0) {
        return 0;
      }
    }
    if (local_68c != uVar3) {
      return 0;
    }
  }
  FUN_00011754(param_4,param_3,0xff);
  return 0;
}



/* Function: FUN_00003d7c */

undefined4 FUN_00003d7c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_678 [12];
  uint local_66c;
  undefined4 local_668 [400];
  undefined1 auStack_28 [8];
  undefined4 local_20;
  
  iVar1 = DAT_000037ec;
  *(undefined4 *)(DAT_000037ec + 0xc) = param_1;
  iVar2 = FUN_0000546e(param_1,auStack_678);
  if (iVar2 == 0) {
    for (uVar3 = 0; uVar3 < local_66c; uVar3 = uVar3 + 1) {
      iVar2 = FUN_00005534(*(undefined4 *)(iVar1 + 0xc),local_668[uVar3 * 4],DAT_00003d1c,4);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_0000561a(*(undefined4 *)(iVar1 + 0x1c),auStack_28);
      if ((iVar2 != 0) ||
         (iVar2 = FUN_0000576a(*(undefined4 *)(iVar1 + 0x1c),0,local_20), iVar2 != 0)) {
        FUN_00005838(*(undefined4 *)(iVar1 + 0x1c));
        goto LAB_00003e64;
      }
      iVar2 = FUN_00005838(*(undefined4 *)(iVar1 + 0x1c));
      if (iVar2 != 0) goto LAB_00003e64;
      *(undefined4 *)(iVar1 + 0x1c) = 0;
    }
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    iVar2 = FUN_00005534(*(undefined4 *)(iVar1 + 0xc),local_668[0],DAT_00003d1c,4);
    if (iVar2 == 0) {
      return 0;
    }
LAB_00003e64:
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  else {
    FUN_000054de(*(undefined4 *)(iVar1 + 0xc));
  }
  return 1;
}



/* Function: FUN_00003fdc */

uint FUN_00003fdc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint uStack_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  puVar1 = DAT_000037ec;
  bVar8 = (param_1 & 0x80000000) == 0;
  uVar4 = param_1;
  if (bVar8) {
    uVar4 = 5;
  }
  *DAT_000037ec = 0;
  pcVar3 = DAT_00004308;
  if (!bVar8) {
    uVar4 = uVar4 & 0x7fffffff;
    uStack_30 = param_1;
    local_2c = param_2;
    local_28 = param_3;
    local_24 = param_4;
    if (uVar4 == 1) {
      puVar1[1] = 1;
      *(undefined4 *)(puVar1 + 0x14) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      if (*pcVar3 != '\0') {
        iVar5 = FUN_00004b8c(1);
        *(int *)(puVar1 + 8) = iVar5;
        if (iVar5 != 0) {
          thunk_EXT_FUN_80105e74(s_start_verify_part____s_0000430c,*(undefined4 *)(iVar5 + 4));
        }
      }
      iVar5 = FUN_0000128c(*(undefined4 *)(puVar1 + 0x18),0);
      if ((iVar5 == 0) && (iVar5 = FUN_0000128c(*(undefined4 *)(puVar1 + 0x18),1), iVar5 == 0)) {
        return 0;
      }
    }
    else {
      if (uVar4 == 0x10000000) {
        *puVar1 = 1;
        uVar4 = FUN_00003d7c(0);
        return uVar4;
      }
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 0x24) = 0;
      uVar2 = DAT_00003d1c;
      *(undefined4 *)(puVar1 + 0x20) = 0;
      iVar5 = FUN_00005534(0,uVar4,uVar2,4);
      if (iVar5 == 0) {
        iVar5 = FUN_0000561a(*(undefined4 *)(puVar1 + 0x1c),&uStack_30);
        if (iVar5 == 0) {
          if (local_28 * local_2c < param_2) {
            FUN_00005838(*(undefined4 *)(puVar1 + 0x1c));
            return 6;
          }
          if (local_24 != 0) {
            uVar7 = local_28 / local_24;
            for (uVar6 = 0; uVar6 < uVar7; uVar6 = uVar6 + 1) {
              iVar5 = FUN_0000576a(*(undefined4 *)(puVar1 + 0x1c),local_24 * uVar6);
              if (iVar5 != 0) goto LAB_00004124;
            }
          }
          *(undefined4 *)(puVar1 + 8) = 0;
          *(undefined4 *)(puVar1 + 0x28) = 0;
          if (*pcVar3 != '\0') {
            iVar5 = FUN_00004b8c(uVar4);
            *(int *)(puVar1 + 8) = iVar5;
            if (iVar5 != 0) {
              thunk_EXT_FUN_80105e74(s_start_verify_part____s_0000430c,*(undefined4 *)(iVar5 + 4));
            }
          }
          FUN_00011754(DAT_00004324,0x20000,0xff);
          return 0;
        }
LAB_00004124:
        FUN_00005838(*(undefined4 *)(puVar1 + 0x1c));
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* Function: FUN_00004188 */

void FUN_00004188(void)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_100 [200];
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  undefined2 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 local_18;
  undefined1 local_17;
  
  puVar3 = DAT_00004328;
  iVar4 = *(int *)(DAT_000037ec + 0x10);
  iVar6 = (uint)*(ushort *)(iVar4 + 0x14) * (uint)*(ushort *)(iVar4 + 0x18);
  uVar2 = *(ushort *)(iVar4 + 0x1a);
  *DAT_00004328 = DAT_0000432c;
  puVar3[1] = 1;
  puVar3[0x53] = (uint)*(ushort *)(iVar4 + 0x14);
  puVar3[0x54] = (uint)*(byte *)(iVar4 + 0x2a);
  puVar3[0x55] = 0;
  puVar3[0x56] = (uint)*(byte *)(iVar4 + 0x29);
  puVar3[0x57] = (uint)*(ushort *)(iVar4 + 0x16);
  bVar1 = *(byte *)(iVar4 + 0x24);
  if (bVar1 == 8) {
    uVar5 = 3;
  }
  else if (bVar1 < 9) {
    if (bVar1 == 1) {
      uVar5 = 0;
    }
    else if (bVar1 == 2) {
      uVar5 = 1;
    }
    else {
      if (bVar1 != 4) {
LAB_00004244:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar5 = 2;
    }
  }
  else if (bVar1 == 0xc) {
    uVar5 = 4;
  }
  else if (bVar1 == 0x10) {
    uVar5 = 5;
  }
  else {
    if (bVar1 != 0x18) goto LAB_00004244;
    uVar5 = 6;
  }
  puVar3[0x58] = uVar5;
  puVar3[0x59] = (uint)*(byte *)(iVar4 + 0x23);
  puVar3[0x5a] = (uint)*(ushort *)(iVar4 + 0x18);
  puVar3[0x5b] = 0;
  puVar3[0x5c] = 0;
  uVar5 = FUN_00001128((uint)uVar2 * iVar6);
  puVar3[0x78] = uVar5;
  uVar5 = FUN_00001128(iVar6);
  puVar3[0x79] = uVar5;
  FUN_00011764(puVar3 + 0x7a,0x14);
  FUN_00011764(puVar3 + 0x5d,0x6c);
  FUN_00011764(&local_38,0x24);
  FUN_00011754(auStack_100,200,0xff);
  local_37 = 1;
  local_38 = 0x28;
  local_30 = 0x200;
  local_17 = 0;
  local_2c = 0;
  local_1c = 0;
  local_34 = 0;
  local_28 = puVar3;
  local_36 = 0x6c;
  local_1a = 0;
  local_18 = 0;
  local_24 = auStack_100;
  FUN_00002f48(&local_38);
  FUN_0001161c(puVar3 + 0x5d,local_24,0x6c);
  return;
}



/* Function: FUN_000044b4 */

undefined4 FUN_000044b4(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint unaff_r4;
  bool bVar6;
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [20];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [32];
  ushort local_28 [2];
  uint local_24;
  int local_20;
  uint local_18;
  
  pcVar4 = DAT_000037ec;
  if (DAT_000037ec[1] == '\x01') {
    if (0x8000 < *(uint *)(DAT_000037ec + 0x14)) {
      return 1;
    }
    if (*(int *)(DAT_000037ec + 8) != 0) {
      FUN_00006098(1,&local_18);
      if ((local_18 & 2) == 0) {
        iVar1 = 3;
        do {
          FUN_00006098(iVar1,auStack_54 + iVar1 * 4,1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0xb);
      }
      else {
        iVar1 = 0xb;
        do {
          FUN_00006098(iVar1,auStack_74 + iVar1 * 4,1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x13);
      }
      iVar1 = DAT_00004328;
      iVar5 = *(int *)(DAT_00004328 + 0x30) + DAT_00004328;
      if (*(int *)(iVar5 + 0x220) == 0 && *(int *)(iVar5 + 0x224) == 0) {
        pcVar4 = s_cert_empty_0000480c;
      }
      else {
        FUN_00005d78(DAT_00004328 + 0x200,*(int *)(DAT_00004328 + 0x30),auStack_68);
        iVar1 = FUN_00005e0a(auStack_48,auStack_68,*(int *)(iVar5 + 0x228) + iVar1);
        if (iVar1 != 0) {
          FUN_00005c74(s_verify_suc_00004828);
          goto LAB_000045d8;
        }
        pcVar4 = s_verify_fail_00004818;
      }
LAB_000045e8:
      FUN_00005c74(pcVar4);
      return 1;
    }
LAB_000045d8:
    FUN_00004188();
    uVar2 = FUN_00004bbc();
    return uVar2;
  }
  if (*DAT_000037ec == '\x01') {
    if ((*(int *)(DAT_000037ec + 0x1c) != 0) && (iVar1 = FUN_00005838(), iVar1 != 0)) {
      pcVar4[0x1c] = '\0';
      pcVar4[0x1d] = '\0';
      pcVar4[0x1e] = '\0';
      pcVar4[0x1f] = '\0';
      return 1;
    }
    return 0;
  }
  iVar1 = FUN_0000561a(*(int *)(DAT_000037ec + 0x1c),local_28);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(uint *)(pcVar4 + 0x24);
  if ((local_28[0] & 0xff00) == 0) {
    if (uVar3 != 0) {
      unaff_r4 = uVar3 / local_24;
      if (uVar3 != local_24 * unaff_r4) {
        unaff_r4 = unaff_r4 + 1;
      }
      iVar1 = FUN_000056f8(*(undefined4 *)(pcVar4 + 0x1c),*(undefined4 *)(pcVar4 + 0x20),unaff_r4,
                           DAT_00004324);
      if (iVar1 != 0) {
        return 1;
      }
    }
    *(uint *)(pcVar4 + 0x28) = *(int *)(pcVar4 + 0x20) + unaff_r4;
  }
  else {
    bVar6 = uVar3 != 0;
    if (bVar6) {
      unaff_r4 = uVar3 / local_24;
      uVar3 = uVar3 - local_24 * unaff_r4;
    }
    if (bVar6 && uVar3 != 0) {
      unaff_r4 = unaff_r4 + 1;
    }
    uVar3 = 0x20000 / local_24;
    *(uint *)(pcVar4 + 0x28) = *(int *)(pcVar4 + 0x20) + unaff_r4;
    while (iVar1 = *(int *)(pcVar4 + 0x20), uVar3 <= (uint)(local_20 - iVar1)) {
      iVar1 = FUN_000056f8(*(undefined4 *)(pcVar4 + 0x1c),iVar1,uVar3,DAT_00004324);
      if (iVar1 != 0) {
        return 1;
      }
      *(uint *)(pcVar4 + 0x20) = *(int *)(pcVar4 + 0x20) + uVar3;
      FUN_00011754(DAT_00004324,0x20000,0xff);
    }
    if ((local_20 != iVar1) &&
       (iVar1 = FUN_000056f8(*(undefined4 *)(pcVar4 + 0x1c),iVar1,local_20 - iVar1,DAT_00004324),
       iVar1 != 0)) {
      return 1;
    }
  }
  if (*(int *)(pcVar4 + 8) == 0) goto LAB_000047a0;
  iVar1 = FUN_00005686(*(undefined4 *)(pcVar4 + 0x1c),0,*(undefined4 *)(pcVar4 + 0x28),0x81000000);
  if (iVar1 != 0 && iVar1 != 4) {
    pcVar4 = s_read_flash_fail_00004834;
    goto LAB_000045e8;
  }
  iVar5 = *(int *)(pcVar4 + 8);
  if (*(int *)(iVar5 + 8) == 1) {
    if (*(int *)(iVar5 + 0xc) == 0) {
LAB_00004784:
      iVar1 = FUN_00005f22();
    }
    else if (*(int *)(iVar5 + 0xc) == 1) {
      uVar2 = 0x6200;
LAB_0000478c:
      iVar1 = FUN_00005f88(uVar2,0x81000000,0x100000);
    }
  }
  else if (*(int *)(iVar5 + 8) == 2) {
    if (*(int *)(iVar5 + 0xc) == 0) goto LAB_00004784;
    uVar2 = DAT_00004848;
    if (*(int *)(iVar5 + 0xc) == 1) goto LAB_0000478c;
  }
  if (iVar1 == 0) {
    FUN_00005c74(s_verify_fail_00004818);
    FUN_00011754(DAT_00004324,0x20000,0xff);
    FUN_000056f8(*(undefined4 *)(pcVar4 + 0x1c),0,0x20000 / local_24,DAT_00004324);
    return 1;
  }
  FUN_00005c74(s_verify_suc_00004828);
LAB_000047a0:
  iVar1 = FUN_00005838(*(undefined4 *)(pcVar4 + 0x1c));
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}



/* Function: FUN_00004b00 */

undefined4 FUN_00004b00(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_984 [601];
  undefined4 local_20 [4];
  
  FUN_00011764(local_984,0x964);
  local_20[0] = 0;
  if (param_1 != (undefined4 *)0x0 && param_2 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)(*(int *)(DAT_00004d80 + 0x10) + 8);
    iVar1 = FUN_000058be(0,0x10,0,0,local_984,0x964,local_20);
    if (iVar1 == 0) {
      *param_2 = local_984[0];
      return 0;
    }
  }
  return 1;
}



/* Function: FUN_00004b8c */

void FUN_00004b8c(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(DAT_00004d84 + uVar1 * 0x10) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  return;
}



/* Function: FUN_00004bbc */

undefined4 FUN_00004bbc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = DAT_00004d80;
  uVar5 = (uint)*(ushort *)(*(int *)(DAT_00004d80 + 0x10) + 0x14) *
          (uint)*(ushort *)(*(int *)(DAT_00004d80 + 0x10) + 0x18);
  FUN_00000414();
  FUN_000003d4();
  iVar1 = DAT_00004328;
  for (uVar4 = 0; uVar4 < 0x8000 / uVar5; uVar4 = uVar4 + 1) {
    iVar3 = FUN_00002c70(*(undefined4 *)(iVar2 + 0x18),0,uVar4,0,
                         *(undefined2 *)(*(int *)(iVar2 + 0x10) + 0x18),uVar4 * uVar5 + iVar1,0,1,0)
    ;
    if (iVar3 != 0) goto LAB_00004c80;
  }
  uVar4 = 0;
  while( true ) {
    if (0x8000 / uVar5 <= uVar4) {
      FUN_000003f4();
      return 0;
    }
    iVar3 = FUN_00002c70(*(undefined4 *)(iVar2 + 0x18),1,uVar4,0,
                         *(undefined2 *)(*(int *)(iVar2 + 0x10) + 0x18),uVar4 * uVar5 + iVar1,0,1,0)
    ;
    if (iVar3 != 0) break;
    uVar4 = uVar4 + 1;
  }
LAB_00004c80:
  FUN_000003f4();
  return 1;
}



/* Function: FUN_00004ca4 */

undefined4 FUN_00004ca4(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint extraout_r2;
  uint uVar4;
  uint extraout_r2_00;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  iVar2 = DAT_00004d80;
  uVar5 = 0;
  uVar6 = (uint)*(ushort *)(*(int *)(DAT_00004d80 + 0x10) + 0x14) *
          (uint)*(ushort *)(*(int *)(DAT_00004d80 + 0x10) + 0x18);
  iVar7 = param_2 - uVar6 * (param_2 / uVar6);
  FUN_00011754(DAT_00004324,0x20000,0x5a);
  FUN_00000414();
  FUN_000003d4();
  iVar1 = DAT_00004324;
  uVar4 = extraout_r2;
  while( true ) {
    bVar8 = ((param_3 + iVar7 + uVar6) - 1) / uVar6 <= uVar5;
    if (!bVar8) {
      uVar4 = uVar5 + param_2 / uVar6;
    }
    if (bVar8 || 0x8000 / uVar6 <= uVar4) break;
    iVar3 = FUN_000022b0(*(undefined4 *)(iVar2 + 0x18),0,uVar4,0,
                         *(undefined2 *)(*(int *)(iVar2 + 0x10) + 0x18),uVar5 * uVar6 + iVar1,0,0,1)
    ;
    if (iVar3 != 0) {
      FUN_000003f4();
      return 1;
    }
    uVar5 = uVar5 + 1;
    uVar4 = extraout_r2_00;
  }
  FUN_000003f4();
  FUN_0001161c(param_1,iVar1 + iVar7,param_3);
  return 0;
}



/* Function: FUN_000051a4 */

undefined4 FUN_000051a4(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar1 = DAT_00005590;
  *DAT_0000558c = 1;
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
      puVar4 = (undefined4 *)FUN_00000260();
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



/* Function: FUN_00005232 */

undefined4 FUN_00005232(uint *param_1)

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
        else if (uVar5 == uVar4) goto LAB_000052b4;
      }
    }
    for (uVar2 = 0; uVar2 < *param_1; uVar2 = uVar2 + 1) {
      uVar3 = param_1[uVar2 * 4 + 2];
      if ((((uVar3 != 1) && (uVar3 != 0x102)) && (uVar3 != 0x100)) && (uVar3 != 0x101))
      goto LAB_000052b4;
    }
    uVar1 = 1;
  }
  else {
LAB_000052b4:
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_000052c4 */

undefined4 FUN_000052c4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_658 [1608];
  
  FUN_000116f0(auStack_658,param_2,0x644);
  iVar1 = FUN_00005232(auStack_658);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = FUN_0000af5c();
  piVar3 = (int *)(DAT_00005590 + param_1 * 0xca0);
  if ((iVar1 != 0) || (piVar3[2] == -1)) {
    if (*piVar3 != 1) {
      return 1;
    }
    if (*(code **)(piVar3[3] + 4) == Reset) {
      uVar2 = 7;
    }
    else {
      uVar2 = (**(code **)(piVar3[3] + 4))(param_1,param_2);
    }
    iVar1 = FUN_0000af5c();
    if (iVar1 != 0) {
      return uVar2;
    }
    if (piVar3[2] == -1) {
      return uVar2;
    }
  }
  return 7;
}



/* Function: FUN_000053a4 */

int FUN_000053a4(int param_1)

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
  
  iVar1 = FUN_0000af5c();
  piVar5 = (int *)(DAT_00005590 + param_1 * 0xca0);
  if ((iVar1 == 0) && (piVar5[2] != -1)) {
    return 7;
  }
  if (*piVar5 != 1) {
    iVar1 = 1;
    goto LAB_00005456;
  }
  if (*(code **)(piVar5[3] + 0xc) != Reset) {
    iVar1 = (**(code **)(piVar5[3] + 0xc))(param_1,&local_668);
    if (iVar1 != 0) goto LAB_00005456;
    iVar3 = FUN_00005232(&local_65c);
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
      goto LAB_00005456;
    }
    (**(code **)(piVar5[3] + 0x10))(param_1);
  }
  iVar1 = 7;
LAB_00005456:
  iVar3 = FUN_0000af5c();
  if (iVar3 != 0) {
    return iVar1;
  }
  if (piVar5[2] != -1) {
    return 7;
  }
  return iVar1;
}



/* Function: FUN_0000546e */

undefined4 FUN_0000546e(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0000af5c();
  piVar3 = (int *)(DAT_00005590 + param_1 * 0xca0);
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
    iVar1 = FUN_0000af5c();
    if ((iVar1 != 0) || (piVar3[2] == -1)) {
      return uVar4;
    }
  }
  return 7;
}



/* Function: FUN_000054de */

int FUN_000054de(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_0000af5c();
  piVar3 = (int *)(DAT_00005590 + param_1 * 0xca0);
  if ((iVar1 != 0) || (piVar3[2] == -1)) {
    if (*piVar3 == 2) {
      if (*(code **)(piVar3[3] + 0x10) == Reset) {
        iVar1 = 7;
      }
      else {
        iVar1 = (**(code **)(piVar3[3] + 0x10))(param_1);
        if (iVar1 == 0) {
          *piVar3 = 1;
        }
      }
    }
    else {
      iVar1 = 1;
    }
    iVar2 = FUN_0000af5c();
    if ((iVar2 != 0) || (piVar3[2] == -1)) {
      return iVar1;
    }
  }
  return 7;
}



/* Function: FUN_00005534 */

int FUN_00005534(int param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int local_28;
  
  uVar5 = 0;
  local_28 = param_4;
  iVar2 = FUN_0000af5c();
  piVar4 = (int *)(DAT_00005590 + param_1 * 0xca0);
  if ((iVar2 == 0) && (piVar4[2] != -1)) {
    return 7;
  }
  if ((*piVar4 == 2) || (*piVar4 == 3)) {
    while ((uVar5 < (uint)piVar4[7] && (piVar4[uVar5 * 8 + 0xb] != param_2))) {
      uVar5 = uVar5 + 1;
    }
    if (piVar4[7] == uVar5) {
      iVar2 = 5;
      goto LAB_000055de;
    }
    if (piVar4[uVar5 * 8 + 8] == 0) {
      if (*(code **)(piVar4[3] + 0x14) == Reset) {
        iVar2 = 7;
      }
      else {
        iVar2 = (**(code **)(piVar4[3] + 0x14))(param_1,param_2,&local_28,param_4);
        piVar1 = DAT_000059ac;
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
      goto LAB_000055de;
    }
  }
  iVar2 = 1;
LAB_000055de:
  iVar3 = FUN_0000af5c();
  if (iVar3 != 0) {
    return iVar2;
  }
  if (piVar4[2] != -1) {
    return 7;
  }
  return iVar2;
}



/* Function: FUN_000055f4 */

undefined4 FUN_000055f4(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = DAT_000059b0 + param_2 * 0xca0;
  if (((param_3 < *(uint *)(iVar1 + 0x1c)) &&
      (iVar1 = iVar1 + param_3 * 0x20, *(int *)(iVar1 + 0x20) != 0)) &&
     (*(int *)(iVar1 + 0x24) == param_1)) {
    return 1;
  }
  return 0;
}



/* Function: FUN_0000561a */

undefined4 FUN_0000561a(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  
  iVar1 = FUN_0000af5c();
  iVar4 = DAT_000059b0 + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0;
  if ((iVar1 != 0) || (*(int *)(iVar4 + 8) == -1)) {
    iVar1 = FUN_000055f4(param_1,(param_1 & 0xfff) >> 8,param_1 & 0xff);
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
    iVar1 = FUN_0000af5c();
    if (iVar1 != 0) {
      return uVar2;
    }
    if (*(int *)(iVar4 + 8) == -1) {
      return uVar2;
    }
  }
  return 7;
}



/* Function: FUN_00005686 */

undefined4 FUN_00005686(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  
  iVar1 = FUN_0000af5c();
  iVar3 = DAT_000059b0 + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0;
  if ((iVar1 != 0) || (*(int *)(iVar3 + 8) == -1)) {
    iVar1 = FUN_000055f4(param_1,(param_1 & 0xfff) >> 8,param_1 & 0xff);
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
    iVar1 = FUN_0000af5c();
    if (iVar1 != 0) {
      return uVar2;
    }
    if (*(int *)(iVar3 + 8) == -1) {
      return uVar2;
    }
  }
  return 7;
}



/* Function: FUN_000056f8 */

undefined4 FUN_000056f8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  
  iVar1 = FUN_0000af5c();
  iVar3 = DAT_000059b0 + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0;
  if ((iVar1 != 0) || (*(int *)(iVar3 + 8) == -1)) {
    iVar1 = FUN_000055f4(param_1,(param_1 & 0xfff) >> 8,param_1 & 0xff);
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
    iVar1 = FUN_0000af5c();
    if (iVar1 != 0) {
      return uVar2;
    }
    if (*(int *)(iVar3 + 8) == -1) {
      return uVar2;
    }
  }
  return 7;
}



/* Function: FUN_0000576a */

undefined4 FUN_0000576a(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_0000af5c();
  iVar4 = DAT_000059b0 + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0;
  if ((iVar1 == 0) && (*(int *)(iVar4 + 8) != -1)) {
    return 7;
  }
  iVar1 = FUN_000055f4(param_1,(param_1 & 0xfff) >> 8,param_1 & 0xff);
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
      goto LAB_000057d6;
    }
  }
  uVar5 = 2;
LAB_000057d6:
  iVar1 = FUN_0000af5c();
  if (iVar1 != 0) {
    return uVar5;
  }
  if (*(int *)(iVar4 + 8) != -1) {
    return 7;
  }
  return uVar5;
}



/* Function: FUN_000057f0 */

undefined4 FUN_000057f0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_000055f4(param_1,(param_1 & 0xfff) >> 8,param_1 & 0xff);
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  else {
    iVar1 = DAT_000059b0 + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0;
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar1 + 0xc) + 0x28);
    if (UNRECOVERED_JUMPTABLE != Reset) {
                    /* WARNING: Could not recover jumptable at 0x0000582e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)
                        (*(undefined4 *)(iVar1 + (param_1 & 0xff) * 0x20 + 0x28),param_2,param_3,
                         param_4);
      return uVar2;
    }
    uVar2 = 7;
  }
  return uVar2;
}



/* Function: FUN_00005838 */

int FUN_00005838(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = param_1 & 0xff;
  iVar1 = FUN_0000af5c();
  piVar3 = (int *)(DAT_000059b0 + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0);
  if ((iVar1 != 0) || (piVar3[2] == -1)) {
    if (*piVar3 == 3) {
      iVar1 = FUN_000055f4(param_1,(param_1 & 0xfff) >> 8,uVar4);
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
    iVar2 = FUN_0000af5c();
    if (iVar2 != 0) {
      return iVar1;
    }
    if (piVar3[2] == -1) {
      return iVar1;
    }
  }
  return 7;
}



/* Function: FUN_000058be */

undefined4
FUN_000058be(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  
  if (param_2 == 3) {
    iVar2 = FUN_0000af5c();
    piVar4 = (int *)(DAT_000059b0 + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0);
    if ((iVar2 == 0) && (piVar4[2] != -1)) {
      return 7;
    }
    if (*piVar4 == 3) {
      iVar2 = FUN_000055f4(param_1,(param_1 & 0xfff) >> 8,param_1 & 0xff);
      if (iVar2 == 0) {
        uVar3 = 2;
        goto LAB_000059a2;
      }
      if (*(code **)(piVar4[3] + 0x30) != Reset) {
        uVar3 = (**(code **)(piVar4[3] + 0x30))
                          (piVar4[(param_1 & 0xff) * 8 + 10],3,param_3,param_4,param_5,param_6,
                           param_7);
        goto LAB_000059a2;
      }
      goto LAB_0000593a;
    }
  }
  else {
    if (param_2 < 4) {
      if ((param_2 != 1) && (param_2 != 2)) {
        return 7;
      }
    }
    else if ((param_2 != 0x10) && (param_2 != 0x11)) {
      return 7;
    }
    uVar5 = param_1;
    iVar2 = param_2;
    iVar1 = FUN_0000af5c();
    piVar4 = (int *)(DAT_000059b0 + param_1 * 0xca0);
    if ((iVar1 == 0) && (piVar4[2] != -1)) {
      return 7;
    }
    if ((*piVar4 == 3) || (*piVar4 == 2)) {
      if (*(code **)(piVar4[3] + 0x30) != Reset) {
        uVar3 = (**(code **)(piVar4[3] + 0x30))
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar5,iVar2);
        goto LAB_000059a2;
      }
LAB_0000593a:
      uVar3 = 7;
      goto LAB_000059a2;
    }
  }
  uVar3 = 1;
LAB_000059a2:
  iVar2 = FUN_0000af5c();
  if (iVar2 != 0) {
    return uVar3;
  }
  if (piVar4[2] != -1) {
    return 7;
  }
  return uVar3;
}



/* Function: FUN_000059b8 */

void FUN_000059b8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_f8;
  
  FUN_00011764(&local_100,0x100);
  (*(code *)*DAT_00005afc)(DAT_00005afc,0x1c200);
  FUN_00005c74(s_fdl2_started__00005b00);
  FUN_00005cb0();
  FUN_0000c5f2();
  FUN_0000a7e0();
  iVar1 = FUN_00003660();
  if (iVar1 == 0) {
    FUN_0000b47a();
  }
  else if (iVar1 != 4) {
    FUN_00005c74(s_nand_init_failed__0x_0x__00005b10,iVar1);
    switch(iVar1) {
    case 0:
      uVar2 = 0x80;
      break;
    default:
      uVar2 = 0x84;
      break;
    case 2:
      uVar2 = 0x97;
      break;
    case 3:
      uVar2 = 0x98;
      break;
    case 4:
      uVar2 = 0x96;
      break;
    case 5:
      uVar2 = 0x89;
      break;
    case 6:
      uVar2 = 0x8a;
      break;
    case 7:
      uVar2 = 0xa5;
    }
    FUN_0000a8f2(uVar2);
    goto LAB_00005ac8;
  }
  FUN_00003abc(0);
  FUN_0000a734();
  FUN_0000a744(1,DAT_00005b2c,0);
  FUN_0000a744(2,DAT_00005b30,0);
  FUN_0000a744(3,DAT_00005b34,0);
  FUN_0000a744(6,DAT_00005b38,0);
  FUN_0000a744(10,DAT_00005b3c,0);
  FUN_0000a744(5,DAT_00005b40,0);
  FUN_0000a744(0x17,DAT_00005b44,0);
  FUN_0000a744(7,DAT_00005b48,0);
  FUN_0000a744(0xb,DAT_00005b4c,0);
  FUN_0000a744(0x29,DAT_00005b50,0);
  if (iVar1 == 0) {
    FUN_0000a8f2(0x80);
  }
  else {
    FUN_00005c74(DAT_00005b54);
    local_100 = 2;
    local_fc = 0;
    local_f8 = 0;
    iVar1 = FUN_0000a83e();
    *(undefined2 *)(iVar1 + 0x10) = 0x96;
    FUN_0000a790(iVar1 + 0x14,&local_100,0x100);
    *(undefined2 *)(iVar1 + 0x12) = 0x100;
    FUN_0000aa80(iVar1);
    FUN_0000a864(iVar1);
  }
  iVar1 = FUN_00005d24();
  if ((iVar1 != 0) && (iVar1 = FUN_00005d32(), iVar1 != 0)) {
    *DAT_00005b58 = 1;
  }
  FUN_0000a75c(1);
LAB_00005ac8:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_00005c0e */

undefined4 FUN_00005c0e(int param_1,undefined4 param_2)

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



/* Function: FUN_00005c2a */

undefined4 FUN_00005c2a(undefined4 *param_1)

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



/* Function: FUN_00005c56 */

void FUN_00005c56(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  while (uVar1 < param_2) {
    FUN_00005c0e(DAT_00005ca8,*param_1);
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* Function: FUN_00005c74 */

undefined4 FUN_00005c74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_110 [252];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_000111bc(auStack_110,0xfa,param_1,&uStack_c);
  if (0 < iVar1) {
    auStack_110[iVar1] = 0;
    FUN_00005c56(auStack_110);
  }
  return 0;
}



/* Function: FUN_00005cb0 */

void FUN_00005cb0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = DAT_00005d20;
  piVar4 = DAT_00005d1c;
  DAT_00005d1c[-1] = DAT_00005d20;
  FUN_00011764(iVar1,0x10000);
  for (; *piVar4 != 0; piVar4 = piVar4 + 4) {
    uVar3 = (uint)piVar4[1] >> 0x14;
    uVar2 = (uint)(piVar4[1] + piVar4[2]) >> 0x14;
    if (uVar2 < uVar3) {
      *(uint *)(iVar1 + uVar3 * 4) = piVar4[3] + uVar3 * 0x100000;
    }
    for (; uVar3 < uVar2; uVar3 = uVar3 + 1) {
      *(uint *)(iVar1 + uVar3 * 4) = piVar4[3] + uVar3 * 0x100000;
    }
  }
  FUN_000121e4();
  FUN_00012070();
  return;
}



/* Function: FUN_00005d04 */

undefined4 FUN_00005d04(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (param_3 < 3)) {
    if (param_2 < 0x100001) {
      FUN_00012420();
      return param_1;
    }
    uVar1 = FUN_00012548();
    return uVar1;
  }
  return param_1;
}



/* Function: FUN_00005d24 */

bool FUN_00005d24(void)

{
  return (*DAT_00005ff0 & 1) != 0;
}



/* Function: FUN_00005d32 */

undefined4 FUN_00005d32(void)

{
  int in_r3;
  int local_10;
  
  local_10 = in_r3;
  FUN_00006098(1,&local_10);
  FUN_00006102(DAT_00005ff4);
  if (local_10 << 0x1e < 0) {
    if (*DAT_00005ff4 >> 0x16 != 0x3ff) {
      return 0;
    }
    if ((~(byte)DAT_00005ff4[1] & 0x3f) != 0) {
      return 0;
    }
  }
  else if ((*DAT_00005ff4 & 0x3fffff) >> 6 != 0xffff) {
    return 0;
  }
  return 1;
}



/* Function: FUN_00005d78 */

void FUN_00005d78(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a0 [140];
  
  iVar2 = 0;
  FUN_0000c28c(auStack_a0);
  for (; iVar1 = param_1 + iVar2 * 0x40, 0x3f < param_2; param_2 = param_2 + -0x40) {
    FUN_0000c2cc(auStack_a0,iVar1,0x40);
    iVar2 = iVar2 + 1;
  }
  FUN_0000c4ca(auStack_a0,iVar1,param_2);
  FUN_0001161c(param_3,auStack_a0,0x20);
  return;
}



/* Function: FUN_00005db6 */

int FUN_00005db6(int param_1)

{
  return param_1 + 0x200 + *(int *)(param_1 + 0x30);
}



/* Function: FUN_00005dce */

int FUN_00005dce(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_r2;
  
  iVar1 = FUN_00005db6(param_1,param_2,param_1);
  return *(int *)(iVar1 + 0x28) + extraout_r2;
}



/* Function: FUN_00005ddc */

undefined8 FUN_00005ddc(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  undefined2 uVar10;
  uint *extraout_r3;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  
  iVar1 = FUN_00005dce();
  puVar4 = (uint *)(iVar1 + 300);
  uVar7 = 0x20;
  uVar12 = (uint)extraout_r3 & 3;
  puVar5 = extraout_r3;
  uVar13 = uVar12;
  if (uVar12 != 0) {
    bVar9 = *(byte *)puVar4;
    puVar5 = (uint *)(iVar1 + 0x12d);
    if (uVar12 < 3) {
      puVar5 = (uint *)(iVar1 + 0x12e);
      uVar13 = (uint)*(byte *)(iVar1 + 0x12d);
    }
    *(byte *)extraout_r3 = bVar9;
    puVar4 = puVar5;
    if (uVar12 < 2) {
      puVar4 = (uint *)((int)puVar5 + 1);
      bVar9 = (byte)*puVar5;
    }
    puVar2 = (uint *)((int)extraout_r3 + 1);
    if (uVar12 < 3) {
      puVar2 = (uint *)((int)extraout_r3 + 2);
      *(byte *)((int)extraout_r3 + 1) = (byte)uVar13;
    }
    uVar7 = uVar12 + 0x1c;
    puVar5 = puVar2;
    if (uVar12 < 2) {
      puVar5 = (uint *)((int)puVar2 + 1);
      *(byte *)puVar2 = bVar9;
    }
  }
  uVar12 = (uint)puVar4 & 3;
  if (uVar12 != 0) {
    uVar8 = uVar7 - 4;
    if (3 < uVar7) {
      puVar4 = (uint *)((int)puVar4 - uVar12);
      uVar13 = *puVar4;
      puVar2 = puVar5;
      if (uVar12 == 2) {
        do {
          puVar3 = puVar4;
          uVar12 = uVar13 >> 0x10;
          puVar4 = puVar3 + 1;
          uVar13 = *puVar4;
          bVar16 = 3 < uVar8;
          uVar8 = uVar8 - 4;
          uVar12 = uVar12 | uVar13 << 0x10;
          puVar5 = puVar2 + 1;
          *puVar2 = uVar12;
          puVar2 = puVar5;
        } while (bVar16);
        puVar4 = (uint *)((int)puVar3 + 6);
      }
      else if (uVar12 < 3) {
        do {
          puVar3 = puVar4;
          uVar12 = uVar13 >> 8;
          puVar4 = puVar3 + 1;
          uVar13 = *puVar4;
          bVar16 = 3 < uVar8;
          uVar8 = uVar8 - 4;
          uVar12 = uVar12 | uVar13 << 0x18;
          puVar5 = puVar2 + 1;
          *puVar2 = uVar12;
          puVar2 = puVar5;
        } while (bVar16);
        puVar4 = (uint *)((int)puVar3 + 5);
      }
      else {
        do {
          puVar3 = puVar4;
          uVar12 = uVar13 >> 0x18;
          puVar4 = puVar3 + 1;
          uVar13 = *puVar4;
          bVar16 = 3 < uVar8;
          uVar8 = uVar8 - 4;
          uVar12 = uVar12 | uVar13 << 8;
          puVar5 = puVar2 + 1;
          *puVar2 = uVar12;
          puVar2 = puVar5;
        } while (bVar16);
        puVar4 = (uint *)((int)puVar3 + 7);
      }
    }
    bVar11 = (byte)uVar13;
    bVar9 = (byte)uVar12;
    bVar17 = (bool)((byte)(uVar8 >> 1) & 1);
    uVar8 = uVar8 << 0x1f;
    bVar16 = (int)uVar8 < 0;
    if (bVar17) {
      pbVar6 = (byte *)((int)puVar4 + 1);
      bVar9 = (byte)*puVar4;
      puVar4 = (uint *)((int)puVar4 + 2);
      bVar11 = *pbVar6;
    }
    puVar2 = puVar4;
    if (bVar16) {
      puVar2 = (uint *)((int)puVar4 + 1);
      uVar8 = (uint)(byte)*puVar4;
    }
    if (bVar17) {
      pbVar6 = (byte *)((int)puVar5 + 1);
      *(byte *)puVar5 = bVar9;
      puVar5 = (uint *)((int)puVar5 + 2);
      *pbVar6 = bVar11;
    }
    puVar4 = puVar5;
    if (bVar16) {
      puVar4 = (uint *)((int)puVar5 + 1);
      *(byte *)puVar5 = (byte)uVar8;
    }
    return CONCAT44(puVar2,puVar4);
  }
  uVar13 = 0;
  while (uVar12 = uVar7 - 0x20, 0x1f < uVar7) {
    uVar7 = puVar4[1];
    uVar13 = puVar4[2];
    uVar8 = puVar4[3];
    *puVar5 = *puVar4;
    puVar5[1] = uVar7;
    puVar5[2] = uVar13;
    puVar5[3] = uVar8;
    uVar13 = puVar4[4];
    uVar7 = puVar4[5];
    uVar8 = puVar4[6];
    uVar14 = puVar4[7];
    puVar4 = puVar4 + 8;
    puVar5[4] = uVar13;
    puVar5[5] = uVar7;
    puVar5[6] = uVar8;
    puVar5[7] = uVar14;
    puVar5 = puVar5 + 8;
    uVar7 = uVar12;
  }
  if ((bool)((byte)(uVar12 >> 4) & 1)) {
    uVar13 = *puVar4;
    uVar8 = puVar4[1];
    uVar14 = puVar4[2];
    uVar15 = puVar4[3];
    puVar4 = puVar4 + 4;
    *puVar5 = uVar13;
    puVar5[1] = uVar8;
    puVar5[2] = uVar14;
    puVar5[3] = uVar15;
    puVar5 = puVar5 + 4;
  }
  if ((int)(uVar7 << 0x1c) < 0) {
    uVar13 = *puVar4;
    uVar8 = puVar4[1];
    puVar4 = puVar4 + 2;
    *puVar5 = uVar13;
    puVar5[1] = uVar8;
    puVar5 = puVar5 + 2;
  }
  puVar3 = puVar5;
  puVar2 = puVar4;
  if ((bool)((byte)(uVar12 >> 2) & 1)) {
    puVar2 = puVar4 + 1;
    uVar13 = *puVar4;
    puVar3 = puVar5 + 1;
    *puVar5 = uVar13;
  }
  uVar10 = (undefined2)uVar13;
  if ((uVar12 & 3) != 0) {
    bVar17 = (bool)((byte)(uVar12 >> 1) & 1);
    uVar7 = uVar7 << 0x1f;
    bVar16 = (int)uVar7 < 0;
    puVar4 = puVar2;
    if (bVar17) {
      puVar4 = (uint *)((int)puVar2 + 2);
      uVar10 = (undefined2)*puVar2;
    }
    puVar5 = puVar4;
    if (bVar16) {
      puVar5 = (uint *)((int)puVar4 + 1);
      uVar7 = (uint)(byte)*puVar4;
    }
    puVar4 = puVar3;
    if (bVar17) {
      puVar4 = (uint *)((int)puVar3 + 2);
      *(undefined2 *)puVar3 = uVar10;
    }
    puVar2 = puVar4;
    if (bVar16) {
      puVar2 = (uint *)((int)puVar4 + 1);
      *(byte *)puVar4 = (byte)uVar7;
    }
    return CONCAT44(puVar5,puVar2);
  }
  return CONCAT44(puVar2,puVar3);
}



/* Function: FUN_00005df4 */

bool FUN_00005df4(int param_1)

{
  if (param_1 != 0) {
    FUN_00006098(2,param_1,1);
  }
  return param_1 != 0;
}



/* Function: FUN_00005e0a */

undefined4 FUN_00005e0a(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 auStack_154 [256];
  undefined1 auStack_54 [32];
  uint local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  byte *pbStack_28;
  
  bVar1 = *param_3;
  local_30 = param_1;
  uStack_2c = param_2;
  pbStack_28 = param_3;
  FUN_00011764(auStack_154,0x100);
  FUN_00011764(auStack_54,0x20);
  pbVar5 = param_3 + 0x10c;
  if (bVar1 == 0) {
    FUN_00005d78(param_3 + 4,(*(uint *)(param_3 + 4) >> 3) + 8,auStack_54);
    iVar3 = FUN_00011584(param_2,pbVar5,0x20);
    if ((iVar3 != 0) || (iVar3 = FUN_00011584(local_30,auStack_54,0x20), iVar3 != 0)) {
LAB_00005e6e:
      pcVar2 = s_compare_hash_fail_0000600c;
      goto LAB_00005f02;
    }
    iVar3 = FUN_0000beec(param_3 + 8,param_3 + 0xc,*(undefined4 *)(param_3 + 4),param_3 + 0x134,
                         auStack_154);
    if (((0x20 << (uint)*param_3) + 8 != iVar3) ||
       (iVar3 = FUN_00011584(pbVar5,auStack_154), iVar3 != 0)) {
      pcVar2 = s_content_cert_hash_verify_fail_00006054;
      goto LAB_00005f02;
    }
    FUN_00005df4(&local_34);
    uVar4 = *(uint *)(param_3 + 0x130);
  }
  else {
    if (bVar1 != 1) {
      pcVar2 = s_cert_type_invalid_00005ff8;
      goto LAB_00005f02;
    }
    FUN_00005d78(param_3 + 4,(*(uint *)(param_3 + 4) >> 3) + 8,auStack_54);
    iVar3 = FUN_00011584(param_2,pbVar5,0x20);
    if ((iVar3 != 0) || (iVar3 = FUN_00011584(local_30,auStack_54,0x20), iVar3 != 0))
    goto LAB_00005e6e;
    iVar3 = FUN_0000beec(param_3 + 8,param_3 + 0xc,*(undefined4 *)(param_3 + 4),param_3 + 0x154,
                         auStack_154);
    if (((0x20 << (uint)*param_3) + 8 != iVar3) ||
       (iVar3 = FUN_00011584(pbVar5,auStack_154), iVar3 != 0)) {
      pcVar2 = s_key_cert_hash_verify_fail_00006020;
      goto LAB_00005f02;
    }
    FUN_00005df4(&local_34);
    uVar4 = *(uint *)(param_3 + 0x150);
  }
  if (local_34 <= uVar4) {
    return 1;
  }
  pcVar2 = s_antiroll_back_error_0000603c;
LAB_00005f02:
  FUN_00005c74(pcVar2);
  return 0;
}



/* Function: FUN_00005f22 */

undefined4 FUN_00005f22(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [32];
  
  uVar3 = 0;
  FUN_00011764(auStack_58,0x20);
  FUN_00005ddc(param_1,auStack_58);
  piVar2 = (int *)(DAT_00005ff4 + -8);
  iVar1 = *(int *)(param_2 + 0x30) + param_2 + 0x200;
  *piVar2 = iVar1;
  FUN_00011764(auStack_38,0x20);
  if (*(int *)(iVar1 + 0x20) == 0 && *(int *)(iVar1 + 0x24) == 0) {
    FUN_00005c74(s_cert_empty_00006074);
  }
  else {
    FUN_00005d78(param_2 + 0x200,*(undefined4 *)(param_2 + 0x30),auStack_38);
    uVar3 = FUN_00005e0a(auStack_58,auStack_38,*(int *)(*piVar2 + 0x28) + param_2);
  }
  return uVar3;
}



/* Function: FUN_00005f88 */

undefined4 FUN_00005f88(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [36];
  
  uVar3 = 0;
  FUN_00011764(auStack_60,0x20);
  FUN_00005ddc(param_1,auStack_60);
  iVar1 = DAT_00005ff4;
  iVar2 = *(int *)(param_2 + 0x30) + param_2 + 0x200;
  *(int *)(DAT_00005ff4 + -4) = iVar2;
  FUN_00011764(auStack_40,0x20);
  if (*(int *)(iVar2 + 0x20) == 0 && *(int *)(iVar2 + 0x24) == 0) {
    FUN_00005c74(s_cert_empty_00006074);
  }
  else {
    FUN_00005d78(param_2 + 0x200,param_3,auStack_40);
    uVar3 = FUN_00005e0a(auStack_60,auStack_40,*(int *)(*(int *)(iVar1 + -4) + 0x28) + param_2);
  }
  return uVar3;
}



/* Function: FUN_00006098 */

undefined4 FUN_00006098(uint param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = DAT_00006124;
  if (0x39 < param_1) {
    return 6;
  }
  *(undefined4 *)(DAT_00006124 + 0x48) = 0xffff;
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
  uVar2 = *(undefined4 *)(DAT_00006128 + param_1 * 4);
  *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) & 0xfffffffb;
  *param_2 = uVar2;
  return 0;
}



/* Function: FUN_00006102 */

undefined4 FUN_00006102(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_00006098(uVar1,param_1 + uVar1 * 4,0);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  return 0;
}



/* Function: FUN_0000612c */

uint FUN_0000612c(int param_1,int param_2,uint param_3)

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



/* Function: FUN_000061e4 */

void FUN_000061e4(int *param_1)

{
  int iVar1;
  
  if ((((*param_1 == s_SLTFVBM_BOOT_00006584._0_4_) &&
       (iVar1 = s_SLTFVBM_BOOT_00006584._0_4_ + -0xe, param_1[0x216] == iVar1)) &&
      (*(int *)param_1[0x214] == s_SLTFVBM_BOOT_00006584._0_4_)) &&
     (((*(int *)(param_1[0x214] + (param_1[6] * param_1[7] & 0xfffffffcU) + 8) == iVar1 &&
       (*(int *)param_1[0x215] == s_SLTFVBM_BOOT_00006584._0_4_)) &&
      (*(int *)(param_1[0x215] + (param_1[8] * param_1[6] & 0xfffffffcU) + 8) == iVar1)))) {
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_00006b46 */

void FUN_00006b46(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  FUN_0001161c(param_2,&DAT_00006af0,4);
  FUN_000117c8(0x102,param_2 + 4);
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



/* Function: FUN_000070b8 */

undefined4 FUN_000070b8(int param_1,int param_2,int *param_3,uint *param_4)

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
LAB_00007120:
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
        goto LAB_00007120;
      }
      (**(code **)(param_1 + 0x3c))(*(undefined4 *)(param_1 + 0x48),uVar1);
    }
    uVar1 = uVar1 + 1;
  } while( true );
}



/* Function: FUN_00007134 */

undefined8 FUN_00007134(int param_1,int param_2,int param_3,undefined4 param_4)

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
  FUN_00011754(*(int *)(param_1 + 0x850) + 4,*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x1c),
               0xff,iVar3 + 0x538,param_1,param_2,param_3,param_4);
  FUN_00011754(*(int *)(param_1 + 0x854) + 4,*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x20),
               0xff);
  FUN_00006b46(param_1,*(int *)(param_1 + 0x850) + 4);
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



/* Function: FUN_00007228 */

undefined4 FUN_00007228(uint param_1,int param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  *param_3 = 0;
  if (((param_1 < 5) && (*(int *)(DAT_000073c0 + param_1 * 8) != 0)) &&
     (iVar4 = *(int *)(DAT_000073c0 + param_1 * 8 + 4), iVar4 != 0)) {
    FUN_000061e4(iVar4);
    piVar1 = DAT_000073c4;
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



/* Function: FUN_000076b6 */

void FUN_000076b6(int param_1,int param_2,uint *param_3,int *param_4,char *param_5,char *param_6)

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
LAB_0000770a:
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
          goto LAB_0000770c;
        }
        goto LAB_0000770a;
      }
      uVar6 = uVar6 - 1;
    } while( true );
  }
  uVar4 = 0;
  *param_5 = '\0';
  uVar6 = 0;
LAB_0000770c:
  *param_6 = '\x01';
  uVar3 = 0;
  uVar5 = *(uint *)(param_1 + 0x18);
  while ((uVar3 < uVar5 && ((~*(byte *)(param_2 + uVar3) & 3) == 0))) {
    uVar3 = uVar3 + 1;
  }
  if (uVar5 != uVar3) {
    do {
      if (uVar5 == 0) {
LAB_0000774e:
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
          goto LAB_00007750;
        }
        goto LAB_0000774e;
      }
      uVar5 = uVar5 - 1;
    } while( true );
  }
  uVar3 = 0;
  *param_6 = '\0';
  uVar5 = 0;
LAB_00007750:
  cVar1 = *param_5;
  if (cVar1 == '\0') {
    if (*param_6 == '\0') {
      iVar2 = 0;
      *param_3 = 0;
      goto LAB_0000778e;
    }
LAB_00007764:
    if (*param_6 != '\x01') goto LAB_0000777c;
    *param_3 = uVar3;
LAB_0000778a:
    iVar2 = uVar5 - uVar3;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\0') goto LAB_00007764;
LAB_0000777c:
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      *param_3 = uVar3;
      if (uVar5 < uVar6) {
        uVar5 = uVar6;
      }
      goto LAB_0000778a;
    }
    if (*param_6 != '\0') goto LAB_0000777c;
    iVar2 = uVar6 - uVar4;
    *param_3 = uVar4;
  }
  iVar2 = iVar2 + 1;
LAB_0000778e:
  *param_4 = iVar2;
  return;
}



/* Function: FUN_0000779c */

undefined4 FUN_0000779c(uint param_1,uint *param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 & 0xfffff) >> 0x10 == 1) {
    uVar1 = (param_1 & 0xffff) >> 0xc;
    *param_2 = uVar1;
    iVar2 = DAT_00007bac;
    if ((uVar1 < 5) && (*(int *)(DAT_00007bac + uVar1 * 8) != 0)) {
      *param_4 = param_1 & 0xfff;
      iVar2 = *(int *)(iVar2 + *param_2 * 8 + 4);
      *param_3 = iVar2;
      if ((iVar2 != 0) &&
         ((*param_4 < *(uint *)(iVar2 + 0x5c) &&
          (*(uint *)(iVar2 + *param_4 * 0x18 + 100) == param_1)))) {
        FUN_000061e4();
        return 1;
      }
    }
  }
  return 0;
}



/* Function: FUN_000077f4 */

void FUN_000077f4(int param_1,uint param_2,uint param_3,uint *param_4,uint *param_5,int *param_6)

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



/* Function: FUN_00007846 */

int FUN_00007846(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
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
  uVar2 = FUN_00008242(param_1,iVar1);
  iVar3 = (**(code **)(param_1 + 0x30))
                    (*(undefined4 *)(param_1 + 0x48),uVar2,local_28,param_5,param_6,param_7,param_8,
                     param_9,(param_11 & 1) != 0);
  iVar4 = FUN_0000612c(param_9,param_5,param_6);
  *param_10 = iVar4;
  if (((iVar3 == 0) && (iVar4 << 0x1d < 0)) && ((int)(param_11 << 0x1d) < 0)) {
    iVar4 = 2;
LAB_000078c4:
    do {
      iVar5 = FUN_000070b8(param_1,iVar1,&local_44,&local_4c);
      if (iVar5 == 0) {
        return 0;
      }
      for (uVar6 = 0; uVar6 < *(uint *)(param_1 + 0x14); uVar6 = uVar6 + 1) {
        (**(code **)(param_1 + 0x30))
                  (*(undefined4 *)(param_1 + 0x48),local_44,uVar6,0,*(undefined4 *)(param_1 + 0x18),
                   *(int *)(param_1 + 0x850) + 4,*(int *)(param_1 + 0x854) + 4,auStack_6c,1);
        FUN_000076b6(param_1,auStack_6c,&local_48,&local_40,local_3c,local_38);
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
          goto LAB_000078c4;
        }
      }
    } while (iVar4 == 2);
    FUN_00007134(param_1,iVar1,local_4c);
    (**(code **)(param_1 + 0x3c))(*(undefined4 *)(param_1 + 0x48),local_44);
  }
  return iVar3;
}



/* Function: FUN_00007988 */

undefined4
FUN_00007988(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,int param_5,
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
  iVar1 = FUN_0000779c(param_1,auStack_2c,&local_34,&local_30);
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
    uVar2 = FUN_00007846(local_34,local_30,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         auStack_28,param_9);
    FUN_000061e4(local_34);
    return uVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_00007c04 */

int FUN_00007c04(int param_1,int param_2,int param_3,uint param_4,int param_5,undefined4 param_6,
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
  uVar1 = FUN_00008242(param_1,local_4c);
  iVar2 = (**(code **)(param_1 + 0x34))
                    (*(undefined4 *)(param_1 + 0x48),uVar1,local_28,param_5,param_6,param_7,param_8,
                     (param_9 & 1) != 0);
  if ((iVar2 == 2) && (iVar4 = 2, local_50 = 2, (int)(param_9 << 0x1d) < 0)) {
LAB_00007c6a:
    do {
      iVar2 = FUN_000070b8(param_1,local_4c,&local_44,&local_54);
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
          FUN_000076b6(param_1,auStack_74,&local_48,&local_40,local_3c,local_38);
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
          goto LAB_00007c6a;
        }
      }
    } while (iVar4 == 2);
    FUN_00007134(param_1,local_4c,local_54);
    (**(code **)(param_1 + 0x3c))(*(undefined4 *)(param_1 + 0x48),local_44);
    local_50 = 0;
    iVar2 = local_50;
  }
  local_50 = iVar2;
  return local_50;
}



/* Function: FUN_00007d5c */

undefined4
FUN_00007d5c(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int local_2c;
  int local_28;
  undefined1 auStack_24 [4];
  
  local_2c = 0;
  local_28 = 0;
  iVar1 = FUN_0000779c(param_1,auStack_24,&local_2c,&local_28);
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
    uVar2 = FUN_00007c04(local_2c,local_28,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_000061e4(local_2c);
    return uVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_00007dcc */

int FUN_00007dcc(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,
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
  iVar1 = FUN_0000779c(param_1,auStack_28,&local_38,&local_3c);
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
    FUN_000077f4(local_38,param_2,param_3,&local_34,&local_30,&local_2c);
    uVar2 = *(uint *)(local_38 + 0x18);
    uVar3 = uVar2 * *(int *)(local_38 + 0x14);
    uVar4 = param_2 / uVar3;
    param_2 = param_2 - uVar3 * uVar4;
    uVar3 = param_2 / uVar2;
    if (local_34 == 0) goto LAB_00007e90;
    iVar1 = FUN_00007c04(local_38,local_3c,uVar4,uVar3,param_2 - uVar2 * uVar3,local_34,param_4,
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
LAB_00007e90:
        if (local_30 == 0) {
          if ((local_2c != 0) &&
             (iVar1 = FUN_00007c04(local_38,local_3c,uVar4,uVar3,0,local_2c,param_4,param_5,param_6)
             , iVar1 != 0)) {
            FUN_000061e4(local_38);
            return iVar1;
          }
          FUN_000061e4(local_38);
          return 0;
        }
        iVar1 = FUN_00007c04(local_38,local_3c,uVar4,uVar3,0,*(undefined4 *)(local_38 + 0x18),
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
    FUN_000061e4(local_38);
    return iVar1;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_00007f10 */

int FUN_00007f10(undefined4 param_1,uint param_2,int param_3)

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
  iVar1 = FUN_0000779c(param_1,auStack_18,&local_28,&local_24);
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
  uVar2 = FUN_00008242(local_28,iVar4);
  iVar1 = (**(code **)(local_28 + 0x38))(*(undefined4 *)(local_28 + 0x48),uVar2);
  if (((iVar1 == 2) && (param_3 << 0x1d < 0)) &&
     (iVar3 = FUN_000070b8(local_28,iVar4,&local_20,&local_1c), iVar3 != 0)) {
    FUN_00007134(local_28,iVar4,local_1c);
    (**(code **)(local_28 + 0x3c))(*(undefined4 *)(local_28 + 0x48),local_20);
    iVar1 = 0;
  }
  FUN_000061e4(local_28);
  return iVar1;
}



/* Function: FUN_00007f92 */

undefined8
FUN_00007f92(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  local_18 = 0;
  local_14 = 0;
  uStack_10 = param_4;
  iVar1 = FUN_0000779c(param_1,&uStack_10,&local_18,&local_14);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(local_18 + 0x1c);
    param_2[1] = *(undefined4 *)(local_18 + 0x20);
    param_2[2] = *(undefined4 *)(local_18 + 0x18);
    param_2[3] = *(undefined4 *)(local_18 + 0x14);
    iVar2 = local_18 + local_14 * 0x18;
    param_2[4] = (*(int *)(iVar2 + 0x74) - *(int *)(iVar2 + 0x70)) + 1;
    *(undefined2 *)(param_2 + 5) = *(undefined2 *)(iVar2 + 0x6c);
    FUN_000061e4();
  }
  return CONCAT44(local_18,(uint)(iVar1 != 0));
}



/* Function: FUN_00007fe6 */

longlong FUN_00007fe6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  int local_14;
  undefined4 uStack_10;
  
  local_18 = 0;
  local_14 = 0;
  uStack_10 = param_4;
  iVar1 = FUN_0000779c(param_1,&uStack_10,&local_18,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = local_18 + local_14 * 0x18;
    if (*(char *)(iVar1 + 0x60) == '\0') {
      FUN_000061e4();
      return (ulonglong)local_18 << 0x20;
    }
    *(undefined1 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(local_18 + local_14 * 0x18 + 100) = 0;
    FUN_000061e4();
    uVar2 = 1;
  }
  return CONCAT44(local_18,uVar2);
}



/* Function: FUN_000081a0 */

void FUN_000081a0(int param_1)

{
  (**(code **)(param_1 + 0x44))(*(undefined4 *)(param_1 + 0x48));
  FUN_000061e4(param_1);
  FUN_0000f7f4(*(undefined4 *)(param_1 + 0x850));
  FUN_0000f7f4(*(undefined4 *)(param_1 + 0x854));
  FUN_0000f7f4(param_1);
  return;
}



/* Function: FUN_00008242 */

int FUN_00008242(int param_1,int param_2)

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



/* Function: FUN_000086f2 */

void FUN_000086f2(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar1 = FUN_0000f156();
  if (iVar1 == 1) {
    uVar5 = FUN_0000a650(param_1);
  }
  while (iVar1 = FUN_0000f156(param_1), iVar1 == 1) {
    uVar2 = FUN_000001e4();
    uVar4 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20);
    uVar2 = uVar2 - uVar4 * (uVar2 / uVar4);
    for (uVar4 = uVar2; uVar4 < (uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20));
        uVar4 = uVar4 + 1) {
      if ((-1 < (int)((uint)*(byte *)(*(int *)(param_1 + 0x838) + uVar4) << 0x1d)) &&
         (uVar3 = FUN_0000eec4(param_1,uVar4), 1 < uVar3)) goto LAB_00008780;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      if ((-1 < (int)((uint)*(byte *)(*(int *)(param_1 + 0x838) + (uVar2 - 1)) << 0x1d)) &&
         (uVar4 = FUN_0000eec4(param_1,uVar2 - 1), 1 < uVar4)) {
        uVar4 = uVar2 - 1;
        goto LAB_00008780;
      }
    }
    uVar4 = 0x1fff;
LAB_00008780:
    if (uVar4 == 0x1fff) break;
    FUN_0000e522(param_1,uVar5);
    iVar1 = FUN_0000d4b6(param_1,uVar5,uVar4);
    if (iVar1 == 1) {
      FUN_0000e6ce(param_1,uVar5);
      FUN_0000e522(param_1,uVar5);
    }
  }
  while ((iVar1 = FUN_0000f156(param_1), iVar1 == 1 &&
         (iVar1 = FUN_0000a5bc(param_1,param_2), *(int *)(param_1 + 0x38) != iVar1))) {
    FUN_0000e6ce(param_1);
  }
  return;
}



/* Function: FUN_00008c08 */

void FUN_00008c08(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 + param_2 * 4;
  for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0x38); uVar2 = uVar2 + 1) {
    iVar3 = *(int *)(param_1 + uVar2 * 4 + 0x3c);
    uVar1 = *(uint *)(iVar3 + 8);
    if (*(uint *)(*(int *)(iVar4 + 0x3c) + 8) < uVar1) {
      *(uint *)(iVar3 + 8) = uVar1 - 1;
    }
  }
  *(uint *)(*(int *)(iVar4 + 0x3c) + 8) = *(uint *)(param_1 + 0x38) - 1;
  return;
}



/* Function: FUN_00008ca0 */

void FUN_00008ca0(int param_1,int param_2,int param_3,uint *param_4,uint *param_5,uint *param_6,
                 uint *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_4 != (uint *)0x0) {
    if (param_5 == (uint *)0x0) {
      if ((param_6 != (uint *)0x0) && (param_7 == (uint *)0x0)) {
        *param_6 = *(uint *)(param_1 + 0x38);
        *param_4 = *(uint *)(param_1 + 0x38);
        uVar1 = 0;
        do {
          uVar2 = *(uint *)(param_1 + 0x38);
          if (uVar2 <= uVar1) {
            return;
          }
          iVar3 = *(int *)(param_1 + uVar1 * 4 + 0x3c);
          if (*(int *)(iVar3 + 4) == param_2) {
            if (uVar2 != *param_4) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            *param_4 = uVar1;
          }
          else if ((uVar2 == *param_6) ||
                  (*(uint *)(iVar3 + 8) < *(uint *)(*(int *)(param_1 + *param_6 * 4 + 0x3c) + 8))) {
            *param_6 = uVar1;
          }
          uVar1 = uVar1 + 1;
        } while( true );
      }
    }
    else if ((param_6 != (uint *)0x0) && (param_7 != (uint *)0x0)) {
      *param_6 = *(uint *)(param_1 + 0x38);
      *param_7 = *(uint *)(param_1 + 0x38);
      *param_4 = *(uint *)(param_1 + 0x38);
      *param_5 = *(uint *)(param_1 + 0x38);
      uVar1 = 0;
      do {
        uVar2 = *(uint *)(param_1 + 0x38);
        if (uVar2 <= uVar1) {
          return;
        }
        iVar5 = *(int *)(param_1 + uVar1 * 4 + 0x3c);
        iVar3 = *(int *)(iVar5 + 4);
        if (iVar3 == param_2) {
          if (uVar2 != *param_4) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          *param_4 = uVar1;
        }
        else if (iVar3 == param_3) {
          if (uVar2 != *param_5) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          *param_5 = uVar1;
        }
        else {
          uVar4 = *param_6;
          if (uVar2 != uVar4) {
            uVar6 = *(uint *)(iVar5 + 8);
            if (*(uint *)(*(int *)(param_1 + uVar4 * 4 + 0x3c) + 8) <= uVar6) {
              if ((uVar2 == *param_7) ||
                 (uVar6 < *(uint *)(*(int *)(param_1 + *param_7 * 4 + 0x3c) + 8))) {
                *param_7 = uVar1;
              }
              goto LAB_00008d30;
            }
            *param_7 = uVar4;
          }
          *param_6 = uVar1;
        }
LAB_00008d30:
        uVar1 = uVar1 + 1;
      } while( true );
    }
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_00008fc4 */

void FUN_00008fc4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 unaff_r6;
  undefined4 uStack_20;
  undefined4 local_1c;
  int local_18;
  
  uStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  iVar1 = FUN_0000f168();
  if (iVar1 == 1) {
    unaff_r6 = FUN_0000a650(param_1);
  }
  do {
    iVar1 = FUN_0000f168(param_1);
    if (iVar1 != 1) {
LAB_00009072:
      while (iVar1 = FUN_0000f168(param_1), iVar1 == 1) {
        uVar3 = FUN_0000f022(param_1);
        FUN_0000f04c(param_1,uVar3);
      }
      return;
    }
    iVar1 = FUN_0000f022(param_1);
    uVar4 = *(uint *)(*(int *)(param_1 + 0x828) + iVar1 * 4) & 0x1ffff;
    if (uVar4 - *(int *)(param_1 + 0x34) < 10) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    FUN_0000a67a(param_1,uVar4 - 8,&uStack_20);
    if (local_18 == 0x1fff) {
      FUN_0000f04c(param_1,iVar1);
      *(uint *)(param_1 + 0x34) = (*(uint *)(*(int *)(param_1 + 0x828) + iVar1 * 4) & 0x1ffff) - 7;
      goto LAB_00009072;
    }
    FUN_0000e522(param_1,unaff_r6);
    iVar2 = FUN_0000d4b6(param_1,unaff_r6,local_1c);
    if (iVar2 == 1) {
      FUN_0000e710(param_1,unaff_r6,iVar1);
      FUN_0000e522(param_1,unaff_r6);
    }
    else {
      FUN_0000ef98(param_1,iVar1);
    }
  } while( true );
}



/* Function: FUN_0000a5bc */

uint FUN_0000a5bc(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = *(uint *)(param_1 + 0x38);
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    uVar5 = uVar4;
    if (uVar4 <= uVar1) {
LAB_0000a5f2:
      if (uVar4 != uVar5) {
        for (; uVar3 < uVar4; uVar3 = uVar3 + 1) {
          if (param_2 != uVar3) {
            iVar6 = *(int *)(param_1 + uVar3 * 4 + 0x3c);
            iVar2 = *(int *)(iVar6 + 4);
            if (((iVar2 != 0x1fff) &&
                ((int)((uint)*(byte *)(*(int *)(param_1 + 0x838) + iVar2) << 0x1e) < 0)) &&
               (*(uint *)(iVar6 + 8) < *(uint *)(*(int *)(param_1 + uVar5 * 4 + 0x3c) + 8))) {
              uVar5 = uVar3;
            }
          }
        }
        return uVar5;
      }
      if (uVar4 == param_2) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar2 = *(int *)(*(int *)(param_1 + param_2 * 4 + 0x3c) + 4);
      if (iVar2 == 0x1fff) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (-1 < (int)((uint)*(byte *)(*(int *)(param_1 + 0x838) + iVar2) << 0x1e)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      return param_2;
    }
    if (((param_2 != uVar1) &&
        (iVar2 = *(int *)(*(int *)(param_1 + uVar1 * 4 + 0x3c) + 4), iVar2 != 0x1fff)) &&
       ((int)((uint)*(byte *)(*(int *)(param_1 + 0x838) + iVar2) << 0x1e) < 0)) {
      uVar3 = uVar1 + 1;
      uVar5 = uVar1;
      goto LAB_0000a5f2;
    }
    uVar1 = uVar1 + 1;
  } while( true );
}



/* Function: FUN_0000a650 */

void FUN_0000a650(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  for (uVar2 = 1; uVar2 < *(uint *)(param_1 + 0x38); uVar2 = uVar2 + 1) {
    if (*(uint *)(*(int *)(param_1 + uVar2 * 4 + 0x3c) + 8) <
        *(uint *)(*(int *)(param_1 + uVar1 * 4 + 0x3c) + 8)) {
      uVar1 = uVar2;
    }
  }
  return;
}



/* Function: FUN_0000a67a */

void FUN_0000a67a(int param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  param_3[1] = 0x1fff;
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  param_3[2] = 0x1fff;
  *param_3 = uVar3;
  uVar1 = FUN_000001e4();
  uVar4 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20);
  uVar1 = uVar1 - uVar4 * (uVar1 / uVar4);
  for (uVar4 = uVar1; uVar4 < (uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20));
      uVar4 = uVar4 + 1) {
    if (((-1 < (int)((uint)*(byte *)(*(int *)(param_1 + 0x838) + uVar4) << 0x1d)) &&
        (iVar2 = FUN_0000eef6(param_1,uVar4), iVar2 != 0x1fff)) &&
       ((*(uint *)(*(int *)(param_1 + 0x828) + iVar2 * 4) & 0x1ffff) <= param_2)) goto LAB_0000a6d0;
  }
  while( true ) {
    if (uVar1 == 0) {
      return;
    }
    if (((-1 < (int)((uint)*(byte *)(*(int *)(param_1 + 0x838) + (uVar1 - 1)) << 0x1d)) &&
        (iVar2 = FUN_0000eef6(param_1,uVar1 - 1), iVar2 != 0x1fff)) &&
       ((*(uint *)(*(int *)(param_1 + 0x828) + iVar2 * 4) & 0x1ffff) <= param_2)) break;
    uVar1 = uVar1 - 1;
  }
  uVar4 = uVar1 - 1;
LAB_0000a6d0:
  param_3[1] = uVar4;
  *param_3 = *(undefined4 *)(param_1 + 0x38);
  param_3[2] = iVar2;
  return;
}



/* Function: FUN_0000a734 */

undefined4 FUN_0000a734(void)

{
  FUN_00011764(DAT_0000a78c,0x150);
  return 1;
}



/* Function: FUN_0000a744 */

undefined4 FUN_0000a744(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_0000a78c;
  if (0x29 < param_1) {
    return 0;
  }
  *(undefined4 *)(DAT_0000a78c + param_1 * 8) = param_2;
  *(undefined4 *)(iVar1 + param_1 * 8 + 4) = param_3;
  return 1;
}



/* Function: FUN_0000a75c */

void FUN_0000a75c(void)

{
  int iVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  
  iVar1 = DAT_0000a78c;
  do {
    iVar4 = FUN_0000aa66();
    sVar2 = FUN_0000a7ba(*(undefined2 *)(iVar4 + 0x10));
    uVar3 = FUN_0000a7ba(*(undefined2 *)(iVar4 + 0x12));
    *(undefined2 *)(iVar4 + 0x12) = uVar3;
    (**(code **)(iVar1 + sVar2 * 8))(iVar4,*(undefined4 *)(iVar1 + sVar2 * 8 + 4));
    FUN_0000a864(iVar4);
  } while( true );
}



/* Function: FUN_0000a790 */

undefined1 * FUN_0000a790(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  
  puVar1 = param_1;
  while (bVar2 = param_3 != 0, param_3 = param_3 + -1, bVar2) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  return param_1;
}



/* Function: FUN_0000a7ba */

uint FUN_0000a7ba(uint param_1)

{
  return (param_1 >> 8 | param_1 << 8) & 0xffff;
}



/* Function: FUN_0000a7c4 */

uint FUN_0000a7c4(uint param_1)

{
  return (param_1 & 0xff00) << 8 | param_1 >> 8 & 0xff00 | param_1 >> 0x18 | param_1 << 0x18;
}



/* Function: FUN_0000a7e0 */

/* WARNING: Removing unreachable block (ram,0x00010862) */

void FUN_0000a7e0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_r4;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_r5;
  int iVar6;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  
  iVar2 = DAT_0000aaec;
  iVar1 = DAT_0000aae8;
  *(int *)(DAT_0000aaec + 8) = DAT_0000aae8;
  uVar4 = 0;
  do {
    iVar6 = iVar1 + uVar4 * 0x4014;
    FUN_00011764(iVar6,0x4014);
    uVar5 = uVar4 + 1;
    *(int *)(iVar1 + uVar4 * 0x4014) = iVar6 + 0x4014;
    uVar4 = uVar5;
  } while (uVar5 < 3);
  *(undefined4 *)(DAT_0000aaf0 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  iVar6 = FUN_00010074();
  iVar1 = DAT_0000aaf4;
  *(int *)(iVar2 + 4) = iVar6;
  iVar2 = DAT_00010b5c;
  if (iVar6 != iVar1) {
    return;
  }
  puVar3 = (undefined4 *)(DAT_00010b5c + 0x28);
  *puVar3 = DAT_00010c5c;
  *(undefined2 *)(iVar2 + 0x2c) = 0xf000;
  *(undefined2 *)(iVar2 + 0x2e) = 0x20;
  *(undefined1 *)(iVar2 + 0x30) = 6;
  *(undefined1 *)(iVar2 + 0x31) = 1;
  *(undefined1 *)(iVar2 + 0x32) = 0;
  *(undefined1 *)(iVar2 + 0x33) = 1;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  FUN_0001161c(iVar2 + 0x10,puVar3,4,0xf000,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,unaff_lr);
  *(undefined1 *)(iVar2 + 0x14) = *(undefined1 *)(iVar2 + 0x2e);
  *(undefined1 *)(iVar2 + 0x15) = *(undefined1 *)(iVar2 + 0x2f);
  *(undefined1 *)(iVar2 + 0x16) = *(undefined1 *)(iVar2 + 0x2c);
  *(undefined1 *)(iVar2 + 0x17) = *(undefined1 *)(iVar2 + 0x2d);
  *(undefined1 *)(iVar2 + 0x18) = 5;
  iVar1 = DAT_00010b60;
  *(uint *)(DAT_00010b60 + 0xe88) = *(uint *)(DAT_00010b60 + 0xe88) | 0x14;
  *(int *)(iVar1 + 0xe94) = iVar2 + 0x10;
  *(uint *)(iVar1 + 0xe84) = *(uint *)(iVar1 + 0xe84) | 1;
  return;
}



/* Function: FUN_0000a83e */

undefined4 * FUN_0000a83e(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(DAT_0000aaec + 8);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(DAT_0000aaec + 8) = *puVar1;
    FUN_00011764(puVar1,0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1;
  }
  return puVar2;
}



/* Function: FUN_0000a864 */

void FUN_0000a864(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0000aaec;
  *param_1 = *(undefined4 *)(DAT_0000aaec + 8);
  *(undefined4 **)(iVar1 + 8) = param_1;
  return;
}



/* Function: FUN_0000a86e */

int FUN_0000a86e(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = (uint)*(ushort *)(param_1 + 0x12);
  uVar2 = FUN_0000a7ba(uVar7);
  *(undefined2 *)(param_1 + 0x12) = uVar2;
  uVar2 = FUN_0000a7ba(*(undefined2 *)(param_1 + 0x10));
  *(undefined2 *)(param_1 + 0x10) = uVar2;
  if (*DAT_0000aaec == 1) {
    uVar2 = FUN_0000ff94(param_1 + 0x10,uVar7 + 4);
  }
  else {
    FUN_0000ffc4();
    uVar2 = FUN_0000a7ba();
  }
  *(char *)(param_1 + uVar7 + 0x14) = (char)((ushort)uVar2 >> 8);
  *(char *)(param_1 + uVar7 + 0x15) = (char)uVar2;
  iVar3 = 1;
  *(undefined1 *)(param_2 + 0x10) = 0x7e;
  pbVar5 = (byte *)(param_2 + 0x11);
  for (iVar6 = 0; iVar6 < (int)(uVar7 + 6); iVar6 = iVar6 + 1) {
    bVar1 = *(byte *)(param_1 + 0x10 + iVar6);
    if ((bVar1 == 0x7e) || (bVar1 == 0x7d)) {
      iVar3 = iVar3 + 1;
      *pbVar5 = 0x7d;
      pbVar5[1] = bVar1 & 0xdf;
      pbVar4 = pbVar5 + 2;
    }
    else {
      pbVar4 = pbVar5 + 1;
      *pbVar5 = bVar1;
    }
    iVar3 = iVar3 + 1;
    pbVar5 = pbVar4;
  }
  *pbVar5 = 0x7e;
  return iVar3 + 1;
}



/* Function: FUN_0000a8f2 */

void FUN_0000a8f2(undefined2 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [16];
  undefined2 local_38;
  undefined2 local_36;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  local_36 = 0;
  local_38 = param_1;
  uVar1 = FUN_0000a86e(auStack_48,auStack_28);
  FUN_0000aad4(auStack_18,uVar1);
  return;
}



/* Function: FUN_0000a91a */

void FUN_0000a91a(void)

{
  return;
}



/* Function: FUN_0000a91c */

void FUN_0000a91c(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  piVar1 = DAT_0000aaec;
  puVar9 = (undefined4 *)DAT_0000aaec[4];
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)FUN_0000a83e();
    if (puVar9 == (undefined4 *)0x0) {
      return;
    }
    piVar1[4] = (int)puVar9;
    *puVar9 = 0;
  }
  iVar5 = DAT_0000aaf4;
  puVar10 = puVar9 + 4;
LAB_0000a940:
  iVar3 = piVar1[1];
  if (iVar3 != iVar5) {
    uVar7 = (**(code **)(iVar3 + 0xc))();
    if (uVar7 == 0xffffffff) {
      return;
    }
    uVar8 = uVar7 & 0xff;
    bVar2 = (byte)uVar7;
    if (0x4000 < (int)puVar9[2]) {
      piVar1[4] = 0;
      FUN_0000a864(puVar9);
      FUN_00005c74(s_size_error_0000ab34);
      FUN_0000a91a(s_SEND_ERROR_RSP_0x_x__func__s__li_0000ab0c,0x8b,DAT_0000ab08,0xa7);
      FUN_0000a8f2(0x8b);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar3 = puVar9[1];
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        if (uVar8 == 0x7e) goto LAB_0000a940;
        if (uVar8 == 0x7d) {
          bVar2 = (**(code **)(piVar1[1] + 8))();
          bVar2 = bVar2 ^ 0x20;
        }
        puVar9[1] = 2;
      }
      else {
        if (iVar3 != 2) goto LAB_0000a940;
        if (uVar8 == 0x7e) {
          puVar9[1] = 3;
          if (*piVar1 == 1) {
            iVar5 = FUN_0000ff94(puVar10,puVar9[2]);
          }
          else {
            iVar5 = FUN_0000ffc4();
          }
          if (iVar5 != 0) {
            FUN_0000a864(puVar9);
            piVar1[4] = 0;
            FUN_00005c74(s_uart_crc_error_0000ab40);
            FUN_0000a91a(s_SEND_ERROR_RSP_0x_x__func__s__li_0000ab0c,0x8b,DAT_0000ab08,0xd5);
            FUN_0000a8f2(0x8b);
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          *puVar9 = 0;
          puVar10 = (undefined4 *)piVar1[3];
          if ((undefined4 *)piVar1[3] != (undefined4 *)0x0) goto LAB_0000aa48;
          goto LAB_0000a982;
        }
        if (uVar8 == 0x7d) {
          bVar2 = (**(code **)(piVar1[1] + 8))();
          bVar2 = bVar2 ^ 0x20;
        }
      }
      *(byte *)((int)puVar10 + puVar9[2]) = bVar2;
      puVar9[2] = puVar9[2] + 1;
      goto LAB_0000a940;
    }
    if (uVar8 == 0x7e) {
      puVar9[1] = 1;
      puVar9[2] = 0;
    }
    goto LAB_0000a940;
  }
  uVar4 = (**(code **)(iVar3 + 4))(iVar3,puVar10,0x4000);
  puVar9[2] = uVar4;
  iVar5 = FUN_0000ffc4(puVar10,uVar4);
  if (iVar5 != 0) {
    FUN_0000a864(puVar9);
    piVar1[4] = 0;
    FUN_00005c74(s_usb_crc_error_0000aaf8);
    FUN_0000a91a(s_SEND_ERROR_RSP_0x_x__func__s__li_0000ab0c,0x8b,DAT_0000ab08,0x82);
    FUN_0000a8f2(0x8b);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *puVar9 = 0;
  puVar10 = (undefined4 *)piVar1[3];
  if ((undefined4 *)piVar1[3] == (undefined4 *)0x0) {
LAB_0000a982:
    piVar1[3] = (int)puVar9;
    goto LAB_0000a990;
  }
  do {
    puVar6 = puVar10;
    puVar10 = (undefined4 *)*puVar6;
  } while ((undefined4 *)*puVar6 != (undefined4 *)0x0);
LAB_0000a98e:
  *puVar6 = puVar9;
LAB_0000a990:
  piVar1[4] = 0;
  return;
LAB_0000aa48:
  do {
    puVar6 = puVar10;
    puVar10 = (undefined4 *)*puVar6;
  } while ((undefined4 *)*puVar6 != (undefined4 *)0x0);
  goto LAB_0000a98e;
}



/* Function: FUN_0000aa66 */

void FUN_0000aa66(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0000aaec;
  while (puVar2 = *(undefined4 **)(iVar1 + 0xc), puVar2 == (undefined4 *)0x0) {
    FUN_0000a91c();
  }
  *(undefined4 *)(iVar1 + 0xc) = *puVar2;
  *puVar2 = 0;
  return;
}



/* Function: FUN_0000aa80 */

void FUN_0000aa80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0000a83e();
  if (iVar1 != 0) {
    uVar2 = FUN_0000a86e(param_1,iVar1);
    FUN_0000aad4(iVar1 + 0x10,uVar2);
    FUN_0000a864(iVar1);
    return;
  }
  FUN_0000a864(*(undefined4 *)(DAT_0000aaec + 0x10));
  iVar1 = FUN_0000a83e();
  if (iVar1 != 0) {
    uVar2 = FUN_0000a86e(param_1,iVar1);
    FUN_0000aad4(iVar1 + 0x10,uVar2);
    FUN_0000a864(iVar1);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}



/* Function: FUN_0000aad4 */

void FUN_0000aad4(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0000aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(DAT_0000aaec + 4) + 0x10))(*(int *)(DAT_0000aaec + 4),param_1,param_2);
  return;
}



/* Function: FUN_0000ab50 */

void FUN_0000ab50(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = 0x80;
    break;
  default:
    uVar1 = 0x84;
    break;
  case 2:
    uVar1 = 0x97;
    break;
  case 3:
    uVar1 = 0x98;
    break;
  case 4:
    uVar1 = 0x96;
    break;
  case 5:
    uVar1 = 0x89;
    break;
  case 6:
    uVar1 = 0x8a;
    break;
  case 7:
    uVar1 = 0xa5;
  }
  FUN_0000a8f2(uVar1);
  return;
}



/* Function: FUN_0000ab88 */

bool FUN_0000ab88(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  
  uVar7 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = FUN_0000a7c4(*(undefined4 *)(param_1 + 0x14));
  uVar7 = FUN_0000a7c4(uVar7);
  uVar5 = DAT_0000adf8;
  puVar1 = DAT_0000adf4;
  puVar6 = DAT_0000adf4 + -3;
  if (*(short *)(param_1 + 0x12) == 0xc) {
    *puVar6 = *(uint *)(param_1 + 0x1c);
    puVar1[-2] = DAT_0000adfc;
    uVar5 = *puVar6;
  }
  else {
    *puVar6 = DAT_0000adf8;
  }
  if ((uVar5 & 0xffffff) != 0) {
    iVar4 = FUN_00003fdc(uVar3,uVar7);
    puVar2 = DAT_0000adf4;
    if (iVar4 == 0) {
      *DAT_0000adf4 = uVar7;
      puVar2[1] = 0;
      puVar1[-1] = 0;
      FUN_0000a8f2(0x80);
    }
    else {
      FUN_0000ab50();
    }
    return iVar4 == 0;
  }
  FUN_0000a91a(s_SEND_ERROR_RSP_0x_x__func__s__li_0000ae04,0xa0,DAT_0000ae00,0x38);
  FUN_0000a8f2(0xa0);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_0000af5c */

undefined4 FUN_0000af5c(void)

{
  return 0;
}



/* Function: FUN_0000af60 */

undefined4 FUN_0000af60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = param_4;
  iVar1 = FUN_00005534(0,param_1,&local_8,4);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return local_8;
}



/* Function: FUN_0000af7a */

int FUN_0000af7a(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_48 [4];
  uint local_44;
  uint local_40;
  undefined4 local_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar3 = 0;
  if ((param_3 != 0) &&
     (local_34 = param_1, uStack_30 = param_2, iStack_2c = param_3, iStack_28 = param_4,
     iVar1 = FUN_0000561a(param_1,auStack_48), iVar1 == 0)) {
    uVar2 = param_2 / local_44;
    if (uVar2 <= local_40) {
      iVar1 = param_2 - local_44 * uVar2;
      if (local_44 * local_40 < param_2 + param_3) {
        param_3 = local_44 * local_40 - param_2;
      }
      uVar5 = (param_2 + param_3) / local_44;
      if (iVar1 != 0) {
        iVar3 = FUN_00005686(local_34,uVar2,1,DAT_0000b1f4);
        if (iVar3 != 0) {
          return 0;
        }
        iVar3 = local_44 - iVar1;
        FUN_0001161c(param_4,DAT_0000b1f4 + iVar1);
        param_4 = param_4 + iVar3;
        uVar2 = uVar2 + 1;
      }
      while( true ) {
        if (uVar5 < uVar2) {
          return iVar3;
        }
        uVar4 = uVar2 + 0x800 / local_44;
        if (uVar5 <= uVar4) break;
        iVar1 = FUN_00005686(local_34,uVar2,0x800 / local_44,param_4);
        if (iVar1 != 0) {
          return iVar3;
        }
        param_4 = param_4 + 0x800;
        iVar3 = iVar3 + 0x800;
        uVar2 = uVar4;
      }
      iVar1 = FUN_00005686(local_34,uVar2,uVar5 - uVar2,DAT_0000b1f4);
      if (iVar1 == 0) {
        FUN_0001161c(param_4,DAT_0000b1f4,param_3 - iVar3);
        return param_3;
      }
      return iVar3;
    }
  }
  return 0;
}



/* Function: FUN_0000b040 */

uint FUN_0000b040(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_30;
  uint local_2c;
  uint local_28;
  int iStack_24;
  
  if ((((param_3 != 0) &&
       (uStack_30 = param_1, local_2c = param_2, local_28 = param_3, iStack_24 = param_4,
       iVar2 = FUN_0000561a(param_1,&uStack_30), uVar1 = local_2c, iVar2 == 0)) &&
      (uVar3 = param_2 / local_2c, param_2 == local_2c * uVar3)) && (uVar3 <= local_28)) {
    if (local_2c * local_28 < param_2 + param_3) {
      param_3 = local_2c * local_28 - param_2;
    }
    uVar5 = (param_2 + param_3) / local_2c;
    uVar4 = (uint)(param_3 != local_2c * (param_3 / local_2c));
    if ((uVar3 == uVar5) ||
       (iVar2 = FUN_000056f8(param_1,uVar3,((uVar5 - uVar3) - uVar4) + 1,param_4), iVar2 == 0)) {
      uVar3 = uVar1 * (((uVar5 - uVar3) - uVar4) + 1);
      if (uVar4 != 0) {
        FUN_00011754(DAT_0000b1f4,uVar1,0xff);
        FUN_0001161c(DAT_0000b1f4,param_4 + uVar3,param_3 - uVar3);
        iVar2 = FUN_000056f8(param_1,uVar5,1,DAT_0000b1f4);
        if (iVar2 != 0) {
          return uVar3;
        }
      }
      return param_3;
    }
  }
  return 0;
}



/* Function: FUN_0000b104 */

int FUN_0000b104(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_18;
  int local_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_18 = param_1;
  local_14 = param_2;
  iStack_10 = param_3;
  uStack_c = param_4;
  iVar1 = FUN_0000561a(param_1,&uStack_18);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      if (param_2 == 1) {
        local_14 = iStack_10 * local_14;
      }
      else {
        local_14 = -2;
      }
    }
  }
  else {
    local_14 = -1;
  }
  return local_14;
}



/* Function: thunk_FUN_00005838 */

int thunk_FUN_00005838(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = param_1 & 0xff;
  iVar1 = FUN_0000af5c();
  piVar3 = (int *)(DAT_000059b0 + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0);
  if ((iVar1 != 0) || (piVar3[2] == -1)) {
    if (*piVar3 == 3) {
      iVar1 = FUN_000055f4(param_1,(param_1 & 0xfff) >> 8,uVar4);
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
    iVar2 = FUN_0000af5c();
    if (iVar2 != 0) {
      return iVar1;
    }
    if (piVar3[2] == -1) {
      return iVar1;
    }
  }
  return 7;
}



/* Function: FUN_0000b132 */

undefined4 FUN_0000b132(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_38 [4];
  uint local_34;
  uint local_30;
  undefined1 auStack_28 [8];
  uint local_20;
  
  iVar1 = FUN_0000561a(param_1,auStack_38);
  if ((iVar1 == 0) && (iVar1 = FUN_0000561a(param_2,auStack_28), iVar1 == 0)) {
    uVar4 = 0x800 / local_34;
    if (local_20 < local_30) {
      return 1;
    }
    iVar1 = FUN_0000576a(param_2,0,local_20);
    uVar3 = 0;
    if (iVar1 == 0) {
      do {
        while( true ) {
          if (local_30 <= uVar3) {
            return 1;
          }
          if (local_30 < uVar4 + uVar3) break;
          iVar1 = FUN_00005686(param_1,uVar3,uVar4,DAT_0000b1f4);
          if ((iVar1 != 0) && (iVar1 != 4)) {
            pcVar2 = s_nand_partiition_copy_dst_info_SC_0000b22c;
            goto LAB_0000b1de;
          }
          iVar1 = FUN_000056f8(param_2,uVar3,uVar4,DAT_0000b1f4);
          if (iVar1 != 0) {
            pcVar2 = s_nand_partiition_copy_dst_info_SC_0000b26c;
            goto LAB_0000b1de;
          }
          uVar3 = uVar3 + uVar4;
        }
        iVar1 = FUN_00005686(param_1,uVar3,local_30 - uVar3,DAT_0000b1f4);
        if ((iVar1 != 0) && (iVar1 != 4)) {
          pcVar2 = s_nand_partiition_copy_dst_info_SC_0000b2ac;
          goto LAB_0000b1de;
        }
        iVar1 = FUN_000056f8(param_2,uVar3,local_30 - uVar3,DAT_0000b1f4);
        uVar3 = local_30;
      } while (iVar1 == 0);
      pcVar2 = s_nand_partiition_copy_dst_info_SC_0000b2ec;
LAB_0000b1de:
      FUN_00005c74(pcVar2);
    }
    else {
      FUN_00005c74(s_nand_partiition_copy_dst_info_SC_0000b1f8);
    }
  }
  return 0;
}



/* Function: FUN_0000b32c */

undefined4 FUN_0000b32c(undefined4 param_1,int param_2,uint param_3,int *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  uVar7 = 0;
  uVar6 = 0;
  uVar9 = 0;
  uVar8 = 0;
  iVar10 = param_2;
  uVar3 = FUN_0000b104(param_1,1);
  if ((int)uVar3 < 0) {
    return 0;
  }
  while (uVar7 < uVar3) {
    uVar2 = uVar6;
    if (uVar6 <= uVar7) {
      iVar5 = 0x10000;
      if (uVar3 < uVar6 + 0x10000) {
        if (uVar3 <= uVar6) {
          return 0;
        }
        iVar5 = uVar3 - uVar6;
      }
      iVar5 = FUN_0000af7a(param_1,uVar6,iVar5,DAT_0000b504,param_1,iVar10);
      if (iVar5 == 0) {
        return 0;
      }
      uVar2 = uVar6 + iVar5;
      uVar9 = uVar6;
    }
    uVar6 = uVar2;
    if (uVar7 == 0) {
      iVar5 = *DAT_0000b504;
      if (iVar5 == -1) {
        return 0;
      }
      if (iVar5 == 0) {
        return 0;
      }
      uVar7 = 4;
      *param_4 = iVar5;
    }
    else if (uVar7 < uVar6) {
      if (uVar7 < uVar9) {
        return 0;
      }
      psVar4 = (short *)((int)DAT_0000b504 + (uVar7 - uVar9));
      if (*psVar4 == -1) break;
      if (psVar4[1] == -1) {
        return 0;
      }
      if (psVar4[1] == 0) {
        return 0;
      }
      *(short *)(param_2 + uVar8 * 8) = *psVar4;
      uVar1 = psVar4[1];
      iVar5 = param_2 + uVar8 * 8;
      uVar8 = uVar8 + 1;
      *(ushort *)(iVar5 + 2) = uVar1;
      *(uint *)(iVar5 + 4) = uVar7;
      uVar7 = uVar1 + uVar7 + 7 & 0xfffffffc;
      if (param_3 <= uVar8) {
        return 0;
      }
      if (uVar3 < uVar7) {
        return 0;
      }
    }
  }
  while( true ) {
    if (uVar3 <= uVar6) {
      return 1;
    }
    if (uVar3 < uVar6 + 0x10000) {
      iVar5 = uVar3 - uVar6;
    }
    else {
      iVar5 = 0x10000;
    }
    iVar5 = FUN_0000af7a(param_1,uVar6,iVar5,DAT_0000b504,param_1,iVar10);
    if (iVar5 == 0) break;
    uVar6 = uVar6 + iVar5;
  }
  return 0;
}



/* Function: FUN_0000b412 */

undefined4 FUN_0000b412(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  FUN_00011764(DAT_0000b508,0x4000);
  iVar4 = FUN_0000b32c(param_1,DAT_0000b508,0x800,param_2);
  uVar6 = 0;
  if (iVar4 != 0) {
    uVar7 = 0;
    do {
      bVar3 = false;
      sVar1 = *(short *)(DAT_0000b50c + uVar7 * 2);
      if ((DAT_0000b508 != 0) && (sVar1 != -1)) {
        uVar5 = 0;
        do {
          sVar2 = *(short *)(DAT_0000b508 + uVar5 * 8);
          if (sVar2 == 0) break;
          if (sVar2 == sVar1) {
            bVar3 = true;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x800);
      }
      if (!bVar3) {
        return 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 6);
    uVar6 = 1;
  }
  return uVar6;
}



/* Function: FUN_0000b47a */

void FUN_0000b47a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = param_3;
  uStack_1c = param_4;
  iVar1 = FUN_0000af60(DAT_0000b510);
  if (iVar1 == -1) {
    FUN_00005c74(s_master_part_handle_invalid_0000b590);
    return;
  }
  iVar2 = FUN_0000af60(DAT_0000b510 + 0xe);
  if (iVar2 == -1) {
    FUN_00005c74(s_backup_part_handle_inbalid_0000b5ac);
    goto LAB_0000b4fc;
  }
  iVar3 = FUN_0000b412(iVar1,&uStack_1c);
  iVar4 = FUN_0000b412(iVar2,&local_20);
  FUN_00005c74(s_BackupOrUpdateNvPart_FixNvStatus_0000b514,iVar3,iVar4);
  FUN_00005c74(s_BackupOrUpdateNvPart_FixNvtimest_0000b550,uStack_1c,local_20);
  if (iVar3 != 0 || iVar4 != 0) {
    if (iVar3 == 0) {
LAB_0000b4e0:
      iVar3 = iVar2;
      iVar5 = iVar1;
      if (iVar4 == 1) {
LAB_0000b4f2:
        FUN_0000b132(iVar3,iVar5);
      }
    }
    else if (iVar3 == 1) {
      iVar3 = iVar1;
      iVar5 = iVar2;
      if (iVar4 != 0) goto LAB_0000b4e0;
      goto LAB_0000b4f2;
    }
  }
  thunk_FUN_00005838(iVar2);
LAB_0000b4fc:
  thunk_FUN_00005838(iVar1);
  return;
}



/* Function: FUN_0000b5c8 */

void FUN_0000b5c8(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar1 = DAT_0000b9bc;
  puVar4 = DAT_0000b9bc + 0xc9;
  puVar5 = DAT_0000b9bc + 0x10c;
  puVar6 = DAT_0000b9bc + 0x43;
  puVar7 = DAT_0000b9bc + 0x86;
  puVar8 = DAT_0000b9bc + 0x14f;
  puVar9 = DAT_0000b9bc + 0x192;
  iVar2 = 0;
  do {
    puVar1[iVar2 + 1] = 0;
    puVar4[iVar2 + 1] = 0;
    puVar5[iVar2 + 1] = 0;
    puVar6[iVar2 + 1] = 0;
    puVar7[iVar2 + 1] = 0;
    puVar8[iVar2 + 1] = 0;
    iVar3 = iVar2 + 1;
    puVar9[iVar2 + 1] = 0;
    iVar2 = iVar3;
  } while (iVar3 < 0x42);
  *puVar1 = 1;
  *puVar4 = 1;
  *puVar5 = 1;
  *puVar6 = 1;
  *puVar7 = 1;
  *puVar8 = 1;
  *puVar9 = 1;
  return;
}



/* Function: FUN_0000b63c */

undefined4 FUN_0000b63c(int *param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (*param_2 < iVar3) {
    return 1;
  }
  if (*param_2 <= iVar3) {
    do {
      if (iVar3 + -1 < 0) {
        return 0;
      }
      puVar1 = (uint *)(param_1 + iVar3);
      puVar2 = (uint *)(param_2 + iVar3);
      if (*puVar2 < *puVar1) {
        return 1;
      }
      iVar3 = iVar3 + -1;
    } while (*puVar2 <= *puVar1);
  }
  return 0xffffffff;
}



/* Function: FUN_0000b672 */

void FUN_0000b672(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = *param_2;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    param_1[iVar1 + 1] = param_2[iVar1 + 1];
    iVar1 = iVar2;
  } while (iVar2 < 0x42);
  return;
}



/* Function: FUN_0000b68e */

void FUN_0000b68e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0) {
    iVar1 = 1;
    *param_1 = 1;
    param_1[1] = param_3;
  }
  else {
    iVar1 = 2;
    *param_1 = 2;
    param_1[1] = param_3;
    param_1[2] = param_4;
  }
  for (; iVar1 < 0x42; iVar1 = iVar1 + 1) {
    param_1[iVar1 + 1] = 0;
  }
  return;
}



/* Function: FUN_0000b6ba */

void FUN_0000b6ba(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0;
  if (*param_2 < *param_3) {
    *param_1 = *param_3;
  }
  else {
    *param_1 = *param_2;
  }
  for (iVar1 = 0; iVar1 < *param_1; iVar1 = iVar1 + 1) {
    uVar3 = param_3[iVar1 + 1] + param_2[iVar1 + 1];
    iVar4 = uVar3 + uVar2;
    uVar2 = (uint)CARRY4(param_3[iVar1 + 1],param_2[iVar1 + 1]) + (uint)CARRY4(uVar3,uVar2);
    param_1[iVar1 + 1] = iVar4;
  }
  param_1[*param_1 + 1] = uVar2;
  iVar1 = *param_1 + uVar2;
  *param_1 = iVar1;
  for (; iVar1 < 0x42; iVar1 = iVar1 + 1) {
    param_1[iVar1 + 1] = 0;
  }
  return;
}



/* Function: FUN_0000b764 */

void FUN_0000b764(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = 0;
  uVar6 = FUN_0000b63c(param_2,param_3);
  if (0 < (int)uVar6) {
    *param_1 = *param_2;
    for (iVar1 = 0; iVar1 < *param_2; iVar1 = iVar1 + 1) {
      uVar2 = param_2[iVar1 + 1];
      uVar4 = *(uint *)(param_3 + iVar1 * 4 + 4);
      if ((uVar4 < uVar2) || ((uVar2 == uVar4 && (iVar5 == 0)))) {
        iVar3 = uVar2 - iVar5;
        iVar5 = 0;
        param_1[iVar1 + 1] = iVar3 - uVar4;
      }
      else {
        iVar3 = uVar2 - iVar5;
        iVar5 = 1;
        param_1[iVar1 + 1] = iVar3 - uVar4;
      }
    }
    iVar5 = *param_1;
    while (param_1[iVar5] == 0) {
      iVar5 = iVar5 + -1;
      *param_1 = iVar5;
    }
    for (; iVar5 < 0x42; iVar5 = iVar5 + 1) {
      param_1[iVar5 + 1] = 0;
    }
    return;
  }
  FUN_0000b68e(param_1,(int)((ulonglong)uVar6 >> 0x20),0,0);
  return;
}



/* Function: FUN_0000b874 */

void FUN_0000b874(int *param_1,int *param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  *param_1 = *param_2;
  for (iVar2 = 0; iVar4 = *param_1, iVar2 < iVar4; iVar2 = iVar2 + 1) {
    lVar1 = (ulonglong)(uint)param_2[iVar2 + 1] * (ulonglong)param_3 +
            CONCAT44(param_2[iVar2 + 1] * param_4,iVar3);
    iVar3 = (int)((ulonglong)lVar1 >> 0x20);
    param_1[iVar2 + 1] = (int)lVar1;
  }
  if (iVar3 != 0) {
    param_1[iVar4 + 1] = iVar3;
    iVar4 = *param_1 + 1;
    *param_1 = iVar4;
  }
  for (; iVar4 < 0x42; iVar4 = iVar4 + 1) {
    param_1[iVar4 + 1] = 0;
  }
  return;
}



/* Function: FUN_0000b8dc */

void FUN_0000b8dc(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = 0;
  uVar4 = 0;
  if (*param_3 != 1) {
    *param_1 = *param_3 + *param_2 + -1;
    for (iVar3 = 0; iVar3 < *param_1; iVar3 = iVar3 + 1) {
      iVar5 = 0;
      uVar8 = 0;
      uVar7 = uVar1;
      for (iVar2 = 0; iVar2 < *param_3; iVar2 = iVar2 + 1) {
        iVar6 = iVar3 - iVar2;
        if ((-1 < iVar6) && (iVar6 < *param_2)) {
          uVar1 = (uint)((ulonglong)(uint)param_3[iVar2 + 1] * (ulonglong)(uint)param_2[iVar6 + 1]);
          uVar9 = (uint)((ulonglong)(uint)param_3[iVar2 + 1] * (ulonglong)(uint)param_2[iVar6 + 1]
                        >> 0x20);
          bVar10 = CARRY4(uVar8,uVar9);
          uVar8 = uVar8 + uVar9;
          iVar5 = iVar5 + (uint)bVar10;
          bVar10 = CARRY4(uVar7,uVar1);
          uVar7 = uVar7 + uVar1;
          uVar4 = uVar4 + bVar10;
        }
      }
      uVar1 = uVar8 + uVar4;
      uVar4 = iVar5 + (uint)CARRY4(uVar8,uVar4);
      param_1[iVar3 + 1] = uVar7;
    }
    if (uVar1 != 0 || uVar4 != 0) {
      iVar3 = *param_1 + 1;
      *param_1 = iVar3;
      param_1[iVar3] = uVar1;
    }
    for (iVar3 = *param_1; iVar3 < 0x42; iVar3 = iVar3 + 1) {
      param_1[iVar3 + 1] = 0;
    }
    return;
  }
  FUN_0000b874(param_1,param_2,param_3[1],0);
  return;
}



/* Function: FUN_0000b990 */

void FUN_0000b990(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  *param_1 = *param_2;
  iVar2 = *param_2;
  if (*param_2 == 1) {
    iVar2 = FUN_00010e8c(param_2[1],0);
    param_1[1] = iVar2;
  }
  else {
    while (-1 < iVar2 + -1) {
      iVar3 = param_2[iVar2];
      iVar1 = FUN_00010e8c(iVar3,iVar1,param_3,param_4);
      param_1[iVar2] = iVar1;
      iVar1 = iVar3 - iVar1 * param_3;
      iVar2 = iVar2 + -1;
    }
    iVar2 = *param_1;
    if (param_1[iVar2] == 0) {
      iVar2 = iVar2 + -1;
      *param_1 = iVar2;
    }
    for (; iVar2 < 0x42; iVar2 = iVar2 + 1) {
      param_1[iVar2 + 1] = 0;
    }
  }
  return;
}



/* Function: FUN_0000bb04 */

void FUN_0000bb04(int *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint local_238;
  undefined4 local_234 [66];
  undefined1 auStack_12c [272];
  
  FUN_0000b672();
  while( true ) {
    iVar2 = FUN_0000b63c(param_1,param_3);
    if (iVar2 < 0) {
      return;
    }
    iVar2 = *param_1;
    uVar1 = param_1[iVar2];
    uVar5 = param_3[*param_3];
    uVar7 = iVar2 - *param_3;
    if ((uVar1 == uVar5) && (uVar7 == 0)) break;
    uVar6 = uVar1;
    uVar3 = 0;
    if ((uVar1 <= uVar5) && (uVar7 != 0)) {
      uVar7 = uVar7 - 1;
      uVar6 = param_1[iVar2 + -1];
      uVar3 = uVar1;
    }
    uVar8 = FUN_00010e8c(uVar6,uVar3,uVar5 + 1,0xfffffffe < uVar5);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_0000b68e(auStack_12c,uVar4,(int)uVar8,uVar4);
    FUN_0000b8dc(&local_238,param_3,auStack_12c);
    if (uVar7 != 0) {
      local_238 = local_238 + uVar7;
      uVar1 = local_238;
      while (uVar1 = uVar1 - 1, uVar7 <= uVar1) {
        local_234[uVar1] = local_234[uVar1 - uVar7];
      }
      for (uVar1 = 0; uVar1 < uVar7; uVar1 = uVar1 + 1) {
        local_234[uVar1] = 0;
      }
    }
    FUN_0000b764(param_1,param_1,&local_238);
  }
  FUN_0000b764(param_1,param_1,param_3);
  return;
}



/* Function: FUN_0000bc20 */

void FUN_0000bc20(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_0001161c(param_1 + 1,param_2,param_3 << 2);
  for (iVar1 = param_3; iVar1 < 0x42; iVar1 = iVar1 + 1) {
    param_1[iVar1 + 1] = 0;
  }
  *param_1 = param_3;
  return;
}



/* Function: FUN_0000bc44 */

void FUN_0000bc44(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_000103a4(param_2,param_3);
  FUN_0000bc20(param_1,param_2,param_3 >> 2);
  FUN_000103a4(param_2,param_3);
  return;
}



/* Function: FUN_0000bcf4 */

void FUN_0000bcf4(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_240 [67];
  undefined1 auStack_134 [272];
  
  iVar3 = *param_3 * 0x20 + -0x20;
  for (uVar1 = param_3[*param_3]; uVar1 != 0; uVar1 = uVar1 >> 1) {
    iVar3 = iVar3 + 1;
  }
  FUN_0000b672(param_1,param_2);
  for (uVar1 = iVar3 - 2; -1 < (int)uVar1; uVar1 = uVar1 - 1) {
    FUN_0000b874(local_240,param_1,param_1[*param_1],0);
    FUN_0000bb04(local_240,local_240,param_4);
    for (iVar3 = 1; iVar2 = local_240[0], iVar3 < *param_1; iVar3 = iVar3 + 1) {
      for (; 0 < iVar2; iVar2 = iVar2 + -1) {
        local_240[iVar2 + 1] = local_240[iVar2];
      }
      local_240[1] = 0;
      local_240[0] = local_240[0] + 1;
      FUN_0000b874(auStack_134,param_1,param_1[*param_1 - iVar3],0);
      FUN_0000b6ba(local_240,local_240,auStack_134);
      FUN_0000bb04(local_240,local_240,param_4);
    }
    FUN_0000b672(param_1,local_240);
    if (((uint)param_3[((int)uVar1 >> 5) + 1] >> (uVar1 & 0x1f) & 1) != 0) {
      FUN_0000b874(local_240,param_2,param_1[*param_1],0);
      FUN_0000bb04(local_240,local_240,param_4);
      for (iVar3 = 1; iVar2 = local_240[0], iVar3 < *param_1; iVar3 = iVar3 + 1) {
        for (; 0 < iVar2; iVar2 = iVar2 + -1) {
          local_240[iVar2 + 1] = local_240[iVar2];
        }
        local_240[1] = 0;
        local_240[0] = local_240[0] + 1;
        FUN_0000b874(auStack_134,param_2,param_1[*param_1 - iVar3],0);
        FUN_0000b6ba(local_240,local_240,auStack_134);
        FUN_0000bb04(local_240,local_240,param_4);
      }
      FUN_0000b672(param_1,local_240);
    }
  }
  return;
}



/* Function: FUN_0000be3c */

undefined4 FUN_0000be3c(void)

{
  int iVar1;
  
  iVar1 = FUN_0000b63c(DAT_0000c068 + -0x10c);
  if (-1 < iVar1) {
    return 0xffffffff;
  }
  FUN_0000bcf4(DAT_0000c068 + -0x218);
  return 1;
}



/* Function: FUN_0000be68 */

undefined4 FUN_0000be68(void)

{
  int iVar1;
  
  iVar1 = FUN_0000b63c(DAT_0000c068 + -0x218);
  if (-1 < iVar1) {
    return 0xffffffff;
  }
  FUN_0000bcf4(DAT_0000c068 + -0x10c);
  return 1;
}



/* Function: FUN_0000beec */

void FUN_0000beec(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 uStack_11c;
  undefined1 auStack_11b [259];
  
  param_3 = param_3 >> 3;
  FUN_0000b5c8();
  if (param_1 != 0) {
    FUN_0000bc44(DAT_0000c06c,param_1,4);
  }
  if (param_2 != 0) {
    FUN_0000bc44(DAT_0000c068,param_2,param_3);
  }
  FUN_0000bc44(DAT_0000c070,param_4,param_3);
  FUN_0000be68();
  FUN_000116f0(&uStack_11c,DAT_0000c074 + 1,*DAT_0000c074 << 2);
  FUN_000103a4(&uStack_11c,param_3);
  FUN_00010410(param_5,param_3,auStack_11b,param_3 + -1,param_3);
  return;
}



/* Function: FUN_0000c28c */

void FUN_0000c28c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    *(undefined4 *)(param_1 + iVar2 + 0x20) = 0;
  } while (iVar1 < 0x11);
  *(undefined4 *)(param_1 + 0x60) = DAT_0000c554;
  *(undefined4 *)(param_1 + 100) = DAT_0000c558;
  *(undefined4 *)(param_1 + 0x68) = DAT_0000c55c;
  *(undefined4 *)(param_1 + 0x6c) = DAT_0000c560;
  *(undefined4 *)(param_1 + 0x70) = DAT_0000c564;
  *(undefined4 *)(param_1 + 0x74) = DAT_0000c568;
  *(undefined4 *)(param_1 + 0x78) = DAT_0000c56c;
  *(undefined4 *)(param_1 + 0x7c) = DAT_0000c570;
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1;
    iVar1 = iVar1 + 1;
    *(undefined1 *)(iVar2 + 0x80) = 0;
  } while (iVar1 < 8);
  return;
}



/* Function: FUN_0000c2cc */

void FUN_0000c2cc(int param_1,byte *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint local_250 [64];
  uint local_150 [64];
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  iVar3 = 7;
  do {
    if (iVar3 == 7) {
      uVar5 = param_3 << 3;
    }
    else if (((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_3 >> (iVar3 * -8 + 0x35U & 0xff);
    }
    iVar10 = param_1 + iVar3;
    iVar6 = iVar3;
    if (0xff < (uint)*(byte *)(iVar10 + 0x80) + (uVar5 & 0xff)) {
      do {
        iVar6 = iVar6 + -1;
        if (iVar6 < 0) break;
        cVar1 = *(char *)(param_1 + iVar6 + 0x80);
        *(char *)(param_1 + iVar6 + 0x80) = cVar1 + '\x01';
      } while (cVar1 == -1);
    }
    iVar3 = iVar3 + -1;
    *(char *)(iVar10 + 0x80) = *(char *)(iVar10 + 0x80) + (char)uVar5;
    if (iVar3 < 0) {
      while (param_3 != 0) {
        for (uVar5 = ((uint)*(byte *)(param_1 + 0x86) * 0x20 +
                     (uint)(*(byte *)(param_1 + 0x87) >> 3)) - param_3 & 0x3f;
            (param_3 != 0 && ((int)uVar5 < 0x40)); uVar5 = uVar5 + 1) {
          iVar3 = ((int)uVar5 / 4) * 4 + param_1;
          *(uint *)(iVar3 + 0x20) =
               *(uint *)(iVar3 + 0x20) | (uint)*param_2 << (((int)uVar5 % 4) * -8 + 0x18U & 0xff);
          param_3 = param_3 - 1;
          param_2 = param_2 + 1;
        }
        if (uVar5 == 0x40) {
          FUN_000116f0(local_250,DAT_0000c574,0x100);
          iVar3 = 0;
          do {
            iVar6 = param_1 + iVar3 * 4;
            local_250[iVar3 + 0x40] = *(uint *)(iVar6 + 0x20);
            iVar3 = iVar3 + 1;
            *(undefined4 *)(iVar6 + 0x20) = 0;
          } while (iVar3 < 0x10);
          iVar3 = 0x10;
          do {
            uVar5 = local_250[iVar3 + 0x31];
            uVar8 = local_250[iVar3 + 0x3e];
            local_250[iVar3 + 0x40] =
                 local_250[iVar3 + 0x30] + local_250[iVar3 + 0x39] +
                 ((uVar8 >> 0x11 | uVar8 << 0xf) ^ (uVar8 >> 0x13 | uVar8 << 0xd) ^ uVar8 >> 10) +
                 ((uVar5 >> 7 | uVar5 << 0x19) ^ (uVar5 >> 0x12 | uVar5 << 0xe) ^ uVar5 >> 3);
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x40);
          local_2c = *(uint *)(param_1 + 0x60);
          local_30 = *(uint *)(param_1 + 100);
          local_34 = *(uint *)(param_1 + 0x68);
          local_38 = *(uint *)(param_1 + 0x6c);
          local_3c = *(uint *)(param_1 + 0x70);
          local_40 = *(uint *)(param_1 + 0x74);
          local_44 = *(uint *)(param_1 + 0x78);
          local_48 = *(uint *)(param_1 + 0x7c);
          iVar3 = 0;
          uVar5 = local_3c;
          uVar8 = local_2c;
          uVar7 = local_30;
          uVar9 = local_34;
          uVar2 = local_44;
          uVar4 = local_40;
          uVar14 = local_38;
          uVar15 = local_48;
          do {
            uVar13 = uVar4;
            uVar12 = uVar2;
            uVar11 = uVar9;
            uVar9 = uVar7;
            uVar7 = uVar8;
            uVar4 = uVar5;
            local_4c = (uVar7 >> 2 | uVar7 << 0x1e) ^ (uVar7 >> 0xd | uVar7 << 0x13) ^
                       (uVar7 >> 0x16 | uVar7 << 10);
            local_50 = ((uVar4 >> 6 | uVar4 << 0x1a) ^ (uVar4 >> 0xb | uVar4 << 0x15) ^
                       (uVar4 >> 0x19 | uVar4 << 7)) + (uVar4 & uVar13 ^ uVar12 & ~uVar4) +
                       local_250[iVar3] + uVar15 + local_250[iVar3 + 0x40];
            uVar5 = uVar14 + local_50;
            iVar3 = iVar3 + 1;
            uVar8 = local_50 + local_4c + ((uVar9 ^ uVar11) & uVar7 ^ uVar9 & uVar11);
            uVar2 = uVar13;
            uVar14 = uVar11;
            uVar15 = uVar12;
          } while (iVar3 < 0x40);
          *(uint *)(param_1 + 0x60) = uVar8 + local_2c;
          *(uint *)(param_1 + 100) = local_30 + uVar7;
          *(uint *)(param_1 + 0x68) = local_34 + uVar9;
          *(uint *)(param_1 + 0x6c) = local_38 + uVar11;
          *(uint *)(param_1 + 0x70) = uVar5 + local_3c;
          *(uint *)(param_1 + 0x74) = local_40 + uVar4;
          *(uint *)(param_1 + 0x78) = local_44 + uVar13;
          *(uint *)(param_1 + 0x7c) = local_48 + uVar12;
        }
      }
      return;
    }
  } while( true );
}



/* Function: FUN_0000c4ca */

void FUN_0000c4ca(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined1 auStack_5c [72];
  
  FUN_00011764(auStack_5c,0x44);
  local_60 = *(undefined4 *)(DAT_0000c574 + -4);
  if (param_3 != 0) {
    FUN_0000c2cc(param_1,param_2,param_3);
  }
  iVar2 = (*(byte *)(param_1 + 0x86) & 1) * -0x20 - (uint)(*(byte *)(param_1 + 0x87) >> 3);
  uVar3 = iVar2 + 0x40;
  if (uVar3 < 9) {
    uVar3 = iVar2 + 0x80;
  }
  iVar2 = 0;
  do {
    iVar1 = param_1 + iVar2;
    iVar4 = uVar3 + iVar2;
    iVar2 = iVar2 + 1;
    auStack_68[iVar4] = *(undefined1 *)(iVar1 + 0x80);
  } while (iVar2 < 8);
  FUN_0000c2cc(param_1,&local_60);
  iVar2 = 0;
  do {
    *(char *)(param_1 + iVar2) =
         (char)(*(uint *)((iVar2 / 4) * 4 + param_1 + 0x60) >> ((iVar2 % 4) * -8 + 0x18U & 0xff));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  return;
}



/* Function: FUN_0000c5f2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000c5f2(void)

{
  int iVar1;
  
  *DAT_0000c64c = 0x10000;
  iVar1 = _DAT_0000c618;
  *(undefined4 *)(_DAT_0000c618 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 0x80000000;
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xbfffffff;
  return;
}



/* Function: FUN_0000c650 */

void FUN_0000c650(int param_1,int param_2)

{
  FUN_0000eb12();
  *(byte *)(*(int *)(param_1 + 0x838) + param_2) =
       *(byte *)(*(int *)(param_1 + 0x838) + param_2) & 0xfe;
  if (9 < (*(uint *)(*(int *)(param_1 + 0x828) + param_2 * 4) & 0x1ffff) - *(int *)(param_1 + 0x34))
  {
    FUN_0000ef98();
    return;
  }
  FUN_0000f04c(param_1,param_2);
  return;
}



/* Function: FUN_0000c68e */

undefined4 FUN_0000c68e(int param_1,int param_2,uint param_3,uint param_4)

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
      FUN_0000edbe(param_1,*(undefined4 *)(param_2 + 4),uVar6);
      if ((*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb == uVar6) {
        *(undefined4 *)(param_2 + 0x10) = 0xffffff;
        iVar7 = 0;
        *(undefined1 *)(param_2 + 0xc) = 0x7f;
        iVar5 = FUN_0000ee8c(param_1,*(undefined4 *)(param_2 + 4),0);
        while (iVar5 != 0x1fff) {
          iVar7 = iVar7 + 1;
          *(byte *)(param_2 + 0xc) = *(byte *)(*(int *)(param_1 + 0x830) + iVar5) & 0x7f;
          iVar5 = FUN_0000ee8c(param_1,*(undefined4 *)(param_2 + 4),iVar7);
        }
      }
      FUN_0000c650(param_1,uVar6);
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



/* Function: FUN_0000c7ce */

undefined4 FUN_0000c7ce(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_b0;
  undefined1 local_ac [60];
  undefined1 auStack_70 [8];
  uint local_68 [16];
  int local_28;
  
  uVar5 = 0;
  if (*(uint *)(param_2 + 0x14) == 0) {
    return 1;
  }
  if (*(uint *)(param_2 + 0x10) < 0xffffff) {
    uVar3 = *(int *)(param_1 + 0x10) *
            (*(int *)(param_1 + 0x14) - ((*(uint *)(param_2 + 0x10) & 0x7ff) >> 3));
  }
  else {
    uVar3 = 0;
  }
  if (uVar3 < *(uint *)(param_2 + 0x14)) {
    if (*(byte *)(param_2 + 0xc) < 0x7e) {
      uVar3 = 0;
      iVar1 = 0;
LAB_0000cb50:
      do {
        uVar6 = iVar1 + uVar3;
        uVar4 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14);
        if (((uVar4 < uVar6 || uVar4 - uVar6 == 0) || (*(int *)(param_2 + 0x14) == 0)) ||
           (*(int *)(param_2 + 0x10) == 0xffffff)) {
          iVar2 = FUN_0000f0cc(param_1);
          *(char *)(param_2 + 0xc) = *(char *)(param_2 + 0xc) + '\x01';
          FUN_0000ecaa(param_1,*(undefined4 *)(param_2 + 4),iVar2);
          uVar4 = iVar2 << 0xb;
          do {
            *(uint *)(param_2 + 0x10) = uVar4;
LAB_0000ccc0:
            while( true ) {
              do {
                uVar6 = iVar1 + uVar3;
                uVar4 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14);
                if ((uVar4 < uVar6 || uVar4 - uVar6 == 0) || (*(int *)(param_2 + 0x14) == 0)) {
                  if (uVar3 == 0) goto LAB_0000cf48;
                  if (*(int *)(param_2 + 0x10) == 0xffffff) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  FUN_0000f316(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar3);
                  iVar1 = FUN_0000ea40(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                                       (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar3,
                                       *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
                  if ((iVar1 == 0) || (iVar1 == 1)) {
                    for (uVar3 = 0; uVar3 < uVar5; uVar3 = uVar3 + 1) {
                      FUN_0000c68e(param_1,param_2,local_68[uVar3 * 2],local_68[uVar3 * 2 + 1]);
                    }
                    uVar5 = *(uint *)(param_2 + 0x10);
                    if (uVar5 == 0xffffff) {
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    goto LAB_0000c9e8;
                  }
                  uVar5 = *(uint *)(param_2 + 0x10);
                  if (uVar5 == 0xffffff) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  goto LAB_0000cf00;
                }
                local_28 = param_2 + uVar6 * 4;
                uVar4 = *(uint *)(local_28 + 0x18);
                if (-1 < (int)uVar4) goto LAB_0000ccbc;
                iVar2 = FUN_0000ea16(param_1,(uVar4 & 0xffffff) >> 0xb,(uVar4 & 0x7ff) >> 3,
                                     uVar4 & 7,1,
                                     *(int *)(param_1 + 8) * uVar3 + *(int *)(param_1 + 0x83c) + 4,0
                                     ,auStack_70);
                if (iVar2 != 0) {
                  return 0;
                }
                iVar2 = FUN_0000eba0(auStack_70,*(byte *)(local_28 + 0x18) & 7,1);
                if (iVar2 != 0) {
                  return 0;
                }
                *(uint *)(local_ac + uVar3 * 8 + -4) =
                     uVar6 & 0x7ff | (*(ushort *)(param_2 + 4) & 0x1fff) << 0xb;
                local_ac[uVar3 * 8] = *(undefined1 *)(param_2 + 0xc);
                local_68[uVar5 * 2] = uVar6;
                uVar4 = uVar5 + 1;
                local_68[uVar5 * 2 + 1] =
                     uVar3 | ((*(uint *)(param_2 + 0x10) & 0x7ff) >> 3 |
                             ((*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb) << 8) << 3;
                if (*(uint *)(param_1 + 0x10) < uVar4) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                uVar3 = uVar3 + 1;
                uVar5 = uVar4;
              } while (*(uint *)(param_1 + 0x10) != uVar3);
              FUN_0000f316(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar3);
              iVar2 = FUN_0000ea40(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                                   (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar3,
                                   *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
              if ((iVar2 != 0) && (iVar2 != 1)) {
                uVar5 = *(uint *)(param_2 + 0x10);
                if (uVar5 == 0xffffff) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                goto LAB_0000cf00;
              }
              iVar1 = iVar1 + uVar3;
              uVar3 = 0;
              for (uVar5 = 0; uVar5 < uVar4; uVar5 = uVar5 + 1) {
                FUN_0000c68e(param_1,param_2,local_68[uVar5 * 2],local_68[uVar5 * 2 + 1]);
              }
              uVar4 = *(uint *)(param_2 + 0x10);
              uVar5 = 0;
              if (uVar4 == 0xffffff) {
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while( true );
              }
              uVar6 = ((uVar4 & 0x7ff) >> 3) + 1;
              if (*(uint *)(param_1 + 0x14) != uVar6) break;
              *(undefined4 *)(param_2 + 0x10) = 0xffffff;
            }
            uVar4 = uVar4 & 7 | (uVar6 | ((uVar4 & 0xffffff) >> 0xb) << 8) << 3;
          } while( true );
        }
        local_28 = param_2 + uVar6 * 4;
        uVar4 = *(uint *)(local_28 + 0x18);
        if (-1 < (int)uVar4) {
          iVar1 = iVar1 + 1;
          goto LAB_0000cb50;
        }
        iVar2 = FUN_0000ea16(param_1,(uVar4 & 0xffffff) >> 0xb,(uVar4 & 0x7ff) >> 3,uVar4 & 7,1,
                             *(int *)(param_1 + 8) * uVar3 + *(int *)(param_1 + 0x83c) + 4,0,
                             auStack_70);
        bVar7 = iVar2 == 0;
        do {
          if (!bVar7) {
            return 0;
          }
          iVar2 = FUN_0000eba0(auStack_70,*(byte *)(local_28 + 0x18) & 7,1);
          bVar7 = iVar2 == 0;
        } while (!bVar7);
        *(uint *)(local_ac + uVar3 * 8 + -4) =
             uVar6 & 0x7ff | (*(ushort *)(param_2 + 4) & 0x1fff) << 0xb;
        local_ac[uVar3 * 8] = *(undefined1 *)(param_2 + 0xc);
        local_68[uVar5 * 2] = uVar6;
        uVar4 = uVar5 + 1;
        local_68[uVar5 * 2 + 1] =
             uVar3 | ((*(uint *)(param_2 + 0x10) & 0x7ff) >> 3 |
                     ((*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb) << 8) << 3;
        if (*(uint *)(param_1 + 0x10) < uVar4) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar3 = uVar3 + 1;
        uVar5 = uVar4;
        if (*(uint *)(param_1 + 0x10) == uVar3) {
          FUN_0000f316(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar3);
          iVar2 = FUN_0000ea40(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                               (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar3,
                               *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
          if ((iVar2 != 0) && (iVar2 != 1)) {
            uVar5 = *(uint *)(param_2 + 0x10);
            if (uVar5 == 0xffffff) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            goto LAB_0000cf00;
          }
          iVar1 = iVar1 + uVar3;
          uVar3 = 0;
          for (uVar5 = 0; uVar5 < uVar4; uVar5 = uVar5 + 1) {
            FUN_0000c68e(param_1,param_2,local_68[uVar5 * 2],local_68[uVar5 * 2 + 1]);
          }
          uVar4 = *(uint *)(param_2 + 0x10);
          uVar5 = 0;
          if (uVar4 == 0xffffff) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar6 = ((uVar4 & 0x7ff) >> 3) + 1;
          if (*(uint *)(param_1 + 0x14) == uVar6) {
            *(undefined4 *)(param_2 + 0x10) = 0xffffff;
          }
          else {
            *(uint *)(param_2 + 0x10) = uVar4 & 7 | (uVar6 | ((uVar4 & 0xffffff) >> 0xb) << 8) << 3;
          }
        }
      } while( true );
    }
    if (*(byte *)(param_2 + 0xc) != 0x7e) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar1 = FUN_0000f0cc(param_1);
    *(undefined1 *)(param_2 + 0xc) = 0;
    FUN_0000ecaa(param_1,*(undefined4 *)(param_2 + 4),iVar1);
    *(int *)(param_2 + 0x10) = iVar1 << 0xb;
    uVar3 = 0;
    iVar1 = 0;
    while (uVar6 = iVar1 + uVar3, uVar4 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14),
          uVar6 <= uVar4 && uVar4 - uVar6 != 0) {
      local_28 = param_2 + uVar6 * 4;
      uVar4 = *(uint *)(local_28 + 0x18);
      if (uVar4 == 0xffffff) {
        iVar1 = iVar1 + 1;
      }
      else {
        iVar2 = FUN_0000ea16(param_1,(uVar4 & 0xffffff) >> 0xb,(uVar4 & 0x7ff) >> 3,uVar4 & 7,1,
                             *(int *)(param_1 + 8) * uVar3 + *(int *)(param_1 + 0x83c) + 4,0,
                             auStack_70);
        if (iVar2 != 0) {
          return 0;
        }
        iVar2 = FUN_0000eba0(auStack_70,*(byte *)(local_28 + 0x18) & 7,1);
        if (iVar2 != 0) {
          return 0;
        }
        *(uint *)(local_ac + uVar3 * 8 + -4) =
             uVar6 & 0x7ff | (*(ushort *)(param_2 + 4) & 0x1fff) << 0xb;
        local_ac[uVar3 * 8] = *(undefined1 *)(param_2 + 0xc);
        local_68[uVar5 * 2] = uVar6;
        uVar4 = uVar5 + 1;
        local_68[uVar5 * 2 + 1] =
             uVar3 | ((*(uint *)(param_2 + 0x10) & 0x7ff) >> 3 |
                     ((*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb) << 8) << 3;
        if (*(uint *)(param_1 + 0x10) < uVar4) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar3 = uVar3 + 1;
        uVar5 = uVar4;
        if (*(uint *)(param_1 + 0x10) == uVar3) {
          FUN_0000f316(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar3);
          iVar2 = FUN_0000ea40(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                               (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar3,
                               *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
          if ((iVar2 != 0) && (iVar2 != 1)) {
            uVar5 = *(uint *)(param_2 + 0x10);
            if (uVar5 == 0xffffff) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            goto LAB_0000cf00;
          }
          iVar1 = iVar1 + uVar3;
          uVar3 = 0;
          for (uVar5 = 0; uVar5 < uVar4; uVar5 = uVar5 + 1) {
            FUN_0000c68e(param_1,param_2,local_68[uVar5 * 2],local_68[uVar5 * 2 + 1]);
          }
          uVar4 = *(uint *)(param_2 + 0x10);
          uVar5 = 0;
          if (uVar4 == 0xffffff) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar6 = ((uVar4 & 0x7ff) >> 3) + 1;
          if (*(uint *)(param_1 + 0x14) == uVar6) {
            *(undefined4 *)(param_2 + 0x10) = 0xffffff;
          }
          else {
            *(uint *)(param_2 + 0x10) = uVar4 & 7 | (uVar6 | ((uVar4 & 0xffffff) >> 0xb) << 8) << 3;
          }
        }
      }
    }
    if (uVar3 == 0) goto LAB_0000cf48;
    if (*(int *)(param_2 + 0x10) == 0xffffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    FUN_0000f316(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar3);
    iVar1 = FUN_0000ea40(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                         (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar3,
                         *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
    if ((iVar1 != 0) && (iVar1 != 1)) {
      uVar5 = *(uint *)(param_2 + 0x10);
      if (uVar5 == 0xffffff) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      goto LAB_0000cf00;
    }
    for (uVar3 = 0; uVar3 < uVar5; uVar3 = uVar3 + 1) {
      FUN_0000c68e(param_1,param_2,local_68[uVar3 * 2],local_68[uVar3 * 2 + 1]);
    }
    uVar5 = *(uint *)(param_2 + 0x10);
    if (uVar5 == 0xffffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    uVar3 = 0;
    iVar1 = 0;
    while ((uVar6 = iVar1 + uVar3, uVar4 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14),
           uVar6 <= uVar4 && uVar4 - uVar6 != 0 && (*(int *)(param_2 + 0x14) != 0))) {
      local_28 = param_2 + uVar6 * 4;
      uVar4 = *(uint *)(local_28 + 0x18);
      if ((uVar4 == 0xffffff) || (-1 < (int)uVar4)) {
        iVar1 = iVar1 + 1;
      }
      else {
        iVar2 = FUN_0000ea16(param_1,(uVar4 & 0xffffff) >> 0xb,(uVar4 & 0x7ff) >> 3,uVar4 & 7,1,
                             *(int *)(param_1 + 8) * uVar3 + *(int *)(param_1 + 0x83c) + 4,0,
                             auStack_70);
        if (iVar2 != 0) {
          return 0;
        }
        iVar2 = FUN_0000eba0(auStack_70,*(byte *)(local_28 + 0x18) & 7,1);
        if (iVar2 != 0) {
          return 0;
        }
        *(uint *)(local_ac + uVar3 * 8 + -4) =
             uVar6 & 0x7ff | (*(ushort *)(param_2 + 4) & 0x1fff) << 0xb;
        local_ac[uVar3 * 8] = *(undefined1 *)(param_2 + 0xc);
        local_68[uVar5 * 2] = uVar6;
        uVar4 = uVar5 + 1;
        local_68[uVar5 * 2 + 1] =
             uVar3 | ((*(uint *)(param_2 + 0x10) & 0x7ff) >> 3 |
                     ((*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb) << 8) << 3;
        if (*(uint *)(param_1 + 0x10) < uVar4) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar3 = uVar3 + 1;
        uVar5 = uVar4;
        if (*(uint *)(param_1 + 0x10) == uVar3) {
          FUN_0000f316(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar3);
          iVar2 = FUN_0000ea40(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                               (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar3,
                               *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
          if ((iVar2 != 0) && (iVar2 != 1)) {
            uVar5 = *(uint *)(param_2 + 0x10);
            bVar7 = uVar5 == 0xffffff;
            goto LAB_0000c8f6;
          }
          iVar1 = iVar1 + uVar3;
          uVar3 = 0;
          for (uVar5 = 0; uVar5 < uVar4; uVar5 = uVar5 + 1) {
            FUN_0000c68e(param_1,param_2,local_68[uVar5 * 2],local_68[uVar5 * 2 + 1]);
          }
          uVar4 = *(uint *)(param_2 + 0x10);
          uVar5 = 0;
          if (uVar4 == 0xffffff) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar6 = ((uVar4 & 0x7ff) >> 3) + 1;
          if (*(uint *)(param_1 + 0x14) == uVar6) {
            *(undefined4 *)(param_2 + 0x10) = 0xffffff;
          }
          else {
            *(uint *)(param_2 + 0x10) = uVar4 & 7 | (uVar6 | ((uVar4 & 0xffffff) >> 0xb) << 8) << 3;
          }
        }
      }
    }
    if (uVar3 == 0) goto LAB_0000cf48;
    if (*(int *)(param_2 + 0x10) == 0xffffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    FUN_0000f316(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar3);
    iVar1 = FUN_0000ea40(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                         (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar3,
                         *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
    if ((iVar1 != 0) && (iVar1 != 1)) {
      uVar5 = *(uint *)(param_2 + 0x10);
      bVar7 = false;
      if (uVar5 == 0xffffff) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
LAB_0000c8f6:
      if (bVar7) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
LAB_0000cf00:
      uVar3 = ((uVar5 & 0x7ff) >> 3) + 1;
      if (*(uint *)(param_1 + 0x14) == uVar3) {
        *(undefined4 *)(param_2 + 0x10) = 0xffffff;
      }
      else {
        *(uint *)(param_2 + 0x10) = uVar5 & 7 | (uVar3 | ((uVar5 & 0xffffff) >> 0xb) << 8) << 3;
      }
      return 0;
    }
    for (uVar3 = 0; uVar3 < uVar5; uVar3 = uVar3 + 1) {
      FUN_0000c68e(param_1,param_2,local_68[uVar3 * 2],local_68[uVar3 * 2 + 1]);
    }
    uVar5 = *(uint *)(param_2 + 0x10);
    if (uVar5 == 0xffffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
LAB_0000c9e8:
  uVar3 = ((uVar5 & 0x7ff) >> 3) + 1;
  if (*(uint *)(param_1 + 0x14) == uVar3) {
    *(undefined4 *)(param_2 + 0x10) = 0xffffff;
  }
  else {
    *(uint *)(param_2 + 0x10) = uVar5 & 7 | (uVar3 | ((uVar5 & 0xffffff) >> 0xb) << 8) << 3;
  }
LAB_0000cf48:
  if (*(int *)(param_2 + 0x14) == 0) {
    return 1;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
LAB_0000ccbc:
  iVar1 = iVar1 + 1;
  goto LAB_0000ccc0;
}



/* Function: FUN_0000cf54 */

undefined4 FUN_0000cf54(int param_1,int param_2)

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
      while (iVar2 = FUN_0000ee8c(param_1,iVar4,iVar3), iVar2 != 0x1fff) {
        iVar4 = *(int *)(param_2 + 4);
        uVar7 = uVar7 + *(ushort *)(*(int *)(param_1 + 0x820) + iVar2 * 2);
        iVar3 = iVar3 + 1;
      }
    }
    else {
      while (uVar1 = FUN_0000ee8c(param_1,iVar4,iVar3),
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
      iVar4 = FUN_0000ee8c(param_1,*(undefined4 *)(param_2 + 4),iVar3 + 1);
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
    iVar4 = FUN_0000f0cc(param_1);
    *(undefined1 *)(param_2 + 0xc) = 0;
    FUN_0000ecaa(param_1,*(undefined4 *)(param_2 + 4),iVar4);
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
        FUN_0000ea16(param_1,(uVar1 & 0xffffff) >> 0xb,(uVar1 & 0x7ff) >> 3,uVar1 & 7,1,
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
          FUN_0000f316(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar7);
          iVar3 = FUN_0000ea40(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                               (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar7,
                               *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
          if ((iVar3 != 0) && (iVar3 != 1)) {
            uVar6 = *(uint *)(param_2 + 0x10);
            if (uVar6 == 0xffffff) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            goto LAB_0000d3d6;
          }
          iVar4 = iVar4 + uVar7;
          uVar7 = 0;
          for (uVar6 = 0; uVar6 < uVar1; uVar6 = uVar6 + 1) {
            FUN_0000c68e(param_1,param_2,local_70[uVar6 * 2],local_70[uVar6 * 2 + 1]);
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
    if (uVar7 == 0) goto LAB_0000d41c;
    if (*(int *)(param_2 + 0x10) == 0xffffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    FUN_0000f316(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar7);
    iVar4 = FUN_0000ea40(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                         (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar7,
                         *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
    if ((iVar4 != 0) && (iVar4 != 1)) {
      uVar6 = *(uint *)(param_2 + 0x10);
      if (uVar6 == 0xffffff) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      goto LAB_0000d3d6;
    }
    for (uVar7 = 0; uVar7 < uVar6; uVar7 = uVar7 + 1) {
      FUN_0000c68e(param_1,param_2,local_70[uVar7 * 2],local_70[uVar7 * 2 + 1]);
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
        FUN_0000ea16(param_1,uVar8,(uVar1 & 0x7ff) >> 3,uVar1 & 7,1,
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
          FUN_0000f316(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar7);
          iVar3 = FUN_0000ea40(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                               (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar7,
                               *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
          if ((iVar3 != 0) && (iVar3 != 1)) {
            uVar6 = *(uint *)(param_2 + 0x10);
            if (uVar6 == 0xffffff) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            goto LAB_0000d3d6;
          }
          iVar4 = iVar4 + uVar7;
          uVar7 = 0;
          for (uVar6 = 0; uVar6 < uVar1; uVar6 = uVar6 + 1) {
            FUN_0000c68e(param_1,param_2,local_70[uVar6 * 2],local_70[uVar6 * 2 + 1]);
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
    if (uVar7 == 0) goto LAB_0000d41c;
    if (*(int *)(param_2 + 0x10) == 0xffffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    FUN_0000f316(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar7);
    iVar4 = FUN_0000ea40(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                         (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar7,
                         *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
    if ((iVar4 != 0) && (iVar4 != 1)) {
      uVar6 = *(uint *)(param_2 + 0x10);
      if (uVar6 == 0xffffff) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
LAB_0000d3d6:
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
      FUN_0000c68e(param_1,param_2,local_70[uVar7 * 2],local_70[uVar7 * 2 + 1]);
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
LAB_0000d41c:
  if (*(int *)(param_2 + 0x14) == 0) {
    return 1;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_0000d4b6 */

undefined4 FUN_0000d4b6(int param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint local_80 [16];
  byte local_40 [8];
  uint local_38;
  int iStack_30;
  int iStack_2c;
  int local_28;
  
  if (((int)((uint)*(byte *)(*(int *)(param_1 + 0x838) + param_3) << 0x1d) < 0) &&
     (*(int *)(param_1 + 4) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  piVar10 = *(int **)(param_1 + param_2 * 4 + 0x3c);
  if ((*piVar10 != DAT_0000d84c) ||
     (piVar10[*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) + 6] != DAT_0000d84c + -0xe)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  piVar10[1] = 0x1fff;
  *(undefined1 *)(piVar10 + 3) = 0x7f;
  piVar10[4] = 0xffffff;
  piVar10[5] = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  iVar7 = *(int *)(param_1 + 0x14);
  for (uVar4 = 0; uVar4 < (uint)(iVar3 * iVar7); uVar4 = uVar4 + 1) {
    piVar10[uVar4 + 6] = 0xffffff;
  }
  iVar3 = 0;
  piVar10[1] = param_3;
  iStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  do {
    iVar7 = FUN_0000ee8c(param_1,local_28,iVar3);
    if (iVar7 == 0x1fff) {
      FUN_0000c7ce(param_1,piVar10);
      *(byte *)(*(int *)(param_1 + 0x838) + local_28) =
           *(byte *)(*(int *)(param_1 + 0x838) + local_28) | 4;
      return 1;
    }
    iVar5 = FUN_0000ee8c(param_1,local_28,iVar3 + 1);
    local_38 = (uint)(iVar5 == 0x1fff);
    *(byte *)(piVar10 + 3) = *(byte *)(*(int *)(param_1 + 0x830) + iVar7) & 0x7f;
    *(undefined2 *)(*(int *)(param_1 + 0x820) + iVar7 * 2) = 0;
    iVar5 = (uint)*(byte *)(*(int *)(param_1 + 0x838) + iVar7) << 0x1f;
    for (uVar4 = 0; uVar4 < *(uint *)(param_1 + 0x14); uVar4 = uVar4 + 1) {
      iVar6 = FUN_0000ea16(param_1,iVar7,uVar4,0,*(undefined4 *)(param_1 + 0x10),0,
                           *(int *)(param_1 + 0x840) + 4,local_40);
      if (iVar6 != 0) {
        piVar10[1] = 0x1fff;
        *(undefined1 *)(piVar10 + 3) = 0x7f;
        piVar10[4] = 0xffffff;
        piVar10[5] = 0;
        *(byte *)(*(int *)(param_1 + 0x838) + local_28) =
             *(byte *)(*(int *)(param_1 + 0x838) + local_28) & 0xfb;
        return 0;
      }
      FUN_0000f17c(param_1,*(int *)(param_1 + 0x840) + 4,local_80,*(undefined4 *)(param_1 + 0x10));
      bVar2 = true;
      for (uVar9 = 0; uVar9 < *(uint *)(param_1 + 0x10); uVar9 = uVar9 + 1) {
        if (local_80[uVar9 * 2] == 0xffffff) goto LAB_0000d61e;
        bVar2 = false;
        bVar1 = local_40[uVar9];
        if ((bVar1 & 3) == 0 && -1 < iVar5) {
          uVar8 = uVar9 | (uVar4 | iVar7 << 8) << 3;
LAB_0000d610:
          iVar6 = FUN_0000c68e(param_1,piVar10,local_80[uVar9 * 2] & 0x7ff,uVar8);
          iVar3 = iVar3 - iVar6;
        }
        else if ((bVar1 & 3) == 0) {
          if (iVar5 < 0) goto LAB_0000d604;
        }
        else if ((bVar1 & 3) == 1) {
LAB_0000d604:
          uVar8 = uVar9 | (uVar4 | iVar7 << 8) << 3 | 0x80000000;
          goto LAB_0000d610;
        }
LAB_0000d61e:
      }
      if (local_38 != 0) {
        if (((bVar2) && (-1 < iVar5)) &&
           (iVar6 = FUN_0000ebc4(local_40,0,*(undefined4 *)(param_1 + 0x10)), iVar6 != 0)) {
          if (piVar10[4] != 0xffffff) goto LAB_0000d654;
          iVar6 = (uVar4 | iVar7 << 8) << 3;
        }
        else {
          iVar6 = 0xffffff;
        }
        piVar10[4] = iVar6;
      }
LAB_0000d654:
    }
    if (*(short *)(*(int *)(param_1 + 0x820) + iVar7 * 2) == 0) {
      FUN_0000edbe(param_1,local_28,iVar7);
      FUN_0000c650(param_1,iVar7);
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



/* Function: FUN_0000d6b8 */

undefined4 FUN_0000d6b8(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte abStack_38 [8];
  int *local_30;
  uint local_2c;
  int local_28;
  
  uVar8 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14);
  if (uVar8 < param_3 || uVar8 - param_3 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  local_2c = param_3 + param_4;
  if (uVar8 < param_3 + param_4) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  local_30 = *(int **)(param_1 + param_2 * 4 + 0x3c);
  if ((*local_30 != DAT_0000d84c) || (local_30[uVar8 + 6] != DAT_0000d84c + -0xe)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20)) <= (uint)local_30[1]) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (-1 < (int)((uint)*(byte *)(*(int *)(param_1 + 0x838) + local_30[1]) << 0x1d)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar7 = 0;
  uVar5 = 0xffffff;
  iVar11 = 0;
  uVar10 = 0xffffff;
  uVar6 = uVar8;
  uVar9 = uVar8;
  for (; param_3 < local_2c; param_3 = param_3 + 1) {
    iVar4 = 0;
    uVar2 = local_30[param_3 + 6];
    if (uVar2 == 0xffffff) {
      if (uVar5 != 0xffffff) {
        if (uVar10 == 0xffffff) {
          iVar4 = FUN_0000ea16(param_1,(uVar5 & 0xffffff) >> 0xb,(uVar5 & 0x7ff) >> 3,uVar5 & 7,1,
                               *(int *)(param_1 + 8) * iVar7 + param_5,0,abStack_38);
          uVar8 = uVar6;
        }
        else {
          local_28 = uVar8 - uVar6;
          iVar4 = FUN_0000ea16(param_1,(uVar5 & 0xffffff) >> 0xb,(uVar5 & 0x7ff) >> 3,uVar5 & 7,
                               local_28 + 1,*(int *)(param_1 + 8) * iVar7 + param_5,0,abStack_38);
          iVar7 = iVar7 + local_28;
        }
        iVar7 = iVar7 + 1;
        FUN_00011754(*(int *)(param_1 + 8) * iVar7 + param_5,*(int *)(param_1 + 8),0xff);
        goto LAB_0000d7c0;
      }
      FUN_00011754(*(int *)(param_1 + 8) * iVar7 + param_5,*(int *)(param_1 + 8),0xff);
      iVar7 = iVar7 + 1;
    }
    else {
      if (uVar5 == 0xffffff) {
        uVar9 = uVar2 & 7;
        uVar5 = uVar2;
        uVar6 = param_3;
        if (*(int *)(param_1 + 0x10) == uVar9 + 1) {
          iVar4 = FUN_0000ea16(param_1,(uVar2 & 0xffffff) >> 0xb,(uVar2 & 0x7ff) >> 3,uVar9,1,
                               *(int *)(param_1 + 8) * iVar7 + param_5,0,abStack_38);
          uVar8 = param_3;
          goto LAB_0000d7c0;
        }
LAB_0000d914:
        if (iVar11 == 0) goto LAB_0000d962;
      }
      else {
        if ((uVar10 == 0xffffff) && ((uVar5 & 0xffffff) + 1 == (uVar2 & 0xffffff))) {
          uVar8 = param_3;
          uVar10 = uVar2;
          if (*(int *)(param_1 + 0x10) != (uVar2 & 7) + 1) goto LAB_0000d914;
          iVar11 = *(int *)(param_1 + 8);
LAB_0000d8c4:
          local_28 = param_3 - uVar6;
          iVar4 = FUN_0000ea16(param_1,(uVar5 & 0xffffff) >> 0xb,(uVar5 & 0x7ff) >> 3,uVar5 & 7,
                               local_28 + 1,iVar11 * iVar7 + param_5,0,abStack_38);
          iVar7 = iVar7 + local_28;
          uVar8 = param_3;
        }
        else {
          if (uVar10 == 0xffffff) {
            iVar4 = FUN_0000ea16(param_1,(uVar5 & 0xffffff) >> 0xb,(uVar5 & 0x7ff) >> 3,uVar5 & 7,1,
                                 *(int *)(param_1 + 8) * iVar7 + param_5,0,abStack_38);
            uVar8 = uVar6;
          }
          else {
            if ((uVar10 & 0xffffff) + 1 == (uVar2 & 0xffffff)) {
              uVar8 = param_3;
              uVar10 = uVar2;
              if (*(int *)(param_1 + 0x10) == (uVar2 & 7) + 1) {
                iVar11 = *(int *)(param_1 + 8);
                goto LAB_0000d8c4;
              }
              goto LAB_0000d914;
            }
            local_28 = uVar8 - uVar6;
            iVar4 = FUN_0000ea16(param_1,(uVar5 & 0xffffff) >> 0xb,(uVar5 & 0x7ff) >> 3,uVar5 & 7,
                                 local_28 + 1,*(int *)(param_1 + 8) * iVar7 + param_5,0,abStack_38);
            iVar7 = iVar7 + local_28;
          }
          param_3 = param_3 - 1;
        }
LAB_0000d7c0:
        iVar7 = iVar7 + 1;
      }
      if (iVar4 != 0) goto LAB_0000da3e;
      iVar11 = 0;
      for (; uVar6 <= uVar8; uVar6 = uVar6 + 1) {
        if ((abStack_38[uVar9] & 0xf) >> 2 == 1) {
          uVar5 = local_30[uVar6 + 6];
          FUN_0000c68e(param_1,local_30,uVar6,
                       uVar5 & 7 | ((uVar5 & 0x7ff) >> 3 | ((uVar5 & 0xffffff) >> 0xb) << 8) << 3 |
                       0x80000000);
        }
        else if ((abStack_38[uVar9] & 0xc) != 0) {
          iVar11 = 1;
        }
        uVar9 = uVar9 + 1;
      }
      if (iVar11 == 1) goto LAB_0000da3e;
      uVar5 = 0xffffff;
      uVar10 = 0xffffff;
      uVar8 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14);
      iVar11 = 0;
      uVar6 = uVar8;
      uVar9 = uVar8;
    }
LAB_0000d962:
  }
  if (uVar5 == 0xffffff) {
LAB_0000da0c:
    uVar3 = 1;
  }
  else {
    if (uVar10 == 0xffffff) {
      iVar11 = *(int *)(param_1 + 8);
      iVar4 = 1;
      uVar8 = uVar6;
    }
    else {
      iVar11 = *(int *)(param_1 + 8);
      iVar4 = (uVar8 - uVar6) + 1;
    }
    iVar7 = FUN_0000ea16(param_1,(uVar5 & 0xffffff) >> 0xb,(uVar5 & 0x7ff) >> 3,uVar5 & 7,iVar4,
                         iVar11 * iVar7 + param_5,0,abStack_38);
    if (iVar7 == 0) {
      bVar1 = false;
      for (; uVar6 <= uVar8; uVar6 = uVar6 + 1) {
        if ((abStack_38[uVar9] & 0xf) >> 2 == 1) {
          uVar5 = local_30[uVar6 + 6];
          FUN_0000c68e(param_1,local_30,uVar6,
                       uVar5 & 7 | ((uVar5 & 0x7ff) >> 3 | ((uVar5 & 0xffffff) >> 0xb) << 8) << 3 |
                       0x80000000);
        }
        else if ((abStack_38[uVar9] & 0xc) != 0) {
          bVar1 = true;
        }
        uVar9 = uVar9 + 1;
      }
      if (!bVar1) goto LAB_0000da0c;
    }
LAB_0000da3e:
    uVar3 = 0;
  }
  return uVar3;
}



/* Function: FUN_0000e522 */

void FUN_0000e522(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + param_2 * 4 + 0x3c);
  if ((*piVar3 == DAT_0000e8b8) &&
     (piVar3[*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) + 6] == DAT_0000e8b8 + -0xe)) {
    if (piVar3[1] != 0x1fff) {
      iVar1 = FUN_0000f156(param_1);
      if ((iVar1 == 1) || (uVar2 = FUN_0000eec4(param_1,piVar3[1]), 3 < uVar2)) {
        FUN_0000cf54(param_1,piVar3);
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



/* Function: FUN_0000e6ce */

void FUN_0000e6ce(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + param_2 * 4 + 0x3c);
  if ((*piVar1 != DAT_0000e8b8) ||
     (piVar1[*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) + 6] != DAT_0000e8b8 + -0xe)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20)) <= (uint)piVar1[1]) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (-1 < (int)((uint)*(byte *)(*(int *)(param_1 + 0x838) + piVar1[1]) << 0x1d)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  FUN_0000cf54();
  return;
}



/* Function: FUN_0000e710 */

undefined4 FUN_0000e710(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_b0;
  undefined1 local_ac [60];
  uint local_70 [16];
  undefined1 auStack_30 [12];
  
  piVar4 = *(int **)(param_1 + param_2 * 4 + 0x3c);
  if ((*piVar4 != DAT_0000e8b8) ||
     (piVar4[*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) + 6] != DAT_0000e8b8 + -0xe)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20)) <= (uint)piVar4[1]) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (-1 < (int)((uint)*(byte *)(*(int *)(param_1 + 0x838) + piVar4[1]) << 0x1d)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(undefined1 *)(piVar4 + 3) = 0;
  FUN_0000ecaa(param_1,piVar4[1]);
  piVar4[4] = param_3 << 0xb;
  uVar5 = 0;
  iVar7 = 0;
  uVar2 = 0;
  while (uVar6 = iVar7 + uVar5, uVar3 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14),
        uVar6 <= uVar3 && uVar3 - uVar6 != 0) {
    uVar3 = piVar4[uVar6 + 6];
    if (uVar3 == 0xffffff) {
      iVar7 = iVar7 + 1;
    }
    else {
      iVar1 = FUN_0000ea16(param_1,(uVar3 & 0xffffff) >> 0xb,(uVar3 & 0x7ff) >> 3,uVar3 & 7,1,
                           *(int *)(param_1 + 8) * uVar5 + *(int *)(param_1 + 0x83c) + 4,0,
                           auStack_30);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = FUN_0000eba0(auStack_30,*(byte *)(piVar4 + uVar6 + 6) & 7,1);
      if (iVar1 != 0) {
        return 0;
      }
      *(uint *)(local_ac + uVar5 * 8 + -4) =
           uVar6 & 0x7ff | (*(ushort *)(piVar4 + 1) & 0x1fff) << 0xb;
      local_ac[uVar5 * 8] = (char)piVar4[3];
      local_70[uVar2 * 2] = uVar6;
      uVar3 = uVar2 + 1;
      local_70[uVar2 * 2 + 1] =
           uVar5 | ((piVar4[4] & 0x7ffU) >> 3 | ((piVar4[4] & 0xffffffU) >> 0xb) << 8) << 3;
      if (*(uint *)(param_1 + 0x10) < uVar3) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar5 = uVar5 + 1;
      uVar2 = uVar3;
      if (*(uint *)(param_1 + 0x10) == uVar5) {
        FUN_0000f316(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar5);
        iVar1 = FUN_0000ea40(param_1,(piVar4[4] & 0xffffffU) >> 0xb,(piVar4[4] & 0x7ffU) >> 3,0,
                             uVar5,*(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
        if ((iVar1 != 0) && (iVar1 != 1)) {
          uVar2 = piVar4[4];
          if (uVar2 == 0xffffff) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          goto LAB_0000e91e;
        }
        iVar7 = iVar7 + uVar5;
        uVar5 = 0;
        for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
          FUN_0000c68e(param_1,piVar4,local_70[uVar2 * 2],local_70[uVar2 * 2 + 1]);
        }
        uVar3 = piVar4[4];
        uVar2 = 0;
        if (uVar3 == 0xffffff) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar6 = ((uVar3 & 0x7ff) >> 3) + 1;
        if (*(uint *)(param_1 + 0x14) == uVar6) {
          piVar4[4] = 0xffffff;
        }
        else {
          piVar4[4] = uVar3 & 7 | (uVar6 | ((uVar3 & 0xffffff) >> 0xb) << 8) << 3;
        }
      }
    }
  }
  if (uVar5 != 0) {
    FUN_0000f316(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar5);
    iVar7 = FUN_0000ea40(param_1,(piVar4[4] & 0xffffffU) >> 0xb,(piVar4[4] & 0x7ffU) >> 3,0,uVar5,
                         *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
    if ((iVar7 != 0) && (iVar7 != 1)) {
      uVar2 = piVar4[4];
      if (uVar2 == 0xffffff) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
LAB_0000e91e:
      uVar5 = ((uVar2 & 0x7ff) >> 3) + 1;
      if (*(uint *)(param_1 + 0x14) == uVar5) {
        piVar4[4] = 0xffffff;
      }
      else {
        piVar4[4] = uVar2 & 7 | (uVar5 | ((uVar2 & 0xffffff) >> 0xb) << 8) << 3;
      }
      return 0;
    }
    for (uVar5 = 0; uVar5 < uVar2; uVar5 = uVar5 + 1) {
      FUN_0000c68e(param_1,piVar4,local_70[uVar5 * 2],local_70[uVar5 * 2 + 1]);
    }
    uVar2 = piVar4[4];
    if (uVar2 == 0xffffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar5 = ((uVar2 & 0x7ff) >> 3) + 1;
    if (*(uint *)(param_1 + 0x14) == uVar5) {
      piVar4[4] = 0xffffff;
    }
    else {
      piVar4[4] = uVar2 & 7 | (uVar5 | ((uVar2 & 0xffffff) >> 0xb) << 8) << 3;
    }
  }
  return 1;
}



/* Function: FUN_0000e9a4 */

undefined4 FUN_0000e9a4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  ushort local_14;
  
  iVar1 = FUN_00007228(param_2,param_3,param_1 + 0x1c);
  if (iVar1 != 0) {
    FUN_00007f92(*(undefined4 *)(param_1 + 0x1c),&local_28);
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
    FUN_00007fe6(*(undefined4 *)(param_1 + 0x1c));
  }
  return 0;
}



/* Function: FUN_0000ea16 */

int FUN_0000ea16(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = FUN_00007988(*(undefined4 *)(param_1 + 0x1c),param_2,param_3 + 1,param_4,param_5,param_6,
                       param_7,param_8,1);
  if ((iVar1 != 0) && (iVar1 != 3)) {
    iVar1 = 2;
  }
  return iVar1;
}



/* Function: FUN_0000ea40 */

int FUN_0000ea40(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_00007d5c(*(undefined4 *)(param_1 + 0x1c),param_2,param_3 + 1,param_4,param_5,param_6,
                       param_7,5);
  if ((iVar1 != 0) && (iVar1 != 3)) {
    iVar1 = 2;
  }
  return iVar1;
}



/* Function: FUN_0000eb12 */

int FUN_0000eb12(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint local_18 [2];
  
  local_18[0] = *(int *)(*(int *)(param_1 + 0x828) + param_2 * 4) + 1U & 0x1ffff;
  *(uint *)(*(int *)(param_1 + 0x828) + param_2 * 4) = local_18[0];
  FUN_0000f606(param_1,*(int *)(param_1 + 0x840) + 4,local_18,*(undefined4 *)(param_1 + 0x10));
  iVar2 = 0;
  iVar1 = FUN_00007f10(*(undefined4 *)(param_1 + 0x1c),param_2,4);
  if (((iVar1 != 0) ||
      (iVar1 = FUN_00007d5c(*(undefined4 *)(param_1 + 0x1c),param_2,0,0,
                            *(undefined4 *)(param_1 + 0x10),0,*(int *)(param_1 + 0x840) + 4,5),
      iVar1 != 0)) && (iVar2 = iVar1, iVar2 != 3)) {
    iVar2 = 2;
  }
  return iVar2;
}



/* Function: FUN_0000eba0 */

undefined4 FUN_0000eba0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (param_1 != 0) {
    for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
      if ((*(byte *)(param_1 + param_2 + uVar1) & 0xf) >> 2 == 2) {
        return 1;
      }
    }
  }
  return 0;
}



/* Function: FUN_0000ebc4 */

undefined4 FUN_0000ebc4(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = param_2;
  while( true ) {
    if (param_3 <= uVar2) {
      return 1;
    }
    bVar1 = *(byte *)(param_1 + param_2 + uVar2);
    if (((~(bVar1 >> 2) & 3) != 0) || ((~bVar1 & 3) != 0)) break;
    uVar2 = uVar2 + 1;
  }
  return 0;
}



/* Function: FUN_0000ecaa */

void FUN_0000ecaa(int param_1,int param_2,uint param_3,uint param_4)

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



/* Function: FUN_0000edbe */

void FUN_0000edbe(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r7;
  
  iVar1 = DAT_0000f014;
  uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x810) + param_2 * 2);
  if (DAT_0000f014 == uVar2 * 0x80000) {
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



/* Function: FUN_0000ee8c */

uint FUN_0000ee8c(int param_1,int param_2,uint param_3)

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



/* Function: FUN_0000eec4 */

int FUN_0000eec4(int param_1,int param_2)

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



/* Function: FUN_0000eef6 */

uint FUN_0000eef6(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == 0x1fff) {
    uVar2 = 0x1fff;
  }
  else {
    uVar2 = *(ushort *)(*(int *)(param_1 + 0x810) + param_2 * 2) & 0x1fff;
    if (uVar2 != 0x1fff) {
      uVar1 = *(ushort *)(*(int *)(param_1 + 0x818) + uVar2 * 2);
      while (uVar3 = uVar1 & 0x1fff, uVar3 != 0x1fff) {
        if ((*(uint *)(*(int *)(param_1 + 0x828) + uVar3 * 4) & 0x1ffff) <
            (*(uint *)(*(int *)(param_1 + 0x828) + uVar2 * 4) & 0x1ffff)) {
          uVar2 = uVar3;
        }
        uVar1 = *(ushort *)(*(int *)(param_1 + 0x818) + uVar3 * 2);
      }
      return uVar2;
    }
  }
  return uVar2;
}



/* Function: FUN_0000ef98 */

void FUN_0000ef98(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_1 + 0x828);
  if (DAT_0000f018 == *(int *)(iVar3 + param_2 * 4) * 0x8000) {
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



/* Function: FUN_0000f022 */

int FUN_0000f022(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x818) + iVar2 * 2);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    *(uint *)(param_1 + 0x30) = uVar1 & 0x1fff;
    *(undefined2 *)(*(int *)(param_1 + 0x818) + iVar2 * 2) = 0x1fff;
    return iVar2;
  }
  return 0x1fff;
}



/* Function: FUN_0000f04c */

void FUN_0000f04c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_1 + 0x828);
  if (DAT_0000f174 == *(int *)(iVar3 + param_2 * 4) * 0x8000) {
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
    while ((uVar2 = uVar1, (*(uint *)(iVar3 + uVar2 * 4) & 0x1ffff) < uVar5 && (uVar2 != 0x1fff))) {
      uVar4 = uVar2;
      uVar1 = *(ushort *)(*(int *)(param_1 + 0x818) + uVar2 * 2) & 0x1fff;
    }
    *(ushort *)(*(int *)(param_1 + 0x818) + uVar4 * 2) = (ushort)((uint)(param_2 << 0x13) >> 0x13);
  }
  else {
    *(int *)(param_1 + 0x28) = param_2;
  }
  *(ushort *)(*(int *)(param_1 + 0x818) + param_2 * 2) = (ushort)((uVar2 << 0x13) >> 0x13);
  return;
}



/* Function: FUN_0000f0cc */

uint FUN_0000f0cc(int param_1)

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
      if (DAT_0000f178 != (uint)*(ushort *)(*(int *)(param_1 + 0x818) + uVar2 * 2) * 0x80000) {
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
        if (DAT_0000f178 == uVar4 * 0x80000) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar4 = uVar4 & 0x1fff;
        in_r12 = uVar2;
      }
      if (DAT_0000f178 != (uint)*(ushort *)(iVar5 + uVar2 * 2) * 0x80000) {
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



/* Function: FUN_0000f156 */

undefined4 FUN_0000f156(int param_1)

{
  if ((uint)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x2c)) < 4) {
    return 1;
  }
  return 0;
}



/* Function: FUN_0000f168 */

bool FUN_0000f168(int param_1)

{
  return *(int *)(param_1 + 0x2c) != 0;
}



/* Function: FUN_0000f17c */

void FUN_0000f17c(int param_1,int param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar7 = 0;
  do {
    if (param_4 <= uVar7) {
      return;
    }
    uVar6 = 0;
    uVar9 = 0;
    uVar3 = 0;
    uVar4 = 0;
    iVar2 = uVar7 * *(int *)(param_1 + 0xc);
    do {
      if (7 - uVar4 < 8) {
        uVar9 = -uVar4 + 7;
        if (uVar9 < 9) {
          uVar6 = ((uint)*(byte *)(param_2 + iVar2) & ~(0xff << (uVar9 & 0xff))) << (uVar4 & 0xff) &
                  0xff | uVar6;
          if (uVar9 == 8) {
            uVar9 = 0;
            iVar2 = iVar2 + 1;
          }
        }
        else {
          pbVar1 = (byte *)(param_2 + iVar2);
          uVar9 = -uVar4 - 1;
          iVar2 = iVar2 + 1;
          uVar6 = (((uint)*(byte *)(param_2 + iVar2) & ~(0xff << (uVar9 & 0xff))) << 8 |
                  (uint)*pbVar1) << (uVar4 & 0xff) & 0xff | uVar6;
        }
        break;
      }
      pbVar1 = (byte *)(param_2 + iVar2);
      iVar2 = iVar2 + 1;
      uVar8 = uVar4 & 0xff;
      uVar4 = uVar4 + 8;
      uVar6 = (uint)*pbVar1 << uVar8 & 0xff | uVar6;
    } while (uVar4 < 7);
    uVar5 = (undefined1)uVar6;
    uVar8 = 8 - uVar9;
    uVar4 = 0;
    uVar10 = 0xff << (uVar8 & 0xff);
    do {
      if (0x18 - uVar4 < 8) {
        uVar11 = 0x18 - uVar4;
        if (uVar8 < uVar11) {
          uVar9 = ((uint)*(byte *)(param_2 + iVar2 + 1) & ~(0xff << (uVar11 - uVar8 & 0xff))) <<
                  (uVar8 & 0xff) & 0xff |
                  (uint)(*(byte *)(param_2 + iVar2) >> (uVar9 & 0xff)) & ~uVar10;
        }
        else {
          uVar9 = (uint)(*(byte *)(param_2 + iVar2) >> (uVar9 & 0xff)) & ~(0xff << (uVar11 & 0xff));
        }
        uVar3 = uVar3 | uVar9 << (uVar4 & 0xff);
        break;
      }
      pbVar1 = (byte *)(param_2 + iVar2);
      iVar2 = iVar2 + 1;
      uVar11 = uVar4 & 0xff;
      uVar4 = uVar4 + 8;
      uVar3 = (((uint)*(byte *)(param_2 + iVar2) & ~(0xff << (uVar9 & 0xff))) << (uVar8 & 0xff) &
               0xff | (uint)(*pbVar1 >> (uVar9 & 0xff)) & ~uVar10) << uVar11 | uVar3;
    } while (uVar4 < 0x18);
    if ((((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x20)) <= (uVar3 & 0xffffff) >> 0xb)
        || (uVar4 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14),
           uVar4 < (uVar3 & 0x7ff) || uVar4 - (uVar3 & 0x7ff) == 0)) || (0x7e < uVar6)) {
      uVar5 = 0x7f;
      uVar3 = 0xffffff;
    }
    *(uint *)(param_3 + uVar7 * 8) = uVar3;
    iVar2 = uVar7 * 8;
    uVar7 = uVar7 + 1;
    *(undefined1 *)(param_3 + iVar2 + 4) = uVar5;
  } while( true );
}



/* Function: FUN_0000f316 */

undefined8 FUN_0000f316(int param_1,int param_2,int param_3,uint param_4)

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
  
  FUN_00011754(param_2,param_4 * *(int *)(param_1 + 0xc),0xff);
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



/* Function: FUN_0000f51e */

void FUN_0000f51e(int param_1,int param_2,uint *param_3)

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
  FUN_00011764(local_50,0x20);
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
      *local_28 = DAT_0000f72c + 1;
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
    if (DAT_0000f72c < uVar2) {
      uVar2 = DAT_0000f72c + 1;
    }
    local_50[uVar5] = uVar2;
    uVar5 = uVar5 + 1;
  } while( true );
}



/* Function: FUN_0000f606 */

undefined8 FUN_0000f606(int param_1,int param_2,uint *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_00011754(param_2,*(int *)(param_1 + 0xc) * param_4,0xff);
  uVar6 = 0;
  do {
    if (param_4 <= uVar6) {
      return CONCAT44(param_2,param_1);
    }
    uVar5 = *param_3;
    if ((DAT_0000f72c < uVar5) || (uVar5 == DAT_0000f72c + 1)) {
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



/* Function: FUN_0000f730 */

void FUN_0000f730(void)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar2 = DAT_0000f81c;
  piVar1 = DAT_0000f818;
  iVar5 = 0;
  if (*DAT_0000f818 == 0) {
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



/* Function: FUN_0000f7f4 */

void FUN_0000f7f4(int param_1)

{
  FUN_0000f730();
  if (((*(int *)(param_1 + -0xc) == DAT_0000f81c) && (*(int *)(param_1 + -4) == DAT_0000f81c)) &&
     (*(int *)(param_1 + -8) != 0)) {
    *(undefined4 *)(param_1 + -8) = 0;
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_0000f820 */

undefined4 FUN_0000f820(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

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
  uVar1 = FUN_00010cd8(local_20,param_3);
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
    *(undefined1 *)(param_1 + uVar2) = *(undefined1 *)((int)local_20 + uVar2);
  }
  return uVar1;
}



/* Function: FUN_0000fb5e */

void FUN_0000fb5e(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_0000fd18;
  iVar6 = 0;
  uVar3 = 0;
LAB_0000fc2a:
  do {
    while( true ) {
      iVar5 = *(int *)(iVar2 + 4);
      if (*(ushort *)(iVar5 + 0x16) <= uVar3) {
        return;
      }
      if (*(byte *)(iVar5 + 0x1f) != uVar3) break;
      if (param_5 == 0) {
        uVar4 = *(uint *)(iVar2 + 0x14);
LAB_0000fc16:
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
        goto LAB_0000fc16;
      }
      for (uVar4 = 0; uVar4 < *(uint *)(iVar2 + 0x18); uVar4 = uVar4 + 1) {
        puVar1 = (undefined1 *)(param_1 + uVar3);
        uVar3 = uVar3 + 1;
        *(undefined1 *)(param_3 + uVar4) = *puVar1;
      }
      goto LAB_0000fc2a;
    }
    if ((int)*(char *)(iVar5 + 0x26) == uVar3) {
      if (param_4 == 0) {
        uVar4 = *(uint *)(iVar2 + 0x1c);
        goto LAB_0000fc16;
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
        goto LAB_0000fc16;
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



/* Function: FUN_0000fc3c */

undefined4
FUN_0000fc3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
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
  else if (param_8 == 0) goto LAB_0000fc74;
  for (uVar3 = 0; uVar3 < param_5; uVar3 = uVar3 + 1) {
    *(undefined1 *)(param_8 + param_4 + uVar3) = 0;
  }
LAB_0000fc74:
  if (param_6 == (undefined4 *)0x0 && param_7 == 0) {
    return 0;
  }
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  FUN_0000ff6e(DAT_0000fd18,param_3,param_4,&local_40,&uStack_3c);
  puVar2 = DAT_0000fd18;
  if (param_9 == 1) {
    if (param_6 == (undefined4 *)0x0) {
      param_6 = DAT_0000fd18 + 0x10;
    }
    iVar5 = FUN_000022b0(*DAT_0000fd18,local_30,local_40,uStack_3c,param_5,param_6,auStack_144,
                         local_38,1);
    if (iVar5 != 0) {
      return 3;
    }
    for (uVar3 = 0; uVar3 < param_5; uVar3 = uVar3 + 1) {
      iVar5 = puVar2[1];
      if (*(char *)(iVar5 + 0x21) == -1) {
        if (param_7 == 0) {
          FUN_0000fb5e(auStack_144 + uVar3 * *(ushort *)(iVar5 + 0x16),
                       auStack_c4 + uVar3 * puVar2[8],0,auStack_44,0);
          iVar5 = puVar2[8];
          puVar4 = auStack_c4 + uVar3 * iVar5;
        }
        else {
          FUN_0000fb5e(auStack_144 + uVar3 * *(ushort *)(iVar5 + 0x16),uVar3 * puVar2[8] + param_7,0
                       ,auStack_44,0);
          iVar5 = puVar2[8];
          puVar4 = (undefined1 *)(uVar3 * iVar5 + param_7);
        }
        iVar5 = FUN_0000f820(puVar4,iVar5,auStack_44);
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
    iVar5 = FUN_000022b0(*DAT_0000fd18,local_30,local_40,uStack_3c,param_5,param_6,puVar4,0,0);
    if (iVar5 != 0) {
      return 3;
    }
    if (param_7 != 0) {
      for (uVar3 = 0; uVar3 < param_5; uVar3 = uVar3 + 1) {
        FUN_0000fb5e(auStack_144 + uVar3 * *(ushort *)(puVar2[1] + 0x16),uVar3 * puVar2[8] + param_7
                     ,0,0,0);
      }
    }
  }
  return 0;
}



/* Function: FUN_0000ff6e */

void FUN_0000ff6e(int param_1,uint param_2,int param_3,uint *param_4,int *param_5)

{
  *param_4 = param_2 >> *(sbyte *)(param_1 + 0x10);
  *param_5 = (param_3 + param_2) -
             ((param_2 >> *(sbyte *)(param_1 + 0x10)) << *(sbyte *)(param_1 + 0x10));
  return;
}



/* Function: FUN_0000ff94 */

void FUN_0000ff94(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = 0;
  while (bVar4 = param_2 != 0, param_2 = param_2 + -1, bVar4) {
    uVar2 = 0x80;
    do {
      iVar3 = uVar1 << 0x10;
      uVar1 = (uVar1 & 0x7fff) << 1;
      if (iVar3 < 0) {
        uVar1 = uVar1 ^ 0x1021;
      }
      if ((*param_1 & uVar2) != 0) {
        uVar1 = uVar1 ^ 0x1021;
      }
      uVar2 = uVar2 >> 1;
    } while (uVar2 != 0);
    param_1 = param_1 + 1;
  }
  return;
}



/* Function: FUN_0000ffc4 */

uint FUN_0000ffc4(ushort *param_1,uint param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  for (; 3 < (int)param_2; param_2 = param_2 - 4) {
    uVar2 = *param_1;
    puVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    uVar4 = uVar4 + uVar2 + (uint)*puVar1;
  }
  param_2 = param_2 & 3;
  if (param_2 == 1) {
    uVar3 = (uint)(byte)*param_1;
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 3) {
        uVar4 = (uint)(byte)param_1[1] + *param_1 + uVar4;
      }
      goto LAB_0000fffc;
    }
    uVar3 = (uint)*param_1;
  }
  uVar4 = uVar4 + uVar3;
LAB_0000fffc:
  uVar4 = (uVar4 >> 0x10) + (uVar4 & 0xffff);
  return ~(uVar4 + (uVar4 >> 0x10)) & 0xffff;
}



/* Function: FUN_00010074 */

undefined4 FUN_00010074(void)

{
  int iVar1;
  
  iVar1 = FUN_000100a0();
  if (iVar1 != 0x5a) {
    if (iVar1 == 0x6a) {
      return DAT_00010098;
    }
    if (iVar1 == 0x7a) {
      return DAT_0001009c;
    }
  }
  return DAT_00010094;
}



/* Function: FUN_000100a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000100a0(void)

{
  return (ram0x00006008 & 0xffff) >> 8;
}



/* Function: FUN_000103a4 */

void FUN_000103a4(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  for (iVar2 = 0; param_2 = param_2 + -1, iVar2 < param_2; iVar2 = iVar2 + 1) {
    uVar1 = *(undefined1 *)(param_1 + iVar2);
    *(undefined1 *)(param_1 + iVar2) = *(undefined1 *)(param_1 + param_2);
    *(undefined1 *)(param_1 + param_2) = uVar1;
  }
  return;
}



/* Function: FUN_000103d0 */

bool FUN_000103d0(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = param_4 <= param_2 + -0xb;
  if (bVar1) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1 = param_1 + 2;
    iVar2 = (param_2 - param_4) + -3;
    FUN_00011754(param_1,iVar2,0xff);
    param_1[iVar2] = 0;
    FUN_0001161c(param_1 + iVar2 + 1,param_3,param_4);
  }
  return bVar1;
}



/* Function: FUN_00010410 */

int FUN_00010410(undefined4 param_1,int param_2,char *param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = -1;
  if ((param_5 == param_4 + 1) && (*param_3 == '\x01')) {
    param_4 = param_4 + -1;
    for (iVar1 = 0; pcVar2 = param_3 + 1, iVar1 < param_4; iVar1 = iVar1 + 1) {
      if (*pcVar2 != -1) {
        if (*pcVar2 != '\0') {
          return -1;
        }
        pcVar2 = param_3 + 2;
        break;
      }
      param_3 = pcVar2;
    }
    if (((iVar1 != param_4) && (7 < iVar1)) && (param_4 = param_4 - (iVar1 + 1), param_4 <= param_2)
       ) {
      FUN_0001161c(param_1,pcVar2,param_4);
      iVar3 = param_4;
    }
  }
  return iVar3;
}



/* Function: FUN_00010754 */

void FUN_00010754(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_00010b54;
  *(undefined1 *)(DAT_00010b54 + 0xe) = 5;
  *(undefined2 *)(iVar1 + 6) = 0x21;
  *(undefined2 *)(iVar1 + 8) = 0x40;
  *(undefined1 *)(iVar1 + 0x62) = 0x17;
  *(undefined2 *)(iVar1 + 100) = 0x108;
  bVar2 = *(int *)(DAT_00010b58 + 8) == 0;
  if (bVar2) {
    *(undefined2 *)(iVar1 + 0x150) = 0x200;
  }
  else {
    *(undefined2 *)(iVar1 + 0x150) = 0x40;
  }
  *(undefined1 *)(iVar1 + 0x152) = 0x48;
  *(undefined1 *)(iVar1 + 0x153) = 0x20;
  *(byte *)(iVar1 + 0x153) = *(byte *)(iVar1 + 0x153) | 0x94;
  *(undefined1 *)(iVar1 + 0xe) = 6;
  *(undefined1 *)(iVar1 + 99) = 0x17;
  *(undefined2 *)(iVar1 + 0x66) = 8;
  if (bVar2) {
    *(undefined2 *)(iVar1 + 0x164) = 0x200;
  }
  else {
    *(undefined2 *)(iVar1 + 0x164) = 0x40;
  }
  *(undefined1 *)(iVar1 + 0x166) = 0x90;
  *(byte *)(iVar1 + 0x167) = *(byte *)(iVar1 + 0x167) | 0xa8;
  return;
}



/* Function: FUN_000108ba */

/* WARNING: Removing unreachable block (ram,0x00010862) */

void FUN_000108ba(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar7;
  uint uVar8;
  
  iVar2 = DAT_00010b58;
  puVar1 = DAT_00010b54;
  if ((DAT_00010b54[0x12] & 1) != 0) {
    uVar7 = 0;
    iVar5 = DAT_00010b58 + 0x18;
    do {
      *(undefined1 *)(iVar5 + uVar7) = puVar1[0x20];
      uVar7 = uVar7 + 1;
    } while (uVar7 < 8);
    puVar4 = (uint *)(DAT_00010b58 + 0x18);
    uVar7 = (*puVar4 & 0x7f) >> 5;
    if (uVar7 == 0) {
      uVar7 = (*puVar4 & 0xffff) >> 8;
      if (uVar7 == 0) {
        puVar1[0x12] = puVar1[0x12] | 0x40;
        iVar5 = DAT_00010b58;
        uVar7 = *(uint *)(iVar2 + 0x1c);
        uVar6 = *(uint *)(iVar2 + 0x1c);
        for (uVar8 = 0; uVar8 < ((uVar7 & 0xffffff) >> 0x10 | (uVar6 >> 0x18) << 8);
            uVar8 = uVar8 + 1) {
          puVar1[0x20] = *(undefined1 *)(iVar5 + uVar8);
        }
        puVar1[0x12] = puVar1[0x12] | 10;
        return;
      }
      if (uVar7 == 5) {
        puVar1[0x12] = puVar1[0x12] | 0x48;
        do {
        } while ((*(ushort *)(puVar1 + 2) & 1) == 0);
        *puVar1 = (char)(*puVar4 >> 0x10);
        return;
      }
      if (uVar7 == 6) {
        FUN_00010be4();
        return;
      }
      if (uVar7 == 9) {
        puVar1[0x12] = puVar1[0x12] | 0x48;
        do {
        } while ((*(ushort *)(puVar1 + 2) & 1) == 0);
        return;
      }
    }
    else {
      if (uVar7 == 1) {
        if ((*puVar4 & 0x1f) == 1) {
          puVar1[0x12] = puVar1[0x12] | 0x48;
          do {
          } while ((*(ushort *)(puVar1 + 2) & 1) == 0);
          if ((*puVar4 & 0xff0000) != 0) {
            FUN_00010754();
            iVar2 = DAT_00010b5c;
            puVar3 = (undefined4 *)(DAT_00010b5c + 0x28);
            *puVar3 = DAT_00010b64;
            *(undefined2 *)(iVar2 + 0x2c) = 0xf000;
            *(undefined2 *)(iVar2 + 0x2e) = 0x20;
            *(undefined1 *)(iVar2 + 0x30) = 6;
            *(undefined1 *)(iVar2 + 0x31) = 1;
            *(undefined1 *)(iVar2 + 0x32) = 0;
            *(undefined1 *)(iVar2 + 0x33) = 1;
            *(undefined4 *)(iVar2 + 0x10) = 0;
            *(undefined4 *)(iVar2 + 0x14) = 0;
            *(undefined4 *)(iVar2 + 0x18) = 0;
            FUN_0001161c(iVar2 + 0x10,puVar3,4,0xf000,unaff_r4,unaff_r5);
            *(undefined1 *)(iVar2 + 0x14) = *(undefined1 *)(iVar2 + 0x2e);
            *(undefined1 *)(iVar2 + 0x15) = *(undefined1 *)(iVar2 + 0x2f);
            *(undefined1 *)(iVar2 + 0x16) = *(undefined1 *)(iVar2 + 0x2c);
            *(undefined1 *)(iVar2 + 0x17) = *(undefined1 *)(iVar2 + 0x2d);
            *(undefined1 *)(iVar2 + 0x18) = 5;
            iVar5 = DAT_00010b60;
            *(uint *)(DAT_00010b60 + 0xe88) = *(uint *)(DAT_00010b60 + 0xe88) | 0x14;
            *(int *)(iVar5 + 0xe94) = iVar2 + 0x10;
            *(uint *)(iVar5 + 0xe84) = *(uint *)(iVar5 + 0xe84) | 1;
            return;
          }
        }
        else {
          puVar1[0x12] = puVar1[0x12] | 0x48;
          do {
          } while ((*(ushort *)(puVar1 + 2) & 1) == 0);
        }
        return;
      }
      puVar1[0x12] = puVar1[0x12] | 0x48;
      do {
      } while ((*(ushort *)(puVar1 + 2) & 1) == 0);
    }
  }
  return;
}



/* Function: FUN_00010be4 */

void FUN_00010be4(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_00010c58;
  *(byte *)(DAT_00010c58 + 0x12) = *(byte *)(DAT_00010c58 + 0x12) | 0x40;
  iVar4 = DAT_00010c60;
  uVar3 = (*param_2 & 0xffffff) >> 0x10;
  if (*param_1 >> 0x18 == 1) {
    iVar4 = DAT_00010c60 + 0x20;
    if (0x11 < uVar3) {
      uVar3 = 0x12;
    }
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined1 *)(iVar1 + 0x20) = *(undefined1 *)(iVar4 + uVar2);
    }
  }
  else {
    if (*param_1 >> 0x18 != 2) {
      return;
    }
    if (*(int *)(DAT_00010c60 + 8) != 0) {
      *(undefined1 *)(DAT_00010c60 + 0x51) = 0x40;
      *(undefined1 *)(iVar4 + 0x4a) = 0x40;
      *(undefined1 *)(iVar4 + 0x52) = 0;
      *(undefined1 *)(iVar4 + 0x4b) = 0;
    }
    iVar4 = DAT_00010c60 + 0x34;
    if (0x1f < uVar3) {
      uVar3 = 0x20;
    }
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined1 *)(iVar1 + 0x20) = *(undefined1 *)(iVar4 + uVar2);
    }
  }
  *(byte *)(iVar1 + 0x12) = *(byte *)(iVar1 + 0x12) | 10;
  return;
}



/* Function: FUN_00010cd8 */

undefined4 FUN_00010cd8(byte *param_1,byte *param_2)

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
  
  puVar4 = DAT_00010e84;
  uVar8 = (uint)param_1[3] ^ (uint)*param_1 << 0x18 ^
          (uint)param_1[1] << 0x10 ^ (uint)param_1[2] << 8;
  bVar1 = *param_2;
  bVar2 = param_2[1];
  uVar6 = 0;
  do {
    puVar4[uVar6] = 0xff;
    iVar5 = DAT_00010e88;
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
    iVar13 = DAT_00010e88 + 0x7e;
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



/* Function: FUN_00010e8c */

ulonglong FUN_00010e8c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  bVar11 = param_4 == 0;
  uVar9 = param_4;
  if (bVar11) {
    uVar9 = param_3;
  }
  uVar10 = LZCOUNT(uVar9);
  uVar9 = uVar9 << uVar10 + 1;
  uVar5 = 0;
  if (!bVar11) {
    uVar10 = 0x3f - uVar10;
    bVar11 = uVar10 == 0;
    uVar5 = uVar10;
  }
  if (bVar11) {
    uVar10 = 0x1f - uVar10;
    uVar5 = uVar10;
  }
  if ((int)uVar5 < 0) {
    return 0;
  }
  if (param_2 == 0) {
    iVar4 = LZCOUNT(param_1);
    bVar11 = true;
  }
  else {
    iVar4 = 0x3f - LZCOUNT(param_2);
    bVar11 = iVar4 == 0;
  }
  if (bVar11) {
    iVar4 = 0x1f - iVar4;
  }
  uVar5 = iVar4 - uVar10;
  if ((int)uVar5 < 0) {
    return 0;
  }
  if (-1 < (int)(4 - uVar5)) {
    uVar6 = 0;
    uVar10 = param_3 << (uVar5 & 0xff);
    uVar9 = param_4 << (uVar5 & 0xff) | param_3 >> (0x20 - uVar5 & 0xff);
    while( true ) {
      bVar12 = uVar10 <= param_1;
      bVar11 = param_2 - uVar9 < (uint)bVar12;
      uVar6 = uVar6 * 2 + (uint)(uVar9 < param_2 || bVar11);
      if (uVar9 < param_2 || bVar11) {
        param_1 = param_1 - uVar10;
        param_2 = param_2 - (uVar9 + !bVar12);
      }
      bVar11 = uVar5 == 0;
      uVar5 = uVar5 - 1;
      if (bVar11) break;
      bVar2 = (byte)uVar9;
      uVar9 = uVar9 >> 1;
      uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
    }
    return (ulonglong)uVar6;
  }
  if ((int)(uVar10 - 0x20) < 5) {
    uVar9 = uVar9 | param_3 >> (uVar10 - 0x20 & 0xff);
  }
  uVar5 = *(uint *)(&DAT_0001117c + (uVar9 >> 0x1c) * 4);
  uVar9 = uVar10;
  if (0x1f < uVar10) {
    uVar9 = uVar10 - 0x20;
  }
  uVar6 = 0x20 - uVar9;
  if (uVar10 < 0x20) {
    uVar3 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
    uVar10 = -((int)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20) << (uVar6 & 0xff) |
              uVar3 >> (uVar9 & 0xff));
    if (uVar3 << (uVar6 & 0xff) != 0) {
      uVar10 = uVar10 - 1;
    }
    uVar5 = uVar5 + (int)((ulonglong)uVar10 * (ulonglong)uVar5 >> 0x20);
    uVar3 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
    uVar10 = -((int)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20) << (uVar6 & 0xff) |
              uVar3 >> (uVar9 & 0xff));
    if (uVar3 << (uVar6 & 0xff) != 0) {
      uVar10 = uVar10 - 1;
    }
    uVar5 = uVar5 + (int)((ulonglong)uVar10 * (ulonglong)uVar5 >> 0x20);
    if (param_2 != 0) {
      uVar3 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
      uVar10 = -((int)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20) << (uVar6 & 0xff) |
                uVar3 >> (uVar9 & 0xff));
      if (uVar3 << (uVar6 & 0xff) != 0) {
        uVar10 = uVar10 - 1;
      }
      uVar5 = uVar5 + (int)((ulonglong)uVar10 * (ulonglong)uVar5 >> 0x20);
    }
    lVar1 = (ulonglong)param_2 * (ulonglong)uVar5 + ((ulonglong)param_1 * (ulonglong)uVar5 >> 0x20);
    uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar3 = (uint)lVar1 >> (uVar9 & 0xff) | uVar10 << (uVar6 & 0xff);
    uVar10 = uVar10 >> (uVar9 & 0xff);
    uVar7 = (uint)((ulonglong)param_3 * (ulonglong)uVar3);
    uVar6 = param_1 - uVar7;
    param_2 = param_2 - (uVar10 * param_3 + (int)((ulonglong)param_3 * (ulonglong)uVar3 >> 0x20) +
                        (uint)(param_1 < uVar7));
    if (param_2 == 0 && uVar6 < param_3) {
      return CONCAT44(uVar10,uVar3);
    }
    lVar1 = (ulonglong)param_2 * (ulonglong)uVar5 + ((ulonglong)uVar6 * (ulonglong)uVar5 >> 0x20);
    uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar8 = (uint)lVar1 >> (uVar9 & 0xff) | uVar7 << (0x20 - uVar9 & 0xff);
    uVar5 = uVar3 + uVar8;
    iVar4 = uVar10 + (uVar7 >> (uVar9 & 0xff)) + (uint)CARRY4(uVar3,uVar8);
    uVar6 = uVar6 - param_3 * uVar8;
    if (uVar6 < param_3) {
      return CONCAT44(iVar4,uVar5);
    }
    uVar6 = uVar6 - param_3;
    bVar11 = param_3 <= uVar6;
    if (bVar11) {
      uVar6 = uVar6 - param_3;
    }
    uVar9 = uVar5 + 1 + (uint)bVar11;
    return CONCAT44(iVar4 + (uint)(0xfffffffe < uVar5) + (uint)CARRY4(uVar5 + 1,(uint)bVar11) +
                    (uint)CARRY4(uVar9,(uint)(param_3 <= uVar6)),uVar9 + (param_3 <= uVar6));
  }
  lVar1 = (ulonglong)param_4 * (ulonglong)uVar5 + ((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20);
  uVar3 = (uint)lVar1;
  uVar10 = -((int)((ulonglong)lVar1 >> 0x20) << (uVar6 & 0xff) | uVar3 >> (uVar9 & 0xff));
  if (uVar3 << (0x20 - uVar9 & 0xff) != 0) {
    uVar10 = uVar10 - 1;
  }
  uVar5 = uVar5 + (int)((ulonglong)uVar10 * (ulonglong)uVar5 >> 0x20);
  lVar1 = (ulonglong)param_4 * (ulonglong)uVar5 + ((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20);
  uVar6 = (uint)lVar1;
  uVar10 = -((int)((ulonglong)lVar1 >> 0x20) << (0x20 - uVar9 & 0xff) | uVar6 >> (uVar9 & 0xff));
  if (uVar6 << (0x20 - uVar9 & 0xff) != 0) {
    uVar10 = uVar10 - 1;
  }
  uVar3 = (uVar5 + (int)((ulonglong)uVar10 * (ulonglong)uVar5 >> 0x20)) - 1;
  uVar5 = (uint)((ulonglong)param_2 * (ulonglong)uVar3 +
                 ((ulonglong)param_1 * (ulonglong)uVar3 >> 0x20) >> 0x20) >> (uVar9 & 0xff);
  uVar6 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
  uVar10 = param_1 - uVar6;
  param_2 = param_2 - (uVar5 * param_4 + (int)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20) +
                      (uint)(param_1 < uVar6));
  bVar11 = param_4 <= param_2;
  if (param_2 == param_4) {
    bVar11 = param_3 <= uVar10;
  }
  if (!bVar11) {
    return (ulonglong)uVar5;
  }
  uVar9 = (uint)((ulonglong)param_2 * (ulonglong)uVar3 +
                 ((ulonglong)uVar10 * (ulonglong)uVar3 >> 0x20) >> 0x20) >> (uVar9 & 0xff);
  uVar6 = (uint)((ulonglong)param_3 * (ulonglong)uVar9);
  param_2 = param_2 - (uVar9 * param_4 + (int)((ulonglong)param_3 * (ulonglong)uVar9 >> 0x20) +
                      (uint)(uVar10 < uVar6));
  bVar11 = param_4 <= param_2;
  if (param_2 == param_4) {
    bVar11 = param_3 <= uVar10 - uVar6;
  }
  if (!bVar11) {
    return (ulonglong)(uVar5 + uVar9);
  }
  return (ulonglong)(uVar5 + uVar9 + 1);
}



/* Function: FUN_000111bc */

undefined4 FUN_000111bc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_18;
  int local_14;
  
  local_14 = param_1;
  if (param_2 != 0) {
    local_14 = param_1 + param_2 + -1;
  }
  local_18 = param_1;
  uVar1 = FUN_000118e6(param_3,&local_18,param_4,DAT_000111ec + 0x111d2);
  if (param_2 != 0) {
    FUN_0001190c(0,&local_18);
  }
  return uVar1;
}



/* Function: FUN_0001121c */

void FUN_0001121c(uint *param_1)

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



/* Function: FUN_00011248 */

void FUN_00011248(byte *param_1)

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



/* Function: FUN_0001126a */

void FUN_0001126a(byte *param_1,undefined1 *param_2,uint param_3)

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
  FUN_0001121c(param_1);
  for (; param_2 < puVar2; param_2 = param_2 + 1) {
    (**(code **)(param_1 + 4))(*param_2,*(undefined4 *)(param_1 + 8));
  }
  FUN_00011248(param_1);
  return;
}



/* Function: FUN_000113c0 */

uint FUN_000113c0(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  iVar1 = DAT_00011544;
  param_1[8] = 0;
  while (uVar2 = (*(code *)param_1[3])(param_1), uVar2 != 0) {
    if (uVar2 == 0x25) {
      uVar5 = 0;
      while (((uVar2 = (*(code *)param_1[3])(param_1), 0x1f < (int)uVar2 && (uVar2 < 0x31)) &&
             (uVar3 = (uint)*(byte *)(iVar1 + uVar2 + 0x113b4), uVar3 != 0))) {
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
          iVar4 = FUN_00011e20(uVar2);
          if (iVar4 != 0) {
            param_1[iVar6 + 6] = uVar2 - 0x30;
            while( true ) {
              uVar2 = (*(code *)param_1[3])(param_1);
              iVar4 = FUN_00011e20();
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
          if (uVar2 == 0x6c) goto LAB_0001152c;
          uVar2 = 0x400;
          goto LAB_000114e2;
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
LAB_0001152c:
            uVar2 = 0x80;
            goto LAB_000114e2;
          }
          if ((uVar2 != 0x74) && (uVar2 != 0x7a)) goto LAB_000114f8;
        }
        uVar2 = 0;
LAB_000114e2:
        uVar5 = uVar5 | uVar2;
        uVar2 = (*(code *)param_1[3])(param_1);
      }
LAB_000114f8:
      if (uVar2 == 0) break;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 + 0x20;
        uVar5 = uVar5 | 0x800;
      }
      *param_1 = uVar5;
      iVar6 = FUN_00000114(param_1,uVar2,param_2);
      if (iVar6 == 0) goto LAB_000113e4;
      if (iVar6 == 1) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = (uint *)(((int)param_2 + 7U & 0xfffffff8) + 8);
      }
    }
    else {
LAB_000113e4:
      (*(code *)param_1[1])(uVar2,param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
  }
  return param_1[8];
}



/* Function: FUN_00011572 */

void FUN_00011572(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_0001157c;
  iVar3 = DAT_00011578;
  uVar2 = 1;
  iVar4 = DAT_00011578 + -0x7c;
  *(int *)(DAT_00011578 + 0x60) = DAT_00011578;
  *(int *)(iVar3 + 100) = iVar4;
  iVar3 = 0x37;
  while (0 < iVar3) {
    *(uint *)(iVar4 + (iVar3 + -1) * 4) = uVar2 + (uVar2 >> 0x10);
    uVar2 = uVar2 * DAT_00011580 + iVar1;
    iVar3 = iVar3 + -1;
  }
  return;
}



/* Function: FUN_00011584 */

int FUN_00011584(uint *param_1,uint *param_2,uint param_3)

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
    if ((param_3 & 1) == 0) goto LAB_000115bc;
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
LAB_000115bc:
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



/* Function: FUN_0001161c */

undefined8 FUN_0001161c(uint *param_1,uint *param_2,uint param_3,uint param_4)

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



/* Function: FUN_000116f0 */

undefined8 FUN_000116f0(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

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



/* Function: FUN_00011754 */

undefined4 * FUN_00011754(undefined4 *param_1,uint param_2,undefined1 param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  
  uVar1 = CONCAT11(param_3,param_3);
  uVar6 = CONCAT22(uVar1,uVar1);
  if (param_2 < 4) {
    if ((param_2 & 2) != 0) {
      puVar4 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_3;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar4 = param_3;
    }
    puVar3 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_3;
    }
    return puVar3;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar7 = 4 - ((uint)param_1 & 3);
    puVar3 = param_1;
    if (iVar7 != 2) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_3;
    }
    param_1 = puVar3;
    if (1 < iVar7) {
      param_1 = (undefined4 *)((int)puVar3 + 2);
      *(undefined2 *)puVar3 = uVar1;
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
  puVar3 = param_1;
  if ((param_2 << 0x1c & 0x40000000) != 0) {
    puVar3 = param_1 + 1;
    *param_1 = uVar6;
  }
  if (uVar5 != 0) {
    puVar2 = puVar3;
    if ((int)uVar5 < 0) {
      puVar2 = (undefined4 *)((int)puVar3 + 2);
      *(undefined2 *)puVar3 = uVar1;
    }
    puVar3 = puVar2;
    if ((uVar5 & 0x40000000) != 0) {
      puVar3 = (undefined4 *)((int)puVar2 + 1);
      *(undefined1 *)puVar2 = param_3;
    }
    return puVar3;
  }
  return puVar3;
}



/* Function: FUN_00011764 */

undefined4 * FUN_00011764(undefined4 *param_1,uint param_2)

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



/* Function: FUN_000117c8 */

void FUN_000117c8(undefined4 param_1,undefined1 *param_2)

{
  *param_2 = (char)param_1;
  param_2[1] = (char)((uint)param_1 >> 8);
  param_2[2] = (char)((uint)param_1 >> 0x10);
  param_2[3] = (char)((uint)param_1 >> 0x18);
  return;
}



/* Function: FUN_000117de */

int FUN_000117de(int param_1,int *param_2)

{
  if (*param_2 << 0x15 < 0) {
    param_1 = (int)(char)param_1;
  }
  else if (*param_2 << 0x17 < 0) {
    return (int)(short)param_1;
  }
  return param_1;
}



/* Function: FUN_000117f0 */

uint FUN_000117f0(uint param_1,int *param_2)

{
  if (*param_2 << 0x15 < 0) {
    param_1 = param_1 & 0xff;
  }
  else if (*param_2 << 0x17 < 0) {
    return param_1 & 0xffff;
  }
  return param_1;
}



/* Function: FUN_000118e6 */

void FUN_000118e6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  local_2c = 0;
  local_34 = DAT_00011908 + 0x118f8;
  local_3c = param_4;
  uStack_38 = param_2;
  uStack_30 = param_1;
  FUN_000113c0(auStack_40,param_3);
  return;
}



/* Function: FUN_0001190c */

void FUN_0001190c(undefined1 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = param_1;
  *param_2 = puVar1 + 1;
  return;
}



/* Function: FUN_00011954 */

undefined8 FUN_00011954(byte *param_1,int param_2,int param_3,undefined4 param_4)

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
  
  iVar2 = DAT_00011a0c;
  puVar7 = (undefined4 *)(DAT_00011a0c + 0x11966);
  iVar6 = 0;
  local_38 = *puVar7;
  uStack_34 = *(undefined4 *)(DAT_00011a0c + 0x1196a);
  iVar5 = 0;
  local_30 = param_3;
  uStack_2c = param_4;
  do {
    if ((((int)((uint)*param_1 << 0x1a) < 0) && (*(int *)(param_1 + 0x1c) <= iVar6)) ||
       ((param_3 <= iVar5 && (*(short *)(param_2 + iVar5 * 2) == 0)))) goto LAB_000119ac;
    iVar1 = FUN_00011c30(&local_30,*(undefined2 *)(param_2 + iVar5 * 2),&local_38);
    if (iVar1 != -1) {
      if (((int)((uint)*param_1 << 0x1a) < 0) && (*(uint *)(param_1 + 0x1c) < (uint)(iVar6 + iVar1))
         ) {
LAB_000119ac:
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar6;
        FUN_0001121c(param_1);
        local_38 = *puVar7;
        uStack_34 = *(undefined4 *)(iVar2 + 0x1196a);
        for (iVar2 = 0; iVar2 < iVar5; iVar2 = iVar2 + 1) {
          uVar3 = FUN_00011c30(&local_30,*(undefined2 *)(param_2 + iVar2 * 2),&local_38);
          if (uVar3 != 0xffffffff) {
            for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
              (**(code **)(param_1 + 4))
                        (*(undefined1 *)((int)&local_30 + uVar4),*(undefined4 *)(param_1 + 8));
            }
          }
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar6;
        FUN_00011248(param_1);
        return CONCAT44(uStack_34,local_38);
      }
      iVar6 = iVar6 + iVar1;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



/* Function: FUN_00011b40 */

undefined8 FUN_00011b40(uint param_1)

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



/* Function: FUN_00011b6c */

undefined8 FUN_00011b6c(uint param_1,uint param_2)

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



/* Function: FUN_00011c30 */

undefined4 FUN_00011c30(undefined1 *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_00011cbc();
  iVar3 = *piVar1;
  if (*(char *)(iVar3 + 0x101) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00011c68. Too many branches */
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



/* Function: FUN_00011c70 */

void FUN_00011c70(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 unaff_lr;
  uint *puVar3;
  
  uVar1 = FUN_00011ce0();
  *(undefined4 *)((uVar1 & 0xfffffff8) + 0x5c) = unaff_lr;
  puVar3 = (uint *)((uVar1 & 0xfffffff8) + 0x58);
  *puVar3 = uVar1;
  FUN_00000044();
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



/* Function: FUN_00011cbc */

int FUN_00011cbc(void)

{
  int iVar1;
  
  iVar1 = FUN_00011ce8();
  return iVar1 + 4;
}



/* Function: FUN_00011ccc */

void FUN_00011ccc(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_000001c2();
  FUN_00011cf6(param_1,param_2);
  do {
    piVar1 = DAT_00000214;
    piVar2 = (int *)DAT_00000214[1];
    piVar4 = (int *)*DAT_00000214 + 1;
    piVar3 = piVar2 + 1;
    *piVar2 = *piVar2 + *(int *)*DAT_00000214;
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



/* Function: FUN_00011ce0 */

undefined4 FUN_00011ce0(void)

{
  return DAT_00011ce4;
}



/* Function: FUN_00011ce8 */

undefined4 FUN_00011ce8(void)

{
  return DAT_00011cec;
}



/* Function: FUN_00011cf6 */

void FUN_00011cf6(void)

{
  software_interrupt(0xab);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_00011d04 */

uint FUN_00011d04(uint *param_1,uint *param_2)

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
      if (!bVar10) goto LAB_00011dec;
      puVar5 = (uint *)((int)param_2 + 1);
      if (((uint)puVar1 & 3) != 0) {
        puVar2 = (uint *)((int)param_1 + 2);
        uVar7 = (uint)*(byte *)puVar1;
        uVar8 = (uint)*(byte *)((int)param_2 + 1);
        bVar10 = uVar7 == 1;
        if (uVar7 != 0) {
          bVar10 = uVar7 == uVar8;
        }
        if (!bVar10) goto LAB_00011dec;
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
          if (!bVar10) goto LAB_00011dec;
        }
      }
    }
    do {
      uVar7 = *puVar1;
      uVar8 = *puVar5;
      uVar9 = uVar7 - DAT_00011df4 & ~uVar7 & DAT_00011df4 << 7;
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
LAB_00011dec:
  return uVar7 - uVar8;
}



/* Function: thunk_EXT_FUN_80105e74 */

void thunk_EXT_FUN_80105e74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00011df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011dfc)();
  return;
}



/* Function: FUN_00011e20 */

undefined4 FUN_00011e20(int param_1)

{
  if (param_1 - 0x30U < 10) {
    return 1;
  }
  return 0;
}



/* Function: FUN_00011e30 */

int FUN_00011e30(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar1 = FUN_00011d04(DAT_00011e54 + 0x11e42), iVar1 != 0)) {
    return 0;
  }
  return DAT_00011e58 + 0x11e52;
}



/* Function: FUN_00011e80 */

undefined4 FUN_00011e80(undefined4 param_1)

{
  coproc_moveto_Invalidate_Entire_Instruction(0);
  return param_1;
}



/* Function: FUN_00011ea4 */

undefined4 FUN_00011ea4(undefined4 param_1)

{
  coproc_movefrom_Control();
  return param_1;
}



/* Function: FUN_00011eb0 */

undefined8 FUN_00011eb0(int param_1,uint param_2)

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



/* Function: FUN_00011ee0 */

undefined8 FUN_00011ee0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_cr0;
  
  DataMemoryBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  FUN_00012548();
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



/* Function: FUN_00011f38 */

undefined8 FUN_00011f38(undefined4 param_1,undefined4 param_2)

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



/* Function: FUN_00011f8c */

undefined8 FUN_00011f8c(undefined4 param_1,undefined4 param_2)

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



/* Function: FUN_00012070 */

undefined8 FUN_00012070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_r1;
  
  coproc_moveto_Translation_table_base_0(*DAT_0001255c);
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Domain_Access_Control(DAT_00012560);
  coproc_moveto_Invalidate_Entire_Instruction(0);
  FUN_00011f38(param_1,uVar1 & 0xfffff7ff | 0x1007,DAT_00012560,0,param_1,param_2,param_3,param_4);
  coproc_moveto_Invalidate_unified_TLB_unlocked(0);
  coproc_moveto_Control(extraout_r1);
  coproc_movefrom_Main_ID();
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_000120e0 */

undefined8 FUN_000120e0(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 in_cr2;
  undefined4 in_cr10;
  
  uVar1 = coprocessor_movefromRt(0xf,0,0,in_cr10,in_cr2);
  coprocessor_moveto(0xf,0,0,uVar1 | param_1,in_cr10,in_cr2);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00012108 */

undefined8 FUN_00012108(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 in_cr2;
  undefined4 in_cr10;
  
  uVar1 = coprocessor_movefromRt(0xf,0,1,in_cr10,in_cr2);
  coprocessor_moveto(0xf,0,1,uVar1 | param_1,in_cr10,in_cr2);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00012130 */

undefined4 FUN_00012130(undefined4 param_1)

{
  coproc_movefrom_Control();
  return param_1;
}



/* Function: FUN_00012140 */

undefined4 FUN_00012140(undefined4 param_1)

{
  coproc_movefrom_Control();
  return param_1;
}



/* Function: FUN_00012150 */

uint FUN_00012150(uint param_1)

{
  coproc_moveto_Translation_table_base_0(param_1 | 1);
  return param_1;
}



/* Function: FUN_0001217c */

undefined8 FUN_0001217c(undefined4 param_1,undefined4 param_2)

{
  coproc_movefrom_Control();
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00012190 */

undefined8 FUN_00012190(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_000124ac();
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xffffe7f8);
  coproc_movefrom_Main_ID();
  DataMemoryBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_000121e4 */

undefined4 FUN_000121e4(undefined4 param_1)

{
  coproc_moveto_Invalidate_Entire_Instruction(0);
  coproc_moveto_Invalidate_unified_TLB_unlocked(0);
  return param_1;
}



/* Function: FUN_0001220c */

undefined4 FUN_0001220c(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xffffefff);
  return param_1;
}



/* Function: FUN_00012234 */

undefined4 FUN_00012234(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xfffffffb);
  return param_1;
}



/* Function: FUN_00012248 */

undefined4 FUN_00012248(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x1000);
  return param_1;
}



/* Function: FUN_0001225c */

undefined4 FUN_0001225c(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x1000);
  return param_1;
}



/* Function: FUN_00012284 */

undefined4 FUN_00012284(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 4);
  return param_1;
}



/* Function: FUN_00012298 */

undefined8 FUN_00012298(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Domain_Access_Control();
  coproc_moveto_Domain_Access_Control(uVar1 & ~param_2 | param_1);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_000122e0 */

undefined8 FUN_000122e0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 2);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0001230c */

undefined8 FUN_0001230c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xfffffffd);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00012338 */

undefined8 FUN_00012338(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00012340 */

undefined8 FUN_00012340(uint param_1,uint param_2)

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



/* Function: FUN_00012378 */

undefined8 FUN_00012378(uint param_1,uint param_2)

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



/* Function: FUN_000123c4 */

undefined8 FUN_000123c4(uint param_1,uint param_2)

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



/* Function: FUN_00012420 */

void FUN_00012420(int param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_000123c4(param_1,param_2 + param_1);
    return;
  }
  if (param_3 == 0) {
    FUN_00012340();
    return;
  }
  FUN_00012378();
  return;
}



/* Function: FUN_00012440 */

undefined8 FUN_00012440(undefined4 param_1,undefined4 param_2)

{
  FUN_00011e80();
  FUN_00012548();
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00012464 */

undefined4 FUN_00012464(undefined4 param_1)

{
  coproc_moveto_Domain_Access_Control(0xffffffcd);
  return param_1;
}



/* Function: FUN_00012474 */

undefined4 FUN_00012474(undefined4 param_1)

{
  coproc_moveto_Domain_Access_Control(0xffffffff);
  return param_1;
}



/* Function: FUN_00012484 */

undefined4 FUN_00012484(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x2000);
  return param_1;
}



/* Function: FUN_00012498 */

undefined4 FUN_00012498(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xffffdfff);
  return param_1;
}



/* Function: FUN_000124ac */

void FUN_000124ac(void)

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



/* Function: FUN_00012548 */

undefined8 FUN_00012548(undefined4 param_1,undefined4 param_2)

{
  FUN_000124ac();
  coproc_moveto_Invalidate_Entire_Instruction(0);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00012564 */

undefined4 FUN_00012564(void)

{
  return 0x3000000;
}



/* Decompiled: 290; failed: 0 */
