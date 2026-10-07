/* Automatically generated C decompilation by Ghidra. */

/* Function: Reset */

void Reset(void)

{
                    /* WARNING: Could not recover jumptable at 0x00000000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000000ac)();
  return;
}



/* Function: UndefinedInstruction */

void UndefinedInstruction(void)

{
                    /* WARNING: Could not recover jumptable at 0x00000004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000000ac)();
  return;
}



/* Function: SupervisorCall */

void SupervisorCall(void)

{
                    /* WARNING: Could not recover jumptable at 0x00000008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000000ac)();
  return;
}



/* Function: PrefetchAbort */

void PrefetchAbort(void)

{
                    /* WARNING: Could not recover jumptable at 0x0000000c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000000ac)();
  return;
}



/* Function: DataAbort */

void DataAbort(void)

{
                    /* WARNING: Could not recover jumptable at 0x00000010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000000ac)();
  return;
}



/* Function: NotUsed */

void NotUsed(void)

{
                    /* WARNING: Could not recover jumptable at 0x00000014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000000ac)();
  return;
}



/* Function: IRQ */

void IRQ(void)

{
                    /* WARNING: Could not recover jumptable at 0x00000018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000000ac)();
  return;
}



/* Function: FIQ */

void FIQ(void)

{
                    /* WARNING: Could not recover jumptable at 0x0000001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000000ac)();
  return;
}



/* Function: FUN_00000074 */

void FUN_00000074(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00000074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: FUN_0000019c */

undefined4 FUN_0000019c(uint *param_1,uint param_2,uint *param_3)

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
  undefined1 *puVar9;
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
      puVar9 = (undefined1 *)0x5c3c;
      if (param_2 == 0x75) {
        iVar11 = FUN_00005b76(*param_3,param_1,param_3,uVar6);
      }
      else {
        iVar11 = FUN_00005b64();
        if (iVar11 < 0) {
          iVar11 = -iVar11;
          puVar9 = &DAT_00005c40;
        }
        else if ((int)(*param_1 << 0x1e) < 0) {
          puVar9 = (undefined1 *)0x5c44;
        }
        else {
          if (-1 < (int)(*param_1 << 0x1d)) goto LAB_00005c16;
          puVar9 = (undefined1 *)0x5c48;
        }
        iVar7 = 1;
      }
LAB_00005c16:
      iVar2 = 0;
      while (iVar11 != 0) {
        iVar11 = FUN_000062ac();
        *(byte *)((int)param_1 + iVar2 + 0x24) = extraout_r1 + 0x30;
        iVar2 = iVar2 + 1;
      }
      goto LAB_00006160;
    }
    if (param_2 == 0x6f) {
      uVar6 = FUN_00005b76(*param_3,param_1,param_3,uVar6);
      uVar8 = 0;
LAB_00005df8:
      iVar2 = 0;
      for (; uVar6 != 0 || uVar8 != 0; uVar6 = uVar6 >> 3 | uVar1) {
        uVar1 = uVar8 << 0x1d;
        uVar8 = uVar8 >> 3;
        *(byte *)((int)param_1 + iVar2 + 0x24) = ((byte)uVar6 & 7) + 0x30;
        iVar2 = iVar2 + 1;
      }
      iVar7 = 0;
      puVar9 = &DAT_00005e60;
      if (((int)(*param_1 << 0x1c) < 0) && (((int)(*param_1 << 0x1a) < 0 || (iVar2 != 0)))) {
        iVar7 = 1;
        puVar9 = (undefined1 *)0x5e64;
        param_1[7] = param_1[7] - 1;
      }
      goto LAB_00006160;
    }
    if (param_2 == 0x78) {
      uVar6 = FUN_00005b76(*param_3,param_1,param_3,uVar6);
      uVar8 = 0;
    }
    else {
      if (((param_2 == 0xe9) || (param_2 == 0xe4)) || (param_2 == 0xf5)) {
        piVar4 = (int *)((uint)((int)param_3 + 7) & 0xfffffff8);
        iVar7 = 0;
        iVar11 = *piVar4;
        iVar2 = piVar4[1];
        puVar9 = (undefined1 *)0x5de8;
        if (param_2 != 0xf5) {
          if (iVar2 < 0) {
            bVar12 = iVar11 != 0;
            iVar11 = -iVar11;
            iVar2 = -(uint)bVar12 - iVar2;
            puVar9 = &DAT_00005dec;
          }
          else if ((int)(*param_1 << 0x1e) < 0) {
            puVar9 = (undefined1 *)0x5df0;
          }
          else {
            if (-1 < (int)(*param_1 << 0x1d)) goto LAB_00005dbe;
            puVar9 = (undefined1 *)0x5df4;
          }
          iVar7 = 1;
        }
LAB_00005dbe:
        lVar13 = CONCAT44(iVar2,iVar11);
        iVar2 = 0;
        while (lVar13 != 0) {
          lVar13 = FUN_000060c8();
          *(byte *)((int)param_1 + iVar2 + 0x24) = extraout_r2 + 0x30;
          iVar2 = iVar2 + 1;
        }
        goto LAB_00006160;
      }
      if (param_2 == 0xef) {
        puVar3 = (uint *)((uint)((int)param_3 + 7) & 0xfffffff8);
        uVar6 = *puVar3;
        uVar8 = puVar3[1];
        goto LAB_00005df8;
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
              FUN_00005cc0(param_1,puVar3,uVar5);
            }
            return 1;
          }
          puVar3 = (uint *)*param_3;
          uVar5 = 0xffffffff;
        }
        if (param_1[5] == 0) {
          FUN_00005b88(param_1,puVar3,uVar5);
        }
        return 1;
      }
      puVar3 = (uint *)((uint)((int)param_3 + 7) & 0xfffffff8);
      uVar6 = *puVar3;
      uVar8 = puVar3[1];
    }
  }
  if ((int)((uint)(ushort)*param_1 << 0x14) < 0) {
    puVar9 = &LAB_00005e78 + DAT_00005ef8;
  }
  else {
    puVar9 = (undefined1 *)(DAT_00005ef8 + 0x5e8c);
  }
  iVar2 = 0;
  for (; uVar6 != 0 || uVar8 != 0; uVar6 = uVar6 >> 4 | uVar1) {
    uVar1 = uVar8 << 0x1c;
    uVar8 = uVar8 >> 4;
    *(undefined1 *)((int)param_1 + iVar2 + 0x24) = puVar9[uVar6 & 0xf];
    iVar2 = iVar2 + 1;
  }
  iVar7 = 0;
  if ((int)((uint)(byte)*param_1 << 0x1c) < 0) {
    if (param_2 == 0x70) {
      iVar7 = 1;
      puVar9 = puVar9 + 0x10;
    }
    else if (iVar2 != 0) {
      iVar7 = 2;
      puVar9 = puVar9 + 0x11;
    }
  }
LAB_00006160:
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
    FUN_00005b16(param_1);
  }
  for (iVar10 = 0; iVar10 < iVar7; iVar10 = iVar10 + 1) {
    (*(code *)param_1[1])(puVar9[iVar10],param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)((uint)(byte)*param_1 << 0x1b) < 0) {
    FUN_00005b16(param_1);
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
  FUN_00005b42(param_1);
  if ((int)((uint)(byte)*param_1 << 0x18) < 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



/* Function: FUN_000002c0 */

undefined4 FUN_000002c0(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (param_3 < 3)) {
    if (param_2 < 0x100001) {
      FUN_00006a74();
      return param_1;
    }
    uVar1 = FUN_00006b9c();
    return uVar1;
  }
  return param_1;
}



/* Function: FUN_0000068e */

uint FUN_0000068e(uint param_1)

{
  return (param_1 >> 8 | param_1 << 8) & 0xffff;
}



/* Function: FUN_0000076e */

undefined4 * FUN_0000076e(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(DAT_00000a1c + 8);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(DAT_00000a1c + 8) = *puVar1;
    FUN_00005ac8(puVar1,0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1;
  }
  return puVar2;
}



/* Function: FUN_00000794 */

void FUN_00000794(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00000a1c;
  *param_1 = *(undefined4 *)(DAT_00000a1c + 8);
  *(undefined4 **)(iVar1 + 8) = param_1;
  return;
}



/* Function: FUN_0000079e */

int FUN_0000079e(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = (uint)*(ushort *)(param_1 + 0x12);
  uVar2 = FUN_0000068e(uVar7);
  *(undefined2 *)(param_1 + 0x12) = uVar2;
  uVar2 = FUN_0000068e(*(undefined2 *)(param_1 + 0x10));
  *(undefined2 *)(param_1 + 0x10) = uVar2;
  if (*DAT_00000a1c == 1) {
    uVar2 = FUN_00001fa4(param_1 + 0x10,uVar7 + 4);
  }
  else {
    FUN_00001fd4();
    uVar2 = FUN_0000068e();
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



/* Function: FUN_00000822 */

void FUN_00000822(undefined2 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [16];
  undefined2 local_38;
  undefined2 local_36;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  local_36 = 0;
  local_38 = param_1;
  uVar1 = FUN_0000079e(auStack_48,auStack_28);
  FUN_00000a04(auStack_18,uVar1);
  return;
}



/* Function: FUN_0000084a */

void FUN_0000084a(void)

{
  return;
}



/* Function: FUN_0000084c */

void FUN_0000084c(void)

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
  
  piVar1 = DAT_00000a1c;
  puVar9 = (undefined4 *)DAT_00000a1c[4];
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)FUN_0000076e();
    if (puVar9 == (undefined4 *)0x0) {
      return;
    }
    piVar1[4] = (int)puVar9;
    *puVar9 = 0;
  }
  iVar5 = DAT_00000a24;
  puVar10 = puVar9 + 4;
LAB_00000870:
  iVar3 = piVar1[1];
  if (iVar3 != iVar5) {
    uVar7 = (**(code **)(iVar3 + 0xc))();
    if (uVar7 == 0xffffffff) {
      return;
    }
    uVar8 = uVar7 & 0xff;
    bVar2 = (byte)uVar7;
    if (0x1000 < (int)puVar9[2]) {
      piVar1[4] = 0;
      FUN_00000794(puVar9);
      FUN_00000b98(0xa64);
      FUN_0000084a(0xa3c,0x8b,DAT_00000a38,0xa7);
      FUN_00000822(0x8b);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar3 = puVar9[1];
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        if (uVar8 == 0x7e) goto LAB_00000870;
        if (uVar8 == 0x7d) {
          bVar2 = (**(code **)(piVar1[1] + 8))();
          bVar2 = bVar2 ^ 0x20;
        }
        puVar9[1] = 2;
      }
      else {
        if (iVar3 != 2) goto LAB_00000870;
        if (uVar8 == 0x7e) {
          puVar9[1] = 3;
          if (*piVar1 == 1) {
            iVar5 = FUN_00001fa4(puVar10,puVar9[2]);
          }
          else {
            iVar5 = FUN_00001fd4();
          }
          if (iVar5 != 0) {
            FUN_00000794(puVar9);
            piVar1[4] = 0;
            FUN_00000b98(0xa70);
            FUN_0000084a(0xa3c,0x8b,DAT_00000a38,0xd5);
            FUN_00000822(0x8b);
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          *puVar9 = 0;
          puVar10 = (undefined4 *)piVar1[3];
          if ((undefined4 *)piVar1[3] != (undefined4 *)0x0) goto LAB_00000978;
          goto LAB_000008b2;
        }
        if (uVar8 == 0x7d) {
          bVar2 = (**(code **)(piVar1[1] + 8))();
          bVar2 = bVar2 ^ 0x20;
        }
      }
      *(byte *)((int)puVar10 + puVar9[2]) = bVar2;
      puVar9[2] = puVar9[2] + 1;
      goto LAB_00000870;
    }
    if (uVar8 == 0x7e) {
      puVar9[1] = 1;
      puVar9[2] = 0;
    }
    goto LAB_00000870;
  }
  uVar4 = (**(code **)(iVar3 + 4))(iVar3,puVar10,0x1000);
  puVar9[2] = uVar4;
  iVar5 = FUN_00001fd4(puVar10,uVar4);
  if (iVar5 != 0) {
    FUN_00000794(puVar9);
    piVar1[4] = 0;
    FUN_00000b98(0xa28);
    FUN_0000084a(0xa3c,0x8b,DAT_00000a38,0x82);
    FUN_00000822(0x8b);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *puVar9 = 0;
  puVar10 = (undefined4 *)piVar1[3];
  if ((undefined4 *)piVar1[3] == (undefined4 *)0x0) {
LAB_000008b2:
    piVar1[3] = (int)puVar9;
    goto LAB_000008c0;
  }
  do {
    puVar6 = puVar10;
    puVar10 = (undefined4 *)*puVar6;
  } while ((undefined4 *)*puVar6 != (undefined4 *)0x0);
LAB_000008be:
  *puVar6 = puVar9;
LAB_000008c0:
  piVar1[4] = 0;
  return;
LAB_00000978:
  do {
    puVar6 = puVar10;
    puVar10 = (undefined4 *)*puVar6;
  } while ((undefined4 *)*puVar6 != (undefined4 *)0x0);
  goto LAB_000008be;
}



/* Function: FUN_00000a04 */

void FUN_00000a04(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00000a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(DAT_00000a1c + 4) + 0x10))(*(int *)(DAT_00000a1c + 4),param_1,param_2);
  return;
}



/* Function: FUN_00000b32 */

undefined4 FUN_00000b32(int param_1,undefined4 param_2)

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



/* Function: FUN_00000b7a */

void FUN_00000b7a(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  while (uVar1 < param_2) {
    FUN_00000b32(DAT_00000bcc,*param_1);
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* Function: FUN_00000b98 */

undefined4 FUN_00000b98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_110 [252];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_000058f0(auStack_110,0xfa,param_1,&uStack_c);
  if (0 < iVar1) {
    auStack_110[iVar1] = 0;
    FUN_00000b7a(auStack_110);
  }
  return 0;
}



/* Function: FUN_00000bf0 */

undefined4 FUN_00000bf0(void)

{
  return *(undefined4 *)(DAT_00000dc4 + 0xc);
}



/* Function: FUN_00000c4a */

void FUN_00000c4a(int param_1)

{
  do {
  } while (*(uint *)(DAT_00000dc4 + 0xc) < (uint)(*(int *)(DAT_00000dc4 + 0xc) + param_1));
  return;
}



/* Function: FUN_00000e12 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00000e12(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = _DAT_00000ea0;
  *(undefined4 *)(_DAT_00000ea0 + 0x28) = param_1;
  iVar2 = FUN_00000bf0();
  iVar3 = iVar2;
  do {
    uVar4 = *(uint *)(iVar1 + 0x2c);
    if (3 < (uint)(iVar3 - iVar2)) {
      FUN_00000b98(0xea4);
    }
    iVar3 = FUN_00000bf0();
  } while ((int)uVar4 < 0);
  return uVar4 & 0xffff;
}



/* Function: FUN_00000e38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000e38(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 1000;
  iVar2 = FUN_00000bf0();
  iVar1 = _DAT_00000ea0;
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
      FUN_00000b98(0xebc);
    }
    iVar3 = FUN_00000bf0();
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0xffffffff;
}



/* Function: FUN_00000f80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000f80(void)

{
  _DAT_30000100 = _DAT_30000100 & 0xfffeffff;
  return;
}



/* Function: FUN_00000fa4 */

undefined4 FUN_00000fa4(void)

{
  return *(undefined4 *)(DAT_00001398 + -0x28);
}



/* Function: FUN_00000fb2 */

undefined4 FUN_00000fb2(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0;
  uVar1 = *(uint *)(DAT_00001398 + -0x20);
  if (*(int *)(DAT_00001398 + 8) != 1) {
    if (*(int *)(DAT_00001398 + 8) != 2) {
      return 0xffffffff;
    }
    bVar3 = CARRY4(uVar1,*(uint *)(DAT_00001398 + -4));
    uVar1 = uVar1 + *(uint *)(DAT_00001398 + -4);
    uVar2 = (uint)bVar3;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return 0;
}



/* Function: FUN_00000fdc */

undefined4 FUN_00000fdc(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = DAT_00001398 + -0x38;
  }
  else {
    if (param_1 != 1) {
      return 0xffffffff;
    }
    iVar1 = DAT_00001398 + -0x1c;
  }
  *param_2 = *(undefined4 *)(iVar1 + 0x18);
  return 0;
}



/* Function: FUN_00000ffa */

int FUN_00000ffa(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_00001398 + 0x10) + 0x10);
  return ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1d)) >> 3) <<
         *(sbyte *)(*(int *)(DAT_00001398 + 0x10) + 0xc);
}



/* Function: FUN_0000100e */

int FUN_0000100e(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00001398 + 0x10);
  return ((int)(*(int *)(iVar1 + 0x10) + ((uint)(*(int *)(iVar1 + 0x10) >> 0x1f) >> 0x1d)) >> 3) *
         (*(int *)(iVar1 + 4) << *(sbyte *)(iVar1 + 0xc));
}



/* Function: FUN_00001026 */

int FUN_00001026(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00001398 + 0x14);
  return ((int)(*(int *)(iVar1 + 0x10) + ((uint)(*(int *)(iVar1 + 0x10) >> 0x1f) >> 0x1d)) >> 3) *
         (*(int *)(iVar1 + 4) << *(sbyte *)(iVar1 + 0xc));
}



/* Function: FUN_0000103e */

int FUN_0000103e(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_00001398 + 0x10) + 0x10);
  return (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1d)) >> 3;
}



/* Function: FUN_0000104e */

undefined8 FUN_0000104e(uint *param_1,uint *param_2,uint param_3,uint param_4)

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
  uVar2 = FUN_00000ffa();
  uVar3 = FUN_0000100e();
  FUN_0000103e();
  iVar1 = DAT_00001398;
  if (*(uint **)(DAT_00001398 + -0x20) < param_1) {
    uVar3 = FUN_00001026();
  }
  iVar4 = FUN_00000fb2(&local_28);
  if (iVar4 == 0) {
    iVar4 = FUN_00000fdc(0,&local_20);
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



/* Function: FUN_00001110 */

void FUN_00001110(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_1c;
  
  FUN_00002fc8(s_DDR_dpll_clk_get_begin_0000139c);
  uVar2 = FUN_00001a7c();
  if (uVar2 != param_1) {
    FUN_00002fc8(s_DDR_dpll_clk_get_end_000013b8);
    iVar1 = DAT_000013d0;
    uVar3 = *(undefined4 *)(DAT_000013d0 + 0x1b4);
    if (param_1 - 0x4d9 < 0x168) {
      uVar4 = 2;
    }
    else if (param_1 < 0x3a9) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    uVar4 = FUN_00002d74(*(undefined4 *)(DAT_000013d0 + 0x1b4),0xf,2,uVar4);
    if (param_1 % 0x1a == 0) {
      uVar4 = FUN_00002d74(uVar4,0x11,0xb,param_1 / 0x1a,uVar4);
      uVar6 = FUN_00002d74(uVar4,9,1,0,uVar4);
      uVar5 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),uVar3);
      uVar4 = (undefined4)uVar6;
    }
    else {
      uVar4 = FUN_00002d74(uVar4,9,1,1,uVar4);
      uVar4 = FUN_00002d74(uVar4,0xb,1,1,uVar4);
      uVar3 = FUN_00002d74(uVar3,0x17,7,param_1 / 0x1a);
      uVar5 = FUN_00002d74(uVar3,0,0x17,((param_1 % 0x1a) * 0x800000) / 0x1a);
    }
    local_1c = (undefined4)uVar5;
    *(undefined4 *)(iVar1 + 0x1b4) = uVar4;
    *(undefined4 *)(iVar1 + 0x1b4) = local_1c;
    FUN_00002da4(200,(int)((ulonglong)uVar5 >> 0x20),uVar4,local_1c);
    return;
  }
  return;
}



/* Function: FUN_0000121e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000121e(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = FUN_00002d74(_DAT_30000008,0x10,1,0);
  _DAT_30000008 = FUN_00002d74(uVar1,10,5,param_1);
  FUN_00002da4(2);
  iVar5 = 0;
  uVar1 = FUN_00002d74(_DAT_30000008,0xf,1,0);
  iVar2 = FUN_00002d74(uVar1,0,5,0);
  _DAT_30000008 = iVar2;
  while ((int)(_DAT_30000008 << 0xe) < 0) {
    iVar5 = iVar5 + 1;
    iVar2 = FUN_00002d74(iVar2,0,5,iVar5);
    _DAT_30000008 = iVar2;
    FUN_00002da4(1);
  }
  iVar3 = 0x1f;
  uVar1 = FUN_00002d74(_DAT_30000008,0xf,1,0);
  iVar2 = FUN_00002d74(uVar1,0,5,0x1f);
  _DAT_30000008 = iVar2;
  while (-1 < (int)(_DAT_30000008 << 0xe)) {
    iVar3 = iVar3 + -1;
    iVar2 = FUN_00002d74(iVar2,0,5,iVar3);
    _DAT_30000008 = iVar2;
    FUN_00002da4(1);
  }
  _DAT_30000008 = FUN_00002d74(_DAT_30000008,0,5,(uint)(iVar5 + iVar3) >> 1);
  iVar5 = 0;
  uVar1 = FUN_00002d74(_DAT_30000008,0xf,1);
  iVar2 = FUN_00002d74(uVar1,5,5,0);
  _DAT_30000008 = iVar2;
  while (-1 < (int)(_DAT_30000008 << 0xe)) {
    iVar5 = iVar5 + 1;
    iVar2 = FUN_00002d74(iVar2,5,5,iVar5);
    _DAT_30000008 = iVar2;
    FUN_00002da4(1);
  }
  iVar3 = 0x1f;
  uVar1 = FUN_00002d74(_DAT_30000008,0xf,1);
  iVar2 = FUN_00002d74(uVar1,5,5,0x1f);
  _DAT_30000008 = iVar2;
  while ((int)(_DAT_30000008 << 0xe) < 0) {
    iVar3 = iVar3 + -1;
    iVar2 = FUN_00002d74(iVar2,5,5,iVar3);
    _DAT_30000008 = iVar2;
    FUN_00002da4(1);
  }
  _DAT_30000008 = FUN_00002d74(_DAT_30000008,5,5,(uint)(iVar5 + iVar3) >> 1);
  _DAT_30000008 = FUN_00002d74(_DAT_30000008,0x10,1);
  uVar6 = _DAT_30000008 & 0x1f;
  uVar4 = (_DAT_30000008 & 0x3ff) >> 5;
  uVar1 = FUN_00002d74(_DAT_30000390,0x15,1);
  uVar1 = FUN_00002d74(uVar1,0,5,uVar4);
  _DAT_30000390 = FUN_00002d74(uVar1,8,5,uVar6);
  uVar1 = FUN_00002d74(_DAT_30000490,0x15,1);
  uVar1 = FUN_00002d74(uVar1,0,5,uVar4);
  _DAT_30000490 = FUN_00002d74(uVar1,8,5,uVar6);
  return;
}



/* Function: FUN_000013fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000013fe(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00002d74(_DAT_30000004,0,3,1);
  uVar1 = FUN_00002d74(uVar1,0x10,3,1);
  _DAT_30000004 = FUN_00002d74(uVar1,0x14,6,0);
  _DAT_3000000c = FUN_00002d74(_DAT_3000000c,0,0xf);
  _DAT_30000100 = FUN_00002d74(_DAT_30000100,0x11,1);
  FUN_000030ee(*DAT_00001844,DAT_00001844 + 7);
  if (DAT_00001844[7] != param_1) {
    if (DAT_00001844[8] == param_1) {
      uVar1 = 1;
      goto LAB_00001478;
    }
    if (DAT_00001844[9] == param_1) {
      uVar1 = 2;
      goto LAB_00001478;
    }
  }
  uVar1 = 0;
LAB_00001478:
  _DAT_3000012c = FUN_00002d74(_DAT_3000012c,4,2,uVar1);
  uVar1 = FUN_00002d74(_DAT_30000000,0,3,1);
  uVar1 = FUN_00002d74(uVar1,0xe,2,1);
  _DAT_30000000 = FUN_00002d74(uVar1,4,3,2);
  uVar1 = FUN_00002d74(_DAT_30000100,8,1,0);
  uVar1 = FUN_00002d74(uVar1,0x11,1);
  uVar1 = FUN_00002d74(uVar1,7,1,0);
  _DAT_30000100 = FUN_00002d74(uVar1,4,3,2);
  return 0;
}



/* Function: FUN_000014da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000014da(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_0000318c(*DAT_00001844);
  do {
  } while ((_DAT_30000304 & _DAT_30000404 & _DAT_30000504 & 0x10000000) == 0);
  uVar1 = FUN_00002d74(_DAT_30000300,9,2,3);
  uVar1 = FUN_00002d74(uVar1,0xc,1);
  uVar1 = FUN_00002d74(uVar1,0xe,2,3);
  uVar1 = FUN_00002d74(uVar1,0x1b,1);
  _DAT_30000300 = FUN_00002d74(uVar1,0,7,param_1);
  _DAT_30000400 = _DAT_30000300;
  _DAT_30000500 = _DAT_30000300;
  return 0;
}



/* Function: FUN_00001546 */

void FUN_00001546(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00002d74(*param_1,0,4,param_2);
  uVar1 = FUN_00002d74(uVar1,0x10,8,param_3);
  uVar1 = FUN_00002d74(uVar1,0x18,8,param_4);
  *param_1 = uVar1;
  return;
}



/* Function: FUN_00001572 */

void FUN_00001572(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00002d74(*param_1,0,4,param_2);
  uVar1 = FUN_00002d74(uVar1,0x10,10,param_3);
  uVar1 = FUN_00002d74(uVar1,0x1f,1,param_4);
  *param_1 = uVar1;
  return;
}



/* Function: FUN_0000159e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000159e(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = DAT_00001844 + 0x28;
  do {
    iVar3 = iVar4 * 3 + iVar5;
    FUN_00001546(iVar4 * 4 + 0x30000020,*(undefined1 *)(iVar5 + iVar4 * 3),
                 *(undefined1 *)(iVar3 + 1),*(undefined1 *)(iVar3 + 2));
    iVar4 = iVar4 + 2;
  } while (iVar4 < 8);
  iVar4 = 1;
  do {
    iVar3 = iVar4 * 3 + iVar5;
    FUN_00001572(iVar4 * 4 + 0x30000020,*(undefined1 *)(iVar5 + iVar4 * 3),
                 *(undefined1 *)(iVar3 + 1),*(undefined1 *)(iVar3 + 2));
    iVar4 = iVar4 + 2;
  } while (iVar4 < 8);
  uVar2 = FUN_00002d74(_DAT_30000000,0x10,0xb,400);
  uVar2 = FUN_00002d74(uVar2,0x1b,1,0);
  _DAT_30000000 = FUN_00002d74(uVar2,9,2,3);
  _DAT_30000128 = DAT_00001848;
  *(undefined4 *)(DAT_00001850 + 0x2ec) = DAT_0000184c;
  iVar4 = DAT_00001858;
  *(undefined4 *)(DAT_00001858 + 0xa4) = DAT_00001854;
  *(undefined4 *)(iVar4 + 0xb8) = DAT_0000185c;
  *(undefined4 *)(iVar4 + 0xbc) = DAT_00001860;
  iVar4 = DAT_00001864;
  uVar2 = FUN_00002d74(*(undefined4 *)(DAT_00001864 + 0x58),0,0x18,DAT_00001868);
  *(undefined4 *)(iVar4 + 0x58) = uVar2;
  iVar4 = DAT_0000186c;
  puVar1 = (undefined4 *)(DAT_0000186c + 0x74);
  uVar2 = FUN_00002d74(*puVar1,0xc,4,9);
  *puVar1 = uVar2;
  uVar2 = FUN_00002d74(*(undefined4 *)(iVar4 + 0x78),0x14,4,0xc);
  uVar2 = FUN_00002d74(uVar2,0xc,4,9);
  uVar2 = FUN_00002d74(uVar2,0,4,9);
  *(undefined4 *)(iVar4 + 0x78) = uVar2;
  uVar2 = FUN_00002d74(*(undefined4 *)(iVar4 + 0x7c),0xc,4,9);
  *(undefined4 *)(iVar4 + 0x7c) = uVar2;
  uVar2 = FUN_00002d74(*(undefined4 *)(iVar4 + 0x80),0x14,4,0xc);
  uVar2 = FUN_00002d74(uVar2,0xc,4,9);
  uVar2 = FUN_00002d74(uVar2,0,4,9);
  *(undefined4 *)(iVar4 + 0x80) = uVar2;
  return;
}



/* Function: FUN_000016ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000016ec(void)

{
  undefined4 uVar1;
  
  _DAT_30000234 = FUN_00002d74(_DAT_30000234,0,0x10,0x400);
  _DAT_30000274 = FUN_00002d74(_DAT_30000274,0,0x10,0x600);
  _DAT_300002b4 = FUN_00002d74(_DAT_300002b4,0,0x10,0x854);
  uVar1 = FUN_00002d74(_DAT_30000124,0x10,4,0xf);
  uVar1 = FUN_00002d74(uVar1,0,3,5);
  uVar1 = FUN_00002d74(uVar1,4,4,0xf);
  _DAT_30000124 = FUN_00002d74(uVar1,8,4,0xf);
  uVar1 = FUN_00002d74(_DAT_30000114,0,0x18,0x1ff0);
  _DAT_30000114 = FUN_00002d74(uVar1,0x18,1,0);
  uVar1 = FUN_00002d74(_DAT_30000118,0x1a,2);
  _DAT_30000118 = FUN_00002d74(uVar1,0x18,1,0);
  uVar1 = FUN_00002d74(_DAT_3000010c,0xc,1);
  _DAT_3000010c = FUN_00002d74(uVar1,0xf,1,0);
  uVar1 = FUN_00002d74(_DAT_3000012c,0,4,0xf);
  uVar1 = FUN_00002d74(uVar1,0x11,1);
  _DAT_3000012c = FUN_00002d74(uVar1,0x14,0xc,0);
  _DAT_3000000c = FUN_00002d74(_DAT_3000000c,0,0xf,0x7fff);
  _DAT_30000100 = FUN_00002d74(_DAT_30000100,0x10,1);
  FUN_00002da4(1);
  _DAT_30000100 = FUN_00002d74(_DAT_30000100,0x10,1,0);
  _DAT_30000000 = FUN_00002d74(_DAT_30000000,4,6,3);
  FUN_00002ee0(2,1,0x23);
  _DAT_30000000 = FUN_00002d74(_DAT_30000000,8,1);
  _DAT_30000100 = FUN_00002d74(_DAT_30000100,0xc,1);
  uVar1 = DAT_00001870;
  FUN_00002d8a(DAT_00001870,6,1);
  FUN_00002d8a(uVar1,2,1,0);
  return 0;
}



/* Function: FUN_00001a7c */

int FUN_00001a7c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(DAT_00001c30 + 0x1b4);
  uVar3 = (*(uint *)(DAT_00001c30 + 0x1b4) & 0x3fffffff) >> 0x17;
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
      uVar1 = param_1 * (*(uint *)(DAT_00001c30 + 0x1b4) & 0x7fffff);
      return uVar3 * param_1 + (uint)(DAT_00001c34 <= (uVar1 & 0x7fffff)) + (uVar1 >> 0x17);
    }
    return uVar3 * param_1;
  }
  return (uVar1 & 0x7ff) * param_1;
}



/* Function: FUN_00001ae4 */

void FUN_00001ae4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00001c30 + 0x8c;
  iVar3 = DAT_00001c30 + 0xac;
  if (param_1 == 0x215) {
    uVar1 = 0xc;
  }
  else if (param_1 == 0x180) {
    uVar1 = 0xb;
  }
  else {
    uVar1 = 9;
  }
  FUN_00002d8a(iVar2,0xb,8,uVar1);
  FUN_00002d8a(iVar3,0,1);
  FUN_00002d8a(iVar2,0,1);
  FUN_00002d8a(iVar2,0,1);
  return;
}



/* Function: FUN_00001c38 */

void FUN_00001c38(void)

{
  int iVar1;
  
  *(uint *)(DAT_00001e80 + 0x14) = *(uint *)(DAT_00001e80 + 0x14) | 1;
  iVar1 = DAT_00001e84;
  *(uint *)(DAT_00001e84 + 0x9c) = *(uint *)(DAT_00001e84 + 0x9c) & 0xfffffcff;
  *(uint *)(iVar1 + 0x9c) = *(uint *)(iVar1 + 0x9c) | 0x100;
  *(uint *)(iVar1 + 0xa0) = *(uint *)(iVar1 + 0xa0) & 0xfffffcff;
  *(uint *)(iVar1 + 0xa0) = *(uint *)(iVar1 + 0xa0) | 0x100;
  return;
}



/* Function: FUN_00001c76 */

void FUN_00001c76(void)

{
  int iVar1;
  
  iVar1 = DAT_00001e84;
  *(uint *)(DAT_00001e84 + 0x80) = *(uint *)(DAT_00001e84 + 0x80) | 0x33;
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



/* Function: FUN_00001cfe */

undefined4 FUN_00001cfe(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_00001e8c;
  uVar1 = DAT_00001e88;
  *(uint *)(DAT_00001e8c + 0x300) = *(uint *)(DAT_00001e8c + 0x300) | 3;
  FUN_00001d94();
  FUN_00001da4(uVar1);
  FUN_00001e12(uVar1);
  *(undefined4 *)(DAT_00001e90 + 0x54) = 3;
  FUN_00001d94();
  *(uint *)(DAT_00001e94 + 0x20) = *(uint *)(DAT_00001e94 + 0x20) | 3;
  *(uint *)(iVar2 + 0x220) = *(uint *)(iVar2 + 0x220) | 3;
  *(uint *)(iVar2 + 0x2f8) = *(uint *)(iVar2 + 0x2f8) | 1;
  return 0;
}



/* Function: FUN_00001d58 */

void FUN_00001d58(void)

{
  *(uint *)(DAT_00001e9c + 0xb0) = *(uint *)(DAT_00001e9c + 0xb0) | 0x2800;
  *(uint *)(DAT_00001e94 + 0x20) = *(uint *)(DAT_00001e94 + 0x20) & 0xfffffffc;
  *(uint *)(DAT_00001e8c + 0x300) = *(uint *)(DAT_00001e8c + 0x300) & 0xfffffffc;
  FUN_00001c38();
  FUN_00001c76();
  FUN_00001cfe();
  *(undefined4 *)(DAT_00001e98 + 4) = 0x30;
  return;
}



/* Function: FUN_00001d94 */

void FUN_00001d94(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x100);
  return;
}



/* Function: FUN_00001da4 */

undefined4 FUN_00001da4(uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_1 / DAT_00001ea4;
  bVar2 = param_1 != DAT_00001ea4 * uVar1;
  *(uint *)(DAT_00001e90 + 0x38) =
       (bVar2 + uVar1) - 1 |
       DAT_00001ea8 + (bVar2 + uVar1) * 0x10000 |
       (bVar2 + uVar1) * 0x100 - 0x100 | *(uint *)(DAT_00001e90 + 0x38) & DAT_00001ea0;
  *(uint *)(DAT_00001e8c + 0x270) = *(uint *)(DAT_00001e8c + 0x270) | 3;
  return 0;
}



/* Function: FUN_00001e12 */

undefined4 FUN_00001e12(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  param_1 = param_1 / DAT_00001eb0;
  puVar3 = DAT_00001eb4 + 1;
  for (puVar1 = DAT_00001eac; *puVar1 < param_1 * 1000000; puVar1 = puVar1 + 2) {
  }
  *DAT_00001eb4 = *DAT_00001eb4 & 0xffffff3f | 5 | ((byte)puVar1[1] & 3) << 6;
  *puVar3 = ((param_1 % 0x1a) * 0x800000) / 0x1a & 0x7fffff | (param_1 / 0x1a & 0x7f) << 0x17 |
            *puVar3 & 0xc0000000;
  uVar2 = 0;
  do {
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xc80);
  return 0;
}



/* Function: FUN_00001fa4 */

void FUN_00001fa4(byte *param_1,int param_2)

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



/* Function: FUN_00001fd4 */

uint FUN_00001fd4(ushort *param_1,uint param_2)

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
      goto LAB_0000200c;
    }
    uVar3 = (uint)*param_1;
  }
  uVar4 = uVar4 + uVar3;
LAB_0000200c:
  uVar4 = (uVar4 >> 0x10) + (uVar4 & 0xffff);
  return ~(uVar4 + (uVar4 >> 0x10)) & 0xffff;
}



/* Function: FUN_00002104 */

void FUN_00002104(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a0 [140];
  
  iVar2 = 0;
  FUN_00004eec(auStack_a0);
  for (; iVar1 = param_1 + iVar2 * 0x40, 0x3f < param_2; param_2 = param_2 + -0x40) {
    FUN_00004f2c(auStack_a0,iVar1,0x40);
    iVar2 = iVar2 + 1;
  }
  FUN_0000512a(auStack_a0,iVar1,param_2);
  FUN_00005980(param_3,auStack_a0,0x20);
  return;
}



/* Function: FUN_00002142 */

int FUN_00002142(int param_1)

{
  return param_1 + 0x200 + *(int *)(param_1 + 0x30);
}



/* Function: FUN_0000215a */

int FUN_0000215a(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_r2;
  
  iVar1 = FUN_00002142(param_1,param_2,param_1);
  return *(int *)(iVar1 + 0x28) + extraout_r2;
}



/* Function: FUN_00002168 */

undefined8 FUN_00002168(void)

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
  
  iVar1 = FUN_0000215a();
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



/* Function: FUN_00002180 */

bool FUN_00002180(int param_1)

{
  if (param_1 != 0) {
    FUN_000051f0(2,param_1,1);
  }
  return param_1 != 0;
}



/* Function: FUN_00002196 */

undefined4 FUN_00002196(undefined4 param_1,undefined4 param_2,byte *param_3)

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
  FUN_00005ac8(auStack_154,0x100);
  FUN_00005ac8(auStack_54,0x20);
  pbVar5 = param_3 + 0x10c;
  if (bVar1 == 0) {
    FUN_00002104(param_3 + 4,(*(uint *)(param_3 + 4) >> 3) + 8,auStack_54);
    iVar3 = FUN_00005924(param_2,pbVar5,0x20);
    if ((iVar3 != 0) || (iVar3 = FUN_00005924(local_30,auStack_54,0x20), iVar3 != 0)) {
LAB_000021fa:
      pcVar2 = s_compare_hash_fail_00002398;
      goto LAB_0000228e;
    }
    iVar3 = FUN_00004b4c(param_3 + 8,param_3 + 0xc,*(undefined4 *)(param_3 + 4),param_3 + 0x134,
                         auStack_154);
    if (((0x20 << (uint)*param_3) + 8 != iVar3) ||
       (iVar3 = FUN_00005924(pbVar5,auStack_154), iVar3 != 0)) {
      pcVar2 = s_content_cert_hash_verify_fail_000023e0;
      goto LAB_0000228e;
    }
    FUN_00002180(&local_34);
    uVar4 = *(uint *)(param_3 + 0x130);
  }
  else {
    if (bVar1 != 1) {
      pcVar2 = s_cert_type_invalid_00002384;
      goto LAB_0000228e;
    }
    FUN_00002104(param_3 + 4,(*(uint *)(param_3 + 4) >> 3) + 8,auStack_54);
    iVar3 = FUN_00005924(param_2,pbVar5,0x20);
    if ((iVar3 != 0) || (iVar3 = FUN_00005924(local_30,auStack_54,0x20), iVar3 != 0))
    goto LAB_000021fa;
    iVar3 = FUN_00004b4c(param_3 + 8,param_3 + 0xc,*(undefined4 *)(param_3 + 4),param_3 + 0x154,
                         auStack_154);
    if (((0x20 << (uint)*param_3) + 8 != iVar3) ||
       (iVar3 = FUN_00005924(pbVar5,auStack_154), iVar3 != 0)) {
      pcVar2 = s_key_cert_hash_verify_fail_000023ac;
      goto LAB_0000228e;
    }
    FUN_00002180(&local_34);
    uVar4 = *(uint *)(param_3 + 0x150);
  }
  if (local_34 <= uVar4) {
    return 1;
  }
  pcVar2 = s_antiroll_back_error_000023c8;
LAB_0000228e:
  FUN_00000b98(pcVar2);
  return 0;
}



/* Function: FUN_00002314 */

undefined4 FUN_00002314(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [36];
  
  uVar3 = 0;
  FUN_00005ac8(auStack_60,0x20);
  FUN_00002168(param_1,auStack_60);
  iVar1 = DAT_00002380;
  iVar2 = *(int *)(param_2 + 0x30) + param_2 + 0x200;
  *(int *)(DAT_00002380 + -4) = iVar2;
  FUN_00005ac8(auStack_40,0x20);
  if (*(int *)(iVar2 + 0x20) == 0 && *(int *)(iVar2 + 0x24) == 0) {
    FUN_00000b98(s_cert_empty_00002400);
  }
  else {
    FUN_00002104(param_2 + 0x200,param_3,auStack_40);
    uVar3 = FUN_00002196(auStack_60,auStack_40,*(int *)(*(int *)(iVar1 + -4) + 0x28) + param_2);
  }
  return uVar3;
}



/* Function: FUN_0000240c */

undefined4 FUN_0000240c(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  FUN_00000c4a(3);
  iVar2 = FUN_00000bf0();
  uVar1 = DAT_00002544;
  iVar2 = iVar2 + DAT_00002540;
  do {
    uVar3 = FUN_00000e12(uVar1);
    iVar4 = FUN_00000bf0();
    if (iVar2 - iVar4 < 0) {
      return 0xffffffff;
    }
  } while ((param_1 & ~uVar3) != 0);
  return 0;
}



/* Function: FUN_00002448 */

undefined4 FUN_00002448(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar2 = DAT_00002548;
  uVar6 = 0;
  uVar3 = FUN_00000e12(DAT_00002548);
  FUN_00000e38(uVar2,uVar3 | 0x40);
  iVar1 = DAT_00002544;
  iVar5 = DAT_00002544 + -4;
  uVar3 = FUN_00000e12(iVar5);
  FUN_00000e38(iVar5,uVar3 | 4);
  uVar4 = FUN_0000240c(4);
  uVar3 = DAT_0000254c;
  if (uVar4 <= DAT_0000254c) {
    FUN_00000e38(iVar1 + -8,param_1 & 0x1f);
    uVar4 = FUN_00000e12(iVar5);
    FUN_00000e38(iVar5,uVar4 | 2);
    uVar4 = FUN_0000240c(0x10);
    if (uVar4 <= uVar3) {
      uVar6 = FUN_00000e12(DAT_00002544 + -0x10);
      uVar3 = FUN_00000e12(iVar5);
      FUN_00000e38(iVar5,uVar3 | 4);
    }
  }
  uVar3 = FUN_00000e12(uVar2);
  FUN_00000e38(uVar2,uVar3 & 0xffffffbf);
  return uVar6;
}



/* Function: FUN_00002d74 */

uint FUN_00002d74(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = (1 << (param_3 & 0xff)) - 1;
  return param_1 & ~(uVar1 << (param_2 & 0xff)) | (param_4 & uVar1) << (param_2 & 0xff);
}



/* Function: FUN_00002d8a */

void FUN_00002d8a(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = (1 << (param_3 & 0xff)) - 1;
  *param_1 = (param_4 & uVar1) << (param_2 & 0xff) | *param_1 & ~(uVar1 << (param_2 & 0xff));
  return;
}



/* Function: FUN_00002da4 */

undefined4 FUN_00002da4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  for (local_c = 0; local_c < param_1 * 2; local_c = local_c + 1) {
    local_8 = *(undefined4 *)(DAT_00003080 + 0xc4);
  }
  return local_8;
}



/* Function: FUN_00002ee0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002ee0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00002d74(_DAT_30000108,0,8,param_3);
  _DAT_30000108 = param_3;
  if (param_1 == 0) {
    uVar1 = FUN_00002d74(_DAT_30000104,0x1f,1);
    uVar3 = 0;
  }
  else {
    if (param_1 != 1) {
      uVar3 = 1;
      uVar2 = 0x1f;
      uVar1 = _DAT_30000104;
      goto LAB_00002f12;
    }
    uVar1 = FUN_00002d74(_DAT_30000104,0x1f,1,0);
    uVar3 = 1;
  }
  uVar2 = 0x1c;
LAB_00002f12:
  uVar1 = FUN_00002d74(uVar1,uVar2,1,uVar3);
  uVar1 = FUN_00002d74(uVar1,0x18,1);
  _DAT_30000104 = FUN_00002d74(uVar1,0,0x10,param_2);
  return;
}



/* Function: FUN_00002fc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002fc8(byte *param_1)

{
  uint *puVar1;
  
  puVar1 = _DAT_00003090;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    do {
    } while ((puVar1[3] & 0xff00) != 0);
    *puVar1 = (uint)*param_1;
  }
  return;
}



/* Function: FUN_00002fe0 */

char * FUN_00002fe0(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char acStack_38 [40];
  
  FUN_00005a54(acStack_38,s_p0123456789ABCDEFGHIJKLMNOPQRSTU_00003093 + 1,0x28);
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



/* Function: FUN_000030ce */

int FUN_000030ce(int param_1,int param_2,int param_3)

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



/* Function: FUN_000030ee */

undefined4 FUN_000030ee(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r12;
  
  iVar1 = DAT_000034c0;
  uVar5 = 0xffffffff;
  if (param_1 == 0x101) {
    iVar4 = 0;
    do {
      iVar2 = FUN_000030ce(iVar1,3,*(undefined4 *)(param_2 + iVar4 * 4));
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



/* Function: FUN_0000318c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000318c(void)

{
  _DAT_30000308 = *(undefined4 *)(DAT_000034c0 + -0x60);
  _DAT_30000300 = *(uint *)(DAT_000034c0 + -0x74) & 0xfefffeff | 0x2004000;
  _DAT_30000408 = *(undefined4 *)(DAT_000034c0 + -0x5c);
  _DAT_3000040c = *(undefined4 *)(DAT_000034c0 + -0x4c);
  _DAT_30000410 = *(undefined4 *)(DAT_000034c0 + -0x3c);
  _DAT_30000400 = *(uint *)(DAT_000034c0 + -0x70) & 0xfefffeff | 0x2004000;
  _DAT_30000508 = *(undefined4 *)(DAT_000034c0 + -0x58);
  _DAT_3000050c = *(undefined4 *)(DAT_000034c0 + -0x48);
  _DAT_30000510 = *(undefined4 *)(DAT_000034c0 + -0x38);
  _DAT_30000500 = *(uint *)(DAT_000034c0 + -0x6c) & 0xfefffeff | 0x2004000;
  return 0;
}



/* Function: FUN_00003468 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003468(int param_1)

{
  undefined4 uVar1;
  
  _DAT_3000000c = 0;
  _DAT_30000100 = FUN_00002d74(_DAT_30000100,0xe,1);
  FUN_00002da4(500);
  FUN_00002ee0(3,0x3f,0);
  FUN_00002da4(10);
  FUN_00002ee0(0,10,0xff);
  FUN_00002ee0(1,10,0xff);
  FUN_00002da4(500);
  _DAT_30000490 = FUN_00002d74(_DAT_30000490,0x18,2,3);
  if (param_1 == 0x215) {
    uVar1 = 6;
LAB_0000350a:
    FUN_00002ee0(0,2,uVar1);
    if (param_1 == 0x215) {
      _DAT_30000108 = 0xc3;
      goto LAB_0000352e;
    }
    if (param_1 != 0x180) {
      if (param_1 == 0x100) {
        _DAT_30000108 = 0x43;
      }
      goto LAB_0000352e;
    }
  }
  else {
    if (param_1 != 0x180) {
      uVar1 = 2;
      goto LAB_0000350a;
    }
    FUN_00002ee0(0,2,4);
  }
  _DAT_30000108 = 0x83;
LAB_0000352e:
  _DAT_3000000c = 0x7fff;
  do {
  } while ((DAT_00003614 >> 0x14 & 0x7f) != 0);
  _DAT_30000104 = DAT_00003614;
  do {
  } while ((DAT_00003614 >> 0x14 & 0x7f) != 0);
  return;
}



/* Function: FUN_0000361c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0000361c(void)

{
  return (*(uint *)(((_DAT_3000012c & 0x3f) >> 4) * 0x40 + 0x30000230) & 0xffff) >> 0xf;
}



/* Function: FUN_00003636 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00003636(void)

{
  return (*(uint *)(((_DAT_3000012c & 0x3f) >> 4) * 0x40 + 0x3000022c) & 0x1ff) >> 8;
}



/* Function: FUN_00003650 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003650(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((_DAT_3000012c & 0x3f) >> 4) * 0x40;
  uVar2 = FUN_00002d74(*(undefined4 *)(iVar1 + 0x3000022c),8,1,param_1);
  *(undefined4 *)(iVar1 + 0x3000022c) = uVar2;
  return;
}



/* Function: FUN_00003676 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00003676(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  uVar2 = FUN_00003636();
  FUN_00003650(0);
  FUN_000014da(8);
  FUN_00002da4(10);
  local_20[0] = _DAT_30000404 & 0x7f;
  local_20[1] = _DAT_30000504 & 0x7f;
  iVar3 = FUN_0000361c(local_20[1],extraout_r1,_DAT_30000304 & 0x7f);
  iVar1 = DAT_00003ac4;
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
  *DAT_00003ac8 = uVar5 << 2;
  FUN_00003650(uVar2);
  return CONCAT44(local_20[1],local_20[0]);
}



/* Function: FUN_000036ea */

undefined4 FUN_000036ea(undefined4 param_1)

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
  
  FUN_00005a54(auStack_30,DAT_00003acc,0x20);
  local_54 = 0x40000;
  local_5c = 0;
  FUN_00000fb2(&local_68);
  if (uStack_64 == 0 && (local_54 <= local_68) <= uStack_64) {
    local_54 = local_68;
  }
  local_58 = local_68 - local_54;
  FUN_00005a54(auStack_50,auStack_30,0x20);
  iVar1 = FUN_00005284(param_1,&local_5c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: FUN_00003774 */

undefined4 FUN_00003774(void)

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
  
  FUN_00005a54(auStack_28,DAT_00003acc + -0x20,0x20);
  local_4c = 0x40000;
  local_54 = 0;
  FUN_00000fb2(&local_60);
  if (uStack_5c == 0 && (local_4c <= local_60) <= uStack_5c) {
    local_4c = local_60;
  }
  local_50 = local_60 - local_4c;
  FUN_00005a54(auStack_48,auStack_28,0x20);
  iVar1 = FUN_00005284(1,&local_54);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: FUN_000038e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000038e0(int param_1,ushort *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_48 [4];
  undefined4 local_38 [5];
  
  local_38[0] = DAT_00003ad0;
  local_38[1] = DAT_00003ad4;
  local_48[0] = ((*param_2 & 0x7fff) >> 8) << 2;
  local_48[1] = ((param_2[2] & 0x7fff) >> 8) << 2;
  iVar1 = FUN_00003636(_DAT_30000504,_DAT_30000404);
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
    uVar4 = FUN_00002d74(*(undefined4 *)(param_2 + iVar1 * 2),0x1e,2,uVar4);
    uVar4 = FUN_00002d74(uVar4,0x10,7,uVar2 >> 2);
    uVar4 = FUN_00002d74(uVar4,0x1c,2,uVar2);
    **(undefined4 **)(param_1 + iVar1 * 4) = uVar4;
    *(uint *)local_38[iVar1] = *(uint *)local_38[iVar1] | 0x800;
    FUN_00002da4(10);
    *(uint *)local_38[iVar1] = *(uint *)local_38[iVar1] & 0xfffff7ff;
    FUN_00000f80();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 0;
}



/* Function: FUN_00003cbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003cbc(int param_1)

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
  FUN_0000417e();
  iVar4 = 0;
  do {
    iVar6 = -1;
    iVar2 = -1;
    iVar3 = -1;
    iVar5 = DAT_00004078;
    if (param_1 == 0) {
      iVar5 = DAT_00004078 + -0x10;
    }
    _DAT_30000194 = *(undefined4 *)(iVar5 + iVar4 * 4);
    iVar5 = 0;
    do {
      *local_60[iVar4] = iVar5;
      FUN_00000f80();
      iVar1 = FUN_000036ea(2);
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
LAB_00003d6a:
      local_30 = -1;
      *local_60[iVar4] = local_50[iVar4];
      break;
    }
    if (((iVar2 < 0) || (iVar2 < iVar3)) && (iVar6 == 1)) {
      iVar2 = 0x7f;
    }
    if (iVar2 - iVar3 < 0x10) goto LAB_00003d6a;
    *local_60[iVar4] = local_50[iVar4];
    FUN_00000f80();
    iVar5 = (iVar3 + iVar2) * 4 + ((iVar3 + iVar2 & 0x3fffffffU) >> 0x1d);
    iVar3 = iVar5 >> 1;
    local_40[iVar4] = iVar3;
    *(int *)(DAT_0000407c + param_1 * 0x10 + iVar4 * 4) =
         (int)(iVar3 + ((uint)(iVar5 >> 0x1f) >> 0x1e)) >> 2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  _DAT_30000194 = local_28;
  FUN_0000417e(0);
  if (local_30 == 0) {
    FUN_000038e0(local_60,local_50,local_40,local_2c);
  }
  FUN_00000f80();
  return 0;
}



/* Function: FUN_00003df0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003df0(uint param_1)

{
  if (0x1f < param_1) {
    param_1 = 0x1f;
  }
  _DAT_30000428 = FUN_00002d74(_DAT_30000428,0,5,param_1);
  _DAT_30000528 = FUN_00002d74(_DAT_30000528,0,5,param_1);
  _DAT_30000628 = FUN_00002d74(_DAT_30000628,0,5,param_1);
  _DAT_30000728 = FUN_00002d74(_DAT_30000728,0,5,param_1);
  return;
}



/* Function: FUN_00003e48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003e48(void)

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
  local_58[0] = DAT_00004080;
  local_58[1] = _DAT_00004084;
  local_68[0] = _DAT_30000408;
  iVar4 = 0;
  local_68[1] = _DAT_30000508;
  do {
    local_2c = 1;
    iVar7 = -1;
    iVar5 = -1;
    uVar6 = 0xffffffff;
    *(undefined4 *)(local_38 + 0x194) = *(undefined4 *)(DAT_00004078 + -0x20 + iVar4 * 4);
    FUN_00003df0(0x1f);
    uVar2 = *(uint *)(DAT_0000407c + -0x20 + iVar4 * 4) >> 2;
    for (uVar3 = 0; uVar3 < uVar2 + 8; uVar3 = uVar3 + 1) {
      if (uVar3 < uVar2) {
        *(uint *)local_58[iVar4] = uVar3;
      }
      else {
        FUN_00003df0(0);
        *(uint *)local_58[iVar4] = uVar3 - 8;
      }
      FUN_00000f80();
      iVar1 = FUN_000036ea(2);
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
      goto LAB_00003f7e;
    }
    if (((iVar5 < 0) || (iVar5 < (int)uVar6)) && (iVar7 == 1)) {
      iVar5 = uVar2 + 7;
    }
    iVar7 = uVar6 - local_2c;
    *(undefined4 *)local_58[iVar4] = local_68[iVar4];
    FUN_00000f80();
    uVar2 = iVar7 + 1 + iVar5;
    iVar5 = (int)(uVar2 * 4 + ((uVar2 & 0x3fffffff) >> 0x1d)) >> 1;
    local_48[iVar4] = iVar5;
    iVar5 = iVar5 + -0x20;
    local_48[iVar4] = iVar5;
    *(int *)(DAT_0000407c + -0x10 + iVar4 * 4) = (int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1e)) >> 2
    ;
    iVar4 = iVar4 + 1;
    if (1 < iVar4) {
LAB_00003f7e:
      *(undefined4 *)(local_38 + 0x194) = local_30;
      if (local_34 == 0) {
        FUN_000038e0(local_58,local_68,local_48,0);
      }
      FUN_00003df0(0);
      FUN_00000f80();
      return 0;
    }
  } while( true );
}



/* Function: FUN_00003faa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003faa(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  
  iVar1 = FUN_00003774();
  if (iVar1 != 0) {
    FUN_00002fc8(s_0sipi_bist_simple_test_first_fai_00004087 + 1);
  }
  if (*(int *)(DAT_000040bc + 8) == param_1) {
    uVar4 = 7;
    do {
      uVar2 = FUN_00002d74(*(undefined4 *)(&DAT_30000180 + uVar4 * 4),0,0x20,0xffff);
      *(undefined4 *)(&DAT_30000180 + uVar4 * 4) = uVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0xf);
    iVar1 = FUN_00003e48();
    if (iVar1 == 0) {
      iVar1 = FUN_00003cbc(0);
      if (iVar1 == 0) {
        iVar1 = FUN_00003cbc(1);
        if (iVar1 == 0) {
          _DAT_3000019c = FUN_00002d74(_DAT_3000019c,0,0x20,DAT_00004134);
          _DAT_300001a0 = FUN_00002d74(_DAT_300001a0,0,0x20,DAT_00004138);
          _DAT_300001a4 = FUN_00002d74(_DAT_300001a4,0,0x20,DAT_0000413c);
          _DAT_300001a8 = FUN_00002d74(_DAT_300001a8,0,0x20,DAT_00004140);
          _DAT_300001ac = FUN_00002d74(_DAT_300001ac,0,0x20,DAT_00004144);
          _DAT_300001b0 = FUN_00002d74(_DAT_300001b0,0,0x20,0x55);
          _DAT_300001b4 = FUN_00002d74(_DAT_300001b4,0,0x20);
          _DAT_300001b8 = FUN_00002d74(_DAT_300001b8,0,0x20);
          iVar1 = FUN_00003774();
          if (iVar1 == 0) goto LAB_00004176;
          pcVar3 = s_sipi_bist_simple_test_lasted_Fai_00004200;
        }
        else {
          pcVar3 = s_dmc_lpddr3_rde_training_neg_fail_0000410c;
        }
      }
      else {
        pcVar3 = s_dmc_lpddr3_rde_training_pos_fail_000040e4;
      }
    }
    else {
      pcVar3 = s_dmc_lpddr3_wde_training_Failed_000040c0;
    }
    FUN_00002fc8(pcVar3);
    uVar2 = 0xffffffff;
  }
  else {
LAB_00004176:
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: FUN_0000417e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000417e(uint param_1)

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



/* Function: FUN_00004228 */

void FUN_00004228(void)

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
  
  puVar1 = DAT_0000461c;
  puVar4 = DAT_0000461c + 0xc9;
  puVar5 = DAT_0000461c + 0x10c;
  puVar6 = DAT_0000461c + 0x43;
  puVar7 = DAT_0000461c + 0x86;
  puVar8 = DAT_0000461c + 0x14f;
  puVar9 = DAT_0000461c + 0x192;
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



/* Function: FUN_0000429c */

undefined4 FUN_0000429c(int *param_1,int *param_2)

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



/* Function: FUN_000042d2 */

void FUN_000042d2(undefined4 *param_1,undefined4 *param_2)

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



/* Function: FUN_000042ee */

void FUN_000042ee(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

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



/* Function: FUN_0000431a */

void FUN_0000431a(int *param_1,int *param_2,int *param_3)

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



/* Function: FUN_000043c4 */

void FUN_000043c4(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = 0;
  uVar6 = FUN_0000429c(param_2,param_3);
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
  FUN_000042ee(param_1,(int)((ulonglong)uVar6 >> 0x20),0,0);
  return;
}



/* Function: FUN_000044d4 */

void FUN_000044d4(int *param_1,int *param_2,uint param_3,int param_4)

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



/* Function: FUN_0000453c */

void FUN_0000453c(int *param_1,int *param_2,int *param_3)

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
  FUN_000044d4(param_1,param_2,param_3[1],0);
  return;
}



/* Function: FUN_000045f0 */

void FUN_000045f0(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  *param_1 = *param_2;
  iVar2 = *param_2;
  if (*param_2 == 1) {
    iVar2 = FUN_000055c0(param_2[1],0);
    param_1[1] = iVar2;
  }
  else {
    while (-1 < iVar2 + -1) {
      iVar3 = param_2[iVar2];
      iVar1 = FUN_000055c0(iVar3,iVar1,param_3,param_4);
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



/* Function: FUN_00004764 */

void FUN_00004764(int *param_1,undefined4 param_2,int *param_3)

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
  
  FUN_000042d2();
  while( true ) {
    iVar2 = FUN_0000429c(param_1,param_3);
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
    uVar8 = FUN_000055c0(uVar6,uVar3,uVar5 + 1,0xfffffffe < uVar5);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_000042ee(auStack_12c,uVar4,(int)uVar8,uVar4);
    FUN_0000453c(&local_238,param_3,auStack_12c);
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
    FUN_000043c4(param_1,param_1,&local_238);
  }
  FUN_000043c4(param_1,param_1,param_3);
  return;
}



/* Function: FUN_00004880 */

void FUN_00004880(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_00005980(param_1 + 1,param_2,param_3 << 2);
  for (iVar1 = param_3; iVar1 < 0x42; iVar1 = iVar1 + 1) {
    param_1[iVar1 + 1] = 0;
  }
  *param_1 = param_3;
  return;
}



/* Function: FUN_000048a4 */

void FUN_000048a4(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_0000544c(param_2,param_3);
  FUN_00004880(param_1,param_2,param_3 >> 2);
  FUN_0000544c(param_2,param_3);
  return;
}



/* Function: FUN_00004954 */

void FUN_00004954(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

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
  FUN_000042d2(param_1,param_2);
  for (uVar1 = iVar3 - 2; -1 < (int)uVar1; uVar1 = uVar1 - 1) {
    FUN_000044d4(local_240,param_1,param_1[*param_1],0);
    FUN_00004764(local_240,local_240,param_4);
    for (iVar3 = 1; iVar2 = local_240[0], iVar3 < *param_1; iVar3 = iVar3 + 1) {
      for (; 0 < iVar2; iVar2 = iVar2 + -1) {
        local_240[iVar2 + 1] = local_240[iVar2];
      }
      local_240[1] = 0;
      local_240[0] = local_240[0] + 1;
      FUN_000044d4(auStack_134,param_1,param_1[*param_1 - iVar3],0);
      FUN_0000431a(local_240,local_240,auStack_134);
      FUN_00004764(local_240,local_240,param_4);
    }
    FUN_000042d2(param_1,local_240);
    if (((uint)param_3[((int)uVar1 >> 5) + 1] >> (uVar1 & 0x1f) & 1) != 0) {
      FUN_000044d4(local_240,param_2,param_1[*param_1],0);
      FUN_00004764(local_240,local_240,param_4);
      for (iVar3 = 1; iVar2 = local_240[0], iVar3 < *param_1; iVar3 = iVar3 + 1) {
        for (; 0 < iVar2; iVar2 = iVar2 + -1) {
          local_240[iVar2 + 1] = local_240[iVar2];
        }
        local_240[1] = 0;
        local_240[0] = local_240[0] + 1;
        FUN_000044d4(auStack_134,param_2,param_1[*param_1 - iVar3],0);
        FUN_0000431a(local_240,local_240,auStack_134);
        FUN_00004764(local_240,local_240,param_4);
      }
      FUN_000042d2(param_1,local_240);
    }
  }
  return;
}



/* Function: FUN_00004a9c */

undefined4 FUN_00004a9c(void)

{
  int iVar1;
  
  iVar1 = FUN_0000429c(DAT_00004cc8 + -0x10c);
  if (-1 < iVar1) {
    return 0xffffffff;
  }
  FUN_00004954(DAT_00004cc8 + -0x218);
  return 1;
}



/* Function: FUN_00004ac8 */

undefined4 FUN_00004ac8(void)

{
  int iVar1;
  
  iVar1 = FUN_0000429c(DAT_00004cc8 + -0x218);
  if (-1 < iVar1) {
    return 0xffffffff;
  }
  FUN_00004954(DAT_00004cc8 + -0x10c);
  return 1;
}



/* Function: FUN_00004b4c */

void FUN_00004b4c(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 uStack_11c;
  undefined1 auStack_11b [259];
  
  param_3 = param_3 >> 3;
  FUN_00004228();
  if (param_1 != 0) {
    FUN_000048a4(DAT_00004ccc,param_1,4);
  }
  if (param_2 != 0) {
    FUN_000048a4(DAT_00004cc8,param_2,param_3);
  }
  FUN_000048a4(DAT_00004cd0,param_4,param_3);
  FUN_00004ac8();
  FUN_00005a54(&uStack_11c,DAT_00004cd4 + 1,*DAT_00004cd4 << 2);
  FUN_0000544c(&uStack_11c,param_3);
  FUN_000054b8(param_5,param_3,auStack_11b,param_3 + -1,param_3);
  return;
}



/* Function: FUN_00004eec */

void FUN_00004eec(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    *(undefined4 *)(param_1 + iVar2 + 0x20) = 0;
  } while (iVar1 < 0x11);
  *(undefined4 *)(param_1 + 0x60) = DAT_000051b4;
  *(undefined4 *)(param_1 + 100) = DAT_000051b8;
  *(undefined4 *)(param_1 + 0x68) = DAT_000051bc;
  *(undefined4 *)(param_1 + 0x6c) = DAT_000051c0;
  *(undefined4 *)(param_1 + 0x70) = DAT_000051c4;
  *(undefined4 *)(param_1 + 0x74) = DAT_000051c8;
  *(undefined4 *)(param_1 + 0x78) = DAT_000051cc;
  *(undefined4 *)(param_1 + 0x7c) = DAT_000051d0;
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1;
    iVar1 = iVar1 + 1;
    *(undefined1 *)(iVar2 + 0x80) = 0;
  } while (iVar1 < 8);
  return;
}



/* Function: FUN_00004f2c */

void FUN_00004f2c(int param_1,byte *param_2,uint param_3)

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
          FUN_00005a54(local_250,DAT_000051d4,0x100);
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



/* Function: FUN_0000512a */

void FUN_0000512a(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined1 auStack_5c [72];
  
  FUN_00005ac8(auStack_5c,0x44);
  local_60 = *(undefined4 *)(DAT_000051d4 + -4);
  if (param_3 != 0) {
    FUN_00004f2c(param_1,param_2,param_3);
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
  FUN_00004f2c(param_1,&local_60);
  iVar2 = 0;
  do {
    *(char *)(param_1 + iVar2) =
         (char)(*(uint *)((iVar2 / 4) * 4 + param_1 + 0x60) >> ((iVar2 % 4) * -8 + 0x18U & 0xff));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  return;
}



/* Function: FUN_000051f0 */

undefined4 FUN_000051f0(uint param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = DAT_0000527c;
  if (0x39 < param_1) {
    return 6;
  }
  *(undefined4 *)(DAT_0000527c + 0x48) = 0xffff;
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
  uVar2 = *(undefined4 *)(DAT_00005280 + param_1 * 4);
  *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) & 0xfffffffb;
  *param_2 = uVar2;
  return 0;
}



/* Function: FUN_00005284 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00005284(int param_1,uint *param_2)

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
    iVar2 = FUN_00000fa4();
    uVar1 = (uint)(iVar2 * iVar7) >> 3;
    if (uVar8 == uVar1 * (uVar8 / uVar1)) {
      iVar3 = FUN_0000104e(uVar8,&local_40);
      uVar4 = _DAT_30000100;
      iVar2 = DAT_00005448;
      if (iVar3 == 0) {
        uVar6 = 0;
        _DAT_30000198 = uVar5;
        if (*(int *)(DAT_00005448 + 0x18) != 0) {
          _DAT_30000100 =
               FUN_00002d74(_DAT_30000100,4,3,*(int *)(*(int *)(DAT_00005448 + 0x14) + 0xc) + -8);
          uVar6 = uVar4;
        }
        _DAT_30000184 = uVar10 >> 2;
        _DAT_30000188 = 0;
        _DAT_3000018c =
             ((1 << (local_38 & 0xff)) + -1) * 0x10000 | (~(1 << (local_40 & 0xff)) & 1U) << 0xf |
             ((1 << (local_3c & 0xff)) - 1U & 7) << 0xc | (1 << (local_34 & 0xff)) - 1U & 0xff8;
        uVar4 = FUN_00002d74(_DAT_30000180,0xd,1);
        uVar4 = FUN_00002d74(uVar4,0,1);
        _DAT_30000180 = FUN_00002d74(uVar4,0x10,10,iVar7);
        uVar4 = FUN_00002d74(_DAT_30000180,0xd,1,0);
        _DAT_30000180 = FUN_00002d74(uVar4,8,2,local_2c);
        uVar4 = FUN_00002d74(_DAT_30000180,0xc,2,0);
        uVar4 = FUN_00002d74(uVar4,4,2,uVar9);
        _DAT_30000180 = FUN_00002d74(uVar4,0,2,3);
        iVar7 = _DAT_30000184 * 2 + -2;
        while ((0 < iVar7 && (-1 < _DAT_30000180 << 0x1d))) {
          iVar7 = iVar7 + -1;
        }
        _DAT_30000180 = FUN_00002d74(_DAT_30000180,0,1);
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
      FUN_00002fc8(s_Data_len_must_aligned_with_burst_00005414);
    }
  }
  return uVar6;
}



/* Function: FUN_0000544c */

void FUN_0000544c(int param_1,int param_2)

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



/* Function: FUN_00005478 */

bool FUN_00005478(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = param_4 <= param_2 + -0xb;
  if (bVar1) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1 = param_1 + 2;
    iVar2 = (param_2 - param_4) + -3;
    FUN_00005ab8(param_1,iVar2,0xff);
    param_1[iVar2] = 0;
    FUN_00005980(param_1 + iVar2 + 1,param_3,param_4);
  }
  return bVar1;
}



/* Function: FUN_000054b8 */

int FUN_000054b8(undefined4 param_1,int param_2,char *param_3,int param_4,int param_5)

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
      FUN_00005980(param_1,pcVar2,param_4);
      iVar3 = param_4;
    }
  }
  return iVar3;
}



/* Function: FUN_000055c0 */

ulonglong FUN_000055c0(uint param_1,uint param_2,uint param_3,uint param_4)

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
  uVar5 = *(uint *)(&DAT_000058b0 + (uVar9 >> 0x1c) * 4);
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



/* Function: FUN_000058f0 */

undefined4 FUN_000058f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_18;
  int local_14;
  
  local_14 = param_1;
  if (param_2 != 0) {
    local_14 = param_1 + param_2 + -1;
  }
  local_18 = param_1;
  uVar1 = FUN_00005c7e(param_3,&local_18,param_4,DAT_00005920 + 0x5906);
  if (param_2 != 0) {
    FUN_00005ca4(0,&local_18);
  }
  return uVar1;
}



/* Function: FUN_00005924 */

int FUN_00005924(uint *param_1,uint *param_2,uint param_3)

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
    if ((param_3 & 1) == 0) goto LAB_0000595c;
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
LAB_0000595c:
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



/* Function: FUN_00005980 */

undefined8 FUN_00005980(uint *param_1,uint *param_2,uint param_3,uint param_4)

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



/* Function: FUN_00005a54 */

undefined8 FUN_00005a54(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

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



/* Function: FUN_00005ab8 */

undefined4 * FUN_00005ab8(undefined4 *param_1,uint param_2,undefined1 param_3)

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



/* Function: FUN_00005ac8 */

undefined4 * FUN_00005ac8(undefined4 *param_1,uint param_2)

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



/* Function: FUN_00005b16 */

void FUN_00005b16(uint *param_1)

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



/* Function: FUN_00005b42 */

void FUN_00005b42(byte *param_1)

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



/* Function: FUN_00005b64 */

int FUN_00005b64(int param_1,int *param_2)

{
  if (*param_2 << 0x15 < 0) {
    param_1 = (int)(char)param_1;
  }
  else if (*param_2 << 0x17 < 0) {
    return (int)(short)param_1;
  }
  return param_1;
}



/* Function: FUN_00005b76 */

uint FUN_00005b76(uint param_1,int *param_2)

{
  if (*param_2 << 0x15 < 0) {
    param_1 = param_1 & 0xff;
  }
  else if (*param_2 << 0x17 < 0) {
    return param_1 & 0xffff;
  }
  return param_1;
}



/* Function: FUN_00005b88 */

void FUN_00005b88(byte *param_1,undefined1 *param_2,uint param_3)

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
  FUN_00005b16(param_1);
  for (; param_2 < puVar2; param_2 = param_2 + 1) {
    (**(code **)(param_1 + 4))(*param_2,*(undefined4 *)(param_1 + 8));
  }
  FUN_00005b42(param_1);
  return;
}



/* Function: FUN_00005bdc */

undefined4 FUN_00005bdc(uint *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char extraout_r1;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  
  iVar5 = 0;
  puVar6 = (undefined1 *)0x5c3c;
  if (param_2 == 0x75) {
    iVar1 = FUN_00005b76(*param_3,param_1);
  }
  else {
    iVar1 = FUN_00005b64();
    if (iVar1 < 0) {
      iVar1 = -iVar1;
      puVar6 = &DAT_00005c40;
    }
    else if ((int)(*param_1 << 0x1e) < 0) {
      puVar6 = (undefined1 *)0x5c44;
    }
    else {
      if (-1 < (int)(*param_1 << 0x1d)) goto LAB_00005c16;
      puVar6 = (undefined1 *)0x5c48;
    }
    iVar5 = 1;
  }
LAB_00005c16:
  iVar4 = 0;
  while (iVar1 != 0) {
    iVar1 = FUN_000062ac();
    *(byte *)((int)param_1 + iVar4 + 0x24) = extraout_r1 + 0x30;
    iVar4 = iVar4 + 1;
  }
  if ((int)(*param_1 << 0x1a) < 0) {
    uVar2 = param_1[7];
    *param_1 = *param_1 & 0xffffffef;
  }
  else {
    uVar2 = 1;
  }
  if (iVar4 < (int)uVar2) {
    iVar1 = uVar2 - iVar4;
  }
  else {
    iVar1 = 0;
  }
  param_1[6] = param_1[6] - (iVar1 + iVar4 + iVar5);
  if (-1 < (int)((uint)(byte)*param_1 << 0x1b)) {
    FUN_00005b16(param_1);
  }
  for (iVar7 = 0; iVar7 < iVar5; iVar7 = iVar7 + 1) {
    (*(code *)param_1[1])(puVar6[iVar7],param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)((uint)(byte)*param_1 << 0x1b) < 0) {
    FUN_00005b16(param_1);
  }
  while (0 < iVar1) {
    (*(code *)param_1[1])(0x30,param_1[2]);
    param_1[8] = param_1[8] + 1;
    iVar1 = iVar1 + -1;
  }
  while (0 < iVar4) {
    (*(code *)param_1[1])(*(byte *)((int)param_1 + iVar4 + 0x23),param_1[2]);
    param_1[8] = param_1[8] + 1;
    iVar4 = iVar4 + -1;
  }
  FUN_00005b42(param_1);
  if ((int)((uint)(byte)*param_1 << 0x18) < 0) {
    uVar3 = 2;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Function: FUN_00005c7e */

void FUN_00005c7e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  local_2c = 0;
  local_34 = DAT_00005ca0 + 0x5c90;
  local_3c = param_4;
  uStack_38 = param_2;
  uStack_30 = param_1;
  FUN_00005efc(auStack_40,param_3);
  return;
}



/* Function: FUN_00005ca4 */

void FUN_00005ca4(undefined1 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = param_1;
  *param_2 = puVar1 + 1;
  return;
}



/* Function: FUN_00005cc0 */

undefined8 FUN_00005cc0(byte *param_1,int param_2,int param_3,undefined4 param_4)

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
  
  iVar2 = DAT_00005d78;
  puVar7 = (undefined4 *)(DAT_00005d78 + 0x5cd2);
  iVar6 = 0;
  local_38 = *puVar7;
  uStack_34 = *(undefined4 *)(DAT_00005d78 + 0x5cd6);
  iVar5 = 0;
  local_30 = param_3;
  uStack_2c = param_4;
  do {
    if ((((int)((uint)*param_1 << 0x1a) < 0) && (*(int *)(param_1 + 0x1c) <= iVar6)) ||
       ((param_3 <= iVar5 && (*(short *)(param_2 + iVar5 * 2) == 0)))) goto LAB_00005d18;
    iVar1 = FUN_0000626a(&local_30,*(undefined2 *)(param_2 + iVar5 * 2),&local_38);
    if (iVar1 != -1) {
      if (((int)((uint)*param_1 << 0x1a) < 0) && (*(uint *)(param_1 + 0x1c) < (uint)(iVar6 + iVar1))
         ) {
LAB_00005d18:
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar6;
        FUN_00005b16(param_1);
        local_38 = *puVar7;
        uStack_34 = *(undefined4 *)(iVar2 + 0x5cd6);
        for (iVar2 = 0; iVar2 < iVar5; iVar2 = iVar2 + 1) {
          uVar3 = FUN_0000626a(&local_30,*(undefined2 *)(param_2 + iVar2 * 2),&local_38);
          if (uVar3 != 0xffffffff) {
            for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
              (**(code **)(param_1 + 4))
                        (*(undefined1 *)((int)&local_30 + uVar4),*(undefined4 *)(param_1 + 8));
            }
          }
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar6;
        FUN_00005b42(param_1);
        return CONCAT44(uStack_34,local_38);
      }
      iVar6 = iVar6 + iVar1;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



/* Function: FUN_00005efc */

uint FUN_00005efc(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  iVar1 = DAT_00006080;
  param_1[8] = 0;
  while (uVar2 = (*(code *)param_1[3])(param_1), uVar2 != 0) {
    if (uVar2 == 0x25) {
      uVar5 = 0;
      while (((uVar2 = (*(code *)param_1[3])(param_1), 0x1f < (int)uVar2 && (uVar2 < 0x31)) &&
             (uVar3 = (uint)*(byte *)(iVar1 + uVar2 + 0x5ef0), uVar3 != 0))) {
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
          iVar4 = FUN_00006474(uVar2);
          if (iVar4 != 0) {
            param_1[iVar6 + 6] = uVar2 - 0x30;
            while( true ) {
              uVar2 = (*(code *)param_1[3])(param_1);
              iVar4 = FUN_00006474();
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
          if (uVar2 == 0x6c) goto LAB_00006068;
          uVar2 = 0x400;
          goto LAB_0000601e;
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
LAB_00006068:
            uVar2 = 0x80;
            goto LAB_0000601e;
          }
          if ((uVar2 != 0x74) && (uVar2 != 0x7a)) goto LAB_00006034;
        }
        uVar2 = 0;
LAB_0000601e:
        uVar5 = uVar5 | uVar2;
        uVar2 = (*(code *)param_1[3])(param_1);
      }
LAB_00006034:
      if (uVar2 == 0) break;
      if (uVar2 - 0x41 < 0x1a) {
        uVar2 = uVar2 + 0x20;
        uVar5 = uVar5 | 0x800;
      }
      *param_1 = uVar5;
      iVar6 = FUN_0000019c(param_1,uVar2,param_2);
      if (iVar6 == 0) goto LAB_00005f20;
      if (iVar6 == 1) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = (uint *)(((int)param_2 + 7U & 0xfffffff8) + 8);
      }
    }
    else {
LAB_00005f20:
      (*(code *)param_1[1])(uVar2,param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
  }
  return param_1[8];
}



/* Function: FUN_000060c8 */

undefined8 FUN_000060c8(uint param_1,uint param_2)

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



/* Function: FUN_0000626a */

undefined4 FUN_0000626a(undefined1 *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_00006324();
  iVar3 = *piVar1;
  if (*(char *)(iVar3 + 0x101) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000062a2. Too many branches */
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



/* Function: FUN_000062ac */

undefined8 FUN_000062ac(uint param_1)

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



/* Function: FUN_00006324 */

int FUN_00006324(void)

{
  int iVar1;
  
  iVar1 = FUN_00006350();
  return iVar1 + 4;
}



/* Function: FUN_00006350 */

undefined4 FUN_00006350(void)

{
  return DAT_00006354;
}



/* Function: FUN_00006420 */

void FUN_00006420(void)

{
  return;
}



/* Function: FUN_00006474 */

undefined4 FUN_00006474(int param_1)

{
  if (param_1 - 0x30U < 10) {
    return 1;
  }
  return 0;
}



/* Function: FUN_000064d4 */

undefined4 FUN_000064d4(undefined4 param_1)

{
  coproc_moveto_Invalidate_Entire_Instruction(0);
  return param_1;
}



/* Function: FUN_000064f8 */

undefined4 FUN_000064f8(undefined4 param_1)

{
  coproc_movefrom_Control();
  return param_1;
}



/* Function: FUN_00006504 */

undefined8 FUN_00006504(int param_1,uint param_2)

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



/* Function: FUN_00006534 */

undefined8 FUN_00006534(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_cr0;
  
  DataMemoryBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  FUN_00006b9c();
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



/* Function: FUN_0000658c */

undefined8 FUN_0000658c(undefined4 param_1,undefined4 param_2)

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



/* Function: FUN_000065e0 */

undefined8 FUN_000065e0(undefined4 param_1,undefined4 param_2)

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



/* Function: FUN_000066c4 */

undefined8 FUN_000066c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_r1;
  
  coproc_moveto_Translation_table_base_0(*DAT_00006bb0);
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Domain_Access_Control(DAT_00006bb4);
  coproc_moveto_Invalidate_Entire_Instruction(0);
  FUN_0000658c(param_1,uVar1 & 0xfffff7ff | 0x1007,DAT_00006bb4,0,param_1,param_2,param_3,param_4);
  coproc_moveto_Invalidate_unified_TLB_unlocked(0);
  coproc_moveto_Control(extraout_r1);
  coproc_movefrom_Main_ID();
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00006734 */

undefined8 FUN_00006734(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 in_cr2;
  undefined4 in_cr10;
  
  uVar1 = coprocessor_movefromRt(0xf,0,0,in_cr10,in_cr2);
  coprocessor_moveto(0xf,0,0,uVar1 | param_1,in_cr10,in_cr2);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0000675c */

undefined8 FUN_0000675c(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 in_cr2;
  undefined4 in_cr10;
  
  uVar1 = coprocessor_movefromRt(0xf,0,1,in_cr10,in_cr2);
  coprocessor_moveto(0xf,0,1,uVar1 | param_1,in_cr10,in_cr2);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00006784 */

undefined4 FUN_00006784(undefined4 param_1)

{
  coproc_movefrom_Control();
  return param_1;
}



/* Function: FUN_00006794 */

undefined4 FUN_00006794(undefined4 param_1)

{
  coproc_movefrom_Control();
  return param_1;
}



/* Function: FUN_000067a4 */

uint FUN_000067a4(uint param_1)

{
  coproc_moveto_Translation_table_base_0(param_1 | 1);
  return param_1;
}



/* Function: FUN_000067d0 */

undefined8 FUN_000067d0(undefined4 param_1,undefined4 param_2)

{
  coproc_movefrom_Control();
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_000067e4 */

undefined8 FUN_000067e4(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_00006b00();
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xffffe7f8);
  coproc_movefrom_Main_ID();
  DataMemoryBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00006838 */

undefined4 FUN_00006838(undefined4 param_1)

{
  coproc_moveto_Invalidate_Entire_Instruction(0);
  coproc_moveto_Invalidate_unified_TLB_unlocked(0);
  return param_1;
}



/* Function: FUN_00006860 */

undefined4 FUN_00006860(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xffffefff);
  return param_1;
}



/* Function: FUN_00006888 */

undefined4 FUN_00006888(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xfffffffb);
  return param_1;
}



/* Function: FUN_0000689c */

undefined4 FUN_0000689c(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x1000);
  return param_1;
}



/* Function: FUN_000068b0 */

undefined4 FUN_000068b0(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x1000);
  return param_1;
}



/* Function: FUN_000068d8 */

undefined4 FUN_000068d8(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 4);
  return param_1;
}



/* Function: FUN_000068ec */

undefined8 FUN_000068ec(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Domain_Access_Control();
  coproc_moveto_Domain_Access_Control(uVar1 & ~param_2 | param_1);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00006934 */

undefined8 FUN_00006934(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 2);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00006960 */

undefined8 FUN_00006960(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xfffffffd);
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_0000698c */

undefined8 FUN_0000698c(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00006994 */

undefined8 FUN_00006994(uint param_1,uint param_2)

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



/* Function: FUN_000069cc */

undefined8 FUN_000069cc(uint param_1,uint param_2)

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



/* Function: FUN_00006a18 */

undefined8 FUN_00006a18(uint param_1,uint param_2)

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



/* Function: FUN_00006a50 */

void FUN_00006a50(void)

{
  FUN_00006a18();
  return;
}



/* Function: FUN_00006a5c */

void FUN_00006a5c(void)

{
  FUN_000069cc();
  return;
}



/* Function: FUN_00006a68 */

void FUN_00006a68(void)

{
  FUN_00006994();
  return;
}



/* Function: FUN_00006a74 */

void FUN_00006a74(int param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_00006a18(param_1,param_2 + param_1);
    return;
  }
  if (param_3 == 0) {
    FUN_00006a68();
    return;
  }
  FUN_000069cc();
  return;
}



/* Function: FUN_00006a94 */

undefined8 FUN_00006a94(undefined4 param_1,undefined4 param_2)

{
  FUN_000064d4();
  FUN_00006b9c();
  return CONCAT44(param_2,param_1);
}



/* Function: FUN_00006ab8 */

undefined4 FUN_00006ab8(undefined4 param_1)

{
  coproc_moveto_Domain_Access_Control(0xffffffcd);
  return param_1;
}



/* Function: FUN_00006ac8 */

undefined4 FUN_00006ac8(undefined4 param_1)

{
  coproc_moveto_Domain_Access_Control(0xffffffff);
  return param_1;
}



/* Function: FUN_00006ad8 */

undefined4 FUN_00006ad8(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 | 0x2000);
  return param_1;
}



/* Function: FUN_00006aec */

undefined4 FUN_00006aec(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = coproc_movefrom_Control();
  coproc_moveto_Control(uVar1 & 0xffffdfff);
  return param_1;
}



/* Function: FUN_00006b00 */

void FUN_00006b00(void)

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



/* Function: FUN_00006b9c */

undefined8 FUN_00006b9c(undefined4 param_1,undefined4 param_2)

{
  FUN_00006b00();
  coproc_moveto_Invalidate_Entire_Instruction(0);
  return CONCAT44(param_2,param_1);
}



/* Decompiled: 171; failed: 0 */
