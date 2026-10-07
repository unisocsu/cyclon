/* Automatically generated C decompilation by Ghidra. */

/* Function: Reset */

void Reset(void)

{
                    /* WARNING: Could not recover jumptable at 0x00000000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00000084)();
  return;
}



/* Function: UndefinedInstruction */

void UndefinedInstruction(void)

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
  FUN_00000094(0x40000000);
  FUN_000001f2();
  iVar1 = DAT_000000c0;
  puVar4 = (undefined4 *)(DAT_000000c0 + 0xc0);
  iVar3 = DAT_000000c0 + 0xbf;
  if (puVar4 == (undefined4 *)(DAT_000000c4 + 0xc0)) {
    FUN_000001f2();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xcc);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x000000be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0xc4),*(undefined4 *)(iVar1 + 200));
  return;
}



/* Function: SupervisorCall */

void SupervisorCall(void)

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
  FUN_00000094(0x40000000);
  FUN_000001f2();
  iVar1 = DAT_000000c0;
  puVar4 = (undefined4 *)(DAT_000000c0 + 0xc0);
  iVar3 = DAT_000000c0 + 0xbf;
  if (puVar4 == (undefined4 *)(DAT_000000c4 + 0xc0)) {
    FUN_000001f2();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xcc);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x000000be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0xc4),*(undefined4 *)(iVar1 + 200));
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
  FUN_00000094(0x40000000);
  FUN_000001f2();
  iVar1 = DAT_000000c0;
  puVar4 = (undefined4 *)(DAT_000000c0 + 0xc0);
  iVar3 = DAT_000000c0 + 0xbf;
  if (puVar4 == (undefined4 *)(DAT_000000c4 + 0xc0)) {
    FUN_000001f2();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xcc);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x000000be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0xc4),*(undefined4 *)(iVar1 + 200));
  return;
}



/* Function: DataAbort */

void DataAbort(void)

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
  FUN_00000094(0x40000000);
  FUN_000001f2();
  iVar1 = DAT_000000c0;
  puVar4 = (undefined4 *)(DAT_000000c0 + 0xc0);
  iVar3 = DAT_000000c0 + 0xbf;
  if (puVar4 == (undefined4 *)(DAT_000000c4 + 0xc0)) {
    FUN_000001f2();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xcc);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x000000be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0xc4),*(undefined4 *)(iVar1 + 200));
  return;
}



/* Function: NotUsed */

void NotUsed(void)

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
  FUN_00000094(0x40000000);
  FUN_000001f2();
  iVar1 = DAT_000000c0;
  puVar4 = (undefined4 *)(DAT_000000c0 + 0xc0);
  iVar3 = DAT_000000c0 + 0xbf;
  if (puVar4 == (undefined4 *)(DAT_000000c4 + 0xc0)) {
    FUN_000001f2();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xcc);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x000000be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0xc4),*(undefined4 *)(iVar1 + 200));
  return;
}



/* Function: IRQ */

void IRQ(void)

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
  FUN_00000094(0x40000000);
  FUN_000001f2();
  iVar1 = DAT_000000c0;
  puVar4 = (undefined4 *)(DAT_000000c0 + 0xc0);
  iVar3 = DAT_000000c0 + 0xbf;
  if (puVar4 == (undefined4 *)(DAT_000000c4 + 0xc0)) {
    FUN_000001f2();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xcc);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x000000be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0xc4),*(undefined4 *)(iVar1 + 200));
  return;
}



/* Function: FIQ */

void FIQ(void)

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
  FUN_00000094(0x40000000);
  FUN_000001f2();
  iVar1 = DAT_000000c0;
  puVar4 = (undefined4 *)(DAT_000000c0 + 0xc0);
  iVar3 = DAT_000000c0 + 0xbf;
  if (puVar4 == (undefined4 *)(DAT_000000c4 + 0xc0)) {
    FUN_000001f2();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xcc);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar3 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x000000be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar4,*(undefined4 *)(iVar1 + 0xc4),*(undefined4 *)(iVar1 + 200));
  return;
}



/* Function: FUN_00000054 */

void FUN_00000054(void)

{
  return;
}



/* Function: FUN_00000074 */

void FUN_00000074(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_0000eeb8();
                    /* WARNING: Could not recover jumptable at 0x00000078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: FUN_00000094 */

void FUN_00000094(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_000000c0;
  puVar3 = (undefined4 *)(DAT_000000c0 + 0xc0);
  iVar2 = DAT_000000c0 + 0xbf;
  if (puVar3 == (undefined4 *)(DAT_000000c4 + 0xc0)) {
    FUN_000001f2();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0xcc);
  if (((uint)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)(iVar2 - (int)UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x000000be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*puVar3,*(undefined4 *)(iVar1 + 0xc4),*(undefined4 *)(iVar1 + 200));
  return;
}



/* Function: FUN_00000140 */

undefined4 FUN_00000140(uint *param_1,uint param_2,uint *param_3)

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
      iVar9 = 0xe0a0;
      if (param_2 == 0x75) {
        iVar11 = FUN_0000e6ae(*param_3,param_1,param_3,uVar6);
      }
      else {
        iVar11 = FUN_0000e69c();
        if (iVar11 < 0) {
          iVar11 = -iVar11;
          iVar9 = 0xe0a4;
        }
        else if ((int)(*param_1 << 0x1e) < 0) {
          iVar9 = 0xe0a8;
        }
        else {
          if (-1 < (int)(*param_1 << 0x1d)) goto LAB_0000e07a;
          iVar9 = 0xe0ac;
        }
        iVar7 = 1;
      }
LAB_0000e07a:
      iVar2 = 0;
      while (iVar11 != 0) {
        iVar11 = FUN_0000e9bc();
        *(byte *)((int)param_1 + iVar2 + 0x24) = extraout_r1 + 0x30;
        iVar2 = iVar2 + 1;
      }
      goto LAB_0000e6c0;
    }
    if (param_2 == 0x6f) {
      uVar6 = FUN_0000e6ae(*param_3,param_1,param_3,uVar6);
      uVar8 = 0;
LAB_0000e94c:
      iVar2 = 0;
      for (; uVar6 != 0 || uVar8 != 0; uVar6 = uVar6 >> 3 | uVar1) {
        uVar1 = uVar8 << 0x1d;
        uVar8 = uVar8 >> 3;
        *(byte *)((int)param_1 + iVar2 + 0x24) = ((byte)uVar6 & 7) + 0x30;
        iVar2 = iVar2 + 1;
      }
      iVar7 = 0;
      iVar9 = 0xe9b4;
      if (((int)(*param_1 << 0x1c) < 0) && (((int)(*param_1 << 0x1a) < 0 || (iVar2 != 0)))) {
        iVar7 = 1;
        iVar9 = 0xe9b8;
        param_1[7] = param_1[7] - 1;
      }
      goto LAB_0000e6c0;
    }
    if (param_2 == 0x78) {
      uVar6 = FUN_0000e6ae(*param_3,param_1,param_3,uVar6);
      uVar8 = 0;
    }
    else {
      if (((param_2 == 0xe9) || (param_2 == 0xe4)) || (param_2 == 0xf5)) {
        piVar4 = (int *)((uint)((int)param_3 + 7) & 0xfffffff8);
        iVar7 = 0;
        iVar11 = *piVar4;
        iVar2 = piVar4[1];
        iVar9 = 0xe93c;
        if (param_2 != 0xf5) {
          if (iVar2 < 0) {
            bVar12 = iVar11 != 0;
            iVar11 = -iVar11;
            iVar2 = -(uint)bVar12 - iVar2;
            iVar9 = 0xe940;
          }
          else if ((int)(*param_1 << 0x1e) < 0) {
            iVar9 = 0xe944;
          }
          else {
            if (-1 < (int)(*param_1 << 0x1d)) goto LAB_0000e912;
            iVar9 = 0xe948;
          }
          iVar7 = 1;
        }
LAB_0000e912:
        lVar13 = CONCAT44(iVar2,iVar11);
        iVar2 = 0;
        while (lVar13 != 0) {
          lVar13 = FUN_0000e9e8();
          *(byte *)((int)param_1 + iVar2 + 0x24) = extraout_r2 + 0x30;
          iVar2 = iVar2 + 1;
        }
        goto LAB_0000e6c0;
      }
      if (param_2 == 0xef) {
        puVar3 = (uint *)((uint)((int)param_3 + 7) & 0xfffffff8);
        uVar6 = *puVar3;
        uVar8 = puVar3[1];
        goto LAB_0000e94c;
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
              FUN_0000e814(param_1,puVar3,uVar5);
            }
            return 1;
          }
          puVar3 = (uint *)*param_3;
          uVar5 = 0xffffffff;
        }
        if (param_1[5] == 0) {
          FUN_0000dfee(param_1,puVar3,uVar5);
        }
        return 1;
      }
      puVar3 = (uint *)((uint)((int)param_3 + 7) & 0xfffffff8);
      uVar6 = *puVar3;
      uVar8 = puVar3[1];
    }
  }
  if ((int)((uint)(ushort)*param_1 << 0x14) < 0) {
    iVar9 = DAT_0000e140 + 0xe0c0;
  }
  else {
    iVar9 = DAT_0000e140 + 0xe0d4;
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
LAB_0000e6c0:
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
    FUN_0000dfa0(param_1);
  }
  for (iVar10 = 0; iVar10 < iVar7; iVar10 = iVar10 + 1) {
    (*(code *)param_1[1])(*(undefined1 *)(iVar9 + iVar10),param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)((uint)(byte)*param_1 << 0x1b) < 0) {
    FUN_0000dfa0(param_1);
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
  FUN_0000dfcc(param_1);
  if ((int)((uint)(byte)*param_1 << 0x18) < 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



/* Function: FUN_000001d0 */

undefined8 FUN_000001d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0000f28c();
  FUN_0000e2f6();
  iVar1 = FUN_0000eb10();
  iVar2 = FUN_0000eb58(0,0);
  *(int *)(iVar1 + 4) = iVar2 + 1;
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_000001ee */

void FUN_000001ee(void)

{
  return;
}



/* Function: FUN_000001f2 */

void FUN_000001f2(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  
  FUN_00000054();
  FUN_000001d0();
  FUN_00002620();
  uVar5 = FUN_0000eafc();
  FUN_000001ee();
  FUN_0000eb18((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  do {
    piVar1 = DAT_00000240;
    piVar2 = (int *)DAT_00000240[1];
    piVar4 = (int *)*DAT_00000240 + 1;
    piVar3 = piVar2 + 1;
    *piVar2 = *piVar2 + *(int *)*DAT_00000240;
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



/* Function: FUN_00000244 */

int FUN_00000244(void)

{
  int iVar1;
  int local_c;
  
  iVar1 = *DAT_00000634;
  do {
    local_c = iVar1;
    iVar1 = *DAT_00000634;
  } while (local_c != *DAT_00000634);
  return local_c;
}



/* Function: FUN_00000260 */

void FUN_00000260(uint param_1)

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
    FUN_0000e52c(DAT_00000638,0x200);
    puVar1 = DAT_00000638;
    param_1 = param_1 >> 4;
    do {
      iVar2 = DAT_0000063c;
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



/* Function: FUN_0000034c */

void FUN_0000034c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = DAT_00000648;
  uVar2 = 0;
  iVar6 = DAT_00000640 + 0xc;
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



/* Function: FUN_00000404 */

void FUN_00000404(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = DAT_00000644;
  *(undefined4 *)(DAT_00000644 + 0xb0) = 0x100d;
  uVar3 = DAT_0000064c;
  *(uint *)(iVar2 + 0xb4) = DAT_0000064c;
  uVar4 = DAT_00000650;
  *(undefined4 *)(iVar2 + 0xb8) = DAT_00000650;
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



/* Function: FUN_00000440 */

void FUN_00000440(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = DAT_00000654;
  *DAT_00000654 = *DAT_00000654 | 0x100000;
  puVar1[0x2c] = puVar1[0x2c] | 0x1000;
  iVar2 = DAT_00000658;
  *(uint *)(DAT_00000658 + 0x24) = *(uint *)(DAT_00000658 + 0x24) | 0x1000;
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
  *DAT_0000065c = 0x300000;
  puVar3 = DAT_0000065c;
  DAT_0000065c[-8] = DAT_00000660;
  puVar4 = DAT_0000065c;
  DAT_0000065c[-0xd] = 0x300000;
  puVar4[-0xe] = 0x300000;
  DAT_0000065c[-4] = 0x300000;
  DAT_0000065c[-0xc] = 0x300000;
  DAT_0000065c[-0x10] = 0x300000;
  DAT_0000065c[-5] = 0x300000;
  puVar4 = DAT_0000065c;
  DAT_0000065c[-2] = 0x300000;
  puVar4[-1] = 0x300000;
  DAT_0000065c[-3] = 0x300000;
  DAT_0000065c[-6] = 0x300000;
  puVar4 = DAT_0000065c;
  DAT_0000065c[-0xb] = 0x300000;
  puVar4[-10] = 0x300000;
  puVar3[-7] = 0x300000;
  puVar3[-9] = 0x300000;
  DAT_0000065c[-0xf] = DAT_00000664;
  return;
}



/* Function: FUN_0000050a */

void FUN_0000050a(void)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_00000640 + 8) == 0) {
    if (*(int *)(DAT_00000668 + 0x60) == 8) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
    *(undefined4 *)(DAT_00000640 + 8) = uVar1;
  }
  return;
}



/* Function: FUN_00000526 */

undefined4 FUN_00000526(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_0000066c;
  iVar2 = 0;
  do {
    *(char *)(iVar4 + iVar2 * 0x68 + 0x15) = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 1);
  FUN_0000050a();
  iVar4 = DAT_00000668;
  if (*(int *)(DAT_00000640 + 8) == 2) {
    uVar3 = 8;
  }
  else {
    if (*(int *)(DAT_00000640 + 8) != 1) goto LAB_00000566;
    uVar3 = 3;
  }
  *(undefined4 *)(DAT_00000668 + 0x60) = uVar3;
  *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 2;
LAB_00000566:
  puVar1 = DAT_00000670;
  *DAT_00000670 = *DAT_00000670 | 0x200;
  puVar1[1] = puVar1[1] | 0x80;
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
  } while (iVar4 < 1000);
  puVar1[1] = puVar1[1] & 0xffffff7f;
  FUN_00000440();
  return 0;
}



/* Function: FUN_00000594 */

undefined4 FUN_00000594(uint param_1)

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
    *(uint *)(DAT_00000644 + 0x10) = *(uint *)(DAT_00000644 + 0x10) | uVar1;
  }
  return 0;
}



/* Function: FUN_000005c4 */

undefined4 FUN_000005c4(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *extraout_r12;
  undefined4 *puVar5;
  
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = FUN_00000244();
  puVar5 = DAT_00000644;
  do {
    if (((param_1 & ~uVar3) == 0) ||
       (iVar2 = FUN_00000244(), puVar5 = extraout_r12, 4999 < (uint)(iVar2 - iVar1)))
    goto LAB_00000604;
    if ((int)(extraout_r12[4] << 7) < 0) {
      uVar3 = 1;
    }
  } while (-1 < (int)(extraout_r12[4] << 4));
  uVar3 = uVar3 | 8;
LAB_00000604:
  if ((int)(uVar3 << 0x1c) < 0) {
    *puVar5 = 2;
    FUN_00000594(0x6f);
    uVar4 = 5;
  }
  else if ((param_1 & ~uVar3) != 0) {
    *puVar5 = 2;
    FUN_00000594(0x6f);
    uVar4 = 1;
  }
  FUN_00000594(0x6f);
  return uVar4;
}



/* Function: FUN_00000674 */

void FUN_00000674(uint param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar2 = DAT_00000a6c;
  uVar1 = *DAT_00000a6c;
  iVar4 = (uint)(uVar1 >> 1) * 4 + DAT_00000a70;
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



/* Function: FUN_000006ae */

undefined4 FUN_000006ae(short *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 *extraout_r12;
  undefined2 *puVar6;
  
  uVar5 = 0;
  iVar2 = FUN_000025e4();
  if ((iVar2 == 0) && (*param_1 != 0)) {
    FUN_0000050a();
    puVar1 = DAT_00000a70;
    puVar6 = DAT_00000a6c;
    if (*(int *)(DAT_00000a6c + 2) == 1) {
      uVar3 = (uint)*(byte *)((int)param_1 + 0x15);
      if (uVar3 != 0) {
        uVar5 = uVar3 << 9;
        DAT_00000a70[100] = DAT_00000a70[100] | uVar3 << 0x1e;
      }
      puVar1[5] = DAT_00000a74;
      puVar1[6] = DAT_00000a78;
      puVar1[0xd] = 0x81000000;
      puVar1[0xe] = DAT_00000a7c;
      puVar1[0x2c] = 0x1004;
      puVar1[0x2d] = 0x1004;
      puVar1[0x2e] = &LAB_00004012_1;
      puVar1[0x2f] = DAT_00000a80;
      puVar1[0x37] = 6;
      puVar1[0x38] = 0x100;
      puVar1[0x39] = 0x100;
      puVar1[0x3a] = 0xbf;
      puVar1[0x3b] = 0xc80;
      puVar1[0x60] = 0x680;
      puVar1[0x62] = 3;
      puVar1[0x4b] = &DAT_0000548a;
      uVar4 = DAT_00000a84;
      uVar5 = uVar5 | 2;
      puVar1[1] = uVar5;
      puVar1[2] = 0x3000;
      puVar1[0x3b] = uVar4;
      puVar1[0x3e] = puVar1[0x3e] | 2;
      *puVar6 = 0;
      FUN_00000674(0xff);
      FUN_00000674(0xe000);
      FUN_00000674(0xf);
      FUN_00000674(0xc0);
      FUN_00000674(0x1000);
      FUN_00000674(0xe001);
      FUN_00000674(0xf000);
      puVar6 = extraout_r12;
    }
    uVar4 = DAT_00000a88;
    if (*(int *)(puVar6 + 2) == 2) {
      if (*(byte *)((int)param_1 + 0x15) != 0) {
        uVar5 = uVar5 | (uint)*(byte *)((int)param_1 + 0x15) << 9;
      }
      puVar1[1] = uVar5 | 2;
      puVar1[5] = uVar4;
      puVar1[6] = puVar1[6] | 0x1f;
      puVar1[0x3e] = puVar1[0x3e] | 2;
      *puVar6 = 0;
      FUN_00000674(&DAT_0000ffcd);
      FUN_00000674(0xb0);
      FUN_00000674(0xff);
    }
    FUN_00000594(0x6f);
    *puVar1 = 1;
    uVar4 = FUN_000005c4();
    return uVar4;
  }
  return 4;
}



/* Function: FUN_00000856 */

void FUN_00000856(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(param_2 + uVar1);
  }
  return;
}



/* Function: FUN_00000bc4 */

undefined4 FUN_00000bc4(short *param_1,int param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  FUN_0000050a();
  puVar2 = DAT_00000ea4;
  puVar1 = DAT_00000ea0;
  if (*(int *)(DAT_00000ea0 + 2) == 2) {
    iVar3 = FUN_000025e4(param_1);
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
      FUN_00000674(0xefcd);
      FUN_00000674(param_2 << 8 | 0xa0);
      FUN_00000674(0x7de);
      FUN_00000674(0xb0);
      uVar5 = 0xff;
      goto LAB_00000cc6;
    }
  }
  else {
    if (*(int *)(DAT_00000ea0 + 2) != 1) {
      return 9;
    }
    iVar3 = FUN_000025e4(param_1);
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
      FUN_00000674(0x1f);
      FUN_00000674(param_2);
      FUN_00000674(param_3 & 0xffff);
      FUN_00000674(0xe000);
      uVar5 = 0xf000;
LAB_00000cc6:
      FUN_00000674(uVar5);
      FUN_00000594(0x6f);
      *puVar2 = 1;
      uVar5 = FUN_000005c4(1);
      return uVar5;
    }
  }
  return 4;
}



/* Function: FUN_00000ce2 */

uint FUN_00000ce2(uint param_1)

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



/* Function: FUN_00000cfa */

undefined4 FUN_00000cfa(short *param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_000025e4();
  if ((iVar2 == 0) && (*param_1 != 0)) {
    FUN_0000e474(param_1 + 0x1a,param_2,0x24);
    *(undefined1 *)((int)param_1 + 0x15) = param_4;
    FUN_0000050a();
    if (*(int *)(DAT_00000ea0 + 4) == 2) {
      param_1[1] = 0;
    }
    else {
      if (*(int *)(DAT_00000ea0 + 4) != 1) {
        return 9;
      }
      param_1[1] = 3;
    }
    param_1[7] = *(short *)(param_2 + 10);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0xc);
    *(uint *)(param_1 + 2) = (uint)*(ushort *)(param_2 + 8) * (uint)*(ushort *)(param_2 + 10);
    *(uint *)(param_1 + 4) = (uint)*(ushort *)(param_2 + 8);
    uVar1 = FUN_00000ce2(*(undefined4 *)(param_1 + 2));
    *(undefined1 *)((int)param_1 + 0x11) = uVar1;
    uVar1 = FUN_00000ce2(*(undefined4 *)(param_1 + 4));
    *(undefined1 *)(param_1 + 9) = uVar1;
    uVar1 = FUN_00000ce2(*(undefined2 *)(param_2 + 6));
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



/* Function: FUN_00000fea */

undefined4 FUN_00000fea(int param_1)

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



/* Function: FUN_00001046 */

int FUN_00001046(int param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,
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
  
  FUN_0000050a();
  puVar3 = DAT_00001464;
  iVar8 = DAT_00001460 + (param_3 & 0xf) * 0x10;
  local_2c = param_3;
  if (*(int *)(DAT_0000145c + 2) != 2) {
    if (*(int *)(DAT_0000145c + 2) != 1) {
      return 9;
    }
    local_40 = 0;
    uVar10 = 0;
    iVar5 = FUN_00000bc4(param_1,0xa0,0);
    bVar11 = iVar5 == 0;
    do {
      if (!bVar11) {
        return iVar5;
      }
      iVar5 = FUN_00000bc4(param_1,0xb0,9);
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
                 DAT_00001880 + (uint)*(ushort *)(param_1 + 0x26) * 0x10000 | 0x3000;
    }
    if (*DAT_00001884 != '\0') {
      FUN_00000260(param_3);
      FUN_00004d54(DAT_00001888,0x80,1);
      FUN_00000404(iVar8);
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
      uVar6 = FUN_00000fea(*(undefined1 *)(param_1 + 0x18));
      local_40 = uVar6 | local_40;
      local_4c = local_4c | (uint)*(byte *)(param_1 + 0x1b) << 0x18;
      if (param_4 == 0) {
        uVar6 = (uint)*(byte *)(param_1 + 0x10);
        local_50 = param_5 - uVar10;
        if (uVar6 < local_50) {
          local_58 = local_50 / uVar6;
          uVar6 = local_58 * uVar6;
          goto LAB_000015fe;
        }
      }
      else {
        if (*(byte *)(param_1 + 0x10) < param_4) {
          return 4;
        }
        local_50 = *(byte *)(param_1 + 0x10) - param_4;
        uVar6 = param_5 - uVar10;
        if (uVar6 < local_50) {
LAB_000015fe:
          local_50 = uVar6;
        }
      }
      pcVar2 = DAT_00001884;
      pcVar2[4] = '\0';
      pcVar2[5] = '\0';
      FUN_00000674(0x13);
      FUN_00000674((extraout_r12_03 & 0xffffff) >> 0x10);
      FUN_00000674((extraout_r12_04 & 0xffff) >> 8);
      FUN_00000674(extraout_r12_05 & 0xff);
      FUN_00000674(0xe000);
      FUN_00000674(0xf);
      FUN_00000674(0xc0);
      FUN_00000674(0x1000);
      FUN_00000674(0xe001);
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
          goto LAB_0000178c;
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
LAB_0000178c:
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
            FUN_00000674(0x6b);
            FUN_00000674((extraout_r12_06 & 0xffff) >> 8);
            FUN_00000674(extraout_r12_07 & 0xff);
            FUN_00000674(0x6000);
            FUN_00000674(&DAT_00005200);
            FUN_00000674(0xe000);
          }
          uVar6 = local_50;
          if (1 < local_58) {
            uVar6 = (uint)*(byte *)(param_1 + 0x10);
          }
          local_44 = uVar6 * 0x1000000 - 0x1000000 | local_44;
          puVar3[0x80] = 0;
          puVar3[0x81] = (uVar10 << *(sbyte *)(param_1 + 0x13)) + param_6;
        }
        FUN_00000674(0x6b);
        FUN_00000674((param_4 & 0xffff) >> 8);
        FUN_00000674(param_4 & 0xff);
        FUN_00000674(0x6000);
        FUN_00000674(&DAT_00003200);
        FUN_00000674(0xe000);
        FUN_00000674(0xf000);
      }
      if (local_58 < 2) {
        uVar7 = local_50 * 0x1000000 - 0x1000000;
        uVar6 = local_48;
      }
      else {
        uVar7 = (uint)*(byte *)(param_1 + 0x10) * 0x1000000 - 0x1000000 | local_48;
        uVar6 = DAT_00001880 + local_58 * 0x10000;
      }
      puVar3[1] = uVar7 | uVar6;
      if ((param_6 == 0) || (param_7 == 0 && param_9 == 0)) {
        local_44 = 0;
      }
      puVar3[3] = local_44;
      if (*DAT_00001884 != '\0') {
        FUN_00000260(local_2c);
        FUN_00004d54(DAT_00001888,0x80,1);
        FUN_00000404(DAT_00001888 + (local_2c & 0xf) * 0x10);
      }
      if (param_8 == 0) {
        uVar6 = 0xffffffff;
        puVar3[0x84] = 0xffffffff;
      }
      else {
        puVar3[0x84] = 0;
        uVar6 = DAT_0000187c;
      }
      puVar3[0x85] = uVar6;
      FUN_00000594(0x6f);
      puVar3[2] = local_4c;
      puVar3[0x3e] = 0x3a;
      *puVar3 = local_40;
      FUN_00004d54(param_6,*(ushort *)(param_1 + 0xc) * param_5,1);
      FUN_00004d54(param_7,*(ushort *)(param_1 + 0x26) * param_5,1);
      FUN_00004d54(DAT_00001c98,0x10,1);
      FUN_00004d54(param_6,*(ushort *)(param_1 + 0xc) * param_5,2);
      FUN_00004d54(param_7,*(ushort *)(param_1 + 0x26) * param_5,2);
      FUN_00004d54(DAT_00001c98,0x10,2);
      *puVar3 = *puVar3 | 1;
      FUN_000005c4(1);
      iVar8 = DAT_00001c98;
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
    if (param_7 == 0) goto LAB_00001106;
    uVar6 = *(ushort *)(param_1 + 0x26) - 1;
  }
  else {
    local_4c = local_4c | 0x30;
    uVar6 = *(ushort *)(param_1 + 0xc) - 1 |
            DAT_00001468 + (uint)*(ushort *)(param_1 + 0x26) * 0x10000;
  }
  local_58 = uVar6 | local_58;
LAB_00001106:
  if (*(byte *)(param_1 + 0x15) != 0) {
    local_4c = local_4c | (uint)*(byte *)(param_1 + 0x15) << 9;
  }
  if (*(char *)(param_1 + 0x17) != '\0') {
    local_4c = local_4c | 0x40;
  }
  if (*(char *)(DAT_0000145c + -2) != '\0') {
    FUN_00000260(param_3);
    FUN_00004d54(DAT_00001460,0x80,1);
    FUN_00000404(iVar8);
  }
  do {
    local_50 = 1;
    local_44 = (uint)*(byte *)(param_1 + 0x19) | (uint)*(byte *)(param_1 + 0x1a) << 0x10;
    uVar6 = FUN_00000fea(*(undefined1 *)(param_1 + 0x18));
    local_40 = uVar6 | local_40;
    local_58 = local_58 | (uint)*(byte *)(param_1 + 0x1b) << 0x18;
    if (param_4 == 0) {
      uVar6 = (uint)*(byte *)(param_1 + 0x10);
      local_48 = param_5 - uVar10;
      if (uVar6 < local_48) {
        local_50 = local_48 / uVar6;
        uVar6 = local_50 * uVar6;
        goto LAB_00001174;
      }
    }
    else {
      if (*(byte *)(param_1 + 0x10) < param_4) {
        return 4;
      }
      local_48 = *(byte *)(param_1 + 0x10) - param_4;
      uVar6 = param_5 - uVar10;
      if (uVar6 < local_48) {
LAB_00001174:
        local_48 = uVar6;
      }
    }
    uVar6 = (param_2 << ((uint)*(byte *)(param_1 + 0x11) - (uint)*(byte *)(param_1 + 0x12) & 0xff))
            + local_2c;
    *DAT_0000145c = 0;
    FUN_00000674(0xcd);
    FUN_00000674((extraout_r12 & 0xff) << 8 | 0xa0);
    FUN_00000674(extraout_r12_00 & 0xff00 | 0xa0);
    if (local_50 < 2) {
      uVar7 = (uVar6 & 0xff) << 8 | 0xa0;
    }
    else {
      uVar7 = (uVar6 & 0xff) << 8 | 0xa1;
    }
    FUN_00000674(uVar7);
    FUN_00000674((uVar6 >> 8 & 0xff) << 8 | 0xa0);
    if (*(char *)(param_1 + 0x14) == '\x05') {
      FUN_00000674(extraout_r12_01 & 0xff00 | 0xa0);
    }
    FUN_00000674(0x30cd);
    FUN_00000674(0xb0);
    if (param_7 == 0 && param_9 == 0) {
      FUN_00000674(0xd0);
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
      FUN_00000674(0xd0);
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
      FUN_00000674(uVar4);
    }
    if (*(char *)(param_1 + 0x17) == '\0') {
      if ((param_6 != 0) && (param_7 != 0 || param_9 != 0)) goto LAB_000013c6;
    }
    else if ((param_6 != 0) && (param_7 != 0 || param_9 != 0)) {
      FUN_00000674(0x5cd);
      param_4 = param_4 << *(sbyte *)(param_1 + 0x13);
      FUN_00000674((param_4 & 0xff) << 8 | 0xa0);
      FUN_00000674(extraout_r12_02 | param_4 & 0xff00);
      FUN_00000674(0xe0cd);
      FUN_00000674(0xd0);
LAB_000013c6:
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
    FUN_00000674(0xff);
    FUN_00000594(0x6f);
    if (local_50 < 2) {
      uVar7 = local_48 * 0x1000000 - 0x1000000;
      uVar6 = local_4c;
    }
    else {
      uVar7 = (uint)*(byte *)(param_1 + 0x10) * 0x1000000 - 0x1000000 | local_4c;
      uVar6 = DAT_00001468 + local_50 * 0x10000;
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
      uVar6 = DAT_0000146c + uVar10;
    }
    puVar3[0x85] = uVar6;
    *puVar3 = local_40;
    FUN_00004d54(param_6,*(ushort *)(param_1 + 0xc) * param_5,1);
    FUN_00004d54(param_7,*(ushort *)(param_1 + 0x26) * param_5,1);
    FUN_00004d54(DAT_0000146c,0x10,1);
    FUN_00004d54(param_6,*(ushort *)(param_1 + 0xc) * param_5,2);
    FUN_00004d54(param_7,*(ushort *)(param_1 + 0x26) * param_5,2);
    FUN_00004d54(DAT_0000187c,0x10,2);
    *puVar3 = *puVar3 | 1;
    FUN_000005c4(1);
    uVar6 = DAT_0000187c;
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



/* Function: FUN_00001946 */

undefined4
FUN_00001946(short *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  uint uVar4;
  
  uVar2 = 0;
  psVar3 = param_1;
  uVar4 = param_3;
  iVar1 = FUN_000025e4();
  if (((iVar1 == 0) && (param_3 < (ushort)param_1[7])) && (*param_1 != 0)) {
    iVar1 = DAT_00001c9c;
    if (param_6 != 0) {
      iVar1 = param_6;
    }
    if (param_7 == 0) {
      param_7 = DAT_00001ca0;
    }
    if (*(int *)(param_1 + 4) != 0x200) {
      uVar2 = FUN_00001046(param_1,param_2,param_3,param_4,param_5,iVar1,param_7,DAT_00001ca4,
                           param_9,psVar3,param_2,uVar4);
    }
    if (param_8 != 0) {
      FUN_00000856(param_8,DAT_00001ca4,param_5);
    }
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



/* Function: FUN_000019b8 */

int FUN_000019b8(int param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,
                int param_7,uint param_8,int param_9)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint extraout_r12;
  undefined4 extraout_r12_00;
  uint extraout_r12_01;
  uint extraout_r12_02;
  uint extraout_r12_03;
  uint extraout_r12_04;
  uint extraout_r12_05;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_44;
  uint local_2c;
  
  uVar13 = 0;
  uVar11 = 0;
  local_44 = 0;
  uVar12 = 0;
  local_58 = 0;
  FUN_0000050a();
  if (*(int *)(DAT_00001ca8 + 2) == 1) {
    iVar9 = FUN_00000bc4(param_1,0xa0,0);
    if (iVar9 != 0) {
      return iVar9;
    }
    iVar9 = FUN_00000bc4(param_1,0xb0,9);
    if (iVar9 != 0) {
      return iVar9;
    }
    local_58 = 0x3000;
  }
  else if (*(int *)(DAT_00001ca8 + 2) == 2) {
    local_58 = (*(byte *)(param_1 + 2) & 7) << 0xc;
  }
  local_4c = 0x8108;
  if (param_9 != 0) {
    local_4c = 0x810c;
  }
  if (*(char *)(param_1 + 0x1f) != '\0') {
    local_4c = local_4c | 0x2000;
  }
  if ((param_6 == 0) || (param_7 == 0)) {
    local_4c = local_4c | 0x10;
    if (param_6 != 0) {
      local_58 = *(ushort *)(param_1 + 0xc) - 1 | local_58;
    }
    if (param_7 == 0) goto LAB_00001a6e;
    uVar6 = *(ushort *)(param_1 + 0x26) - 1;
  }
  else {
    local_4c = local_4c | 0x30;
    uVar6 = *(ushort *)(param_1 + 0xc) - 1 |
            DAT_00001cac + (uint)*(ushort *)(param_1 + 0x26) * 0x10000;
  }
  local_58 = uVar6 | local_58;
LAB_00001a6e:
  if (*(byte *)(param_1 + 0x15) != 0) {
    local_4c = local_4c | (uint)*(byte *)(param_1 + 0x15) << 9;
  }
  if (*(char *)(param_1 + 0x17) != '\0') {
    local_4c = local_4c | 0x40;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    uVar12 = 0x20000;
  }
  if (*(char *)(param_1 + 0x23) != '\0') {
    uVar12 = uVar12 | 0x10000;
  }
  bVar4 = *(byte *)(param_1 + 0x20);
  bVar5 = *(byte *)(param_1 + 0x21);
  local_2c = param_3;
  do {
    local_54 = 1;
    uVar14 = (uint)*(byte *)(param_1 + 0x19) | (uint)*(byte *)(param_1 + 0x1a) << 0x10;
    uVar6 = FUN_00000fea(*(undefined1 *)(param_1 + 0x18));
    local_44 = uVar6 | local_44;
    local_58 = local_58 | (uint)*(byte *)(param_1 + 0x1b) << 0x18;
    if (param_4 == 0) {
      local_50 = param_5 - uVar11;
      uVar6 = (uint)*(byte *)(param_1 + 0x10);
      if (uVar6 < local_50) {
        local_54 = local_50 / uVar6;
        uVar6 = local_54 * uVar6;
        goto LAB_00001ae4;
      }
    }
    else {
      if (*(byte *)(param_1 + 0x10) < param_4) {
        return 4;
      }
      local_50 = *(byte *)(param_1 + 0x10) - param_4;
      uVar6 = param_5 - uVar11;
      if (uVar6 < local_50) {
LAB_00001ae4:
        local_50 = uVar6;
      }
    }
    if (*(int *)(DAT_00001ca8 + 2) == 1) {
      uVar13 = (param_2 <<
               ((uint)*(byte *)(param_1 + 0x11) - (uint)*(byte *)(param_1 + 0x12) & 0xff)) +
               local_2c;
      *DAT_00001ca8 = 0;
      FUN_00000674(0x13);
      FUN_00000674((uVar13 & 0xffffff) >> 0x10);
      FUN_00000674((uVar13 & 0xffff) >> 8);
      FUN_00000674(uVar13 & 0xff);
      FUN_00000674(0xe000);
      FUN_00000674(0xf);
      FUN_00000674(0xc0);
      FUN_00000674(0x1000);
      FUN_00000674(0xe001);
      FUN_00000674(6);
      FUN_00000674(0xe000);
      puVar7 = DAT_000020d0;
      iVar9 = DAT_00001cb0;
      if (param_6 == 0) {
        if (param_7 == 0) goto LAB_00001ee0;
        if (*(char *)(param_1 + 0x17) == '\0') {
          uVar6 = (uint)*(ushort *)(param_1 + 0xc);
          uVar8 = *(ushort *)(param_1 + 0x26) + uVar6;
        }
        else {
          uVar8 = (uint)*(ushort *)(param_1 + 0x26);
          uVar6 = *(uint *)(param_1 + 8);
        }
        param_4 = param_4 * uVar8 + uVar6;
        cVar3 = *(char *)(param_1 + 0x1f);
        DAT_000020d0[0x80] = extraout_r12;
        if (cVar3 == '\0') {
          uVar6 = (uint)*(ushort *)(param_1 + 0x26);
        }
        else {
          uVar6 = (uint)*(byte *)(param_1 + 0x1b);
        }
        puVar7[0x81] = uVar11 * uVar6 + param_7;
        puVar7 = DAT_000020d0;
        DAT_000020d0[0x82] = 0xffffffff;
        puVar7[0x83] = 0xffffffff;
        FUN_00000674(0x32);
        FUN_00000674((param_4 & 0xffff) >> 8);
LAB_00001d0a:
        FUN_00000674(param_4 & 0xff);
        FUN_00000674(0x2200);
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
          *(uint *)(DAT_00001cb0 + 0x200) = extraout_r12;
          *(uint *)(iVar9 + 0x204) = (uVar11 << *(sbyte *)(param_1 + 0x13)) + param_6;
          *(undefined4 *)(iVar9 + 0x208) = 0xffffffff;
          *(undefined4 *)(iVar9 + 0x208) = 0xffffffff;
          FUN_00000674(0x32);
          FUN_00000674((param_4 & 0xffff) >> 8);
          goto LAB_00001d0a;
        }
        if (*(char *)(param_1 + 0x17) == '\0') {
          uVar8 = ((uint)*(ushort *)(param_1 + 0x26) + (uint)*(ushort *)(param_1 + 0xc)) * param_4;
          uVar6 = *(ushort *)(param_1 + 0xc) + uVar8;
        }
        else {
          uVar8 = param_4 << *(sbyte *)(param_1 + 0x13);
          uVar6 = *(ushort *)(param_1 + 0x26) * param_4 + *(int *)(param_1 + 8);
        }
        *(uint *)(DAT_00001cb0 + 0x200) = extraout_r12;
        *(uint *)(iVar9 + 0x204) = (uVar11 << *(sbyte *)(param_1 + 0x13)) + param_6;
        FUN_00000674(0x32);
        FUN_00000674((uVar8 & 0xffff) >> 8);
        FUN_00000674(uVar8 & 0xff);
        FUN_00000674(0x2200);
        if (*(char *)(param_1 + 0x31) == '\0') {
          *(undefined4 *)(iVar9 + 0x208) = 0xffffffff;
          *(undefined4 *)(iVar9 + 0x20c) = 0xffffffff;
        }
        else {
          cVar3 = *(char *)(param_1 + 0x1f);
          *(undefined4 *)(iVar9 + 0x208) = extraout_r12_00;
          if (cVar3 == '\0') {
            uVar8 = (uint)*(ushort *)(param_1 + 0x26);
          }
          else {
            uVar8 = (uint)*(byte *)(param_1 + 0x1b);
          }
          *(uint *)(iVar9 + 0x20c) = uVar11 * uVar8 + param_7;
          FUN_00000674(0xe000);
          FUN_00000674(0x34);
          FUN_00000674((uVar6 & 0xffff) >> 8);
          FUN_00000674(uVar6 & 0xff);
          FUN_00000674(0x4200);
        }
        uVar6 = local_50;
        if (1 < local_54) {
          uVar6 = (uint)*(byte *)(param_1 + 0x10);
        }
        uVar14 = uVar6 * 0x1000000 - 0x1000000 | uVar14;
      }
      uVar10 = 0xe000;
LAB_00001edc:
      FUN_00000674(uVar10);
    }
    else if (*(int *)(DAT_00001ca8 + 2) == 2) {
      bVar1 = *(byte *)(param_1 + 0x11);
      bVar2 = *(byte *)(param_1 + 0x12);
      *DAT_00001ca8 = 0;
      uVar6 = (param_2 << ((uint)bVar1 - (uint)bVar2 & 0xff)) + local_2c;
      FUN_00000674(&DAT_000080cd);
      FUN_00000674((extraout_r12_01 & 0xff) << 8 | 0xa0);
      FUN_00000674(extraout_r12_02 & 0xff00 | 0xa0);
      if (local_54 < 2) {
        uVar13 = (uVar6 & 0xff) << 8 | 0xa0;
      }
      else {
        uVar13 = (uVar6 & 0xff) << 8 | 0xa1;
      }
      FUN_00000674(uVar13);
      uVar13 = uVar6 >> 8;
      FUN_00000674((uVar13 & 0xff) << 8 | 0xa0);
      if (*(char *)(param_1 + 0x14) == '\x05') {
        uVar13 = uVar6 >> 0x10;
        FUN_00000674(extraout_r12_03 | (uVar13 & 0xff) << 8);
      }
      FUN_00000674(0xd1);
      puVar7 = DAT_000020d0;
      if (*(char *)(param_1 + 0x17) == '\0') {
        if (param_7 == 0) {
          if (param_6 == 0) goto LAB_00001ebe;
        }
        else {
          if (param_6 == 0) goto LAB_00001e66;
          cVar3 = *(char *)(param_1 + 0x1f);
          DAT_000020d0[0x82] = 0;
          if (cVar3 == '\0') {
            uVar6 = (uint)*(ushort *)(param_1 + 0x26);
          }
          else {
            uVar6 = (uint)*(byte *)(param_1 + 0x1b);
          }
          puVar7[0x83] = uVar11 * uVar6 + param_7;
        }
LAB_00001eae:
        puVar7 = DAT_000020d0;
        DAT_000020d0[0x80] = 0;
        uVar6 = (uVar11 << *(sbyte *)(param_1 + 0x13)) + param_6;
LAB_00001ea2:
        puVar7[0x81] = uVar6;
      }
      else if (param_6 == 0) {
        if (param_7 != 0) {
LAB_00001e66:
          cVar3 = *(char *)(param_1 + 0x1f);
          DAT_000020d0[0x80] = 0;
          if (cVar3 == '\0') {
            uVar6 = (uint)*(ushort *)(param_1 + 0x26);
          }
          else {
            uVar6 = (uint)*(byte *)(param_1 + 0x1b);
          }
          uVar6 = uVar11 * uVar6 + param_7;
          goto LAB_00001ea2;
        }
      }
      else {
        if (param_7 == 0) goto LAB_00001eae;
        FUN_00000674(&DAT_000085cd);
        uVar6 = param_4 * *(ushort *)(param_1 + 0x26) + *(int *)(param_1 + 8);
        FUN_00000674(extraout_r12_04 | (uVar6 & 0xff) << 8);
        FUN_00000674(extraout_r12_05 | uVar6 & 0xff00);
        FUN_00000674(0xd3);
        puVar7 = DAT_000020d0;
        cVar3 = *(char *)(param_1 + 0x1f);
        DAT_000020d0[0x82] = 0;
        if (cVar3 == '\0') {
          uVar6 = (uint)*(ushort *)(param_1 + 0x26);
        }
        else {
          uVar6 = (uint)*(byte *)(param_1 + 0x1b);
        }
        puVar7[0x83] = uVar11 * uVar6 + param_7;
        puVar7 = DAT_000020d0;
        DAT_000020d0[0x80] = 0;
        puVar7[0x81] = (uVar11 << *(sbyte *)(param_1 + 0x13)) + param_6;
        uVar6 = local_50;
        if (1 < local_54) {
          uVar6 = (uint)*(byte *)(param_1 + 0x10);
        }
        uVar14 = uVar6 * 0x1000000 - 0x1000000 | uVar14;
      }
LAB_00001ebe:
      FUN_00000674(0x10cd);
      FUN_00000674(0xb0);
      FUN_00000674(0x70cd);
      FUN_00000674(0xdd);
      uVar10 = 0xff;
      goto LAB_00001edc;
    }
LAB_00001ee0:
    FUN_00000594(0x6f);
    if (local_54 < 2) {
      if (*(int *)(DAT_000020d8 + 4) == 2) {
        uVar14 = local_50 * 0x1000000 - 0x1000000 | uVar14;
      }
      uVar8 = local_50 * 0x1000000 - 0x1000000;
      uVar6 = local_4c;
    }
    else {
      uVar8 = (uint)*(byte *)(param_1 + 0x10) * 0x1000000 - 0x1000000 | local_4c;
      uVar6 = DAT_000020d4 + local_54 * 0x10000;
    }
    DAT_000020d0[1] = uVar8 | uVar6;
    if (*(char *)(DAT_000020d8 + -4) != '\0') {
      FUN_00000260(local_2c);
      if (*(int *)(DAT_000020d8 + 4) == 2) {
        uVar10 = 0x200;
LAB_00001f52:
        FUN_00004d54(DAT_000020dc,uVar10,1);
      }
      else if (*(int *)(DAT_000020d8 + 4) == 1) {
        uVar10 = 0x80;
        goto LAB_00001f52;
      }
      FUN_00000404(DAT_000020dc + (local_2c & 0xf) * 0x10);
    }
    puVar7 = DAT_000020d0;
    if ((param_6 == 0) || (param_9 == 0 && param_7 == 0)) {
      uVar14 = 0;
    }
    DAT_000020d0[3] = uVar14;
    *puVar7 = local_44;
    puVar7[2] = local_58;
    puVar7[0x3e] = 0x3a;
    iVar9 = *(int *)(DAT_000020d8 + 4);
    if (iVar9 == 2) {
      puVar7[0xc] = (uint)bVar5 | uVar12 | (uint)bVar4 << 8;
    }
    if (param_8 == 0) {
      uVar6 = 0xffffffff;
      puVar7[0x84] = 0xffffffff;
    }
    else {
      puVar7[0x84] = 0;
      uVar6 = param_8;
    }
    puVar7[0x85] = uVar6;
    if (iVar9 == 1) {
      FUN_00000674(0x10);
      FUN_00000674((uVar13 & 0xffffff) >> 0x10);
      FUN_00000674((uVar13 & 0xffff) >> 8);
      FUN_00000674(uVar13 & 0xff);
      FUN_00000674(0xe000);
      FUN_00000674(0xf);
      FUN_00000674(0xc0);
      FUN_00000674(0x1000);
      FUN_00000674(0xe201);
      FUN_00000674(0xf000);
    }
    FUN_00004d54(param_6,param_5 * *(ushort *)(param_1 + 0xc),1);
    FUN_00004d54(param_7,param_5 * *(ushort *)(param_1 + 0x26),1);
    *puVar7 = *puVar7 | 1;
    iVar9 = FUN_000005c4(1);
    if (iVar9 != 0) {
      return iVar9;
    }
    param_4 = 0;
    uVar11 = uVar11 + local_50;
    local_2c = local_2c + local_54;
    if (param_5 <= uVar11) {
      return 0;
    }
  } while( true );
}



/* Function: FUN_00002050 */

undefined4
FUN_00002050(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,int param_6
            ,int param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = 0;
  iVar3 = param_1;
  uVar4 = param_3;
  iVar1 = FUN_000025e4();
  if (((iVar1 == 0) && (param_3 < *(ushort *)(param_1 + 0xe))) && (param_5 < 9)) {
    if (param_6 == 0) {
      FUN_0000e4d8(DAT_000020e0,param_5 * *(ushort *)(param_1 + 0xc),0xff);
      param_6 = DAT_000020e0;
    }
    if (param_7 == 0) {
      FUN_0000e4d8(DAT_000020e4,param_5 * *(ushort *)(param_1 + 0x26),0xff);
      param_7 = DAT_000020e4;
    }
    if (*(int *)(param_1 + 8) != 0x200) {
      uVar2 = FUN_000019b8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                           DAT_000020dc + -0x40,param_8,iVar3,param_2,uVar4);
    }
    if (param_9 != 0) {
      FUN_00000856(param_9,DAT_000020dc + -0x40,param_5);
    }
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



/* Function: FUN_000020f2 */

void FUN_000020f2(undefined4 *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_r12;
  
  puVar3 = DAT_00002508;
  uVar6 = 0;
  iVar8 = 0;
  DAT_00002508[1] = 2;
  puVar3[0x3e] = 0x3a;
  *DAT_0000250c = 0;
  FUN_00000674(0x1f0);
  FUN_00000674(0xff);
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
  FUN_00000594(0x6f);
  *puVar3 = 1;
  FUN_000005c4(1);
  puVar4 = (undefined *)0x0;
  if (param_1[5] != 0) {
    puVar4 = &DAT_00008100;
  }
  bVar1 = *(byte *)(param_1 + 2);
  uVar5 = (uint)puVar4 | (uint)*(byte *)(param_1 + 6) << 0x1e | 0x41;
  if (bVar1 != 0) {
    iVar7 = param_1[3];
    puVar3[0x80] = 0;
    uVar5 = (uint)bVar1 * 0x1000000 - 0x1000000 | uVar5 | 0x10;
    puVar3[0x81] = *param_1;
    uVar6 = iVar7 - 1;
  }
  iVar7 = DAT_00002510;
  bVar1 = *(byte *)((int)param_1 + 9);
  if (bVar1 != 0) {
    uVar2 = *(ushort *)(param_1 + 4);
    uVar5 = uVar5 | 0x20;
    puVar3[0x82] = 0;
    uVar6 = uVar6 | iVar7 + (uint)uVar2 * 0x10000;
    iVar8 = (uint)bVar1 * 0x1000000 + -0x1000000;
    puVar3[0x83] = param_1[1];
  }
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = iVar8;
  puVar3[0x3e] = 0x403a;
  *puVar3 = 8;
  FUN_000005c4(1);
  return;
}



/* Function: FUN_000021d4 */

void FUN_000021d4(undefined1 *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  FUN_00000594(0x6f);
  uVar6 = (uint)(byte)param_1[1] * 0x1000000 - 0x1000000;
  uVar7 = uVar6 | 0x8000;
  if (param_2 != 0) {
    uVar7 = uVar6 | 0x8100;
  }
  uVar6 = uVar7 | 3;
  if (param_1[0x21] != '\0') {
    uVar6 = uVar7 | 0x43;
  }
  bVar1 = param_1[0x1c];
  iVar9 = *(int *)(param_1 + 8);
  uVar7 = DAT_00002510 + (uint)*(ushort *)(param_1 + 2) * 0x10000;
  uVar2 = *(ushort *)(param_1 + 0x1e);
  uVar8 = FUN_00000fea(*param_1);
  puVar5 = DAT_00002508;
  bVar4 = param_1[0x20];
  uVar3 = *(ushort *)(param_1 + 4);
  *DAT_00002508 = uVar8;
  puVar5[1] = uVar6;
  puVar5[2] = iVar9 - 1U | uVar7 | (uint)bVar1 << 0x18;
  puVar5[3] = (uint)uVar3 | (uint)uVar2 << 0x10 | (uint)bVar4 << 7;
  puVar5[0x3e] = 0x4038;
  *puVar5 = *puVar5 | 8;
  FUN_000005c4(1);
  return;
}



/* Function: FUN_0000239e */

undefined4 FUN_0000239e(int param_1)

{
  bool bVar1;
  uint uVar2;
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
  
  bVar1 = false;
  FUN_0000e52c(&local_38,0x1c);
  FUN_0000e52c(DAT_00002514,0x1000);
  iVar4 = DAT_00002514;
  if (*(char *)(param_1 + 0x21) == '\0') {
    for (uVar2 = 0; uVar2 < *(byte *)(param_1 + 1); uVar2 = uVar2 + 1) {
      FUN_0000e3a0(uVar2 * ((uint)*(ushort *)(param_1 + 2) + *(int *)(param_1 + 8)) + iVar4,
                   uVar2 * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10));
      FUN_0000e3a0(uVar2 * (*(int *)(param_1 + 8) + (uint)*(ushort *)(param_1 + 2)) +
                   *(int *)(param_1 + 8) + iVar4,
                   uVar2 * *(ushort *)(param_1 + 2) + *(int *)(param_1 + 0x14));
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
  FUN_00000594(0x6f);
  FUN_00004d54(local_38,local_2c,1);
  FUN_00004d54(local_34,local_28,1);
  FUN_000020f2(&local_38);
  FUN_000021d4(param_1,0);
  for (uVar2 = 0; uVar2 < *(byte *)(param_1 + 1); uVar2 = uVar2 + 1) {
    uVar3 = *(uint *)((uVar2 & 0xfffffffc) + DAT_00002508 + 0x40) >> ((uVar2 & 3) << 3);
    *(char *)(*(int *)(param_1 + 0x18) + uVar2) = (char)uVar3;
    if ((uVar3 & 0xff) != 0) {
      bVar1 = true;
    }
  }
  if (bVar1) {
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
    FUN_00000594(0x6f);
    FUN_00004d54(local_38,local_2c,2);
    FUN_00004d54(local_34,local_28,2);
    FUN_000020f2(&local_38);
    if (*(char *)(param_1 + 0x21) == '\0') {
      for (uVar2 = 0; uVar2 < *(byte *)(param_1 + 1); uVar2 = uVar2 + 1) {
        FUN_0000e3a0(uVar2 * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10),
                     uVar2 * ((uint)*(ushort *)(param_1 + 2) + *(int *)(param_1 + 8)) + iVar4);
        FUN_0000e3a0(uVar2 * *(ushort *)(param_1 + 2) + *(int *)(param_1 + 0x14),
                     uVar2 * (*(int *)(param_1 + 8) + (uint)*(ushort *)(param_1 + 2)) +
                     *(int *)(param_1 + 8) + iVar4);
      }
    }
  }
  return 0;
}



/* Function: FUN_0000252c */

int FUN_0000252c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_24 [8];
  
  iVar3 = DAT_0000261c;
  iVar2 = FUN_00001946(param_1,param_2,*(undefined1 *)(param_1 + 0x1d),
                       *(undefined1 *)(param_1 + 0x1e),1,0,DAT_0000261c,auStack_24,0);
  if (iVar2 != 0) {
    return iVar2;
  }
  uVar1 = *(undefined1 *)(iVar3 + (uint)*(ushort *)(param_1 + 0x24));
  if (*(char *)(param_1 + 0x16) == '\0') {
    uVar4 = FUN_000025fa(uVar1);
    if (5 < uVar4) goto LAB_00002586;
  }
  else {
    iVar3 = FUN_000025fa(uVar1);
    iVar2 = FUN_000025fa(*(undefined1 *)((uint)*(ushort *)(param_1 + 0x24) + DAT_0000261c + 1));
    if (0xb < (uint)(iVar2 + iVar3)) {
LAB_00002586:
      *param_3 = 1;
      return 0;
    }
  }
  *param_3 = 0;
  return 0;
}



/* Function: FUN_0000259a */

void FUN_0000259a(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0000261c;
  iVar2 = FUN_00001946(param_1,param_2,*(undefined2 *)(param_1 + 0x48),0,1,0,DAT_0000261c,0,0);
  if (iVar2 == 0) {
    *(undefined1 *)(iVar1 + (uint)*(ushort *)(param_1 + 0x4c)) = 0;
    FUN_00002050(param_1,param_2,*(undefined2 *)(param_1 + 0x48),0,1,0,iVar1,0,0);
  }
  return;
}



/* Function: FUN_000025e4 */

undefined4 FUN_000025e4(int param_1)

{
  if ((param_1 != DAT_0000261c + -0x68) && (param_1 != DAT_0000261c)) {
    return 4;
  }
  return 0;
}



/* Function: FUN_000025fa */

int FUN_000025fa(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 >> 1 & 0x55) + (param_1 & 0x55);
  uVar1 = (uVar1 >> 2 & 0x33) + (uVar1 & 0x33);
  return (uVar1 & 0xf) + (uVar1 >> 4);
}



/* Function: FUN_00002620 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002620(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_20 [32];
  
  *DAT_00002708 = *DAT_00002708 & 0xffffffef;
  (*(code *)*DAT_0000270c)(DAT_0000270c,0x1c200);
  uVar1 = FUN_00004aec();
  FUN_00002aa8(s_boot1_started____x_00002710,uVar1);
  FUN_0000408e();
  uVar1 = FUN_00004026(_DAT_00002724);
  FUN_00002aa8(s___rst_monitor_register_is__x_00002726 + 2,uVar1);
  iVar2 = FUN_00004a7c();
  if (iVar2 == 0x17) {
    FUN_00002aa8(s_boot1_enter_auto_download_00002744);
    FUN_00004a8c(0);
    FUN_00004948();
  }
  FUN_00004d00();
  FUN_00000526(DAT_00002760);
  FUN_000052c0();
  iVar2 = FUN_000054c0(0);
  if (iVar2 == 0) {
    iVar2 = FUN_00002842();
    FUN_000055fa(0);
    if (iVar2 == 1) {
      FUN_00002aa8(s_load_kernel_suc_0000277c);
      iVar2 = FUN_00003cb8();
      if ((iVar2 != 0) && (iVar2 = FUN_00003cc6(), iVar2 != 0)) {
        uVar1 = FUN_00004aec();
        FUN_00002aa8(s_start_verify_kernel___x_00002790,uVar1);
        uVar1 = DAT_000027ac;
        iVar2 = FUN_00003eb6(DAT_000027b0,DAT_000027ac);
        if (iVar2 == 0) {
          uVar1 = FUN_00004aec();
          FUN_00002aa8(s_verify_kernel_fail___x_000027e4,uVar1);
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar3 = FUN_00004aec();
        FUN_00002aa8(s_verify_kernel_suc___x_000027b4,uVar3);
        FUN_00003d70(uVar1,auStack_20);
        FUN_0000e474(DAT_000027cc,auStack_20,0x20);
      }
      uVar1 = FUN_00004aec();
      FUN_00002aa8(s_run_kernel__x_000027d0,uVar1);
      FUN_00000074(DAT_000027e0);
    }
  }
  else {
    FUN_00002aa8(s_SCI_FTL_Load_failed__00002764);
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_000027fc */

undefined4 FUN_000027fc(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_000057a2(param_1,param_3,1,DAT_0000290c);
  if ((iVar1 == 0) || (iVar1 == 4)) {
    FUN_0000e3a0(param_2,DAT_0000290c,param_5);
    if ((param_4 + -1 == 0) ||
       ((iVar1 = FUN_000057a2(param_1,param_3 + 1,param_4 + -1,param_2 + param_5), iVar1 == 0 ||
        (iVar1 == 4)))) {
      return 1;
    }
  }
  return 0;
}



/* Function: FUN_00002842 */

undefined4 FUN_00002842(void)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  uint local_14;
  
  iVar2 = FUN_00005650(0,3,&local_1c,0);
  if (((iVar2 == 0) && (iVar2 = FUN_00005736(local_1c,auStack_18), iVar2 == 0)) &&
     ((iVar2 = FUN_000057a2(local_1c,0,1,DAT_0000290c), piVar1 = DAT_0000290c, iVar2 == 0 ||
      (iVar2 == 4)))) {
    if ((*DAT_0000290c == s_DHTBinvalid_kernel_img_magic_00002910._0_4_) && (DAT_0000290c[1] == 1))
    {
      FUN_00002aa8(s_kernel_img_size____d_00002930,DAT_0000290c[0xc]);
      iVar2 = FUN_000027fc(local_1c,DAT_00002948,0,(piVar1[0xc] + 0x4b3U) / local_14 + 1,local_14);
      if (iVar2 != 0) {
        FUN_00005954(local_1c);
        return 1;
      }
      pcVar3 = s_copy_img_failed_0000294c;
    }
    else {
      pcVar3 = s_DHTBinvalid_kernel_img_magic_00002910 + 4;
    }
    FUN_00002aa8(pcVar3);
  }
  return 0;
}



/* Function: FUN_00002a42 */

undefined4 FUN_00002a42(int param_1,undefined4 param_2)

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



/* Function: FUN_00002a5e */

undefined4 FUN_00002a5e(undefined4 *param_1)

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



/* Function: FUN_00002a8a */

void FUN_00002a8a(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  while (uVar1 < param_2) {
    FUN_00002a42(DAT_00002adc,*param_1);
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* Function: FUN_00002aa8 */

undefined4 FUN_00002aa8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_110 [252];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_0000df40(auStack_110,0xfa,param_1,&uStack_c);
  if (0 < iVar1) {
    auStack_110[iVar1] = 0;
    FUN_00002a8a(auStack_110);
  }
  return 0;
}



/* Function: FUN_00002af8 */

undefined4 FUN_00002af8(uint param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = DAT_00002b84;
  if (0x39 < param_1) {
    return 6;
  }
  *(undefined4 *)(DAT_00002b84 + 0x48) = 0xffff;
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
  uVar2 = *(undefined4 *)(DAT_00002b88 + param_1 * 4);
  *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) & 0xfffffffb;
  *param_2 = uVar2;
  return 0;
}



/* Function: FUN_00002b62 */

undefined4 FUN_00002b62(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_00002af8(uVar1,param_1 + uVar1 * 4,0);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  return 0;
}



/* Function: FUN_00002b8c */

undefined4 FUN_00002b8c(void)

{
  return DAT_00002b90;
}



/* Function: FUN_00002b94 */

void FUN_00002b94(int param_1,int param_2)

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



/* Function: FUN_00002bae */

undefined4 FUN_00002bae(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    *(undefined1 *)(param_1 + iVar1) = 0xaa;
  }
  return 1;
}



/* Function: FUN_00002bc0 */

bool FUN_00002bc0(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = param_4 <= param_2 + -0xb;
  if (bVar1) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1 = param_1 + 2;
    iVar2 = (param_2 - param_4) + -3;
    FUN_0000e4d8(param_1,iVar2,0xff);
    param_1[iVar2] = 0;
    FUN_0000e3a0(param_1 + iVar2 + 1,param_3,param_4);
  }
  return bVar1;
}



/* Function: FUN_00002c00 */

int FUN_00002c00(undefined4 param_1,int param_2,char *param_3,int param_4,int param_5)

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
      FUN_0000e3a0(param_1,pcVar2,param_4);
      iVar3 = param_4;
    }
  }
  return iVar3;
}



/* Function: FUN_00002c5a */

undefined4 FUN_00002c5a(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r12;
  undefined4 uVar5;
  undefined4 extraout_r12_00;
  
  if (param_4 <= param_2 + -0xb) {
    *param_1 = 0;
    iVar4 = (param_2 - param_4) + -3;
    param_1[1] = 2;
    pcVar1 = param_1 + 2;
    iVar2 = FUN_00002bae(pcVar1,iVar4);
    if (0 < iVar2) {
      iVar2 = 0;
      uVar5 = extraout_r12;
      do {
        if (iVar4 <= iVar2) {
          *pcVar1 = (char)uVar5;
          FUN_0000e3a0(pcVar1 + 1,param_3,param_4);
          return 1;
        }
        while (*pcVar1 == '\0') {
          iVar3 = FUN_00002bae(pcVar1,1);
          uVar5 = extraout_r12_00;
          if (iVar3 < 1) {
            return 0;
          }
        }
        pcVar1 = pcVar1 + 1;
        iVar2 = iVar2 + 1;
      } while( true );
    }
  }
  return 0;
}



/* Function: FUN_00002d08 */

void FUN_00002d08(void)

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
  
  puVar1 = DAT_000030fc;
  puVar4 = DAT_000030fc + 0xc9;
  puVar5 = DAT_000030fc + 0x10c;
  puVar6 = DAT_000030fc + 0x43;
  puVar7 = DAT_000030fc + 0x86;
  puVar8 = DAT_000030fc + 0x14f;
  puVar9 = DAT_000030fc + 0x192;
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



/* Function: FUN_00002d7c */

undefined4 FUN_00002d7c(int *param_1,int *param_2)

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



/* Function: FUN_00002db2 */

void FUN_00002db2(undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_00002dce */

void FUN_00002dce(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_00002dfa */

void FUN_00002dfa(int *param_1,int *param_2,int *param_3)

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



/* Function: FUN_00002e54 */

void FUN_00002e54(int *param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_00002db2();
  uVar1 = *(uint *)(param_2 + 4);
  param_1[1] = uVar1 + param_3;
  if (param_4 + (uint)CARRY4(uVar1,param_3) != 0) {
    iVar2 = 1;
    while (*(int *)(param_2 + iVar2 * 4 + 4) == -1) {
      param_1[iVar2 + 1] = 0;
      iVar2 = iVar2 + 1;
    }
    param_1[iVar2 + 1] = param_1[iVar2 + 1] + 1;
    if (*param_1 == iVar2) {
      *param_1 = *param_1 + 1;
    }
  }
  return;
}



/* Function: FUN_00002ea4 */

void FUN_00002ea4(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = 0;
  uVar6 = FUN_00002d7c(param_2,param_3);
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
  FUN_00002dce(param_1,(int)((ulonglong)uVar6 >> 0x20),0,0);
  return;
}



/* Function: FUN_00002f2c */

void FUN_00002f2c(int *param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  if ((uint)-param_4 < (uint)(param_3 <= uVar3)) {
    param_1[1] = uVar3 - param_3;
    iVar2 = 1;
    do {
      iVar1 = iVar2 + 1;
      param_1[iVar2 + 1] = param_2[iVar2 + 1];
      iVar2 = iVar1;
    } while (iVar1 < 0x42);
  }
  else {
    if (*param_2 == 1) {
      FUN_00002dce();
      return;
    }
    param_1[1] = uVar3 - param_3;
    for (iVar2 = 1; param_2[iVar2 + 1] == 0; iVar2 = iVar2 + 1) {
      param_1[iVar2 + 1] = -1;
    }
    iVar1 = param_2[iVar2 + 1];
    param_1[iVar2 + 1] = iVar1 + -1;
    iVar2 = *param_1;
    if (iVar1 + -1 == 0) {
      iVar2 = iVar2 + -1;
      *param_1 = iVar2;
    }
    for (; iVar2 < 0x42; iVar2 = iVar2 + 1) {
      param_1[iVar2 + 1] = 0;
    }
  }
  return;
}



/* Function: FUN_00002fb4 */

void FUN_00002fb4(int *param_1,int *param_2,uint param_3,int param_4)

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



/* Function: FUN_0000301c */

void FUN_0000301c(int *param_1,int *param_2,int *param_3)

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
  FUN_00002fb4(param_1,param_2,param_3[1],0);
  return;
}



/* Function: FUN_000030d0 */

void FUN_000030d0(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  *param_1 = *param_2;
  iVar2 = *param_2;
  if (*param_2 == 1) {
    iVar2 = FUN_0000dc10(param_2[1],0);
    param_1[1] = iVar2;
  }
  else {
    while (-1 < iVar2 + -1) {
      iVar3 = param_2[iVar2];
      iVar1 = FUN_0000dc10(iVar3,iVar1,param_3,param_4);
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



/* Function: FUN_00003244 */

void FUN_00003244(int *param_1,undefined4 param_2,int *param_3)

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
  
  FUN_00002db2();
  while( true ) {
    iVar2 = FUN_00002d7c(param_1,param_3);
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
    uVar8 = FUN_0000dc10(uVar6,uVar3,uVar5 + 1,0xfffffffe < uVar5);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_00002dce(auStack_12c,uVar4,(int)uVar8,uVar4);
    FUN_0000301c(&local_238,param_3,auStack_12c);
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
    FUN_00002ea4(param_1,param_1,&local_238);
  }
  FUN_00002ea4(param_1,param_1,param_3);
  return;
}



/* Function: FUN_00003312 */

undefined8 FUN_00003312(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int iVar3;
  
  uVar1 = 0;
  uVar2 = 0;
  iVar3 = *param_1;
  if (iVar3 == 1) {
    FUN_0000dc10(param_1[1],0,param_3);
    uVar1 = extraout_r2_00;
    uVar2 = extraout_r3_00;
  }
  else {
    while (-1 < iVar3 + -1) {
      FUN_0000dc10(param_1[iVar3],uVar1,param_3,param_4);
      uVar1 = extraout_r2;
      uVar2 = extraout_r3;
      iVar3 = iVar3 + -1;
    }
  }
  return CONCAT44(uVar2,uVar1);
}



/* Function: FUN_00003360 */

void FUN_00003360(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_0000e3a0(param_1 + 1,param_2,param_3 << 2);
  for (iVar1 = param_3; iVar1 < 0x42; iVar1 = iVar1 + 1) {
    param_1[iVar1 + 1] = 0;
  }
  *param_1 = param_3;
  return;
}



/* Function: FUN_00003384 */

void FUN_00003384(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_00002b94(param_2,param_3);
  FUN_00003360(param_1,param_2,param_3 >> 2);
  FUN_00002b94(param_2,param_3);
  return;
}



/* Function: FUN_000033aa */

void FUN_000033aa(undefined1 *param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_248 [67];
  undefined1 auStack_13c [268];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_30 = DAT_00003798;
  uStack_2c = DAT_0000379c;
  uStack_28 = DAT_000037a0;
  uStack_24 = DAT_000037a4;
  iVar2 = param_2 + -1;
  if ((*param_3 == 1) && (param_3[1] == 0)) {
    *param_1 = 0x30;
    param_1[1] = 0;
  }
  else {
    param_1[iVar2] = 0;
    FUN_00002db2(local_248,param_3);
    while (local_248[local_248[0]] != 0) {
      iVar1 = FUN_00003312(local_248,local_248[0],param_4,0);
      iVar2 = iVar2 + -1;
      param_1[iVar2] = *(undefined1 *)((int)&local_30 + iVar1);
      FUN_000030d0(auStack_13c,local_248,param_4,0);
      FUN_00002db2(local_248,auStack_13c);
    }
    if (0 < iVar2) {
      iVar1 = 0;
      for (; iVar2 < param_2; iVar2 = iVar2 + 1) {
        param_1[iVar1] = param_1[iVar2];
        iVar1 = iVar1 + 1;
      }
    }
  }
  return;
}



/* Function: FUN_00003434 */

void FUN_00003434(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

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
  FUN_00002db2(param_1,param_2);
  for (uVar1 = iVar3 - 2; -1 < (int)uVar1; uVar1 = uVar1 - 1) {
    FUN_00002fb4(local_240,param_1,param_1[*param_1],0);
    FUN_00003244(local_240,local_240,param_4);
    for (iVar3 = 1; iVar2 = local_240[0], iVar3 < *param_1; iVar3 = iVar3 + 1) {
      for (; 0 < iVar2; iVar2 = iVar2 + -1) {
        local_240[iVar2 + 1] = local_240[iVar2];
      }
      local_240[1] = 0;
      local_240[0] = local_240[0] + 1;
      FUN_00002fb4(auStack_134,param_1,param_1[*param_1 - iVar3],0);
      FUN_00002dfa(local_240,local_240,auStack_134);
      FUN_00003244(local_240,local_240,param_4);
    }
    FUN_00002db2(param_1,local_240);
    if (((uint)param_3[((int)uVar1 >> 5) + 1] >> (uVar1 & 0x1f) & 1) != 0) {
      FUN_00002fb4(local_240,param_2,param_1[*param_1],0);
      FUN_00003244(local_240,local_240,param_4);
      for (iVar3 = 1; iVar2 = local_240[0], iVar3 < *param_1; iVar3 = iVar3 + 1) {
        for (; 0 < iVar2; iVar2 = iVar2 + -1) {
          local_240[iVar2 + 1] = local_240[iVar2];
        }
        local_240[1] = 0;
        local_240[0] = local_240[0] + 1;
        FUN_00002fb4(auStack_134,param_2,param_1[*param_1 - iVar3],0);
        FUN_00002dfa(local_240,local_240,auStack_134);
        FUN_00003244(local_240,local_240,param_4);
      }
      FUN_00002db2(param_1,local_240);
    }
  }
  return;
}



/* Function: FUN_0000357c */

undefined4 FUN_0000357c(void)

{
  int iVar1;
  
  iVar1 = FUN_00002d7c(DAT_000037a8 + -0x10c);
  if (-1 < iVar1) {
    return 0xffffffff;
  }
  FUN_00003434(DAT_000037a8 + -0x218);
  return 1;
}



/* Function: FUN_000035a8 */

undefined4 FUN_000035a8(void)

{
  int iVar1;
  
  iVar1 = FUN_00002d7c(DAT_000037a8 + -0x218);
  if (-1 < iVar1) {
    return 0xffffffff;
  }
  FUN_00003434(DAT_000037a8 + -0x10c);
  return 1;
}



/* Function: FUN_000035d4 */

undefined4 FUN_000035d4(void)

{
  int iVar1;
  
  iVar1 = FUN_00002d7c(DAT_000037a8 + -0x10c);
  if (-1 < iVar1) {
    return 0xffffffff;
  }
  FUN_00003434(DAT_000037a8 + -0x218);
  return 1;
}



/* Function: FUN_0000362c */

void FUN_0000362c(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 uStack_11c;
  undefined1 auStack_11b [259];
  
  param_3 = param_3 >> 3;
  FUN_00002d08();
  if (param_1 != 0) {
    FUN_00003384(DAT_000037ac,param_1,4);
  }
  if (param_2 != 0) {
    FUN_00003384(DAT_000037a8,param_2,param_3);
  }
  FUN_00003384(DAT_000037b0,param_4,param_3);
  FUN_000035a8();
  FUN_0000e474(&uStack_11c,DAT_000037b4 + 1,*DAT_000037b4 << 2);
  FUN_00002b94(&uStack_11c,param_3);
  FUN_00002c00(param_5,param_3,auStack_11b,param_3 + -1,param_3);
  return;
}



/* Function: FUN_000039cc */

void FUN_000039cc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    *(undefined4 *)(param_1 + iVar2 + 0x20) = 0;
  } while (iVar1 < 0x11);
  *(undefined4 *)(param_1 + 0x60) = DAT_00003c94;
  *(undefined4 *)(param_1 + 100) = DAT_00003c98;
  *(undefined4 *)(param_1 + 0x68) = DAT_00003c9c;
  *(undefined4 *)(param_1 + 0x6c) = DAT_00003ca0;
  *(undefined4 *)(param_1 + 0x70) = DAT_00003ca4;
  *(undefined4 *)(param_1 + 0x74) = DAT_00003ca8;
  *(undefined4 *)(param_1 + 0x78) = DAT_00003cac;
  *(undefined4 *)(param_1 + 0x7c) = DAT_00003cb0;
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1;
    iVar1 = iVar1 + 1;
    *(undefined1 *)(iVar2 + 0x80) = 0;
  } while (iVar1 < 8);
  return;
}



/* Function: FUN_00003a0c */

void FUN_00003a0c(int param_1,byte *param_2,uint param_3)

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
          FUN_0000e474(local_250,DAT_00003cb4,0x100);
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



/* Function: FUN_00003c0a */

void FUN_00003c0a(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined1 auStack_5c [72];
  
  FUN_0000e52c(auStack_5c,0x44);
  local_60 = *(undefined4 *)(DAT_00003cb4 + -4);
  if (param_3 != 0) {
    FUN_00003a0c(param_1,param_2,param_3);
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
  FUN_00003a0c(param_1,&local_60);
  iVar2 = 0;
  do {
    *(char *)(param_1 + iVar2) =
         (char)(*(uint *)((iVar2 / 4) * 4 + param_1 + 0x60) >> ((iVar2 % 4) * -8 + 0x18U & 0xff));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  return;
}



/* Function: FUN_00003cb8 */

bool FUN_00003cb8(void)

{
  return (*DAT_00003f84 & 1) != 0;
}



/* Function: FUN_00003cc6 */

undefined4 FUN_00003cc6(void)

{
  int in_r3;
  int local_10;
  
  local_10 = in_r3;
  FUN_00002af8(1,&local_10);
  FUN_00002b62(DAT_00003f88);
  if (local_10 << 0x1e < 0) {
    if (*DAT_00003f88 >> 0x16 != 0x3ff) {
      return 0;
    }
    if ((~(byte)DAT_00003f88[1] & 0x3f) != 0) {
      return 0;
    }
  }
  else if ((*DAT_00003f88 & 0x3fffff) >> 6 != 0xffff) {
    return 0;
  }
  return 1;
}



/* Function: FUN_00003d0c */

void FUN_00003d0c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a0 [140];
  
  iVar2 = 0;
  FUN_000039cc(auStack_a0);
  for (; iVar1 = param_1 + iVar2 * 0x40, 0x3f < param_2; param_2 = param_2 + -0x40) {
    FUN_00003a0c(auStack_a0,iVar1,0x40);
    iVar2 = iVar2 + 1;
  }
  FUN_00003c0a(auStack_a0,iVar1,param_2);
  FUN_0000e3a0(param_3,auStack_a0,0x20);
  return;
}



/* Function: FUN_00003d4a */

int FUN_00003d4a(int param_1)

{
  return param_1 + 0x200 + *(int *)(param_1 + 0x30);
}



/* Function: FUN_00003d62 */

int FUN_00003d62(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_r2;
  
  iVar1 = FUN_00003d4a(param_1,param_2,param_1);
  return *(int *)(iVar1 + 0x28) + extraout_r2;
}



/* Function: FUN_00003d70 */

void FUN_00003d70(void)

{
  int iVar1;
  undefined4 extraout_r3;
  
  iVar1 = FUN_00003d62();
  thunk_FUN_0000e3a0(extraout_r3,iVar1 + 300,0x20);
  return;
}



/* Function: FUN_00003d88 */

bool FUN_00003d88(int param_1)

{
  if (param_1 != 0) {
    FUN_00002af8(2,param_1,1);
  }
  return param_1 != 0;
}



/* Function: FUN_00003d9e */

undefined4 FUN_00003d9e(undefined4 param_1,undefined4 param_2,byte *param_3)

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
  FUN_0000e52c(auStack_154,0x100);
  FUN_0000e52c(auStack_54,0x20);
  pbVar5 = param_3 + 0x10c;
  if (bVar1 == 0) {
    FUN_00003d0c(param_3 + 4,(*(uint *)(param_3 + 4) >> 3) + 8,auStack_54);
    iVar3 = FUN_0000e308(param_2,pbVar5,0x20);
    if ((iVar3 != 0) || (iVar3 = FUN_0000e308(local_30,auStack_54,0x20), iVar3 != 0)) {
LAB_00003e02:
      pcVar2 = s_compare_hash_fail_00003fa0;
      goto LAB_00003e96;
    }
    iVar3 = FUN_0000362c(param_3 + 8,param_3 + 0xc,*(undefined4 *)(param_3 + 4),param_3 + 0x134,
                         auStack_154);
    if (((0x20 << (uint)*param_3) + 8 != iVar3) ||
       (iVar3 = FUN_0000e308(pbVar5,auStack_154), iVar3 != 0)) {
      pcVar2 = s_content_cert_hash_verify_fail_00003fe8;
      goto LAB_00003e96;
    }
    FUN_00003d88(&local_34);
    uVar4 = *(uint *)(param_3 + 0x130);
  }
  else {
    if (bVar1 != 1) {
      pcVar2 = s_cert_type_invalid_00003f8c;
      goto LAB_00003e96;
    }
    FUN_00003d0c(param_3 + 4,(*(uint *)(param_3 + 4) >> 3) + 8,auStack_54);
    iVar3 = FUN_0000e308(param_2,pbVar5,0x20);
    if ((iVar3 != 0) || (iVar3 = FUN_0000e308(local_30,auStack_54,0x20), iVar3 != 0))
    goto LAB_00003e02;
    iVar3 = FUN_0000362c(param_3 + 8,param_3 + 0xc,*(undefined4 *)(param_3 + 4),param_3 + 0x154,
                         auStack_154);
    if (((0x20 << (uint)*param_3) + 8 != iVar3) ||
       (iVar3 = FUN_0000e308(pbVar5,auStack_154), iVar3 != 0)) {
      pcVar2 = s_key_cert_hash_verify_fail_00003fb4;
      goto LAB_00003e96;
    }
    FUN_00003d88(&local_34);
    uVar4 = *(uint *)(param_3 + 0x150);
  }
  if (local_34 <= uVar4) {
    return 1;
  }
  pcVar2 = s_antiroll_back_error_00003fd0;
LAB_00003e96:
  FUN_00002aa8(pcVar2);
  return 0;
}



/* Function: FUN_00003eb6 */

undefined4 FUN_00003eb6(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [32];
  
  uVar3 = 0;
  FUN_0000e52c(auStack_58,0x20);
  FUN_00003d70(param_1,auStack_58);
  piVar2 = (int *)(DAT_00003f88 + -8);
  iVar1 = *(int *)(param_2 + 0x30) + param_2 + 0x200;
  *piVar2 = iVar1;
  FUN_0000e52c(auStack_38,0x20);
  if (*(int *)(iVar1 + 0x20) == 0 && *(int *)(iVar1 + 0x24) == 0) {
    FUN_00002aa8(&DAT_00004008);
  }
  else {
    FUN_00003d0c(param_2 + 0x200,*(undefined4 *)(param_2 + 0x30),auStack_38);
    uVar3 = FUN_00003d9e(auStack_58,auStack_38,*(int *)(*piVar2 + 0x28) + param_2);
  }
  return uVar3;
}



/* Function: FUN_00003f1c */

undefined4 FUN_00003f1c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [36];
  
  uVar3 = 0;
  FUN_0000e52c(auStack_60,0x20);
  FUN_00003d70(param_1,auStack_60);
  iVar1 = DAT_00003f88;
  iVar2 = *(int *)(param_2 + 0x30) + param_2 + 0x200;
  *(int *)(DAT_00003f88 + -4) = iVar2;
  FUN_0000e52c(auStack_40,0x20);
  if (*(int *)(iVar2 + 0x20) == 0 && *(int *)(iVar2 + 0x24) == 0) {
    FUN_00002aa8(&DAT_00004008);
  }
  else {
    FUN_00003d0c(param_2 + 0x200,param_3,auStack_40);
    uVar3 = FUN_00003d9e(auStack_60,auStack_40,*(int *)(*(int *)(iVar1 + -4) + 0x28) + param_2);
  }
  return uVar3;
}



/* Function: FUN_00004026 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00004026(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = _DAT_000040b4;
  *(undefined4 *)(_DAT_000040b4 + 0x28) = param_1;
  iVar2 = FUN_00004aec();
  iVar3 = iVar2;
  do {
    uVar4 = *(uint *)(iVar1 + 0x2c);
    if (3 < (uint)(iVar3 - iVar2)) {
      FUN_00002aa8(s___adi_reg_read_timeout__000040b6 + 2);
    }
    iVar3 = FUN_00004aec();
  } while ((int)uVar4 < 0);
  return uVar4 & 0xffff;
}



/* Function: FUN_0000404c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000404c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 1000;
  iVar2 = FUN_00004aec();
  iVar1 = _DAT_000040b4;
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
      FUN_00002aa8(s_adi_reg_write_timeout__000040d0);
    }
    iVar3 = FUN_00004aec();
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0xffffffff;
}



/* Function: FUN_0000408e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000408e(void)

{
  int iVar1;
  
  *DAT_000040e8 = 0x10000;
  iVar1 = _DAT_000040b4;
  *(undefined4 *)(_DAT_000040b4 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 0x80000000;
  *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xbfffffff;
  return;
}



/* Function: FUN_000040fe */

void FUN_000040fe(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_000044e8;
  *(undefined1 *)(DAT_000044e8 + 0xe) = 5;
  *(undefined2 *)(iVar1 + 6) = 0x21;
  *(undefined2 *)(iVar1 + 8) = 0x40;
  *(undefined1 *)(iVar1 + 0x62) = 0x17;
  *(undefined2 *)(iVar1 + 100) = 0x108;
  bVar2 = *(int *)(DAT_000044ec + 8) == 0;
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



/* Function: FUN_00004180 */

void FUN_00004180(int param_1,int param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = DAT_000044f0;
  if (param_1 == 0) {
    puVar2 = (undefined4 *)(DAT_000044f0 + 8);
    iVar3 = DAT_000044f0 + 0x20;
    *puVar2 = param_4;
    *(undefined2 *)(iVar1 + 0xc) = param_3;
    *(undefined2 *)(iVar1 + 0xe) = 0x20;
    *(char *)(iVar1 + 0x10) = (char)param_2;
    *(undefined1 *)(iVar1 + 0x11) = 1;
    *(undefined1 *)(iVar1 + 0x12) = 0;
    *(undefined1 *)(iVar1 + 0x13) = 1;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    FUN_0000e3a0(iVar3,puVar2,4);
    *(undefined1 *)(iVar1 + 0x24) = *(undefined1 *)(iVar1 + 0xe);
    *(undefined1 *)(iVar1 + 0x25) = *(undefined1 *)(iVar1 + 0xf);
    *(undefined1 *)(iVar1 + 0x26) = *(undefined1 *)(iVar1 + 0xc);
    *(undefined1 *)(iVar1 + 0x27) = *(undefined1 *)(iVar1 + 0xd);
    *(undefined1 *)(iVar1 + 0x28) = 5;
  }
  else {
    puVar2 = (undefined4 *)(DAT_000044f0 + 0x14);
    *puVar2 = param_4;
    *(undefined2 *)(iVar1 + 0x18) = param_3;
    *(undefined2 *)(iVar1 + 0x1a) = 0x20;
    *(char *)(iVar1 + 0x1c) = (char)param_2;
    *(undefined1 *)(iVar1 + 0x1d) = 1;
    *(undefined1 *)(iVar1 + 0x1e) = 0;
    *(undefined1 *)(iVar1 + 0x1f) = 1;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    FUN_0000e3a0(iVar1 + 0x30,puVar2,4);
    *(undefined1 *)(iVar1 + 0x34) = *(undefined1 *)(iVar1 + 0x1a);
    *(undefined1 *)(iVar1 + 0x35) = *(undefined1 *)(iVar1 + 0x1b);
    *(undefined1 *)(iVar1 + 0x36) = *(undefined1 *)(iVar1 + 0x18);
    iVar3 = DAT_000044f4;
    *(undefined1 *)(iVar1 + 0x37) = *(undefined1 *)(iVar1 + 0x19);
    *(undefined1 *)(iVar1 + 0x38) = 5;
    iVar3 = param_2 * 0x20 + 0x1e0 + iVar3;
    *(uint *)(iVar3 + 0xbe8) = *(uint *)(iVar3 + 0xbe8) | 0x14;
    *(int *)(iVar3 + 0xbf4) = iVar1 + 0x30;
    *(uint *)(iVar3 + 0xbe4) = *(uint *)(iVar3 + 0xbe4) | 1;
  }
  return;
}



/* Function: FUN_00004294 */

void FUN_00004294(void)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint local_18;
  
  iVar5 = DAT_000044ec;
  puVar1 = DAT_000044e8;
  local_18 = 0;
  if ((DAT_000044e8[0x12] & 1) != 0) {
    iVar6 = DAT_000044ec + 0x14;
    do {
      *(undefined1 *)(iVar6 + local_18) = puVar1[0x20];
      iVar3 = DAT_000046a4;
      iVar2 = DAT_000044ec;
      local_18 = local_18 + 1;
    } while (local_18 < 8);
    puVar4 = (uint *)(DAT_000044ec + 0x14);
    puVar7 = (uint *)(iVar5 + 0x18);
    uVar9 = (*puVar4 & 0x7f) >> 5;
    if (uVar9 == 0) {
      switch((*puVar4 & 0xffff) >> 8) {
      case 0:
        puVar1[0x12] = puVar1[0x12] | 0x40;
        uVar9 = *puVar7;
        uVar8 = *puVar7;
        for (local_18 = 0; local_18 < ((uVar9 & 0xffffff) >> 0x10 | (uVar8 >> 0x18) << 8);
            local_18 = local_18 + 1) {
          puVar1[0x20] = *(undefined1 *)(iVar2 + local_18);
        }
        goto LAB_0000433c;
      case 1:
        puVar1[0x12] = puVar1[0x12] | 0x48;
        if (((*puVar4 & 0x1f) == 2) && ((*puVar7 & 0x7f) != 0)) {
          if ((int)(*puVar7 << 0x18) < 0) {
            puVar1[0x152] = puVar1[0x152] | 0x40;
            puVar1[0x152] = puVar1[0x152] | 8;
            return;
          }
          puVar1[0x166] = puVar1[0x166] | 0x80;
          puVar1[0x166] = puVar1[0x166] | 0x10;
          return;
        }
        break;
      default:
        puVar1[0x12] = puVar1[0x12] | 0x48;
        do {
        } while ((*(ushort *)(puVar1 + 2) & 1) == 0);
        return;
      case 5:
        puVar1[0x12] = puVar1[0x12] | 0x48;
        do {
        } while ((*(ushort *)(puVar1 + 2) & 1) == 0);
        *puVar1 = (char)(*puVar4 >> 0x10);
        return;
      case 6:
        *(byte *)(DAT_000046a4 + 0x12) = *(byte *)(DAT_000046a4 + 0x12) | 0x40;
        uVar9 = (*puVar7 & 0xffffff) >> 0x10 | (*puVar7 >> 0x18) << 8;
        if (*puVar4 >> 0x18 == 1) {
          iVar5 = FUN_00004974();
          if (0x11 < uVar9) {
            uVar9 = 0x12;
          }
        }
        else if (*puVar4 >> 0x18 == 2) {
          iVar5 = FUN_00004978();
          if (*(int *)(DAT_0000469c + 8) != 0) {
            *(undefined1 *)(iVar5 + 0x1d) = 0x40;
            *(undefined1 *)(iVar5 + 0x16) = 0x40;
            *(undefined1 *)(iVar5 + 0x1e) = 0;
            *(undefined1 *)(iVar5 + 0x17) = 0;
          }
          if (0x1f < uVar9) {
            uVar9 = 0x20;
          }
        }
        else {
          iVar5 = FUN_0000497e();
          if (9 < uVar9) {
            uVar9 = 10;
          }
        }
        for (local_18 = 0; local_18 < uVar9; local_18 = local_18 + 1) {
          *(undefined1 *)(iVar3 + 0x20) = *(undefined1 *)(iVar5 + local_18);
        }
        *(byte *)(iVar3 + 0x12) = *(byte *)(iVar3 + 0x12) | 10;
        return;
      case 9:
        puVar1[0x12] = puVar1[0x12] | 0x48;
        iVar5 = DAT_000044ec;
        do {
        } while ((*(ushort *)(puVar1 + 2) & 1) == 0);
        if (*(int *)(DAT_000044ec + 0xc) != 0) {
          return;
        }
        FUN_000040fe();
        FUN_00004180(1,6,0x400,DAT_000044f8);
        *(undefined4 *)(iVar5 + 0xc) = 1;
      }
      return;
    }
    if (uVar9 == 1) {
      uVar9 = *puVar4;
      puVar1[0x12] = puVar1[0x12] | 0x48;
      if ((uVar9 & 0x1f) == 1) {
        do {
        } while ((*(ushort *)(puVar1 + 2) & 1) == 0);
        return;
      }
      do {
      } while ((*(ushort *)(puVar1 + 2) & 1) == 0);
      return;
    }
    if (uVar9 == 2) {
      puVar1[0x12] = puVar1[0x12] | 0x40;
      uVar9 = *puVar7;
      uVar8 = *puVar7;
      for (local_18 = 0; local_18 < ((uVar9 & 0xffffff) >> 0x10 | (uVar8 >> 0x18) << 8);
          local_18 = local_18 + 1) {
        puVar1[0x20] = *(undefined1 *)(iVar2 + local_18);
      }
LAB_0000433c:
      puVar1[0x12] = puVar1[0x12] | 10;
      return;
    }
    puVar1[0x12] = puVar1[0x12] | 0x48;
    do {
    } while ((*(ushort *)(puVar1 + 2) & 1) == 0);
  }
  return;
}



/* Function: FUN_0000446c */

void FUN_0000446c(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_1c;
  
  iVar4 = DAT_000044ec;
  iVar2 = DAT_000044e8;
  if ((int)((uint)*(byte *)(DAT_000044e8 + 10) << 0x1d) < 0) {
    if ((int)((uint)*(byte *)(DAT_000044e8 + 1) << 0x1b) < 0) {
      *(undefined4 *)(DAT_000044ec + 8) = 0;
    }
    else {
      *(undefined4 *)(DAT_000044ec + 8) = 1;
    }
    *(undefined4 *)(iVar4 + 0xc) = 0;
  }
  iVar4 = *DAT_000044fc;
  if ((*(ushort *)(iVar2 + 2) & 1) != 0) {
    *(undefined1 *)(iVar2 + 0xe) = 0;
    FUN_00004294();
  }
  iVar6 = DAT_00004698;
  iVar2 = DAT_00004694;
  if (iVar4 << 0xd < 0) {
    local_1c = 0;
    *(uint *)(DAT_00004698 + 0xbe8) = *(uint *)(DAT_00004698 + 0xbe8) | 0x14000000;
    iVar4 = DAT_00004690;
    uVar5 = 0x400 - (*(uint *)(iVar6 + 0xbf0) >> 0x10);
    iVar6 = DAT_00004690 + -0x400;
    *(uint *)(DAT_0000469c + 4) = uVar5;
    for (; local_1c < uVar5; local_1c = local_1c + 1) {
      uVar1 = *(undefined1 *)(iVar6 + local_1c);
      iVar3 = *(int *)(iVar4 + 4);
      *(int *)(iVar4 + 4) = iVar3 + 1;
      *(undefined1 *)(iVar4 + iVar3 + 8) = uVar1;
      if (0x3ff < *(uint *)(iVar4 + 4)) {
        *(undefined4 *)(iVar4 + 4) = 0;
      }
    }
    *(uint *)(iVar2 + 0xe88) = *(uint *)(iVar2 + 0xe88) | 0x14;
    *(undefined4 *)(iVar2 + 0xe94) = DAT_000046a0;
    *(uint *)(iVar2 + 0xe84) = *(uint *)(iVar2 + 0xe84) | 1;
    return;
  }
  return;
}



/* Function: FUN_000044c6 */

undefined8 FUN_000044c6(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int local_30;
  uint local_28;
  
  local_28 = 0;
  bVar1 = true;
  iVar4 = FUN_00004aec();
  puVar3 = DAT_00004500;
  iVar2 = DAT_000044ec;
  local_30 = param_2;
  do {
    FUN_0000446c();
    if (*puVar3 != puVar3[1]) {
      local_28 = (uint)*(byte *)((int)puVar3 + *puVar3 + 8);
      *puVar3 = *puVar3 + 1;
      if (0x3ff < *puVar3) {
        *puVar3 = 0;
      }
      bVar1 = false;
    }
    if (*(int *)(iVar2 + 0x10) != 0) {
      local_30 = FUN_00004aec();
      if (*(uint *)(iVar2 + 0x10) < (uint)(local_30 - iVar4)) {
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = 1;
        }
        break;
      }
    }
  } while (bVar1);
  return CONCAT44(local_30,local_28);
}



/* Function: FUN_0000455a */

undefined1 FUN_0000455a(undefined4 *param_1)

{
  undefined1 uVar1;
  uint *puVar2;
  
  uVar1 = 0;
  *param_1 = 0;
  FUN_0000446c();
  puVar2 = DAT_00004690;
  if (*DAT_00004690 != DAT_00004690[1]) {
    uVar1 = *(undefined1 *)((int)DAT_00004690 + *DAT_00004690 + 8);
    *DAT_00004690 = *DAT_00004690 + 1;
    if (0x3ff < *puVar2) {
      *puVar2 = 0;
    }
    *param_1 = 1;
  }
  return uVar1;
}



/* Function: FUN_000046ac */

undefined4 FUN_000046ac(undefined1 *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint extraout_r3;
  uint uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  
  uVar1 = FUN_000049c6(param_1,param_2 + -2);
  param_1[param_2 + -2] = (char)((ushort)uVar1 >> 8);
  param_1[param_2 + -1] = (char)uVar1;
  param_1[param_2] = 0x7e;
  uVar3 = extraout_r3;
  for (iVar2 = param_2 + 2; 0 < iVar2; iVar2 = iVar2 + -1) {
    uVar3 = (uint)(byte)param_1[iVar2 + -1];
    param_1[iVar2] = param_1[iVar2 + -1];
  }
  *param_1 = 0x7e;
  FUN_00004180(0,5,param_2 + 2,param_1,uVar3,unaff_r4,unaff_r5,unaff_lr);
  iVar2 = DAT_000044f4;
  *(uint *)(DAT_000044f4 + 0xc88) = *(uint *)(DAT_000044f4 + 0xc88) | 4;
  *(int *)(iVar2 + 0xc94) = DAT_000044f0 + 0x20;
  *(uint *)(iVar2 + 0xc84) = *(uint *)(iVar2 + 0xc84) | 1;
  do {
  } while (-1 < *(int *)(iVar2 + 0xc88) << 0xd);
  *(uint *)(iVar2 + 0xc88) = *(uint *)(iVar2 + 0xc88) | 0x4000000;
  return 0;
}



/* Function: FUN_000046ea */

void FUN_000046ea(ushort param_1)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)*DAT_0000495c;
  *puVar1 = param_1 << 8 | param_1 >> 8;
  puVar1[1] = 0;
  FUN_000046ac(puVar1,6);
  return;
}



/* Function: FUN_000046fc */

void FUN_000046fc(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_10;
  
  iVar1 = DAT_00004960;
  local_10 = 0;
LAB_00004766:
  do {
    if (*(int *)(iVar1 + 4) == 3) {
      return;
    }
    do {
      while( true ) {
        uVar2 = FUN_000044c6(&local_10);
        iVar3 = *(int *)(iVar1 + 4);
        if (iVar3 != 0) break;
        if (uVar2 == 0x7e) {
          *(undefined4 *)(iVar1 + 4) = 1;
        }
      }
      if (iVar3 != 1) {
        if (iVar3 != 2) goto LAB_00004766;
        if (uVar2 == 0x7e) {
          *(undefined4 *)(iVar1 + 4) = 3;
          return;
        }
        if (uVar2 == 0x7d) {
          uVar2 = FUN_000044c6(&local_10);
          uVar2 = uVar2 ^ 0x20;
        }
        goto LAB_00004756;
      }
    } while (uVar2 == 0x7e);
    if (uVar2 == 0x7d) {
      uVar2 = FUN_000044c6(&local_10);
      uVar2 = uVar2 ^ 0x20;
    }
    *(undefined4 *)(iVar1 + 4) = 2;
LAB_00004756:
    **(undefined1 **)(iVar1 + 0x18) = (char)uVar2;
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  } while( true );
}



/* Function: FUN_0000476e */

undefined4 FUN_0000476e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00004960;
  *(undefined4 *)(DAT_00004960 + 0x18) = *(undefined4 *)(DAT_00004960 + 0x14);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  FUN_000046fc();
  iVar2 = FUN_000049c6(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x10));
  if (iVar2 != 0) {
    return 0x8b;
  }
  *param_1 = *(undefined4 *)(iVar1 + 0x14);
  *param_2 = *(undefined4 *)(iVar1 + 0x10);
  return 0x8f;
}



/* Function: FUN_0000479e */

/* WARNING: Removing unreachable block (ram,0x000047d4) */

void FUN_0000479e(undefined4 param_1,undefined4 param_2,undefined4 param_3,ushort *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  ushort *local_14;
  
  iVar1 = DAT_00004964;
  local_18 = param_3;
  local_14 = param_4;
  do {
    while (iVar2 = FUN_0000476e(&local_14,&local_18), iVar2 != 0x8f) {
      FUN_000046ea();
      FUN_0000498c(DAT_00004960 + 0x20,0,0x18);
    }
    (**(code **)(iVar1 + ((*local_14 & 0xff) << 8 | (uint)(*local_14 >> 8)) * 4))(local_14,local_18)
    ;
  } while( true );
}



/* Function: FUN_000047d6 */

int FUN_000047d6(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int local_10;
  
  iVar3 = DAT_00004960;
  piVar1 = DAT_0000495c;
  local_10 = 0;
  *DAT_0000495c = DAT_00004960 + 0x38;
  piVar1[1] = iVar3 + 0x138;
  *(undefined4 *)(iVar3 + 0xc) = 0x400;
  *(int *)(iVar3 + 0x14) = iVar3 + 0x138;
  puVar2 = DAT_00004968;
  *DAT_00004968 = 0;
  puVar2[1] = 0;
  while ((iVar3 = FUN_000044c6(&local_10), iVar3 != 0x7e || (local_10 != 0))) {
    if (local_10 == 1) {
      return 1;
    }
  }
  puVar4 = (undefined2 *)*piVar1;
  *puVar4 = 0x8100;
  puVar4[1] = 0x600;
  thunk_FUN_0000e3a0(puVar4 + 2,DAT_00004964 + -8);
  FUN_000046ac(*piVar1,0xc);
  FUN_0000479e();
  return local_10;
}



/* Function: FUN_00004838 */

void FUN_00004838(void)

{
  int iVar1;
  
  iVar1 = DAT_00004960;
  if (*(int *)(DAT_00004960 + 0x24) != 1) {
    FUN_000046ea(0x80);
    *(undefined4 *)(iVar1 + 0x24) = 1;
  }
  FUN_0000498c(DAT_00004960 + 0x20,0,0x18);
  return;
}



/* Function: FUN_000048f8 */

void FUN_000048f8(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined1 uVar3;
  
  puVar2 = DAT_0000496c;
  *DAT_0000496c = *DAT_0000496c | 0x10;
  iVar1 = DAT_00004970;
  *(uint *)(DAT_00004970 + 0x24) = *(uint *)(DAT_00004970 + 0x24) | 0x1400000;
  *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) | 0x60000000;
  puVar2[1] = puVar2[1] | 0x70;
  FUN_00004b46(10);
  puVar2[1] = puVar2[1] & 0xffffff8f;
  DAT_00006008 = &DAT_00008a00;
  FUN_00004b46(0x1e);
  iVar1 = DAT_000044e8;
  if (param_1 == 0) {
    uVar3 = 0x40;
  }
  else {
    uVar3 = 0x60;
  }
  *(undefined1 *)(DAT_000044e8 + 1) = uVar3;
  *(undefined1 *)(iVar1 + 0xb) = 0xff;
  return;
}



/* Function: FUN_00004948 */

void FUN_00004948(void)

{
  int iVar1;
  
  FUN_000048f8(1);
  iVar1 = FUN_000047d6();
  if (iVar1 != 1) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}



/* Function: FUN_00004974 */

undefined4 FUN_00004974(void)

{
  return DAT_00004984;
}



/* Function: FUN_00004978 */

int FUN_00004978(void)

{
  return DAT_00004984 + 0x14;
}



/* Function: FUN_0000497e */

int FUN_0000497e(void)

{
  return DAT_00004984 + 0x34;
}



/* Function: thunk_FUN_0000e3a0 */

undefined8 thunk_FUN_0000e3a0(uint *param_1,uint *param_2,uint param_3,uint param_4)

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
      if ((uVar1 & 3) != 0) {
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



/* Function: FUN_0000498c */

void FUN_0000498c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0000e4d8(param_1,param_3,param_2);
  return;
}



/* Function: FUN_000049c6 */

void FUN_000049c6(byte *param_1,int param_2)

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



/* Function: FUN_00004a7c */

uint FUN_00004a7c(void)

{
  uint uVar1;
  
  uVar1 = FUN_00004026(DAT_00004ac8 + -0xc);
  return (uVar1 & 0x1ff) >> 4;
}



/* Function: FUN_00004a8c */

void FUN_00004a8c(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = DAT_00004ac8 + -0xc;
  uVar1 = FUN_00004026(iVar2);
  FUN_0000404c(iVar2,uVar1 & 0xfffffe0f);
  uVar1 = FUN_00004026(iVar2);
  FUN_0000404c(iVar2,uVar1 | (param_1 & 0x1f) << 4);
  return;
}



/* Function: FUN_00004aec */

undefined4 FUN_00004aec(void)

{
  return *(undefined4 *)(DAT_00004cc0 + 0xc);
}



/* Function: FUN_00004af2 */

void FUN_00004af2(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = DAT_00004cc4;
  uVar1 = FUN_00004026(DAT_00004cc4);
  FUN_0000404c(iVar2,uVar1 | 4);
  iVar2 = DAT_00004cc4 + 8;
  uVar1 = FUN_00004026(iVar2);
  FUN_0000404c(iVar2,uVar1 | 4);
  return;
}



/* Function: FUN_00004b46 */

void FUN_00004b46(int param_1)

{
  do {
  } while (*(uint *)(DAT_00004cc0 + 0xc) < (uint)(*(int *)(DAT_00004cc0 + 0xc) + param_1));
  return;
}



/* Function: FUN_00004d00 */

void FUN_00004d00(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = DAT_00004d70;
  piVar4 = DAT_00004d6c;
  DAT_00004d6c[-1] = DAT_00004d70;
  FUN_0000e52c(iVar1,0x10000);
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
  FUN_0000ef0c();
  FUN_0000ed98();
  return;
}



/* Function: FUN_00004d54 */

undefined4 FUN_00004d54(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (param_3 < 3)) {
    if (param_2 < 0x100001) {
      FUN_0000f148();
      return param_1;
    }
    uVar1 = FUN_0000f270();
    return uVar1;
  }
  return param_1;
}



/* Function: FUN_00004e38 */

undefined4 FUN_00004e38(void)

{
  return 1;
}



/* Function: FUN_000052c0 */

undefined4 FUN_000052c0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar1 = DAT_000056ac;
  *DAT_000056a8 = 1;
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
      puVar4 = (undefined4 *)FUN_00002b8c();
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



/* Function: FUN_0000534e */

undefined4 FUN_0000534e(uint *param_1)

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
        else if (uVar5 == uVar4) goto LAB_000053d0;
      }
    }
    for (uVar2 = 0; uVar2 < *param_1; uVar2 = uVar2 + 1) {
      uVar3 = param_1[uVar2 * 4 + 2];
      if ((((uVar3 != 1) && (uVar3 != 0x102)) && (uVar3 != 0x100)) && (uVar3 != 0x101))
      goto LAB_000053d0;
    }
    uVar1 = 1;
  }
  else {
LAB_000053d0:
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: FUN_000054c0 */

int FUN_000054c0(int param_1)

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
  
  iVar1 = FUN_00004e38();
  piVar5 = (int *)(DAT_000056ac + param_1 * 0xca0);
  if ((iVar1 == 0) && (piVar5[2] != -1)) {
    return 7;
  }
  if (*piVar5 != 1) {
    iVar1 = 1;
    goto LAB_00005572;
  }
  if (*(code **)(piVar5[3] + 0xc) != Reset) {
    iVar1 = (**(code **)(piVar5[3] + 0xc))(param_1,&local_668);
    if (iVar1 != 0) goto LAB_00005572;
    iVar3 = FUN_0000534e(&local_65c);
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
      goto LAB_00005572;
    }
    (**(code **)(piVar5[3] + 0x10))(param_1);
  }
  iVar1 = 7;
LAB_00005572:
  iVar3 = FUN_00004e38();
  if (iVar3 != 0) {
    return iVar1;
  }
  if (piVar5[2] != -1) {
    return 7;
  }
  return iVar1;
}



/* Function: FUN_0000558a */

undefined4 FUN_0000558a(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00004e38();
  piVar3 = (int *)(DAT_000056ac + param_1 * 0xca0);
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
    iVar1 = FUN_00004e38();
    if ((iVar1 != 0) || (piVar3[2] == -1)) {
      return uVar4;
    }
  }
  return 7;
}



/* Function: FUN_000055fa */

int FUN_000055fa(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_00004e38();
  piVar3 = (int *)(DAT_000056ac + param_1 * 0xca0);
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
    iVar2 = FUN_00004e38();
    if ((iVar2 != 0) || (piVar3[2] == -1)) {
      return iVar1;
    }
  }
  return 7;
}



/* Function: FUN_00005650 */

int FUN_00005650(int param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int local_28;
  
  uVar5 = 0;
  local_28 = param_4;
  iVar2 = FUN_00004e38();
  piVar4 = (int *)(DAT_000056ac + param_1 * 0xca0);
  if ((iVar2 == 0) && (piVar4[2] != -1)) {
    return 7;
  }
  if ((*piVar4 == 2) || (*piVar4 == 3)) {
    while ((uVar5 < (uint)piVar4[7] && (piVar4[uVar5 * 8 + 0xb] != param_2))) {
      uVar5 = uVar5 + 1;
    }
    if (piVar4[7] == uVar5) {
      iVar2 = 5;
      goto LAB_000056fa;
    }
    if (piVar4[uVar5 * 8 + 8] == 0) {
      if (*(code **)(piVar4[3] + 0x14) == Reset) {
        iVar2 = 7;
      }
      else {
        iVar2 = (**(code **)(piVar4[3] + 0x14))(param_1,param_2,&local_28,param_4);
        piVar1 = DAT_00005ac8;
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
      goto LAB_000056fa;
    }
  }
  iVar2 = 1;
LAB_000056fa:
  iVar3 = FUN_00004e38();
  if (iVar3 != 0) {
    return iVar2;
  }
  if (piVar4[2] != -1) {
    return 7;
  }
  return iVar2;
}



/* Function: FUN_00005710 */

undefined4 FUN_00005710(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = DAT_00005acc + param_2 * 0xca0;
  if (((param_3 < *(uint *)(iVar1 + 0x1c)) &&
      (iVar1 = iVar1 + param_3 * 0x20, *(int *)(iVar1 + 0x20) != 0)) &&
     (*(int *)(iVar1 + 0x24) == param_1)) {
    return 1;
  }
  return 0;
}



/* Function: FUN_00005736 */

undefined4 FUN_00005736(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  
  iVar1 = FUN_00004e38();
  iVar4 = DAT_00005acc + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0;
  if ((iVar1 != 0) || (*(int *)(iVar4 + 8) == -1)) {
    iVar1 = FUN_00005710(param_1,(param_1 & 0xfff) >> 8,param_1 & 0xff);
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
    iVar1 = FUN_00004e38();
    if (iVar1 != 0) {
      return uVar2;
    }
    if (*(int *)(iVar4 + 8) == -1) {
      return uVar2;
    }
  }
  return 7;
}



/* Function: FUN_000057a2 */

undefined4 FUN_000057a2(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  
  iVar1 = FUN_00004e38();
  iVar3 = DAT_00005acc + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0;
  if ((iVar1 != 0) || (*(int *)(iVar3 + 8) == -1)) {
    iVar1 = FUN_00005710(param_1,(param_1 & 0xfff) >> 8,param_1 & 0xff);
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
    iVar1 = FUN_00004e38();
    if (iVar1 != 0) {
      return uVar2;
    }
    if (*(int *)(iVar3 + 8) == -1) {
      return uVar2;
    }
  }
  return 7;
}



/* Function: FUN_00005814 */

undefined4 FUN_00005814(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  
  iVar1 = FUN_00004e38();
  iVar3 = DAT_00005acc + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0;
  if ((iVar1 != 0) || (*(int *)(iVar3 + 8) == -1)) {
    iVar1 = FUN_00005710(param_1,(param_1 & 0xfff) >> 8,param_1 & 0xff);
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
    iVar1 = FUN_00004e38();
    if (iVar1 != 0) {
      return uVar2;
    }
    if (*(int *)(iVar3 + 8) == -1) {
      return uVar2;
    }
  }
  return 7;
}



/* Function: FUN_00005954 */

int FUN_00005954(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = param_1 & 0xff;
  iVar1 = FUN_00004e38();
  piVar3 = (int *)(DAT_00005acc + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0);
  if ((iVar1 != 0) || (piVar3[2] == -1)) {
    if (*piVar3 == 3) {
      iVar1 = FUN_00005710(param_1,(param_1 & 0xfff) >> 8,uVar4);
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
    iVar2 = FUN_00004e38();
    if (iVar2 != 0) {
      return iVar1;
    }
    if (piVar3[2] == -1) {
      return iVar1;
    }
  }
  return 7;
}



/* Function: FUN_000059da */

undefined4
FUN_000059da(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  
  if (param_2 == 3) {
    iVar2 = FUN_00004e38();
    piVar4 = (int *)(DAT_00005acc + (short)(ushort)((param_1 << 0x14) >> 0x1c) * 0xca0);
    if ((iVar2 == 0) && (piVar4[2] != -1)) {
      return 7;
    }
    if (*piVar4 == 3) {
      iVar2 = FUN_00005710(param_1,(param_1 & 0xfff) >> 8,param_1 & 0xff);
      if (iVar2 == 0) {
        uVar3 = 2;
        goto LAB_00005abe;
      }
      if (*(code **)(piVar4[3] + 0x30) != Reset) {
        uVar3 = (**(code **)(piVar4[3] + 0x30))
                          (piVar4[(param_1 & 0xff) * 8 + 10],3,param_3,param_4,param_5,param_6,
                           param_7);
        goto LAB_00005abe;
      }
      goto LAB_00005a56;
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
    iVar1 = FUN_00004e38();
    piVar4 = (int *)(DAT_00005acc + param_1 * 0xca0);
    if ((iVar1 == 0) && (piVar4[2] != -1)) {
      return 7;
    }
    if ((*piVar4 == 3) || (*piVar4 == 2)) {
      if (*(code **)(piVar4[3] + 0x30) != Reset) {
        uVar3 = (**(code **)(piVar4[3] + 0x30))
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar5,iVar2);
        goto LAB_00005abe;
      }
LAB_00005a56:
      uVar3 = 7;
      goto LAB_00005abe;
    }
  }
  uVar3 = 1;
LAB_00005abe:
  iVar2 = FUN_00004e38();
  if (iVar2 != 0) {
    return uVar3;
  }
  if (piVar4[2] != -1) {
    return 7;
  }
  return uVar3;
}



/* Function: FUN_00005ad4 */

uint FUN_00005ad4(int param_1,int param_2,uint param_3)

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



/* Function: FUN_00005b8c */

void FUN_00005b8c(int *param_1)

{
  int iVar1;
  
  if ((((*param_1 == s_SLTFVBM_BOOT_00005f2c._0_4_) &&
       (iVar1 = s_SLTFVBM_BOOT_00005f2c._0_4_ + -0xe, param_1[0x216] == iVar1)) &&
      (*(int *)param_1[0x214] == s_SLTFVBM_BOOT_00005f2c._0_4_)) &&
     (((*(int *)(param_1[0x214] + (param_1[6] * param_1[7] & 0xfffffffcU) + 8) == iVar1 &&
       (*(int *)param_1[0x215] == s_SLTFVBM_BOOT_00005f2c._0_4_)) &&
      (*(int *)(param_1[0x215] + (param_1[8] * param_1[6] & 0xfffffffcU) + 8) == iVar1)))) {
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_000064ee */

void FUN_000064ee(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  FUN_0000e3a0(param_2,&DAT_00006498,4);
  FUN_0000e686(0x102,param_2 + 4);
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



/* Function: FUN_00006a60 */

undefined4 FUN_00006a60(int param_1,int param_2,int *param_3,uint *param_4)

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
LAB_00006ac8:
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
        goto LAB_00006ac8;
      }
      (**(code **)(param_1 + 0x3c))(*(undefined4 *)(param_1 + 0x48),uVar1);
    }
    uVar1 = uVar1 + 1;
  } while( true );
}



/* Function: FUN_00006adc */

undefined8 FUN_00006adc(int param_1,int param_2,int param_3,undefined4 param_4)

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
  FUN_0000e4d8(*(int *)(param_1 + 0x850) + 4,*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x1c),
               0xff,iVar3 + 0x538,param_1,param_2,param_3,param_4);
  FUN_0000e4d8(*(int *)(param_1 + 0x854) + 4,*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x20),
               0xff);
  FUN_000064ee(param_1,*(int *)(param_1 + 0x850) + 4);
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



/* Function: FUN_00006bd0 */

undefined4 FUN_00006bd0(uint param_1,int param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  *param_3 = 0;
  if (((param_1 < 5) && (*(int *)(DAT_00006d68 + param_1 * 8) != 0)) &&
     (iVar4 = *(int *)(DAT_00006d68 + param_1 * 8 + 4), iVar4 != 0)) {
    FUN_00005b8c(iVar4);
    piVar1 = DAT_00006d6c;
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



/* Function: FUN_0000705e */

void FUN_0000705e(int param_1,int param_2,uint *param_3,int *param_4,char *param_5,char *param_6)

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
LAB_000070b2:
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
          goto LAB_000070b4;
        }
        goto LAB_000070b2;
      }
      uVar6 = uVar6 - 1;
    } while( true );
  }
  uVar4 = 0;
  *param_5 = '\0';
  uVar6 = 0;
LAB_000070b4:
  *param_6 = '\x01';
  uVar3 = 0;
  uVar5 = *(uint *)(param_1 + 0x18);
  while ((uVar3 < uVar5 && ((~*(byte *)(param_2 + uVar3) & 3) == 0))) {
    uVar3 = uVar3 + 1;
  }
  if (uVar5 != uVar3) {
    do {
      if (uVar5 == 0) {
LAB_000070f6:
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
          goto LAB_000070f8;
        }
        goto LAB_000070f6;
      }
      uVar5 = uVar5 - 1;
    } while( true );
  }
  uVar3 = 0;
  *param_6 = '\0';
  uVar5 = 0;
LAB_000070f8:
  cVar1 = *param_5;
  if (cVar1 == '\0') {
    if (*param_6 == '\0') {
      iVar2 = 0;
      *param_3 = 0;
      goto LAB_00007136;
    }
LAB_0000710c:
    if (*param_6 != '\x01') goto LAB_00007124;
    *param_3 = uVar3;
LAB_00007132:
    iVar2 = uVar5 - uVar3;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\0') goto LAB_0000710c;
LAB_00007124:
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      *param_3 = uVar3;
      if (uVar5 < uVar6) {
        uVar5 = uVar6;
      }
      goto LAB_00007132;
    }
    if (*param_6 != '\0') goto LAB_00007124;
    iVar2 = uVar6 - uVar4;
    *param_3 = uVar4;
  }
  iVar2 = iVar2 + 1;
LAB_00007136:
  *param_4 = iVar2;
  return;
}



/* Function: FUN_00007144 */

undefined4 FUN_00007144(uint param_1,uint *param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 & 0xfffff) >> 0x10 == 1) {
    uVar1 = (param_1 & 0xffff) >> 0xc;
    *param_2 = uVar1;
    iVar2 = DAT_00007554;
    if ((uVar1 < 5) && (*(int *)(DAT_00007554 + uVar1 * 8) != 0)) {
      *param_4 = param_1 & 0xfff;
      iVar2 = *(int *)(iVar2 + *param_2 * 8 + 4);
      *param_3 = iVar2;
      if ((iVar2 != 0) &&
         ((*param_4 < *(uint *)(iVar2 + 0x5c) &&
          (*(uint *)(iVar2 + *param_4 * 0x18 + 100) == param_1)))) {
        FUN_00005b8c();
        return 1;
      }
    }
  }
  return 0;
}



/* Function: FUN_0000719c */

void FUN_0000719c(int param_1,uint param_2,uint param_3,uint *param_4,uint *param_5,int *param_6)

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



/* Function: FUN_000071ee */

int FUN_000071ee(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
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
  uVar2 = FUN_00007bea(param_1,iVar1);
  iVar3 = (**(code **)(param_1 + 0x30))
                    (*(undefined4 *)(param_1 + 0x48),uVar2,local_28,param_5,param_6,param_7,param_8,
                     param_9,(param_11 & 1) != 0);
  iVar4 = FUN_00005ad4(param_9,param_5,param_6);
  *param_10 = iVar4;
  if (((iVar3 == 0) && (iVar4 << 0x1d < 0)) && ((int)(param_11 << 0x1d) < 0)) {
    iVar4 = 2;
LAB_0000726c:
    do {
      iVar5 = FUN_00006a60(param_1,iVar1,&local_44,&local_4c);
      if (iVar5 == 0) {
        return 0;
      }
      for (uVar6 = 0; uVar6 < *(uint *)(param_1 + 0x14); uVar6 = uVar6 + 1) {
        (**(code **)(param_1 + 0x30))
                  (*(undefined4 *)(param_1 + 0x48),local_44,uVar6,0,*(undefined4 *)(param_1 + 0x18),
                   *(int *)(param_1 + 0x850) + 4,*(int *)(param_1 + 0x854) + 4,auStack_6c,1);
        FUN_0000705e(param_1,auStack_6c,&local_48,&local_40,local_3c,local_38);
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
          goto LAB_0000726c;
        }
      }
    } while (iVar4 == 2);
    FUN_00006adc(param_1,iVar1,local_4c);
    (**(code **)(param_1 + 0x3c))(*(undefined4 *)(param_1 + 0x48),local_44);
  }
  return iVar3;
}



/* Function: FUN_00007330 */

undefined4
FUN_00007330(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,int param_5,
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
  iVar1 = FUN_00007144(param_1,auStack_2c,&local_34,&local_30);
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
    uVar2 = FUN_000071ee(local_34,local_30,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         auStack_28,param_9);
    FUN_00005b8c(local_34);
    return uVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_000075ac */

int FUN_000075ac(int param_1,int param_2,int param_3,uint param_4,int param_5,undefined4 param_6,
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
  uVar1 = FUN_00007bea(param_1,local_4c);
  iVar2 = (**(code **)(param_1 + 0x34))
                    (*(undefined4 *)(param_1 + 0x48),uVar1,local_28,param_5,param_6,param_7,param_8,
                     (param_9 & 1) != 0);
  if ((iVar2 == 2) && (iVar4 = 2, local_50 = 2, (int)(param_9 << 0x1d) < 0)) {
LAB_00007612:
    do {
      iVar2 = FUN_00006a60(param_1,local_4c,&local_44,&local_54);
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
          FUN_0000705e(param_1,auStack_74,&local_48,&local_40,local_3c,local_38);
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
          goto LAB_00007612;
        }
      }
    } while (iVar4 == 2);
    FUN_00006adc(param_1,local_4c,local_54);
    (**(code **)(param_1 + 0x3c))(*(undefined4 *)(param_1 + 0x48),local_44);
    local_50 = 0;
    iVar2 = local_50;
  }
  local_50 = iVar2;
  return local_50;
}



/* Function: FUN_00007704 */

undefined4
FUN_00007704(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int local_2c;
  int local_28;
  undefined1 auStack_24 [4];
  
  local_2c = 0;
  local_28 = 0;
  iVar1 = FUN_00007144(param_1,auStack_24,&local_2c,&local_28);
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
    uVar2 = FUN_000075ac(local_2c,local_28,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_00005b8c(local_2c);
    return uVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_00007774 */

int FUN_00007774(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,
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
  iVar1 = FUN_00007144(param_1,auStack_28,&local_38,&local_3c);
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
    FUN_0000719c(local_38,param_2,param_3,&local_34,&local_30,&local_2c);
    uVar2 = *(uint *)(local_38 + 0x18);
    uVar3 = uVar2 * *(int *)(local_38 + 0x14);
    uVar4 = param_2 / uVar3;
    param_2 = param_2 - uVar3 * uVar4;
    uVar3 = param_2 / uVar2;
    if (local_34 == 0) goto LAB_00007838;
    iVar1 = FUN_000075ac(local_38,local_3c,uVar4,uVar3,param_2 - uVar2 * uVar3,local_34,param_4,
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
LAB_00007838:
        if (local_30 == 0) {
          if ((local_2c != 0) &&
             (iVar1 = FUN_000075ac(local_38,local_3c,uVar4,uVar3,0,local_2c,param_4,param_5,param_6)
             , iVar1 != 0)) {
            FUN_00005b8c(local_38);
            return iVar1;
          }
          FUN_00005b8c(local_38);
          return 0;
        }
        iVar1 = FUN_000075ac(local_38,local_3c,uVar4,uVar3,0,*(undefined4 *)(local_38 + 0x18),
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
    FUN_00005b8c(local_38);
    return iVar1;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_000078b8 */

int FUN_000078b8(undefined4 param_1,uint param_2,int param_3)

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
  iVar1 = FUN_00007144(param_1,auStack_18,&local_28,&local_24);
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
  uVar2 = FUN_00007bea(local_28,iVar4);
  iVar1 = (**(code **)(local_28 + 0x38))(*(undefined4 *)(local_28 + 0x48),uVar2);
  if (((iVar1 == 2) && (param_3 << 0x1d < 0)) &&
     (iVar3 = FUN_00006a60(local_28,iVar4,&local_20,&local_1c), iVar3 != 0)) {
    FUN_00006adc(local_28,iVar4,local_1c);
    (**(code **)(local_28 + 0x3c))(*(undefined4 *)(local_28 + 0x48),local_20);
    iVar1 = 0;
  }
  FUN_00005b8c(local_28);
  return iVar1;
}



/* Function: FUN_0000793a */

undefined8
FUN_0000793a(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  local_18 = 0;
  local_14 = 0;
  uStack_10 = param_4;
  iVar1 = FUN_00007144(param_1,&uStack_10,&local_18,&local_14);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(local_18 + 0x1c);
    param_2[1] = *(undefined4 *)(local_18 + 0x20);
    param_2[2] = *(undefined4 *)(local_18 + 0x18);
    param_2[3] = *(undefined4 *)(local_18 + 0x14);
    iVar2 = local_18 + local_14 * 0x18;
    param_2[4] = (*(int *)(iVar2 + 0x74) - *(int *)(iVar2 + 0x70)) + 1;
    *(undefined2 *)(param_2 + 5) = *(undefined2 *)(iVar2 + 0x6c);
    FUN_00005b8c();
  }
  return CONCAT44(local_18,(uint)(iVar1 != 0));
}



/* Function: FUN_0000798e */

longlong FUN_0000798e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  int local_14;
  undefined4 uStack_10;
  
  local_18 = 0;
  local_14 = 0;
  uStack_10 = param_4;
  iVar1 = FUN_00007144(param_1,&uStack_10,&local_18,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = local_18 + local_14 * 0x18;
    if (*(char *)(iVar1 + 0x60) == '\0') {
      FUN_00005b8c();
      return (ulonglong)local_18 << 0x20;
    }
    *(undefined1 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(local_18 + local_14 * 0x18 + 100) = 0;
    FUN_00005b8c();
    uVar2 = 1;
  }
  return CONCAT44(local_18,uVar2);
}



/* Function: FUN_00007b48 */

void FUN_00007b48(int param_1)

{
  (**(code **)(param_1 + 0x44))(*(undefined4 *)(param_1 + 0x48));
  FUN_00005b8c(param_1);
  FUN_0000d280(*(undefined4 *)(param_1 + 0x850));
  FUN_0000d280(*(undefined4 *)(param_1 + 0x854));
  FUN_0000d280(param_1);
  return;
}



/* Function: FUN_00007bea */

int FUN_00007bea(int param_1,int param_2)

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



/* Function: FUN_0000a0dc */

void FUN_0000a0dc(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_0000c59e();
  *(byte *)(*(int *)(param_1 + 0x838) + param_2) =
       *(byte *)(*(int *)(param_1 + 0x838) + param_2) & 0xfe;
  if ((*(uint *)(*(int *)(param_1 + 0x828) + param_2 * 4) & 0x1ffff) - *(int *)(param_1 + 0x34) < 10
     ) {
    iVar3 = *(int *)(param_1 + 0x828);
    if (DAT_0000cc00 == *(int *)(iVar3 + param_2 * 4) * 0x8000) {
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
  if (DAT_0000caa4 == *(int *)(iVar3 + param_2 * 4) * 0x8000) {
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



/* Function: FUN_0000a11a */

undefined4 FUN_0000a11a(int param_1,int param_2,uint param_3,uint param_4)

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
      FUN_0000c84a(param_1,*(undefined4 *)(param_2 + 4),uVar6);
      if ((*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb == uVar6) {
        *(undefined4 *)(param_2 + 0x10) = 0xffffff;
        iVar7 = 0;
        *(undefined1 *)(param_2 + 0xc) = 0x7f;
        iVar5 = FUN_0000c918(param_1,*(undefined4 *)(param_2 + 4),0);
        while (iVar5 != 0x1fff) {
          iVar7 = iVar7 + 1;
          *(byte *)(param_2 + 0xc) = *(byte *)(*(int *)(param_1 + 0x830) + iVar5) & 0x7f;
          iVar5 = FUN_0000c918(param_1,*(undefined4 *)(param_2 + 4),iVar7);
        }
      }
      FUN_0000a0dc(param_1,uVar6);
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



/* Function: FUN_0000a9e0 */

undefined4 FUN_0000a9e0(int param_1,int param_2)

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
      while (iVar2 = FUN_0000c918(param_1,iVar4,iVar3), iVar2 != 0x1fff) {
        iVar4 = *(int *)(param_2 + 4);
        uVar7 = uVar7 + *(ushort *)(*(int *)(param_1 + 0x820) + iVar2 * 2);
        iVar3 = iVar3 + 1;
      }
    }
    else {
      while (uVar1 = FUN_0000c918(param_1,iVar4,iVar3),
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
      iVar4 = FUN_0000c918(param_1,*(undefined4 *)(param_2 + 4),iVar3 + 1);
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
    iVar4 = FUN_0000cb58(param_1);
    *(undefined1 *)(param_2 + 0xc) = 0;
    FUN_0000c736(param_1,*(undefined4 *)(param_2 + 4),iVar4);
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
        FUN_0000c4a2(param_1,(uVar1 & 0xffffff) >> 0xb,(uVar1 & 0x7ff) >> 3,uVar1 & 7,1,
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
          FUN_0000cda2(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar7);
          iVar3 = FUN_0000c4cc(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                               (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar7,
                               *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
          if ((iVar3 != 0) && (iVar3 != 1)) {
            uVar6 = *(uint *)(param_2 + 0x10);
            if (uVar6 == 0xffffff) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            goto LAB_0000ae62;
          }
          iVar4 = iVar4 + uVar7;
          uVar7 = 0;
          for (uVar6 = 0; uVar6 < uVar1; uVar6 = uVar6 + 1) {
            FUN_0000a11a(param_1,param_2,local_70[uVar6 * 2],local_70[uVar6 * 2 + 1]);
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
    if (uVar7 == 0) goto LAB_0000aea8;
    if (*(int *)(param_2 + 0x10) == 0xffffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    FUN_0000cda2(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar7);
    iVar4 = FUN_0000c4cc(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                         (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar7,
                         *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
    if ((iVar4 != 0) && (iVar4 != 1)) {
      uVar6 = *(uint *)(param_2 + 0x10);
      if (uVar6 == 0xffffff) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      goto LAB_0000ae62;
    }
    for (uVar7 = 0; uVar7 < uVar6; uVar7 = uVar7 + 1) {
      FUN_0000a11a(param_1,param_2,local_70[uVar7 * 2],local_70[uVar7 * 2 + 1]);
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
        FUN_0000c4a2(param_1,uVar8,(uVar1 & 0x7ff) >> 3,uVar1 & 7,1,
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
          FUN_0000cda2(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar7);
          iVar3 = FUN_0000c4cc(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                               (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar7,
                               *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
          if ((iVar3 != 0) && (iVar3 != 1)) {
            uVar6 = *(uint *)(param_2 + 0x10);
            if (uVar6 == 0xffffff) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            goto LAB_0000ae62;
          }
          iVar4 = iVar4 + uVar7;
          uVar7 = 0;
          for (uVar6 = 0; uVar6 < uVar1; uVar6 = uVar6 + 1) {
            FUN_0000a11a(param_1,param_2,local_70[uVar6 * 2],local_70[uVar6 * 2 + 1]);
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
    if (uVar7 == 0) goto LAB_0000aea8;
    if (*(int *)(param_2 + 0x10) == 0xffffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    FUN_0000cda2(param_1,*(int *)(param_1 + 0x840) + 4,&local_b0,uVar7);
    iVar4 = FUN_0000c4cc(param_1,(*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb,
                         (*(uint *)(param_2 + 0x10) & 0x7ff) >> 3,0,uVar7,
                         *(int *)(param_1 + 0x83c) + 4,*(int *)(param_1 + 0x840) + 4);
    if ((iVar4 != 0) && (iVar4 != 1)) {
      uVar6 = *(uint *)(param_2 + 0x10);
      if (uVar6 == 0xffffff) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
LAB_0000ae62:
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
      FUN_0000a11a(param_1,param_2,local_70[uVar7 * 2],local_70[uVar7 * 2 + 1]);
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
LAB_0000aea8:
  if (*(int *)(param_2 + 0x14) == 0) {
    return 1;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_0000bfae */

void FUN_0000bfae(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + param_2 * 4 + 0x3c);
  if ((*piVar3 == DAT_0000c344) &&
     (piVar3[*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) + 6] == DAT_0000c344 + -0xe)) {
    if (piVar3[1] != 0x1fff) {
      iVar1 = FUN_0000cbe2(param_1);
      if ((iVar1 == 1) || (uVar2 = FUN_0000c950(param_1,piVar3[1]), 3 < uVar2)) {
        FUN_0000a9e0(param_1,piVar3);
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



/* Function: FUN_0000c430 */

undefined4 FUN_0000c430(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  ushort local_14;
  
  iVar1 = FUN_00006bd0(param_2,param_3,param_1 + 0x1c);
  if (iVar1 != 0) {
    FUN_0000793a(*(undefined4 *)(param_1 + 0x1c),&local_28);
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
    FUN_0000798e(*(undefined4 *)(param_1 + 0x1c));
  }
  return 0;
}



/* Function: FUN_0000c4a2 */

int FUN_0000c4a2(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = FUN_00007330(*(undefined4 *)(param_1 + 0x1c),param_2,param_3 + 1,param_4,param_5,param_6,
                       param_7,param_8,1);
  if ((iVar1 != 0) && (iVar1 != 3)) {
    iVar1 = 2;
  }
  return iVar1;
}



/* Function: FUN_0000c4cc */

int FUN_0000c4cc(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_00007704(*(undefined4 *)(param_1 + 0x1c),param_2,param_3 + 1,param_4,param_5,param_6,
                       param_7,5);
  if ((iVar1 != 0) && (iVar1 != 3)) {
    iVar1 = 2;
  }
  return iVar1;
}



/* Function: FUN_0000c59e */

int FUN_0000c59e(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint local_18 [2];
  
  local_18[0] = *(int *)(*(int *)(param_1 + 0x828) + param_2 * 4) + 1U & 0x1ffff;
  *(uint *)(*(int *)(param_1 + 0x828) + param_2 * 4) = local_18[0];
  FUN_0000d092(param_1,*(int *)(param_1 + 0x840) + 4,local_18,*(undefined4 *)(param_1 + 0x10));
  iVar2 = 0;
  iVar1 = FUN_000078b8(*(undefined4 *)(param_1 + 0x1c),param_2,4);
  if (((iVar1 != 0) ||
      (iVar1 = FUN_00007704(*(undefined4 *)(param_1 + 0x1c),param_2,0,0,
                            *(undefined4 *)(param_1 + 0x10),0,*(int *)(param_1 + 0x840) + 4,5),
      iVar1 != 0)) && (iVar2 = iVar1, iVar2 != 3)) {
    iVar2 = 2;
  }
  return iVar2;
}



/* Function: FUN_0000c736 */

void FUN_0000c736(int param_1,int param_2,uint param_3,uint param_4)

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



/* Function: FUN_0000c84a */

void FUN_0000c84a(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r7;
  
  iVar1 = DAT_0000caa0;
  uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x810) + param_2 * 2);
  if (DAT_0000caa0 == uVar2 * 0x80000) {
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



/* Function: FUN_0000c918 */

uint FUN_0000c918(int param_1,int param_2,uint param_3)

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



/* Function: FUN_0000c950 */

int FUN_0000c950(int param_1,int param_2)

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



/* Function: FUN_0000cb58 */

uint FUN_0000cb58(int param_1)

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
      if (DAT_0000cc04 != (uint)*(ushort *)(*(int *)(param_1 + 0x818) + uVar2 * 2) * 0x80000) {
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
        if (DAT_0000cc04 == uVar4 * 0x80000) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar4 = uVar4 & 0x1fff;
        in_r12 = uVar2;
      }
      if (DAT_0000cc04 != (uint)*(ushort *)(iVar5 + uVar2 * 2) * 0x80000) {
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



/* Function: FUN_0000cbe2 */

undefined4 FUN_0000cbe2(int param_1)

{
  if ((uint)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x2c)) < 4) {
    return 1;
  }
  return 0;
}



/* Function: FUN_0000cda2 */

undefined8 FUN_0000cda2(int param_1,int param_2,int param_3,uint param_4)

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
  
  FUN_0000e4d8(param_2,param_4 * *(int *)(param_1 + 0xc),0xff);
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



/* Function: FUN_0000cfaa */

void FUN_0000cfaa(int param_1,int param_2,uint *param_3)

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
  FUN_0000e52c(local_50,0x20);
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
      *local_28 = DAT_0000d1b8 + 1;
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
    if (DAT_0000d1b8 < uVar2) {
      uVar2 = DAT_0000d1b8 + 1;
    }
    local_50[uVar5] = uVar2;
    uVar5 = uVar5 + 1;
  } while( true );
}



/* Function: FUN_0000d092 */

undefined8 FUN_0000d092(int param_1,int param_2,uint *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_0000e4d8(param_2,*(int *)(param_1 + 0xc) * param_4,0xff);
  uVar6 = 0;
  do {
    if (param_4 <= uVar6) {
      return CONCAT44(param_2,param_1);
    }
    uVar5 = *param_3;
    if ((DAT_0000d1b8 < uVar5) || (uVar5 == DAT_0000d1b8 + 1)) {
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



/* Function: FUN_0000d1bc */

void FUN_0000d1bc(void)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar2 = DAT_0000d2a8;
  piVar1 = DAT_0000d2a4;
  iVar5 = 0;
  if (*DAT_0000d2a4 == 0) {
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



/* Function: FUN_0000d280 */

void FUN_0000d280(int param_1)

{
  FUN_0000d1bc();
  if (((*(int *)(param_1 + -0xc) == DAT_0000d2a8) && (*(int *)(param_1 + -4) == DAT_0000d2a8)) &&
     (*(int *)(param_1 + -8) != 0)) {
    *(undefined4 *)(param_1 + -8) = 0;
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_0000d2ac */

undefined4 FUN_0000d2ac(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

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
  uVar1 = FUN_0000da5c(local_20,param_3);
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
    *(undefined1 *)(param_1 + uVar2) = *(undefined1 *)((int)local_20 + uVar2);
  }
  return uVar1;
}



/* Function: FUN_0000d5ea */

void FUN_0000d5ea(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_0000d7a4;
  iVar6 = 0;
  uVar3 = 0;
LAB_0000d6b6:
  do {
    while( true ) {
      iVar5 = *(int *)(iVar2 + 4);
      if (*(ushort *)(iVar5 + 0x16) <= uVar3) {
        return;
      }
      if (*(byte *)(iVar5 + 0x1f) != uVar3) break;
      if (param_5 == 0) {
        uVar4 = *(uint *)(iVar2 + 0x14);
LAB_0000d6a2:
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
        goto LAB_0000d6a2;
      }
      for (uVar4 = 0; uVar4 < *(uint *)(iVar2 + 0x18); uVar4 = uVar4 + 1) {
        puVar1 = (undefined1 *)(param_1 + uVar3);
        uVar3 = uVar3 + 1;
        *(undefined1 *)(param_3 + uVar4) = *puVar1;
      }
      goto LAB_0000d6b6;
    }
    if ((int)*(char *)(iVar5 + 0x26) == uVar3) {
      if (param_4 == 0) {
        uVar4 = *(uint *)(iVar2 + 0x1c);
        goto LAB_0000d6a2;
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
        goto LAB_0000d6a2;
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



/* Function: FUN_0000d6c8 */

undefined4
FUN_0000d6c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
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
  else if (param_8 == 0) goto LAB_0000d700;
  for (uVar3 = 0; uVar3 < param_5; uVar3 = uVar3 + 1) {
    *(undefined1 *)(param_8 + param_4 + uVar3) = 0;
  }
LAB_0000d700:
  if (param_6 == (undefined4 *)0x0 && param_7 == 0) {
    return 0;
  }
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  FUN_0000d9fa(DAT_0000d7a4,param_3,param_4,&local_40,&uStack_3c);
  puVar2 = DAT_0000d7a4;
  if (param_9 == 1) {
    if (param_6 == (undefined4 *)0x0) {
      param_6 = DAT_0000d7a4 + 0x10;
    }
    iVar5 = FUN_00001946(*DAT_0000d7a4,local_30,local_40,uStack_3c,param_5,param_6,auStack_144,
                         local_38,1);
    if (iVar5 != 0) {
      return 3;
    }
    for (uVar3 = 0; uVar3 < param_5; uVar3 = uVar3 + 1) {
      iVar5 = puVar2[1];
      if (*(char *)(iVar5 + 0x21) == -1) {
        if (param_7 == 0) {
          FUN_0000d5ea(auStack_144 + uVar3 * *(ushort *)(iVar5 + 0x16),
                       auStack_c4 + uVar3 * puVar2[8],0,auStack_44,0);
          iVar5 = puVar2[8];
          puVar4 = auStack_c4 + uVar3 * iVar5;
        }
        else {
          FUN_0000d5ea(auStack_144 + uVar3 * *(ushort *)(iVar5 + 0x16),uVar3 * puVar2[8] + param_7,0
                       ,auStack_44,0);
          iVar5 = puVar2[8];
          puVar4 = (undefined1 *)(uVar3 * iVar5 + param_7);
        }
        iVar5 = FUN_0000d2ac(puVar4,iVar5,auStack_44);
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
    iVar5 = FUN_00001946(*DAT_0000d7a4,local_30,local_40,uStack_3c,param_5,param_6,puVar4,0,0);
    if (iVar5 != 0) {
      return 3;
    }
    if (param_7 != 0) {
      for (uVar3 = 0; uVar3 < param_5; uVar3 = uVar3 + 1) {
        FUN_0000d5ea(auStack_144 + uVar3 * *(ushort *)(puVar2[1] + 0x16),uVar3 * puVar2[8] + param_7
                     ,0,0,0);
      }
    }
  }
  return 0;
}



/* Function: FUN_0000d9fa */

void FUN_0000d9fa(int param_1,uint param_2,int param_3,uint *param_4,int *param_5)

{
  *param_4 = param_2 >> *(sbyte *)(param_1 + 0x10);
  *param_5 = (param_3 + param_2) -
             ((param_2 >> *(sbyte *)(param_1 + 0x10)) << *(sbyte *)(param_1 + 0x10));
  return;
}



/* Function: FUN_0000da5c */

undefined4 FUN_0000da5c(byte *param_1,byte *param_2)

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
  
  puVar4 = DAT_0000dc08;
  uVar8 = (uint)param_1[3] ^ (uint)*param_1 << 0x18 ^
          (uint)param_1[1] << 0x10 ^ (uint)param_1[2] << 8;
  bVar1 = *param_2;
  bVar2 = param_2[1];
  uVar6 = 0;
  do {
    puVar4[uVar6] = 0xff;
    iVar5 = DAT_0000dc0c;
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
    iVar13 = DAT_0000dc0c + 0x7e;
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



/* Function: FUN_0000dc10 */

ulonglong FUN_0000dc10(uint param_1,uint param_2,uint param_3,uint param_4)

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
  uVar5 = *(uint *)(&DAT_0000df00 + (uVar9 >> 0x1c) * 4);
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



/* Function: FUN_0000df40 */

undefined4 FUN_0000df40(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_18;
  int local_14;
  
  local_14 = param_1;
  if (param_2 != 0) {
    local_14 = param_1 + param_2 + -1;
  }
  local_18 = param_1;
  uVar1 = FUN_0000e7a6(param_3,&local_18,param_4,DAT_0000df70 + 0xdf56);
  if (param_2 != 0) {
    FUN_0000e7cc(0,&local_18);
  }
  return uVar1;
}



/* Function: FUN_0000dfa0 */

void FUN_0000dfa0(uint *param_1)

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



/* Function: FUN_0000dfcc */

void FUN_0000dfcc(byte *param_1)

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



/* Function: FUN_0000dfee */

void FUN_0000dfee(byte *param_1,undefined1 *param_2,uint param_3)

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
  FUN_0000dfa0(param_1);
  for (; param_2 < puVar2; param_2 = param_2 + 1) {
    (**(code **)(param_1 + 4))(*param_2,*(undefined4 *)(param_1 + 8));
  }
  FUN_0000dfcc(param_1);
  return;
}



/* Function: FUN_0000e144 */

uint FUN_0000e144(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  iVar1 = DAT_0000e2c8;
  param_1[8] = 0;
  while (uVar2 = (*(code *)param_1[3])(param_1), uVar2 != 0) {
    if (uVar2 == 0x25) {
      uVar5 = 0;
      while (((uVar2 = (*(code *)param_1[3])(param_1), 0x1f < (int)uVar2 && (uVar2 < 0x31)) &&
             (uVar3 = (uint)*(byte *)(iVar1 + uVar2 + 0xe138), uVar3 != 0))) {
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
          iVar4 = FUN_0000eb48(uVar2);
          if (iVar4 != 0) {
            param_1[iVar6 + 6] = uVar2 - 0x30;
            while( true ) {
              uVar2 = (*(code *)param_1[3])(param_1);
              iVar4 = FUN_0000eb48();
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
          if (uVar2 == 0x6c) goto LAB_0000e2b0;
          uVar2 = 0x400;
          goto LAB_0000e266;
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
LAB_0000e2b0:
            uVar2 = 0x80;
            goto LAB_0000e266;
          }
          if ((uVar2 != 0x74) && (uVar2 != 0x7a)) goto LAB_0000e27c;
        }
        uVar2 = 0;
LAB_0000e266:
        uVar5 = uVar5 | uVar2;
        uVar2 = (*(code *)param_1[3])(param_1);
      }
LAB_0000e27c:
      if (uVar2 == 0) break;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 + 0x20;
        uVar5 = uVar5 | 0x800;
      }
      *param_1 = uVar5;
      iVar6 = FUN_00000140(param_1,uVar2,param_2);
      if (iVar6 == 0) goto LAB_0000e168;
      if (iVar6 == 1) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = (uint *)(((int)param_2 + 7U & 0xfffffff8) + 8);
      }
    }
    else {
LAB_0000e168:
      (*(code *)param_1[1])(uVar2,param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
  }
  return param_1[8];
}



/* Function: FUN_0000e2f6 */

void FUN_0000e2f6(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_0000e300;
  iVar3 = DAT_0000e2fc;
  uVar2 = 1;
  iVar4 = DAT_0000e2fc + -0x7c;
  *(int *)(DAT_0000e2fc + 0x60) = DAT_0000e2fc;
  *(int *)(iVar3 + 100) = iVar4;
  iVar3 = 0x37;
  while (0 < iVar3) {
    *(uint *)(iVar4 + (iVar3 + -1) * 4) = uVar2 + (uVar2 >> 0x10);
    uVar2 = uVar2 * DAT_0000e304 + iVar1;
    iVar3 = iVar3 + -1;
  }
  return;
}



/* Function: FUN_0000e308 */

int FUN_0000e308(uint *param_1,uint *param_2,uint param_3)

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
    if ((param_3 & 1) == 0) goto LAB_0000e340;
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
LAB_0000e340:
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



/* Function: thunk_FUN_0000e3a0 */

undefined8 thunk_FUN_0000e3a0(uint *param_1,uint *param_2,uint param_3,uint param_4)

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
      if ((uVar1 & 3) != 0) {
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



/* Function: FUN_0000e3a0 */

undefined8 FUN_0000e3a0(uint *param_1,uint *param_2,uint param_3,uint param_4)

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



/* Function: FUN_0000e474 */

undefined8 FUN_0000e474(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

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



/* Function: FUN_0000e4d8 */

undefined4 * FUN_0000e4d8(undefined4 *param_1,uint param_2,undefined1 param_3)

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



/* Function: FUN_0000e52c */

undefined4 * FUN_0000e52c(undefined4 *param_1,uint param_2)

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



/* Function: FUN_0000e57c */

uint FUN_0000e57c(uint *param_1,uint *param_2)

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
      if (!bVar10) goto LAB_0000e664;
      puVar5 = (uint *)((int)param_2 + 1);
      if (((uint)puVar1 & 3) != 0) {
        puVar2 = (uint *)((int)param_1 + 2);
        uVar7 = (uint)*(byte *)puVar1;
        uVar8 = (uint)*(byte *)((int)param_2 + 1);
        bVar10 = uVar7 == 1;
        if (uVar7 != 0) {
          bVar10 = uVar7 == uVar8;
        }
        if (!bVar10) goto LAB_0000e664;
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
          if (!bVar10) goto LAB_0000e664;
        }
      }
    }
    do {
      uVar7 = *puVar1;
      uVar8 = *puVar5;
      uVar9 = uVar7 - DAT_0000e66c & ~uVar7 & DAT_0000e66c << 7;
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
LAB_0000e664:
  return uVar7 - uVar8;
}



/* Function: FUN_0000e686 */

void FUN_0000e686(undefined4 param_1,undefined1 *param_2)

{
  *param_2 = (char)param_1;
  param_2[1] = (char)((uint)param_1 >> 8);
  param_2[2] = (char)((uint)param_1 >> 0x10);
  param_2[3] = (char)((uint)param_1 >> 0x18);
  return;
}



/* Function: FUN_0000e69c */

int FUN_0000e69c(int param_1,int *param_2)

{
  if (*param_2 << 0x15 < 0) {
    param_1 = (int)(char)param_1;
  }
  else if (*param_2 << 0x17 < 0) {
    return (int)(short)param_1;
  }
  return param_1;
}



/* Function: FUN_0000e6ae */

uint FUN_0000e6ae(uint param_1,int *param_2)

{
  if (*param_2 << 0x15 < 0) {
    param_1 = param_1 & 0xff;
  }
  else if (*param_2 << 0x17 < 0) {
    return param_1 & 0xffff;
  }
  return param_1;
}



/* Function: FUN_0000e7a6 */

void FUN_0000e7a6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  local_2c = 0;
  local_34 = DAT_0000e7c8 + 0xe7b8;
  local_3c = param_4;
  uStack_38 = param_2;
  uStack_30 = param_1;
  FUN_0000e144(auStack_40,param_3);
  return;
}



/* Function: FUN_0000e7cc */

void FUN_0000e7cc(undefined1 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = param_1;
  *param_2 = puVar1 + 1;
  return;
}



/* Function: FUN_0000e814 */

undefined8 FUN_0000e814(byte *param_1,int param_2,int param_3,undefined4 param_4)

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
  
  iVar2 = DAT_0000e8cc;
  puVar7 = (undefined4 *)(DAT_0000e8cc + 0xe826);
  iVar6 = 0;
  local_38 = *puVar7;
  uStack_34 = *(undefined4 *)(DAT_0000e8cc + 0xe82a);
  iVar5 = 0;
  local_30 = param_3;
  uStack_2c = param_4;
  do {
    if ((((int)((uint)*param_1 << 0x1a) < 0) && (*(int *)(param_1 + 0x1c) <= iVar6)) ||
       ((param_3 <= iVar5 && (*(short *)(param_2 + iVar5 * 2) == 0)))) goto LAB_0000e86c;
    iVar1 = FUN_0000eaac(&local_30,*(undefined2 *)(param_2 + iVar5 * 2),&local_38);
    if (iVar1 != -1) {
      if (((int)((uint)*param_1 << 0x1a) < 0) && (*(uint *)(param_1 + 0x1c) < (uint)(iVar6 + iVar1))
         ) {
LAB_0000e86c:
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar6;
        FUN_0000dfa0(param_1);
        local_38 = *puVar7;
        uStack_34 = *(undefined4 *)(iVar2 + 0xe82a);
        for (iVar2 = 0; iVar2 < iVar5; iVar2 = iVar2 + 1) {
          uVar3 = FUN_0000eaac(&local_30,*(undefined2 *)(param_2 + iVar2 * 2),&local_38);
          if (uVar3 != 0xffffffff) {
            for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
              (**(code **)(param_1 + 4))
                        (*(undefined1 *)((int)&local_30 + uVar4),*(undefined4 *)(param_1 + 8));
            }
          }
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar6;
        FUN_0000dfcc(param_1);
        return CONCAT44(uStack_34,local_38);
      }
      iVar6 = iVar6 + iVar1;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



/* Function: FUN_0000e9bc */

undefined8 FUN_0000e9bc(uint param_1)

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



/* Function: FUN_0000e9e8 */

undefined8 FUN_0000e9e8(uint param_1,uint param_2)

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



/* Function: FUN_0000eaac */

undefined4 FUN_0000eaac(undefined1 *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_0000eaec();
  iVar3 = *piVar1;
  if (*(char *)(iVar3 + 0x101) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0000eae4. Too many branches */
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



/* Function: FUN_0000eaec */

int FUN_0000eaec(void)

{
  int iVar1;
  
  iVar1 = FUN_0000eb10();
  return iVar1 + 4;
}



/* Function: FUN_0000eafc */

void FUN_0000eafc(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_000001ee();
  FUN_0000eb18(param_1,param_2);
  do {
    piVar1 = DAT_00000240;
    piVar2 = (int *)DAT_00000240[1];
    piVar4 = (int *)*DAT_00000240 + 1;
    piVar3 = piVar2 + 1;
    *piVar2 = *piVar2 + *(int *)*DAT_00000240;
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



/* Function: FUN_0000eb10 */

undefined4 FUN_0000eb10(void)

{
  return DAT_0000eb14;
}



/* Function: FUN_0000eb18 */

void FUN_0000eb18(void)

{
  software_interrupt(0xab);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: FUN_0000eb48 */

undefined4 FUN_0000eb48(int param_1)

{
  if (param_1 - 0x30U < 10) {
    return 1;
  }
  return 0;
}



/* Function: FUN_0000eb58 */

int FUN_0000eb58(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar1 = FUN_0000e57c(DAT_0000eb7c + 0xeb6a), iVar1 != 0)) {
    return 0;
  }
  return DAT_0000eb80 + 0xeb7a;
}



/* Function: FUN_0000eba8 */

undefined4 FUN_0000eba8(undefined4 param_1)

{
  coproc_moveto_Invalidate_Entire_Instruction(0);
  return param_1;
}



/* Function: FUN_0000ebcc */

undefined4 FUN_0000ebcc(undefined4 param_1)

{
  coproc_movefrom_Control();
  return param_1;
}



/* Function: FUN_0000ebd8 */

undefined8 FUN_0000ebd8(int param_1,uint param_2)

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



/* Function: FUN_0000ec08 */

undefined8 FUN_0000ec08(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_cr0;
  
  DataMemoryBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  FUN_0000f270();
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



/* Function: FUN_0000ec60 */

undefined8 FUN_0000ec60(undefined4 param_1,undefined4 param_2)

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



/* Function: FUN_0000ecb4 */

undefined8 FUN_0000ecb4(undefined4 param_1,undefined4 param_2)

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



/* Function: FUN_0000ed98 */

undefined8 FUN_0000ed98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_r1;
  
  coproc_moveto_Translation_table_base_0(*DAT_0000f284);
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Domain_Access_Control(DAT_0000f288);
  coproc_moveto_Invalidate_Entire_Instruction(0);
  FUN_0000ec60(param_1,uVar1 & 0xfffff7ff | 0x1007,DAT_0000f288,0,param_1,param_2,param_3,param_4);
  coproc_moveto_Invalidate_unified_TLB_unlocked(0);
  coproc_moveto_Control(extraout_r1);
  coproc_movefrom_Main_ID();
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0000ee08 */

undefined8 FUN_0000ee08(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 in_cr2;
  undefined4 in_cr10;
  
  uVar1 = coprocessor_movefromRt(0xf,0,0,in_cr10,in_cr2);
  coprocessor_moveto(0xf,0,0,uVar1 | param_1,in_cr10,in_cr2);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0000ee30 */

undefined8 FUN_0000ee30(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 in_cr2;
  undefined4 in_cr10;
  
  uVar1 = coprocessor_movefromRt(0xf,0,1,in_cr10,in_cr2);
  coprocessor_moveto(0xf,0,1,uVar1 | param_1,in_cr10,in_cr2);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0000ee58 */

undefined4 FUN_0000ee58(undefined4 param_1)

{
  coproc_movefrom_Control();
  return param_1;
}



/* Function: FUN_0000ee68 */

undefined4 FUN_0000ee68(undefined4 param_1)

{
  coproc_movefrom_Control();
  return param_1;
}



/* Function: FUN_0000ee78 */

uint FUN_0000ee78(uint param_1)

{
  coproc_moveto_Translation_table_base_0(param_1 | 1);
  return param_1;
}



/* Function: FUN_0000eea4 */

undefined8 FUN_0000eea4(undefined4 param_1,undefined4 param_2)

{
  coproc_movefrom_Control();
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0000eeb8 */

undefined8 FUN_0000eeb8(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_0000f1d4();
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xffffe7f8);
  coproc_movefrom_Main_ID();
  DataMemoryBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0000ef0c */

undefined4 FUN_0000ef0c(undefined4 param_1)

{
  coproc_moveto_Invalidate_Entire_Instruction(0);
  coproc_moveto_Invalidate_unified_TLB_unlocked(0);
  return param_1;
}



/* Function: FUN_0000ef34 */

undefined4 FUN_0000ef34(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xffffefff);
  return param_1;
}



/* Function: FUN_0000ef5c */

undefined4 FUN_0000ef5c(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xfffffffb);
  return param_1;
}



/* Function: FUN_0000ef70 */

undefined4 FUN_0000ef70(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x1000);
  return param_1;
}



/* Function: FUN_0000ef84 */

undefined4 FUN_0000ef84(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x1000);
  return param_1;
}



/* Function: FUN_0000efac */

undefined4 FUN_0000efac(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 4);
  return param_1;
}



/* Function: FUN_0000efc0 */

undefined8 FUN_0000efc0(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Domain_Access_Control();
  coproc_moveto_Domain_Access_Control(uVar1 & ~param_2 | param_1);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0000f008 */

undefined8 FUN_0000f008(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 2);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0000f034 */

undefined8 FUN_0000f034(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xfffffffd);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0000f060 */

undefined8 FUN_0000f060(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0000f068 */

undefined8 FUN_0000f068(uint param_1,uint param_2)

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



/* Function: FUN_0000f0a0 */

undefined8 FUN_0000f0a0(uint param_1,uint param_2)

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



/* Function: FUN_0000f0ec */

undefined8 FUN_0000f0ec(uint param_1,uint param_2)

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



/* Function: FUN_0000f148 */

void FUN_0000f148(int param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_0000f0ec(param_1,param_2 + param_1);
    return;
  }
  if (param_3 == 0) {
    FUN_0000f068();
    return;
  }
  FUN_0000f0a0();
  return;
}



/* Function: FUN_0000f168 */

undefined8 FUN_0000f168(undefined4 param_1,undefined4 param_2)

{
  FUN_0000eba8();
  FUN_0000f270();
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0000f18c */

undefined4 FUN_0000f18c(undefined4 param_1)

{
  coproc_moveto_Domain_Access_Control(0xffffffcd);
  return param_1;
}



/* Function: FUN_0000f19c */

undefined4 FUN_0000f19c(undefined4 param_1)

{
  coproc_moveto_Domain_Access_Control(0xffffffff);
  return param_1;
}



/* Function: FUN_0000f1ac */

undefined4 FUN_0000f1ac(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x2000);
  return param_1;
}



/* Function: FUN_0000f1c0 */

undefined4 FUN_0000f1c0(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xffffdfff);
  return param_1;
}



/* Function: FUN_0000f1d4 */

void FUN_0000f1d4(void)

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



/* Function: FUN_0000f270 */

undefined8 FUN_0000f270(undefined4 param_1,undefined4 param_2)

{
  FUN_0000f1d4();
  coproc_moveto_Invalidate_Entire_Instruction(0);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0000f28c */

undefined4 FUN_0000f28c(void)

{
  return 0x3000000;
}



/* Decompiled: 243; failed: 0 */
