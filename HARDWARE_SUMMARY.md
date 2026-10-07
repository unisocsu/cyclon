# מפת חומרה ראשונית – UNISOC UMS9117

## 1. זהות המעבד
*וודאות:* בינונית*
| קובץ | שורה | קטע קוד |
|---|---|---|
| boot0.c | 6430 | `InstructionSynchronizationBarrier(0xf); \| coproc_moveto_Invalidate_unified_TLB_unlocked(0); \| uVar3 = coproc_movefrom_Main_ID(); \| if (((uVa` |
| boot1.c | 9987 | `InstructionSynchronizationBarrier(0xf); \| coproc_moveto_Invalidate_unified_TLB_unlocked(0); \| uVar3 = coproc_movefrom_Main_ID(); \| if (((uVa` |
| cm4_b.c | 64708 | `} \| } \| FUN_00057e08(iVar2 + 0x6e,*(undefined4 *)(param_1 + 0xd4),iVar2 + 0x54); \| *(ushort *)(param_1 + 0xc0) = *(ushort *)(param_1 + 0xc0)` |
| fdl1.c | 5209 | `InstructionSynchronizationBarrier(0xf); \| coproc_moveto_Invalidate_unified_TLB_unlocked(0); \| uVar3 = coproc_movefrom_Main_ID(); \| if (((uVa` |
| fdl2.c | 13272 | `InstructionSynchronizationBarrier(0xf); \| coproc_moveto_Invalidate_unified_TLB_unlocked(0); \| uVar3 = coproc_movefrom_Main_ID(); \| if (((uVa` |
| img_90000024.c | 22016 | `InstructionSynchronizationBarrier(0xf); \| coproc_moveto_Invalidate_unified_TLB_unlocked(0); \| uVar3 = coproc_movefrom_Main_ID(); \| if (((uVa` |
| kernel.c | 16157 | `} \| *(undefined4 *)(*piVar11 + 0x18) = 1; \| FUN_00127208(); \| *(undefined4 *)(*(int *)(iVar26 + *puVar9 * 4) + 0x410) = 1; \| local_60 = 0x4a` |
| kernel.c | 26365 | `uVar6 = FUN_0019bc0e(*(undefined4 *)(param_1 + 8)); \| return uVar6; \| } \| if (uVar6 == 0x410) { \| uVar6 = FUN_0019bdba(*(undefined4 *)(param` |
| kernel.c | 33308 | `*(undefined4 *)(iVar1 + 0x400) = 0; \| *piVar7 = iVar5 * param_2; \| *(uint *)(iVar1 + 0x40c) = param_2; \| FUN_006f4d3e(iVar5 * param_2,iVar1 ` |
| kernel.c | 160144 | `FUN_002e5f9a(*puVar1); \| piVar3 = DAT_0010b69c; \| *(undefined4 *)(iVar6 + 0x98) = 1; \| FUN_006f4a34(iVar6 + 0x410,*piVar3 + 0x3a84,0x14); \| ` |
| kernel.c | 160234 | `piVar1 = DAT_0010b69c; \| *(undefined4 *)(iVar2 + 0x98) = 1; \| *(undefined4 *)(iVar2 + 0xc) = 0; \| FUN_006f3e8a(iVar2 + 0x410,*piVar1 + 0x3a8` |
| kernel.c | 164218 | `*(undefined4 *)(iVar3 + 0xc) = uVar6; \| iVar2 = DAT_00111bcc; \| if (*(char *)(iVar4 + 0x128f) != '\0') { \| FUN_006f3e8a(iVar3 + 0x410,*(int ` |
| kernel.c | 172823 | `iVar9 = DAT_00123924; \| piVar2 = DAT_00123920; \| puVar1 = DAT_00123904; \| local_70 = *(int *)(*(int *)(DAT_00123924 + *DAT_00123904 * 4) + 0` |
| kernel.c | 172827 | `FUN_006f4b10(0x11,DAT_0012391c + 0x1f,&DAT_00123928,*(undefined4 *)(*DAT_00123920 + 0x24)); \| if (((*(int *)(*piVar2 + 0x20) == 1) && \| (iVa` |
| kernel.c | 172911 | `iVar6 = *(int *)(iVar9 + *puVar1 * 4); \| local_70 = *(int *)(*piVar2 + 0x18); \| local_68 = *(uint *)(iVar6 + 0x440); \| local_6c = *(undefine` |
| kernel.c | 172923 | `} \| uVar10 = *puVar1; \| iVar9 = *(int *)(iVar9 + uVar10 * 4); \| if ((*(int *)(iVar9 + 0x410) == 0) \|\| (*(int *)(iVar9 + 0x440) == 0)) { \| *(` |
| kernel.c | 172987 | `iVar9 = *piVar2; \| if ((*(int *)(iVar9 + 0x7c) == 3) && \| (iVar8 = *(int *)(DAT_00123da8 + *puVar1 * 4), *(char *)(iVar8 + 0x405) != '\0')) ` |
| kernel.c | 181190 | `uVar3 = CONCAT11(*(undefined1 *)((uint)*(ushort *)(param_4 + 2) + param_4 + 2), \| *(undefined1 *)((uint)*(ushort *)(param_4 + 2) + param_4 +` |
| kernel.c | 199827 | `bVar7 = bVar7 + 1; \| } while (bVar7 < 2); \| if (iVar3 == 6) { \| if ((*(char *)(iVar9 + 0x410a) == '\x01') && (*(int *)(FUN_000040d6 + iVar9 ` |
| kernel.c | 200817 | `*(undefined1 *)(iVar7 + 0x40a8) = 0; \| *(undefined4 *)(iVar7 + 0x40d0) = 1; \| *(undefined4 *)(iVar7 + 0x40dc) = 0; \| *(undefined2 *)(iVar7 +` |
| kernel.c | 200818 | `*(undefined4 *)(iVar7 + 0x40d0) = 1; \| *(undefined4 *)(iVar7 + 0x40dc) = 0; \| *(undefined2 *)(iVar7 + 0x4108) = 0; \| *(undefined1 *)(iVar7 +` |
| kernel.c | 276873 | `*(undefined1 *)(iVar1 + 0x1a) = 0; \| *(undefined1 *)(iVar1 + 0x18) = 0; \| *(undefined1 *)(iVar1 + 0x20) = 1; \| FUN_006f10ac(0xee,0x29,0x410,` |
| kernel.c | 326470 | `else { \| FUN_00217306(); \| } \| *(undefined4 *)(param_3 + 0x410) = *(undefined4 *)(param_2 + 0x30); \| iVar2 = *(int *)(iVar2 + 0x310); \| if (` |
| kernel.c | 326541 | `else { \| FUN_00217306(); \| } \| *(undefined4 *)(param_3 + 0x410) = *(undefined4 *)(param_2 + 0x30); \| FUN_002172d6(*(undefined4 *)(param_3 + ` |
| kernel.c | 327387 | `else { \| FUN_00217306(); \| } \| *(undefined4 *)(param_2 + 0x410) = *(undefined4 *)(param_3 + 0x30); \| iVar2 = FUN_002172d6(*(undefined4 *)(pa` |
| kernel.c | 328911 | `FUN_00247ec4(); \| *(uint *)(param_5 + 0x7e0) = *(uint *)(param_5 + 0x7e0) \| *(uint *)(param_4 + 0x7e0); \| FUN_006f3534(param_3 + 0x160,iVar7` |
| kernel.c | 349492 | ` \| local_18 = 0x16; \| local_10 = param_1; \| iVar1 = FUN_003a67f8(*(undefined4 *)(param_1 + 0x410),auStack_1c,0x10,0,0,0x8a,0x86); \| if (iVar` |
| kernel.c | 365016 | `FUN_006fdf4a(s_ICM_NAME__IND_ESM_DEACTIVATE_EPS_00280a54); \| } \| if (param_2 != 0) goto LAB_002807b4; \| uVar4 = 0x410; \| local_33 = param_6;` |
| kernel.c | 404993 | `if ('\x03' < *pcVar1) { \| FUN_006fdf4a(s_ICM_NAME__CMD_NAM_EST_SMS_CONN_002bc670); \| } \| iVar2 = FUN_006f3afa(0x1c,0,1,0x203,0x410); \| *(und` |
| kernel.c | 404999 | `*(undefined4 *)(iVar2 + 0x10) = 0; \| *(undefined1 *)(iVar2 + 0x15) = 0; \| *(undefined1 *)(iVar2 + 0x16) = 0; \| iVar3 = FUN_006f3afa(0x24,0,1` |
| kernel.c | 405001 | `*(undefined1 *)(iVar2 + 0x16) = 0; \| iVar3 = FUN_006f3afa(0x24,0,1,0x203,0x410); \| if (iVar3 == 0) { \| FUN_006f2c00(0,DAT_002bc690 + 0x30,0x` |
| kernel.c | 412721 | `uVar4 = FUN_006fd49c(DAT_002ccc78,0x178,uVar12); \| thunk_FUN_006fb59e(&DAT_002ccc58,DAT_002ccc54,0xe36,uVar4); \| } \| iVar5 = *(int *)(iVar2 ` |
| kernel.c | 417627 | `thunk_FUN_006fb59e(&DAT_002d2f5c,DAT_002d4090,0xe9a,uVar5); \| } \| iVar4 = param_2 + uVar13 * 2 + 0x288; \| iVar7 = *(int *)(iVar2 + 0x34) + 0` |
| kernel.c | 422377 | `else { \| if (iVar3 != 0x152) goto switchD_002dbcda_caseD_15a; \| iVar5 = (int)param_1 + uVar10 * 2; \| iVar3 = piVar2[-0x13] + 0x410; \| } \| } ` |
| kernel.c | 424753 | `else { \| if (iVar4 != 0x152) goto switchD_002ddc7e_caseD_15a; \| iVar5 = (int)param_1 + uVar10 * 2; \| iVar4 = piVar2[-0x13] + 0x410; \| } \| go` |
| kernel.c | 437227 | `} \| uVar8 = 0x40e; \| break; \| case 0x410: \| uVar1 = *(undefined1 *)(param_2 + 0x1c); \| bVar2 = *(byte *)(param_2 + 0x1d); \| iVar7 = FUN_006f` |
| kernel.c | 437243 | `*(uint *)(iVar7 + 4) = (uint)bVar2; \| } \| FUN_00290b70(); \| uVar8 = 0x410; \| break; \| case 0x411: \| uVar1 = *(undefined1 *)(param_2 + 0x1c);` |
| kernel.c | 506599 | `FUN_006f4a34(puVar1 + 1,param_1,&DAT_00002798); \| iVar2 = FUN_0037e104(3,0x98,puVar1,0x53f,0x40d); \| if (iVar2 != 0) { \| FUN_006f18c4(s_PS_l` |
| kernel.c | 521469 | `*(undefined2 *)(param_1 + 0x45e) = 0; \| *(undefined2 *)(param_1 + 0x444) = 0; \| *(undefined1 *)(param_1 + 0x432) = 0; \| *(undefined1 *)(para` |
| kernel.c | 575370 | `*(undefined2 *)(param_1 + 0x45e) = 0; \| *(undefined2 *)(param_1 + 0x444) = 0; \| *(undefined1 *)(param_1 + 0x432) = 0; \| *(undefined1 *)(para` |
| kernel.c | 623519 | `} \| FUN_0092eb5a(param_1,1,*(undefined1 *)(param_2 + 0x428),extraout_r3_08,unaff_r4,unaff_r5,unaff_r6, \| unaff_lr); \| FUN_00412f14(param_1,p` |
| kernel.c | 629682 | `cVar1 = *(char *)(param_1 + 0x42c); \| } \| if (bVar4 && cVar1 != '\x01') { \| bVar4 = *(char *)(param_1 + 0x410) != '\x01'; \| if (bVar4) { \| p` |
| kernel.c | 632130 | `bVar3 = *(char *)(param_1 + 0x42c) != '\x01'; \| cVar1 = '\x01'; \| if (bVar3) { \| cVar1 = *(char *)(param_1 + 0x410); \| } \| if (bVar3 && cVar` |
| kernel.c | 691490 | `if ('\0' < *pcVar1) { \| FUN_006f4b10(0x1b,DAT_004708bc,DAT_00470918,*(undefined4 *)(iVar10 + 0x34)); \| } \| *(undefined4 *)(DAT_004708c0 + 0x` |
| kernel.c | 691608 | `if ('\0' < *pcVar1) { \| FUN_006f4b10(0x1b,DAT_004708c8,DAT_00470918,*(undefined4 *)(iVar10 + 0x34),uVar8); \| } \| *(undefined4 *)(DAT_004708c` |
| kernel.c | 754158 | `uVar6 = *(undefined4 *)(param_2 + 0xc); \| local_40[0] = 0; \| *(undefined4 **)(param_2 + 0xc) = local_40; \| FUN_009bc3c8(param_1 + 0x10,param` |
| kernel.c | 811678 | `*(undefined1 *)(*(int *)(iVar3 + 0xc) + 0xa08) = 0; \| } \| LAB_004f66e6: \| iVar4 = FUN_004f14a0(*(undefined1 *)(param_1 + 0x410),param_1 + 0x` |
| kernel.c | 813003 | `if ((((iVar1 != 0) && \| (iVar1 = FUN_004f4ab4(*(undefined1 *)(param_1 + 0x594),param_1 + 0x598, \| *(undefined4 *)(param_1 + 0x7c)), uVar2 = ` |
| kernel.c | 813794 | `iVar3 != 0)) { \| FUN_004ef996(*(undefined1 *)(param_1 + 0x88),param_1 + 0x8c); \| FUN_004ef8f8(*(undefined1 *)(param_1 + 0x50c),(int)*(char *` |
| kernel.c | 813848 | `iVar3 != 0)) { \| FUN_004ef996(*(undefined1 *)(param_1 + 0x88),param_1 + 0x8c); \| FUN_004ef8f8(*(undefined1 *)(param_1 + 0x508),(int)*(char *` |
| kernel.c | 813902 | `iVar3 != 0)) { \| FUN_004ef996(*(undefined1 *)(param_1 + 0x88),param_1 + 0x8c); \| FUN_004ef8f8(*(undefined1 *)(param_1 + 0x4f8),(int)*(char *` |
| kernel.c | 831111 | `} \| if ((((param_1 != -0x348) && (FUN_00512cb6(), *(char *)(param_1 + 0x3f0) == '\x01')) \| && (param_1 != -0x3f4)) && \| (((FUN_0051010e(), *` |
| kernel.c | 838506 | `*(undefined2 *)(&DAT_0000410c + iVar12) = *(undefined2 *)(iVar12 + 0x384c); \| *(undefined2 *)(iVar12 + 0x4112) = *(undefined2 *)(iVar12 + 0x` |
| kernel.c | 838738 | `case (code *)0x31: \| if (*(int *)(param_2 + 0x1bc) == 1) { \| *(undefined2 *)(iVar12 + 0x4110) = 0; \| *(undefined2 *)(iVar12 + 0x410e) = 0xff` |
| kernel.c | 838744 | `else { \| *(undefined2 *)(iVar12 + 0x4110) = 1; \| param_1 = (code *)(uint)*(ushort *)(iVar12 + 0x384e); \| *(ushort *)(iVar12 + 0x410e) = *(us` |
| kernel.c | 847141 | `*(undefined2 *)(iVar2 + 0x44f4) = 0; \| *(undefined2 *)(&DAT_0000410c + iVar2) = 0xffff; \| *(undefined2 *)(iVar2 + 0x4110) = 0; \| *(undefined` |
| kernel.c | 939415 | `*(undefined2 *)(iVar5 + 0x352) = 1; \| puVar2[0xc] = 0; \| *(undefined4 *)(iVar5 + 0x3f8) = 0; \| *(undefined4 *)(iVar5 + 0x410) = 0; \| *(undef` |
| kernel.c | 939635 | `FUN_006f32e6(*(int *)(iVar3 + 0x3f8),1,0x5c,0x385); \| *(undefined4 *)(iVar3 + 0x3f8) = 0; \| } \| if (*(int *)(iVar3 + 0x410) != 0) { \| FUN_00` |
| kernel.c | 939636 | `*(undefined4 *)(iVar3 + 0x3f8) = 0; \| } \| if (*(int *)(iVar3 + 0x410) != 0) { \| FUN_006f32e6(*(int *)(iVar3 + 0x410),1,0x5c,0x38b); \| *(unde` |
| kernel.c | 939637 | `} \| if (*(int *)(iVar3 + 0x410) != 0) { \| FUN_006f32e6(*(int *)(iVar3 + 0x410),1,0x5c,0x38b); \| *(undefined4 *)(iVar3 + 0x410) = 0; \| } \| if` |
| kernel.c | 955527 | `(iVar3 = FUN_007c95d4(param_1,auStack_14c,&local_c), iVar3 == 1)) break; \| } \| if ((*(uint *)(*piVar2 + 0x630) != uVar7) && \| (iVar3 = *piVa` |
| kernel.c | 1000449 | `case 0x40f: \| pcVar3 = *(code **)(*(int *)(*DAT_00677944 + 0xc) + 0x1ec); \| break; \| case 0x410: \| pcVar3 = *(code **)(*(int *)(*DAT_0067794` |
| kernel.c | 1014708 | `case 0x40f: \| *param_2 = 0x40f; \| return 1; \| case 0x410: \| *param_2 = 0x410; \| return 1; \| case 0x411:` |
| kernel.c | 1014709 | `*param_2 = 0x40f; \| return 1; \| case 0x410: \| *param_2 = 0x410; \| return 1; \| case 0x411: \| *param_2 = 0x411;` |
| kernel.c | 1102388 | `(iVar8 = FUN_006e06a8(param_1 & 0xff), iVar8 != 0)))) \|\| \| ((cVar14 = *(char *)((int)&local_28 + param_1), cVar14 != '\x01' && \| ((cVar14 !=` |
| kernel.c | 1102391 | `*(undefined4 *)(*(int *)(iVar13 + param_1 * 4) + 0x410) = 1; \| } \| else { \| *(undefined4 *)(*(int *)(iVar13 + param_1 * 4) + 0x410) = 0; \| }` |
| kernel.c | 1185666 | `} \| else { \| if (((cVar1 == '\x03') \|\| (cVar1 == '\x05')) \|\| (cVar1 == '\v')) { \| FUN_003e13aa(&DAT_00008c87 + param_2,param_2 + 0x432,*(und` |
| kernel.c | 1187926 | `case 6: \| if (*piVar6 == 3) { \| LAB_0076f3a4: \| FUN_00683672(0x410); \| FUN_00683672(0x415); \| FUN_006858ec(); \| FUN_00683672(0x416);` |
| kernel.c | 1195217 | `if (param_2 != 2) { \| return 0; \| } \| sVar1 = param_3 * 0x40 + 0x410; \| if (param_4 != '\x01') { \| return sVar1; \| }` |
| kernel.c | 1209001 | `FUN_00691b38(&local_38,*(int *)(*DAT_007869f4 + 0xc) + 0x204); \| local_48 = FUN_006f1674(&DAT_00004894,1,0x633,0x5067); \| local_44 = FUN_006` |
| kernel.c | 1215769 | `} \| else { \| iVar2 = FUN_006f3afa(0x2c,0,1,0x4dc,0xb6d); \| uVar6 = 0x410; \| iVar5 = *piVar1 + iVar3 * 0x11a8; \| *(undefined4 *)(iVar2 + 4) =` |
| kernel.c | 1313225 | `*(undefined4 *)(*piVar1 + 8) = param_4; \| *(undefined4 *)(*piVar1 + 0xc) = *(undefined4 *)(*piVar2 + 0xc); \| *(undefined4 *)(*piVar1 + 0x10)` |
| kernel.c | 1355792 | `} \| if (iVar1 < 0) { \| iVar1 = iVar1 + 0x3f0; \| if (iVar1 == -0x410) { \| uVar4 = uVar4 & 0x7fffffff; \| } \| uVar2 = 0x2e - iVar1;` |
| kernel.c | 1418059 | `FUN_0086083c(1,7,0); \| FUN_00684264(); \| FUN_008ed1f0(1); \| iVar8 = FUN_006801e4(0x410); \| if (iVar8 == 1) { \| FUN_008d97bc(1); \| return;` |
| kernel.c | 1510151 | `*(short *)(iVar3 + 0x188) = (short)(1 << (uVar1 & 0xff)); \| iVar4 = DAT_00965e88 + uVar1 * 0x998; \| FUN_006fd7c8(iVar4 + 0x34,iVar3 + 2,0x82` |
| kernel.c | 1510194 | `if (*(char *)(iVar4 + 0x98f) == '\0') { \| *(short *)(iVar3 + 0x184) = (short)(1 << (uVar1 & 0xff)); \| FUN_006fd7c8(iVar4 + 0x34,iVar3 + 2,0x` |
| kernel.c | 1521690 | `else { \| if (*(char *)(iVar6 + 0x11c0) == '\0') { \| uVar7 = FUN_009730be(&local_48); \| FUN_006f10ac(0xee,0x29,0x410,uVar7,0); \| } \| iVar6 = ` |
| kernel.c | 1531881 | `*(undefined1 *)(iVar2 + 0x18) = 0; \| FUN_001e9966(); \| *(undefined1 *)(iVar2 + 0x20) = 1; \| FUN_006f10ac(0xee,0x29,0x410,iVar2,0); \| return;` |
| kernel.c | 1546199 | `FUN_006eff76(&local_2c,0,iVar2,0x105,0x72); \| *(short *)(iVar2 + 0x184) = (short)(1 << (uVar7 & 0xff)); \| FUN_006fd7c8(iVar2 + 2,iVar6 + 0x3` |
| kernel.c | 1559717 | `break; \| case 3: \| iVar2 = *DAT_009a2a68; \| puVar4 = (undefined4 *)0x410; \| iVar6 = 0x55a4; \| pcVar5 = (char *)(iVar2 + 0xcec); \| break;` |
| kernel.c | 1559868 | `pcVar4 = (char *)(*DAT_009a2a68 + 0x880); \| goto joined_r0x006f4a3c; \| case 3: \| puVar6 = (undefined4 *)0x410; \| puVar5 = (undefined4 *)(*DA` |
| kernel.c | 1561837 | `} \| local_d0 = (code *)&DAT_0000063c; \| FUN_006f1aee(*piVar4 + 0xcec,*(undefined4 *)(pcVar11 + (int)pcVar16 * 4 + 4), \| 0x410,DAT_009a5204 +` |
| kernel.c | 1660706 | `*(undefined1 *)(iVar7 + 0x5df8) = 1; \| *(undefined1 *)(iVar7 + 0x5e04) = param_1[0x428]; \| *(undefined1 *)(iVar7 + 0x5e05) = param_1[0x42c];` |
| kernel.c | 1660710 | `*(undefined4 *)(iVar7 + 0x5dfc) = 0; \| *(undefined4 *)(iVar7 + 0x5e00) = *(undefined4 *)(param_1 + 0x414); \| } \| else if (*(int *)(param_1 +` |
| kernel.c | 1663108 | `*(undefined1 *)(iVar7 + 0x5df8) = 1; \| *(char *)(iVar7 + 0x5e04) = param_1[0x428]; \| *(char *)(iVar7 + 0x5e05) = param_1[0x42c]; \| if (*(int` |
| kernel.c | 1663112 | `*(undefined4 *)(iVar7 + 0x5dfc) = 0; \| *(undefined4 *)(iVar7 + 0x5e00) = *(undefined4 *)(param_1 + 0x414); \| } \| else if (*(int *)(param_1 +` |
| kernel.c | 1664907 | `*(undefined1 *)(iVar7 + 0x5df8) = 1; \| *(char *)(iVar7 + 0x5e04) = param_1[0x428]; \| *(char *)(iVar7 + 0x5e05) = param_1[0x42c]; \| if (*(int` |
| kernel.c | 1664911 | `*(undefined4 *)(iVar7 + 0x5dfc) = 0; \| *(undefined4 *)(iVar7 + 0x5e00) = *(undefined4 *)(param_1 + 0x414); \| } \| else if (*(int *)(param_1 +` |
| kernel.c | 1679935 | `if (param_2 == 0) { \| *(undefined4 *)(param_4 + 0x408) = 0; \| *(undefined2 *)(param_4 + 0x40c) = 0; \| *(undefined4 *)(param_4 + 0x410) = 0; ` |
| kernel.c | 1679956 | `iVar3 = param_1[0xb] + 2; \| param_1[0xb] = iVar3; \| if (iVar3 + (uint)*(ushort *)(param_4 + 0x40c) <= (uint)param_1[1]) { \| *(int *)(param_4` |
| kernel.c | 1688231 | `cVar1 = *(char *)(param_2 + 0x634); \| param_1[0x60] = cVar1; \| if (cVar1 == '\x01') { \| FUN_00a67470(param_1 + 100,param_2 + 0x410); \| } \| c` |
| kernel.c | 1742351 | `uVar5 = (uVar5 & 0xffffff) >> 0x10; \| iVar9 = iVar9 + uVar10 * 4 + 4; \| if (uVar5 == 200) { \| puVar8 = (uint *)(iVar3 + 0x410); \| *(undefine` |
| kernel.c | 1742534 | `uVar1 = FUN_003ae2d4(*(uint *)(param_2 + 0x74) >> 3); \| *(undefined4 *)(param_4 + uVar2 * 4) = uVar1; \| uVar2 = uVar2 + 1 & 0xffff; \| uVar1 ` |
| kernel.c | 1742537 | `uVar1 = FUN_003ae2d4(*(undefined4 *)(param_2 + 0x410)); \| *(undefined4 *)(param_4 + uVar2 * 4) = uVar1; \| uVar1 = 0; \| if (*(int *)(param_2 ` |
| kernel.c | 1753940 | `undefined4 uVar11; \| undefined4 uVar12; \|  \| FUN_006f4a34(DAT_00aa45e8,param_1,0x410); \| iVar2 = DAT_00a273c8; \| pcVar1 = (char *)(param_1 +` |
| kernel.c | 1774737 | `InstructionSynchronizationBarrier(0xf); \| coproc_moveto_Invalidate_unified_TLB_unlocked(0); \| uVar3 = coproc_movefrom_Main_ID(); \| if (((uVa` |
| user.c | 9364 | `if (iVar3 != 0) { \| return pbVar5; \| } \| uVar4 = 0x410; \| } \| else { \| uVar4 = 0x409;` |
| user.c | 23825 | `*(undefined4 *)(iVar17 + 0x3e4) = uVar4; \| *(undefined4 *)(iVar17 + 0x408) = 0; \| *(undefined4 *)(iVar17 + 0x40c) = uVar8; \| *(undefined4 *)` |
| user.c | 62575 | `LAB_0006dd62: \| *(short *)(iVar1 + 0x40c) = (short)uVar5; \| *(short *)(iVar1 + 0x40e) = param_5; \| *(char *)(iVar1 + 0x410) = (char)uVar4; \|` |
| user.c | 111553 | `*(short *)((int)local_fc + (uVar10 * 6 + 1) * 2) - (short)local_fc[uVar10 * 3]; \| if ((*(int *)(param_1 + 0xbc) == param_2) && (*(ushort *)(` |
| user.c | 194558 | `(puVar7[2] + 1, \| s_DAPS_source_matrix_wtls_src_wtls_001acfb8,0x40d); \| if (local_48 == 0) { \| uVar6 = 0x410; \| } \| else { \| if ((puVar7[2] ` |
| user.c | 224800 | ` \| iVar3 = param_3 + 0x18 >> 5; \| iVar5 = 0; \| *(uint **)(param_1 + 0x68) = (uint *)(param_1 + 0x410c); \| puVar1 = (uint *)(param_1 + 0x410c` |
| user.c | 224801 | `iVar3 = param_3 + 0x18 >> 5; \| iVar5 = 0; \| *(uint **)(param_1 + 0x68) = (uint *)(param_1 + 0x410c); \| puVar1 = (uint *)(param_1 + 0x410c); ` |
| user.c | 272383 | `uVar4 = 1; \| } \| local_f8 = uVar4; \| thunk_EXT_FUN_81103f4a(DAT_00235f54,DAT_00235f50,0x4105,uVar1); \| FUN_003deb66(iVar6,uVar4,1); \| FUN_00` |
| user.c | 298120 | `uVar162) - ((short)(uVar95 >> 0x10) * -0x506c + (iVar77 >> 0x10))) - \| ((short)(uVar103 >> 0x10) * -0xeec + (iVar85 >> 0x10))) - \| ((short)(` |
| user.c | 298161 | `((short)(uVar155 >> 0x10) * -0x41ff + (iVar110 >> 0x10))) - \| ((short)(uVar194 >> 0x10) * 0x6dcc + ((uVar194 & 0xffff) * 0x6dcc >> 0x10)))) ` |
| user.c | 321840 | `uVar2 = 0x40f; \| break; \| case 6: \| uVar2 = 0x410; \| break; \| case 7: \| uVar2 = 0x411;` |
| user.c | 368788 | `*(undefined4 *)(iVar1 + 0x10) = 1; \| } \| thunk_FUN_001f03b0(iVar4); \| thunk_EXT_FUN_81103f4a(s__iperf__CLOSE_SOCKET__s__d_003400e8,DAT_0033f` |
| user.c | 390096 | `*(undefined4 *)(iVar5 + 0x3e4) = *(undefined4 *)(iVar10 + 0x7a4); \| *(undefined4 *)(iVar5 + 0x408) = *(undefined4 *)(iVar10 + 0x7a8); \| *(un` |
| user.c | 391088 | `*(undefined8 *)(iVar36 + 0x3d8) = uVar39; \| *(undefined8 *)(iVar36 + 0x3e0) = uVar39; \| *(undefined8 *)(iVar36 + 0x408) = uVar39; \| *(undefi` |
| user.c | 391415 | `*(undefined8 *)(param_3 + 0x3d8) = uVar39; \| *(undefined8 *)(param_3 + 0x3e0) = uVar39; \| *(undefined8 *)(param_3 + 0x408) = uVar39; \| *(und` |
| user.c | 416637 | `uVar2 = param_1[1]; \| uVar3 = param_1[2]; \| *(undefined4 *)(iVar1 + 0x40c) = *param_1; \| *(undefined4 *)(iVar1 + 0x410) = uVar2; \| *(undefin` |
| user.c | 467245 | `piVar1 = DAT_003edee8; \| if (*DAT_003edee8 == 0) { \| uVar2 = FUN_0010ae66(); \| iVar3 = FUN_0024a942(uVar2,&DAT_003edefc,0x410,DAT_003edef8,D` |
| user.c | 502288 | `iVar3 = DAT_004299ac + -3; \| } \| else { \| piVar2 = (int *)thunk_EXT_FUN_810ffa74(0xc,s_mmidrm_c_004299b4,0x274); \| if (piVar2 == (int *)0x0)` |
| user.c | 502296 | `*piVar2 = 0; \| piVar2[1] = 0; \| piVar2[2] = 0; \| iVar3 = thunk_EXT_FUN_810ffa74(param_2 + 1,s_mmidrm_c_004299b4,0x27d); \| *piVar2 = iVar3; \|` |
| user.c | 525716 | `if (cVar1 != '\x17') { \| return pcVar2; \| } \| iVar3 = FUN_000d6164(uVar5,s_DAPS_source_matrix_ssl_src_sslwr_004549a0,0x410); \| *(int *)(pcVa` |
| user.c | 586184 | `*(undefined4 *)(*(int *)(param_1 + 0x160) + 0x54) = 0; \| for (iVar2 = 0; iVar2 < **(int **)(param_1 + 0x120) + 1; iVar2 = iVar2 + 1) { \| *(u` |
| user.c | 586607 | `*(undefined4 *)(param_1[0x59] + 0x20) = 0; \| if ((int)((uint)(byte)param_1[0x25] << 0x1b) < 0) { \| thunk_EXT_FUN_811049dc(*(undefined4 *)(pa` |
| user.c | 639705 | `if (param_1 - 0xd8 < 7) { \| return uVar3; \| } \| if (param_1 - 0x410 < 0x20) { \| return uVar3; \| } \| if (param_1 - 0x391 < 0x11) {` |
| user.c | 684524 | `thunk_FUN_002771d4(iVar3); \| if (((bVar1) && (bVar2)) && ((iVar8 == 0 && (iVar8 = FUN_0084bf00(), iVar8 == 0)))) { \| if (iVar9 == 4) { \| uVa` |
| user.c | 694198 | `sVar1 = (short)param_1; \| sVar2 = sVar1 + 0x20; \| if ((((0x19 < param_1 - 0x41) && (0x16 < param_1 - 0xc0)) && (6 < param_1 - 0xd8)) && \| ((` |
| user.c | 705580 | `if (uVar4 < *(ushort *)(param_1 + 0x94)) { \| if (uVar4 < uVar3) { \| thunk_EXT_FUN_811018b0 \| (s_highlight_max_pos_>__delete_str__00863ee0,s_` |

## 2. בסיס DRAM
*וודאות:* גבוהה*
| קובץ | שורה | קטע קוד |
|---|---|---|
| boot0.c | 4886 | `undefined4 local_30; \| int local_2c; \|  \| local_38 = 0x30000000; \| local_34 = 0; \| local_30 = _DAT_30000194; \| local_58[0] = DAT_000045b0;` |
| cm4_b.c | 24701 | `uint uVar2; \|  \| iVar1 = DAT_0001fe3c; \| *(uint *)(DAT_0001fe3c + 0x48) = *(uint *)(DAT_0001fe3c + 0x48) \| 0x30000000; \| thunk_FUN_00063bf6(` |
| cm4_b.c | 92498 | `uVar5 = uVar5 \| 0x20000000; \| } \| else if (iVar3 == 3) { \| uVar5 = uVar5 \| 0x30000000; \| } \| else { \| uVar4 = FUN_00067eac(s_DMA_dest_datawi` |
| fdl1.c | 2684 | `undefined4 local_30; \| int local_2c; \|  \| local_38 = 0x30000000; \| local_34 = 0; \| local_30 = _DAT_30000194; \| local_58[0] = DAT_00004080;` |
| img_90000024.c | 7246 | `uVar5 = uVar5 \| 0x20000000; \| } \| else if (iVar3 == 3) { \| uVar5 = uVar5 \| 0x30000000; \| } \| else { \| uVar4 = FUN_000006ec(s_DMA_dest_datawi` |
| img_90000024.c | 7384 | `uVar5 = uVar5 \| 0x20000000; \| } \| else if (iVar3 == 3) { \| uVar5 = uVar5 \| 0x30000000; \| } \| else { \| uVar4 = FUN_000006ec(s_DMA_dest_datawi` |
| kernel.c | 76762 | `FUN_006f4d3e(); \| iVar14 = thunk_FUN_000024fa(); \| if (500 < (uint)(iVar14 - iVar5)) { \| FUN_00744974((uint)uVar3 + (uint)local_34 * 0x100 +` |
| kernel.c | 285119 | `uVar5 = uVar5 \| 0x20000000; \| } \| else if (iVar2 == 3) { \| uVar5 = uVar5 \| 0x30000000; \| } \| else { \| uVar3 = FUN_006fd49c(s_DMA_dest_datawi` |
| kernel.c | 285308 | `uVar5 = uVar5 \| 0x20000000; \| } \| else if (iVar2 == 3) { \| uVar5 = uVar5 \| 0x30000000; \| } \| else { \| uVar3 = FUN_006fd49c(s_DMA_dest_datawi` |
| kernel.c | 452502 | `iVar3 = 3; \| uVar9 = (uint)(pbVar6[uVar2 + 0xc] >> 4) * 4; \| if (uVar9 < 0x14) { \| *(uint *)(param_1 + 0x14) = uVar8 & 0x8fffffff \| 0x300000` |
| kernel.c | 485439 | `} \| *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) \| uVar5; \| if (*(int *)(iVar1 + 0x34) << 0x1a < 0) { \| puVar8 = (undefined1 *)0x300000` |
| kernel.c | 493879 | `if ((byte)param_1[0x32] < (byte)param_1[0x31]) { \| uVar4 = uVar4 + 0x18; \| *puVar3 = uVar4; \| *puVar3 = (uVar4 & 0x3ff \| (uint)(byte)param_1` |
| kernel.c | 493883 | `uVar4 = (puVar3[1] & 0xffffffc3 \| 0x3c3) + 8; \| puVar3[1] = uVar4; \| puVar2 = puVar3 + 2; \| puVar3[1] = (uVar4 & 0x3ff \| (uint)(byte)param_1` |
| kernel.c | 493888 | `else { \| uVar4 = uVar4 + 0x10; \| *puVar3 = uVar4; \| *puVar3 = (uVar4 & 0x3ff \| (uint)(byte)param_1[0x32] << 10) + 0x30000000; \| puVar2 = puV` |
| kernel.c | 1343229 | `*puVar3 = uVar6; \| } \| pcVar4 = DAT_008656b0; \| *puVar3 = uVar6 \| 0x30000000; \| if ('\0' < *pcVar4) { \| FUN_006f4b10(0x1f,DAT_008656c4,&DAT_` |
| kernel.c | 1343231 | `pcVar4 = DAT_008656b0; \| *puVar3 = uVar6 \| 0x30000000; \| if ('\0' < *pcVar4) { \| FUN_006f4b10(0x1f,DAT_008656c4,&DAT_008656b4,(uVar6 & 0x3ff` |
| kernel.c | 1355521 | `FUN_0089443c(&local_50); \| uVar2 = local_50 & 0xffffff; \| local_50 = CONCAT31((int3)((uVar2 \| (param_1 >> 3 & 1) << 0x18 \| (param_1 & 7) << ` |
| kernel.c | 1369412 | `local_1c[0] = 0; \| sVar1 = *(short *)(*DAT_0088f2c0 + param_1 * 8 + 4); \| FUN_00893e50(&local_40); \| local_3c = (local_3c & 0xffffff \| (para` |
| kernel.c | 1371909 | `FUN_00894516(local_30); \| uVar1 = local_30[0] & 0xffffff; \| local_30[0] = CONCAT31((int3)((uVar1 \| (param_1 >> 3 & 1) << 0x18 \| (param_1 & 7` |
| kernel.c | 1373332 | `FUN_00894492(local_28); \| uVar1 = local_28[0] & 0xffffff; \| local_28[0] = CONCAT31((int3)((uVar1 \| (param_1 >> 3 & 1) << 0x18 \| (param_1 & 7` |
| kernel.c | 1453680 | `goto LAB_00919412; \| } \| } \| if (iVar1 == 0x30000000) { \| iVar1 = FUN_0090d7fe(param_1,&local_24); \| if (iVar1 != 0) { \| *(undefined1 *)(par` |
| kernel.c | 1453685 | `if (iVar1 != 0) { \| *(undefined1 *)(param_4 + 4) = 1; \| } \| FUN_009192b8(param_1,0x30000000,iVar1,param_4 + 8,&local_24); \| } \| if (param_3 ` |
| kernel.c | 1458545 | `else { \| if (uVar12 != 0x140) { \| if (uVar12 == 0x280) { \| *puVar10 = (*puVar10 & 0xc7ffffff) + 0x30000000; \| goto LAB_009209f6; \| } \| LAB_0` |
| kernel.c | 1459183 | `FUN_0091a618(param_1,iVar1,iVar2,param_4 + 4,local_28,1,0x670,0x48b); \| iVar1 = FUN_008c9708(param_1,local_28); \| } \| if (iVar1 == 0x3000000` |
| kernel.c | 1459186 | `if (iVar1 == 0x30000000) { \| uVar3 = FUN_0090d7fe(param_1,local_28); \| FUN_006b6332(param_4 + 0xc,0x54); \| FUN_009225c2(param_1,0x30000000,u` |
| kernel.c | 1580720 | `if (*(int *)(param_1 + 8) == 0) { \| FUN_006f2c00(0,DAT_009c3dd8 + 0x14,0x597,DAT_009c3dd8,s_a_RLC_SDU_Ptr_>buffer_Ptr_009c3e78); \| } \| *(und` |
| kernel.c | 1761128 | `if (-1 < (int)uVar18) { \| if (((uint)param_1[0xd] < 0x30000001) \|\| (0xfffffff < param_4)) { \| if (((uint)param_1[0xd] < 0x10000000) && \| ((0` |
| user.c | 409996 | `piVar10 = (int *)LZCOUNT(iVar8); \| piVar19 = (int *)((int)piVar10 + -1); \| iVar14 = 5; \| iVar20 = 0x30000000; \| do { \| iVar20 = (int)((ulong` |
| user.c | 410052 | `else { \| piVar10 = (int *)(LZCOUNT(uVar18) + -1); \| iVar20 = 5; \| iVar8 = 0x30000000; \| do { \| iVar8 = (int)((ulonglong) \| ((longlong)iVar8 ` |

## 3. UART ובדואר
*וודאות:* בינונית*
| קובץ | שורה | קטע קוד |
|---|---|---|
| kernel.c | 46723 | `local_24 = param_4; \| iVar1 = FUN_00055726(param_2); \| if (iVar1 == 0) { \| uVar2 = FUN_006fd49c(s_Invalid_clock_level_value___d___00055988,p` |
| kernel.c | 71609 | `if (*(char *)(iVar4 + 0x4a) == '\0') { \| _DAT_20c00000 = 0x19; \| iVar5 = FUN_000853ee(&DAT_20c00000,0x80,0x80,DAT_0007f6d0, \| s_DCAM_CFG__po` |
| kernel.c | 71623 | `} while (uVar6 < 0x40); \| } \| _DAT_20c00000 = 9; \| iVar4 = FUN_000853ee(&DAT_20c00000,0,0,uVar3,s_DCAM_CFG__polling_dcam_clock_sta_0007f6ab ` |
| kernel.c | 80173 | `*(int *)(iVar2 + 0xc0) = DAT_00080fc4 + iVar3 * 0x40; \| uVar1 = DAT_00080fec; \| _DAT_20c00000 = 0x19; \| FUN_000853ee(&DAT_20c00000,0x80,0x80` |
| kernel.c | 80192 | `uVar9 = uVar9 + 1 & 0xff; \| } while (uVar9 < 2); \| _DAT_20c00000 = 9; \| FUN_000853ee(&DAT_20c00000,0,0,uVar1,s_DCAM_CFG__polling_dcam_clock_` |
| kernel.c | 494054 | `uStack_10 = DAT_0034bf90[2]; \| iVar1 = FUN_0039fce0(&local_18,iVar3 + param_1 * 4); \| if (iVar1 != 0) { \| uVar2 = FUN_006fd49c(s__s___d__TFT` |
| kernel.c | 494055 | `iVar1 = FUN_0039fce0(&local_18,iVar3 + param_1 * 4); \| if (iVar1 != 0) { \| uVar2 = FUN_006fd49c(s__s___d__TFT_clock_device_not_fou_0034bf9c,` |
| kernel.c | 494059 | `} \| iVar1 = FUN_003a0278(*(undefined4 *)(iVar3 + param_1 * 4)); \| if (iVar1 != 0) { \| uVar2 = FUN_006fd49c(s__s___d__TFT_clock_device_cannot` |
| kernel.c | 494060 | `iVar1 = FUN_003a0278(*(undefined4 *)(iVar3 + param_1 * 4)); \| if (iVar1 != 0) { \| uVar2 = FUN_006fd49c(s__s___d__TFT_clock_device_cannot_o_0` |
| kernel.c | 514977 | `} \| iVar2 = FUN_00055726(uVar4); \| if (iVar2 == 0) { \| uVar3 = FUN_006fd49c(s_Invalid_clock_level_value___d___003746b0,uVar4); \| thunk_FUN_0` |
| kernel.c | 535028 | `int iVar2; \|  \| if (param_2 == (int *)0x0) { \| FUN_006fb8b0(s_pClkObj____0x0_0039ff94,s_clock_c_0039ff80,0xf6); \| } \| piVar1 = DAT_0039ff90;` |
| kernel.c | 535054 | `int iVar1; \|  \| if (param_1 == 0) { \| FUN_006fb8b0(s_Name____0x0_0039ffdc,s_clock_c_0039ff80,0xc1); \| } \| if (param_2 == (int *)0x0) { \| FUN` |
| kernel.c | 535057 | `FUN_006fb8b0(s_Name____0x0_0039ffdc,s_clock_c_0039ff80,0xc1); \| } \| if (param_2 == (int *)0x0) { \| FUN_006fb8b0(s_pDevObj____0x0_0039ffe8,s_` |
| kernel.c | 535077 | `int iVar4; \|  \| if (param_1 == 0) { \| FUN_006fb8b0(s_Name____0x0_0039ffdc,s_clock_c_0039ff80,0xd9); \| } \| if (param_2 == (int *)0x0) { \| FUN` |
| kernel.c | 535080 | `FUN_006fb8b0(s_Name____0x0_0039ffdc,s_clock_c_0039ff80,0xd9); \| } \| if (param_2 == (int *)0x0) { \| FUN_006fb8b0(s_pClkObj____0x0_0039ff94,s_` |
| kernel.c | 535106 | ` \| { \| if (param_1 == (int *)0x0) { \| FUN_006fb8b0(s___0x0____thiz_003a03f6 + 2,s_clock_c_0039ff80,0x15c); \| } \| FUN_006fe074(0x10,DAT_003a0` |
| kernel.c | 535123 | ` \| { \| if (param_1 == (int *)0x0) { \| FUN_006fb8b0(s_0x0____ClkObj_003a0404,s_clock_c_0039ff80,0x2fe); \| } \| FUN_006fe074(0x10,DAT_003a03cc ` |
| kernel.c | 535149 | ` \| { \| if (param_1 == (int *)0x0) { \| FUN_006fb8b0(s___0x0____thiz_003a03f6 + 2,s_clock_c_0039ff80,0x173); \| } \| FUN_006fe074(0x10,DAT_003a0` |
| user.c | 202453 | `iVar5 = *(int *)(param_1 + 100); \| _DAT_20c00000 = 0x19; \| thunk_EXT_FUN_80a8b3ee \| (&DAT_20c00000,0x80,0x80,DAT_001b8ef8,s_DCAM_CFG__pollin` |
| user.c | 202496 | `} while (uVar3 < 0x3f); \| } \| _DAT_20c00000 = 9; \| thunk_EXT_FUN_80a8b3ee(&DAT_20c00000,0,0,uVar1,s_DCAM_CFG__polling_dcam_clock_sta_001b8ed` |
| user.c | 693475 | `int iVar5; \| int iVar6; \|  \| thunk_EXT_FUN_81103f4a(s_SetWorldClockToLocal_text_id___d_0084ac74,param_1); \| piVar3 = DAT_0084ac64; \| iVar2 =` |

## 4. קונסולת UART
*וודאות:* גבוהה*
| קובץ | שורה | קטע קוד |
|---|---|---|
| boot0.c | 3243 | `int iVar2; \|  \| iVar2 = FUN_000023ca(); \| FUN_00001e28(s_boot0_UART_JTAG_mode____d_00002514,iVar2); \| iVar1 = DAT_00002530; \| if (iVar2 != 2` |
| cm4_a.c | 1521 | `uint local_2c; \|  \| if (1 < param_1) { \| FUN_0000019c(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_00001ae8,s_sio_c_00001ac4,0x1d1); \| } \| if ((param_2` |
| cm4_a.c | 1524 | `FUN_0000019c(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_00001ae8,s_sio_c_00001ac4,0x1d1); \| } \| if ((param_2 != 0xff) && (10 < param_2)) { \| FUN_0000` |
| cm4_a.c | 1614 | `LAB_00001814: \| puVar2 = DAT_00001b44; \| if (puVar9[param_1 * 0x25 + 0x19] == 0) { \| FUN_0000019c(s_sio_port_port__sio_op_init____NU_00001b8` |
| cm4_a.c | 1855 | `int iVar4; \|  \| if (1 < param_1) { \| FUN_0000019c(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_00002a2c,s_sio_sync_ops_c_00002a1c,0x92); \| } \| iVar1 = ` |
| cm4_a.c | 1882 | `if (iVar2 != -1) { \| return; \| } \| FUN_0000019c(s_SCI_INVALID_BLOCK_ID____s_sio_sy_00002a54,s_sio_sync_ops_c_00002a1c,0xb2); \| return; \| } \|` |
| cm4_b.c | 91023 | `uint local_2c; \|  \| if (1 < param_1) { \| FUN_00067ed8(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_0006bbfc,s_sio_c_0006bbd8,0x1d1); \| } \| if ((param_2` |
| cm4_b.c | 91026 | `FUN_00067ed8(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_0006bbfc,s_sio_c_0006bbd8,0x1d1); \| } \| if ((param_2 != 0xff) && (10 < param_2)) { \| FUN_0006` |
| cm4_b.c | 91116 | `LAB_0006b924: \| puVar2 = DAT_0006bc58; \| if (puVar9[param_1 * 0x25 + 0x19] == 0) { \| FUN_00067ed8(s_sio_port_port__sio_op_init____NU_0006bc9` |
| cm4_b.c | 92240 | `int iVar4; \|  \| if (1 < param_1) { \| FUN_00067ed8(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_0006d73c,s_sio_sync_ops_c_0006d72c,0x92); \| } \| iVar1 = ` |
| cm4_b.c | 92267 | `if (iVar2 != -1) { \| return; \| } \| FUN_00067ed8(s_SCI_INVALID_BLOCK_ID____s_sio_sy_0006d764,s_sio_sync_ops_c_0006d72c,0xb2); \| return; \| } \|` |
| fdl2.c | 7174 | `if (iVar5 != 0) { \| FUN_0000a864(puVar9); \| piVar1[4] = 0; \| FUN_00005c74(s_uart_crc_error_0000ab40); \| FUN_0000a91a(s_SEND_ERROR_RSP_0x_x__` |
| img_90000024.c | 2544 | `int iVar2; \|  \| iVar2 = FUN_00001e3c(); \| FUN_000009f8(s_boot0_UART_JTAG_mode____d_00002034,iVar2); \| iVar1 = DAT_00002050; \| if (iVar2 == 2` |
| kernel.c | 8156 | `if (*(char *)*piVar58 == '\0') { \| uVar68 = FUN_006fd49c(s_The_acc_class_not_present_0081d404); \| thunk_FUN_006fb59e(s_nas_swth_context_ptr_` |
| kernel.c | 59045 | `} \| else { \| iStack_30 = param_2; \| FUN_006f9124(auStack_70,s_Unknown_zTXt_compression_type__d_0006590c,param_2); \| FUN_006fdf4a(auStack_70)` |
| kernel.c | 60149 | `for (; (*pcVar7 != '\0' && (pcVar7 <= pcVar9)); pcVar7 = pcVar7 + 1) { \| } \| if (pcVar9 < pcVar7) { \| FUN_006fe074(0x10,DAT_00066a34 + 0x12,` |
| kernel.c | 61995 | `iVar2 = FUN_00058dc0(DAT_00068534,DAT_00068530); \| if (iVar2 != 0) { \| uVar3 = FUN_0038348c(); \| FUN_00068216(s_Current_Version___s_00068538` |
| kernel.c | 75478 | `uVar1 = *(undefined4 *)(DAT_0007a1a8 + param_1 * 8 + 4); \| } \| else { \| FUN_006fb8b0(&DAT_0007a1b4,s_sio_c_0007a1ac,0x28b); \| } \| return uVa` |
| kernel.c | 75561 | `int iVar2; \|  \| if (9 < param_1) { \| FUN_006fb8b0(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_0007a1b8,s_sio_c_0007a1ac,0x489); \| } \| iVar2 = DAT_0007` |
| kernel.c | 75586 | ` \| uVar1 = 0; \| if (9 < param_1) { \| FUN_006fb8b0(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_0007a1b8,s_sio_c_0007a1ac,0x4c6); \| } \| iVar2 = DAT_0007` |
| kernel.c | 75686 | `ushort uVar7; \|  \| if (param_1 == 0) { \| FUN_006fb8b0(s_data_frame_ptr_0007aad8,s_sio_c_0007a1ac,0x6ce); \| } \| FUN_006f4d8e(); \| psVar4 = DA` |
| kernel.c | 75749 | `int iVar3; \|  \| if (param_2 == 0) { \| FUN_006fb8b0(s_start_addr_0007aaf0,s_sio_c_0007a1ac,0x675); \| } \| if (param_3 == 0) { \| FUN_006fb8b0(s` |
| kernel.c | 75752 | `FUN_006fb8b0(s_start_addr_0007aaf0,s_sio_c_0007a1ac,0x675); \| } \| if (param_3 == 0) { \| FUN_006fb8b0(s_0____length_0007aafc,s_sio_c_0007a1ac` |
| kernel.c | 75756 | `} \| iVar2 = FUN_0007c76c(param_1 & 0xff); \| if (iVar2 == -1) { \| FUN_006fb8b0(s_0xFFFFFFFF____channel_0007ab08,s_sio_c_0007a1ac,0x679); \| } ` |
| kernel.c | 75760 | `} \| iVar3 = FUN_0007c744(param_1 & 0xff); \| if (iVar3 == -1) { \| FUN_006fb8b0(s_0xFFFFFFFF____uart_base_addr_0007ab20,s_sio_c_0007a1ac,0x67b` |
| kernel.c | 75795 | `ushort *puVar8; \|  \| if (param_1 == (undefined4 *)0x0) { \| FUN_006fb8b0(s_data_frame_ptr_0007aad8,s_sio_c_0007a1ac,0x729); \| } \| psVar5 = DA` |
| kernel.c | 75896 | `iVar4 = DAT_0007afc0[1]; \| if (uVar7 < 0xd) { \| if (iVar8 == 0) { \| FUN_006fb8b0(s_0xFFFFFFFF____uart_base_addr_0007ab20 + 0x18,s_sio_c_0007` |
| kernel.c | 75899 | `FUN_006fb8b0(s_0xFFFFFFFF____uart_base_addr_0007ab20 + 0x18,s_sio_c_0007a1ac,0xb0e); \| } \| if (iVar4 == 0) { \| FUN_006fb8b0(s_length_0007afc` |
| kernel.c | 75975 | ` \| uVar9 = 0; \| if (9 < param_1) { \| FUN_006fb8b0(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_0007a1b8,s_sio_c_0007a1ac,0x83d); \| } \| if ((param_2 != ` |
| kernel.c | 75978 | `FUN_006fb8b0(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_0007a1b8,s_sio_c_0007a1ac,0x83d); \| } \| if ((param_2 != 0xff) && (0xb < param_2)) { \| FUN_006` |
| kernel.c | 75981 | `FUN_006fb8b0(s__phy_port____0xff______phy_port_<_0007afd8,s_sio_c_0007a1ac,0x83e); \| } \| if ((param_1 == 0) && ((param_2 == 8 \|\| (param_2 ==` |
| kernel.c | 76106 | `} while (uVar10 < (ushort)puVar1[3]); \| } \| if (*(int *)(iVar11 + 100) == 0) { \| FUN_006fb8b0(s_sio_port_port__sio_op_init____NU_0007b02c,s_` |
| kernel.c | 76161 | `*(undefined4 *)(puVar1 + 0x36) = 0; \| *(undefined4 *)(puVar1 + 0x38) = 0; \| if (*(int *)(puVar1 + 0x2e) == 0) { \| iVar8 = FUN_006f86b0(s_mut` |
| kernel.c | 76393 | `FUN_006f5a6c(iVar2,3,0); \| } \| if (*(int *)(iVar4 + 100) == 0) { \| FUN_006fb8b0(s_sio_port_port__sio_op_init____NU_0007b02c,DAT_0007b900,0x8` |
| kernel.c | 77173 | ` \| iVar4 = DAT_0007c1d0; \| pcVar1 = DAT_0007c1c8; \| FUN_006fdf4a(s_sio__writeCmdRes_0x_x___d_0007c1e8,*(undefined1 *)(DAT_0007c1d0 + 3),*DAT` |
| kernel.c | 77206 | `if (iVar4 != 0) { \| FUN_0007be5a(); \| FUN_0007a0a0(); \| FUN_006fdf4a(s__sio__user_port_mode____d_0007c204,*(undefined4 *)(pcVar2 + 0x98)); \|` |
| kernel.c | 188371 | ` \| FUN_006fe9dc(auStack_110,0x100); \| if (param_2 == 1) { \| pcVar1 = s_Session_Expires___d_refresher_ua_00140eb0; \| } \| else if (param_2 == ` |
| kernel.c | 188374 | `pcVar1 = s_Session_Expires___d_refresher_ua_00140eb0; \| } \| else if (param_2 == 2) { \| pcVar1 = s_Session_Expires___d_refresher_ua_00140ed4;` |
| kernel.c | 188377 | `pcVar1 = s_Session_Expires___d_refresher_ua_00140ed4; \| } \| else { \| pcVar1 = s_Session_Expires___d_00140e9c; \| } \| FUN_006f3582(auStack_110` |
| kernel.c | 248850 | `iVar6 = *(int *)(DAT_001bf3fc + *piVar5 * 4); \| FUN_00243f0e(param_1 + 0x1c,0xe,param_3,param_4,param_4); \| *(undefined4 *)(iVar6 + 0x138) =` |
| kernel.c | 248972 | `iVar8 = iVar7 + 0x18; \| *(undefined4 *)(iVar7 + 0x138) = 3; \| *(undefined4 *)(iVar7 + 0x24) = 1; \| *(char **)(iVar7 + 0x144) = s_Cookie2___V` |
| kernel.c | 268521 | `FUN_0024e8a4(0x400000,s_UA_DialogInit__doesn_t_needSessi_001dfe68,0,0,0); \| } \| else { \| FUN_0024e8a4(0x400000,s_UA_DialogInit__needSession_` |
| kernel.c | 281748 | `undefined4 *puVar2; \|  \| if (*(uint *)(DAT_001f3064 + 4) < param_1) { \| FUN_006fb8b0(s_port_<__uart_count_001f3074,s_sio_uart_c_001f3068,0x3` |
| kernel.c | 281751 | `FUN_006fb8b0(s_port_<__uart_count_001f3074,s_sio_uart_c_001f3068,0x3e); \| } \| if (param_2 == 0) { \| FUN_006fb8b0(s_buffer____NULL_001f3088,s` |
| kernel.c | 281754 | `FUN_006fb8b0(s_buffer____NULL_001f3088,s_sio_uart_c_001f3068,0x3f); \| } \| if (param_3 == 0) { \| FUN_006fb8b0(s_0____length_001f3098,s_sio_ua` |
| kernel.c | 296348 | `case 0xb: \| return s_ISI_RETURN_INVALID_CREDENTIALS_0020ba98; \| case 0xc: \| return s_ISI_RETURN_INVALID_SESSION_DIR_0020bab8; \| case 0xd: \| ` |
| kernel.c | 296641 | `*(undefined4 *)(puVar2 + 0x38)); \| FUN_003dffa8(DAT_0020c544,*(undefined4 *)(puVar2 + 0x3c),*(undefined4 *)(puVar2 + 0x40), \| *(undefined4 *` |
| kernel.c | 296643 | `*(undefined4 *)(puVar2 + 0x44)); \| FUN_003dffa8(s_sip_MinSE___d__sip_sessionTimer__0020c548,*(undefined4 *)(puVar2 + 0x48), \| *(undefined2 *` |
| kernel.c | 297010 | `param_1[5] = 0; \| if ((*(byte *)(param_3 + 0xc) & 1) == 0) { \| iVar3 = 0; \| pcVar5 = s_Failed_bad_SDP_protocol_version_h_0020d58c; \| goto LA` |
| kernel.c | 346993 | `break; \| default: \| uVar8 = 0xc06; \| local_d8 = s_invalid_transmission_status_fail_00267ecc; \| iVar9 = DAT_00267eb0 + 0x70; \| break; \| case ` |
| kernel.c | 360232 | `} \| FUN_0025ea46(iVar1,param_2,param_1,param_3 * 1000,0); \| LAB_00277ca8: \| FUN_0024e8a4(0xc000000,s_DIALOG_StartSessionTimer__starte_00277f` |
| kernel.c | 370287 | `goto LAB_0028abc8; \| default: \| uVar12 = 0xb63; \| local_40 = s_Unexpected_transmission_confirm_s_00289af8; \| uVar15 = DAT_0028a76c; \| goto L` |
| kernel.c | 370352 | `goto LAB_0028abc8; \| default: \| uVar12 = 0xbab; \| local_40 = s_Unexpected_transmission_confirm_s_00289af8; \| uVar15 = DAT_0028ac1c; \| goto L` |
| kernel.c | 370408 | `goto LAB_0028abc8; \| default: \| uVar12 = 0xc47; \| local_40 = s_Unexpected_transmission_confirm_s_00289af8; \| uVar15 = DAT_0028ac1c; \| goto L` |
| kernel.c | 370482 | `goto LAB_0028abc8; \| default: \| uVar12 = 0xbef; \| local_40 = s_Unexpected_transmission_confirm_s_00289af8; \| uVar15 = DAT_0028ac1c; \| goto L` |
| kernel.c | 371116 | `goto LAB_0028abc8; \| default: \| uVar12 = 0xac0; \| local_40 = s_Unexpected_transmission_confirm_s_00289af8; \| uVar15 = DAT_0028a76c; \| goto L` |
| kernel.c | 371300 | `uVar12 = 0x7b4; \| uVar15 = DAT_00289af0; \| LAB_002899d0: \| local_40 = s_Unexpected_transmission_confirm_s_00289af8; \| LAB_0028ac70: \| FUN_00` |
| kernel.c | 376684 | `if (*(byte *)(local_38[0] + 8) < 0x60) { \| piVar8 = (int *)FUN_0025e69a(*(byte *)(local_38[0] + 8)); \| if (piVar8 == (int *)0x0) { \| FUN_002` |
| kernel.c | 376979 | `local_2c = 0; \| local_30 = 0; \| local_28 = param_1; \| FUN_0024e8a4(0x3000000,s_SESSION_MakeSdp__hSession__X_00293bec,param_1,0); \| iVar6 = l` |
| kernel.c | 377032 | `iVar2 = FUN_0025b570(5); \| if (iVar2 == 0) { \| uVar3 = 0x1000000; \| pcVar5 = s_SESSION_MakeSdp__Not_enoungh_mem_00293c10; \| goto LAB_0029390` |
| kernel.c | 377055 | `iVar7 = iVar7 + *(int *)(local_2c + 0x1948); \| } \| } \| FUN_0024e8a4(0x3000000,s_SESSION_AS_VAL__AS__d_RS__d_RR___00293c44,iVar10,iVar9); \| i` |
| kernel.c | 377300 | `undefined4 uVar2; \| int iVar3; \|  \| FUN_0024e8a4(0x3000000,s_SESSION_Encode__hSession__X_00293c68,param_1,0); \| if ((param_1 == 0) \|\| (iVar3` |
| kernel.c | 377962 | `uVar2 = 0xfffffff2; \| } \| else { \| FUN_0024e8a4(0x3000000,s_SESSION_Decode__hSession__X_002949e8,param_1,0,0); \| if (param_1 == 0) { \| uVar2` |
| kernel.c | 377973 | `*(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(iVar1 + 0x98); \| uVar2 = *(undefined4 *)(iVar1 + 0x9c); \| *(undefined4 *)(param_1 + 0x254` |
| kernel.c | 377997 | `uVar2 = 0; \| if (*(int *)(param_1 + 0x144) != 0) { \| *(undefined2 *)(param_1 + 0x248) = 0; \| FUN_0024e8a4(0x3000000,s_SESSION_Decode__rmtAdd` |
| kernel.c | 378070 | `{ \| undefined4 uVar1; \|  \| FUN_0024e8a4(0x3000000,s_SESSION_Init__hSession__X_00294b04,param_1,0,0); \| if (param_2 == (char *)0x0) { \| retur` |
| kernel.c | 378075 | `return; \| } \| uVar1 = 0; \| FUN_0024e8a4(0x2000000,s_SESSION_Init__setting_default_na_00294b20,param_1,0); \| if (*param_2 == '\0') { \| param_` |
| kernel.c | 378090 | `void FUN_00294b5a(undefined1 *param_1) \|  \| { \| FUN_0024e8a4(0x3000000,s_SESSION_Destroy__hSession__X_00294e10,param_1,0); \| *param_1 = 0; \|` |
| kernel.c | 399546 | `*(undefined4 *)((int)&DAT_00001c4c + iVar9) = uVar10; \| FUN_001dfdb4(iVar6,s_ThreadInfo_Offset_0x_08X__Length_00001b88 + iVar9 + 0x24,iVar2 ` |
| kernel.c | 399550 | `iVar3 = FUN_00293b90(s_ThreadInfo_Offset_0x_08X__Length_00001b88 + iVar9 + 0x24,param_6); \| *(int *)(iVar2 + 0x24dc) = iVar3; \| if (iVar3 ==` |
| kernel.c | 399748 | `*(uint *)((int)&DAT_00001c4c + iVar8) = (uint)(iVar7 == 0); \| FUN_001dfdb4(param_1,s_ThreadInfo_Offset_0x_08X__Length_00001b88 + iVar8 + 0x2` |
| kernel.c | 399752 | `iVar3 = FUN_00293b90(s_ThreadInfo_Offset_0x_08X__Length_00001b88 + iVar8 + 0x24,param_6); \| *(int *)(iVar2 + 0x24dc) = iVar3; \| if (iVar3 ==` |
| kernel.c | 400198 | `} \| return 1; \| } \| FUN_0024e8a4(0xc00000,s_UA_UpdateCall_Creating_Session_O_002b5380,0,0,0); \| iVar2 = FUN_00293b90(s_ThreadInfo_Offset_0x_` |
| kernel.c | 401075 | `local_48[1] = '\0'; \| local_48[2] = '\0'; \| local_48[3] = '\0'; \| FUN_0024e8a4(0x400000,s_UA_Message_FAILED__bad_session_d_002b7058,param_1,` |
| kernel.c | 402866 | `int iVar1; \| undefined4 uVar2; \|  \| FUN_003dffa8(s__MNS_initOutboundSession__crypt__002b9144,*(undefined4 *)(param_2 + 0x48)); \| FUN_002991c` |
| kernel.c | 402902 | `pcVar1 = DAT_002b9134; \| local_28 = param_4; \| if ('\x02' < *DAT_002b9134) { \| FUN_006f4b10(0x2c,DAT_002b9140 + -0x68,s__MNS_initOutboundSes` |
| kernel.c | 403282 | `*(undefined4 *)(iVar5 + 0x138) = 0x13; \| while (iVar4 = FUN_0026fe14(iVar5,&local_20), iVar4 != 0) { \| if ('\x02' < *pcVar1) { \| FUN_006f4b1` |
| kernel.c | 457497 | `FUN_006f4a98(0x2d,DAT_0031b020,param_3,param_4,param_3,param_4); \| } \| if (((char)param_1[0x36] == '\0') && (*(char *)((int)param_1 + 0x55) ` |
| kernel.c | 458037 | `FUN_006fb8b0(s_pCtx_>sn_smallmask_____pCtx_>sn__0031ab98,DAT_0031bc80,0x146a); \| } \| if (((char)param_1[0x36] == '\0') && (*(char *)((int)pa` |
| kernel.c | 469834 | `bVar2 = *param_4; \| if (bVar2 >> 6 == 0) { \| if ('\x03' < cVar4) { \| FUN_006fdf4a(s_Rohc_Normal_____with_extension_0_0032a4dc); \| } \| *(unde` |
| kernel.c | 469855 | `} \| if (bVar2 >> 6 == 1) { \| if ('\x03' < cVar4) { \| FUN_006fdf4a(s_Rohc_Normal_____with_extension_1_0032a4b8); \| } \| *(undefined4 *)(*param` |
| kernel.c | 469890 | `else { \| if (bVar2 >> 6 != 2) { \| if ('\x03' < cVar4) { \| FUN_006fdf4a(s_Rohc_Normal_____with_extension_3_0032a528); \| } \| *(undefined4 *)(*` |
| kernel.c | 469901 | `return pbVar7; \| } \| if ('\x03' < cVar4) { \| FUN_006fdf4a(s_Rohc_Normal_____with_extension_2_0032a500); \| } \| *(undefined4 *)(*param_1 + 0x9` |
| kernel.c | 469946 | `bVar2 = *param_4; \| if (bVar2 >> 6 == 0) { \| if ('\x03' < cVar4) { \| FUN_006fdf4a(s_Rohc_Normal_____with_extension_0_0032a4dc); \| } \| *(unde` |
| kernel.c | 469960 | `} \| if (bVar2 >> 6 == 1) { \| if ('\x03' < cVar4) { \| FUN_006fdf4a(s_Rohc_Normal_____with_extension_1_0032a4b8); \| } \| *(undefined4 *)(*param` |
| kernel.c | 469975 | `else { \| if (bVar2 >> 6 != 2) { \| if ('\x03' < cVar4) { \| FUN_006fdf4a(s_Rohc_Normal_____with_extension_3_0032a528); \| } \| *(undefined4 *)(*` |
| kernel.c | 469982 | `goto LAB_0032a64c; \| } \| if ('\x03' < cVar4) { \| FUN_006fdf4a(s_Rohc_Normal_____with_extension_2_0032a500); \| } \| *(undefined4 *)(*param_1 +` |
| kernel.c | 470329 | `LAB_0032b1f6: \| local_7c = 0x3f; \| if ('\x03' < *pcVar2) { \| FUN_006fdf4a(s_Rohc_Normal_____with_no_extensio_0032ab48); \| } \| param_2 = para` |
| kernel.c | 470453 | `goto LAB_0032abbe; \| } \| if ('\x03' < *pcVar2) { \| FUN_006fdf4a(s_Rohc_Normal_____with_no_extensio_0032ab48); \| } \| pbVar7 = (byte *)param_1` |
| kernel.c | 470949 | `local_60 = 0x1f; \| if (-1 < (int)((uint)param_2[1] << 0x18)) { \| if ('\x03' < *pcVar3) { \| FUN_006fdf4a(s_Rohc_Normal_____with_no_extensio_0` |
| kernel.c | 471078 | `} \| else { \| if ('\x03' < *pcVar3) { \| FUN_006fdf4a(s_Rohc_Normal_____with_no_extensio_0032ab48); \| } \| pbVar14 = param_2 + 2; \| if ((byte *` |
| kernel.c | 519002 | `if (uVar5 == 0) { \| return 1; \| } \| FUN_006fdf4a(s_update_vesion_efuse_version_is___0037dfe8); \| uVar4 = *(undefined4 *)(param_3 + 0x130); \|` |
| kernel.c | 519009 | `if (iVar3 == 0) { \| return 1; \| } \| pcVar2 = s_antiroll_back_update_vesion_fail_0037e020; \| goto LAB_0037df46; \| } \| }` |
| kernel.c | 519038 | `if (uVar5 == 0) { \| return 1; \| } \| FUN_006fdf4a(s_update_vesion_efuse_version_is___0037dfe8); \| uVar4 = *(undefined4 *)(param_3 + 0x150); \|` |
| kernel.c | 520258 | `FUN_00adb714(pcVar1,&DAT_00383550); \| FUN_00adb714(pcVar1,puVar2[7]); \| if (pcVar1[0x7ff] != -0x56) { \| FUN_006fb8b0(s_0xAA____project_versi` |
| kernel.c | 595495 | `} \| uVar4 = FUN_00079dba(param_2); \| (**(code **)(iVar5 + 0x44))(uVar4,&local_50,*(undefined4 *)(iVar5 + 0x74)); \| FUN_006fdf4a(s_MUX_Create` |
| kernel.c | 595549 | `FUN_006f87dc(); \| *(undefined4 *)(iVar1 + iVar3 * 4) = 0; \| } \| FUN_006fdf4a(s_MUX_Close__Close_UART_USB_succes_003f6ac4); \| FUN_0019f40e(DA` |
| kernel.c | 635453 | `FUN_006fdf4a(s__s_hardware_name__s_0041fe90,DAT_0041fe8c,&local_30); \| FUN_006fd7c8(param_1 + 1,&local_30,0x20); \| local_30 = CONCAT22(local` |
| kernel.c | 1115448 | `local_2c = param_3; \| iStack_28 = param_4; \| uVar7 = FUN_0038348c(); \| FUN_006faeac(s_Current_Version___s_006fb400,uVar7); \| puVar5 = DAT_00` |
| kernel.c | 1141077 | `FUN_006f4a98(0x19,DAT_0071e618); \| } \| if (param_5 != 1) { \| local_78 = s_the_a_isHeaderCompressionUsed_sh_0071e61c; \| FUN_006f2c00(0,s_PS_s` |
| kernel.c | 1181569 | `case 0xa525: \| if (*DAT_00762420 != 1) { \| uVar4 = FUN_006fd49c(s_RFCAL_Diag_Wcdma_Ca_errorl_g_RET_00762424); \| thunk_FUN_006fb59e(s_g_RETUR` |
| kernel.c | 1181579 | `case 0xa527: \| if (*DAT_00762420 != 1) { \| uVar4 = FUN_006fd49c(s_RFCAL_Diag_Wcdma_Ca_errorl_g_RET_00762424); \| thunk_FUN_006fb59e(s_g_RETUR` |
| kernel.c | 1302160 | `if (*(int *)(param_1 + 0xc) == 0) { \| uVar9 = FUN_006fd49c(s_The_peer_buffer_is_empty_0081c988); \| thunk_FUN_006fb59e(s_ilm_ptr_>pdu_data_pt` |
| kernel.c | 1302758 | `if (*(char *)*DAT_0081d930 == '\0') { \| uVar8 = FUN_006fd49c(s_The_acc_class_not_present_0081d404); \| thunk_FUN_006fb59e(s_nas_swth_context_` |
| kernel.c | 1447666 | `} \| if (1 < *(byte *)(iVar12 + 0x3224)) { \| uVar6 = FUN_006fd49c(DAT_009068cc); \| thunk_FUN_006fb59e(s_pRX_Session_>Card_ID_<_MAX_CARD__0090` |
| kernel.c | 1524503 | `if (param_7 != 0) { \| if (param_6 == 0) { \| FUN_006f2c00(0,s_PS_stack_las_rrc_as_ue_src_abstr_0097696c,0x2c7, \| s_LOGGER_NULL_POINTER_009769` |
| kernel.c | 1579161 | `piVar9 = (int *)0x0; \| if (param_1 == (char *)0x0) { \| FUN_006f2c00(0,s_PS_stack_las_l2_rlc_tx_rlc_tx_c_009c1628,0x7fb,s_LOGGER_NULL_POINTER` |
| kernel.c | 1579173 | `piVar5 = (int *)FUN_00a4fcd0(uVar1,s_PS_stack_las_l2_rlc_tx_rlc_tx_c_009c1628,0x805); \| if ((*(char *)((uint)*pbVar6 + DAT_009c165c) == '\x0` |
| kernel.c | 1579460 | ` \| if (param_1 == (char *)0x0) { \| FUN_006f2c00(0,s_PS_stack_las_l2_rlc_tx_rlc_tx_c_009c1628,0x91e,s_LOGGER_NULL_POINTER_009c1614, \| s_a_tra` |
| kernel.c | 1579558 | `iVar3 = 0; \| if (param_1 == 0) { \| FUN_006f2c00(0,s_PS_stack_las_l2_rlc_tx_rlc_tx_c_009c1628,0xec5,s_LOGGER_NULL_POINTER_009c1614, \| s_a_tra` |
| kernel.c | 1579566 | `} \| if (param_3 == (int *)0x0) { \| FUN_006f2c00(0,s_PS_stack_las_l2_rlc_tx_rlc_tx_c_009c1628,0xec7,s_LOGGER_NULL_POINTER_009c1614, \| s_a_tra` |
| kernel.c | 1579612 | `*param_5 = iVar3; \| if (*param_3 == 0) { \| FUN_006f2c00(0,s_PS_stack_las_l2_rlc_tx_rlc_tx_c_009c1628,0xf0c,s_LOGGER_NULL_POINTER_009c1614, \|` |
| kernel.c | 1579636 | `} \| iVar4 = *(int *)(param_2 + 0x18); \| if (iVar4 == 0) { \| param_4 = s_transmissionPDU_Ptr_009c211c; \| FUN_006f2c00(0,s_PS_stack_las_l2_rlc` |
| kernel.c | 1579638 | `if (iVar4 == 0) { \| param_4 = s_transmissionPDU_Ptr_009c211c; \| FUN_006f2c00(0,s_PS_stack_las_l2_rlc_tx_rlc_tx_c_009c1628,0x8a4,s_LOGGER_NUL` |
| kernel.c | 1579905 | `local_84c = *(int *)(iVar5 + 0xc); \| if (local_84c == 0) { \| FUN_006f2c00(0,s_PS_stack_las_l2_rlc_tx_rlc_tx_c_009c1628,0xb5f,s_LOGGER_NULL_P` |
| kernel.c | 1579979 | `} \| if (iVar17 == 0) { \| FUN_006f2c00(0,s_PS_stack_las_l2_rlc_tx_rlc_tx_c_009c1628,0xbe0, \| s_LOGGER_NULL_POINTER_009c1614,s_transmissionPDU` |
| kernel.c | 1580114 | `local_80 = uVar18; \| if (iVar17 == 0) { \| FUN_006f2c00(0,DAT_009c2a5c + 0x14,0xc7e,DAT_009c2a5c + 0x88, \| s_Invalid_transmissionPDU_Ptr_009c` |
| kernel.c | 1580149 | `if ((uVar3 <= iVar10 + uVar18) \|\| (local_70 <= uVar15)) break; \| if (uVar19 == 0) { \| FUN_006f2c00(0,DAT_009c2a5c + 0x14,0xcb7,DAT_009c2a5c ` |
| kernel.c | 1580278 | `FUN_006f2c00(0,DAT_009c2fb0 + -0x74,0xd78,DAT_009c2fb0,DAT_009c2ff0); \| } \| if (iVar17 == 0) { \| FUN_006f2c00(0,DAT_009c2fb0 + -0x74,0xd7a,D` |
| kernel.c | 1766148 | `} \| puVar2 = DAT_00ac11bc; \| iVar10 = FUN_00a4fbb0(puVar1 + uVar11 * 0xf2 + iVar7 * 0x16 + 0x34,*DAT_00ac11bc, \| s_RLC_TX_SDU_TransmissionLi` |
| kernel.c | 1766159 | `s_Couldn_t_create_Linked_List_00ac11d8); \| } \| iVar10 = FUN_006b6016(puVar1 + uVar11 * 0xf2 + iVar7 * 0x16 + 0x35,1,*puVar2, \| s_RLC_TX_PDU_` |
| kernel.c | 1766233 | `s_Failed_to_initialize_the_fixed_b_00ac12c0); \| } \| iVar6 = FUN_0070419c(DAT_00ac118c + 4,*puVar1,0x100,0x10,4,1, \| s_RLC_TX_retransmissionE` |
| user.c | 5449 | `FUN_000d6064(); \| param_1[4] = 0; \| } \| (*(code *)&LAB_810ffbd2)(param_1,s_wtls_session_c_0000e938,0x5d); \| return; \| } \| return;` |
| user.c | 7540 | `int iVar3; \|  \| thunk_EXT_FUN_81103f4a \| (s_inflatehd__header_emission___s____000139ec,*(undefined4 *)(*param_2 + 8), \| *(undefined4 *)(para` |
| user.c | 31577 | `goto LAB_000a18d4; \| } \| if (0x4000 < (int)uVar9) { \| thunk_EXT_FUN_811018b0(DAT_0003934c,s_hci_transport_uart_c_00039310,0x171); \| } \| if (` |
| user.c | 31730 | `} \| else { \| thunk_EXT_FUN_811018b0 \| (s__length_<__HCI_DATA_BUF_LEN)_00039328,s_hci_transport_uart_c_00039310,0x15f); \| } \| thunk_EXT_FUN_8` |
| user.c | 41802 | ` \| iVar5 = *(int *)(param_1 + 0x24); \| if (2 < *(int *)(iVar5 + 0x40)) { \| thunk_EXT_FUN_811018b0(s_pau_>m_iVersion_<__2_0004b1d0,DAT_0004b1` |
| user.c | 101880 | `pcVar1 = DAT_000b44bc; \| DAT_000b44bc[3] = '\x01'; \| uVar4 = FUN_0006baec(); \| thunk_EXT_FUN_81103f4a(s_BT_bt_stack_version_is__s_000b4620,u` |
| user.c | 107979 | `uVar11 = 0; \| uVar10 = 0; \| if (param_1 == (char *)0x0) { \| uVar6 = thunk_EXT_FUN_8110349c(s_atc_c__ATC_StoreExtensionNum___t_000bd378); \| t` |
| user.c | 166809 | `} \| iVar1 = **(int **)(param_1 + 0x10); \| if ((((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) && (iVar1 != 4)) { \| thunk_EXT_FUN_81103f4a(s` |
| user.c | 166821 | `} \| iVar1 = FUN_0011c406(param_1,local_20,&local_40); \| if (iVar1 != 0) { \| pcVar2 = s_wbxml_parser_Bad_Extension_refer_0011ccbc; \| LAB_0011` |
| user.c | 166846 | `} \| iVar1 = FUN_0011c462(param_1,&local_40); \| if (iVar1 != 0) { \| pcVar2 = s_wbxml_parser_Bad_Inline_Extensio_0011cc98; \| goto LAB_0011c8ce` |
| user.c | 167638 | `iVar1 = FUN_0011c28c(param_1,param_1 + 0xd); \| if (iVar1 == 0) { \| thunk_EXT_FUN_81103f4a \| (s_wbxml_parser___d__Parsed_version_0011d7a4,par` |
| user.c | 169708 | `uVar9 = uVar9 + 1; \| } \| thunk_EXT_FUN_81103f4a \| (s__SSL_Hello_extension_add__d_s_ch_00120450,iVar3,DAT_0012042c,0x69c,param_1,iVar6) \| ; \|` |
| user.c | 169712 | `; \| uVar1 = (short)iVar3 - 2; \| thunk_EXT_FUN_81103f4a \| (s__SSL_debug_ExtensionsLen_is__d___00120484,(int)(short)uVar1,DAT_0012042c,0x6a0);` |
| user.c | 169806 | `uVar3 = local_1c & 0xff; \| *param_2 = *param_2 + 1; \| *param_3 = uVar3; \| thunk_EXT_FUN_81103f4a(s__ssl__s__d_server_hello_extensio_001204f0` |
| user.c | 169817 | `thunk_EXT_FUN_810f7460(iVar1,uVar3); \| } \| thunk_EXT_FUN_81103f4a \| (s_SSL_unpack_Server_hello_Extensio_00120524,DAT_0012042c + 0x1f,0x710);` |
| user.c | 192970 | `} \| if ((*(int **)(iVar1 + 0x10) != (int *)0x0) && (iVar1 = **(int **)(iVar1 + 0x10), iVar1 != 0)) { \| puVar10 = &DAT_001ab51c; \| FUN_000d5c` |
| user.c | 194226 | `iVar10 = iVar6 + (uint)*(byte *)(param_1 + 0x44) * 0xc; \| bVar2 = *(byte *)(iVar10 + 6); \| bVar3 = *(byte *)(iVar10 + 9); \| iVar10 = FUN_000` |
| user.c | 194322 | `sVar1 = *(sbyte *)(param_1 + 0x1c); \| iVar8 = 0; \| iVar5 = 1 << sVar1; \| iVar3 = FUN_000d6104(s_client_expansion_001ad468 + 0x10, \| s_DAPS_s` |
| user.c | 194352 | `iVar8 = iVar9 + (uint)*(byte *)(param_1 + 0x44) * 0xc; \| iVar4 = (uint)*(byte *)(DAT_001ad464 + (uint)*(byte *)(param_1 + 0x45) * 8 + 4) + \|` |
| user.c | 194903 | `} \| else { \| sVar1 = *(short *)(param_1 + 0x12); \| iVar9 = FUN_000d6104(s_client_expansion_001ad468 + 0x10, \| s_DAPS_source_matrix_wtls_src_` |
| user.c | 229229 | `if (iVar2 == 4) { \| if (*(int *)(iVar3 + 0x40) < 3) { \| thunk_EXT_FUN_811018b0 \| (s_paudec_>pau_>m_iVersion_>_2_001e59d0,s_entropydecstd_c_0` |
| user.c | 249980 | `FUN_007f1914(auStack_278,local_1c,uVar2,uVar1); \| FUN_007f219c(auStack_278,local_1c,&local_18); \| FUN_007f219c(auStack_278,local_1c,&local_1` |
| user.c | 249981 | `FUN_007f219c(auStack_278,local_1c,&local_18); \| FUN_007f219c(auStack_278,local_1c,&local_18); \| uVar1 = thunk_EXT_FUN_810ff150(s_Build_Versi` |
| user.c | 273446 | `uVar11 = 0; \| pbVar10 = pbVar5; \| do { \| if (*pbVar10 == s_Project_Version__00240b44[0]) { \| pcVar8 = s_Project_Version__00240b44; \| iVar4 =` |
| user.c | 273447 | `pbVar10 = pbVar5; \| do { \| if (*pbVar10 == s_Project_Version__00240b44[0]) { \| pcVar8 = s_Project_Version__00240b44; \| iVar4 = thunk_EXT_FUN` |
| user.c | 273448 | `do { \| if (*pbVar10 == s_Project_Version__00240b44[0]) { \| pcVar8 = s_Project_Version__00240b44; \| iVar4 = thunk_EXT_FUN_810ff150(s_Project_` |
| user.c | 277035 | `void FUN_0024680c(undefined4 param_1) \|  \| { \| thunk_EXT_FUN_81103f4a(s_HCI__Sending_read_local_version__00246ba8); \| FUN_0078b680(param_1,&` |
| user.c | 324825 | `if (puVar4 == (undefined4 *)0x0) { \| return; \| } \| thunk_EXT_FUN_81103f4a(s_Session_id___d_0028e7b0,puVar4[2]); \| puVar5 = (undefined2 *)thu` |
| user.c | 325015 | `if (puVar4 == (undefined4 *)0x0) { \| return; \| } \| thunk_EXT_FUN_81103f4a(s_Session_id___d_0028f19c,puVar4[2]); \| puVar5 = (undefined2 *)thu` |
| user.c | 370522 | `} \| LAB_00344e46: \| iVar6 = FUN_000d6884(iVar5); \| iVar7 = FUN_000d6884(s_VERSION_0034509c); \| if (iVar6 == iVar7) { \| uVar4 = FUN_000d6884(` |
| user.c | 370524 | `iVar6 = FUN_000d6884(iVar5); \| iVar7 = FUN_000d6884(s_VERSION_0034509c); \| if (iVar6 == iVar7) { \| uVar4 = FUN_000d6884(s_VERSION_0034509c);` |
| user.c | 370525 | `iVar7 = FUN_000d6884(s_VERSION_0034509c); \| if (iVar6 == iVar7) { \| uVar4 = FUN_000d6884(s_VERSION_0034509c); \| iVar6 = FUN_000d5cb6(s_VERSI` |
| user.c | 406466 | `local_2c = param_2; \| local_28 = param_3; \| if (2 < *(int *)(param_1 + 0x40)) { \| thunk_EXT_FUN_811018b0(s_pau_>m_iVersion_<__2_00384380,s_m` |
| user.c | 411321 | `void FUN_0038a9f4(void) \|  \| { \| (*(code *)&LAB_81103f4a)(s__tcpip__ppp__UART_recv_mode__3___0038ad4c); \| return; \| } \| ` |
| user.c | 411342 | `if (*DAT_0038adb0 == 0) { \| puVar2 = (undefined4 *)FUN_003dfc50(0x18); \| if (puVar2 == (undefined4 *)0x0) { \| thunk_EXT_FUN_81103f4a(s__tcpi` |
| user.c | 411348 | `thunk_EXT_FUN_811049dc(puVar2,0x18); \| iVar3 = FUN_003dfc50(&DAT_00001770); \| if (iVar3 == 0) { \| thunk_EXT_FUN_81103f4a(s__tcpip__ppp__UART` |
| user.c | 411362 | `} \| iVar3 = *piVar1; \| if (*(int *)(iVar3 + 0x14) == 0) { \| thunk_EXT_FUN_81103f4a(s__tcpip__ppp__UARTMUX_PutChar___i_0038aea4); \| uVar5 = 0` |
| user.c | 428979 | `uVar12 = thunk_EXT_FUN_81111bba(param_3 + 4); \| if (((uint)*(byte *)(param_3 + 7) \| \| uVar12 << 0x18 \| (uVar12 >> 8 & 0xff) << 0x10 \| (uVar1` |
| user.c | 428981 | `uVar12 << 0x18 \| (uVar12 >> 8 & 0xff) << 0x10 \| (uVar12 >> 0x10 & 0xff) << 8) != 1) { \| uVar8 = thunk_EXT_FUN_8110349c(s_sprd_version____d_0` |
| user.c | 428984 | `(s_SPRD_FONT_VERSION____sprd_versio_003ad438,s_spml_font_c_003ac8e4,0x4e8,uVar8); \| } \| if ((ushort)(*(ushort *)(param_3 + 0xc) << 8 \| *(ush` |
| user.c | 428985 | `} \| if ((ushort)(*(ushort *)(param_3 + 0xc) << 8 \| *(ushort *)(param_3 + 0xc) >> 8) != 3) { \| uVar8 = thunk_EXT_FUN_8110349c(s_version____d_` |
| user.c | 490740 | `} \| thunk_EXT_FUN_810f7460(param_2,param_3); \| thunk_EXT_FUN_814e1714(param_2,s_BEGIN_VCARD_004165d4); \| thunk_EXT_FUN_814e1714(param_2,s_VE` |
| user.c | 490818 | `} \| thunk_EXT_FUN_810f7460(param_2,param_3); \| thunk_EXT_FUN_814e1714(param_2,s_BEGIN_VCARD_004165d4); \| thunk_EXT_FUN_814e1714(param_2,s_VE` |
| user.c | 491108 | `undefined4 uVar2; \|  \| uVar2 = 0; \| iVar1 = FUN_0086717e(param_1,s_VERSION_2_1_00416628); \| if (iVar1 == 0) { \| iVar1 = FUN_0086717e(param_1` |
| user.c | 491110 | `uVar2 = 0; \| iVar1 = FUN_0086717e(param_1,s_VERSION_2_1_00416628); \| if (iVar1 == 0) { \| iVar1 = FUN_0086717e(param_1,s_VERSION_3_0_004165e4` |
| user.c | 497382 | `uVar3 = 0xe; \| } \| if (*(char *)(param_2 + 0x170) != '\x01') { \| thunk_EXT_FUN_81104074(0x10,DAT_004222d0 + -8,s_o_dd_version_004222d4 + 0xc` |
| user.c | 497454 | `uVar3 = 0xe; \| } \| if (*(char *)(param_2 + 0x170) != '\x01') { \| thunk_EXT_FUN_81104074(0x10,DAT_0042278c + 3,s_o_dd_version_004222d4 + 0xc)` |
| user.c | 497818 | `uVar4 = 0; \| } \| if (*(char *)(param_3 + 0x170) != '\x01') { \| thunk_EXT_FUN_81104074(0x10,DAT_00422bb8 + 1,s_o_dd_version_004222d4 + 0xc); ` |
| user.c | 546428 | `iVar2 = thunk_EXT_FUN_810ff150(iVar1); \| iVar5 = 0x400 - iVar2; \| } \| iVar3 = FUN_001ab2ac(param_2,s_Session_0075b320,&local_2c); \| if (iVar` |
| user.c | 546433 | `thunk_EXT_FUN_811049dc(auStack_6c,0x40); \| local_24 = 0x40; \| FUN_001ab5cc(local_2c,local_28,auStack_6c,&local_24); \| FUN_000d5cfa(iVar1 + i` |
| user.c | 547343 | `else { \| iVar4 = FUN_000d5cb6(s_DOMAIN_0075c70c,uVar6,6); \| if (iVar4 != 0) { \| iVar4 = FUN_000d5cb6(s_VERSION_0075c714,uVar6,7); \| if (iVar` |
| user.c | 549924 | `} \| else if (param_1 < DAT_00762a50 + 5) { \| if (iVar2 == -0xb) { \| pcVar1 = s_The_current_session_is_closing_00762dcc; \| } \| else if (iVar2` |
| user.c | 549984 | `pcVar1 = s_Flow_control_error_00762ce8; \| break; \| case -0x20b: \| pcVar1 = s_Header_compression_decompression_00762cc0; \| break; \| case -0x2` |
| user.c | 550021 | `pcVar1 = s_Stream_ID_is_invalid_00762b98; \| break; \| case -0x200: \| pcVar1 = s_The_transmission_is_not_allowed_f_00762b68; \| break; \| case -` |
| user.c | 550040 | `else { \| if (-0x1f8 < param_1) { \| if (param_1 == -0x1f7) { \| return s_Unsupported_SPDY_version_00762a98; \| } \| if (param_1 == -0x1f6) { \| r` |
| user.c | 556828 | `iVar4 = *piVar11 + DAT_0076ea44; \| if (iVar4 == 0 \|\| iVar4 == 0x1000000) { \| piVar11 = (int *)piVar11[1]; \| pcVar6 = s_3GP_Media_file_versio` |
| user.c | 556832 | `} \| else if (iVar4 + DAT_0076ea68 == 0) { \| piVar11 = (int *)piVar11[1]; \| pcVar6 = s_ISO_Media_file__isom__version_0x_0076ea9c; \| } \| else ` |
| user.c | 557128 | `iVar4 = *piVar12 + DAT_0076f16c; \| if (iVar4 == 0 \|\| iVar4 == 0x1000000) { \| piVar12 = (int *)piVar12[1]; \| pcVar8 = s_3GP_Media_file_versio` |
| user.c | 557132 | `} \| else if (iVar4 + DAT_0076f170 == 0) { \| piVar12 = (int *)piVar12[1]; \| pcVar8 = s_ISO_Media_file__isom__version_0x_0076ea9c; \| } \| else ` |
| user.c | 591101 | `thunk_EXT_FUN_80dd3da0(param_1,s_BEGIN_BMSG_0079ff20); \| *(undefined1 *)(param_1 + 10) = 0xd; \| *(undefined1 *)(param_1 + 0xb) = 10; \| thunk` |
| user.c | 591116 | `thunk_EXT_FUN_80dd3da0(param_1 + 0x51,s_BEGIN_VCARD_0079ff74); \| *(undefined1 *)(param_1 + 0x5c) = 0xd; \| *(undefined1 *)(param_1 + 0x5d) = ` |
| user.c | 591137 | `thunk_EXT_FUN_80dd3da0(param_1 + 0xb7,s_BEGIN_VCARD_0079ff74); \| *(undefined1 *)(param_1 + 0xc2) = 0xd; \| *(undefined1 *)(param_1 + 0xc3) = ` |
| user.c | 591161 | `thunk_EXT_FUN_80dd3da0(puVar4 + 0x36,s_BEGIN_VCARD_0079ff74); \| puVar4[0x41] = 0xd; \| puVar4[0x42] = 10; \| thunk_EXT_FUN_80dd3da0(puVar4 + 0` |
| user.c | 591182 | `thunk_EXT_FUN_80dd3da0(puVar4 + 0x9c,s_BEGIN_VCARD_0079ff74); \| puVar4[0xa7] = 0xd; \| puVar4[0xa8] = 10; \| thunk_EXT_FUN_80dd3da0(puVar4 + 0` |
| user.c | 591386 | `bVar2 = thunk_EXT_FUN_810ff150(); \| thunk_EXT_FUN_811037c8(*param_1 + (uint)*param_2,s_BEGIN_BMSG_007a048c,bVar2); \| *param_2 = *param_2 + (` |
| user.c | 591387 | `thunk_EXT_FUN_811037c8(*param_1 + (uint)*param_2,s_BEGIN_BMSG_007a048c,bVar2); \| *param_2 = *param_2 + (ushort)bVar2; \| pcVar6 = s_VERSION_1` |
| user.c | 591389 | `pcVar6 = s_VERSION_1_0_STATUS_READ_TYPE__007a049c; \| uVar3 = thunk_EXT_FUN_810ff150(s_VERSION_1_0_STATUS_READ_TYPE__007a049c); \| thunk_EXT_F` |
| user.c | 591428 | `bVar2 = thunk_EXT_FUN_810ff150(pcVar6); \| thunk_EXT_FUN_811037c8(*param_1 + (uint)*param_2,pcVar6,bVar2); \| *param_2 = *param_2 + (ushort)bV` |
| user.c | 591430 | `*param_2 = *param_2 + (ushort)bVar2; \| bVar2 = thunk_EXT_FUN_810ff150(s_BEGIN_BENV_BEGIN_VCARD_VERSION_2_007a04f8); \| thunk_EXT_FUN_811037c8` |
| user.c | 610488 | `int iVar5; \|  \| uVar3 = FUN_007c04b4(); \| thunk_EXT_FUN_81103f4a(s__tcpip__tcpip__version____s____s_007cde78,uVar3,s_Little_Endian_007cde68)` |
| user.c | 658046 | `} \| if (*(int *)(param_1 + 0x40) != 0) { \| thunk_EXT_FUN_81103f4a \| (s_HTTP___s__d__nghttp2_session_del_0080a3b0,DAT_0080a3ac, \| s_http_Http` |
| user.c | 658290 | `local_2c = 0xffffff; \| iVar2 = FUN_00754c54(local_28); \| if (iVar2 != 0) { \| thunk_EXT_FUN_81103f4a(s_nghttp2_session_callbacks_new_re_00810` |
| user.c | 658300 | `s_http_HttpTracePatchParam_body_ty_00002038 + 7,param_2,param_1); \| iVar2 = FUN_003baada(param_1 + 0x40,local_28[0],param_1); \| if (iVar2 !=` |
| user.c | 658345 | `} \| else { \| thunk_EXT_FUN_81103f4a \| (s_HTTP___s__d__nghttp2_session_has_00810588,DAT_00810584, \| s_http_HttpTracePatchParam_patch_b_000020` |
| user.c | 658592 | `FUN_00254ed4(param_1); \| uVar3 = FUN_00254ee0(); \| *(undefined4 *)(iVar1 + 0x14) = uVar3; \| thunk_EXT_FUN_81103f4a(s_http_session_1____d_008` |
| user.c | 701129 | `thunk_EXT_FUN_811049dc(local_64,0x40); \| if ((param_1 == 0) \|\| (param_2 == (undefined4 *)0x0)) { \| thunk_EXT_FUN_811018b0 \| (s_in_str_ptr__P` |
| user.c | 701385 | `local_80 = 0; \| if (((param_1 == (uint *)0x0) \|\| (local_2c == 0)) \|\| (local_28 == (int *)0x0)) { \| thunk_EXT_FUN_811018b0 \| (s_0_in_num__PNU` |
| user.c | 701389 | `; \| } \| if (*local_28 == 0) { \| thunk_EXT_FUN_811018b0(s_out_str_>wstr_ptr__PNULL_0085c4ac,s_mmiunitconversion_c_0085c030,0x84d) \| ; \| } \| u` |
| user.c | 703459 | `} \| else { \| if (iVar2 != 0x17) goto switchD_008606a4_caseD_a1fe; \| thunk_EXT_FUN_810ff124(DAT_00860780,s__SPUSATENDSESSIONIND_00860768); \| ` |

## 5. בקר פסיקות ו-IRQ
*וודאות:* בינונית*
| קובץ | שורה | קטע קוד |
|---|---|---|
| boot0.c | 206 | ` \|  \|  \| /* Function: IRQ */ \|  \| /* WARNING: This function may have set the stack pointer */ \| ` |
| boot0.c | 210 | ` \| /* WARNING: This function may have set the stack pointer */ \|  \| void IRQ(void) \|  \| { \| int iVar1;` |
| boot0.c | 681 | `iVar5 = 0; \| uVar4 = 0; \| if (param_1 >> 8 == 0) { \| FUN_00004ae8(DAT_00000608,0x200); \| puVar1 = DAT_00000608; \| param_1 = param_1 >> 4; \| ` |
| boot0.c | 926 | `*(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) \| 2; \| LAB_00000536: \| puVar1 = DAT_00000640; \| *DAT_00000640 = *DAT_00000640 \| 0x200; \| p` |
| boot0.c | 951 | `uVar1 = 0x100; \| } \| if ((int)(param_1 << 0x1e) < 0) { \| uVar1 = uVar1 \| 0x200; \| } \| if ((int)(param_1 << 0x1d) < 0) { \| uVar1 = uVar1 \| 0x` |
| boot0.c | 1141 | `*(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) \| 2; \| LAB_000007f6: \| puVar2 = DAT_00000a64; \| *DAT_00000a64 = *DAT_00000a64 \| 0x200; \| p` |
| boot0.c | 1420 | ` \| { \| if (param_1 == 0xc) { \| return 0x2000; \| } \| if (param_1 < 0xd) { \| if (param_1 != 1) {` |
| boot0.c | 1513 | `local_48 = 0xc; \| } \| if (*(char *)(param_1 + 0x1f) != '\0') { \| local_48 = local_48 \| 0x2000; \| } \| if ((param_6 == 0) \|\| (param_7 == 0 && ` |
| boot0.c | 1740 | `local_4c = 0xc; \| } \| if (*(char *)(param_1 + 0x1f) != '\0') { \| local_4c = local_4c \| 0x2000; \| } \| if (((param_6 == 0) \|\| (param_7 == 0 &&` |
| boot0.c | 1988 | `if (param_7 == 0) { \| param_7 = DAT_00001580; \| } \| if (*(int *)(param_1 + 4) != 0x200) { \| uVar2 = FUN_00000bce(param_1,param_2,param_3,par` |
| boot0.c | 2101 | `if (param_1 == 0) { \| FUN_00001e28(s_input_of_get_sechdr_Addr_err_00001814); \| } \| return *(int *)(param_1 + 0x30) + param_1 + 0x200; \| } \| ` |
| boot0.c | 2451 | `FUN_00004ae8(auStack_58,0x20); \| FUN_00001654(param_1,auStack_58); \| iVar1 = DAT_00001810; \| iVar2 = *(int *)(param_2 + 0x30) + param_2 + 0x` |
| boot0.c | 2458 | `FUN_00001e28(s_cert_empty_000018b4); \| } \| else { \| FUN_000015d8(param_2 + 0x200,*(undefined4 *)(param_2 + 0x30),auStack_38); \| uVar3 = FUN_` |
| boot0.c | 3249 | `*(uint *)(DAT_00002530 + 0x18) = *(uint *)(DAT_00002530 + 0x18) \| 0x40000000; \| if (iVar2 == 1) { \| *(uint *)(iVar1 + 0x18) = *(uint *)(iVar` |
| boot0.c | 3303 | `puVar3 = DAT_000024fc; \| *DAT_000024fc = *DAT_000024fc \| 0x100000; \| puVar3[0x2c] = puVar3[0x2c] \| 0x1000; \| puVar3[2] = puVar3[2] \| 0x20000` |
| boot0.c | 4364 | ` \| { \| _DAT_30000308 = *(undefined4 *)(DAT_000039f0 + -0x60); \| _DAT_30000300 = *(uint *)(DAT_000039f0 + -0x74) & 0xfefffeff \| 0x2004000; \| ` |
| boot0.c | 4368 | `_DAT_30000408 = *(undefined4 *)(DAT_000039f0 + -0x5c); \| _DAT_3000040c = *(undefined4 *)(DAT_000039f0 + -0x4c); \| _DAT_30000410 = *(undefine` |
| boot0.c | 4372 | `_DAT_30000508 = *(undefined4 *)(DAT_000039f0 + -0x58); \| _DAT_3000050c = *(undefined4 *)(DAT_000039f0 + -0x48); \| _DAT_30000510 = *(undefine` |
| boot0.c | 5986 | `uVar3 = uVar1 + uVar4; \| uVar1 = uVar2 + (uVar2 >> 0x10) + (uint)CARRY4(uVar1,uVar4); \| uVar2 = uVar1 + CARRY4(uVar3,uVar1); \| uVar3 = uVar3` |
| boot0.c | 6830 | `uint uVar1; \|  \| uVar1 = coproc_movefrom_Control(); \| coproc_moveto_Control(uVar1 \| 0x2000); \| return param_1; \| } \| ` |
| boot1.c | 191 | ` \|  \|  \| /* Function: IRQ */ \|  \| void IRQ(void) \| ` |
| boot1.c | 193 | ` \| /* Function: IRQ */ \|  \| void IRQ(void) \|  \| { \| int iVar1;` |
| boot1.c | 670 | `iVar5 = 0; \| uVar4 = 0; \| if (param_1 >> 8 == 0) { \| FUN_0000e52c(DAT_00000638,0x200); \| puVar1 = DAT_00000638; \| param_1 = param_1 >> 4; \| ` |
| boot1.c | 915 | `*(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) \| 2; \| LAB_00000566: \| puVar1 = DAT_00000670; \| *DAT_00000670 = *DAT_00000670 \| 0x200; \| p` |
| boot1.c | 940 | `uVar1 = 0x100; \| } \| if ((int)(param_1 << 0x1e) < 0) { \| uVar1 = uVar1 \| 0x200; \| } \| if ((int)(param_1 << 0x1d) < 0) { \| uVar1 = uVar1 \| 0x` |
| boot1.c | 1275 | ` \| { \| if (param_1 == 0xc) { \| return 0x2000; \| } \| if (param_1 < 0xd) { \| if (param_1 != 1) {` |
| boot1.c | 1368 | `local_48 = 0xc; \| } \| if (*(char *)(param_1 + 0x1f) != '\0') { \| local_48 = local_48 \| 0x2000; \| } \| if ((param_6 == 0) \|\| (param_7 == 0 && ` |
| boot1.c | 1595 | `local_4c = 0xc; \| } \| if (*(char *)(param_1 + 0x1f) != '\0') { \| local_4c = local_4c \| 0x2000; \| } \| if (((param_6 == 0) \|\| (param_7 == 0 &&` |
| boot1.c | 1843 | `if (param_7 == 0) { \| param_7 = DAT_00001ca0; \| } \| if (*(int *)(param_1 + 4) != 0x200) { \| uVar2 = FUN_00001046(param_1,param_2,param_3,par` |
| boot1.c | 1918 | `local_4c = 0x810c; \| } \| if (*(char *)(param_1 + 0x1f) != '\0') { \| local_4c = local_4c \| 0x2000; \| } \| if ((param_6 == 0) \|\| (param_7 == 0)` |
| boot1.c | 1942 | `local_4c = local_4c \| 0x40; \| } \| if (*(char *)(param_1 + 0x22) != '\0') { \| uVar12 = 0x20000; \| } \| if (*(char *)(param_1 + 0x23) != '\0') ` |
| boot1.c | 2032 | `else { \| param_4 = param_4 << *(sbyte *)(param_1 + 0x13); \| } \| *(uint *)(DAT_00001cb0 + 0x200) = extraout_r12; \| *(uint *)(iVar9 + 0x204) =` |
| boot1.c | 2048 | `uVar8 = param_4 << *(sbyte *)(param_1 + 0x13); \| uVar6 = *(ushort *)(param_1 + 0x26) * param_4 + *(int *)(param_1 + 8); \| } \| *(uint *)(DAT_` |
| boot1.c | 2196 | `if (*(char *)(DAT_000020d8 + -4) != '\0') { \| FUN_00000260(local_2c); \| if (*(int *)(DAT_000020d8 + 4) == 2) { \| uVar10 = 0x200; \| LAB_00001` |
| boot1.c | 2282 | `FUN_0000e4d8(DAT_000020e4,param_5 * *(ushort *)(param_1 + 0x26),0xff); \| param_7 = DAT_000020e4; \| } \| if (*(int *)(param_1 + 8) != 0x200) {` |
| boot1.c | 3961 | `int FUN_00003d4a(int param_1) \|  \| { \| return param_1 + 0x200 + *(int *)(param_1 + 0x30); \| } \|  \| ` |
| boot1.c | 4095 | `FUN_0000e52c(auStack_58,0x20); \| FUN_00003d70(param_1,auStack_58); \| piVar2 = (int *)(DAT_00003f88 + -8); \| iVar1 = *(int *)(param_2 + 0x30)` |
| boot1.c | 4102 | `FUN_00002aa8(&DAT_00004008); \| } \| else { \| FUN_00003d0c(param_2 + 0x200,*(undefined4 *)(param_2 + 0x30),auStack_38); \| uVar3 = FUN_00003d9e` |
| boot1.c | 4125 | `FUN_0000e52c(auStack_60,0x20); \| FUN_00003d70(param_1,auStack_60); \| iVar1 = DAT_00003f88; \| iVar2 = *(int *)(param_2 + 0x30) + param_2 + 0x` |
| boot1.c | 4132 | `FUN_00002aa8(&DAT_00004008); \| } \| else { \| FUN_00003d0c(param_2 + 0x200,param_3,auStack_40); \| uVar3 = FUN_00003d9e(auStack_60,auStack_40,*` |
| boot1.c | 4239 | `*(undefined2 *)(iVar1 + 100) = 0x108; \| bVar2 = *(int *)(DAT_000044ec + 8) == 0; \| if (bVar2) { \| *(undefined2 *)(iVar1 + 0x150) = 0x200; \| ` |
| boot1.c | 4251 | `*(undefined1 *)(iVar1 + 99) = 0x17; \| *(undefined2 *)(iVar1 + 0x66) = 8; \| if (bVar2) { \| *(undefined2 *)(iVar1 + 0x164) = 0x200; \| } \| else` |
| boot1.c | 9720 | `uVar3 = uVar1 + uVar4; \| uVar1 = uVar2 + (uVar2 >> 0x10) + (uint)CARRY4(uVar1,uVar4); \| uVar2 = uVar1 + CARRY4(uVar3,uVar1); \| uVar3 = uVar3` |
| boot1.c | 10387 | `uint uVar1; \|  \| uVar1 = coproc_movefrom_Control(); \| coproc_moveto_Control(uVar1 \| 0x2000); \| return param_1; \| } \| ` |
| cm4_a.c | 729 | ` \|  \|  \| /* Function: IRQ */ \|  \| /* WARNING: Control flow encountered bad instruction data */ \| ` |
| cm4_a.c | 733 | ` \| /* WARNING: Control flow encountered bad instruction data */ \|  \| void IRQ(uint *param_1,uint *param_2,uint param_3,uint param_4) \|  \| { ` |
| cm4_a.c | 943 | `local_10 = ram0x00000294; \| local_18 = (char  [4])s_cm4_assert_0000028c._0_4_; \| acStack_14 = (char  [4])s_cm4_assert_0000028c._4_4_; \| disa` |
| cm4_a.c | 2361 | `(*(code *)piVar4[10])(iVar5,1); \| } \| LAB_00003cc4: \| if ((uVar6 & 0x2001) != 0) { \| *(uint *)(piVar4[1] + 0x14) = *(uint *)(piVar4[1] + 0x1` |
| cm4_a.c | 2362 | `} \| LAB_00003cc4: \| if ((uVar6 & 0x2001) != 0) { \| *(uint *)(piVar4[1] + 0x14) = *(uint *)(piVar4[1] + 0x14) \| 0x2000; \| if ((code *)piVar4[` |
| cm4_a.c | 3041 | `uVar2 = 0; \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| uVar2 = isIRQinterruptsEnabled(); \| } \| return uVar2; \| }` |
| cm4_a.c | 3053 | `void FUN_00005646(void) \|  \| { \| disableIRQinterrupts(); \| return; \| } \| ` |
| cm4_a.c | 3068 | ` \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| enableIRQinterrupts((param_1 & 1) == 1); \| } \| return; \| }` |
| cm4_a.c | 3092 | `void FUN_00005674(void) \|  \| { \| disableIRQinterrupts(); \| _DAT_e000ed08 = DAT_000056d8; \| *DAT_000056dc = *DAT_000056dc \| 1; \| *DAT_000056e` |
| cm4_a.c | 5636 | `uVar11 = 0; \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| uVar11 = isIRQinterruptsEnabled(); \| } \| if (uVar11 != 1) { \| softwa` |
| cm4_a.c | 5642 | `software_interrupt(0); \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| enableIRQinterrupts((uVar11 & 1) == 1); \| } \| } \| return ` |
| cm4_a.c | 5667 | `uVar2 = 0; \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| uVar2 = isIRQinterruptsEnabled(); \| } \| if (uVar2 != 1) { \| software_` |
| cm4_a.c | 5673 | `software_interrupt(0); \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| enableIRQinterrupts((uVar2 & 1) == 1); \| } \| } \| return u` |
| cm4_a.c | 5777 | `uVar11 = 0; \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| uVar11 = isIRQinterruptsEnabled(); \| } \| if (uVar11 != 1) { \| softwa` |
| cm4_a.c | 5783 | `software_interrupt(0); \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| enableIRQinterrupts((uVar11 & 1) == 1); \| } \| } \| return ` |
| cm4_a.c | 7668 | ` \| iVar1 = DAT_0000b590; \| if (0x13 < *(uint *)(DAT_0000b590 + 4)) { \| func_0x0002c344(s_s_irq_status_postion_<_SCI_MAX_I_0000b5e0,s_threadx` |
| cm4_b.c | 1076 | `iVar1 = DAT_0000311c; \| uVar4 = uVar4 + 1; \| } while (uVar4 < 0xc); \| *(undefined4 *)(DAT_0000311c + 0x6c) = 0x2000000; \| *(undefined4 *)(iV` |
| cm4_b.c | 1126 | `} \| puVar3 = DAT_0000314c; \| uVar4 = *puVar2; \| if ((uVar4 & 0x2000) == 0) { \| *DAT_00003148 = 0; \| *puVar3 = 1; \| }` |
| cm4_b.c | 1476 | `puVar4[1] = uVar2 \| 0x81a00000; \| puVar4[2] = 0x80008000; \| puVar4[3] = uVar3 \| 0x82ac0000; \| *DAT_00003694 = (int)(puVar4 + 3) * 0x20000000` |
| cm4_b.c | 2420 | `FUN_0000b348(1); \| FUN_0001892e(); \| puVar1 = DAT_00004488; \| *DAT_00004488 = *DAT_00004488 \| 0x200; \| *puVar1 = *puVar1 & 0xfffffdff; \| FUN` |
| cm4_b.c | 2451 | `FUN_0001316a(3,1); \| *DAT_000044a4 = *DAT_000044a4 & 0xfffffffe; \| puVar1 = DAT_00004488; \| *DAT_00004488 = *DAT_00004488 \| 0x200; \| *puVar1` |
| cm4_b.c | 2894 | `*(uint *)(DAT_00004d74 + 0x38) = *(uint *)(DAT_00004d74 + 0x38) \| 0x8000; \| puVar1 = DAT_00004db0; \| *DAT_00004db0 = *DAT_00004db0 & 0xfffff` |
| cm4_b.c | 2922 | `case 6: \| case 8: \| *(uint *)(DAT_00004d50 + 0x40) = *(uint *)(DAT_00004d50 + 0x40) & 0xfffffff0; \| uVar4 = *DAT_00004db0 \| 0x200; \| break; ` |
| cm4_b.c | 3451 | `thunk_FUN_00005684(FUN_00005684,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0xc)); \| thunk_FUN_00005684(s_FM_REG_RF_RSSI_STS__0x_x_` |
| cm4_b.c | 4102 | `*(undefined4 *)(iVar1 + 0x70) = 0x3000000; \| *(int *)(iVar1 + 0x74) = iVar1 << 0xf; \| iVar1 = DAT_00006148; \| *(uint *)(DAT_00006148 + 0x6c)` |
| cm4_b.c | 4105 | `*(uint *)(DAT_00006148 + 0x6c) = *(uint *)(DAT_00006148 + 0x6c) \| 0x2000000; \| *(uint *)(iVar1 + 0x70) = *(uint *)(iVar1 + 0x70) \| 0x80000; ` |
| cm4_b.c | 4712 | `} \| FUN_0000605c(); \| puVar2 = DAT_00006a4c; \| *DAT_00006a4c = *DAT_00006a4c \| 0x2000; \| iVar1 = 0x1386; \| do { \| iVar1 = iVar1 + -1;` |
| cm4_b.c | 5079 | `FUN_00005198(0x412c); \| iVar1 = DAT_00008da8; \| *(uint *)(DAT_00008da8 + 0x134) = *(uint *)(DAT_00008da8 + 0x134) & 0xfff0ffff; \| *(uint *)(` |
| cm4_b.c | 5091 | ` \| { \| *(uint *)(param_1 + 0x134) = param_2 & 0xfff0ffff; \| *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) \| 0x20000; \| return; \| }` |
| cm4_b.c | 6012 | `FUN_00009508(&local_24,0xd,0x10); \| local_48 = local_28 << 2; \| FUN_00009568(local_44[0],local_48,0xd,&local_38); \| local_48 = (0x2000 - loc` |
| cm4_b.c | 6027 | `FUN_00009568(unaff_r9,local_34[0],0xd,&local_20); \| local_48 = unaff_r4 * unaff_r9; \| FUN_00009508(&local_48,0xd,0x10); \| if (local_48 < 0x2` |
| cm4_b.c | 6033 | `local_2c = local_2c << 1; \| } \| else { \| FUN_00009568(local_48,0x2000,0xd,&local_2c); \| } \| puVar1 = DAT_00009a38; \| *DAT_00009a38 = local_2` |
| cm4_b.c | 6515 | `void FUN_0000a140(void) \|  \| { \| *(undefined4 *)(DAT_0000a2b8 + 0x70) = 0x200000; \| thunk_FUN_00063bf6(0x32); \| return; \| }` |
| cm4_b.c | 6579 | `iVar1 = iRam0000a6ec; \| *(undefined4 *)(iRam0000a6ec + 0x5c) = 0x1a; \| *(undefined4 *)(iVar1 + 0x60) = uRam0000a6f0; \| *(undefined4 *)(iVar1` |
| cm4_b.c | 6608 | `*(undefined4 *)(iRam0000a6ec + 0x60) = 0x10; \| *(undefined4 *)(iVar2 + 0x60) = 0x20; \| *(undefined4 *)(iVar2 + 0x5c) = 8; \| *(undefined4 *)(` |
| cm4_b.c | 6711 | `} \| LAB_0000a63e: \| *puVar2 = 2; \| FUN_00017678(thunk_FUN_0000aeda,(byte)puVar2[1] \| 0x200); \| FUN_00063bec(0); \| *piVar1 = 3; \| FUN_0001769` |
| cm4_b.c | 6925 | `uVar2 = 0; \| do { \| iVar4 = iVar1 + uVar2 * 4; \| *(undefined4 *)(iVar4 + 0x200) = *(undefined4 *)(uVar2 * 4 + 0x44340000); \| *(undefined4 *)` |
| cm4_b.c | 6937 | `*(undefined4 *)(iVar5 + 0x600) = *puVar3; \| *(undefined4 *)(iVar5 + 0x604) = puVar3[1]; \| uVar2 = uVar2 + 2; \| } while (uVar2 < 0x200); \| uV` |
| cm4_b.c | 6953 | `*(undefined4 *)(iVar5 + 0xf00) = *puVar3; \| *(undefined4 *)(iVar5 + 0xf04) = puVar3[1]; \| uVar2 = uVar2 + 2; \| } while (uVar2 < 0x200); \| uV` |
| cm4_b.c | 9892 | `*piVar6 = iVar7 + (uint)*(ushort *)(piVar2 + 6); \| FUN_0000d3b4(); \| piVar1 = DAT_0000da98; \| FUN_0000d296(*DAT_0000da98 + 0x24,DAT_0000dab8` |
| cm4_b.c | 9893 | `FUN_0000d3b4(); \| piVar1 = DAT_0000da98; \| FUN_0000d296(*DAT_0000da98 + 0x24,DAT_0000dab8,8,*piVar3,0x200); \| FUN_0000d296(*piVar1,DAT_0000d` |
| cm4_b.c | 11145 | `iVar11 = 8; \| goto LAB_0000ea5e; \| } \| if ((param_3 & 0x200) != 0) { \| iVar11 = 9; \| goto LAB_0000ea5e; \| }` |
| cm4_b.c | 13450 | `uVar8 = *(uint *)(iVar4 + uVar7 * 4); \| uVar10 = uVar8 & 0x3fff; \| uVar9 = (uVar8 & 0xfffffff) >> 0xe; \| if ((uVar8 & 0x2000) != 0) { \| uVar` |
| cm4_b.c | 13453 | `if ((uVar8 & 0x2000) != 0) { \| uVar10 = 0x4000 - uVar10; \| } \| if ((uVar9 & 0x2000) != 0) { \| uVar9 = 0x4000 - uVar9; \| } \| if (uVar11 <= uV` |
| cm4_b.c | 13471 | `uVar6 = uVar6 - 0x40; \| uVar8 = uVar9 & 0x3fff; \| uVar10 = (uVar9 & 0xfffffff) >> 0xe; \| if ((uVar9 & 0x2000) != 0) { \| uVar8 = 0x4000 - uVa` |
| cm4_b.c | 13474 | `if ((uVar9 & 0x2000) != 0) { \| uVar8 = 0x4000 - uVar8; \| } \| if ((uVar10 & 0x2000) != 0) { \| uVar10 = 0x4000 - uVar10; \| } \| if (uVar11 <= u` |
| cm4_b.c | 13763 | `uint uVar5; \|  \| uVar5 = 0; \| iVar3 = FUN_0003039a(0x200); \| pbVar2 = DAT_00012b48; \| piVar1 = DAT_00012b44; \| if (iVar3 == 0) {` |
| cm4_b.c | 14391 | `undefined4 unaff_r6; \| code *pcVar6; \|  \| iVar2 = FUN_0003039a(0x200); \| if (iVar2 != 0) { \| return; \| }` |
| cm4_b.c | 15326 | `} \| uVar10 = uVar9 * 0x271 & 0xffff; \| uStack_28 = CONCAT22(uStack_28._2_2_,(short)(uVar9 * 0x271)); \| if ((*puVar5 & 0x2000) == 0) { \| if (` |
| cm4_b.c | 15507 | `return 1; \| } \| *(undefined1 *)(param_1 + 0x131) = 0; \| if ((*puVar3 & 0x200) == 0) { \| uVar5 = 1; \| } \| else {` |
| cm4_b.c | 15731 | `} \| LAB_00016592: \| uVar9 = FUN_00024de8(); \| FUN_00017690(0x2000,&DAT_0000d138,(uVar9 \| uVar8 * 0x100) & 0xffff); \| return; \| } \| ` |
| cm4_b.c | 16905 | `*(undefined4 *)(iVar1 + 0x164) = DAT_00017f8c; \| iVar2 = DAT_00017f94; \| if (*DAT_00017f90 == '\x01') { \| uVar7 = *(uint *)(DAT_00017f94 + 4` |
| cm4_b.c | 17125 | `uVar6 = FUN_0003a804(param_3); \| *(undefined4 *)(iVar2 + 0x2cc) = uVar6; \| *(undefined4 *)(iVar2 + 0x2d4) = 0; \| *(undefined4 *)(iVar2 + 0x2` |
| cm4_b.c | 17266 | `uVar6 = FUN_0003a804(param_3); \| *(undefined4 *)(iVar2 + 0x2cc) = uVar6; \| *(undefined4 *)(iVar2 + 0x2d4) = 0; \| *(undefined4 *)(iVar2 + 0x2` |
| cm4_b.c | 17322 | `uVar2 = uVar2 \| 0x280; \| } \| else { \| uVar2 = uVar2 \| 0x200; \| } \| *(uint *)(iVar1 + 0x2e0) = uVar2; \| *(uint *)(iVar1 + 0x300) =` |
| cm4_b.c | 17355 | `uVar2 = uVar2 \| 0x280; \| } \| else { \| uVar2 = uVar2 \| 0x200; \| } \| *(uint *)(iVar1 + 0x2e0) = uVar2; \| *(uint *)(iVar1 + 0x300) = *(uint *)(` |
| cm4_b.c | 17494 | `void FUN_000186e6(void) \|  \| { \| *DAT_00018a4c = *DAT_00018a4c \| 0x200; \| return; \| } \| ` |
| cm4_b.c | 17619 | `local_c = 0; \| FUN_00018732(param_1,param_2,&local_10); \| iVar1 = DAT_00018a4c; \| *(undefined4 *)(DAT_00018a4c + 0x200) = local_10; \| *(unde` |
| cm4_b.c | 18276 | `uVar1 = (uVar1 * 2 & 0xffffff) >> 0xb; \| } \| else { \| uVar1 = ((uVar1 & 0x7fffffff) >> 10) - 0x200000; \| } \| local_18 = local_18 + uVar1; \| ` |
| cm4_b.c | 18857 | `do { \| iVar2 = *(int *)(DAT_00019b10 + uVar13 * 4); \| iVar10 = 8; \| iVar19 = local_d8[0] * 0x200; \| piVar11 = (int *)(DAT_00019b0c + uVar13 ` |
| cm4_b.c | 20100 | `uVar11 = uVar6 & 0x1fff; \| uVar6 = (uVar6 & 0x1fffffff) >> 0x10; \| if (0xfff < uVar8) { \| uVar8 = uVar8 - 0x2000; \| } \| iVar9 = (uint)bVar1 ` |
| cm4_b.c | 20105 | `iVar9 = (uint)bVar1 * 0x80 + uVar7 * 0x20 + uVar5 * 4; \| *(char *)(iVar2 + iVar9) = (char)uVar8; \| if (0xfff < uVar10) { \| uVar10 = uVar10 -` |
| cm4_b.c | 20110 | `iVar9 = iVar9 + iVar2; \| *(char *)(iVar9 + 1) = (char)uVar10; \| if (0xfff < uVar11) { \| uVar11 = uVar11 - 0x2000; \| } \| *(char *)(iVar9 + 2)` |
| cm4_b.c | 20114 | `} \| *(char *)(iVar9 + 2) = (char)uVar11; \| if (0xfff < uVar6) { \| uVar6 = uVar6 - 0x2000; \| } \| *(char *)(iVar9 + 3) = (char)uVar6; \| uVar5 ` |
| cm4_b.c | 20964 | `iVar12 = 0; \| } \| else { \| iVar12 = -((int)((uVar23 + 3) * 0x20000000) >> 0x1f); \| if (iVar12 != 0) { \| *(undefined4 *) \| ((uint)*(ushort *)` |
| cm4_b.c | 21609 | `if (*DAT_0001c01c << 8 < 0) { \| uVar2 = 0x800000; \| } \| if ((param_1 == 0x10 \|\| param_1 == 0x20) \|\| (param_1 == 0x200 \|\| param_1 == 2)) { \| ` |
| cm4_b.c | 21735 | `uVar7 = *(uint *)(DAT_0001c4d8 + 0x20); \| FUN_0001791c(); \| uVar11 = (param_3 & 3) << 3; \| if ((param_4 == 0x200) \|\| (*(char *)(param_1 + 0x` |
| cm4_b.c | 21823 | `else { \| if (0x80 < param_1) { \| if (param_1 != 0x100) { \| if (param_1 != 0x200) goto LAB_0001c266; \| goto LAB_0001c286; \| } \| goto LAB_0001` |
| cm4_b.c | 22028 | `piVar3 = DAT_0001c91c; \| FUN_0000af76(*DAT_0001c91c + (uint)*(ushort *)((int)DAT_0001c91c + 0xe),uVar5,uVar4); \| *(uint *)(iVar6 + 0x10) = \|` |
| cm4_b.c | 22743 | `if (bVar8) { \| uVar3 = *(uint *)(DAT_0001d684 + 0x228); \| } \| if (bVar8 && (uVar3 & 0x200) == 0) { \| if ((1 << uVar6 & DAT_0001d688) == 0 \|\|` |
| cm4_b.c | 22781 | `goto LAB_0001d5be; \| } \| } \| if ((uVar4 & 0x20000000) == 0) { \| FUN_0003a646(param_1,0); \| FUN_00034d50(param_1); \| FUN_0002040c();` |
| cm4_b.c | 23478 | `FUN_0000ab10(0,0x33); \| iVar8 = 0; \| } \| if (iVar8 + 2U < *piVar5 + 0x200U) { \| bVar1 = *(byte *)(iVar8 + 2); \| } \| else {` |
| cm4_b.c | 24089 | `thunk_FUN_0000aeda(); \| return; \| } \| FUN_00017678(0xd883,uVar4 << 8 \| uVar5 << 4 \| 0x2000); \| return; \| } \| ` |
| cm4_b.c | 24120 | `if (iVar2 == 0) { \| return; \| } \| *(uint *)(iVar3 + 0xf8) = *(uint *)(iVar3 + 0xf8) & 0xcfffffff \| 0x20000000; \| *(uint *)(iVar3 + 0xf8) = *` |
| cm4_b.c | 24838 | `uVar3 = uVar2; \| if ((uVar1 & 0x80000000) != 0) { \| uVar1 = uVar1 ^ DAT_0001feb0; \| uVar3 = uVar2 ^ 0x20000000; \| } \| uVar1 = uVar1 * 2 - ((` |
| cm4_b.c | 25005 | `(uint)param_1[4] + (uint)param_1[5] * 0x100; \| uVar2 = uVar1 & 0x3ffffff; \| param_2[1] = uVar2; \| if ((uVar1 & 0x2000000) == 0) { \| uVar1 = ` |
| cm4_b.c | 26159 | `if (iVar1 != 0) { \| *(undefined4 *)(iVar1 + 0x2a4) = 0x28; \| *(undefined2 *)(iVar1 + 0x2a8) = 0x28; \| *(undefined2 *)(iVar1 + 0x28c) = 0x200` |
| cm4_b.c | 26160 | `*(undefined4 *)(iVar1 + 0x2a4) = 0x28; \| *(undefined2 *)(iVar1 + 0x2a8) = 0x28; \| *(undefined2 *)(iVar1 + 0x28c) = 0x2000; \| *(undefined2 *)` |
| cm4_b.c | 26170 | `else { \| FUN_00030cd2(1,0x20e73,iVar1,iVar1 + 0x2b7,1); \| } \| *(undefined2 *)(iVar1 + 0x28c) = 0x2000; \| *(undefined2 *)(iVar1 + 0x28e) = 0x` |
| cm4_b.c | 26171 | `FUN_00030cd2(1,0x20e73,iVar1,iVar1 + 0x2b7,1); \| } \| *(undefined2 *)(iVar1 + 0x28c) = 0x2000; \| *(undefined2 *)(iVar1 + 0x28e) = 0x2000; \| F` |
| cm4_b.c | 26172 | `} \| *(undefined2 *)(iVar1 + 0x28c) = 0x2000; \| *(undefined2 *)(iVar1 + 0x28e) = 0x2000; \| FUN_00030384(0x200); \| return 0; \| } \| return 0x1f` |
| cm4_b.c | 26354 | `FUN_0003e966(5,auStack_60); \| } \| else if ((*(char *)(param_1 + 0x44) != '\x01') && (iVar5 = FUN_0000be02(), iVar5 == 0)) { \| iVar5 = FUN_00` |
| cm4_b.c | 26371 | `auStack_60[0] = CONCAT22(auStack_60[0]._2_2_,0x408); \| uStack_50 = 0; \| FUN_0003f2cc(auStack_60); \| FUN_00030384(0x200000); \| FUN_00020bfa(p` |
| cm4_b.c | 26410 | `FUN_00030384(0x20); \| } \| if (*(short *)(param_1 + 0x3a) == 0x13) { \| FUN_00030384(0x200); \| } \| if (*(int *)(DAT_00021924 + (uint)*(byte *)` |
| cm4_b.c | 26663 | `uVar7 = *(uint *)(DAT_00021dcc + 0x34); \| } \| else { \| uVar7 = iVar5 * 0x2000 + 0x4000; \| } \| *puVar2 = uVar7; \| }` |
| cm4_b.c | 26668 | `*puVar2 = uVar7; \| } \| else { \| *puVar2 = iVar5 * 0x2000 + 0x6000; \| } \| if (*(char *)(iVar4 + 0x2b) != '\0') { \| iVar5 = *(int *)(iVar4 + 0` |
| cm4_b.c | 27241 | `} \| iVar4 = (int)((ulonglong)uVar11 >> 0x20); \| iVar5 = (int)uVar11; \| bVar8 = *(short *)(iVar5 + 0x200) == 0xf; \| if (bVar8) { \| iVar4 = *(` |
| cm4_b.c | 27420 | `*(undefined4 *)(param_2 + 0x1c) = uVar4; \| uVar4 = FUN_00012c7c(*(undefined1 *)(param_1 + 0x15)); \| if (*(int *)(param_1 + 0x18) == 1) { \| F` |
| cm4_b.c | 27665 | `} \| } \| else if (param_2 == 1) { \| sVar1 = *(short *)(param_1 + 0x200); \| bVar3 = sVar1 == 0x39; \| if (bVar3) { \| sVar1 = *(short *)(param_1` |
| cm4_b.c | 27675 | `uVar4 = FUN_00056ffe(param_1,4,DAT_00022d80); \| iVar2 = (int)((ulonglong)uVar4 >> 0x20); \| if ((int)uVar4 == 0) { \| sVar1 = *(short *)(param` |
| cm4_b.c | 27738 | `*(undefined1 *)(iVar3 + 0x4f) = *(undefined1 *)(iVar3 + 0x18); \| *(undefined4 *)(iVar3 + 0x10) = 0x1000; \| *(undefined1 *)(iVar3 + 0xfc) = 2` |
| cm4_b.c | 27836 | `FUN_00020e2c(); \| } \| else { \| *(undefined4 *)(param_1 + 0x10) = 0x200; \| FUN_00027030(param_1,*(undefined4 *)(iVar1 + 0x4c)); \| } \| }` |
| cm4_b.c | 27862 | `*(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) \| 2; \| return 0; \| } \| if (*(int *)(param_1 + 0x10) == 0x200) { \| if (param_2 == 0) { ` |
| cm4_b.c | 27897 | `} \| iVar3 = FUN_00056ffe(param_1,2,DAT_00022da8); \| if ((iVar3 == 0) && (iVar3 = FUN_00056ffe(param_1,2,DAT_00022dac), iVar3 == 0)) { \| sVar` |
| cm4_b.c | 27945 | `*(byte *)(param_1 + 0x2cc) = *(byte *)(param_1 + 0x2cc) & 0xfb; \| *(undefined1 *)(param_1 + 0xfc) = 2; \| if (*(char *)(param_1 + 0xbc) == '\` |
| cm4_b.c | 27983 | `void FUN_00022df6(int param_1) \|  \| { \| FUN_00030390(0x200); \| if (*(int *)(param_1 + 0x18) == 1) { \| FUN_00020b22(0x34,param_1); \| }` |
| cm4_b.c | 28203 | `if (iVar3 != 3) goto LAB_000232c6; \| *(undefined1 *)(param_1 + 0x4f) = 1; \| *(undefined1 *)(param_1 + 0xfc) = 2; \| FUN_00030390(0x200); \| FU` |
| cm4_b.c | 28314 | `} \| if ((int)param_2 < 0x34) { \| if (param_2 == (undefined *)0x13) { \| iVar3 = FUN_0003039a(0x200); \| if (iVar3 == 0) { \| return 0; \| }` |
| cm4_b.c | 28451 | `(iVar7 = FUN_00056ffe(param_1,1,DAT_00023c7c), iVar6 = DAT_00023c64, iVar7 != 0)))) { \| return 0x21; \| } \| sVar3 = *(short *)(param_1 + 0x20` |
| cm4_b.c | 28547 | `if (iVar9 == 0) { \| local_20 = 0; \| *(undefined1 *)(param_1 + 0xfc) = 1; \| FUN_00030390(0x200); \| if (*(int *)(param_1 + 0x18) == 1) { \| FUN` |
| cm4_b.c | 31546 | `} \| *(undefined1 *)(param_1 + 0x58) = 0; \| *(undefined2 *)(param_1 + 0x56) = 0; \| *(undefined4 *)(param_1 + 0x10) = 0x200; \| FUN_00027030(pa` |
| cm4_b.c | 35176 | ` \| iVar4 = FUN_00056ffe(param_1,2,DAT_0002ced4); \| if (iVar4 == 0) { \| sVar1 = *(short *)(param_1 + 0x200); \| bVar6 = sVar1 == 0x204; \| if (` |
| cm4_b.c | 35210 | `uVar2 = (ushort)*(byte *)(param_1 + 0x2ba); \| } \| if ((bVar6 && (uVar2 & 4) != 0) && (*(char *)(param_1 + 0xf3) == '\0')) { \| sVar1 = *(shor` |
| cm4_b.c | 35218 | `} \| else { \| if (sVar1 == 0xf) { \| iVar4 = *(ushort *)(param_1 + 0x202) - 0x2000; \| } \| if ((sVar1 == 0xf && iVar4 == 0x130) && (param_2 < 0` |
| cm4_b.c | 35429 | `uVar6 = (uint)*DAT_0002d30c; \| if (uVar6 < *(ushort *)(param_1 + 0xca)) { \| bVar9 = false; \| if (*(short *)(param_1 + 0x200) == 0xd) { \| uVa` |
| cm4_b.c | 35439 | `*(undefined2 *)(param_1 + 0xd0) = 4; \| bVar7 = false; \| } \| bVar9 = *(short *)(param_1 + 0x200) == 0x8f; \| if (bVar9) { \| uVar6 = *(ushort *` |
| cm4_b.c | 35487 | `undefined2 uStack_28; \| undefined2 uStack_26; \|  \| if (*(short *)(param_1 + 0x200) == 0x204) { \| if (*(short *)(param_1 + 0x202) == 0x102) {` |
| cm4_b.c | 35492 | `return 0x24; \| } \| } \| else if (*(short *)(param_1 + 0x200) == 10) { \| uVar2 = (uint)*(ushort *)(param_1 + 0x202); \| iVar1 = 0; \| if (uVar2 ` |
| cm4_b.c | 35724 | ` \| if ((param_1 & 0x3300) != 0) { \| if ((param_1 & 0x3000) == 0) { \| if ((param_1 & 0x200) == 0) { \| uVar1 = 0x16f; \| } \| else {` |
| cm4_b.c | 35732 | `} \| return uVar1; \| } \| if ((param_1 & 0x2000) == 0) { \| uVar1 = 0x2a7; \| } \| else {` |
| cm4_b.c | 36076 | `if ((param_1 & 4) != 0) { \| uVar1 = uVar1 \| 0x1000000; \| } \| if ((param_1 & 0x200) != 0) { \| uVar1 = uVar1 \| 0x8000000; \| } \| if ((param_1 &` |
| cm4_b.c | 36079 | `if ((param_1 & 0x200) != 0) { \| uVar1 = uVar1 \| 0x8000000; \| } \| if ((param_1 & 0x2000) != 0) { \| uVar1 = uVar1 \| 0x80000000; \| } \| return u` |
| cm4_b.c | 36353 | `if ((uVar4 & 4) != 0) { \| uVar3 = uVar3 \| 0x1000000; \| } \| if ((uVar4 & 0x200) != 0) { \| uVar3 = uVar3 \| 0x8000000; \| } \| if ((uVar4 & 0x200` |
| cm4_b.c | 36356 | `if ((uVar4 & 0x200) != 0) { \| uVar3 = uVar3 \| 0x8000000; \| } \| if ((uVar4 & 0x2000) != 0) { \| uVar3 = uVar3 \| 0x80000000; \| } \| *(uint *)(pa` |
| cm4_b.c | 37285 | `} \| if (bVar8 \|\| uVar7 != 0) goto LAB_0002f0c8; \| } \| FUN_00030384(0x20000); \| LAB_0002f0c8: \| if (*pcVar1 == '\0') { \| *(undefined4 *)(DAT_` |
| cm4_b.c | 37393 | `bVar9 = iVar5 == 2; \| } \| if (!bVar9) { \| FUN_00030390(0x20000); \| } \| return; \| }` |
| cm4_b.c | 37402 | `*(undefined1 *)(param_1 + 0x11) = 0; \| *(undefined1 *)(param_1 + 0x10) = 0; \| *puVar3 = 0; \| FUN_00030390(0x20000); \| return; \| } \| ` |
| cm4_b.c | 37894 | `FUN_00030390(); \| return; \| } \| FUN_00030384(0x20000); \| return; \| } \| ` |
| cm4_b.c | 38209 | `uVar3 = uVar3 \| 0x80; \| } \| if (bVar4 && (bVar1 & 0x80) != 0) { \| uVar3 = uVar3 \| 0x200; \| } \| uVar2 = 0; \| if (*param_2 != 0) {` |
| cm4_b.c | 39183 | `local_36 = *param_2; \| *(undefined1 *)(param_1 + 0x204) = local_36; \| local_32 = FUN_000310bc(param_2 + 1); \| *(undefined2 *)(param_1 + 0x20` |
| cm4_b.c | 39836 | `return; \| } \| bVar5 = false; \| if (*(short *)(param_1 + 0x200) == 0xd) { \| bVar5 = *(short *)(param_1 + 0x202) == 0x1b5d; \| } \| if (bVar5) {` |
| cm4_b.c | 39897 | `int iStack_2c; \|  \| iVar7 = FUN_00012a66(); \| if ((iVar7 != 0) && ((*DAT_0003152c & 0x20000) == 0)) { \| FUN_00012608(); \| } \| FUN_00030ed6(*` |
| cm4_b.c | 39983 | `uVar2 = *(undefined1 *)(iVar9 + 0x14); \| iVar7 = FUN_00056ffe(iVar9,2,DAT_00031520); \| if ((iVar7 == 0) && (*(int *)(iVar9 + 0x10) != 0x1000` |
| cm4_b.c | 42849 | `local_70 = DAT_000344b4; \| local_48 = param_1; \| uVar3 = param_2 >> 9; \| bVar27 = param_2 + uVar3 * -0x200 < 0x1c0; \| if (bVar27) { \| iVar20` |
| cm4_b.c | 42936 | `} \| LAB_000341d8: \| FUN_00063212(&local_1d0,local_48 + local_4c * 0x40,0x40); \| local_40 = local_40 - 0x200; \| } \| iVar12 = 0x10; \| local_4c` |
| cm4_b.c | 43152 | `*pbVar5 = bVar3 ^ bVar4; \| } \| } \| uVar6 = FUN_000343fa(local_198,0x200,param_3,param_4,auStack_158); \| uVar6 = FUN_00034098(auStack_158,uVa` |
| cm4_b.c | 43154 | `} \| uVar6 = FUN_000343fa(local_198,0x200,param_3,param_4,auStack_158); \| uVar6 = FUN_00034098(auStack_158,uVar6,auStack_58); \| uVar6 = FUN_0` |
| cm4_b.c | 43209 | `undefined1 auStack_50 [64]; \|  \| FUN_000343fa(param_1,0x100,param_2,0x100,auStack_50); \| FUN_000343fa(auStack_50,0x200,param_4,8,auStack_94)` |
| cm4_b.c | 43311 | `local_24 = 0; \| FUN_000343fa(param_1,0xc0,param_2,0xc0,&local_70); \| FUN_000343fa(&local_70,0x180,param_3,0x80,&local_100); \| FUN_000343fa(&` |
| cm4_b.c | 43382 | `local_28 = 0; \| local_24 = 0; \| FUN_000343fa(param_1,0x100,param_2,0x100,&local_d0); \| FUN_000343fa(&local_d0,0x200,param_3,0x80,auStack_90)` |
| cm4_b.c | 44518 | `if (param_3 == 0x1000) { \| FUN_0000aad0(0x21,0x6e); \| } \| else if (param_3 == 0x200 \|\| param_3 == 0x2000) { \| iVar10 = 2; \| } \| if ((*(char ` |
| cm4_b.c | 44532 | `iVar8 = FUN_00018c20(); \| } \| puVar2 = DAT_00035a70; \| if (((*(char *)(param_1 + 0x20) != '\x01') != (param_2 == 0)) == (param_3 == 0x200)) ` |
| cm4_b.c | 44538 | `else { \| uVar11 = iVar8 + 4U & 0xffffffc; \| } \| if ((param_3 == 0x200) && (*(char *)(param_1 + 0x20) != '\x01')) { \| if (param_2 != 0) goto ` |
| cm4_b.c | 44568 | `puVar3[param_2 + 1] = uVar7; \| puVar4 = DAT_00035a7c; \| if (param_2 == 0) { \| if (param_3 == 0x2000) { \| puVar3[1] = uVar6; \| uVar12 = uVar1` |
| cm4_b.c | 44593 | `*puVar2 = 0x10000000; \| } \| *DAT_00035a7c = uVar11; \| bVar13 = param_3 == 0x200 && param_2 == 2; \| if (param_3 == 0x200 && param_2 == 2) { \|` |
| cm4_b.c | 44594 | `} \| *DAT_00035a7c = uVar11; \| bVar13 = param_3 == 0x200 && param_2 == 2; \| if (param_3 == 0x200 && param_2 == 2) { \| bVar13 = *(char *)(para` |
| cm4_b.c | 44765 | `uVar7 = uVar5 \| uVar1 << 9; \| uVar1 = uVar8 & 2; \| uVar4 = uVar8 & 4; \| if ((uVar7 & 0x2000) != 0) { \| uVar1 = uVar8 & 4; \| uVar4 = uVar8 & ` |
| cm4_b.c | 44787 | `uVar9 = uVar4; \| } \| uVar8 = uVar2; \| if ((uVar7 & 0x200) != 0) { \| uVar8 = uVar6; \| uVar6 = uVar2; \| }` |
| cm4_b.c | 44910 | `uVar5 = uVar6 \| uVar3 << 9; \| uVar3 = uVar1 & 8; \| uVar2 = uVar1 & 4; \| if ((uVar5 & 0x2000) != 0) { \| uVar3 = uVar1 & 4; \| uVar2 = uVar1 & ` |
| cm4_b.c | 44931 | `uVar4 = uVar3; \| } \| uVar3 = uVar2; \| if ((uVar5 & 0x200) != 0) { \| uVar3 = uVar7; \| uVar7 = uVar2; \| }` |
| cm4_b.c | 45168 | `if (uVar3 != 0x4f) { \| iVar4 = DAT_00036450; \| } \| uVar5 = 0x2000; \| pbVar9 = (byte *)(iVar4 + 0xd); \| do { \| uVar11 = (uint)*pbVar9;` |
| cm4_b.c | 45205 | `if (uVar3 != 0x4f) { \| iVar4 = DAT_00036450; \| } \| uVar18 = 0x2000; \| pbVar9 = (byte *)(iVar4 + 0xd); \| do { \| uVar12 = (uint)*pbVar9;` |
| cm4_b.c | 45750 | `FUN_00035924(param_1,param_2); \| } \| else { \| if (param_3 != 0x200) { \| FUN_0000aad0(0x22,0x3eb); \| } \| FUN_000356fc(param_1,param_2,param_3` |
| cm4_b.c | 45892 | `int iVar1; \|  \| if (param_2 == 0x20) goto LAB_00036cb4; \| if (param_2 == 0x200) { \| iVar1 = FUN_0003a2cc(); \| if (iVar1 == 2) goto LAB_00036` |
| cm4_b.c | 45971 | `FUN_0003a142(param_1); \| FUN_000041e0(); \| FUN_000356fc(param_1,0,param_2); \| if (param_2 == 0x200) { \| FUN_0001c0ee(param_1,uVar5 >> 0x18,0` |
| cm4_b.c | 45972 | `FUN_000041e0(); \| FUN_000356fc(param_1,0,param_2); \| if (param_2 == 0x200) { \| FUN_0001c0ee(param_1,uVar5 >> 0x18,0,0x200); \| goto LAB_00036` |
| cm4_b.c | 46032 | `FUN_0003a142(param_1); \| FUN_000041e0(); \| FUN_000356fc(param_1,0,param_2); \| if (param_2 == 0x200) { \| FUN_0001c0ee(param_1,uVar1 >> 0x18,0` |
| cm4_b.c | 46033 | `FUN_000041e0(); \| FUN_000356fc(param_1,0,param_2); \| if (param_2 == 0x200) { \| FUN_0001c0ee(param_1,uVar1 >> 0x18,0,0x200); \| goto LAB_00036` |
| cm4_b.c | 46425 | `{ \| uint uVar1; \|  \| uVar1 = *DAT_0003751c & 0xffffdff0 \| 0x200f0000; \| *DAT_0003751c = uVar1; \| *(uint *)(DAT_00037518 + 0xe4) = uVar1; \| u` |
| cm4_b.c | 47520 | `joined_r0x000388c0: \| if (iVar3 == 0) goto LAB_000388d6; \| iVar3 = FUN_0005201c(); \| uVar6 = *(uint *)(iVar3 + 0x1c) \| 0x2000; \| LAB_000388c` |
| cm4_b.c | 47865 | `iVar5 = FUN_0000bd18(puVar3[2] - puVar3[5] & 0xfffffff); \| if (iVar5 != 0) { \| iVar5 = FUN_0005201c(); \| *(uint *)(iVar5 + 0x1c) = *(uint *)` |
| cm4_b.c | 48019 | `iVar4 = FUN_0002a58a(); \| if (iVar4 == 0) { \| FUN_00017678(&DAT_0000d140,param_1); \| iVar4 = FUN_0003039a(0x200); \| if (iVar4 != 0) { \| FUN_` |
| cm4_b.c | 48021 | `FUN_00017678(&DAT_0000d140,param_1); \| iVar4 = FUN_0003039a(0x200); \| if (iVar4 != 0) { \| FUN_00030384(0x200); \| } \| return 0x35; \| }` |
| cm4_b.c | 48142 | `} \| *piVar2 = iVar10; \| FUN_00035e36(1); \| piVar2[0x41] = 0x200; \| break; \| case 2: \| iVar10 = FUN_0000bd18(piVar2[3]);` |
| cm4_b.c | 48169 | `piVar2[4] = uVar17 + 4 & 0xfffffff; \| } \| FUN_00003d1a(3); \| FUN_00036dea(iVar18,0x200,piVar2[4]); \| FUN_0001ba5a(); \| FUN_000368c0(iVar18,0` |
| cm4_b.c | 48171 | `FUN_00003d1a(3); \| FUN_00036dea(iVar18,0x200,piVar2[4]); \| FUN_0001ba5a(); \| FUN_000368c0(iVar18,0x200); \| iVar10 = 3; \| goto LAB_000398d8; ` |
| cm4_b.c | 48184 | `if (param_1 == 0) { \| if (((sVar7 == 7) \|\| (iVar10 != 0x10)) && (iVar10 = FUN_0000bd18(piVar2[3]), iVar10 == 0)) { \| piVar2[4] = piVar2[4] +` |
| cm4_b.c | 48186 | `piVar2[4] = piVar2[4] + 4U & 0xfffffff; \| FUN_00036dea(iVar18,0x200); \| FUN_0001ba5a(); \| FUN_000368c0(iVar18,0x200); \| iVar10 = 3; \| } \| el` |
| cm4_b.c | 48239 | `joined_r0x00039402: \| if (iVar10 != 0) { \| iVar10 = FUN_0005201c(); \| *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) \| 0x2000; \| } \| br` |
| cm4_b.c | 48351 | `if (iVar10 != 0) goto LAB_000396f8; \| break; \| } \| FUN_00036c76(iVar18,0x200); \| FUN_0001ba5a(); \| iVar10 = FUN_0000bcf0(piVar2[2]); \| piVar` |
| cm4_b.c | 49107 | `if (*(char *)(param_1 + 0x57) != -1) { \| *(char *)(param_1 + 0x57) = *(char *)(param_1 + 0x57) + '\x01'; \| } \| FUN_00017690(0x2000,0xd185,*(` |
| cm4_b.c | 49144 | `if (cVar1 != -1) { \| *(char *)(iVar2 + 0x57) = cVar1 + '\x01'; \| } \| FUN_00017690(0x2000,0xd186,*(undefined1 *)(param_1 + 0x1e)); \| return; ` |
| cm4_b.c | 49185 | `FUN_0000aad0(5,0x17a); \| } \| *(undefined1 *)((uint)*(byte *)(param_1 + 0x52) * 5 + param_1 + 0x57) = 0; \| FUN_00017690(0x2000,&DAT_0000d189,` |
| cm4_b.c | 51506 | `iVar4 = FUN_0002a58a(); \| if (iVar4 == 0) { \| FUN_00017678(&DAT_0000d140,param_1); \| iVar4 = FUN_0003039a(0x200); \| if (iVar4 != 0) { \| FUN_` |
| cm4_b.c | 51508 | `FUN_00017678(&DAT_0000d140,param_1); \| iVar4 = FUN_0003039a(0x200); \| if (iVar4 != 0) { \| FUN_00030384(0x200); \| } \| return 0x35; \| }` |
| cm4_b.c | 52333 | `local_58 = 0xc; \| puVar5 = (undefined *)0x0; \| if (param_2 != (undefined *)0x2043) { \| puVar5 = param_2 + -0x2000; \| } \| if (param_2 != (und` |
| cm4_b.c | 52341 | `iVar7 = 0xc; \| goto LAB_0003e118; \| } \| if (param_2 + -0x2006 < (undefined *)0x8) { \| if (iVar3 == 0xff) { \| uVar4 = 0; \| goto LAB_0003da28;` |
| cm4_b.c | 52349 | `if (iVar3 == 1) { \| FUN_00017678(0xd79a,4); \| local_58 = 0xc; \| if (param_2 != (undefined *)0x200d) goto LAB_0003da02; \| goto LAB_0003d9fa; ` |
| cm4_b.c | 52365 | `return 0x12; \| } \| switch(param_2) { \| case (undefined *)0x2001: \| FUN_000411f4(puVar6); \| break; \| case (undefined *)0x2002:` |
| cm4_b.c | 52368 | `case (undefined *)0x2001: \| FUN_000411f4(puVar6); \| break; \| case (undefined *)0x2002: \| uStack_40 = FUN_00020602(); \| break; \| case (undefi` |
| cm4_b.c | 52371 | `case (undefined *)0x2002: \| uStack_40 = FUN_00020602(); \| break; \| case (undefined *)0x2003: \| puStack_5c = (undefined1 *)FUN_000411d4(); \| ` |
| cm4_b.c | 52374 | `case (undefined *)0x2003: \| puStack_5c = (undefined1 *)FUN_000411d4(); \| break; \| case (undefined *)0x2004: \| default: \| iVar7 = 0xc; \| LAB_` |
| cm4_b.c | 52380 | `LAB_0003dbf8: \| local_58 = 0xc; \| break; \| case (undefined *)0x2005: \| local_58 = FUN_00041218(puVar6); \| break; \| case (undefined *)0x2006:` |
| cm4_b.c | 52383 | `case (undefined *)0x2005: \| local_58 = FUN_00041218(puVar6); \| break; \| case (undefined *)0x2006: \| uVar4 = FUN_000447d4(0); \| local_58 = FU` |
| cm4_b.c | 52387 | `uVar4 = FUN_000447d4(0); \| local_58 = FUN_00043608(uVar4,puVar6); \| break; \| case (undefined *)0x2007: \| FUN_000447d4(0); \| auStack_4e[0] = ` |
| cm4_b.c | 52391 | `FUN_000447d4(0); \| auStack_4e[0] = FUN_00043744(); \| goto LAB_0003dce8; \| case (undefined *)0x2008: \| uVar4 = FUN_000447d4(0); \| local_58 = ` |
| cm4_b.c | 52395 | `uVar4 = FUN_000447d4(0); \| local_58 = FUN_00043750(uVar4,*puVar6,param_1 + 4); \| break; \| case (undefined *)0x2009: \| uVar4 = FUN_000447d4(0` |
| cm4_b.c | 52399 | `uVar4 = FUN_000447d4(0); \| local_58 = FUN_000437c8(uVar4,*puVar6,param_1 + 4); \| break; \| case (undefined *)0x200a: \| uVar4 = FUN_000447d4(0` |
| cm4_b.c | 52403 | `uVar4 = FUN_000447d4(0); \| local_58 = FUN_0004377a(uVar4,*puVar6); \| break; \| case (undefined *)0x200b: \| local_58 = FUN_0005c024(puVar6); \|` |
| cm4_b.c | 52406 | `case (undefined *)0x200b: \| local_58 = FUN_0005c024(puVar6); \| break; \| case (undefined *)0x200c: \| local_58 = FUN_0005c1c6(*puVar6,*(undefi` |
| cm4_b.c | 52409 | `case (undefined *)0x200c: \| local_58 = FUN_0005c1c6(*puVar6,*(undefined1 *)(param_1 + 4)); \| break; \| case (undefined *)0x200d: \| iVar7 = FU` |
| cm4_b.c | 52415 | `FUN_00038a08(); \| } \| break; \| case (undefined *)0x200e: \| iVar7 = FUN_0005d790(puVar6); \| break; \| case (undefined *)0x200f:` |
| cm4_b.c | 52418 | `case (undefined *)0x200e: \| iVar7 = FUN_0005d790(puVar6); \| break; \| case (undefined *)0x200f: \| auStack_4e[0] = FUN_00061e9c(); \| case (und` |
| cm4_b.c | 52735 | `} \| if (*DAT_0003e130 == '\0') { \| puVar5 = (undefined *)0x0; \| if (param_2 != (undefined *)0x200d) { \| puVar5 = param_2 + -0x2000; \| } \| if` |
| cm4_b.c | 52736 | `if (*DAT_0003e130 == '\0') { \| puVar5 = (undefined *)0x0; \| if (param_2 != (undefined *)0x200d) { \| puVar5 = param_2 + -0x2000; \| } \| if (pa` |
| cm4_b.c | 52738 | `if (param_2 != (undefined *)0x200d) { \| puVar5 = param_2 + -0x2000; \| } \| if (param_2 != (undefined *)0x200d && puVar5 != (undefined *)0x43)` |
| cm4_b.c | 52741 | `if (param_2 != (undefined *)0x200d && puVar5 != (undefined *)0x43) { \| puVar5 = (undefined *)0x0; \| if (param_2 != (undefined *)0x2044) { \| ` |
| cm4_b.c | 52746 | `if (param_2 != (undefined *)0x2044 && puVar5 != (undefined *)0x13) { \| puVar5 = (undefined *)0x0; \| if (param_2 != &DAT_00002016) { \| puVar5` |
| cm4_b.c | 52751 | `if (param_2 != &DAT_00002016 && puVar5 != (undefined *)0x19) { \| puVar5 = (undefined *)0x0; \| if (param_2 != (undefined *)0x2025) { \| puVar5` |
| cm4_b.c | 54015 | `} \| } \| else { \| iVar16 = uVar4 - 0x2007; \| if (iVar5 == 0xc02) { \| switchD_0003ecb6_caseD_c11: \| goto switchD_0003ee68_caseD_202a;` |
| cm4_b.c | 54075 | `goto LAB_0003f282; \| } \| if (uVar4 == 0x180a) goto switchD_0003ecd6_caseD_c28; \| if (uVar4 == 0x2002) { \| puVar18[7] = 8; \| puVar18[8] = 1; ` |
| cm4_b.c | 54081 | `uVar2 = 0x10; \| goto LAB_0003f006; \| } \| if (uVar4 != 0x2003) goto switchD_0003ec4e_default; \| } \| else if (iVar16 != 0x11) { \| if (0x11 < i` |
| cm4_b.c | 54977 | `*(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffdff; \| } \| if (param_1[7] == 1) { \| *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) \| 0x200` |
| cm4_b.c | 59287 | `undefined1 *unaff_r4; \|  \| FUN_00017690(0x80,0xd790,0x1f); \| if ((*DAT_0004477c & 0x20000) == 0) { \| FUN_00017678(0xd7ff,s_read_from_pipe_er` |
| cm4_b.c | 60321 | `*DAT_00045abc = *DAT_00045abc & 0xfffffffe; \| FUN_0000b3f4(0); \| puVar1 = DAT_00045ac0; \| *DAT_00045ac0 = *DAT_00045ac0 \| 0x200; \| *puVar1 =` |
| cm4_b.c | 60467 | `*DAT_00045abc = *DAT_00045abc & 0xfffffffe; \| FUN_0000b3f4(0); \| puVar2 = DAT_00045ac0; \| *DAT_00045ac0 = *DAT_00045ac0 \| 0x200; \| *puVar2 =` |
| cm4_b.c | 62642 | `*DAT_00048e4c = *DAT_00048e4c & 0xfffffffe; \| FUN_0000b3f4(0); \| puVar2 = DAT_00048e50; \| *DAT_00048e50 = *DAT_00048e50 \| 0x200; \| *puVar2 =` |
| cm4_b.c | 64168 | `FUN_00031056(4,param_5 + 8,*(int *)(param_1 + 0xe0) + 4); \| return; \| case 5: \| *(ushort *)(param_1 + 0xc0) = *(ushort *)(param_1 + 0xc0) \| ` |
| cm4_b.c | 64367 | `FUN_0000af3e(DAT_0004ad50,pbVar5,uVar9); \| FUN_0000af3e(DAT_0004ad50 + uVar9,(uint)uVar1 + iVar3,*(ushort *)((int)puVar4 + 0x16) - uVar9); \|` |
| cm4_b.c | 64368 | `FUN_0000af3e(DAT_0004ad50 + uVar9,(uint)uVar1 + iVar3,*(ushort *)((int)puVar4 + 0x16) - uVar9); \| pbVar8 = DAT_0004ad50; \| FUN_00017690(0x20` |
| cm4_b.c | 64614 | `iVar4 = FUN_00015768(*(undefined1 *)(param_1 + 0x1a)); \| if (iVar4 != 0) { \| *(undefined1 *)(iVar4 + 0x123) = 0; \| *(ushort *)(iVar4 + 0xc0)` |
| cm4_b.c | 66645 | `cVar1 = *(char *)(DAT_0004d9c0 + 7); \| } \| if (cVar1 == '\x01') { \| *DAT_00018a58 = *DAT_00018a58 \| 0x2000; \| return; \| } \| FUN_000187e4();` |
| cm4_b.c | 67088 | `uVar8 = *(uint *)(iVar5 + 0x31c) & 0xfffffdff; \| } \| else { \| uVar8 = *(uint *)(iVar5 + 0x31c) \| 0x200; \| } \| *(uint *)(iVar5 + 0x31c) = uVa` |
| cm4_b.c | 67138 | `uVar4 = uVar4 & 0xfffffdff; \| } \| else { \| uVar4 = uVar4 \| 0x200; \| } \| *(uint *)(iVar3 + 0x31c) = uVar4; \| *(undefined1 *)(iVar5 + 0x15c) =` |
| cm4_b.c | 67331 | `iVar2 = (int)(short)-(short)iVar4; \| } \| if (iVar2 < 0x400) { \| if (iVar2 < 0x200) { \| if (iVar2 < 0x100) { \| if (iVar2 < 0x80) { \| iVar4 = ` |
| cm4_b.c | 67409 | `iVar2 = (int)(short)-(short)iVar4; \| } \| if (iVar2 < 0x400) { \| if (iVar2 < 0x200) { \| if (iVar2 < 0x100) { \| if (iVar2 < 0x80) { \| iVar4 = ` |
| cm4_b.c | 67787 | `*(undefined1 *)(iVar3 + 3) = 0; \| thunk_FUN_00004fb0(iVar3 + 8,0,5); \| } \| FUN_00017690(0x80,0xd790,0x200); \| FUN_00017690(0x80,0xd791,uVar4` |
| cm4_b.c | 68841 | `*(undefined4 *)(param_1 + 0x18) = 0; \| *(uint *)(param_1 + 0x1c) = uVar3 & 0xfffffff1; \| if (*(int *)(param_1 + 0x3c) != 0) { \| if ((uVar3 &` |
| cm4_b.c | 68878 | `iVar4 = FUN_00050708(iVar7,param_1); \| if (iVar4 == 1) { \| bVar8 = false; \| if ((*(uint *)(iVar7 + 0x1c) & 0x10) == 0 \|\| (*(uint *)(iVar7 + ` |
| cm4_b.c | 69416 | `return; \| } \| uVar11 = (uint)((*(uint *)(param_1 + 0x1c) & 0x10) == 0); \| if ((*(uint *)(param_1 + 0x1c) & 0x2000) != 0) { \| if (*(byte *)(p` |
| cm4_b.c | 69522 | `if ((*(uint *)(iVar4 + 0x10) & 0x8004) == 0) { \| return; \| } \| if ((*(ushort *)(param_1 + 0x1c) & 0x2000) != 0) { \| iVar5 = FUN_0000e7b8(4,*` |
| cm4_b.c | 69643 | `uint uVar7; \|  \| iVar3 = DAT_00050560; \| if ((*(ushort *)(param_1 + 0x1c) & 0x2000) != 0) { \| iVar5 = FUN_0000e7b8(0xd,*(undefined1 *)(param` |
| cm4_b.c | 70116 | `if (!bVar5) { \| FUN_00051d7a(auStack_40,auStack_28); \| } \| if ((*(uint *)(iVar4 + 0x1c) & 0x20000) == 0) goto LAB_00050924; \| *(uint *)(iVar` |
| cm4_b.c | 71104 | `FUN_00017678(0xd537,local_28); \| FUN_00017678(0xd538,(uStack_98 & 0x7fff) << 1); \| if (param_6 != 0) { \| iVar2 = (uVar5 + uStack_98) - (0x20` |
| cm4_b.c | 71236 | `} while (local_84 < local_80); \| if (local_4c != param_5 >> 1) { \| if (param_6 != 0) { \| iVar3 = (local_2c + local_4c) - (0x2000000 - local_` |
| cm4_b.c | 71799 | `if (((param_1 == (uint *)0x0) \|\| (bVar2 = *param_1 == 0xf7f7f7f7, !bVar2)) && \| ((param_2 == (uint *)0x0 \|\| (*param_2 != 0xf7f7f7f7)))) { \| ` |
| cm4_b.c | 71800 | `((param_2 == (uint *)0x0 \|\| (*param_2 != 0xf7f7f7f7)))) { \| uVar1 = (*param_1 & 0x3ffffff) - (*param_2 & 0x3ffffff) & 0x3ffffff; \| bVar3 = u` |
| cm4_b.c | 71826 | `if (((param_2 == (uint *)0x0) \|\| (bVar2 = *param_2 == 0xf7f7f7f7, !bVar2)) && \| ((param_1 == (uint *)0x0 \|\| (*param_1 != 0xf7f7f7f7)))) { \| ` |
| cm4_b.c | 71827 | `((param_1 == (uint *)0x0 \|\| (*param_1 != 0xf7f7f7f7)))) { \| uVar1 = (*param_2 & 0x3ffffff) - (*param_1 & 0x3ffffff) & 0x3ffffff; \| bVar3 = u` |
| cm4_b.c | 71858 | `return false; \| } \| uVar3 = uVar2 - (*param_3 & 0x3ffffff) & 0x3ffffff; \| bVar4 = uVar3 == 0x2000000; \| bVar1 = uVar3 < 0x2000001; \| if (bVa` |
| cm4_b.c | 71859 | `} \| uVar3 = uVar2 - (*param_3 & 0x3ffffff) & 0x3ffffff; \| bVar4 = uVar3 == 0x2000000; \| bVar1 = uVar3 < 0x2000001; \| if (bVar1) { \| bVar4 = ` |
| cm4_b.c | 72457 | `break; \| case 0x10: \| FUN_000505aa(param_1); \| *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) \| 0x2000; \| case 0x13: \| if (*(int *)(p` |
| cm4_b.c | 73119 | `if (*DAT_000132f4 != '\0') { \| return; \| } \| iVar1 = FUN_0003039a(0x200); \| if (iVar1 != 0) { \| return; \| }` |
| cm4_b.c | 74816 | `uint uVar2; \|  \| iVar1 = DAT_000554a0; \| *(uint *)(DAT_000554a0 + 0x6c) = *(uint *)(DAT_000554a0 + 0x6c) \| 0x2000000; \| *(uint *)(iVar1 + 0x` |
| cm4_b.c | 74875 | `{ \| FUN_000050ca(0x4024,0xc,0xf000,5); \| thunk_FUN_00063bf6(10); \| FUN_000050ca(0x4138,0xd,0x2000); \| FUN_000050ca(0x413c,0xd,0x2000,0); \| F` |
| cm4_b.c | 74876 | `FUN_000050ca(0x4024,0xc,0xf000,5); \| thunk_FUN_00063bf6(10); \| FUN_000050ca(0x4138,0xd,0x2000); \| FUN_000050ca(0x413c,0xd,0x2000,0); \| FUN_0` |
| cm4_b.c | 74877 | `thunk_FUN_00063bf6(10); \| FUN_000050ca(0x4138,0xd,0x2000); \| FUN_000050ca(0x413c,0xd,0x2000,0); \| FUN_000050ca(0x413c,0xd,0x2000); \| thunk_F` |
| cm4_b.c | 74937 | `thunk_FUN_00063bf6(0x46); \| FUN_000050ca(0x4024,0xc,0xf000,5); \| thunk_FUN_00063bf6(10); \| FUN_000050ca(0x4138,0xd,0x2000); \| FUN_000050ca(0` |
| cm4_b.c | 74938 | `FUN_000050ca(0x4024,0xc,0xf000,5); \| thunk_FUN_00063bf6(10); \| FUN_000050ca(0x4138,0xd,0x2000); \| FUN_000050ca(0x413c,0xd,0x2000,0); \| FUN_0` |
| cm4_b.c | 74939 | `thunk_FUN_00063bf6(10); \| FUN_000050ca(0x4138,0xd,0x2000); \| FUN_000050ca(0x413c,0xd,0x2000,0); \| FUN_000050ca(0x413c,0xd,0x2000); \| thunk_F` |
| cm4_b.c | 75037 | ` \| { \| FUN_000050ca(0x24,8,0x100); \| FUN_000050ca(0x20,0xd,0x2000); \| FUN_000050ca(0x24,0xc,0xf000,6); \| FUN_000050ca(0x20,0xf,0x8000); \| FU` |
| cm4_b.c | 75080 | `{ \| FUN_000050ca(0x20,0xf,0x8000,0); \| FUN_000050ca(0x20,0xe,0x4000,0); \| FUN_000050ca(0x20,0xd,0x2000,0); \| FUN_000050ca(0x24,9,0xe00,0); \|` |
| cm4_b.c | 75873 | `FUN_0000aeca(param_1 + 0x82,0,0x21); \| *(undefined2 *)(param_1 + 0xa2) = 0x100; \| *(undefined2 *)((int)param_1 + 0x28a) = 0; \| *(undefined2 ` |
| cm4_b.c | 75874 | `*(undefined2 *)(param_1 + 0xa2) = 0x100; \| *(undefined2 *)((int)param_1 + 0x28a) = 0; \| *(undefined2 *)((int)param_1 + 0x28e) = 0x2000; \| *(` |
| cm4_b.c | 75963 | `*(undefined1 *)((int)param_1 + 0x3e6) = 0; \| *(undefined1 *)((int)param_1 + 999) = 1; \| FUN_0002a654(param_1); \| *(undefined2 *)((int)param_` |
| cm4_b.c | 75964 | `*(undefined1 *)((int)param_1 + 999) = 1; \| FUN_0002a654(param_1); \| *(undefined2 *)((int)param_1 + 0x28e) = 0x2000; \| *(undefined2 *)(param_` |
| cm4_b.c | 76628 | `} while (uVar3 < 0x18); \| } \| if (((param_2 & 4) != 0) && \| ((*(short *)(param_1 + 0x200) != *(short *)(param_3 + 0x18) \|\| \| (*(short *)(par` |
| cm4_b.c | 76726 | `param_2 = param_2 + 1; \| pbVar7 = pbVar7 + 1; \| } while (iVar9 != 0); \| if ((*DAT_0005730c & 0x20000) != 0) { \| cVar2 = *DAT_00057310; \| if ` |
| cm4_b.c | 77513 | `*(undefined1 *)(iVar1 + 0x17) = *(undefined1 *)(param_1 + 0xd); \| *(undefined1 *)(iVar1 + 0x18) = *(undefined1 *)(param_1 + 0xe); \| *(undefi` |
| cm4_b.c | 78215 | `uVar4 = FUN_00062d38((int)(lVar3 + -1),(int)((ulonglong)(lVar3 + -1) >> 0x20),param_2); \| uVar2 = *puVar1; \| if (uVar2 != 0xf5f5f5f5) { \| if` |
| cm4_b.c | 78261 | ` \| *DAT_00059ef8 = *DAT_00059ef8 & 0xfffffffe; \| puVar1 = DAT_00059ef4; \| *DAT_00059ef4 = *DAT_00059ef4 \| 0x200; \| *puVar1 = *puVar1 & 0xfff` |
| cm4_b.c | 81510 | `undefined1 *puVar3; \|  \| FUN_00017690(0x80,0xd790,0x1a); \| if ((*DAT_0005ce24 & 0x2000) == 0) { \| return *DAT_0005ce24 & 0x2000; \| } \| puVar` |
| cm4_b.c | 81511 | ` \| FUN_00017690(0x80,0xd790,0x1a); \| if ((*DAT_0005ce24 & 0x2000) == 0) { \| return *DAT_0005ce24 & 0x2000; \| } \| puVar2 = (undefined4 *)FUN_` |
| cm4_b.c | 82022 | `undefined4 local_30; \|  \| piVar1 = DAT_0005d8e0; \| local_40[0] = 0x200e; \| local_30 = 0; \| FUN_00017678(0xd746,(char)DAT_0005d8e0[1]); \| puV` |
| cm4_b.c | 82052 | `FUN_00041378(*DAT_0005d8e8 + (short)(ushort)*(byte *)(piVar1 + 1) * 0x19c); \| FUN_0003f2cc(local_40); \| FUN_00048dc8(*piVar3 + (short)(ushor` |
| cm4_b.c | 82582 | `*DAT_0005e3dc = *DAT_0005e3dc & 0xfff3ffff; \| *puVar1 = *puVar1 & 0xffffff1f; \| puVar1 = DAT_0005e3d4; \| *DAT_0005e3d4 = *DAT_0005e3d4 \| 0x2` |
| cm4_b.c | 82970 | `} \| } \| else { \| *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) \| 0x200; \| FUN_00017678(0xd563,*(ushort *)(param_1 + 0x10) \| (ushort)` |
| cm4_b.c | 83868 | `FUN_00050bb8(iVar4); \| thunk_FUN_0005422e(); \| iVar4 = DAT_0005fc1c; \| *(uint *)(DAT_0005fc1c + 0x1c) = *(uint *)(DAT_0005fc1c + 0x1c) \| 0x2` |
| cm4_b.c | 88325 | `uVar2 = 0; \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| uVar2 = isIRQinterruptsEnabled(); \| } \| return uVar2; \| }` |
| cm4_b.c | 88337 | `void FUN_000669ee(void) \|  \| { \| disableIRQinterrupts(); \| return; \| } \| ` |
| cm4_b.c | 88352 | ` \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| enableIRQinterrupts((param_1 & 1) == 1); \| } \| return; \| }` |
| cm4_b.c | 88426 | `uVar6 = 0; \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| uVar6 = isIRQinterruptsEnabled(); \| } \| puVar5[0x12] = uVar6; \| uVar6` |
| cm4_b.c | 88751 | `local_10 = ram0x00067fd0; \| local_18 = (char  [4])s_cm4_assert_00067fc8._0_4_; \| acStack_14 = (char  [4])s_cm4_assert_00067fc8._4_4_; \| disa` |
| cm4_b.c | 88783 | `undefined4 unaff_lr; \|  \| puVar1 = DAT_00067fd4; \| disableIRQinterrupts(); \| *DAT_00067fd4 = unaff_lr; \| FUN_00066a18(); \| iVar2 = DAT_00067` |
| cm4_b.c | 91658 | `uVar11 = 0; \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| uVar11 = isIRQinterruptsEnabled(); \| } \| if (uVar11 != 1) { \| softwa` |
| cm4_b.c | 91664 | `software_interrupt(0); \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| enableIRQinterrupts((uVar11 & 1) == 1); \| } \| } \| return ` |
| cm4_b.c | 91689 | `uVar2 = 0; \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| uVar2 = isIRQinterruptsEnabled(); \| } \| if (uVar2 != 1) { \| software_` |
| cm4_b.c | 91695 | `software_interrupt(0); \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| enableIRQinterrupts((uVar2 & 1) == 1); \| } \| } \| return u` |
| cm4_b.c | 91799 | `uVar11 = 0; \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| uVar11 = isIRQinterruptsEnabled(); \| } \| if (uVar11 != 1) { \| softwa` |
| cm4_b.c | 91805 | `software_interrupt(0); \| bVar1 = (bool)isCurrentModePrivileged(); \| if (bVar1) { \| enableIRQinterrupts((uVar11 & 1) == 1); \| } \| } \| return ` |
| cm4_b.c | 92495 | `uVar5 = uVar5 \| 0x10000000; \| } \| else if (iVar3 == 2) { \| uVar5 = uVar5 \| 0x20000000; \| } \| else if (iVar3 == 3) { \| uVar5 = uVar5 \| 0x3000` |
| cm4_b.c | 92683 | `(*(code *)piVar4[10])(iVar5,1); \| } \| LAB_0006e6f4: \| if ((uVar6 & 0x2001) != 0) { \| *(uint *)(piVar4[1] + 0x14) = *(uint *)(piVar4[1] + 0x1` |
| cm4_b.c | 92684 | `} \| LAB_0006e6f4: \| if ((uVar6 & 0x2001) != 0) { \| *(uint *)(piVar4[1] + 0x14) = *(uint *)(piVar4[1] + 0x14) \| 0x2000; \| if ((code *)piVar4[` |
| cm4_b.c | 93375 | ` \| iVar1 = DAT_0006f72c; \| if (0x13 < *(uint *)(DAT_0006f72c + 4)) { \| FUN_00067ed8(s_s_irq_status_postion_<_SCI_MAX_I_0006f77c,s_threadx_os` |
| dsp_gge.c | 446 | ` \|  \|  \| /* Function: IRQ */ \|  \| /* WARNING: Control flow encountered bad instruction data */ \| ` |
| dsp_gge.c | 450 | ` \| /* WARNING: Control flow encountered bad instruction data */ \|  \| void IRQ(uint *param_1,uint param_2,uint param_3) \|  \| { \| uint *puVar1` |
| fdl1.c | 81 | ` \|  \|  \| /* Function: IRQ */ \|  \| void IRQ(void) \| ` |
| fdl1.c | 83 | ` \| /* Function: IRQ */ \|  \| void IRQ(void) \|  \| { \| /* WARNING: Could not recover jumptable at 0x00000018. Too many branches */` |
| fdl1.c | 1642 | `int FUN_00002142(int param_1) \|  \| { \| return param_1 + 0x200 + *(int *)(param_1 + 0x30); \| } \|  \| ` |
| fdl1.c | 1979 | `FUN_00005ac8(auStack_60,0x20); \| FUN_00002168(param_1,auStack_60); \| iVar1 = DAT_00002380; \| iVar2 = *(int *)(param_2 + 0x30) + param_2 + 0x` |
| fdl1.c | 1986 | `FUN_00000b98(s_cert_empty_00002400); \| } \| else { \| FUN_00002104(param_2 + 0x200,param_3,auStack_40); \| uVar3 = FUN_00002196(auStack_60,auSt` |
| fdl1.c | 2272 | ` \| { \| _DAT_30000308 = *(undefined4 *)(DAT_000034c0 + -0x60); \| _DAT_30000300 = *(uint *)(DAT_000034c0 + -0x74) & 0xfefffeff \| 0x2004000; \| ` |
| fdl1.c | 2276 | `_DAT_30000408 = *(undefined4 *)(DAT_000034c0 + -0x5c); \| _DAT_3000040c = *(undefined4 *)(DAT_000034c0 + -0x4c); \| _DAT_30000410 = *(undefine` |
| fdl1.c | 2280 | `_DAT_30000508 = *(undefined4 *)(DAT_000034c0 + -0x58); \| _DAT_3000050c = *(undefined4 *)(DAT_000034c0 + -0x48); \| _DAT_30000510 = *(undefine` |
| fdl1.c | 4968 | `uVar3 = uVar1 + uVar4; \| uVar1 = uVar2 + (uVar2 >> 0x10) + (uint)CARRY4(uVar1,uVar4); \| uVar2 = uVar1 + CARRY4(uVar3,uVar1); \| uVar3 = uVar3` |
| fdl1.c | 5642 | `uint uVar1; \|  \| uVar1 = coproc_movefrom_Control(); \| coproc_moveto_Control(uVar1 \| 0x2000); \| return param_1; \| } \| ` |
| fdl2.c | 213 | ` \|  \|  \| /* Function: IRQ */ \|  \| void IRQ(void) \| ` |
| fdl2.c | 215 | ` \| /* Function: IRQ */ \|  \| void IRQ(void) \|  \| { \| int iVar1;` |
| fdl2.c | 766 | `if ((param_1 & 0xffffff00) != 0) { \| return; \| } \| FUN_00011764(DAT_000010d4,0x200); \| puVar2 = DAT_000010d4; \| param_1 = param_1 >> 4; \| do` |
| fdl2.c | 1034 | `*(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) \| 2; \| LAB_000006d0: \| puVar1 = DAT_0000110c; \| *DAT_0000110c = *DAT_0000110c \| 0x200; \| p` |
| fdl2.c | 1059 | `uVar1 = 0x100; \| } \| if ((param_1 & 2) != 0) { \| uVar1 = uVar1 \| 0x200; \| } \| if ((param_1 & 4) != 0) { \| uVar1 = uVar1 \| 0x400;` |
| fdl2.c | 1253 | `*(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) \| 2; \| LAB_00000a40: \| puVar2 = DAT_0000110c; \| *DAT_0000110c = *DAT_0000110c \| 0x200; \| p` |
| fdl2.c | 1751 | `FUN_000007f0(0x60cd,(char)sVar3); \| FUN_000007f0((extraout_r12 & 0xff) << 8 \| 0xa0); \| FUN_000007f0((extraout_r12_00 >> 8 & 0xff) << 8 \| 0xa` |
| fdl2.c | 1778 | ` \| { \| if (param_1 == 0xc) { \| return 0x2000; \| } \| if (param_1 < 0xd) { \| if (param_1 != 1) {` |
| fdl2.c | 1871 | `local_48 = 0xc; \| } \| if (*(byte *)(param_1 + 0x1f) != 0) { \| local_48 = local_48 \| 0x2000; \| } \| uVar6 = (uint)*(byte *)(param_1 + 0x1f); \|` |
| fdl2.c | 2102 | `local_4c = 0xc; \| } \| if (*(byte *)(param_1 + 0x1f) != 0) { \| local_4c = local_4c \| 0x2000; \| } \| uVar6 = (uint)*(byte *)(param_1 + 0x1f); \|` |
| fdl2.c | 2375 | `if (param_7 == 0) { \| param_7 = DAT_000026e4; \| } \| if (*(int *)(param_1 + 4) != 0x200) { \| uVar2 = FUN_00001638(param_1,param_2,param_3,par` |
| fdl2.c | 2445 | `local_48 = 0x810c; \| } \| if (*(char *)(param_1 + 0x1f) != '\0') { \| local_48 = local_48 \| 0x2000; \| } \| if (param_6 == 0 \|\| param_7 == 0) { ` |
| fdl2.c | 2470 | `} \| bVar1 = *(byte *)(param_1 + 0x21); \| if (*(char *)(param_1 + 0x22) != '\0') { \| uVar12 = 0x20000; \| } \| bVar2 = *(byte *)(param_1 + 0x20` |
| fdl2.c | 2732 | `if (*DAT_000026d8 != '\0') { \| FUN_000002d0(local_2c); \| if (*(int *)(DAT_000026ec + 2) == 2) { \| uVar9 = 0x200; \| LAB_00002b10: \| FUN_00005` |
| fdl2.c | 2822 | `FUN_00011754(DAT_000026e4,*(ushort *)(param_1 + 0x26) * param_5,0xff); \| param_7 = DAT_000026e4; \| } \| if (*(int *)(param_1 + 8) != 0x200) {` |
| fdl2.c | 3759 | `thunk_EXT_FUN_80105e74(s_start_verify_part____s_0000430c,*(undefined4 *)(iVar5 + 4)); \| } \| } \| FUN_00011754(DAT_00004324,0x20000,0xff); \| r` |
| fdl2.c | 3855 | `FUN_00011754(auStack_100,200,0xff); \| local_37 = 1; \| local_38 = 0x28; \| local_30 = 0x200; \| local_17 = 0; \| local_2c = 0; \| local_1c = 0;` |
| fdl2.c | 3920 | `pcVar4 = s_cert_empty_0000480c; \| } \| else { \| FUN_00005d78(DAT_00004328 + 0x200,*(int *)(DAT_00004328 + 0x30),auStack_68); \| iVar1 = FUN_00` |
| fdl2.c | 3975 | `if (bVar6 && uVar3 != 0) { \| unaff_r4 = unaff_r4 + 1; \| } \| uVar3 = 0x20000 / local_24; \| *(uint *)(pcVar4 + 0x28) = *(int *)(pcVar4 + 0x20)` |
| fdl2.c | 3983 | `return 1; \| } \| *(uint *)(pcVar4 + 0x20) = *(int *)(pcVar4 + 0x20) + uVar3; \| FUN_00011754(DAT_00004324,0x20000,0xff); \| } \| if ((local_20 !` |
| fdl2.c | 4016 | `} \| if (iVar1 == 0) { \| FUN_00005c74(s_verify_fail_00004818); \| FUN_00011754(DAT_00004324,0x20000,0xff); \| FUN_000056f8(*(undefined4 *)(pcVa` |
| fdl2.c | 4017 | `if (iVar1 == 0) { \| FUN_00005c74(s_verify_fail_00004818); \| FUN_00011754(DAT_00004324,0x20000,0xff); \| FUN_000056f8(*(undefined4 *)(pcVar4 +` |
| fdl2.c | 4137 | `uVar6 = (uint)*(ushort *)(*(int *)(DAT_00004d80 + 0x10) + 0x14) * \| (uint)*(ushort *)(*(int *)(DAT_00004d80 + 0x10) + 0x18); \| iVar7 = param` |
| fdl2.c | 5153 | `int FUN_00005db6(int param_1) \|  \| { \| return param_1 + 0x200 + *(int *)(param_1 + 0x30); \| } \|  \| ` |
| fdl2.c | 5490 | `FUN_00011764(auStack_58,0x20); \| FUN_00005ddc(param_1,auStack_58); \| piVar2 = (int *)(DAT_00005ff4 + -8); \| iVar1 = *(int *)(param_2 + 0x30)` |
| fdl2.c | 5497 | `FUN_00005c74(s_cert_empty_00006074); \| } \| else { \| FUN_00005d78(param_2 + 0x200,*(undefined4 *)(param_2 + 0x30),auStack_38); \| uVar3 = FUN_` |
| fdl2.c | 5520 | `FUN_00011764(auStack_60,0x20); \| FUN_00005ddc(param_1,auStack_60); \| iVar1 = DAT_00005ff4; \| iVar2 = *(int *)(param_2 + 0x30) + param_2 + 0x` |
| fdl2.c | 5527 | `FUN_00005c74(s_cert_empty_00006074); \| } \| else { \| FUN_00005d78(param_2 + 0x200,param_3,auStack_40); \| uVar3 = FUN_00005e0a(auStack_60,auSt` |
| fdl2.c | 11365 | `*(undefined2 *)(iVar1 + 100) = 0x108; \| bVar2 = *(int *)(DAT_00010b58 + 8) == 0; \| if (bVar2) { \| *(undefined2 *)(iVar1 + 0x150) = 0x200; \| ` |
| fdl2.c | 11377 | `*(undefined1 *)(iVar1 + 99) = 0x17; \| *(undefined2 *)(iVar1 + 0x66) = 8; \| if (bVar2) { \| *(undefined2 *)(iVar1 + 0x164) = 0x200; \| } \| else` |
| fdl2.c | 12828 | `uVar3 = uVar1 + uVar4; \| uVar1 = uVar2 + (uVar2 >> 0x10) + (uint)CARRY4(uVar1,uVar4); \| uVar2 = uVar1 + CARRY4(uVar3,uVar1); \| uVar3 = uVar3` |
| fdl2.c | 13672 | `uint uVar1; \|  \| uVar1 = coproc_movefrom_Control(); \| coproc_moveto_Control(uVar1 \| 0x2000); \| return param_1; \| } \| ` |
| img_90000005.c | 327 | ` \|  \|  \| /* Function: IRQ */ \|  \| /* WARNING: Control flow encountered bad instruction data */ \| ` |
| img_90000005.c | 331 | ` \| /* WARNING: Control flow encountered bad instruction data */ \|  \| void IRQ(int param_1,undefined4 param_2,undefined4 param_3,undefined4 p` |
| img_90000024.c | 374 | ` \|  \|  \| /* Function: IRQ */ \|  \| void IRQ(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, \| undefined4 param_5` |
| img_90000024.c | 376 | ` \| /* Function: IRQ */ \|  \| void IRQ(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, \| undefined4 param_5) \|  \|` |
| img_90000024.c | 1689 | `local_10 = 0x40000; \| } \| else { \| local_10 = 0x200000; \| } \| if ((param_2 & 0x20) != 0) { \| local_10 = local_10 \| 0x20;` |
| img_90000024.c | 1729 | `goto LAB_00000fd4; \| case 4: \| LAB_00000fd4: \| local_10 = local_10 \| 0x20000; \| break; \| case 5: \| goto LAB_00000fe0;` |
| img_90000024.c | 1826 | ` \| uVar1 = param_1; \| if (*DAT_00001938 != '\0') { \| uVar1 = 0x200; \| } \| uStack_18 = param_1; \| uStack_14 = param_2;` |
| img_90000024.c | 2004 | `if (iVar3 != 0) { \| return false; \| } \| iVar3 = FUN_00001140(0x200); \| return iVar3 != 0; \| } \| iVar5 = FUN_00001d50();` |
| img_90000024.c | 2033 | `param_1 = param_1 << 9; \| } \| puVar3 = &local_10; \| local_c = 0x200; \| local_10 = param_3; \| local_8 = param_2; \| if (param_2 == 1) {` |
| img_90000024.c | 2075 | `param_1 = param_1 << 9; \| } \| puVar3 = &local_10; \| local_c = 0x200; \| local_10 = param_3; \| local_8 = param_2; \| if (param_2 == 1) {` |
| img_90000024.c | 2554 | `return; \| } \| *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) \| 0x80000000; \| *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) \| 0x200000` |
| img_90000024.c | 2606 | `puVar2 = DAT_0000201c; \| *DAT_0000201c = *DAT_0000201c \| 0x100000; \| puVar2[0x2c] = puVar2[0x2c] \| 0x1000; \| puVar2[2] = puVar2[2] \| 0x20000` |
| img_90000024.c | 3829 | `param_1[0x2d] = '\0'; \| param_1[0x2e] = '\0'; \| param_1[0x2f] = '\0'; \| FUN_000064c0(param_1 + 0x30,0,0x200); \| param_1[0x22e] = 'U'; \| para` |
| img_90000024.c | 4252 | `if (iVar4 != 0) { \| return 1; \| } \| FUN_000064c0(*param_1 + 0x30,0,0x200); \| uVar5 = FUN_00003814(*param_1,uVar3); \| *(undefined4 *)(*param_` |
| img_90000024.c | 4618 | `*(undefined1 *)(iVar12 + 0xb) = uStack_28._3_1_; \| param_1[7] = iVar10; \| } \| if ((uStack_28 & 0x2000000) == 0) { \| uVar5 = 1; \| } \| else {` |
| img_90000024.c | 5211 | `iVar5 = FUN_00004bf4(pcVar11,uVar13); \| } \| if (iVar5 != 3) { \| if ((iVar5 == 0) && (*(short *)(pcVar11 + 0x3b) == 0x200)) { \| uVar4 = (uint` |
| img_90000024.c | 5497 | `uVar2 = param_1[2]; \| if ((uVar2 & 0x1ff) == 0) break; \| LAB_000053fc: \| uVar2 = 0x200 - (param_1[2] & 0x1ffU); \| if (param_3 < uVar2) { \| u` |
| img_90000024.c | 5556 | `uVar5 = param_1[6] - iVar1; \| } \| if (bVar6 && uVar5 < uVar2) { \| thunk_FUN_000064b4(param_2 + uVar5 * 0x200,param_1 + 9,0x200); \| } \| uVar2` |
| img_90000024.c | 5652 | `return 1; \| } \| if (param_1[6] - uVar6 < uVar2) { \| thunk_FUN_000064b4(param_1 + 9,param_2 + (param_1[6] - uVar6) * 0x200,0x200); \| *(byte *` |
| img_90000024.c | 5659 | `} \| else { \| LAB_00005658: \| uVar2 = 0x200 - (param_1[2] & 0x1ffU); \| if (param_3 < uVar2) { \| uVar2 = param_3; \| }` |
| img_90000024.c | 5782 | `if (param_2 != 0) { \| iVar3 = *param_1; \| bVar2 = *(byte *)(iVar3 + 2); \| uVar1 = (uint)bVar2 * 0x200; \| if ((iVar4 == 0) \|\| \| (uVar5 = iVar` |
| img_90000024.c | 5804 | `param_2 = param_2 - uVar5; \| } \| if (iVar4 != 0) { \| for (; uVar5 = param_2, uVar1 < param_2; param_2 = param_2 + (uint)bVar2 * -0x200) { \| ` |
| img_90000024.c | 6100 | `iVar7 = FUN_00003814(local_70[0],uVar6); \| pbVar3 = local_70[0]; \| pbVar8 = local_70[0] + 0x30; \| FUN_000064c0(pbVar8,0,0x200); \| FUN_000064` |
| img_90000024.c | 6140 | `local_70[0][4] = 1; \| iVar5 = FUN_0000364c(local_70[0],0); \| if (iVar5 != 0) goto LAB_00006154; \| FUN_000064c0(pbVar8,0,0x200); \| } \| iVar5 ` |
| img_90000024.c | 6561 | `} \| uVar3 = 0; \| while ((uVar3 < (uint)param_2[1] && \| (iVar1 = FUN_00001794(*param_2 + uVar3,1,param_2[2] + uVar3 * 0x200), iVar1 != 0))) {` |
| img_90000024.c | 6584 | `return 0; \| } \| for (uVar3 = 0; uVar3 < (uint)param_2[1]; uVar3 = uVar3 + 1) { \| iVar1 = FUN_00001794(*param_2 + uVar3,1,param_2[2] + uVar3 ` |
| img_90000024.c | 6802 | `if ((uVar2 & 0x40000) != 0) { \| return 4; \| } \| if ((uVar2 & 0x20000) == 0) { \| return (uVar2 & 0x10000) != 0; \| } \| return 2;` |
| img_90000024.c | 7055 | `break; \| } \| } \| else if (*(int *)(iVar3 * 4 + DAT_00007090 + 0x20000000) == param_1 - 0x17) { \| puVar2 = (undefined4 *)(iVar3 * 4 + DAT_000` |
| img_90000024.c | 7056 | `} \| } \| else if (*(int *)(iVar3 * 4 + DAT_00007090 + 0x20000000) == param_1 - 0x17) { \| puVar2 = (undefined4 *)(iVar3 * 4 + DAT_00007090 + 0` |
| img_90000024.c | 7121 | `uVar1 = *puVar3 \| 0x1000; \| } \| else if (param_2 == 2) { \| uVar1 = *puVar3 \| 0x2000; \| } \| else { \| if (param_2 != 3) goto LAB_00007168;` |
| img_90000024.c | 7243 | `uVar5 = uVar5 \| 0x10000000; \| } \| else if (iVar3 == 2) { \| uVar5 = uVar5 \| 0x20000000; \| } \| else if (iVar3 == 3) { \| uVar5 = uVar5 \| 0x3000` |
| img_90000024.c | 7381 | `uVar5 = uVar5 \| 0x10000000; \| } \| else if (iVar3 == 2) { \| uVar5 = uVar5 \| 0x20000000; \| } \| else if (iVar3 == 3) { \| uVar5 = uVar5 \| 0x3000` |
| img_90000024.c | 7493 | `iVar1 = DAT_00006cf0; \| } \| iVar1 = iVar1 + param_1 * 0x40; \| *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) \| 0x2000000; \| return; \| } \| ` |
| img_90000024.c | 8375 | `uVar3 = piVar2[6]; \| iVar1 = (uVar3 >> 3) * 0x10; \| if (piVar2[1] == 0) { \| FUN_000006e4(s_s_spi_irq_ctx_spi_rw_remain_size_000089f8,s_spi_p` |
| img_90000024.c | 8508 | `*(uint *)(iVar7 + 0x20) = *(uint *)(iVar7 + 0x20) \| 0x40; \| } \| uVar3 = piVar6[5]; \| piVar6[5] = uVar3 \| 0x200; \| *(uint *)(iVar7 + 0x18) = ` |
| img_90000024.c | 8509 | `} \| uVar3 = piVar6[5]; \| piVar6[5] = uVar3 \| 0x200; \| *(uint *)(iVar7 + 0x18) = uVar3 \| 0x200; \| return 0; \| } \| ` |
| img_90000024.c | 8538 | `iVar4 = *(int *)(*piVar5 + 4); \| uVar1 = FUN_00008094(param_1); \| FUN_000087e0(iVar4); \| uVar2 = piVar5[2] & 0xffffefffU \| 0x2000; \| piVar5[` |
| img_90000024.c | 8668 | `pcVar4 = (code *)0xffff; \| piVar1[1] = iVar2 - piVar1[2]; \| if (0xfffe < (uint)(iVar2 - piVar1[2])) { \| FUN_000006e4(s_s_spi_irq_ctx_spi_rw_` |
| img_90000024.c | 8734 | `*(undefined4 *)(iVar1 + 0x48) = 3; \| } \| else if (param_1 == 1) { \| *(undefined4 *)(DAT_00009104 + 0x134) = 0x200; \| *(undefined4 *)(iVar1 +` |
| img_90000024.c | 8808 | `uVar2 = uVar2 \| 1; \| } \| else if (param_2 == 2) { \| uVar2 = uVar2 \| 0x2002; \| } \| else { \| if (param_2 != 3) {` |
| img_90000024.c | 8816 | `uVar2 = *(uint *)(iVar3 + 4); \| goto LAB_00009054; \| } \| uVar2 = uVar2 \| 0x2001; \| } \| *(uint *)(iVar3 + 4) = uVar2; \| LAB_00009054:` |
| img_90000024.c | 8862 | `piVar3[5] = 0x8100; \| *(undefined4 *)(iVar4 + 0x18) = 0x8100; \| uVar2 = piVar3[5]; \| piVar3[5] = uVar2 \| 0x200; \| *(uint *)(iVar4 + 0x18) = ` |
| img_90000024.c | 8863 | `*(undefined4 *)(iVar4 + 0x18) = 0x8100; \| uVar2 = piVar3[5]; \| piVar3[5] = uVar2 \| 0x200; \| *(uint *)(iVar4 + 0x18) = uVar2 \| 0x200; \| FUN_0` |
| img_90000024.c | 8872 | `piVar3[5] = uVar5 + 0x8000; \| *(uint *)(iVar4 + 0x18) = uVar5 + 0x8000; \| uVar1 = piVar3[5]; \| piVar3[5] = uVar1 \| 0x200; \| *(uint *)(iVar4 ` |
| img_90000024.c | 8873 | `*(uint *)(iVar4 + 0x18) = uVar5 + 0x8000; \| uVar1 = piVar3[5]; \| piVar3[5] = uVar1 \| 0x200; \| *(uint *)(iVar4 + 0x18) = uVar1 \| 0x200; \| FUN` |
| img_90000024.c | 9009 | `local_38 = param_3; \| FUN_00007c94(local_50,1,&local_3c); \| uVar4 = piVar5[5]; \| piVar5[5] = uVar4 \| 0x200; \| *(uint *)(iVar6 + 0x18) = uVar` |
| img_90000024.c | 9010 | `FUN_00007c94(local_50,1,&local_3c); \| uVar4 = piVar5[5]; \| piVar5[5] = uVar4 \| 0x200; \| *(uint *)(iVar6 + 0x18) = uVar4 \| 0x200; \| local_3c ` |
| img_90000024.c | 9129 | `*(undefined4 *)(iVar5 + 0x48) = 0; \| *(uint *)(iVar2 + 0x34) = param_4; \| if (param_4 == 0) { \| FUN_000006e4(s_s_spi_irq_ctx_spi_rw_remain_s` |
| img_90000024.c | 9278 | `local_50 = iVar6; \| } \| else { \| FUN_000006e4(s_s_spi_irq_ctx_spi_rw_remain_size_0000a2b0 + 0x24,DAT_00009cc0,0x88b); \| } \| if ((*(byte *)(D` |
| img_90000024.c | 9281 | `FUN_000006e4(s_s_spi_irq_ctx_spi_rw_remain_size_0000a2b0 + 0x24,DAT_00009cc0,0x88b); \| } \| if ((*(byte *)(DAT_0000a2d8 + 0x14) & 1) == 0) { ` |
| img_90000024.c | 10392 | `void FUN_0000bf04(void) \|  \| { \| *(uint *)(DAT_0000c260 + 0xc) = *(uint *)(DAT_0000c260 + 0xc) & 0xffffcfff \| 0x2000; \| return; \| } \| ` |
| img_90000024.c | 13914 | ` \| iVar1 = DAT_00010e98; \| uVar3 = FUN_00002078(DAT_00010e98); \| FUN_000020b4(iVar1,uVar3 \| 0x200); \| iVar5 = iVar1 + 8; \| uVar3 = FUN_00002` |
| img_90000024.c | 14662 | `puVar4 = _DAT_00011e58 + 1; \| uVar2 = FUN_00012e80(); \| if (1 < uVar2) { \| uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b ` |
| img_90000024.c | 14663 | `uVar2 = FUN_00012e80(); \| if (1 < uVar2) { \| uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1); \| FUN_000006e8(s` |
| img_90000024.c | 14687 | `puVar1 = DAT_00011e90; \| uVar2 = FUN_00012e80(); \| if (1 < uVar2) { \| uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,p` |
| img_90000024.c | 14688 | `uVar2 = FUN_00012e80(); \| if (1 < uVar2) { \| uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1); \| FUN_000006e8(s` |
| img_90000024.c | 14735 | `puVar1 = _DAT_00011e58; \| uVar2 = FUN_00012e80(); \| if (1 < uVar2) { \| uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,` |
| img_90000024.c | 14736 | `uVar2 = FUN_00012e80(); \| if (1 < uVar2) { \| uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1); \| FUN_000006e8(s` |
| img_90000024.c | 14824 | `puVar1 = DAT_00012138; \| uVar2 = FUN_00012e80(); \| if (1 < uVar2) { \| uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,p` |
| img_90000024.c | 14825 | `uVar2 = FUN_00012e80(); \| if (1 < uVar2) { \| uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1); \| FUN_000006e8(s` |
| img_90000024.c | 14850 | `puVar5 = (uint *)((uint)DAT_00012138 \| (int)DAT_00012138 >> 0x15); \| uVar3 = FUN_00012e80(); \| if (1 < uVar3) { \| uVar4 = FUN_000006ec(s_ISP` |
| img_90000024.c | 14851 | `uVar3 = FUN_00012e80(); \| if (1 < uVar3) { \| uVar4 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1); \| FUN_000006e8(s` |
| img_90000024.c | 15839 | `uVar1 = 1; \| } \| else { \| FUN_000006c8(s___LCDC_IRQ_type_is_wrong__irq_ty_00012ef6 + 2,param_1); \| } \| return uVar1; \| }` |
| img_90000024.c | 15861 | `uVar1 = 3; \| } \| else { \| FUN_000006c8(s_LCDC_IRQ_num_is_wrong__irq_numbe_00012f20,param_1); \| } \| return uVar1; \| }` |
| img_90000024.c | 16065 | `FUN_0001f538(param_1 + 0x5d,0x6c); \| local_38 = 0; \| FUN_0001f4dc(auStack_100,200,0xff); \| local_30 = 0x200; \| local_17 = 0; \| local_2c = 0;` |
| img_90000024.c | 16595 | `local_30 = param_1; \| local_2c = param_2; \| uStack_28 = param_3; \| FUN_0001f538(auStack_454,0x200); \| FUN_0001f538(auStack_254,0x200); \| loc` |
| img_90000024.c | 16596 | `local_2c = param_2; \| uStack_28 = param_3; \| FUN_0001f538(auStack_454,0x200); \| FUN_0001f538(auStack_254,0x200); \| local_45c = DAT_000142e0;` |
| img_90000024.c | 16613 | `psVar3 = local_476; \| } \| } while ((local_478 & 0x10) != 0); \| FUN_0001f538(auStack_454,0x200); \| FUN_00000b10(auStack_454,psVar3); \| FUN_00` |
| img_90000024.c | 21604 | `uVar3 = uVar1 + uVar4; \| uVar1 = uVar2 + (uVar2 >> 0x10) + (uint)CARRY4(uVar1,uVar4); \| uVar2 = uVar1 + CARRY4(uVar3,uVar1); \| uVar3 = uVar3` |
| img_90000024.c | 22418 | `uint uVar1; \|  \| uVar1 = coproc_movefrom_Control(); \| coproc_moveto_Control(uVar1 \| 0x2000); \| return param_1; \| } \| ` |
| img_90000024.c | 22550 | `if ((param_1 & 0xffffff00) != 0) { \| return; \| } \| func_0x00054128(DAT_00026024,0x200); \| puVar2 = DAT_00026024; \| param_1 = param_1 >> 4; \|` |
| img_90000024.c | 22723 | `uVar1 = 0x100; \| } \| if ((param_1 & 2) != 0) { \| uVar1 = uVar1 \| 0x200; \| } \| if ((param_1 & 4) != 0) { \| uVar1 = uVar1 \| 0x400;` |
| img_90000024.c | 22917 | `*(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) \| 2; \| LAB_00025990: \| puVar2 = DAT_0002605c; \| *DAT_0002605c = *DAT_0002605c \| 0x200; \| p` |
| img_90000024.c | 23078 | `} \| if (*(int *)(puVar2 + 2) == 2) { \| *puVar2 = 0; \| FUN_00025740(s_s_spi_irq_ctx_spi_rw_remain_size_000090b8 + 0x15); \| FUN_00025740(0xa0)` |
| img_90000024.c | 23392 | `FUN_00025740(0x60cd,(char)sVar3); \| FUN_00025740((extraout_r12 & 0xff) << 8 \| 0xa0); \| FUN_00025740((extraout_r12_00 >> 8 & 0xff) << 8 \| 0xa` |
| img_90000024.c | 23419 | ` \| { \| if (param_1 == 0xc) { \| return 0x2000; \| } \| if (param_1 < 0xd) { \| if (param_1 != 1) {` |
| img_90000024.c | 23512 | `local_48 = 0xc; \| } \| if (*(byte *)(param_1 + 0x1f) != 0) { \| local_48 = local_48 \| 0x2000; \| } \| uVar6 = (uint)*(byte *)(param_1 + 0x1f); \|` |
| img_90000024.c | 23743 | `local_4c = 0xc; \| } \| if (*(byte *)(param_1 + 0x1f) != 0) { \| local_4c = local_4c \| 0x2000; \| } \| uVar6 = (uint)*(byte *)(param_1 + 0x1f); \|` |
| img_90000024.c | 24016 | `if (param_7 == 0) { \| param_7 = DAT_00027634; \| } \| if (*(int *)(param_1 + 4) != 0x200) { \| uVar2 = FUN_00026588(param_1,param_2,param_3,par` |
| img_90000024.c | 24086 | `local_48 = 0x810c; \| } \| if (*(char *)(param_1 + 0x1f) != '\0') { \| local_48 = local_48 \| 0x2000; \| } \| if (param_6 == 0 \|\| param_7 == 0) { ` |
| img_90000024.c | 24111 | `} \| bVar1 = *(byte *)(param_1 + 0x21); \| if (*(char *)(param_1 + 0x22) != '\0') { \| uVar12 = 0x20000; \| } \| bVar2 = *(byte *)(param_1 + 0x20` |
| img_90000024.c | 24373 | `if (*DAT_00027628 != '\0') { \| FUN_00025220(local_2c); \| if (*(int *)(DAT_0002763c + 2) == 2) { \| uVar9 = 0x200; \| LAB_00027a60: \| func_0x00` |
| img_90000024.c | 24463 | `func_0x000540cc(DAT_00027634,*(ushort *)(param_1 + 0x26) * param_5,0xff); \| param_7 = DAT_00027634; \| } \| if (*(int *)(param_1 + 8) != 0x200` |
| kernel.c | 213 | ` \|  \|  \| /* Function: IRQ */ \|  \| undefined8 IRQ(int param_1) \| ` |
| kernel.c | 215 | ` \| /* Function: IRQ */ \|  \| undefined8 IRQ(int param_1) \|  \| { \| undefined4 unaff_lr;` |
| kernel.c | 6113 | `undefined4 local_14 [2]; \|  \| FUN_006fe9dc(auStack_114,0x100); \| FUN_006fe9dc(auStack_314,0x200); \| pcVar2 = DAT_0000c52c; \| local_14[0] = *` |
| kernel.c | 6182 | `goto LAB_0000c470; \| } \| if (local_c < 0x6400000) { \| if (local_c < 0x200000) goto LAB_0000c470; \| uVar3 = local_c >> 1; \| } \| }` |
| kernel.c | 6332 | `undefined1 auStack_110 [256]; \|  \| FUN_006fe9dc(auStack_110,0x100); \| FUN_006fe9dc(auStack_310,0x200); \| pcVar3 = DAT_0000ca3c; \| iVar2 = DA` |
| kernel.c | 8753 | `} \| return UNRECOVERED_JUMPTABLE; \| } \| if (UNRECOVERED_JUMPTABLE == IRQ) { \| iVar38 = *(int *)(param_2 + 8); \| local_30 = (code *)0x1b5c; \|` |
| kernel.c | 8768 | `UNRECOVERED_JUMPTABLE = (code *)FUN_0081c134(unaff_r4,unaff_r5,unaff_r6,unaff_r7); \| return UNRECOVERED_JUMPTABLE; \| } \| if (UNRECOVERED_JUM` |
| kernel.c | 8831 | `uVar13 = *(undefined1 *)(iVar45 + uVar60 * 4); \| } \| else { \| if (UNRECOVERED_JUMPTABLE != IRQ) { \| return UNRECOVERED_JUMPTABLE; \| } \| uVar` |
| kernel.c | 9049 | `} \| goto LAB_000225de; \| } \| if (pcVar61 != IRQ) { \| if (pcVar61 != IRQ) goto LAB_000225de; \| iVar38 = *(int *)(param_2 + 8); \| uVar68 = *(u` |
| kernel.c | 9050 | `goto LAB_000225de; \| } \| if (pcVar61 != IRQ) { \| if (pcVar61 != IRQ) goto LAB_000225de; \| iVar38 = *(int *)(param_2 + 8); \| uVar68 = *(undef` |
| kernel.c | 9266 | `} \| } \| else { \| if (UNRECOVERED_JUMPTABLE == IRQ) { \| LAB_00022712: \| UNRECOVERED_JUMPTABLE = (code *)FUN_00028f98(param_2); \| return UNREC` |
| kernel.c | 9272 | `return UNRECOVERED_JUMPTABLE; \| } \| if (0x1a < (int)UNRECOVERED_JUMPTABLE) { \| if ((UNRECOVERED_JUMPTABLE == IRQ) \|\| (UNRECOVERED_JUMPTABLE ` |
| kernel.c | 9391 | `UNRECOVERED_JUMPTABLE = (code *)FUN_00352a16(*puVar47,uVar68,puVar44); \| return UNRECOVERED_JUMPTABLE; \| } \| if (pcVar40 == IRQ) { \| iVar38 ` |
| kernel.c | 9554 | `UNRECOVERED_JUMPTABLE = (code *)FUN_00352a16(*DAT_007e0948,0x3cb,iVar45); \| return UNRECOVERED_JUMPTABLE; \| } \| if (pcVar40 == IRQ) { \| iVar` |
| kernel.c | 9853 | `UNRECOVERED_JUMPTABLE = (code *)FUN_006f4a98(10,DAT_0002286c + 1); \| return UNRECOVERED_JUMPTABLE; \| } \| if (pcVar40 != IRQ) { \| if (pcVar40` |
| kernel.c | 10449 | `uVar68 = FUN_0086646a(uVar60,uVar60); \| FUN_006f3e8a(uVar68,*(undefined4 *)(iVar38 + 4),uVar37); \| local_4c = 0x32; \| local_48 = IRQ; \| loca` |
| kernel.c | 17217 | `iVar9 = FUN_006f3afa(10,0,1,0x2a0,0x776,param_3); \| iVar7 = *(int *)(iVar7 + param_1 * 4); \| if (*(int *)(iVar7 + iVar3 * 0x3ac + 0x204) == ` |
| kernel.c | 17376 | `else { \| *(undefined4 *)(*(int *)(DAT_00021638 + param_1 * 4) + iVar3 * 0x3ac + 0x27c) = 0; \| *(undefined4 *)(puVar6 + 0x210) = 0; \| uVar4 =` |
| kernel.c | 17377 | `*(undefined4 *)(*(int *)(DAT_00021638 + param_1 * 4) + iVar3 * 0x3ac + 0x27c) = 0; \| *(undefined4 *)(puVar6 + 0x210) = 0; \| uVar4 = FUN_007a` |
| kernel.c | 17426 | `else { \| *(undefined4 *)(*(int *)(iVar2 + param_1 * 4) + iVar3 * 0x3ac + 0x27c) = 0; \| *(undefined4 *)(iVar7 + 0x210) = 0; \| uVar4 = FUN_007` |
| kernel.c | 17427 | `*(undefined4 *)(*(int *)(iVar2 + param_1 * 4) + iVar3 * 0x3ac + 0x27c) = 0; \| *(undefined4 *)(iVar7 + 0x210) = 0; \| uVar4 = FUN_007a5818(*(u` |
| kernel.c | 18460 | `*(undefined1 *)(iVar22 + 0x1ce) = *(undefined1 *)(iVar12 + 0x20e); \| *(undefined4 *)(iVar22 + 0x1bc) = *(undefined4 *)(iVar12 + 0x1fc); \| *(` |
| kernel.c | 26454 | `} \| iVar7 = *(int *)(param_1 + 8); \| FUN_0095cd6e(iVar7 + 0xc,1,0x6e3,0x1ff); \| uVar6 = FUN_0095cd6e(iVar7 + 0x14,1,0x6e3,0x200); \| return u` |
| kernel.c | 29291 | `} \| else { \| FUN_0010626c(); \| FUN_0010686a((*(short *)(param_1 + 8) - *(short *)(param_1 + 0xe)) + 0x2000); \| FUN_00033348(); \| } \| iVar3 =` |
| kernel.c | 29389 | `} \| else { \| FUN_0010626c(); \| FUN_0010686a((*(short *)(param_1 + 8) - *(short *)(param_1 + 0xe)) + 0x2000); \| FUN_00033348(); \| } \| iVar10 ` |
| kernel.c | 32001 | `iVar2 = DAT_00039698 + 4; \| if (param_1 == 700) { \| uVar1 = FUN_001f78bc(iVar2); \| uVar1 = uVar1 & 0xffffc3ff \| 0x2000; \| } \| else if (param` |
| kernel.c | 32377 | `local_60[iVar4] = uVar3 & 0xffffff \| (uint)bVar1 << 0x18; \| iVar4 = iVar4 + 1; \| } while (iVar4 < 8); \| iVar4 = *(int *)(param_2 + 0x30) + p` |
| kernel.c | 32384 | `FUN_006fdf4a(s_cert_empty_0003b2cc); \| } \| else { \| FUN_0037dde0(param_2 + 0x200,*(undefined4 *)(param_2 + 0x30),auStack_40); \| uVar5 = FUN_` |
| kernel.c | 32460 | `iVar5 = FUN_001b51c6(DAT_0003b2d8,piVar4); \| if (iVar5 == 0) { \| if ((*piVar4 == s_DHTBsecure_efuse_cmd_boot0_inval_0003b730._0_4_) && (piVa` |
| kernel.c | 33312 | `for (uVar6 = 0; iVar4 = DAT_0003dae4, uVar3 = DAT_0003dae0, iVar2 = DAT_0003dadc, uVar6 < param_2; \| uVar6 = uVar6 + 1) { \| *(int *)(iVar1 +` |
| kernel.c | 34587 | `} \| else { \| uVar2 = FUN_001f78bc(_DAT_0003f094); \| uVar2 = uVar2 \| 0x200; \| } \| } \| else if (param_1 == 2) {` |
| kernel.c | 34717 | `piVar1 = DAT_0097f64c; \| iVar4 = *DAT_0097f62c; \| if (iVar3 == 1) { \| *(undefined4 *)(iVar4 + 0x20044) = 1; \| if ((*DAT_0097f630 == 1) \|\| (*` |
| kernel.c | 34719 | `if (iVar3 == 1) { \| *(undefined4 *)(iVar4 + 0x20044) = 1; \| if ((*DAT_0097f630 == 1) \|\| (*DAT_0097f634 == '\0')) { \| *(undefined4 *)(iVar4 +` |
| kernel.c | 34722 | `*(undefined4 *)(iVar4 + 0x20048) = 0xbb; \| } \| else if (*DAT_0097f634 == '\x01') { \| *(undefined4 *)(iVar4 + 0x20048) = 0xaa; \| } \| FUN_008b` |
| kernel.c | 34732 | `*(undefined4 *)(iVar4 + 0xb8000) = 1; \| FUN_008b5694(1); \| thunk_FUN_0087a726(0); \| uVar5 = *piVar1 + 0x20080; \| } \| thunk_FUN_0087a716(uVar` |
| kernel.c | 34751 | ` \| iVar1 = DAT_0003f0bc; \| if (param_1 != 0) { \| *(undefined4 *)(DAT_0003f0bc + 0xcc) = 0x20000; \| *(undefined4 *)(iVar1 + 0x44) = 0x2000000` |
| kernel.c | 34752 | `iVar1 = DAT_0003f0bc; \| if (param_1 != 0) { \| *(undefined4 *)(DAT_0003f0bc + 0xcc) = 0x20000; \| *(undefined4 *)(iVar1 + 0x44) = 0x2000000; \|` |
| kernel.c | 34755 | `*(undefined4 *)(iVar1 + 0x44) = 0x2000000; \| *(undefined4 *)(iVar1 + 0x44) = 0x1000000; \| *(undefined4 *)(iVar1 + 0x34) = 0x8000000; \| *(und` |
| kernel.c | 34949 | `uVar5 = 3; \| } \| else { \| FUN_006fdf4a(s_LCDC_IRQ_num_is_wrong__irq_numbe_0003f580); \| } \| uVar2 = FUN_000402d0(uVar5); \| if (1 < uVar2) {` |
| kernel.c | 34953 | `} \| uVar2 = FUN_000402d0(uVar5); \| if (1 < uVar2) { \| uVar5 = FUN_006fd49c(s__GetIntStatus__The_interrupt_irq_0003f5a8,uVar5); \| thunk_FUN_0` |
| kernel.c | 34954 | `uVar2 = FUN_000402d0(uVar5); \| if (1 < uVar2) { \| uVar5 = FUN_006fd49c(s__GetIntStatus__The_interrupt_irq_0003f5a8,uVar5); \| thunk_FUN_006fb` |
| kernel.c | 34998 | `uVar3 = FUN_000402d0(param_1); \| if (1 < uVar3) { \| uVar4 = FUN_006fd49c(DAT_0003fa08,param_1); \| thunk_FUN_006fb59e(s__uint32__LCDC_IRQ_NUM` |
| kernel.c | 35040 | `uVar3 = FUN_000402d0(3); \| if (1 < uVar3) { \| uVar4 = FUN_006fd49c(DAT_0003fa08,3); \| thunk_FUN_006fb59e(s__uint32__LCDC_IRQ_NUM_>_irq_num_0` |
| kernel.c | 35074 | `puVar1 = _DAT_0003faa8; \| uVar2 = FUN_000402d0(); \| if (1 < uVar2) { \| uVar3 = FUN_006fd49c(s_ISP_VSP_DRV__The_interrupt_irq_t_0003faab + 1,` |
| kernel.c | 35075 | `uVar2 = FUN_000402d0(); \| if (1 < uVar2) { \| uVar3 = FUN_006fd49c(s_ISP_VSP_DRV__The_interrupt_irq_t_0003faab + 1,param_1); \| thunk_FUN_006f` |
| kernel.c | 35102 | `puVar5 = _DAT_0003faa8 + 1; \| uVar2 = FUN_000402d0(); \| if (1 < uVar2) { \| uVar3 = FUN_006fd49c(s_ISP_VSP_DRV__The_interrupt_irq_t_0003faab ` |
| kernel.c | 35103 | `uVar2 = FUN_000402d0(); \| if (1 < uVar2) { \| uVar3 = FUN_006fd49c(s_ISP_VSP_DRV__The_interrupt_irq_t_0003faab + 1,param_1); \| thunk_FUN_006f` |
| kernel.c | 36144 | `uVar1 = 1; \| } \| else { \| FUN_006fdf4a(s_LCDC_IRQ_type_is_wrong__irq_type_0004032b + 1,param_1); \| } \| return uVar1; \| }` |
| kernel.c | 37365 | `void FUN_00042fd8(undefined4 param_1) \|  \| { \| FUN_00042fa4(param_1,*(undefined4 *)(DAT_000433cc + 8),0x2000); \| return; \| } \| ` |
| kernel.c | 37398 | `void FUN_00043000(undefined4 param_1) \|  \| { \| FUN_00042fa4(param_1,*(undefined4 *)(DAT_000433cc + 8),0x200); \| return; \| } \| ` |
| kernel.c | 37495 | `void FUN_00043182(undefined4 param_1) \|  \| { \| FUN_00042fa4(param_1,*(int *)(DAT_000433cc + 8) + 0x18,0x200); \| return; \| } \| ` |
| kernel.c | 37732 | `int iVar3; \|  \| iVar3 = DAT_00043c08; \| FUN_00042fa4(0,*(int *)(DAT_00043c08 + 8) + 0x24,0x2000); \| FUN_00042fa4(0,*(int *)(iVar3 + 8) + 0x2` |
| kernel.c | 37734 | `iVar3 = DAT_00043c08; \| FUN_00042fa4(0,*(int *)(DAT_00043c08 + 8) + 0x24,0x2000); \| FUN_00042fa4(0,*(int *)(iVar3 + 8) + 0x24,1); \| FUN_0004` |
| kernel.c | 37770 | `iVar1 = DAT_00043c08; \| FUN_001f78e6(*(int *)(DAT_00043c08 + 8) + 0x24,0); \| FUN_000434ca(0); \| FUN_00042fa4(0,*(int *)(iVar1 + 8) + 0x28,0x` |
| kernel.c | 37777 | `FUN_00043840(); \| FUN_006f7a2a(5); \| FUN_00043490(1); \| FUN_00042fa4(1,*(int *)(iVar1 + 8) + 100,0x2000); \| FUN_00042fa4(1,*(int *)(iVar1 + ` |
| kernel.c | 37854 | `FUN_006f7a2a(2); \| uVar3 = FUN_001f78bc(*(int *)(iVar1 + 8) + 100); \| FUN_006fdf4a(s_Check_charging_status__start_cha_00043ddc,uVar3); \| FUN` |
| kernel.c | 37934 | `iVar1 = DAT_00043c08; \| if (param_1 == 0) { \| FUN_00042fa4(0,*(int *)(DAT_00043c08 + 8) + 100,0x8000); \| FUN_00042fa4(0,*(int *)(iVar1 + 8) ` |
| kernel.c | 47334 | `uVar3 = (int)(local_28 & 0xffff) / iVar1; \| if (param_1[3] == 1) { \| FUN_006fdf4a(s_hch_JINF_JPEG_TYPE_PROGRESSIVE_000564a8); \| if (uVar3 < ` |
| kernel.c | 47346 | `} \| else { \| if (0x13f < uVar3) { \| if (uVar3 < 0x200) { \| return 0; \| } \| goto LAB_00056488;` |
| kernel.c | 47387 | `iVar3 = 0; \| do { \| if (param_1[iVar3] != *(char *)(iVar6 + iVar3)) { \| *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) \| 0x20000; \| } \| p` |
| kernel.c | 47405 | `FUN_006fe074(0x10,iVar6,&DAT_00056970); \| } \| LAB_00056588: \| *(undefined4 *)(iVar2 + 0x6c) = 0x2000; \| uVar4 = FUN_000764f8(iVar2); \| *(und` |
| kernel.c | 50510 | `undefined8 uVar16; \| ulonglong uVar17; \|  \| iVar2 = FUN_0005b97c(0x200,3,param_5); \| iVar3 = FUN_0005b97c(0x200,3,param_5); \| iVar4 = FUN_00` |
| kernel.c | 50511 | `ulonglong uVar17; \|  \| iVar2 = FUN_0005b97c(0x200,3,param_5); \| iVar3 = FUN_0005b97c(0x200,3,param_5); \| iVar4 = FUN_0005b97c(0x80,2,param_5` |
| kernel.c | 51647 | `uVar2 = (uint)*(ushort *)(param_1 + 0x134); \| uVar1 = 1; \| if (*(int *)(param_1 + 0x2c8) == 1) { \| if (uVar2 * 0x20000000 == 0) goto LAB_000` |
| kernel.c | 51649 | `if (*(int *)(param_1 + 0x2c8) == 1) { \| if (uVar2 * 0x20000000 == 0) goto LAB_0005d21c; \| } \| else if (((uVar2 * 0x20000000 == 0) \|\| (uVar2 ` |
| kernel.c | 54678 | `} \| } \| iVar9 = FUN_00074910(uVar6,&local_34,&local_44); \| _DAT_20c00028 = _DAT_20c00028 \| 0x200; \| FUN_0005db2e(); \| param_1[2] = local_2c;` |
| kernel.c | 55809 | `goto LAB_00061eee; \| } \| if (param_2 == 3) { \| uVar2 = *(uint *)(param_1 + 0x2c) \| 0x200000; \| goto LAB_00061eee; \| } \| FUN_006fe074(0x10,DA` |
| kernel.c | 57321 | `if (*(int *)(param_1 + 0x2c) == 0x400000) { \| FUN_006fe074(0x10,DAT_000637f4 + -7,s_NULL_row_buffer_for_row__ld__pas_000637f8 + 0x24); \| } \|` |
| kernel.c | 63165 | ` \| iVar3 = param_1 >> 0x19; \| iVar1 = (int)((ulonglong) \| ((longlong)((param_1 + iVar3 * -0x2000000 + -0x1000000) * 8) * \| (longlong)DAT_000` |
| kernel.c | 63194 | `iVar3 = param_1 >> 0x19; \| uVar4 = *(uint *)(DAT_00069db4 + iVar3 * 8) ^ param_2 >> 0x1f; \| iVar1 = (int)((ulonglong) \| ((longlong)((param_1` |
| kernel.c | 63465 | `if (param_4 == -1) { \| if (*(int *)(param_2 + 0x9c) != 0) { \| for (iVar2 = 0; iVar2 < *(int *)(param_2 + 0x9c); iVar2 = iVar2 + 1) { \| FUN_0` |
| kernel.c | 64943 | `} \| else { \| FUN_00069ee6(param_1,param_2,8,0); \| iVar1 = FUN_00076558(param_1,0x200); \| *(int *)(param_1 + 0x198) = iVar1; \| if (iVar1 != 0` |
| kernel.c | 65393 | `if (((param_1 != 0) && (param_2 != 0)) && (-1 < (int)((uint)*(ushort *)(param_1 + 0x24) << 0x16))) \| { \| FUN_006fd7c8(param_2 + 0x38,param_3` |
| kernel.c | 65409 | ` \| if ((param_1 != 0) && (param_2 != 0)) { \| if (param_3 != 0) { \| FUN_00069ee6(param_1,param_2,0x2000,0); \| uVar1 = FUN_000764f8(param_1,0x` |
| kernel.c | 65414 | `*(undefined4 *)(param_2 + 0x48) = uVar1; \| *(undefined4 *)(param_1 + 300) = uVar1; \| FUN_006fd7c8(*(undefined4 *)(param_2 + 0x48),param_3,pa` |
| kernel.c | 65461 | `} \| *piVar1 = iVar2; \| *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0xb4) + param_4; \| *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) \| 0x` |
| kernel.c | 65510 | `} \| *piVar1 = iVar2; \| *(int *)(param_2 + 0x9c) = *(int *)(param_2 + 0x9c) + param_4; \| *(uint *)(param_2 + 0x94) = *(uint *)(param_2 + 0x94` |
| kernel.c | 67907 | ` \| { \| if (param_1 != 0) { \| *(undefined4 *)(DAT_00070814 + 4) = 0x2001; \| *(undefined4 *)(DAT_00070818 + 4) = 0x2001; \| return 0; \| }` |
| kernel.c | 67908 | `{ \| if (param_1 != 0) { \| *(undefined4 *)(DAT_00070814 + 4) = 0x2001; \| *(undefined4 *)(DAT_00070818 + 4) = 0x2001; \| return 0; \| } \| return` |
| kernel.c | 67939 | `bool bVar16; \|  \| iVar1 = DAT_000707ec; \| uVar6 = 0x200; \| puVar2 = (uint *)(DAT_000707ec + 0xbc); \| uVar11 = (uint)puVar2 & 3; \| uVar12 = u` |
| kernel.c | 68838 | `FUN_00070bfe(); \| goto LAB_00071190; \| } \| param_1 = 0x20000; \| } \| goto LAB_00071174; \| }` |
| kernel.c | 71152 | `puVar8 = DAT_000744d8 + -2; \| *puVar8 = ((uint)*(byte *)((int)param_1 + 0x107) \| (uint)*(byte *)((int)param_1 + 0x106) << 1) \| << 0x1e \| par` |
| kernel.c | 74746 | `do { \| *(undefined1 *)(iVar1 + 0x180 + iVar2) = 0xff; \| iVar2 = iVar2 + 1; \| } while (iVar2 < 0x200); \| FUN_006f1460(iVar1 + 0x380,0x180); \|` |
| kernel.c | 76205 | `uVar9 = 0; \| do { \| uVar10 = uVar9 + 1 & 0xffff; \| *(uint *)(puVar1 + uVar9 * 6 + 4) = iVar5 + uVar9 * 0x200; \| *(undefined4 *)(puVar1 + uVa` |
| kernel.c | 76206 | `do { \| uVar10 = uVar9 + 1 & 0xffff; \| *(uint *)(puVar1 + uVar9 * 6 + 4) = iVar5 + uVar9 * 0x200; \| *(undefined4 *)(puVar1 + uVar9 * 6 + 6) =` |
| kernel.c | 78567 | `*(ushort *)(iVar3 + 0x20) >> *(sbyte *)(iVar3 + 0x4c) & 0xfff \| \| (*(ushort *)(iVar3 + 0x22) >> *(sbyte *)(iVar3 + 0x4c) & 0xfff) << 0x10; \|` |
| kernel.c | 78711 | `case 2: \| case 3: \| case 4: \| uVar8 = 0x2000; \| break; \| case 6: \| uVar8 = 0x8000;` |
| kernel.c | 88426 | `FUN_0006fd9a(*puVar1); \| FUN_000938f8(); \| FUN_0008e96c(0,6,0); \| FUN_006f5aec(*(undefined4 *)(DAT_00093eec + 0xc),0x200,3,&uStack_c,3000); ` |
| kernel.c | 91965 | `FUN_006fe9dc(iVar3 + 0x448,0xc0); \| uVar9 = 0; \| do { \| FUN_006fe9dc(local_6a8,0x200); \| FUN_006fe9dc(local_1a8,0x80); \| local_128[0] = 0; \|` |
| kernel.c | 91983 | `local_128[0xd] = 0; \| local_128[0xe] = 0; \| local_128[0xf] = 0; \| FUN_006fe9dc(local_4a8,0x200); \| FUN_006fe9dc(local_e8,0x80); \| local_68[0` |
| kernel.c | 92344 | `uVar5 = thunk_EXT_FUN_883b915e(local_6a8,0x22,0); \| iVar10 = iVar3 + uVar9 * 0x18; \| *(undefined4 *)(iVar10 + 0x448) = uVar5; \| iVar4 = FUN_` |
| kernel.c | 92352 | `} \| uVar5 = thunk_EXT_FUN_883b915e(local_4a8,0x22,0); \| *(undefined4 *)(iVar10 + 0x44c) = uVar5; \| iVar4 = FUN_006f9a74(0x2000,s_asm_main_c_` |
| kernel.c | 92668 | `FUN_006fdf4a(s_voice_process_stop__voice_proces_000a2410); \| local_14 = 0; \| uVar2 = FUN_0070bbba(iVar3 + 0x3a8); \| FUN_006f5a6c(uVar2,0x200` |
| kernel.c | 96360 | `(FUN_000aaab4(param_2,puVar2,0x10000), uVar3 != 8)) && (-1 < (int)(param_3 << 0x1e))) { \| return; \| } \| uVar3 = 0x20000; \| break; \| case 2: ` |
| kernel.c | 96370 | `uVar3 = 0x8000; \| break; \| case 3: \| uVar3 = 0x200; \| puVar2 = DAT_000aa534; \| break; \| case 4:` |
| kernel.c | 96475 | `(FUN_000aaab4(param_1,iVar1,0x100), (param_2 & 0xf) != 8)) && (-1 < (int)(param_2 << 0x1e))) { \| return; \| } \| FUN_000aaab4(param_1,iVar1,0x` |
| kernel.c | 96490 | ` \| iVar1 = DAT_000aa534 + 0xb0; \| if (((((param_2 & 0xf) != 8) && ((param_2 & 1) == 0)) \|\| \| (FUN_000aaab4(param_1,iVar1,0x2000), (param_2 &` |
| kernel.c | 97436 | `unaff_r4[1] = (short)iVar4; \| sVar3 = (short)param_1 - (short)param_2; \| if (param_1 < param_2) { \| sVar3 = sVar3 + 0x2000; \| } \| unaff_r4[0` |
| kernel.c | 97538 | `*(ushort *)(unaff_r4 + 1) = *(ushort *)(*piVar3 + uVar8 * 0x74 + 10) >> 8; \| sVar4 = (short)param_1 - (short)param_2; \| if (param_1 < param_` |
| kernel.c | 97632 | `unaff_r4[2] = *(ushort *)(*piVar3 + iVar5 * 0x74 + 10) >> 8; \| sVar4 = (short)param_1 - (short)param_2; \| if (param_1 < param_2) { \| sVar4 =` |
| kernel.c | 97702 | `uint FUN_000acba4(int param_1,int param_2) \|  \| { \| return (param_1 + param_2 + -1) % 0x2000 & 0xffff; \| } \|  \| ` |
| kernel.c | 104469 | `int iVar1; \| int iVar2; \|  \| iVar1 = param_1[1] * 0x2000 + (*param_1 >> 0x13); \| iVar2 = param_2[1] * 0x2000 + (*param_2 >> 0x13); \| if ((iV` |
| kernel.c | 104470 | `int iVar2; \|  \| iVar1 = param_1[1] * 0x2000 + (*param_1 >> 0x13); \| iVar2 = param_2[1] * 0x2000 + (*param_2 >> 0x13); \| if ((iVar1 <= iVar2)` |
| kernel.c | 104842 | `else { \| iVar5 = iVar5 + ((uint)piVar1[2] >> 0x13); \| if (iVar5 < 0) { \| uVar6 = iVar5 + 0x2000; \| } \| else { \| uVar6 = iVar5 % 0x2000;` |
| kernel.c | 104845 | `uVar6 = iVar5 + 0x2000; \| } \| else { \| uVar6 = iVar5 % 0x2000; \| } \| *param_2 = uVar4 & 7 \| uVar7 \| uVar6 << 0x13; \| iVar5 = iVar5 - (uVar6 ` |
| kernel.c | 105742 | `int iVar1; \| int iVar2; \|  \| iVar1 = param_1[1] * 0x2000 + (*param_1 >> 0x13); \| iVar2 = param_2[1] * 0x2000 + (*param_2 >> 0x13); \| if ((iV` |
| kernel.c | 105743 | `int iVar2; \|  \| iVar1 = param_1[1] * 0x2000 + (*param_1 >> 0x13); \| iVar2 = param_2[1] * 0x2000 + (*param_2 >> 0x13); \| if ((iVar1 <= iVar2)` |
| kernel.c | 113327 | `return 2; \| } \| } \| else if (((param_1 == 0x80) \|\| (param_1 == 0x100)) \|\| (param_1 == 0x200)) goto LAB_000c378e; \| uVar1 = FUN_006fd49c(s_w_` |
| kernel.c | 137208 | `local_49 = (undefined1)local_30[0]; \| local_44 = uVar2; \| iVar3 = FUN_001c5c32(local_4c); \| local_30[0] = (undefined2)((iVar3 + 7U) * 0x2000` |
| kernel.c | 138479 | `} \| iVar4 = *(int *)(param_3 + 0x184); \| if (iVar4 == 0) { \| cVar2 = ((uint)*(byte *)(param_2 + (uint)local_24[0]) * -0x20000000 != 0) + \| (` |
| kernel.c | 138628 | `} \| iVar3 = *(int *)(param_3 + 0x19c); \| if (iVar3 == 0) { \| bVar2 = ((uint)param_2[local_1c[0]] * -0x20000000 != 0) + \| (char)((uint)param_` |
| kernel.c | 139152 | `break; \| case 5: \| local_18 = param_4 & 0xffffff00; \| sVar2 = (ushort)(uVar3 * -0x20000000 != 0) + (short)(uVar3 * 7 >> 3); \| local_1c = CON` |
| kernel.c | 141454 | `*param_4 = 0xa0; \| } \| thunk_EXT_FUN_88075462(param_4 + 1,*param_4,param_5 + *param_5 + 1,&local_28); \| *param_5 = ((uint)*param_4 * -0x2000` |
| kernel.c | 141680 | `} \| uVar5 = (uint)*(byte *)((int)param_2 + uVar4 + 2); \| if (*(int *)(param_3 + 0x184) == 0) { \| if (((int)((uint)(uVar5 * -0x20000000 != 0)` |
| kernel.c | 143562 | `do { \| if ((*(ushort *)(iVar8 + uVar13 * 2) == uVar3) && \| (iVar12 = iVar8 + uVar13 * 2, *(ushort *)(iVar12 + 0x80) == uVar4)) { \| *(ushort ` |
| kernel.c | 146364 | `} \| } \| else { \| if (param_2 == 0x200) { \| uVar3 = 0x80; \| goto LAB_000f158e; \| }` |
| kernel.c | 146373 | `FUN_0015121c(1,0x400,iStack_2c,local_28); \| return; \| } \| if ((param_2 != 0x1000) && (param_2 != 0x2000)) { \| return; \| } \| }` |
| kernel.c | 148012 | `} \| FUN_006f3e8a(iVar2 + 0x94,param_3,uVar1); \| iVar3 = *(int *)(iVar4 + 0x28); \| uVar5 = 0x200; \| pcVar7 = (char *)0x30ad; \| break; \| defau` |
| kernel.c | 152178 | `if ('\x02' < *DAT_000fddd4) { \| FUN_006f4b10(0x10,DAT_000fddd8 + -0xc0,DAT_000fdde0,param_1); \| } \| iVar3 = 0x2000; \| if (param_1 == 0x40) {` |
| kernel.c | 152202 | `goto LAB_000fdacc; \| } \| if (param_1 == 0x80) goto LAB_000fdacc; \| if ((param_1 == 0x1000) \|\| (param_1 == 0x2000)) goto LAB_000fdabe; \| } \| ` |
| kernel.c | 152632 | `FUN_000f1372(4); \| } \| FUN_0011af08(cVar1); \| FUN_000f1240(0x2000); \| } \| if ((int)(uVar2 << 0x13) < 0) { \| if (cVar1 != '\0') {` |
| kernel.c | 152652 | `if (cVar1 != '\0') { \| FUN_000f1372(0x80); \| } \| FUN_000f1240(0x200); \| } \| if ((int)(uVar2 << 0x15) < 0) { \| if (cVar1 != '\0') {` |
| kernel.c | 155121 | `iVar6 = FUN_00620bba(); \| pbVar7 = (byte *)FUN_006216a4(1); \| *(ushort *)(iVar5 + 0xe) = (ushort)*pbVar7 \| (ushort)(iVar6 << 8); \| puVar2[-0` |
| kernel.c | 157220 | `if (iVar8 == 0) { \| uVar3 = uVar3 - uVar1; \| if (uVar7 < uVar6) { \| uVar3 = uVar3 + 0x2000; \| } \| iVar8 = (uVar10 - uVar9) + (uint)uVar3 * 0` |
| kernel.c | 157353 | `if (*(ushort *)(DAT_00107df4 + 0x53e) != 0) { \| uVar1 = FUN_00107b44(param_1,param_2,(uint)*(ushort *)(DAT_00107df4 + 0x53c), \| (int)((uint)` |
| kernel.c | 157491 | `FUN_001079dc(&local_38); \| if ('\x02' < *pcVar2) { \| FUN_006f4b10(3,DAT_00108234 + -0x2c,&DAT_00107e14,param_1, \| (int)(param_1 + (param_2 -` |
| kernel.c | 160161 | `*(undefined4 *)(iVar6 + 0x9c) = 0; \| goto LAB_0010b264; \| } \| uVar8 = 0x20000000; \| } \| else { \| uVar8 = *(uint *)(iVar7 + 0x11f4);` |
| kernel.c | 160322 | `} \| else { \| uVar3 = 0x1000; \| if ((param_1 != 0x1000) && (uVar3 = 0x2000, param_1 != 0x2000)) { \| return; \| } \| pcVar1 = s________________S` |
| kernel.c | 165650 | `(iVar5 = FUN_006eb68c(1), piVar1 = DAT_0011334c, iVar5 != 0)) && \| ((*(int *)(*DAT_0011334c + 0x60) == 0x10 && (*(int *)(DAT_0011334c[1] + 0` |
| kernel.c | 168817 | `int local_220; \| undefined1 auStack_21c [516]; \|  \| FUN_006fe9dc(auStack_21c,0x200); \| iVar6 = DAT_00118624; \| *(undefined4 *)(DAT_00118624 ` |
| kernel.c | 170956 | `if ((7 < param_4) \|\| (param_3 == 0)) { \| FUN_006fb8b0(s__offset_bits_<_8)&&(0____data_le_0011e118,DAT_0011e114,0x621); \| } \| if (param_3 * -` |
| kernel.c | 174555 | `*(undefined4 *)(param_1 + 200) = 0x3000; \| *(undefined4 *)(param_1 + 0xcc) = 0x1800; \| *(undefined4 *)(param_1 + 0xd0) = 0xc00; \| *(undefine` |
| kernel.c | 174556 | `*(undefined4 *)(param_1 + 0xcc) = 0x1800; \| *(undefined4 *)(param_1 + 0xd0) = 0xc00; \| *(undefined2 *)(param_1 + 0x86) = 0x2000; \| *(undefin` |
| kernel.c | 185717 | `local_428 = (code **)local_424; \| piVar13 = (int *)FUN_00269512(ppcVar10[3],local_94,auStack_414,0xff); \| if (piVar13 == (int *)0x0) { \| FUN` |
| kernel.c | 185725 | `if (piVar13[7] == 1) { \| iVar6 = FUN_001dd356(ppcVar10,piVar21,auStack_414,auStack_194); \| if (iVar6 == -1) { \| FUN_001ef458(0x200,0,piVar8)` |
| kernel.c | 185846 | `FUN_002172b4(ppcVar10[1]); \| ppcVar10[1] = Reset; \| } \| FUN_001ef458(0x200,local_428,piVar8); \| iVar6 = FUN_002127fe(*puVar11); \| if (((iVar` |
| kernel.c | 185881 | `local_428 = &local_30; \| local_420 = (code **)0x7f; \| FUN_002695d2(local_40,auStack_414,local_34,0x80); \| iVar6 = 0x200; \| local_418 = local` |
| kernel.c | 185922 | `if (piVar8[0x44] == 0) { \| return (int *)0xffffffff; \| } \| local_428 = (code **)0x200; \| iVar6 = FUN_001e1076(0,*(undefined *)((int)piVar8 +` |
| kernel.c | 186004 | `else { \| local_424 = Reset; \| } \| local_428 = (code **)0x200; \| iVar6 = FUN_001e0a42(piVar8 + 0xea,piVar8 + 0xed,local_4c,ppcVar10 + 4); \| p` |
| kernel.c | 186007 | `local_428 = (code **)0x200; \| iVar6 = FUN_001e0a42(piVar8 + 0xea,piVar8 + 0xed,local_4c,ppcVar10 + 4); \| piVar8[0xc6] = iVar6; \| FUN_006f358` |
| kernel.c | 186045 | `FUN_001fab3c(piVar21,piVar8); \| } \| else { \| FUN_001ef458(0x200,s_SMS_FAILED__CODE_600_REASON_Busy_001de233 + 1,piVar8); \| } \| FUN_001dd030(` |
| kernel.c | 186053 | `if (iVar6 != 9) { \| return (int *)0x0; \| } \| FUN_001ef458(0x200,s_SMS_FAILED__CODE_99_REASON_Trans_001de260,piVar8); \| LAB_001ddf1a: \| if (p` |
| kernel.c | 187239 | `} \| uVar7 = 0; \| if (*(char *)(iVar3 + 0x26) != '\0') { \| uVar7 = 0x200000; \| } \| if (*(char *)(iVar3 + 0x27) != '\0') { \| uVar7 = uVar7 \| 0` |
| kernel.c | 187250 | `param_1[0x17] = uVar7; \| uVar7 = 0; \| if (*(char *)(iVar3 + 0x29) != '\0') { \| uVar7 = 0x2000000; \| } \| if (*(char *)(iVar3 + 0x2a) != '\0')` |
| kernel.c | 188677 | `uVar1 = uVar1 \| 0x10; \| } \| if (param_1[2] != '\0') { \| uVar1 = uVar1 \| 0x200; \| } \| if (param_1[8] != '\0') { \| uVar1 = uVar1 \| 1;` |
| kernel.c | 188707 | `uVar1 = uVar1 \| 0x1000; \| } \| if (param_1[0xd] != '\0') { \| uVar1 = uVar1 \| 0x2000; \| } \| if (param_1[0xe] != '\0') { \| uVar1 = uVar1 \| 0x40` |
| kernel.c | 212602 | `uVar1 = uVar1 & 0x800000; \| } \| else if (param_1 == 2) { \| uVar1 = uVar1 & 0x2000000; \| } \| else { \| uVar1 = 0;` |
| kernel.c | 213180 | `iVar19 = *(int *)(iVar10 + uVar14 * 4); \| *(uint *)(iVar19 + 0x18) = *(uint *)(iVar19 + 0x18) \| 0x400; \| iVar19 = *(int *)(iVar10 + uVar14 *` |
| kernel.c | 213325 | `iVar3 = *(int *)(iVar6 + uVar7 * 4); \| *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) \| 0x400; \| iVar3 = *(int *)(iVar6 + uVar7 * 4); \| *` |
| kernel.c | 214524 | `*(undefined4 *)(DAT_0016dbec + 0x86) = 0x71000000; \| } \| if (param_1 == 0) { \| uVar3 = 0x20000; \| } \| else if (param_1 == 1) { \| uVar3 = 0x4` |
| kernel.c | 215280 | `if ('\x02' < *pcVar4) { \| FUN_006f4b10(2,DAT_0016e964 + 7,DAT_0016e970,param_1,uVar15); \| } \| if (*(short *)(iVar7 + 0x1a) != 0x200) goto LA` |
| kernel.c | 216276 | `else { \| if (iVar3 == DAT_00171574) { \| iVar7 = 2; \| uVar2 = 0x200; \| goto LAB_00171256; \| } \| uVar2 = 0x300;` |
| kernel.c | 216304 | `*(undefined4 *)(*(int *)(iVar4 + uVar6 * 4) + 0xc) = 0; \| *(undefined4 *)(*(int *)(iVar4 + uVar6 * 4) + 0x10) = 0; \| *(undefined4 *)(*(int *` |
| kernel.c | 230609 | `local_78 = param_1; \| if (param_2 == 0x4b) { \| FUN_006fe9dc(&local_74,0x60); \| local_17f = *(undefined1 *)(*(int *)(iVar1 + param_1 * 4) + 0` |
| kernel.c | 234565 | `{ \| undefined4 uVar1; \|  \| if (0x200 < *param_1) { \| FUN_006f4a98(10,DAT_00196264 + 0x2c,param_3,param_4,param_3,param_4); \| return 0; \| }` |
| kernel.c | 236726 | `*(undefined4 *)(iVar2 + 8) = param_2; \| *(short *)(iVar2 + 0xc) = (short)param_3; \| if (param_4 == 0) { \| uVar1 = 0x200000; \| } \| else { \| F` |
| kernel.c | 239965 | `*(short *)(iVar4 + 8) = *(short *)(iVar4 + 8) + 1; \| } \| } \| FUN_0018f6a8(param_1,*(undefined2 *)(*(int *)(iVar2 + param_1 * 4) + 0x200c),uV` |
| kernel.c | 240002 | `uVar6 = uVar3; \| } \| } \| FUN_0018f7de(param_1,*(undefined2 *)(*(int *)(iVar2 + param_1 * 4) + 0x200c),1,0); \| goto LAB_001a515a; \| } \| bVar1` |
| kernel.c | 240043 | `*(short *)(iVar4 + 0x14) = *(short *)(iVar4 + 0x14) + 1; \| } \| } \| FUN_0018f81a(param_1,*(undefined2 *)(*(int *)(iVar2 + param_1 * 4) + 0x20` |
| kernel.c | 240072 | `*(short *)(iVar4 + 0x50) = *(short *)(iVar4 + 0x50) + 1; \| } \| } \| FUN_0018f7fc(param_1,*(undefined2 *)(*(int *)(iVar2 + param_1 * 4) + 0x20` |
| kernel.c | 240122 | `*(short *)(iVar4 + 0x50) = *(short *)(iVar4 + 0x50) + -1; \| } \| } \| FUN_0018f7fc(param_1,*(undefined2 *)(*(int *)(iVar3 + param_1 * 4) + 0x2` |
| kernel.c | 240130 | `if (bVar1 == 0x6d) { \| iVar5 = *(int *)(DAT_001a570c + param_1 * 4); \| *(short *)(iVar5 + 0x2c) = *(short *)(iVar5 + 0x2c) + -1; \| FUN_0018f` |
| kernel.c | 240148 | `*(short *)(iVar4 + 0x14) = *(short *)(iVar4 + 0x14) + -1; \| } \| } \| FUN_0018f81a(param_1,*(undefined2 *)(*(int *)(iVar3 + param_1 * 4) + 0x2` |
| kernel.c | 240171 | `*(short *)(iVar4 + 8) = *(short *)(iVar4 + 8) + -1; \| } \| } \| FUN_0018f6a8(param_1,*(undefined2 *)(*(int *)(iVar3 + param_1 * 4) + 0x200c),i` |
| kernel.c | 245821 | ` \| { \| FUN_006f4d8e(); \| *DAT_001b33f0 = 0x200; \| *(uint *)(DAT_001b33f4 + 0x38) = *(uint *)(DAT_001b33f4 + 0x38) \| 1; \| *DAT_001b33f8 = 1; ` |
| kernel.c | 245824 | `*DAT_001b33f0 = 0x200; \| *(uint *)(DAT_001b33f4 + 0x38) = *(uint *)(DAT_001b33f4 + 0x38) \| 1; \| *DAT_001b33f8 = 1; \| *DAT_001b33fc = 0x200; ` |
| kernel.c | 245837 | ` \| { \| FUN_006f4d8e(); \| *DAT_001b33f0 = 0x200; \| *(uint *)(DAT_001b33f4 + 0x38) = *(uint *)(DAT_001b33f4 + 0x38) & 0xfffffffe; \| *DAT_001b3` |
| kernel.c | 245840 | `*DAT_001b33f0 = 0x200; \| *(uint *)(DAT_001b33f4 + 0x38) = *(uint *)(DAT_001b33f4 + 0x38) & 0xfffffffe; \| *DAT_001b33f8 = 0; \| *DAT_001b33fc ` |
| kernel.c | 245920 | `undefined4 uVar4; \|  \| FUN_006f4d8e(); \| *DAT_001b33f0 = 0x200; \| iVar2 = DAT_001b33f4; \| *(undefined4 *)(DAT_001b33f4 + 0xb0) = 0x100d; \| u` |
| kernel.c | 245935 | `*(uint *)(iVar2 + 0x6c) = uVar1; \| *(undefined4 *)(iVar2 + 0x21c) = param_1; \| *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) \| 2; \| *DAT` |
| kernel.c | 245977 | `uVar1 = 0x100; \| } \| if ((int)(param_1 << 0x1e) < 0) { \| uVar1 = uVar1 \| 0x200; \| } \| if ((int)(param_1 << 0x1d) < 0) { \| uVar1 = uVar1 \| 0x` |
| kernel.c | 246208 | ` \| { \| if (param_1 == 0xc) { \| return 0x2000; \| } \| if (param_1 < 0xd) { \| if (param_1 != 1) {` |
| kernel.c | 246290 | `local_58 = 0xc; \| } \| if (*(char *)(param_1 + 0x1f) != '\0') { \| local_58 = local_58 \| 0x2000; \| } \| bVar9 = param_6 == 0; \| do {` |
| kernel.c | 246514 | `local_50 = 0xc; \| } \| if (*(char *)(param_1 + 0x1f) != '\0') { \| local_50 = local_50 \| 0x2000; \| } \| if (((param_6 == 0) \|\| (param_7 == 0 &&` |
| kernel.c | 246706 | `FUN_001b2ff0(local_2c); \| FUN_0037db60(DAT_001b4650,0x110,1); \| FUN_001b31c4(DAT_001b4650 + (local_2c & 0xf) * 0x10); \| *DAT_001b4654 = 0x20` |
| kernel.c | 246778 | `iVar1 = FUN_001b5240(); \| if ((((iVar1 == 0) && (param_3 < (ushort)param_1[7])) && (param_5 < 9)) && (*param_1 != 0)) { \| FUN_006f4d8e(); \| ` |
| kernel.c | 246779 | `if ((((iVar1 == 0) && (param_3 < (ushort)param_1[7])) && (param_5 < 9)) && (*param_1 != 0)) { \| FUN_006f4d8e(); \| *DAT_001b4a8c = 0x200; \| i` |
| kernel.c | 246792 | `if (param_8 != 0) { \| FUN_006fd7c8(param_8,DAT_001b4a90,param_5); \| } \| *DAT_001b4a98 = 0x200; \| FUN_006f4d3e(); \| } \| else {` |
| kernel.c | 247747 | `iVar1 = param_4 + 0x14; \| goto LAB_001b807c; \| } \| if (param_3 != 0x200) { \| return 1; \| } \| if (*(short *)(local_1c + 0xbe) != 0x10) {` |
| kernel.c | 253476 | `*(undefined4 *)(DAT_001c66c0 + 4) = 0x70; \| *(undefined4 *)(DAT_001c66a8 + 0xb0) = 0x800; \| iVar1 = DAT_001c66c4; \| *(undefined4 *)(DAT_001c` |
| kernel.c | 257386 | `if ('\x03' < *pcVar2) { \| FUN_006fdf4a(s_ICM_NAME__CMD_NAM_GET_INTERRAT_P_001cbb54); \| } \| local_b0 = (code *)0x200; \| local_ac = (code *)(p` |
| kernel.c | 263301 | `} \| *(undefined1 *)(local_30 + aiStack_2c[0]) = 0; \| *(undefined4 *)(&DAT_00001a60 + iVar4) = 0; \| *(undefined4 *)(iVar4 + 0x3c) = 0x200000;` |
| kernel.c | 266052 | `} \| FUN_006f3534(param_3 + 0xaf,param_2 + 0xbd,0x100); \| thunk_FUN_006f3e8a(param_3 + 4,param_2 + 2,0x81); \| thunk_FUN_006f3e8a(param_3 + 0x` |
| kernel.c | 266645 | `if ('\x02' < *DAT_001dd4d0) { \| FUN_006f4b10(0x27,DAT_001dd4d8,&DAT_001dd4d4,local_54); \| } \| uVar3 = 0x200; \| uVar6 = 0; \| FUN_001e0a42(par` |
| kernel.c | 266647 | `} \| uVar3 = 0x200; \| uVar6 = 0; \| FUN_001e0a42(param_2 + 0xe8,param_2 + 0xeb,local_54,local_58,0x200,0); \| FUN_006f3582(local_54,0x200,&DAT_` |
| kernel.c | 266648 | `uVar3 = 0x200; \| uVar6 = 0; \| FUN_001e0a42(param_2 + 0xe8,param_2 + 0xeb,local_54,local_58,0x200,0); \| FUN_006f3582(local_54,0x200,&DAT_001d` |
| kernel.c | 266655 | `else { \| if (param_6 == 1) { \| if (*(int *)(param_1 + 0x4b4) != 2) { \| iVar2 = FUN_001e0f3a(local_28,param_5,local_54,0x200,param_2 + 0xe8,0` |
| kernel.c | 266675 | `} \| else if (local_64[0] == '\x02') { \| *param_2 = 0xb; \| FUN_006f3534(local_54,local_28,0x200); \| } \| goto LAB_001dd352; \| }` |
| kernel.c | 266713 | `else { \| if (local_48 == 0x1003) { \| param_2[0xe7] = 0xd0; \| FUN_006f3582(local_54,0x200,&DAT_001dd4dc,param_2[0xc5]); \| goto LAB_001dd310; ` |
| kernel.c | 266909 | `if ('\x02' < *pcVar4) { \| FUN_006f4b10(0x27,DAT_001dd8f0 + 1,&DAT_001dd4dc,uVar9); \| } \| iVar5 = FUN_001e10c8(local_38,iVar7,local_50,(char)` |
| kernel.c | 266931 | `if ('\x02' < *pcVar4) { \| FUN_006f4b10(0x27,DAT_001dd8f0 + 2,&DAT_001dd4dc,uVar9); \| } \| iVar5 = FUN_001e0ef2(uVar9,iVar5,0x200); \| goto LAB` |
| kernel.c | 266942 | `uVar6 = *(undefined1 *)((int)param_2 + 0x3b2); \| uVar1 = (undefined1)param_2[0xec]; \| } \| iVar5 = FUN_001e1076(iVar7,uVar1,uVar6,iVar5,0x200` |
| kernel.c | 269172 | `} \| FUN_001f29f0(auStack_650,uVar4); \| local_28 = 0; \| uVar4 = FUN_001f24b4(param_3,auStack_238,0x200,&local_28); \| if (local_28 == 0) { \| F` |
| kernel.c | 269298 | `if (iVar1 != -1) { \| iVar1 = *(int *)(param_1 + 0x208); \| if (iVar1 != 0) { \| uVar3 = *(int *)(param_1 + 0x204) - (iVar1 - *(int *)(param_1 ` |
| kernel.c | 270193 | `param_1[0xa0] = '\0'; \| } \| local_2c[0] = 0; \| iVar3 = FUN_001f2690(param_1,local_42c,0x200,local_2c); \| FUN_003dffa8(s_7_bit_ASCII_msg__001` |
| kernel.c | 271978 | `*(undefined2 *)(iVar1 + 8) = 0x40; \| *(undefined1 *)(iVar1 + 0x62) = 0x17; \| *(undefined2 *)(iVar1 + 100) = 0x108; \| *(undefined2 *)(iVar1 +` |
| kernel.c | 271985 | `*(undefined1 *)(iVar1 + 0xe) = 4; \| *(undefined1 *)(iVar1 + 99) = 0x17; \| *(undefined2 *)(iVar1 + 0x66) = 8; \| *(undefined2 *)(iVar1 + 0x144` |
| kernel.c | 272617 | `uint uVar1; \|  \| uVar1 = FUN_001f78bc(*DAT_001e8384 + 0x78); \| return uVar1 & 0x200; \| } \|  \| ` |
| kernel.c | 272734 | `void FUN_001e8732(undefined4 param_1) \|  \| { \| FUN_00042fa4(param_1,*DAT_001e87ac + 0x30,0x2000); \| return; \| } \| ` |
| kernel.c | 272745 | `void FUN_001e8740(undefined4 param_1) \|  \| { \| FUN_00042fa4(param_1,*DAT_001e87ac + 0x30,0x200); \| return; \| } \| ` |
| kernel.c | 275020 | `local_5c = local_5c & 0xffffff00; \| } \| iVar4 = FUN_00213640(&local_68); \| local_28[0] = (undefined2)((iVar4 + 7U) * 0x2000 >> 0x10); \| uVar` |
| kernel.c | 275261 | `local_48._0_2_ = (ushort)(byte)local_48; \| } \| iVar4 = FUN_0021367a(&local_50); \| local_18[0] = (undefined2)((iVar4 + 7U) * 0x2000 >> 0x10);` |
| kernel.c | 275333 | `,*(undefined1 *)(param_2 + 0xe),*(undefined4 *)(param_2 + 0x10)); \| } \| iVar1 = FUN_0076dd94(&local_38); \| local_14[0] = (undefined2)((iVar1` |
| kernel.c | 275434 | `local_48._0_3_ = (uint3)(ushort)local_48; \| } \| iVar2 = FUN_002136f8(&local_50); \| local_1c[0] = (undefined2)((iVar2 + 7U) * 0x2000 >> 0x10)` |
| kernel.c | 275673 | `local_2e = 0; \| } \| iVar1 = FUN_002136a8(&local_30); \| local_1c[0] = (undefined2)((iVar1 + 7U) * 0x2000 >> 0x10); \| uVar2 = FUN_00866476((iV` |
| kernel.c | 275716 | `FUN_001e9f84(&uStack_2d,auStack_28,param_3,param_4,0,param_5); \| } \| iVar1 = FUN_002136e4(&local_30); \| local_1c[0] = (undefined2)((iVar1 + ` |
| kernel.c | 277568 | `((byte)(&DAT_00001135)[iVar1] & 7) << 1; \| local_20[0] = 0x49; \| iVar1 = FUN_00213738(local_20); \| local_c[0] = (undefined2)((iVar1 + 7U) * ` |
| kernel.c | 277606 | `local_2c._0_2_ = (ushort)(byte)uVar1; \| local_2f = param_2; \| iVar2 = FUN_0021374c(&local_30); \| local_14[0] = (undefined2)((iVar2 + 7U) * 0` |
| kernel.c | 278770 | `char local_58 [64]; \|  \| pcVar4 = local_258; \| FUN_006fe9dc(local_258,0x200); \| if ((*param_1 != '\0') && (*DAT_001f0534 != '\0')) { \| uVar2` |
| kernel.c | 278777 | `while (local_58[0] != '\0') { \| iVar3 = FUN_00212898(local_58,DAT_001f0534); \| if (iVar3 == 0) { \| FUN_006f3582(pcVar4,0x200,&DAT_001f0538,l` |
| kernel.c | 278793 | `iVar3 = FUN_001f1d8c(); \| if (((iVar3 == 0) \|\| (local_258[0] != '\0')) && (*param_1 = '\0', local_258[0] != '\0')) { \| pcVar4[-1] = 0; \| FUN` |
| kernel.c | 279103 | `else { \| local_20 = 2; \| } \| FUN_006f3534(iVar2 + 0xa24,iVar5,0x200); \| uVar4 = FUN_00214708(param_1,iVar2,&local_38); \| } \| return uVar4;` |
| kernel.c | 279609 | `} \| iVar3 = FUN_00212904(); \| if ((iVar3 == 0) \|\| (iVar3 = FUN_002b157a(uVar15), iVar3 == 0)) { \| FUN_006f3534(param_1 + 0x306,local_38,0x20` |
| kernel.c | 279612 | `FUN_006f3534(param_1 + 0x306,local_38,0x200); \| } \| else { \| FUN_006f3582(param_1 + 0x306,0x200,s__s__s_001f12a0,iVar3,local_38); \| } \| iVar` |
| kernel.c | 279620 | `if (*(char *)(param_2 + 0x25) == '\0') { \| return 0; \| } \| FUN_006f3534(param_1 + 0x506,local_38,0x200); \| iVar3 = *(int *)(param_1 + 0xca8)` |
| kernel.c | 279680 | `if (*(int *)(param_1 + 0xca4) == 1) { \| if ((puVar4[0x4a8] != '\0') && (iVar3 = FUN_00217318(*(undefined4 *)(puVar4 + 8)), iVar3 != 0) \| ) {` |
| kernel.c | 281291 | `*(int *)(param_1 + 0x204) = param_3; \| thunk_FUN_006f3e8a(); \| } \| *(int *)(param_1 + 0x200) = param_1; \| *(int *)(param_1 + 0x208) = param_` |
| kernel.c | 281304 | `void FUN_001f2990(int param_1) \|  \| { \| *(int *)(param_1 + 0x200) = param_1; \| *(undefined4 *)(param_1 + 0x204) = 0x200; \| *(int *)(param_1 ` |
| kernel.c | 281305 | ` \| { \| *(int *)(param_1 + 0x200) = param_1; \| *(undefined4 *)(param_1 + 0x204) = 0x200; \| *(int *)(param_1 + 0x208) = param_1; \| return; \| }` |
| kernel.c | 281317 | `undefined4 FUN_001f299e(int param_1,int param_2) \|  \| { \| if (*(int *)(param_1 + 0x204) - (*(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x` |
| kernel.c | 281393 | `{ \| int iVar1; \|  \| iVar1 = *(int *)(param_1 + 0x204) - (*(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x200)); \| if (iVar1 < 1) { \| iVar1 ` |
| kernel.c | 281407 | `int FUN_001f2a62(int param_1) \|  \| { \| return *(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x200); \| } \|  \| ` |
| kernel.c | 281687 | `if (local_20 < 1) { \| return -1; \| } \| FUN_001f235e(local_24,local_1c,auStack_230,0x200); \| FUN_001f2b18(param_1,local_20); \| if (param_5 + ` |
| kernel.c | 284463 | `if (iVar1 == 0x30) { \| iVar2 = iVar8 + -1; \| iVar3 = iVar10 + 1; \| uVar6 = uVar7 \| 0x200; \| iVar1 = (*(code *)param_4[6])(param_2); \| if ((i` |
| kernel.c | 284491 | `iVar2 = iVar2 + -1; \| iVar3 = iVar3 + 1; \| iVar1 = (*(code *)param_4[6])(param_2); \| uVar6 = uVar6 \| 0x200; \| } \| (*(code *)param_4[7])(para` |
| kernel.c | 284948 | `uVar2 = *puVar3 \| 0x1000; \| } \| else if (param_2 == 2) { \| uVar2 = *puVar3 \| 0x2000; \| } \| else { \| if (param_2 != 3) goto LAB_001f7dce;` |
| kernel.c | 285116 | `uVar5 = uVar5 \| 0x10000000; \| } \| else if (iVar2 == 2) { \| uVar5 = uVar5 \| 0x20000000; \| } \| else if (iVar2 == 3) { \| uVar5 = uVar5 \| 0x3000` |
| kernel.c | 285305 | `uVar5 = uVar5 \| 0x10000000; \| } \| else if (iVar2 == 2) { \| uVar5 = uVar5 \| 0x20000000; \| } \| else if (iVar2 == 3) { \| uVar5 = uVar5 \| 0x3000` |
| kernel.c | 285411 | `iVar1 = DAT_001f83ec; \| } \| iVar1 = iVar1 + param_1 * 0x40; \| *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) \| 0x2000000; \| return; \| } \| ` |
| kernel.c | 285515 | `iVar3 = 4; \| } \| else { \| iVar3 = FUN_00261cfc(param_2 + 0x18,0x200,s_usb_tx_001f8964); \| if (iVar3 == 0) { \| iVar3 = 0; \| *(undefined4 *)(p` |
| kernel.c | 285717 | `{ \| int iVar1; \|  \| iVar1 = FUN_006f5f72(s_RNDIS_Thread_001f8e10,s_RNDIS_Queue_001f8e04,DAT_001f8e00,1,param_1,0x2000, \| 100,0x46,1,1); \| if` |
| kernel.c | 290364 | `uVar6 = local_6c + uVar9 + DAT_001feabc + (uVar4 & uVar7 \| uVar3 & ~uVar4); \| uVar6 = uVar4 + (uVar6 >> 0x14 \| uVar6 * 0x1000); \| uVar3 = lo` |
| kernel.c | 290372 | `uVar3 = uVar6 + local_5c + (uVar7 & uVar9 \| uVar5 & ~uVar7) + DAT_001feacc; \| uVar3 = uVar7 + (uVar3 >> 0x14 \| uVar3 * 0x1000); \| uVar6 = uV` |
| kernel.c | 290380 | `uVar3 = uVar3 + local_4c + (uVar6 & uVar9 \| uVar4 & ~uVar6) + DAT_001feadc; \| uVar3 = uVar6 + (uVar3 >> 0x14 \| uVar3 * 0x1000); \| uVar7 = uV` |
| kernel.c | 290388 | `uVar3 = uVar3 + local_3c + (uVar7 & uVar9 \| uVar4 & ~uVar7) + DAT_001feae8; \| uVar6 = uVar7 + (uVar3 >> 0x14 \| uVar3 * 0x1000); \| uVar3 = (u` |
| kernel.c | 290394 | `uVar7 = uVar7 + local_6c + (uVar9 & uVar6 \| uVar3 & ~uVar6) + DAT_001feaf4; \| uVar7 = uVar9 + (uVar7 >> 0x1b \| uVar7 * 0x20); \| uVar6 = uVar` |
| kernel.c | 290402 | `uVar3 = (uVar9 & uVar4 \| uVar6 & ~uVar4) + DAT_001feb04 + uVar7 + local_5c; \| uVar3 = uVar9 + (uVar3 >> 0x1b \| uVar3 * 0x20); \| uVar7 = (uVa` |
| kernel.c | 290410 | `uVar3 = uVar3 + local_4c + (uVar9 & uVar7 \| uVar6 & ~uVar7) + DAT_001feb14; \| uVar3 = uVar9 + (uVar3 >> 0x1b \| uVar3 * 0x20); \| uVar7 = uVar` |
| kernel.c | 290418 | `uVar3 = uVar3 + local_3c + (uVar9 & uVar7 \| uVar6 & ~uVar7) + DAT_001feb24; \| uVar3 = uVar9 + (uVar3 >> 0x1b \| uVar3 * 0x20); \| uVar7 = uVar` |
| kernel.c | 290462 | `uVar7 = ((uVar4 \| ~uVar6) ^ uVar3) + DAT_001feea4 + local_38 + uVar7; \| uVar9 = uVar4 + (uVar7 >> 0x11 \| uVar7 * 0x8000); \| uVar6 = ((uVar9 ` |
| kernel.c | 290470 | `uVar3 = ((uVar4 \| ~uVar7) ^ uVar6) + DAT_001feeb4 + uVar9 + local_48; \| uVar9 = uVar4 + (uVar3 >> 0x11 \| uVar3 * 0x8000); \| uVar3 = ((uVar9 ` |
| kernel.c | 290478 | `uVar7 = ((uVar4 \| ~uVar3) ^ uVar6) + DAT_001feec4 + uVar9 + local_58; \| uVar7 = uVar4 + (uVar7 >> 0x11 \| uVar7 * 0x8000); \| uVar3 = ((uVar7 ` |
| kernel.c | 290487 | `uVar7 = uVar9 + (uVar7 >> 0x11 \| uVar7 * 0x8000); \| uVar3 = ((uVar7 \| ~uVar6) ^ uVar9) + DAT_001feed8 + local_4c + uVar3; \| *param_1 = uVar6` |
| kernel.c | 291407 | `LAB_001ff4ec: \| iVar3 = 1; \| LAB_001ffc7c: \| FUN_002f4fe6(0x200,0x100,0x102,param_1,0x2d4,param_2,*local_28); \| return iVar3; \| } \| ` |
| kernel.c | 291437 | `else if ('\x03' < *pcVar1) { \| FUN_006f4a98(0x17,DAT_00200b28 + 2); \| } \| FUN_002f4fe6(0x200,0x100,0x107,param_1,0xc,param_2,*param_3); \| re` |
| kernel.c | 291464 | `FUN_006f2c00(0,DAT_00200f64,0x4f,s_LOGGER_ASSERT_00200f54,s_Buffer_out_of_bound_00200f40); \| } \| *param_3 = local_1c >> 3; \| FUN_002f4fe6(0x` |
| kernel.c | 291863 | `iVar1 = local_18 + 0x314; \| break; \| case 3: \| uVar2 = 0x200; \| iVar1 = local_18 + 0x514; \| break; \| case 4:` |
| kernel.c | 291928 | `} \| iVar1 = local_20 + -0x614; \| } \| *(undefined4 *)(iVar1 + 0x2000) = param_2; \| *(undefined4 *)(iVar1 + 0x2004) = param_3; \| } \| iVar1 = F` |
| kernel.c | 291929 | `iVar1 = local_20 + -0x614; \| } \| *(undefined4 *)(iVar1 + 0x2000) = param_2; \| *(undefined4 *)(iVar1 + 0x2004) = param_3; \| } \| iVar1 = FUN_0` |
| kernel.c | 294384 | `if (param_2[4] == 0) { \| iVar1 = -2; \| local_60 = iVar2; \| if (-1 < (int)((uint)*(byte *)(param_2 + 1) * 0x20000000)) { \| iVar1 = FUN_0004d5` |
| kernel.c | 297359 | `if (*(int *)(*(int *)(iVar2 + 0x18) + 0x18) != 0) { \| thunk_FUN_000001cc(0); \| FUN_0058b044(0); \| *(uint *)(DAT_00210258 + 0x134) = *(uint *` |
| kernel.c | 298192 | `uVar6 = 0; \| } \| else { \| uVar6 = (uint)bVar1 * 0x10 - 0x200 & 0xffff; \| } \| uVar8 = 0; \| pbVar9 = (byte *)(DAT_002110a0 + uVar6);` |
| kernel.c | 300225 | `local_30 = param_2; \| iStack_2c = param_3; \| iStack_28 = param_4; \| FUN_006fe9dc(auStack_234,0x200); \| iVar2 = thunk_FUN_00486328(param_1,&D` |
| kernel.c | 300292 | `undefined1 auStack_41c [512]; \| undefined1 auStack_21c [516]; \|  \| FUN_006fe9dc(auStack_41c,0x200); \| FUN_006fe9dc(auStack_21c,0x200); \| FUN` |
| kernel.c | 300293 | `undefined1 auStack_21c [516]; \|  \| FUN_006fe9dc(auStack_41c,0x200); \| FUN_006fe9dc(auStack_21c,0x200); \| FUN_0021449c(param_1,param_2,auStac` |
| kernel.c | 300348 | `undefined4 uVar5; \|  \| iVar2 = FUN_002694bc(*(undefined4 *)(param_1 + 0xc98),*param_2); \| uVar3 = 0x200; \| if (*(int *)(iVar2 + 4) == 0) { \|` |
| kernel.c | 301326 | `char *pcVar1; \| int iVar2; \|  \| iVar2 = FUN_00218354(param_3 + 0x102c,0x200,param_3 + 0x24,param_4,param_4); \| pcVar1 = DAT_002159ec; \| if (` |
| kernel.c | 301328 | ` \| iVar2 = FUN_00218354(param_3 + 0x102c,0x200,param_3 + 0x24,param_4,param_4); \| pcVar1 = DAT_002159ec; \| if ((iVar2 == 0) \|\| (iVar2 == 0x2` |
| kernel.c | 301336 | `} \| else { \| iVar2 = FUN_002183e0(*(undefined4 *)(param_3 + 0x20),param_2,iVar2 + param_3 + 0x102c, \| 0x200 - iVar2,*(undefined1 *)(param_3 ` |
| kernel.c | 301685 | `piVar5 = param_2 + 0x25; \| } \| uVar4 = extraout_r3; \| iVar2 = FUN_00218354(param_3 + 0x102c,0x200,param_3 + 0x24); \| pcVar1 = DAT_00216368; ` |
| kernel.c | 301687 | `uVar4 = extraout_r3; \| iVar2 = FUN_00218354(param_3 + 0x102c,0x200,param_3 + 0x24); \| pcVar1 = DAT_00216368; \| if ((iVar2 == 0) \|\| (iVar2 ==` |
| kernel.c | 301723 | `} \| else { \| iVar2 = FUN_002183e0(*(undefined4 *)(param_3 + 0x20),*puVar3,param_3 + iVar2 + 0x102c, \| 0x200 - iVar2,*(undefined1 *)(param_3 ` |
| kernel.c | 303468 | `iVar1 = FUN_002580ec(auStack_90,param_2 + 0x97c); \| uVar2 = 0; \| if (iVar1 != 0) { \| *(uint *)(param_2 + 0x9fc) = *(uint *)(param_2 + 0x9fc)` |
| kernel.c | 306947 | `*(undefined4 *)(*piVar2 + 0x2c) = 0; \| } \| if (*(int *)(*piVar2 + 0x14) != 0) { \| FUN_006f32e6(*(int *)(*piVar2 + 0x14),1,0x2f6,0x200); \| *(` |
| kernel.c | 314205 | `FUN_008fa1aa(*DAT_002346d0,param_1[1]); \| return; \| } \| if (iVar3 == 0x200) { \| puVar8 = (undefined4 *)param_1[1]; \| iVar5 = FUN_006af582(*D` |
| kernel.c | 318159 | `if ('\x03' < *pcVar1) { \| FUN_006fdf4a(s_ICM_NAME__CMD_NAM_GET_INTERRAT_P_0023c770); \| } \| local_30 = (int *)0x200; \| local_2c = param_2 + 3` |
| kernel.c | 319843 | ` \| puVar1 = DAT_0023dce0; \| puVar2 = (undefined1 *)FUN_0012634c(*DAT_0023dce0); \| if (param_1 != 0x2000) { \| if (param_1 == 0x4000) { \| puVa` |
| kernel.c | 320748 | `} \| iVar1 = DAT_0023ff34 + param_1 * 0x1664 + uVar4 * 8; \| uVar3 = *(uint *)(iVar1 + 0x1fc); \| uVar2 = *(uint *)(iVar1 + 0x200); \| if (((((p` |
| kernel.c | 326400 | `uVar4 = 0x400000; \| } \| if (iVar1 << 10 < 0) { \| uVar4 = uVar4 \| 0x200000; \| } \| if (iVar1 << 8 < 0) { \| uVar4 = uVar4 \| 0x800000;` |
| kernel.c | 326593 | `uVar4 = 0x400000; \| } \| if (iVar2 << 10 < 0) { \| uVar4 = uVar4 \| 0x200000; \| } \| if (iVar2 << 8 < 0) { \| uVar4 = uVar4 \| 0x800000;` |
| kernel.c | 326967 | `uVar7 = 0x400000; \| } \| if (iVar3 << 10 < 0) { \| uVar7 = uVar7 \| 0x200000; \| } \| if (iVar3 << 8 < 0) { \| uVar7 = uVar7 \| 0x800000;` |
| kernel.c | 327021 | `uVar3 = 0x400000; \| } \| if (iVar1 << 10 < 0) { \| uVar3 = uVar3 \| 0x200000; \| } \| if (iVar1 << 8 < 0) { \| uVar3 = uVar3 \| 0x800000;` |
| kernel.c | 327096 | `else { \| if (*(int *)(param_1 + 0x30d0) != 0) { \| if (*(int *)(param_1 + 0x5c) << 10 < 0) { \| uVar4 = uVar4 \| 0x200000; \| } \| if (*(int *)(p` |
| kernel.c | 327246 | `uVar4 = 0x400000; \| } \| if ((int)(param_2[0x17] << 10) < 0) { \| uVar4 = uVar4 \| 0x200000; \| } \| } \| uVar5 = param_2[0x16];` |
| kernel.c | 328958 | `undefined1 auStack_228 [512]; \| int local_28; \|  \| FUN_006fe9dc(auStack_228,0x200); \| local_28 = FUN_00291252(*DAT_0024861c); \| local_22c = ` |
| kernel.c | 329164 | `uVar7 = uVar7 & 0xffffffef; \| if (param_2[0xc34] != 0) { \| if ((int)(param_2[0x17] << 10) < 0) { \| uVar7 = uVar7 \| 0x200000; \| *(uint *)(par` |
| kernel.c | 330025 | `uVar15 = puVar5[0x16]; \| if (puVar5[0xc34] != 0) { \| if ((int)(puVar5[0x17] << 10) < 0) { \| uVar15 = uVar15 \| 0x200000; \| } \| if (((int)((ui` |
| kernel.c | 331437 | `puStack_30 = param_2; \| uStack_2c = param_3; \| local_28 = param_4; \| FUN_006fe9dc(auStack_27c,0x200); \| puVar1 = DAT_0024b474; \| local_44 = ` |
| kernel.c | 331452 | `local_58 = (code *)(param_2 + 0xbe1); \| local_54 = param_6 + 0x2c24; \| local_7c = param_7 + 0x10; \| iVar2 = local_28 + 0x2000; \| local_288 =` |
| kernel.c | 331732 | `(iVar2 = FUN_002921ca(*(undefined4 *)(pcVar13 + 0x30)), iVar2 != 0)) && \| (iVar2 = FUN_00299bc6(DAT_0024bce8,s_AAA_message_failed_0024bd28,p` |
| kernel.c | 331826 | `local_50 = 0x400000; \| } \| if ((int)(param_2[0x17] << 10) < 0) { \| local_50 = local_50 \| 0x200000; \| } \| } \| local_294 = local_58;` |
| kernel.c | 332322 | `uVar5 = param_2[0x455]; \| goto LAB_0024d472; \| } \| iVar2 = param_6 + 0x2000; \| if ('\x02' < *DAT_0024cffc) { \| FUN_006f4b10(0x2c,DAT_0024d00` |
| kernel.c | 334904 | `FUN_003af414(auStack_84,0,0x28); \| local_30 = param_3 + 0x20c; \| local_34 = param_3 + 0x22c; \| iVar7 = 0x200; \| iVar6 = param_3 + 0xc; \| FUN` |
| kernel.c | 335035 | `FUN_003af414(auStack_84,0,0x28); \| iStack_30 = param_3 + 0x20c; \| iStack_34 = param_3 + 0x22c; \| iVar7 = 0x200; \| iVar6 = param_3 + 0xc; \| F` |
| kernel.c | 335270 | `} \| else { \| if (iVar2 != 0) goto LAB_00250400; \| FUN_002502a8(param_1,param_2,param_3 + 0x200,0x100); \| pcVar3 = s__DEC_ReferToHlpr__call_i` |
| kernel.c | 335272 | `if (iVar2 != 0) goto LAB_00250400; \| FUN_002502a8(param_1,param_2,param_3 + 0x200,0x100); \| pcVar3 = s__DEC_ReferToHlpr__call_id__s_002507c0` |
| kernel.c | 336398 | `*(int *)(iVar2 + 0x30) = iVar5; \| } \| if (iVar5 << 10 < 0) { \| iVar5 = iVar5 + -0x200000; \| *(int *)(iVar2 + 0x30) = iVar5; \| } \| if (iVar5 ` |
| kernel.c | 337511 | ` \| iVar5 = 0; \| iVar4 = 0; \| iVar1 = FUN_003cdc30(param_4 + 1,0x83,0x2000,&DAT_0025702d,0,param_4); \| *param_4 = iVar1; \| if (iVar1 == 0) { ` |
| kernel.c | 339421 | `uVar3 = 0x400000; \| } \| if (iVar1 << 10 < 0) { \| uVar3 = uVar3 \| 0x200000; \| } \| if (iVar1 << 8 < 0) { \| uVar3 = uVar3 \| 0x800000;` |
| kernel.c | 339567 | `local_14 = 0; \| iVar1 = FUN_00259fe6(param_1,DAT_0025a008,0xd,&local_14,param_3); \| if (iVar1 != 1) { \| FUN_0024e8a4(0x200000,s_SYSDB_HF_Get` |
| kernel.c | 339570 | `FUN_0024e8a4(0x200000,s_SYSDB_HF_Get__could_not_find_con_0025a010,param_1,local_14,0); \| return 0; \| } \| FUN_0024e8a4(0x200000,s_SYSDB_HF_Ge` |
| kernel.c | 339589 | `int local_1c; \|  \| local_1c = param_4; \| FUN_0024e8a4(0x200000,s_SYSDB_HF_Set_HF__d_0025a084,param_1,0,0); \| iVar3 = FUN_00259fe6(param_1,DA` |
| kernel.c | 339598 | `FUN_0024ed60(*(undefined4 *)(iVar5 + *DAT_0025a00c * 0x68 + local_1c * 8 + 4)); \| uVar4 = FUN_0024ef88(param_2,iVar1 + 0x400 + *piVar2 * 0xc` |
| kernel.c | 339601 | `FUN_0024e8a4(0x200000,s_SYSDB_HF_Set_changing_config_val_0025a0bc,0,0,0); \| } \| else { \| FUN_0024e8a4(0x200000,s_SYSDB_HF_Set_coundnt_change` |
| kernel.c | 343157 | `void FUN_0025ea1e(int param_1) \|  \| { \| FUN_0024e8a4(0x20000,s_SIPTIMER_Stop___X_0025ebbc,param_1,0); \| *(undefined4 *)(param_1 + 8) = 0; \| ` |
| kernel.c | 345417 | `if ('\x03' < *pcVar1) { \| FUN_006fdf4a(s_ICM_NAME__CMD_NAM_GET_INTERRAT_P_00263ed0); \| } \| local_e0 = (code *)0x200; \| local_dc = (int *)(pu` |
| kernel.c | 346243 | `if ((iVar6 != 0) \|\| (iVar6 = FUN_00039000(*puVar3), puVar12 = &DAT_00010800, iVar6 == 0)) { \| puVar12 = DAT_00266934; \| } \| pcVar13 = (char ` |
| kernel.c | 346312 | `if ((iVar6 != 0) \|\| (iVar6 = FUN_00039000(*puVar3), puVar12 = &DAT_00010800, iVar6 == 0)) { \| puVar12 = DAT_00266934; \| } \| pcVar13 = (char ` |
| kernel.c | 349781 | `int iVar8; \| int iVar9; \|  \| iVar1 = param_2 + 0x2000; \| iVar6 = param_2 + 0x6ac; \| piVar4 = (int *)(param_2 + 0x1000); \| iVar3 = 5;` |
| kernel.c | 352654 | `FUN_006f3534(uVar5,s_NOT_REGISTERED_0026e638,0xff); \| if (*param_2 != 6) { \| if (((param_1 == 7) \|\| (param_1 == 4)) \|\| (param_1 == 5)) { \| F` |
| kernel.c | 353400 | `if (iVar5 == 0) { \| iVar5 = FUN_00241678(piVar1,DAT_0026f1c0 + 10); \| if (iVar5 != 0) { \| FUN_006f3534(param_4 + 0x94,*(undefined4 *)(iVar5 ` |
| kernel.c | 353978 | `FUN_006f4b10(0x2c,DAT_0026fbb8,&DAT_0026f1e8,param_5); \| param_3 = extraout_r2_03; \| } \| iVar2 = param_6 + 0x2000; \| iVar4 = param_6 + 0x102` |
| kernel.c | 357006 | `if ((iVar2 == 0) \|\| \| (iVar2 = FUN_00299b0c(param_4,&DAT_00274678,&uStack_2c,&local_30), iVar2 == 0)) { \| FUN_00299abe(&uStack_2c,&local_30,` |
| kernel.c | 357080 | `if ((iVar1 == 0) \|\| \| (iVar1 = FUN_00299b0c(param_4,&DAT_00274678,&local_1c,&local_20), iVar1 == 0)) { \| FUN_00299abe(&local_1c,&local_20,0x` |
| kernel.c | 357204 | `if ((iVar1 == 0) \|\| (iVar1 = FUN_00299b0c(param_4,&DAT_00274678,&local_14,&local_18), iVar1 == 0)) \| { \| FUN_00299abe(&local_14,&local_18,0x` |
| kernel.c | 360614 | `if ((*(int *)(param_1 + 0x310) != 3) && (*(int *)(param_1 + 0x310) != 4)) { \| return 0; \| } \| thunk_FUN_003cdda0(param_2 + 0x200,param_1 + 8` |
| kernel.c | 360645 | `pcVar4[1] = '\0'; \| pcVar4[2] = '\0'; \| pcVar4[3] = '\0'; \| FUN_006f3534(pcVar6,param_1 + 0xa60,0x200); \| puVar1 = DAT_0027848c; \| if (*(int` |
| kernel.c | 360669 | `iVar3 = thunk_FUN_006f9150(pcVar6); \| pcVar4 = (char *)(param_1 + 0xe08); \| LAB_002783ea: \| FUN_006f3582(pcVar6 + iVar3,0x200 - iVar2,s__pho` |
| kernel.c | 360674 | `if (*(char *)(param_1 + 0xf08) != '\0') { \| iVar2 = thunk_FUN_006f9150(pcVar6); \| iVar3 = thunk_FUN_006f9150(pcVar6); \| FUN_006f3582(pcVar6 ` |
| kernel.c | 375516 | `uVar1 = uVar1 \| 0x1000; \| break; \| case 5: \| uVar1 = uVar1 \| 0x2000; \| break; \| case 6: \| uVar1 = uVar1 \| 0x200;` |
| kernel.c | 375519 | `uVar1 = uVar1 \| 0x2000; \| break; \| case 6: \| uVar1 = uVar1 \| 0x200; \| break; \| case 7: \| uVar1 = uVar1 \| 0x400;` |
| kernel.c | 376477 | `*(undefined2 *)(iVar14 + 0x14) = 1; \| *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(&DAT_00001980 + param_2); \| FUN_0025e8b0(iVar5); \| *(` |
| kernel.c | 376485 | `*(undefined2 *)(iVar14 + 0x14) = 1; \| *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(&DAT_00001984 + param_2); \| FUN_0025e8b0(iVar5); \| *(` |
| kernel.c | 376493 | `*(undefined2 *)(iVar14 + 0x14) = 1; \| *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(&DAT_00001988 + param_2); \| FUN_0025e8b0(iVar5); \| *(` |
| kernel.c | 376501 | `*(undefined2 *)(iVar14 + 0x14) = 1; \| *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(&DAT_0000198c + param_2); \| FUN_0025e8b0(iVar5); \| *(` |
| kernel.c | 376509 | `*(undefined2 *)(iVar14 + 0x14) = 1; \| *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(&DAT_00001990 + param_2); \| FUN_0025e8b0(iVar5); \| *(` |
| kernel.c | 376517 | `*(undefined2 *)(iVar14 + 0x14) = 1; \| FUN_006f3534(iVar14 + 0x18,&DAT_00001994 + param_2,0xc0); \| FUN_0025e8b0(iVar5,iVar14); \| *(uint *)(pa` |
| kernel.c | 376525 | `*(undefined2 *)(iVar14 + 0x14) = 1; \| *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(&DAT_000019b8 + param_2); \| FUN_0025e8b0(iVar5); \| *(` |
| kernel.c | 376533 | `*(undefined2 *)(iVar14 + 0x14) = 1; \| *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(&DAT_000019bc + param_2); \| FUN_0025e8b0(iVar5); \| *(` |
| kernel.c | 376541 | `*(undefined2 *)(iVar14 + 0x14) = 1; \| FUN_006f3534(iVar14 + 0x18,&DAT_000019c0 + param_2,0xc0); \| FUN_0025e8b0(iVar5,iVar14); \| *(uint *)(pa` |
| kernel.c | 376556 | `*(undefined2 *)(iVar6 + 0x14) = 1; \| FUN_006f4a34(iVar6 + 0x18,param_2 + 0x1008,0x110); \| FUN_0025e8b0(iVar5,iVar6); \| *(uint *)(param_1 + 0` |
| kernel.c | 376569 | `} \| *(undefined1 *)(iVar6 + 0x18) = uVar2; \| FUN_0025e8b0(iVar5); \| *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) \| 0x2000; \| } \| if (` |
| kernel.c | 376579 | `*(undefined2 *)(iVar6 + 0x14) = 1; \| FUN_006f4a34(iVar6 + 0x18,param_2 + uVar12 * 0x50 + 0xf68,0x50); \| FUN_0025e8b0(iVar5,iVar6); \| *(uint ` |
| kernel.c | 376594 | `*(undefined4 *)(iVar6 + 0xc) = 0x3a; \| *(undefined2 *)(iVar6 + 0x14) = 1; \| FUN_0025e8b0(iVar5); \| *(uint *)(param_1 + 0xc) = *(uint *)(para` |
| kernel.c | 376605 | `*(undefined2 *)(iVar7 + 0x14) = 1; \| FUN_006f4a34(iVar7 + 0x18,iVar6 + 0x140,0x118); \| FUN_0025e8b0(iVar5,iVar7); \| *(uint *)(param_1 + 0xc)` |
| kernel.c | 376619 | `*(undefined2 *)(iVar7 + 0x14) = 1; \| FUN_006f4a34(iVar7 + 0x18,iVar6 + 0xc30,0xb4); \| FUN_0025e8b0(iVar5,iVar7); \| *(uint *)(param_1 + 0xc) ` |
| kernel.c | 376631 | `*(undefined2 *)(iVar6 + 0x14) = 1; \| FUN_006f4a34(iVar6 + 0x18,param_2 + 0xf00,0x5c); \| FUN_0025e8b0(iVar5,iVar6); \| *(uint *)(param_1 + 0xc` |
| kernel.c | 376643 | `FUN_006f3534(iVar6 + 0x20,&DAT_00293088,0x20); \| *(undefined4 *)(iVar6 + 0x1c) = 1; \| FUN_0025e8b0(iVar5,iVar6); \| *(uint *)(param_1 + 0xc) ` |
| kernel.c | 376652 | `FUN_006f3534(iVar6 + 0x20,&DAT_00293088,0x20); \| *(undefined4 *)(iVar6 + 0x1c) = 2; \| FUN_0025e8b0(iVar5,iVar6); \| *(uint *)(param_1 + 0xc) ` |
| kernel.c | 376661 | `FUN_006f3534(iVar6 + 0x20,&DAT_00293088,0x20); \| *(undefined4 *)(iVar6 + 0x1c) = 8; \| FUN_0025e8b0(iVar5,iVar6); \| *(uint *)(param_1 + 0xc) ` |
| kernel.c | 376670 | `FUN_006f3534(iVar6 + 0x20,&DAT_00293088,0x20); \| *(undefined4 *)(iVar6 + 0x1c) = 9; \| FUN_0025e8b0(iVar5,iVar6); \| *(uint *)(param_1 + 0xc) ` |
| kernel.c | 376701 | `FUN_006f3534(iVar7 + 0x18,iVar9,0x20); \| if (*(char *)(local_38[0] + 0x31) != '\0') { \| FUN_0025e8b0(iVar5,iVar7); \| *(uint *)(param_1 + 0xc` |
| kernel.c | 376716 | `FUN_006f3534(iVar7 + 0x18,local_38[0] + 0x10,0x20); \| if (*(char *)(local_38[0] + 0x31) != '\0') { \| FUN_0025e8b0(iVar5,iVar7); \| *(uint *)(` |
| kernel.c | 376725 | `} \| if (*(char *)(local_38[0] + 0xf2) != '\0') { \| FUN_0025e8b0(iVar5,iVar7); \| *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) \| 0x2000` |
| kernel.c | 376730 | `if (iVar7 == 0) goto LAB_00293124; \| } \| FUN_0025e8b0(iVar5,iVar7); \| *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) \| 0x2000; \| if (((` |
| kernel.c | 376739 | `*(undefined2 *)(iVar7 + 0x1a) = *(undefined2 *)(local_38[0] + 0x1b4); \| *(undefined2 *)(iVar7 + 0x1c) = *(undefined2 *)(local_38[0] + 0x1b8)` |
| kernel.c | 376770 | `FUN_006f3534(iVar7 + 0x18,iVar6,0xc0); \| } \| FUN_0025e8b0(iVar5,iVar7); \| *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) \| 0x2000; \| LA` |
| kernel.c | 376778 | `*(undefined2 *)(iVar6 + 0x14) = 1; \| *(int *)(iVar6 + 0x18) = iVar14; \| FUN_0025e8b0(iVar5); \| *(uint *)(param_1 + 0xc) = *(uint *)(param_1 ` |
| kernel.c | 376818 | `*(undefined2 *)(iVar14 + 0x14) = 1; \| *(uint *)(iVar14 + 0x18) = (uint)*(byte *)(param_2 + 8); \| FUN_0025e8b0(iVar5); \| *(uint *)(param_1 + ` |
| kernel.c | 376825 | `*(undefined2 *)(iVar14 + 0x14) = 1; \| *(uint *)(iVar14 + 0x18) = (uint)*(byte *)(param_2 + 9); \| FUN_0025e8b0(iVar5); \| *(uint *)(param_1 + ` |
| kernel.c | 376832 | `*(int *)(iVar7 + 0xc) = iVar14; \| *(undefined2 *)(iVar7 + 0x14) = 0; \| FUN_0025e8b0(iVar5); \| *(uint *)(param_1 + 0xc) = *(uint *)(param_1 +` |
| kernel.c | 376841 | `*(undefined2 *)(iVar14 + 0x14) = 1; \| *(uint *)(iVar14 + 0x18) = (uint)*(ushort *)(param_2 + 0x11e); \| FUN_0025e8b0(iVar5); \| *(uint *)(para` |
| kernel.c | 376850 | `uVar3 = thunk_FUN_006f9150(iVar14 + 0x18); \| *(undefined2 *)(iVar14 + 0x16) = uVar3; \| FUN_0025e8b0(iVar5,iVar14); \| *(uint *)(param_1 + 0xc` |
| kernel.c | 376859 | `uVar3 = thunk_FUN_006f9150(iVar14 + 0x18); \| *(undefined2 *)(iVar14 + 0x16) = uVar3; \| FUN_0025e8b0(iVar5,iVar14); \| *(uint *)(param_1 + 0xc` |
| kernel.c | 376867 | `FUN_006f3534(iVar14 + 0x1c,param_2 + 0x18e8,0x40); \| *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(param_2 + 0x18e4); \| FUN_0025e8b0(iVar` |
| kernel.c | 376874 | `*(undefined2 *)(iVar14 + 0x14) = 1; \| *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(param_2 + 0x1928); \| FUN_0025e8b0(iVar5); \| *(uint *)` |
| kernel.c | 376888 | `} \| *(ushort *)(iVar14 + 0x16) = uVar4; \| FUN_0025e8b0(iVar5,iVar14); \| *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) \| 0x2000; \| } \| ` |
| kernel.c | 376907 | `uVar3 = thunk_FUN_006f9150(iVar14 + 0x18); \| *(undefined2 *)(iVar14 + 0x16) = uVar3; \| FUN_0025e8b0(iVar5,iVar14); \| *(uint *)(param_1 + 0xc` |
| kernel.c | 376917 | `uVar3 = thunk_FUN_006f9150(iVar14 + 0x18); \| *(undefined2 *)(iVar14 + 0x16) = uVar3; \| FUN_0025e8b0(iVar5,iVar14); \| *(uint *)(param_1 + 0xc` |
| kernel.c | 376926 | `uVar3 = thunk_FUN_006f9150(iVar14 + 0x18); \| *(undefined2 *)(iVar14 + 0x16) = uVar3; \| FUN_0025e8b0(iVar5,iVar14); \| *(uint *)(param_1 + 0xc` |
| kernel.c | 376945 | `*(undefined4 *)(iVar14 + 0x28) = \| *(undefined4 *)(s_________________Dump_All_Memory_T_00001834 + iVar6 + 0xc); \| FUN_0025e8b0(iVar5); \| *(u` |
| kernel.c | 377007 | `} \| else { \| if (3 < *(int *)(iVar8 + 0x30) - 1U) { \| uVar3 = 0x2000000; \| pcVar5 = DAT_00293c0c; \| LAB_0029390c: \| FUN_0024e8a4(uVar3,pcVar` |
| kernel.c | 377022 | `*(int *)(iVar2 + 0xc) = iVar6; \| *(undefined2 *)(iVar2 + 0x14) = 0; \| FUN_0025e8b0(iVar1 + 0x134); \| *(uint *)(iVar1 + 0xc) = *(uint *)(iVar` |
| kernel.c | 377858 | `uVar5 = *(uint *)(param_2 + 300) \| 0x1000; \| break; \| case 5: \| *(uint *)(param_2 + 300) = *(uint *)(param_2 + 300) \| 0x2000; \| *(uint *)(pa` |
| kernel.c | 377862 | `*(uint *)(param_2 + 0x130) = (uint)*(ushort *)(iVar9 + 0x1a); \| goto LAB_002944c8; \| case 6: \| uVar5 = *(uint *)(param_2 + 300) \| 0x200; \| b` |
| kernel.c | 377973 | `*(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(iVar1 + 0x98); \| uVar2 = *(undefined4 *)(iVar1 + 0x9c); \| *(undefined4 *)(param_1 + 0x254` |
| kernel.c | 378075 | `return; \| } \| uVar1 = 0; \| FUN_0024e8a4(0x2000000,s_SESSION_Init__setting_default_na_00294b20,param_1,0); \| if (*param_2 == '\0') { \| param_` |
| kernel.c | 379501 | `*param_1 = param_1[1]; \| if (param_1 + 0x85 <= (undefined4 *)param_1[4]) { \| puVar2 = param_1 + 5; \| if ((int)param_1[0x87] < 0x200) { \| if ` |
| kernel.c | 379508 | `} \| } \| else { \| thunk_FUN_006f3e8a(puVar2,param_1[0x88],0x200); \| param_1[0x88] = param_1[0x88] + 0x200; \| param_1[0x87] = param_1[0x87] + ` |
| kernel.c | 379509 | `} \| else { \| thunk_FUN_006f3e8a(puVar2,param_1[0x88],0x200); \| param_1[0x88] = param_1[0x88] + 0x200; \| param_1[0x87] = param_1[0x87] + -0x2` |
| kernel.c | 379510 | `else { \| thunk_FUN_006f3e8a(puVar2,param_1[0x88],0x200); \| param_1[0x88] = param_1[0x88] + 0x200; \| param_1[0x87] = param_1[0x87] + -0x200; ` |
| kernel.c | 379688 | `*(undefined4 *)(param_1 + 0x21c) = 0; \| } \| else { \| thunk_FUN_006f3e8a(param_1 + 0x14,param_2,0x200); \| *(int *)(param_1 + 0x220) = *(int *` |
| kernel.c | 379689 | `} \| else { \| thunk_FUN_006f3e8a(param_1 + 0x14,param_2,0x200); \| *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + 0x200; \| *(int *)(p` |
| kernel.c | 379690 | `else { \| thunk_FUN_006f3e8a(param_1 + 0x14,param_2,0x200); \| *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + 0x200; \| *(int *)(param` |
| kernel.c | 397462 | `} while (iVar12 < 2); \| return pcVar5; \| } \| if (pcVar6 == IRQ) { \| iVar12 = *(int *)(param_3 + 0xc); \| if (*(code **)(iVar12 + 0x6ac) == Un` |
| kernel.c | 397573 | `pcVar5 = (code *)FUN_00245d5c(puVar7,param_3,param_1); \| return pcVar5; \| } \| if (pcVar6 != IRQ) { \| if (pcVar6 == DataAbort) { \| pcVar6 = *` |
| kernel.c | 397611 | `pcVar5 = (code *)FUN_0026b688(*(int *)(param_3 + 0xc) + 0x6ac); \| return pcVar5; \| } \| if (pcVar6 == IRQ) { \| pcVar5 = (code *)FUN_0026cc56(` |
| kernel.c | 397696 | `} \| goto LAB_002b0c70; \| } \| if (pcVar6 == IRQ) { \| param_3 = *(int *)(param_3 + 0xc); \| bVar15 = *(int *)(param_3 + 8) == 0; \| pcVar6 = Res` |
| kernel.c | 398752 | `} \| LAB_002b2542: \| *param_3 = local_2c >> 3; \| FUN_002f4fe6(0x100,0x200,0x10c,param_1,0x44,param_2,local_2c >> 3); \| return iVar3; \| } \| ` |
| kernel.c | 398780 | `FUN_006f2c00(0,s_PS_stack_nas_emm_msg_codec_msg_e_002b2b7c,0x5a,s_LOGGER_ASSERT_002b2b6c, \| s_encoded_length_is_different_than_002b2b38); \| ` |
| kernel.c | 398887 | `if (*param_3 < local_1c >> 3) { \| FUN_006f2c00(0,DAT_002b31fc,0x54,s_LOGGER_ASSERT_002b31ec,s_Buffer_out_of_bound_002b31d8); \| } \| FUN_002f4` |
| kernel.c | 398971 | `} \| } \| *param_3 = local_24 >> 3; \| FUN_002f4fe6(0x200,0x100,0x11e,param_1,0x24,param_2,local_24 >> 3); \| return iVar3; \| } \| ` |
| kernel.c | 400053 | `else { \| *(undefined4 *)(iVar2 + 8) = 1; \| *(undefined4 *)(iVar2 + 0x10) = 7; \| local_38 = iVar2 + 0x2000; \| *(undefined4 *)(iVar2 + 0x2418)` |
| kernel.c | 408339 | `local_30[0] = uVar6; \| if (uVar3 << 3 <= local_30[0]) { \| LAB_002c2fc6: \| FUN_002f4fe6(0x200,0x100,0x10b,param_1,0x24,param_2,*param_3); \| r` |
| kernel.c | 408610 | `local_2c = uVar6; \| LAB_002c3a1a: \| *param_3 = local_2c >> 3; \| FUN_002f4fe6(0x100,0x200,0x108,param_1,0x134,param_2,local_2c >> 3); \| retur` |
| kernel.c | 409977 | `uVar5 = iVar4 + 0x3fU & 0xffffffc0; \| *(uint *)(DAT_002c5738 + 0x18) = uVar5 + 0x1000; \| *(uint *)(iVar2 + 0xc) = uVar5; \| *(uint *)(iVar2 +` |
| kernel.c | 412511 | `local_20 = (char *)FUN_00354c1e(6); \| if (local_20 != (char *)0x1f44) { \| uVar4 = FUN_006fd49c(s_Get_RF_NV_tx_gain_len_error___d__002c97ac,l` |
| kernel.c | 412952 | `} \| iVar5 = *(int *)(iVar2 + -0x48); \| LAB_002cdaca: \| iVar5 = iVar5 + 0x200; \| goto LAB_002cd14e; \| } \| bVar14 = iVar5 == 0x152;` |
| kernel.c | 416138 | `thunk_FUN_006fb59e(&DAT_002d0e64,DAT_002d1afc,0xe66,uVar4); \| } \| iVar5 = param_2 + uVar12 * 2 + 0x288; \| iVar6 = *(int *)(iVar2 + -0xc) + 0` |
| kernel.c | 417708 | `iVar4 = param_2 + uVar13 * 2; \| iVar7 = *(int *)(iVar2 + 0x38); \| LAB_002d8a18: \| iVar7 = iVar7 + 0x200; \| goto LAB_002d4296; \| } \| bVar16 =` |
| kernel.c | 422494 | `iVar3 = piVar2[-0x12]; \| LAB_002dd456: \| iVar5 = (int)param_1 + uVar10 * 2; \| iVar3 = iVar3 + 0x200; \| } \| else { \| if (iVar3 != 0x152) goto` |
| kernel.c | 424906 | `iVar4 = piVar2[-0x12]; \| LAB_002df39a: \| iVar5 = (int)param_1 + uVar10 * 2; \| iVar4 = iVar4 + 0x200; \| } \| else { \| if (iVar4 != 0x152) goto` |
| kernel.c | 427446 | `else { \| FUN_006fd7c8(iVar2 + 0x1a4,param_9,0xf); \| } \| FUN_00101c50(param_1,0x2002,iVar2); \| return 0; \| } \| ` |
| kernel.c | 427460 | `undefined4 uVar1; \|  \| uVar1 = FUN_006f3afa(8,0,1,0x281,0x61c); \| FUN_00101c50(param_1,0x2006,uVar1); \| return 0; \| } \| ` |
| kernel.c | 427759 | `} \| *(undefined1 *)(iVar5 + 0xc) = 1; \| LAB_002e51e2: \| FUN_00101c50(param_1,0x2002,iVar5); \| return; \| } \| iVar5 = FUN_006da35c();` |
| kernel.c | 433434 | `case 0x107: \| puVar5 = &DAT_00002546; \| iVar4 = *DAT_002f5350; \| if (param_1 == 0x200) { \| param_1 = *(uint *)(DAT_002f534c + iVar4 * 4); \| ` |
| kernel.c | 433635 | `uVar6 = 0xa4; \| puVar5 = &DAT_00002575; \| iVar4 = *DAT_002f58b0; \| if (param_1 == 0x200) { \| param_1 = *(uint *)(DAT_002f534c + iVar4 * 4); ` |
| kernel.c | 433702 | `param_1 = *(uint *)(iVar4 + *piVar3 * 4); \| } \| } \| else if (param_1 == 0x200) { \| param_1 = *(uint *)(iVar2 + *piVar3 * 4); \| } \| if (param` |
| kernel.c | 433713 | `param_2 = *(uint *)(iVar4 + *piVar3 * 4); \| } \| } \| else if (param_2 == 0x200) { \| if (bVar1) { \| iVar4 = *DAT_002f58b0; \| }` |
| kernel.c | 435594 | `iVar3 = 1; \| } \| *param_3 = local_24 >> 3; \| FUN_002f4fe6(0x100,0x200,0x120,param_1,0x110,param_2,local_24 >> 3); \| return iVar3; \| } \| ` |
| kernel.c | 436131 | `LAB_002f89aa: \| iVar4 = 1; \| LAB_002f890a: \| FUN_002f4fe6(0x200,0x100,0x11f,param_1,0x1cc,param_2,*local_28); \| return iVar4; \| } \| ` |
| kernel.c | 436236 | `} \| } \| *param_3 = local_2c >> 3; \| FUN_002f4fe6(0x100,0x200,0x12e,param_1,0x988,param_2,local_2c >> 3); \| return iVar5; \| } \| ` |
| kernel.c | 436308 | `local_2c = uVar6; \| LAB_002f9f14: \| *param_3 = local_2c >> 3; \| FUN_002f4fe6(0x100,0x200,0x130,param_1,0x994,param_2,local_2c >> 3); \| retur` |
| kernel.c | 436460 | `} \| LAB_002fa260: \| *param_3 = local_24 >> 3; \| FUN_002f4fe6(0x100,0x200,0x129,param_1,0x110,param_2,local_24 >> 3); \| return iVar3; \| } \| ` |
| kernel.c | 436671 | `LAB_002fa668: \| iVar4 = 1; \| LAB_002fa52a: \| FUN_002f4fe6(0x200,0x100,0x128,param_1,0x120,param_2,*param_3); \| return iVar4; \| LAB_002fa66c:` |
| kernel.c | 436844 | `} \| } \| *param_3 = local_2c >> 3; \| FUN_002f4fe6(0x100,0x200,0x12a,param_1,0x18c,param_2,local_2c >> 3); \| return iVar3; \| } \| ` |
| kernel.c | 436916 | `} \| LAB_002fc6a2: \| *param_3 = local_24 >> 3; \| FUN_002f4fe6(0x100,0x200,300,param_1,0x110,param_2,local_24 >> 3); \| return iVar3; \| } \| ` |
| kernel.c | 436954 | `s_Offset_is_not_byte_aligned_002fcab4); \| } \| *param_3 = local_1c >> 3; \| FUN_002f4fe6(0x100,0x200,0x135,param_1,0x10,param_2,local_1c >> 3)` |
| kernel.c | 437008 | `FUN_006f4a98(0x17,iVar4); \| } \| LAB_002fc94c: \| FUN_002f4fe6(0x200,0x100,0x135,param_1,0x10,param_2,*param_3); \| return iVar2; \| } \| ` |
| kernel.c | 443077 | `} \| LAB_003079be: \| *param_3 = local_2c >> 3; \| FUN_002f4fe6(0x100,0x200,0x113,param_1,0x20,param_2,local_2c >> 3); \| return iVar4; \| } \| ` |
| kernel.c | 443151 | `} \| iVar2 = 1; \| LAB_00307d2c: \| FUN_002f4fe6(0x200,0x100,0x110,param_1,0x34,param_2,*param_3); \| return iVar2; \| } \| ` |
| kernel.c | 443212 | `s_Offset_is_not_byte_aligned_00307fe4); \| } \| *param_3 = local_1c >> 3; \| FUN_002f4fe6(0x100,0x200,0x111,param_1,0x20,param_2,local_1c >> 3)` |
| kernel.c | 443252 | `iVar3 = FUN_002f77d8(param_1,local_2c,&local_3c); \| if (iVar3 != 0) { \| LAB_00308602: \| FUN_002f4fe6(0x200,0x100,0x119,param_1,0x23c,local_2` |
| kernel.c | 443622 | `} \| uVar3 = 1; \| } \| FUN_002f4fe6(0x200,0x100,0x114,param_1,0x10,param_2,*param_3); \| } \| return uVar3; \| }` |
| kernel.c | 443657 | `s_Failed_to_encode_LNAS_air_EMM_ID_00308cb8); \| } \| *param_3 = local_1c >> 3; \| FUN_002f4fe6(0x100,0x200,0x115,param_1,0x24,param_2,local_1c` |
| kernel.c | 443799 | `puVar1[10] = uVar2; \| *(undefined1 *)((int)puVar1 + 0x32) = 2; \| *(undefined2 *)(puVar1 + 0xb) = 0x3ff; \| *(undefined2 *)((int)puVar1 + 0x2e` |
| kernel.c | 443804 | `puVar1[0xd] = DAT_00309e30; \| *(undefined1 *)((int)puVar1 + 0x3e) = 2; \| *(undefined2 *)(puVar1 + 0xe) = 0x3ff; \| *(undefined2 *)((int)puVar` |
| kernel.c | 443805 | `*(undefined1 *)((int)puVar1 + 0x3e) = 2; \| *(undefined2 *)(puVar1 + 0xe) = 0x3ff; \| *(undefined2 *)((int)puVar1 + 0x3a) = 0x200; \| *(undefin` |
| kernel.c | 444067 | `} \| puVar6[iVar4 * 0x2cfd + uVar14 * 0x417 + 0x21] = iVar16; \| *(undefined2 *)(puVar6 + iVar4 * 0x2cfd + uVar14 * 0x417 + 0x24) = 0xffff; \| ` |
| kernel.c | 448965 | `(*(int *)(param_1 + 0xc) == *(int *)(iVar1 + 0x1ff4))) && \| (*(int *)(param_1 + 0x10) == *(int *)(iVar1 + 0x1ff8))) && \| (((*(int *)(param_1` |
| kernel.c | 448966 | `(*(int *)(param_1 + 0x10) == *(int *)(iVar1 + 0x1ff8))) && \| (((*(int *)(param_1 + 0x14) == *(int *)(iVar1 + 0x1ffc) && \| (*(int *)(param_1 ` |
| kernel.c | 448967 | `(((*(int *)(param_1 + 0x14) == *(int *)(iVar1 + 0x1ffc) && \| (*(int *)(param_1 + 0x18) == *(int *)(iVar1 + 0x2000))) && \| ((*(int *)(param_1` |
| kernel.c | 450200 | `} \| LAB_00312b8a: \| } \| iVar18 = iVar4 + 0x2000; \| for (uVar15 = 0; piVar9 = DAT_00312e00, uVar15 < *(ushort *)(iVar18 + 0x38c); \| uVar15 = ` |
| kernel.c | 451102 | `FUN_006f2e88(DAT_00314400,0xa93,s_SEND_MSG_IND_LTE2W_MEAS_SCHEDULE_003143d0); \| } \| puVar3 = (undefined4 *) \| FUN_006f15ec(0x2008,0xbb,1,0x5` |
| kernel.c | 451418 | `FUN_006f2e88(DAT_00314d2c,0x128a,s_SEND_MSG_IND_LTE2W_GAPWRECK_REQ__00314d3c); \| } \| puVar4 = (undefined4 *) \| FUN_006f15ec(0x2008,0xc9,1,0x` |
| kernel.c | 452300 | ` \| uVar3 = (param_3 ^ param_2) - (param_2 >> 0x12 \| param_2 << 0xe); \| uVar1 = (param_1 ^ uVar3) - (uVar3 >> 0x15 \| uVar3 * 0x800); \| uVar2 ` |
| kernel.c | 452424 | `iVar2 = 6; \| } \| if ((bVar1 == 1) \|\| (bVar1 == 0x3a)) { \| *(uint *)(param_1 + 0x14) = (uVar5 & 0x8fffffff) + 0x20000000; \| FUN_00315a64(para` |
| kernel.c | 452433 | `if ((((int)((uint)pbVar6[iVar7 + 0xd] << 0x1b) < 0) && \| (iVar7 + (uint)(pbVar6[iVar7 + 0xc] >> 4) * 4 == uVar8)) && \| (-1 < (int)((uint)pbV` |
| kernel.c | 454293 | `uVar1 = 0; \| } \| FUN_0030d486(param_1 + 0x240,uVar1); \| FUN_0030d3ba(param_1 + 0x200,param_2); \| FUN_0030d310(param_1 + 0x254,param_3); \| re` |
| kernel.c | 457390 | `} \| else { \| if (uVar1 < 0x400) { \| if ((uint)param_1[0x3b] < 0x200) { \| if ('\x03' < *pcVar2) { \| FUN_006f4a98(0x2d,DAT_0031ab68 + 5); \| }` |
| kernel.c | 457403 | `goto LAB_0031aa4c; \| } \| } \| else if ((uint)param_1[0x3b] < 0x200) { \| if ('\x03' < *pcVar2) { \| FUN_006f4a98(0x2d,DAT_0031ab68 + 6); \| }` |
| kernel.c | 457517 | `} \| else { \| if ((0x1ff < uVar2) \|\| (0x1ff < (uint)param_1[0x3b])) { \| if ((uVar2 < 0x20000) && ((uint)param_1[0x3b] < 0x200)) { \| if ('\x03` |
| kernel.c | 457532 | `pbVar4 = pbVar4 + 3; \| goto LAB_0031b006; \| } \| if ((uVar2 < 0x2000000) && ((uint)param_1[0x3b] < 0x200)) { \| if ('\x03' < *pcVar1) { \| FUN_` |
| kernel.c | 457587 | `uVar10 = 0; \| bVar9 = *(byte *)(param_1 + 0xda) & 0x3f; \| } \| else if (uVar5 < 0x2000) { \| uVar10 = 1; \| uVar2 = uVar2 \| 0x10; \| bVar9 = (by` |
| kernel.c | 457714 | `} \| bVar10 = param_1[0xbc] == 0; \| } while (!bVar10); \| if ((param_1[0xdd] == 0) && ((uint)param_1[0x3b] < 0x200)) { \| if ('\x03' < *pcVar1)` |
| kernel.c | 457728 | `pbVar3 = pbVar2 + 1; \| *pbVar2 = bVar7; \| } \| else if (((uint)param_1[0xdc] < 0x100) && ((uint)param_1[0x3b] < 0x200)) { \| if ('\x03' < *pcV` |
| kernel.c | 457870 | `if ((((0xff < uVar2) \|\| (param_1[0xba] != 0)) \|\| ((param_1[0xb] != 0 && (param_1[0xbb] != 0))) \| ) \|\| (0x1ff < (uint)param_1[0x3b])) { \| if ` |
| kernel.c | 457883 | `pbVar4 = pbVar4 + 3; \| goto LAB_0031b834; \| } \| if ((uVar2 < 0x10000) && ((uint)param_1[0x3b] < 0x200)) { \| if ('\x03' < *pcVar1) { \| FUN_00` |
| kernel.c | 458414 | `pbVar5 = pbVar5 + 2; \| goto LAB_0031c596; \| } \| if ((uVar4 < 0x200) && ((uint)param_1[0x3b] < 0x200)) { \| if ('\x03' < *pcVar2) { \| FUN_006f` |
| kernel.c | 458429 | `pbVar5 = pbVar5 + 3; \| goto LAB_0031c596; \| } \| if ((uVar4 < 0x20000) && ((uint)param_1[0x3b] < 0x200)) { \| if ('\x03' < *pcVar2) { \| FUN_00` |
| kernel.c | 458446 | `pbVar5 = pbVar5 + 4; \| goto LAB_0031c596; \| } \| if ((uVar4 < 0x2000000) && ((uint)param_1[0x3b] < 0x200)) { \| if ('\x03' < *pcVar2) { \| FUN_` |
| kernel.c | 458487 | `,0); \| bVar3 = *(byte *)(param_1 + 0xda) & 0x80; \| } \| else if (uVar6 - 0x2001 < DAT_0031c558) { \| uVar4 = 0x10; \| uVar10 = 2; \| pbVar5 = (b` |
| kernel.c | 458591 | `goto LAB_0031c974; \| } \| if (((*(ushort *)((int)param_1 + 0x2ba) < 0x100) && (param_1[0xbc] == 0)) && \| ((uint)param_1[0x3b] < 0x200)) { \| i` |
| kernel.c | 458608 | `} \| if ((uint)param_1[0xdc] < 0x100) { \| if (*(ushort *)((int)param_1 + 0x2ba) < 0x100) { \| if ((param_1[0xbc] == 0) && ((uint)param_1[0x3b]` |
| kernel.c | 458624 | `goto LAB_0031c974; \| } \| } \| else if ((param_1[0xbc] == 0) && ((uint)param_1[0x3b] < 0x200)) { \| if ('\x03' < *pcVar6) { \| FUN_006f4a98(0x2d` |
| kernel.c | 458763 | `if ((param_1[0xba] == 0) && ((param_1[0xb] == 0 \|\| (param_1[0xbb] == 0)))) { \| if (((uint)param_1[0xdc] < 0x20) && ((uint)param_1[0x3b] < 0x` |
| kernel.c | 458775 | `goto LAB_0031cd76; \| } \| if ((((param_1[0xb] == 0) \|\| (param_1[0xbb] == 0)) && ((uint)param_1[0xdc] < 0x100)) && \| ((uint)param_1[0x3b] < 0x` |
| kernel.c | 458791 | `} \| } \| if ((*(ushort *)((int)param_1 + 0x2ba) < 0x100) && (param_1[0xbc] == 0)) { \| if (((uint)param_1[0xdc] < 0x100) && ((uint)param_1[0x3` |
| kernel.c | 458806 | `pbVar4 = pbVar4 + 4; \| goto LAB_0031cd76; \| } \| if (((uint)param_1[0xdc] < 0x10000) && ((uint)param_1[0x3b] < 0x200)) { \| if ('\x03' < *pcVa` |
| kernel.c | 458936 | `uVar8 = 0; \| } \| else { \| uVar3 = FUN_0030d4ee(param_1 + 0x200,iVar2); \| uVar4 = FUN_0030d594(param_1 + 0x1ec,iVar2); \| uVar5 = FUN_0030d534` |
| kernel.c | 460442 | `((*(char *)((int)param_1 + 0x56) == '\x04' && (*(char *)((int)param_1 + 0xd9) == '\0')) \| )) { \| if ((cVar2 != '\x04') && (iVar5 == 0)) { \| ` |
| kernel.c | 460449 | `} \| } \| LAB_0031e820: \| if ((((uint)param_1[0xdc] < 0x20000000) && (param_1[0xe2] != 0)) && \| ((uint)param_1[0x3b] < 0x1000)) { \| if ((*(cha` |
| kernel.c | 462147 | `if (puVar22[0xc] != 0) goto LAB_0032071e; \| } \| else { \| if ((((iVar20 != 2) && (iVar20 != 3)) && (iVar20 != 4)) \|\| ((uint)puVar22[0x3b] < 0` |
| kernel.c | 462968 | `undefined4 FUN_00321c7a(uint param_1) \|  \| { \| if (param_1 < 0x200000) { \| return 1; \| } \| return 0;` |
| kernel.c | 462981 | `undefined4 FUN_00321c88(uint param_1) \|  \| { \| if (param_1 < 0x20000000) { \| return 1; \| } \| return 0;` |
| kernel.c | 473346 | `if (*(ushort *)(param_1 + 0x42) == uVar13) break; \| pcVar10 = *(char **)(param_1 + (uVar8 & 0x1ff) * 4 + 0x4c); \| if (pcVar10 == (char *)0x0` |
| kernel.c | 473356 | `else { \| if (pcVar10 == (char *)0x0) { \| uVar12 = (uint)*(ushort *)(iVar7 + 0x10); \| if (uVar12 == 0x200) break; \| LAB_0032f00a: \| *(char *)` |
| kernel.c | 473373 | `pcVar11 = pcVar10; \| uVar1 = *(ushort *)(pcVar11 + 8); \| if (uVar1 != uVar14) { \| if (*(ushort *)(iVar7 + 0x10) == 0x200) { \| bVar3 = true; ` |
| kernel.c | 473396 | `} \| if (*pcVar11 == '\0') { \| uVar12 = (uint)*(ushort *)(iVar7 + 0x10); \| if (uVar12 != 0x200) goto LAB_0032f00a; \| iVar9 = 0x1000; \| LAB_00` |
| kernel.c | 474563 | `uVar10 = uVar4; \| if (uVar13 == uVar4) { \| for (; (iVar5 = FUN_0032e072(pbVar12,uVar10), iVar5 != 0 && \| ((uVar4 + 0x200 & 0x3ff) != uVar10)` |
| kernel.c | 474565 | `for (; (iVar5 = FUN_0032e072(pbVar12,uVar10), iVar5 != 0 && \| ((uVar4 + 0x200 & 0x3ff) != uVar10)); uVar10 = uVar10 + 1 & 0x3ff) { \| } \| uVa` |
| kernel.c | 474611 | `FUN_0032ed1c(pbVar12); \| } \| LAB_00330616: \| FUN_0032f28c(pbVar12,pbVar12 + 0x2c,0x200,0x3ff,*puVar16); \| uVar4 = uVar10; \| } \| else {` |
| kernel.c | 475121 | `if ('\x02' < cVar1) { \| FUN_006f4a98(0x19,DAT_003318f4 + -1); \| } \| FUN_001262aa(0,0x2000000); \| *(undefined2 *)(iVar8 + 0x1054) = 0; \| } \| ` |
| kernel.c | 477055 | `if ((*(int *)(param_1 + 0xc) == 1) && (param_4 != (int *)0x0)) { \| uVar4 = *(uint *)(iVar5 + 0x14) & 0x8fffffff; \| if (*(uint *)(iVar5 + 0x1` |
| kernel.c | 477246 | `param_2 = (undefined4 *)*puVar2; \| *puVar2 = 0; \| if ((uint)puVar2[4] < 0x51) { \| uVar1 = (puVar2[5] & 0x8fffffff) + 0x20000000; \| } \| else ` |
| kernel.c | 482579 | `*(undefined2 *)(iVar7 + 0x20) = uVar12; \| *(undefined1 *)(iVar7 + 0x22) = *(undefined1 *)((int)param_1 + 3); \| *(char *)(iVar7 + 0x23) = (ch` |
| kernel.c | 483736 | `break; \| case 0x3b: \| case 0x62: \| pcVar3 = IRQ; \| break; \| case 0x3f: \| case 0x40:` |
| kernel.c | 484818 | `puVar2 = (uint *)(param_2 + (uint)bVar1 * 0x50); \| *(undefined2 *)(puVar2 + 0xf) = 0x50; \| *(undefined2 *)((int)puVar2 + 0x3e) = 0x50; \| *pu` |
| kernel.c | 484831 | `puVar2 = (uint *)(param_2 + (uint)bVar1 * 0x50); \| *(undefined2 *)(puVar2 + 0xf) = 0x1bb; \| *(undefined2 *)((int)puVar2 + 0x3e) = 0x1bb; \| *` |
| kernel.c | 484851 | `bVar1 = *(byte *)(param_1 + 0x14); \| *(byte *)(param_1 + 0x14) = bVar1 + 1; \| puVar2 = (uint *)(param_2 + (uint)bVar1 * 0x50); \| *puVar2 = *` |
| kernel.c | 485408 | `iVar6 = 3; \| } \| *(int *)(iVar1 + 0x40) = (0x10 << (uVar7 & 0xff)) << iVar6; \| *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) \| uVar2 >> ` |
| kernel.c | 485414 | `uVar7 = *DAT_0034174c; \| *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) \| uVar7 >> 0x13 & 0x800; \| *(uint *)(iVar1 + 0x34) = *(uint *)(iV` |
| kernel.c | 487144 | `cVar4 = FUN_00344880(~uVar8); \| local_8a = cVar4 - 1; \| sVar7 = FUN_00344838(&local_22c); \| local_8e = sVar7 * 0x200 + 0x1ff; \| } \| local_8b` |
| kernel.c | 487177 | `cVar4 = FUN_00344880(~uVar8); \| local_8a = cVar4 - 1; \| sVar7 = FUN_00344838(&local_22c); \| local_8e = sVar7 * 0x200 + 0x1ff; \| } \| if ((int` |
| kernel.c | 493971 | `if ((*(int *)param_1 << 10 < 0) && (param_1[0x33] != (code)0x0)) { \| uVar4 = (*puVar2 & 0xffffffc3 \| 0x3c3) + 0x10; \| *puVar2 = uVar4; \| *pu` |
| kernel.c | 494306 | `if (param_1 != 0) { \| iVar1 = DAT_0034c170; \| } \| *(undefined4 *)(iVar1 + 0x60) = 0x2000; \| return; \| } \| ` |
| kernel.c | 494322 | `uint uVar1; \|  \| if (param_1 == 0) { \| uVar1 = *(uint *)(_DAT_0034c178 + 0x200) & 0xfffffffe; \| } \| else { \| uVar1 = *(uint *)(_DAT_0034c178` |
| kernel.c | 494325 | `uVar1 = *(uint *)(_DAT_0034c178 + 0x200) & 0xfffffffe; \| } \| else { \| uVar1 = *(uint *)(_DAT_0034c178 + 0x200) \| 1; \| } \| *(uint *)(_DAT_003` |
| kernel.c | 494327 | `else { \| uVar1 = *(uint *)(_DAT_0034c178 + 0x200) \| 1; \| } \| *(uint *)(_DAT_0034c178 + 0x200) = uVar1; \| return; \| } \| ` |
| kernel.c | 496586 | ` \| if (0x7c < param_1) { \| if (0x30 < param_1 - 0x3cf) { \| if (param_1 - 0x200 < 0x176) { \| *param_2 = (short)param_1 + -0x183; \| uVar1 = 1;` |
| kernel.c | 500396 | `if (param_1 != 0) { \| puVar1 = DAT_0035396c; \| } \| *puVar1 = 0x2000; \| return; \| } \| ` |
| kernel.c | 501710 | `} \| FUN_006f5928(1,s_T_DIAG_00358218,DAT_00358214,0,0,iVar1 + 7U & 0xfffffff8,0x1000,0xd8,1, \| s_Q_DIAG_0035820c,iVar2 + 3U & 0xfffffffc,10,` |
| kernel.c | 501715 | `if ((iVar1 == 0) \|\| (iVar2 == 0)) { \| FUN_006fb8b0(DAT_00358240,s_os_cfg_c_00358170,0x54); \| } \| FUN_006f5928(4,s_T_AUDIO_00358250,DAT_00358` |
| kernel.c | 501744 | `} \| FUN_006f5928(1,s_T_DIAG_00358218,DAT_00358390,0,0,iVar1 + 7U & 0xfffffff8,0x1000,0xd8,1, \| s_Q_DIAG_0035820c,iVar2 + 3U & 0xfffffffc,10,` |
| kernel.c | 501749 | `if ((iVar1 == 0) \|\| (iVar2 == 0)) { \| FUN_006fb8b0(DAT_00358394,s_os_cfg_c_00358170,0x6b); \| } \| FUN_006f5928(4,s_T_AUDIO_00358250,DAT_00358` |
| kernel.c | 504194 | `else { \| if (param_2 != (undefined4 *)0x0) { \| *param_1 = DAT_0035e6a8; \| *param_2 = 0x20000; \| return 1; \| } \| pcVar1 = s_get_deltanv_info_` |
| kernel.c | 504917 | `} \| iVar2 = iVar2 + 1; \| } while (-1 < iVar1); \| *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x2000) = *(undefined4 *)(param_1 + 0x24); \| if ` |
| kernel.c | 505388 | `} \| } \| else { \| if (param_1 != 0x200) goto LAB_00361a0c; \| if (param_2 != 0) goto LAB_00361a0e; \| } \| }` |
| kernel.c | 505458 | `else { \| if (param_1 != 0x400) { \| if (param_1 < 0x401) { \| if (((param_1 != 0x80) && (param_1 != 0x100)) && (param_1 != 0x200)) goto LAB_00` |
| kernel.c | 505491 | `if (iVar1 < 0x101) { \| if ((((iVar1 == 1) \|\| (iVar1 == 2)) \|\| (iVar1 == 4)) \|\| (iVar1 == 0x80)) goto LAB_00361af8; \| } \| else if (((iVar1 ==` |
| kernel.c | 505522 | `} \| } \| else { \| if (iVar1 != 0x200) { \| if (iVar1 == 0x400) { \| iVar1 = (uint)*(ushort *)((int)param_1 + 6) * (uint)*(ushort *)(param_1 + 1` |
| kernel.c | 506904 | `if ('\x01' < *DAT_00364dd4) { \| FUN_006f4bcc(0x1f,DAT_00364dd8 + 5,param_3,param_4,param_4); \| } \| puVar1 = (undefined4 *)FUN_006f15ec(0x200` |
| kernel.c | 507348 | `iVar7 = DAT_00365b34; \| iVar2 = DAT_00365b30; \| uVar4 = uVar4 + 1; \| } while (uVar4 < 0x200); \| uVar6 = uVar6 + 1; \| } while (uVar6 < 8); \| ` |
| kernel.c | 507550 | `int iVar2; \| undefined4 uVar3; \|  \| puVar1 = (undefined4 *)FUN_006f15ec(0x2008,0x9c,1,0x53f,0xe7f); \| *puVar1 = 0x2b7; \| FUN_006f4a34(puVar1` |
| kernel.c | 507903 | `int iVar2; \| undefined4 uVar3; \|  \| puVar1 = (undefined4 *)FUN_006f15ec(0x2008,0xb9,1,0x53f,0x1000); \| *puVar1 = 0xb9; \| FUN_006f4a34(puVar1` |
| kernel.c | 507930 | `int iVar3; \| undefined4 uVar4; \|  \| puVar2 = (undefined4 *)FUN_006f15ec(0x2008,0xcc,1,0x53f,0x101f); \| *puVar2 = 0xcc; \| FUN_006f4a34(puVar2` |
| kernel.c | 507961 | `int iVar3; \| undefined4 uVar4; \|  \| puVar2 = (undefined4 *)FUN_006f15ec(0x2008,0xc0,1,0x53f,0x1043); \| *puVar2 = 0xc0; \| FUN_006f4a34(puVar2` |
| kernel.c | 507991 | `int iVar2; \| undefined *puVar3; \|  \| puVar1 = (undefined4 *)FUN_006f15ec(0x2008,0xc6,1,0x53f,0x10a5); \| *puVar1 = 0xc6; \| FUN_006f4a34(puVar` |
| kernel.c | 508017 | `int iVar2; \| undefined4 uVar3; \|  \| puVar1 = (undefined4 *)FUN_006f15ec(0x2008,0xbd,1,0x53f,&DAT_000010f8); \| *puVar1 = 0xbd; \| uVar3 = para` |
| kernel.c | 508040 | `int iVar2; \| undefined4 uVar3; \|  \| puVar1 = (undefined4 *)FUN_006f15ec(0x2008,0xbd,1,0x53f,&DAT_000010f8); \| *puVar1 = 0xbd; \| uVar3 = para` |
| kernel.c | 509137 | `undefined4 *puVar1; \|  \| if (param_1 == 0) { \| puVar1 = (undefined4 *)(*(int *)(DAT_0036a454 + 0x14) + 0x2000); \| } \| else { \| puVar1 = (und` |
| kernel.c | 511955 | `(uint)(&DAT_00009600 + \| ((((param_2 & 0x7ffff) >> 3) - ((param_4 & 0x7ffff) >> 3)) - (uint)(uVar2 < 8))) \| % 0x9600 << 3 \| iVar1 * 0x80000;` |
| kernel.c | 512149 | `} \| else { \| uVar1 = FUN_006fd49c(s_DAC_p_handle_>assigned_state__d_i_0036ffbc); \| thunk_FUN_006fb59e(&DAT_0036fed0,s_drv_bb_rf_wcdma_iram_c` |
| kernel.c | 512241 | `local_18 = local_18 + 0x10000; \| break; \| case 3: \| local_18 = local_18 + 0x20000; \| break; \| case 4: \| local_18 = local_18 + 0x30000;` |
| kernel.c | 515663 | `thunk_FUN_0087a726(0); \| FUN_008b5694(1); \| FUN_0087a78c(1); \| thunk_FUN_0087a716(*DAT_00375288 + 0x20080U >> 1); \| uVar3 = 0; \| do { \| uVar` |
| kernel.c | 516991 | `*(uint *)(*piVar5 + 0x48) = uVar8; \| } \| else if (cVar1 == '\x01') { \| iVar9 = ((*(uint *)(iVar6 + 0x48) & 0xffff9fff) + 0x2000 & 0xfffe7fff` |
| kernel.c | 517025 | `*(uint *)(*piVar5 + 0x48) = uVar8; \| } \| else if (cVar1 == '\x02') { \| iVar9 = ((*(uint *)(iVar6 + 0x48) & 0xffff9fff) + 0x2000 & 0xfffe7fff` |
| kernel.c | 517425 | `FUN_003539fc(piVar1[4]); \| iVar2 = (*(code *)param_1[1])(0x400); \| piVar1[2] = iVar2; \| iVar2 = (*(code *)param_1[1])(0x200); \| piVar1[3] = ` |
| kernel.c | 520069 | `puVar2[6] = 0; \| puVar2[7] = 0; \| FUN_006f1460(*(undefined4 *)(puVar2 + 0xe),0x1000); \| FUN_006f1460(*(undefined4 *)(puVar2 + 0x12),0x2000);` |
| kernel.c | 521054 | `param_1[2] = param_3; \| break; \| case 2: \| if (2 < param_3 - 0x200) { \| FUN_006fb8b0(DAT_00384fc8,DAT_00384fc0,0x58a); \| } \| param_1[3] = pa` |
| kernel.c | 525362 | `undefined4 local_205c; \| undefined1 auStack_2058 [8240]; \|  \| FUN_006fe9dc(auStack_2058,0x2000); \| local_2068 = 0; \| local_205c = 0; \| iVar1` |
| kernel.c | 525733 | `undefined1 auStack_2058 [8244]; \|  \| FUN_00390634(); \| FUN_006fe9dc(auStack_2058,0x2000); \| uVar8 = 0; \| uStack_205c = 0; \| iVar1 = FUN_006f` |
| kernel.c | 526003 | `undefined4 local_2058 [2]; \| undefined1 auStack_2050 [8248]; \|  \| FUN_006fe9dc(auStack_2050,0x2000); \| uVar4 = 0; \| local_2058[0] = 0; \| iVa` |
| kernel.c | 528458 | `if (param_2[2] == 0x104) goto switchD_003966ba_caseD_40a; \| break; \| case 2: \| if (param_2[3] == 0x200) { \| puVar1 = (undefined4 *)(uint)*(b` |
| kernel.c | 528561 | `undefined4 FUN_003970d6(int param_1,int *param_2,undefined4 param_3,undefined4 param_4) \|  \| { \| if ((*param_2 == 2) && (param_2[3] == 0x200` |
| kernel.c | 528598 | `} \| else { \| if (iVar3 == 2) { \| if ((param_2[3] == 0x200) && (*(char *)((int)param_2 + 0x15eda) == '\0')) { \| *(undefined2 *)(param_2 + 0x1` |
| kernel.c | 528700 | `piVar4 = param_2 + 0x119; \| iVar7 = (int)param_2 + DAT_00397674 + 0xd4; \| if (iVar3 == 2) { \| if (param_2[3] == 0x200) { \| LAB_003975e4: \| p` |
| kernel.c | 528854 | `if (iVar1 == 2) { \| iVar3 = FUN_006b388e(iVar3); \| if (iVar3 == 0) { \| if (param_2[3] == 0x200) { \| FUN_00856378(param_1,param_2); \| FUN_008` |
| kernel.c | 528947 | ` \| uVar1 = 0; \| if (*param_2 == 2) { \| if (param_2[3] == 0x200) { \| FUN_007a48ea(); \| } \| else {` |
| kernel.c | 528968 | ` \| { \| if (*param_2 == 2) { \| if (param_2[3] == 0x200) goto LAB_0039902a; \| } \| else if ((*param_2 == 4) && (param_2[5] == 0x402)) { \| LAB_0` |
| kernel.c | 533602 | `local_24 = 0; \| local_28 = iVar3; \| FUN_004158d6(&local_28,puVar2); \| *param_2 = (short)((local_24 + 7U) * 0x2000 >> 0x10); \| uVar4 = FUN_00` |
| kernel.c | 539480 | `if ((*(byte *)(*(int *)(iVar2 + 0x96c) + 0x6c) & 0x20) != 0) { \| *(undefined1 *)(*(int *)piVar1[1] + 0xa4) = 1; \| } \| if ((*(ushort *)(*(int` |
| kernel.c | 544027 | `case 7: \| uVar2 = *param_1; \| puVar4 = &local_8; \| uVar3 = 0x2003; \| break; \| case 8: \| uVar2 = *param_1;` |
| kernel.c | 544032 | `case 8: \| uVar2 = *param_1; \| puVar4 = &local_8; \| uVar3 = 0x200; \| } \| puStack_10 = param_1; \| uStack_c = param_2;` |
| kernel.c | 544231 | `goto LAB_003aeaf6; \| } while (local_44 != 1); \| if (param_5 != -1) { \| FUN_003af414(&local_8b4,0,0x200); \| local_50 = 0x200; \| iVar1 = FUN_0` |
| kernel.c | 544232 | `} while (local_44 != 1); \| if (param_5 != -1) { \| FUN_003af414(&local_8b4,0,0x200); \| local_50 = 0x200; \| iVar1 = FUN_003ae5a2(auStack_70,&l` |
| kernel.c | 546508 | `if (param_2 != 0) { \| piVar3 = *(int **)(DAT_003e3798 + param_1 * 4); \| if ((piVar3 != (int *)0x0) && (*piVar3 == 2)) { \| if (piVar3[3] == 0` |
| kernel.c | 551004 | `uVar1 = FUN_006fd49c(DAT_003b7278); \| thunk_FUN_006fb59e(s_Card_ID_<_CARD_MAXID_003b6dfc,s_wl1c_meas_c_003b64f8,0x3c7,uVar1); \| } \| if ((((-` |
| kernel.c | 551824 | `} \| } \| uVar11 = uVar11 + 1; \| } while (uVar11 < 0x200); \| puVar5 = DAT_003b84f4; \| uVar15 = uVar12; \| if (uVar12 == 0xffffffff) {` |
| kernel.c | 551836 | `*puVar5,puVar5[1]), uVar15 = uVar11, iVar13 != 0)) break; \| uVar11 = uVar11 + 1; \| uVar15 = uVar12; \| } while (uVar11 < 0x200); \| } \| pcVar4` |
| kernel.c | 551890 | `bVar1 = *(byte *)(DAT_003b84e0 + param_1 * 0x814); \| if (bVar1 < 0x14) goto LAB_003b83b0; \| if (((*(char *)(DAT_003b84dc + (uint)*(byte *)(i` |
| kernel.c | 551896 | `else { \| if (*(byte *)(iVar9 + -0x2050) < 0x14) goto LAB_003b83b0; \| if (((*(char *)(DAT_003b84dc + (uint)*(byte *)(iVar9 + -0x2047)) == par` |
| kernel.c | 552212 | `} \| LAB_003b888c: \| uVar5 = uVar5 + 1; \| } while (uVar5 < 0x200); \| } \| } \| else if ((param_1 - 4 < 4) &&` |
| kernel.c | 552232 | `} \| LAB_003b88e6: \| uVar5 = uVar5 + 1; \| } while (uVar5 < 0x200); \| } \| return; \| }` |
| kernel.c | 552256 | `if (((int)(uVar2 << 0x1e) < 0) && \| (((((param_1 - 0x25beU < 0x115 \|\| (param_1 == 0x19c)) \|\| (param_1 == 0x1b5)) \|\| \| ((((param_1 == 0x1ce \|` |
| kernel.c | 552366 | `} \| LAB_003b8c50: \| FUN_006f4d8e(); \| FUN_006fd7c8(DAT_003b8f78,param_1 + 4,0x200); \| FUN_006fd7c8(DAT_003b8f7c + uVar3 * 0x300,param_1 + 4,` |
| kernel.c | 552367 | `LAB_003b8c50: \| FUN_006f4d8e(); \| FUN_006fd7c8(DAT_003b8f78,param_1 + 4,0x200); \| FUN_006fd7c8(DAT_003b8f7c + uVar3 * 0x300,param_1 + 4,0x20` |
| kernel.c | 552436 | `} \| } \| uVar5 = uVar5 + 1; \| } while (uVar5 < 0x200); \| uVar5 = 0; \| do { \| if (((char)param_1[uVar5 * 4 + 7] == '\x01') &&` |
| kernel.c | 552483 | `} \| } \| uVar5 = uVar5 + 1; \| } while (uVar5 < 0x200); \| uVar5 = 0x20; \| do { \| if ((((char)param_1[uVar5 * 4 + 7] == '\x01') && (param_1[1] ` |
| kernel.c | 552537 | `} \| } \| uVar3 = uVar3 + 1; \| } while (uVar3 < 0x200); \| uVar3 = 0x20; \| do { \| if ((((char)param_1[uVar3 * 4 + 7] == '\x01') && (param_1[2] ` |
| kernel.c | 552934 | `*(undefined1 *)(iVar3 + 3) = 0; \| } \| uVar4 = uVar4 + 1; \| } while (uVar4 < 0x200); \| return; \| } \| ` |
| kernel.c | 553132 | `iVar6 = 0; \| local_3c = param_1 * 0x205; \| for (uVar11 = 0; psVar1 = DAT_003ba16c, uVar11 < local_2c; uVar11 = uVar11 + 1) { \| if (*(ushort ` |
| kernel.c | 553348 | `} \| iVar7 = uVar6 * 0x58 + 10; \| FUN_003b6c8c(*(undefined2 *)(param_1[2] + iVar7),*(undefined1 *)(param_1[2] + uVar6 * 0x58), \| 0x200,param_` |
| kernel.c | 553580 | `iVar3 = DAT_003ba5fc + param_1 * 0x21c; \| *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(iVar3 + 0x14); \| *(undefined1 *)(puVar4 + 4) = *(und` |
| kernel.c | 554417 | `} \| *(undefined2 *)(iVar6 + 4) = *(undefined2 *)(iVar7 + 0x15e); \| *(undefined1 *)(iVar6 + 0xb) = *(undefined1 *)(iVar7 + 0x15c); \| *(undefi` |
| kernel.c | 554423 | `else { \| *(undefined2 *)(iVar6 + 4) = *(undefined2 *)(iVar7 + 0x15e); \| *(undefined1 *)(iVar6 + 0xb) = *(undefined1 *)(iVar7 + 0x15c); \| *(u` |
| kernel.c | 554597 | `iVar3 = FUN_003bb4d0(*(undefined1 *)(iVar5 + 0x15c),*(undefined2 *)(iVar4 + 4)); \| if (iVar3 != 0) { \| *(undefined1 *)(iVar4 + 0xb) = *(unde` |
| kernel.c | 555201 | `*(undefined1 *)(param_1 + 0xa20) = (undefined1)local_18[0]; \| *(char *)(param_1 + 0xa21) = (char)local_18[1]; \| iVar2 = FUN_00950eb4(param_1` |
| kernel.c | 555778 | `} \| } \| uVar7 = uVar7 + 1; \| } while (uVar7 < 0x200); \| return; \| } \| ` |
| kernel.c | 555982 | `puVar12 = param_2; \| if ((uint *)0x1 < param_2) { \| uVar4 = FUN_006fd49c(DAT_003bda98); \| thunk_FUN_006fb59e(DAT_003bda9c + 0x904,DAT_003bda` |
| kernel.c | 556339 | `} \| iVar4 = DAT_003be33c; \| uVar3 = FUN_00495ddc(*(undefined2 *)(DAT_003be33c + 2),0,0,param_2); \| if (*(short *)(iVar4 + 4) == 0x200) { \| F` |
| kernel.c | 556515 | `if ('\x01' < *pcVar2) { \| FUN_006f4c52(0x1f,DAT_003bec24,2,uVar7,*(undefined2 *)(iVar10 + 0x16)); \| } \| if (*(ushort *)(iVar10 + 0x16) < 0x2` |
| kernel.c | 558453 | `iVar7 = DAT_003c3ff8 + param_2 * 0x1dc0; \| FUN_006f4a34(local_520,iVar7,0x500); \| uVar5 = 0; \| iVar8 = DAT_003c4008 + param_2 * 0x200; \| do ` |
| kernel.c | 558512 | `uint uVar6; \| int iVar7; \|  \| uVar6 = (uint)*(byte *)(param_1 + 0x200); \| if (1 < uVar6) { \| uVar2 = FUN_006fd49c(DAT_003c400c,uVar6,param_3` |
| kernel.c | 558518 | `thunk_FUN_006fb59e(DAT_003c3ff4 + 0xc,DAT_003c3ff4,&DAT_00003667,uVar2); \| } \| uVar5 = 0; \| iVar7 = DAT_003c4008 + uVar6 * 0x200; \| do { \| p` |
| kernel.c | 558593 | `pbVar6 = DAT_003c401c; \| FUN_00744974(DAT_003c4020, \| (uint)DAT_003c401c[4] << 0x1c \| (uint)*DAT_003c401c << 0x18 \| local_28 << 0x14 \| \| 0x2` |
| kernel.c | 559079 | `uVar16 = FUN_006fd49c(DAT_003c48a4,uVar18); \| thunk_FUN_006fb59e(DAT_003c48a8 + 0xc,DAT_003c48a8,0x2e4b,uVar16); \| } \| iVar20 = DAT_003c48ac` |
| kernel.c | 559080 | `thunk_FUN_006fb59e(DAT_003c48a8 + 0xc,DAT_003c48a8,0x2e4b,uVar16); \| } \| iVar20 = DAT_003c48ac + uVar18 * 0x200; \| FUN_006f4a34(&local_328,i` |
| kernel.c | 559893 | `uVar1 = FUN_006fd49c(DAT_003c5ab8); \| thunk_FUN_006fb59e(DAT_003c5a60 + 0x904,DAT_003c5a60,&DAT_000036ab,uVar1,param_3,param_4); \| } \| iVar4` |
| kernel.c | 560292 | `} \| LAB_003c72ea: \| uVar4 = uVar4 + 1; \| } while (uVar4 < 0x200); \| } \| return; \| }` |
| kernel.c | 560431 | `FUN_003b7d0c(uVar13,uVar11,uVar14); \| } \| uVar11 = uVar11 + 1; \| } while (uVar11 < 0x200); \| return iVar3; \| } \| if (iVar12 < 4) goto LAB_00` |
| kernel.c | 560521 | `*(undefined1 *)(iVar4 + 3) = 0; \| } \| uVar7 = uVar7 + 1; \| } while (uVar7 < 0x200); \| return; \| } \| ` |
| kernel.c | 560622 | `iVar3 = DAT_003c7998 + param_1 * 0x21c; \| *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(iVar3 + 0x14); \| *(undefined1 *)(puVar4 + 4) = *(und` |
| kernel.c | 561148 | `piVar2 = DAT_003c86c8; \| bVar11 = iVar7 == 1; \| if (!bVar11 \|\| param_2 != 0x368) { \| iVar7 = param_2 + -0x200; \| } \| if (bVar11 && param_2 =` |
| kernel.c | 561442 | `} \| if (iVar1 != 0) { \| uVar2 = FUN_0069d3f0(); \| FUN_006a2616(1,0,param_1,0x200,0,0,uVar2); \| iVar1 = *(int *)(DAT_003c95dc + 0x2c); \| *(un` |
| kernel.c | 567739 | `bVar9 = uVar1 < 0xfffd; \| uVar8 = uVar1; \| if (bVar9) { \| uVar8 = uVar1 + (ushort)param_1[iVar6 * 6 + 7] * 0x200; \| } \| pbVar4 = local_2c; \|` |
| kernel.c | 569095 | `if (param_1 - 0x80 < 0x7c) { \| return 4; \| } \| if (param_1 - 0x200 < 0x176) { \| if ((param_1 - 0x200 < 299) && (param_2 == 2)) { \| return 3;` |
| kernel.c | 569096 | `return 4; \| } \| if (param_1 - 0x200 < 0x176) { \| if ((param_1 - 0x200 < 299) && (param_2 == 2)) { \| return 3; \| } \| return 1;` |
| kernel.c | 577335 | `break; \| case 1: \| for (iVar5 = 0; iVar5 < *param_2; iVar5 = iVar5 + 1) { \| if (0x175 < (ushort)param_2[iVar5 + 1] - 0x200) { \| return 0; \| ` |
| kernel.c | 577349 | `bVar1 = true; \| } \| else { \| if (0x175 < uVar4 - 0x200) { \| return 0; \| } \| bVar3 = true;` |
| kernel.c | 577358 | `goto LAB_003e3ab4; \| case 3: \| for (iVar5 = 0; iVar5 < *param_2; iVar5 = iVar5 + 1) { \| if (0x12a < (ushort)param_2[iVar5 + 1] - 0x200) { \| ` |
| kernel.c | 577379 | `bVar1 = true; \| } \| else { \| if (0x12a < uVar4 - 0x200) { \| return 0; \| } \| bVar3 = true;` |
| kernel.c | 577394 | `bVar1 = true; \| } \| else { \| if (0x175 < (ushort)param_2[iVar5 + 1] - 0x200) { \| return 0; \| } \| bVar3 = true;` |
| kernel.c | 577409 | `bVar1 = true; \| } \| else { \| if (0x12a < (ushort)param_2[iVar5 + 1] - 0x200) { \| return 0; \| } \| bVar3 = true;` |
| kernel.c | 577451 | `bVar1 = true; \| } \| else { \| if (0x12a < uVar4 - 0x200) { \| return 0; \| } \| bVar3 = true;` |
| kernel.c | 577476 | `bVar1 = true; \| } \| else { \| if (0x175 < uVar4 - 0x200) { \| return 0; \| } \| bVar3 = true;` |
| kernel.c | 577827 | `return; \| } \| uVar2 = *(ushort *)(param_1 + 0x1c); \| uVar3 = (bVar1 & 1) * 0x200 + (ushort)param_2[1] * 2 + (ushort)(param_2[2] >> 7); \| if ` |
| kernel.c | 578083 | `if (uVar4 < 0x7d) { \| local_28[uVar5] = param_1[uVar4]; \| } \| else if (uVar4 - 0x200 < 299) { \| local_28[uVar5] = param_1[uVar4 - 0x183]; \| ` |
| kernel.c | 578255 | `if (param_1 - 0x80 < 0x7c) { \| return 4; \| } \| if (param_1 - 0x200 < 0x176) { \| if ((param_1 - 0x200 < 299) && \| ((((param_2 == 3 \|\| (param_` |
| kernel.c | 578256 | `return 4; \| } \| if (param_1 - 0x200 < 0x176) { \| if ((param_1 - 0x200 < 299) && \| ((((param_2 == 3 \|\| (param_2 == 5)) \|\| (param_2 == 7)) \|\| ` |
| kernel.c | 579932 | `break; \| case 1: \| for (iVar5 = 0; iVar5 < *param_2; iVar5 = iVar5 + 1) { \| if (0x175 < (ushort)param_2[iVar5 + 1] - 0x200) { \| return 0; \| ` |
| kernel.c | 579946 | `bVar1 = true; \| } \| else { \| if (0x175 < uVar4 - 0x200) { \| return 0; \| } \| bVar3 = true;` |
| kernel.c | 579955 | `goto LAB_003e3ab4; \| case 3: \| for (iVar5 = 0; iVar5 < *param_2; iVar5 = iVar5 + 1) { \| if (0x12a < (ushort)param_2[iVar5 + 1] - 0x200) { \| ` |
| kernel.c | 579976 | `bVar1 = true; \| } \| else { \| if (0x12a < uVar4 - 0x200) { \| return 0; \| } \| bVar3 = true;` |
| kernel.c | 579991 | `bVar1 = true; \| } \| else { \| if (0x175 < (ushort)param_2[iVar5 + 1] - 0x200) { \| return 0; \| } \| bVar3 = true;` |
| kernel.c | 580006 | `bVar1 = true; \| } \| else { \| if (0x12a < (ushort)param_2[iVar5 + 1] - 0x200) { \| return 0; \| } \| bVar3 = true;` |
| kernel.c | 580048 | `bVar1 = true; \| } \| else { \| if (0x12a < uVar4 - 0x200) { \| return 0; \| } \| bVar3 = true;` |
| kernel.c | 580073 | `bVar1 = true; \| } \| else { \| if (0x175 < uVar4 - 0x200) { \| return 0; \| } \| bVar3 = true;` |
| kernel.c | 589763 | `psVar5[2] = 1; \| uVar6 = uVar6 + 1; \| param_2 = psVar5 + 3; \| *psVar5 = 0x200 - (sVar1 + sVar2); \| } \| uVar7 = uVar7 + 1 & 0xffff; \| } while` |
| kernel.c | 590267 | `else { \| if (param_1[2] == '\0') { \| FUN_003ef4e6(param_1,param_3,local_30,local_38); \| uVar7 = (int)(s_Invalid_destination_pointer__0028000` |
| kernel.c | 591316 | `FUN_006fb8b0(DAT_003f1384 + 0xa34,DAT_003f1384,0x1f19); \| } \| piVar1 = *(int **)(DAT_003f13b4 + iVar2 * 4); \| if ((*piVar1 == 2) && (piVar1[` |
| kernel.c | 597165 | `uVar6 = 0; \| do { \| uVar12 = uVar12 + *(int *)(iVar3 + 0x244); \| FUN_00379826(0x200); \| uVar6 = uVar6 + 1; \| } while (uVar6 < 0x32); \| uVar6` |
| kernel.c | 597921 | `} \| else { \| *(undefined2 *)(iVar8 + 0x838) = puVar10[2]; \| *(undefined2 *)(iVar8 + 0x83a) = 0x200; \| if ('\0' < *pcVar6) { \| FUN_006f4c52(0` |
| kernel.c | 598138 | `if ('\0' < *DAT_003fb494) { \| FUN_006f4bcc(0x21,DAT_003fb4cc); \| } \| *(undefined2 *)(*piVar1 + 0x2ac) = 0x200; \| } \| else { \| if ('\0' < *DA` |
| kernel.c | 598325 | `if (iVar5 == 4) { \| do { \| uVar9 = (uint)local_7d8[0]; \| puVar6 = (ushort *)(*DAT_003fc130 + uVar12 * 0x200); \| if (uVar9 < 0x21) { \| if (((` |
| kernel.c | 598411 | `else { \| do { \| uVar9 = (uint)local_7d8[0]; \| puVar6 = (ushort *)(*DAT_003fb8f8 + uVar12 * 0x200); \| if (uVar9 < 0x21) { \| if (((*(uint *)(p` |
| kernel.c | 599227 | `} \| FUN_00a4fc6e(uVar1,puVar6,s_PS_stack_las_l2_pdcp_tx_pdcp_tx__003fc658,0xd6d); \| *puVar6 = 0; \| puVar6[7] = puVar6[7] & 0xffff00ff \| 0x20` |
| kernel.c | 615084 | `iVar1 = FUN_0040c4c8(); \| iVar1 = iVar1 + 1; \| if (*(char *)(param_1 + 0x1fc) == '\x01') { \| iVar2 = FUN_0040d01a(param_1 + 0x200); \| iVar1 ` |
| kernel.c | 624504 | `piVar1 = (int *)*param_2; \| param_2[2] = (int)piVar1; \| while ((piVar1 != (int *)0x0 && (*piVar1 != 0))) { \| FUN_006662c4(param_1,*piVar1,0x` |
| kernel.c | 635017 | `FUN_006fe9dc(iVar3 + 0x448,0xc0); \| uVar9 = 0; \| do { \| FUN_006fe9dc(asStack_6a8,0x200); \| FUN_006fe9dc(asStack_1a8,0x80); \| auStack_128[0] ` |
| kernel.c | 635035 | `auStack_128[0xd] = 0; \| auStack_128[0xe] = 0; \| auStack_128[0xf] = 0; \| FUN_006fe9dc(asStack_4a8,0x200); \| FUN_006fe9dc(asStack_e8,0x80); \| ` |
| kernel.c | 635396 | `uVar5 = thunk_EXT_FUN_883b915e(asStack_6a8,0x22,0); \| iVar10 = iVar3 + uVar9 * 0x18; \| *(undefined4 *)(iVar10 + 0x448) = uVar5; \| iVar4 = FU` |
| kernel.c | 635404 | `} \| uVar5 = thunk_EXT_FUN_883b915e(asStack_4a8,0x22,0); \| *(undefined4 *)(iVar10 + 0x44c) = uVar5; \| iVar4 = FUN_006f9a74(0x2000,s_asm_main_` |
| kernel.c | 637756 | `iVar4 = *(int *)(iVar6 + 8) + uVar11 * 0xc; \| if (((*(int *)(iVar4 + 0x34) == 1) && (uVar9 = *(uint *)(iVar4 + 0x2c), uVar9 < 0x41)) && \| ('` |
| kernel.c | 637768 | `uVar5 = FUN_0069d3f0(); \| iVar4 = FUN_0069eece(*(undefined2 *) \| (*piVar3 + \| *(int *)(*(int *)(iVar6 + 8) + uVar11 * 0xc + 0x2c) * 0x200),u` |
| kernel.c | 637784 | `iVar4 = *(int *)(iVar6 + 8) + uVar11 * 0xc; \| if ((*(int *)(iVar4 + 0x34) == 1) && \| (iVar4 = FUN_006a13d2(*(undefined4 *)(*DAT_004277c4 + 0` |
| kernel.c | 637853 | `uVar10 = 0; \| uVar8 = extraout_r3; \| do { \| iVar5 = *DAT_004277b8 + uVar10 * 0x200; \| uVar7 = *(uint *)(iVar5 + 0x14); \| if ((((uVar7 & 1) !` |
| kernel.c | 638134 | `} \| } \| for (; uVar13 < local_40; uVar13 = uVar13 + 1) { \| puVar7 = (ushort *)(*DAT_00428d88 + uVar13 * 0x200); \| uVar4 = *(uint *)(puVar7 +` |
| kernel.c | 638676 | `int *piVar4; \| uint local_18; \|  \| piVar4 = (int *)(*DAT_00429640 + param_1 * 0x200); \| if (((param_1 < 0x40) && ((piVar4[5] & 1U) != 0 && (` |
| kernel.c | 638677 | `uint local_18; \|  \| piVar4 = (int *)(*DAT_00429640 + param_1 * 0x200); \| if (((param_1 < 0x40) && ((piVar4[5] & 1U) != 0 && (piVar4[5] & 0x2` |
| kernel.c | 638718 | `piVar2 = DAT_00429640; \| uVar3 = 0; \| do { \| if ((*(ushort *)(*piVar2 + uVar3 * 0x200 + 0x14) & 0x200) != 0) { \| FUN_004294a2(uVar3); \| } \| ` |
| kernel.c | 638727 | `uVar3 = 0; \| do { \| iVar4 = *piVar1 + uVar3 * 0x54; \| if ((*(ushort *)(iVar4 + 0xc) & 0x200) != 0) { \| FUN_00429410(uVar3); \| } \| FUN_006fe9` |
| kernel.c | 638807 | `} \| if (uVar12 != 0) { \| do { \| psVar9 = (short *)(*piVar3 + uVar11 * 0x200); \| if (((*(uint *)(psVar9 + 10) & 1) != 0) && ((*(uint *)(psVar` |
| kernel.c | 638911 | `uVar3 = 0; \| iVar5 = *DAT_00429a78; \| do { \| psVar2 = (short *)(iVar5 + uVar3 * 0x200); \| uVar4 = *(uint *)(psVar2 + 10); \| if (((uVar4 & 1)` |
| kernel.c | 638949 | `uVar8 = 0; \| iVar3 = *DAT_00429a78; \| do { \| psVar7 = (short *)(*piVar2 + uVar8 * 0x200); \| if (((*(byte *)(iVar3 + 0x8044) < *(byte *)((int` |
| kernel.c | 639013 | `else { \| uVar10 = 0x20; \| do { \| puVar9 = (ushort *)(*piVar2 + uVar10 * 0x200); \| uVar4 = (ushort)(byte)puVar9[10]; \| bVar11 = ((byte)puVar9` |
| kernel.c | 639082 | `if (param_2 <= param_1) { \| return; \| } \| psVar9 = (short *)(*piVar3 + param_1 * 0x200); \| if ((int)*(char *)(iVar8 + 0x8026) < (int)*(short` |
| kernel.c | 639148 | `} \| if (uVar7 != 0) { \| do { \| psVar5 = (short *)(*piVar2 + uVar6 * 0x200); \| if (((*(uint *)(psVar5 + 10) & 1) != 0) && ((*(uint *)(psVar5 ` |
| kernel.c | 639624 | `} \| uVar17 = 0; \| do { \| psVar15 = (short *)(*piVar3 + uVar17 * 0x200); \| if (((*(uint *)(psVar15 + 10) & 1) == 0) \|\| ((*(uint *)(psVar15 + ` |
| kernel.c | 639713 | `if (0x1f < uVar10) { \| pcVar13 = pcVar16; \| } \| psVar15 = (short *)(*piVar3 + uVar10 * 0x200); \| uVar7 = 0; \| if (pcVar13 != Reset) { \| uVar` |
| kernel.c | 639885 | `FUN_006a5360(); \| uVar17 = 0x20; \| do { \| psVar15 = (short *)(*piVar3 + uVar17 * 0x200); \| if (((*(byte *)(iVar5 + 0x8044) < *(byte *)((int)` |
| kernel.c | 639939 | `} \| if (uVar10 != 0) { \| do { \| psVar15 = (short *)(*piVar3 + uVar17 * 0x200); \| if (((*(uint *)(psVar15 + 10) & 1) != 0) && ((*(uint *)(psV` |
| kernel.c | 640209 | `int iVar13; \|  \| iVar6 = *DAT_0042abb0; \| piVar12 = (int *)(iVar6 + param_2 * 0x200); \| iVar13 = iVar6 + (uint)*param_4 * 0x200; \| uVar7 = F` |
| kernel.c | 640210 | ` \| iVar6 = *DAT_0042abb0; \| piVar12 = (int *)(iVar6 + param_2 * 0x200); \| iVar13 = iVar6 + (uint)*param_4 * 0x200; \| uVar7 = FUN_0069d3f0();` |
| kernel.c | 640434 | `int *piVar12; \|  \| iVar5 = *DAT_0042b00c; \| piVar12 = (int *)(iVar5 + param_2 * 0x200); \| uVar6 = FUN_0069d3f0(); \| uVar7 = FUN_0069d3f0(); ` |
| kernel.c | 640609 | `sVar12 = -1; \| sVar10 = -1; \| do { \| psVar8 = (short *)(*piVar2 + uVar9 * 0x200); \| sVar1 = *psVar8; \| sVar11 = sVar10; \| if ((*(byte *)(psV` |
| kernel.c | 640623 | `uVar6 = 0x20; \| if (0x20 < uVar9) { \| do { \| psVar7 = (short *)(iVar5 + uVar6 * 0x200); \| if (((*(byte *)(psVar7 + 10) & 1) != 0) && (*psVar` |
| kernel.c | 641438 | `else { \| iVar7 = *DAT_0042be00; \| do { \| piVar4 = (int *)(iVar7 + uVar5 * 0x200); \| uVar3 = 0; \| iVar2 = iVar6; \| do {` |
| kernel.c | 642080 | `uVar23 = 0; \| do { \| iVar9 = uVar23 * 0x5c; \| puVar18 = (undefined4 *)(*piVar27 + uVar23 * 0x200); \| *(undefined4 *)(auStack_1b40 + iVar9 + ` |
| kernel.c | 642083 | `puVar18 = (undefined4 *)(*piVar27 + uVar23 * 0x200); \| *(undefined4 *)(auStack_1b40 + iVar9 + -4) = *puVar18; \| FUN_0069e126(auStack_1b40 + ` |
| kernel.c | 642084 | `*(undefined4 *)(auStack_1b40 + iVar9 + -4) = *puVar18; \| FUN_0069e126(auStack_1b40 + iVar9,puVar18 + 1); \| FUN_006fd7c8(local_1b2b + iVar9 +` |
| kernel.c | 642132 | `} \| uVar23 = 0; \| if ((char)piVar27[0xc] != '\0') { \| iVar8 = iVar20 + 0x2000; \| do { \| uVar25 = 0xff; \| if ((char)piVar27[uVar23 * 0xc + 0x` |
| kernel.c | 642148 | `bVar14 = false; \| uVar15 = 0; \| do { \| puVar19 = (uint *)(*DAT_0042c6d0 + uVar15 * 0x200); \| uVar10 = puVar19[5]; \| if ((uVar10 & 1) == 0 &&` |
| kernel.c | 642174 | `if (uVar10 < 0x20) { \| FUN_0042ad06(0,uVar10,0xffff,piVar27 + uVar23 * 0xc + 0xe,local_1b60); \| piVar27 = DAT_0042cb2c; \| iVar9 = *DAT_0042c` |
| kernel.c | 642178 | `if ((*(byte *)(iVar9 + 0x14) & 1) != 0) { \| *(char *)(iVar9 + 0x1ba) = (char)uVar23; \| uVar7 = FUN_0042bbb4(iVar9 + 0x1b6,0); \| *(undefined1` |
| kernel.c | 642192 | `} \| uVar23 = 0; \| if ((char)piVar27[0xc] != '\0') { \| iVar8 = iVar20 + 0x2000; \| do { \| if ((char)piVar27[uVar23 * 0xf + 0xd] == '\x01') { \|` |
| kernel.c | 642200 | `else { \| uVar25 = 0x20; \| do { \| if ((*(byte *)(*DAT_0042cb2c + uVar25 * 0x200 + 0x14) & 1) == 0) break; \| uVar25 = uVar25 + 1 & 0xff; \| } w` |
| kernel.c | 642241 | `bVar14 = false; \| uVar11 = 0x20; \| do { \| puVar19 = (uint *)(*DAT_0042cb2c + uVar11 * 0x200); \| if ((puVar19[5] & 1) == 0 && !bVar14) { \| bV` |
| kernel.c | 642273 | `if (uVar24 < 0x40) { \| FUN_0042ad06(1,uVar24,uVar21,piVar27 + uVar23 * 0xf + 0x11,local_1b60); \| piVar27 = DAT_0042cb2c; \| iVar9 = *DAT_0042` |
| kernel.c | 642277 | `if ((*(byte *)(iVar9 + 0x14) & 1) != 0) { \| *(char *)(iVar9 + 0x1ba) = (char)uVar23; \| uVar7 = FUN_0042bbb4(iVar9 + 0x1b6,1); \| iVar9 = *piV` |
| kernel.c | 642299 | `} \| uVar23 = 0; \| if ((char)piVar27[0xc] != '\0') { \| iVar8 = iVar20 + 0x2000; \| do { \| uVar25 = 0xff; \| if ((char)piVar27[uVar23 * 0xc + 0x` |
| kernel.c | 642315 | `bVar14 = false; \| uVar15 = 0; \| do { \| puVar19 = (uint *)(*DAT_0042cb2c + uVar15 * 0x200); \| uVar10 = puVar19[5]; \| if ((uVar10 & 1) == 0 &&` |
| kernel.c | 642341 | `if (uVar10 < 0x20) { \| FUN_0042ad06(0,uVar10,0xffff,piVar27 + uVar23 * 0xc + 0xe,local_1b60); \| piVar27 = DAT_0042cb2c; \| iVar9 = *DAT_0042c` |
| kernel.c | 642345 | `if ((*(byte *)(iVar9 + 0x14) & 1) != 0) { \| *(char *)(iVar9 + 0x1ba) = (char)uVar23; \| uVar7 = FUN_0042bbb4(iVar9 + 0x1b6,0); \| *(undefined1` |
| kernel.c | 642359 | `} \| uVar23 = 0; \| if ((char)piVar27[0xc] != '\0') { \| iVar8 = iVar20 + 0x2000; \| do { \| uVar25 = 0xff; \| piVar16 = piVar27;` |
| kernel.c | 642399 | `bVar14 = false; \| uVar11 = 0x20; \| do { \| puVar19 = (uint *)(*DAT_0042cfe8 + uVar11 * 0x200); \| if ((puVar19[5] & 1) == 0 && !bVar14) { \| bV` |
| kernel.c | 642431 | `if (uVar24 < 0x40) { \| FUN_0042ad06(1,uVar24,uVar21,piVar27 + uVar23 * 0xf + 0x11,local_1b60); \| piVar27 = DAT_0042cfe8; \| iVar9 = *DAT_0042` |
| kernel.c | 642435 | `if ((*(byte *)(iVar9 + 0x14) & 1) != 0) { \| *(char *)(iVar9 + 0x1ba) = (char)uVar23; \| uVar7 = FUN_0042bbb4(iVar9 + 0x1b6,1); \| iVar9 = *piV` |
| kernel.c | 642526 | `local_1b54[0] = 0; \| uVar23 = 0; \| if ((char)local_1b50[0xc] != '\0') { \| local_1b4c = iVar20 + 0x2000; \| do { \| piVar27 = local_1b50; \| uVa` |
| kernel.c | 642543 | `bVar14 = false; \| uVar15 = 0; \| do { \| puVar19 = (uint *)(*DAT_0042cfe8 + uVar15 * 0x200); \| uVar10 = puVar19[5]; \| if ((uVar10 & 1) == 0 &&` |
| kernel.c | 642576 | `FUN_0042a958(0,uVar10,uVar23,local_1b54,0xffff,piVar27 + uVar23 * 0x12 + 0xe, \| local_1b60,local_1b5c); \| piVar27 = DAT_0042d460; \| iVar8 = ` |
| kernel.c | 642580 | `if ((*(byte *)(iVar8 + 0x14) & 1) != 0) { \| *(char *)(iVar8 + 0x1ba) = (char)uVar23; \| uVar7 = FUN_0042bbb4(iVar8 + 0x1b6,0); \| *(undefined1` |
| kernel.c | 642595 | `local_1b54[0] = 0; \| uVar23 = 0; \| if ((char)local_1b50[0xc] != '\0') { \| local_1b4c = iVar20 + 0x2000; \| do { \| piVar27 = local_1b50; \| uVa` |
| kernel.c | 642632 | `bVar14 = false; \| uVar11 = 0x20; \| do { \| puVar19 = (uint *)(*DAT_0042d460 + uVar11 * 0x200); \| if ((puVar19[5] & 1) == 0 && !bVar14) { \| bV` |
| kernel.c | 642672 | `FUN_0042a958(1,uVar24,uVar23,local_1b54,uVar21,piVar27 + uVar23 * 0x15 + 0x11, \| local_1b60,local_1b5c); \| piVar27 = DAT_0042d460; \| iVar8 =` |
| kernel.c | 642676 | `if ((*(byte *)(iVar8 + 0x14) & 1) != 0) { \| *(char *)(iVar8 + 0x1ba) = (char)uVar23; \| uVar7 = FUN_0042bbb4(iVar8 + 0x1b6,1); \| iVar8 = *piV` |
| kernel.c | 642698 | `local_1b54[0] = 0; \| uVar23 = 0; \| if ((char)local_1b50[0xc] != '\0') { \| local_1b4c = iVar20 + 0x2000; \| do { \| piVar27 = local_1b50; \| uVa` |
| kernel.c | 642715 | `bVar14 = false; \| uVar15 = 0; \| do { \| puVar19 = (uint *)(*DAT_0042d460 + uVar15 * 0x200); \| uVar10 = puVar19[5]; \| if ((uVar10 & 1) == 0 &&` |
| kernel.c | 642748 | `FUN_0042a958(0,uVar10,uVar23,local_1b54,0xffff,piVar27 + uVar23 * 0x12 + 0xe, \| local_1b60,local_1b5c); \| piVar27 = DAT_0042d880; \| iVar8 = ` |
| kernel.c | 642752 | `if ((*(byte *)(iVar8 + 0x14) & 1) != 0) { \| *(char *)(iVar8 + 0x1ba) = (char)uVar23; \| uVar7 = FUN_0042bbb4(iVar8 + 0x1b6,0); \| *(undefined1` |
| kernel.c | 642767 | `local_1b54[0] = 0; \| uVar23 = 0; \| if ((char)local_1b50[0xc] != '\0') { \| local_1b4c = iVar20 + 0x2000; \| do { \| piVar27 = local_1b50; \| uVa` |
| kernel.c | 642804 | `bVar14 = false; \| uVar11 = 0x20; \| do { \| puVar19 = (uint *)(*DAT_0042d880 + uVar11 * 0x200); \| if ((puVar19[5] & 1) == 0 && !bVar14) { \| bV` |
| kernel.c | 642844 | `FUN_0042a958(1,uVar24,uVar23,local_1b54,uVar21,piVar27 + uVar23 * 0x15 + 0x11, \| local_1b60,local_1b5c); \| piVar27 = DAT_0042d880; \| iVar8 =` |
| kernel.c | 642848 | `if ((*(byte *)(iVar8 + 0x14) & 1) != 0) { \| *(char *)(iVar8 + 0x1ba) = (char)uVar23; \| uVar7 = FUN_0042bbb4(iVar8 + 0x1b6,1); \| iVar8 = *piV` |
| kernel.c | 642952 | `if (local_2c == 1) { \| uVar21 = 0; \| do { \| piVar16 = (int *)(*piVar4 + uVar21 * 0x200); \| if ((*(byte *)(piVar16 + 5) & 1) != 0) { \| uVar22` |
| kernel.c | 642958 | `do { \| if (*(int *)(*piVar27 + 0x10) == *piVar16) { \| FUN_0069e126(piVar16 + 1,*piVar4 + 0x8004); \| FUN_006f4a34(*piVar4 + uVar21 * 0x200 + ` |
| kernel.c | 642960 | `FUN_0069e126(piVar16 + 1,*piVar4 + 0x8004); \| FUN_006f4a34(*piVar4 + uVar21 * 0x200 + 0x1c8,&DAT_000081c8 + *piVar4,0x2b); \| iVar20 = *piVar` |
| kernel.c | 642972 | `if (*(int *)(auStack_1b40 + uVar22 * 0x5c + -4) == *piVar16) { \| iVar20 = uVar22 * 0x5c; \| FUN_0069e126(piVar16 + 1,auStack_1b40 + iVar20); ` |
| kernel.c | 642973 | `iVar20 = uVar22 * 0x5c; \| FUN_0069e126(piVar16 + 1,auStack_1b40 + iVar20); \| FUN_006fd7c8(*piVar4 + uVar21 * 0x200 + 0x1c8,local_1b2b + iVar` |
| kernel.c | 643132 | `uVar24 = 0; \| do { \| iVar27 = uVar24 * 0x5c; \| puVar8 = (undefined4 *)(*DAT_0042dcb4 + uVar24 * 0x200); \| *(undefined4 *)(auStack_1b00 + iVa` |
| kernel.c | 643135 | `puVar8 = (undefined4 *)(*DAT_0042dcb4 + uVar24 * 0x200); \| *(undefined4 *)(auStack_1b00 + iVar27 + -4) = *puVar8; \| FUN_0069e126(auStack_1b0` |
| kernel.c | 643136 | `*(undefined4 *)(auStack_1b00 + iVar27 + -4) = *puVar8; \| FUN_0069e126(auStack_1b00 + iVar27,puVar8 + 1); \| FUN_006fd7c8(local_1aeb + iVar27 ` |
| kernel.c | 643189 | `bVar11 = false; \| uVar15 = 0; \| do { \| puVar19 = (uint *)(*DAT_0042e0dc + uVar15 * 0x200); \| uVar12 = puVar19[5]; \| if ((uVar12 & 1) == 0 &&` |
| kernel.c | 643220 | `FUN_0042a958(0,uVar12,uVar24,local_1b10,0xffff,puVar23 + uVar24 * 0x48 + 0xc, \| local_1b18,local_1b14); \| piVar1 = DAT_0042e0dc; \| iVar6 = *` |
| kernel.c | 643224 | `if ((*(byte *)(iVar6 + 0x14) & 1) != 0) { \| *(char *)(iVar6 + 0x1ba) = (char)uVar24; \| uVar5 = FUN_0042bbb4(iVar6 + 0x1b6,0); \| *(undefined1` |
| kernel.c | 643270 | `bVar11 = false; \| uVar10 = 0x20; \| do { \| puVar19 = (uint *)(*DAT_0042e0dc + uVar10 * 0x200); \| uVar15 = puVar19[5]; \| if ((uVar15 & 1) == 0` |
| kernel.c | 643302 | `FUN_0042a958(1,uVar15,uVar24,local_1b10,uVar21,puVar23 + uVar24 * 0x54 + 0x18, \| local_1b18,local_1b14); \| piVar1 = DAT_0042e0dc; \| iVar6 = ` |
| kernel.c | 643306 | `if ((*(byte *)(iVar6 + 0x14) & 1) != 0) { \| *(char *)(iVar6 + 0x1ba) = (char)uVar24; \| uVar5 = FUN_0042bbb4(iVar6 + 0x1b6,1); \| iVar6 = *piV` |
| kernel.c | 643340 | `bVar11 = false; \| uVar15 = 0; \| do { \| puVar19 = (uint *)(*DAT_0042e0dc + uVar15 * 0x200); \| uVar12 = puVar19[5]; \| if ((uVar12 & 1) == 0 &&` |
| kernel.c | 643354 | `if (uVar12 < 0x20) { \| FUN_0042a958(0,uVar12,uVar24,local_1b10,0xffff,&DAT_000043f4 + iVar6 + 0xc,0,0); \| piVar1 = DAT_0042e5c0; \| iVar6 = *` |
| kernel.c | 643358 | `if ((*(byte *)(iVar6 + 0x14) & 1) != 0) { \| *(char *)(iVar6 + 0x1ba) = (char)uVar24; \| uVar5 = FUN_0042bbb4(iVar6 + 0x1b6,0); \| *(undefined1` |
| kernel.c | 643404 | `bVar11 = false; \| uVar10 = 0x20; \| do { \| puVar19 = (uint *)(*DAT_0042e5c0 + uVar10 * 0x200); \| uVar15 = puVar19[5]; \| if ((uVar15 & 1) == 0` |
| kernel.c | 643436 | `FUN_0042a958(1,uVar15,uVar24,local_1b10,uVar21,puVar23 + uVar24 * 0x54 + 0x18, \| local_1b18,local_1b14); \| piVar1 = DAT_0042e5c0; \| iVar6 = ` |
| kernel.c | 643440 | `if ((*(byte *)(iVar6 + 0x14) & 1) != 0) { \| *(char *)(iVar6 + 0x1ba) = (char)uVar24; \| uVar5 = FUN_0042bbb4(iVar6 + 0x1b6,1); \| iVar6 = *piV` |
| kernel.c | 643546 | `bVar11 = false; \| uVar15 = 0; \| do { \| puVar19 = (uint *)(*DAT_0042e5c0 + uVar15 * 0x200); \| uVar12 = puVar19[5]; \| if ((uVar12 & 1) == 0 &&` |
| kernel.c | 643570 | `if (uVar12 < 0x20) { \| FUN_0042ad06(0,uVar12,0xffff,puVar23 + uVar24 * 0x30 + 0xc,local_1b18); \| piVar1 = DAT_0042e9fc; \| iVar6 = *DAT_0042e` |
| kernel.c | 643574 | `if ((*(byte *)(iVar6 + 0x14) & 1) != 0) { \| *(char *)(iVar6 + 0x1ba) = (char)uVar24; \| uVar5 = FUN_0042bbb4(iVar6 + 0x1b6,0); \| *(undefined1` |
| kernel.c | 643623 | `bVar11 = false; \| uVar15 = 0x20; \| do { \| puVar19 = (uint *)(*DAT_0042e9fc + uVar15 * 0x200); \| uVar16 = puVar19[5]; \| if ((uVar16 & 1) == 0` |
| kernel.c | 643646 | `if (uVar16 < 0x40) { \| FUN_0042ad06(1,uVar16,uVar21,iVar27 + 0x18,local_1b18); \| piVar1 = DAT_0042e9fc; \| iVar27 = *DAT_0042e9fc + uVar16 * ` |
| kernel.c | 643650 | `if ((*(byte *)(iVar27 + 0x14) & 1) != 0) { \| *(char *)(iVar27 + 0x1ba) = (char)uVar24; \| uVar5 = FUN_0042bbb4(iVar27 + 0x1b6,1); \| iVar27 = ` |
| kernel.c | 643680 | `bVar11 = false; \| uVar15 = 0; \| do { \| puVar19 = (uint *)(*DAT_0042e9fc + uVar15 * 0x200); \| uVar12 = puVar19[5]; \| if ((uVar12 & 1) == 0 &&` |
| kernel.c | 643704 | `if (uVar12 < 0x20) { \| FUN_0042ad06(0,uVar12,0xffff,puVar23 + uVar24 * 0x30 + 0xc,local_1b18); \| piVar1 = DAT_0042e9fc; \| iVar6 = *DAT_0042e` |
| kernel.c | 643708 | `if ((*(byte *)(iVar6 + 0x14) & 1) != 0) { \| *(char *)(iVar6 + 0x1ba) = (char)uVar24; \| uVar5 = FUN_0042bbb4(iVar6 + 0x1b6,0); \| *(undefined1` |
| kernel.c | 643755 | `bVar11 = false; \| uVar10 = 0x20; \| do { \| puVar19 = (uint *)(*DAT_0042e9fc + uVar10 * 0x200); \| uVar15 = puVar19[5]; \| if ((uVar15 & 1) == 0` |
| kernel.c | 643779 | `if (uVar15 < 0x40) { \| FUN_0042ad06(1,uVar15,uVar21,iVar27 + 0x18,local_1b18); \| piVar1 = DAT_0042ee50; \| iVar27 = *DAT_0042ee50 + uVar15 * ` |
| kernel.c | 643783 | `if ((*(byte *)(iVar27 + 0x14) & 1) != 0) { \| *(char *)(iVar27 + 0x1ba) = (char)uVar24; \| uVar5 = FUN_0042bbb4(iVar27 + 0x1b6,1); \| iVar27 = ` |
| kernel.c | 643866 | `if (local_28 == 1) { \| uVar21 = 0; \| do { \| piVar17 = (int *)(*piVar1 + uVar21 * 0x200); \| if ((*(byte *)(piVar17 + 5) & 1) != 0) { \| uVar22` |
| kernel.c | 643872 | `do { \| if (*(int *)(*piVar3 + 0x10) == *piVar17) { \| FUN_0069e126(piVar17 + 1,*piVar1 + 0x8004); \| FUN_006f4a34(*piVar1 + uVar21 * 0x200 + 0` |
| kernel.c | 643874 | `FUN_0069e126(piVar17 + 1,*piVar1 + 0x8004); \| FUN_006f4a34(*piVar1 + uVar21 * 0x200 + 0x1c8,&DAT_000081c8 + *piVar1,0x2b); \| iVar6 = *piVar1` |
| kernel.c | 643886 | `if (*(int *)(auStack_1b00 + uVar22 * 0x5c + -4) == *piVar17) { \| iVar6 = uVar22 * 0x5c; \| FUN_0069e126(piVar17 + 1,auStack_1b00 + iVar6); \| ` |
| kernel.c | 643887 | `iVar6 = uVar22 * 0x5c; \| FUN_0069e126(piVar17 + 1,auStack_1b00 + iVar6); \| FUN_006fd7c8(*piVar1 + uVar21 * 0x200 + 0x1c8,local_1aeb + iVar6 ` |
| kernel.c | 643974 | `if ((param_2 == 1) && (*param_1 != 0)) { \| iVar11 = 0; \| do { \| iVar8 = *piVar1 + iVar11 * 0x200; \| if ((*(byte *)(iVar8 + 0x14) & 1) != 0) ` |
| kernel.c | 644001 | `LAB_0042ef30: \| FUN_0069e126(iVar8 + 4,pbVar10); \| LAB_0042ef34: \| FUN_004241f8(*piVar1 + iVar11 * 0x200 + 4,s_WRCC_From_MIB__0042f2b0); \| i` |
| kernel.c | 644002 | `FUN_0069e126(iVar8 + 4,pbVar10); \| LAB_0042ef34: \| FUN_004241f8(*piVar1 + iVar11 * 0x200 + 4,s_WRCC_From_MIB__0042f2b0); \| iVar8 = FUN_006a0` |
| kernel.c | 644003 | `LAB_0042ef34: \| FUN_004241f8(*piVar1 + iVar11 * 0x200 + 4,s_WRCC_From_MIB__0042f2b0); \| iVar8 = FUN_006a00c8(*piVar1 + iVar11 * 0x200 + 4); ` |
| kernel.c | 644013 | `} \| *(uint *)(iVar6 + 0x14) = uVar5; \| if ('\0' < *pcVar4) { \| puVar7 = (undefined2 *)(*piVar1 + iVar11 * 0x200); \| FUN_006f4c52(0x21,uVar2,` |
| kernel.c | 644023 | `if ((param_3 == 1) && (param_1[0x101] != 0)) { \| iVar11 = 0x20; \| LAB_0042efe4: \| iVar8 = *piVar1 + iVar11 * 0x200; \| if ((*(byte *)(iVar8 +` |
| kernel.c | 644098 | `pbVar10 = (byte *)(*piVar3 + 8); \| LAB_0042f056: \| FUN_0069e126(iVar8 + 4,pbVar10); \| FUN_004241f8(*piVar1 + iVar11 * 0x200 + 4,s_WRCC_From_` |
| kernel.c | 644099 | `LAB_0042f056: \| FUN_0069e126(iVar8 + 4,pbVar10); \| FUN_004241f8(*piVar1 + iVar11 * 0x200 + 4,s_WRCC_From_MIB__0042f2b0); \| iVar8 = FUN_006a0` |
| kernel.c | 644100 | `FUN_0069e126(iVar8 + 4,pbVar10); \| FUN_004241f8(*piVar1 + iVar11 * 0x200 + 4,s_WRCC_From_MIB__0042f2b0); \| iVar8 = FUN_006a00c8(*piVar1 + iV` |
| kernel.c | 644110 | `} \| *(uint *)(iVar6 + 0x14) = uVar5; \| if ('\0' < *pcVar4) { \| puVar7 = (undefined2 *)(*piVar1 + iVar11 * 0x200); \| FUN_006f4c52(0x21,uVar2,` |
| kernel.c | 644184 | `if ((param_2 == 1) && (*param_1 != 0)) { \| iVar11 = 0; \| do { \| iVar8 = *piVar1 + iVar11 * 0x200; \| if ((*(byte *)(iVar8 + 0x14) & 1) != 0) ` |
| kernel.c | 644211 | `LAB_0042ef30: \| FUN_0069e126(iVar8 + 4,pbVar10); \| LAB_0042ef34: \| FUN_004241f8(*piVar1 + iVar11 * 0x200 + 4,s_WRCC_From_MIB__0042f2b0); \| i` |
| kernel.c | 644212 | `FUN_0069e126(iVar8 + 4,pbVar10); \| LAB_0042ef34: \| FUN_004241f8(*piVar1 + iVar11 * 0x200 + 4,s_WRCC_From_MIB__0042f2b0); \| iVar8 = FUN_006a0` |
| kernel.c | 644213 | `LAB_0042ef34: \| FUN_004241f8(*piVar1 + iVar11 * 0x200 + 4,s_WRCC_From_MIB__0042f2b0); \| iVar8 = FUN_006a00c8(*piVar1 + iVar11 * 0x200 + 4); ` |
| kernel.c | 644223 | `} \| *(uint *)(iVar6 + 0x14) = uVar5; \| if ('\0' < *pcVar4) { \| puVar7 = (undefined2 *)(*piVar1 + iVar11 * 0x200); \| FUN_006f4c52(0x21,uVar2,` |
| kernel.c | 644233 | `if ((param_3 == 1) && (param_1[0x101] != 0)) { \| iVar11 = 0x20; \| LAB_0042efe4: \| iVar8 = *piVar1 + iVar11 * 0x200; \| if ((*(byte *)(iVar8 +` |
| kernel.c | 644308 | `pbVar10 = (byte *)(*piVar3 + 8); \| LAB_0042f056: \| FUN_0069e126(iVar8 + 4,pbVar10); \| FUN_004241f8(*piVar1 + iVar11 * 0x200 + 4,s_WRCC_From_` |
| kernel.c | 644309 | `LAB_0042f056: \| FUN_0069e126(iVar8 + 4,pbVar10); \| FUN_004241f8(*piVar1 + iVar11 * 0x200 + 4,s_WRCC_From_MIB__0042f2b0); \| iVar8 = FUN_006a0` |
| kernel.c | 644310 | `FUN_0069e126(iVar8 + 4,pbVar10); \| FUN_004241f8(*piVar1 + iVar11 * 0x200 + 4,s_WRCC_From_MIB__0042f2b0); \| iVar8 = FUN_006a00c8(*piVar1 + iV` |
| kernel.c | 644320 | `} \| *(uint *)(iVar6 + 0x14) = uVar5; \| if ('\0' < *pcVar4) { \| puVar7 = (undefined2 *)(*piVar1 + iVar11 * 0x200); \| FUN_006f4c52(0x21,uVar2,` |
| kernel.c | 644396 | `} \| iVar11 = 0; \| LAB_0042f27e: \| if ((*(byte *)(*piVar1 + iVar11 * 0x200 + 0x14) & 1) != 0) { \| if ('\0' < *pcVar3) { \| FUN_006f4bcc(0x21,D` |
| kernel.c | 644403 | `uVar12 = 0; \| if (*param_1 != 0) { \| do { \| if (*(byte *)(*piVar1 + iVar11 * 0x200 + 0x1ba) == uVar12) { \| if ('\0' < *pcVar3) { \| FUN_006f4` |
| kernel.c | 644417 | `} \| iVar10 = 0x2b; \| pbVar8 = param_1 + uVar12 * 0x2b + 1; \| iVar5 = *piVar1 + iVar11 * 0x200 + 0x1c8; \| goto LAB_0042f3ca; \| } \| uVar12 = (` |
| kernel.c | 644439 | `LAB_0042f35e: \| pbVar8 = param_1 + uVar12 * 0x2b + 1; \| iVar10 = 0x2b; \| iVar5 = *piVar1 + iVar11 * 0x200 + 0x1c8; \| goto LAB_0042f3ca; \| } ` |
| kernel.c | 644459 | `} \| iVar11 = 0x20; \| LAB_0042f432: \| iVar10 = *piVar1 + iVar11 * 0x200; \| if ((*(byte *)(iVar10 + 0x14) & 1) != 0) { \| uVar12 = (uint)param_` |
| kernel.c | 644502 | `cVar7 = *(char *)(*piVar2 + 0x608); \| if (cVar7 == '\0') { \| LAB_0042f472: \| iVar10 = *piVar1 + iVar11 * 0x200; \| *(undefined1 *)(iVar10 + 0` |
| kernel.c | 644508 | `} \| else { \| LAB_0042f3ac: \| iVar5 = *piVar1 + iVar11 * 0x200; \| *(char *)(iVar5 + 0x1c8) = cVar7; \| iVar5 = iVar5 + 0x1c9; \| pbVar8 = (byte` |
| kernel.c | 644516 | `LAB_0042f3ca: \| FUN_006fd7c8(iVar5,pbVar8,iVar10); \| } \| iVar10 = FUN_006a04e4(*piVar1 + iVar11 * 0x200 + 0x1c8); \| iVar5 = *piVar1 + iVar11` |
| kernel.c | 644517 | `FUN_006fd7c8(iVar5,pbVar8,iVar10); \| } \| iVar10 = FUN_006a04e4(*piVar1 + iVar11 * 0x200 + 0x1c8); \| iVar5 = *piVar1 + iVar11 * 0x200; \| uVar` |
| kernel.c | 644527 | `} \| *(uint *)(iVar5 + 0x14) = uVar12; \| if ('\0' < *pcVar3) { \| puVar6 = (undefined2 *)(*piVar1 + iVar11 * 0x200); \| FUN_006f4c52(0x21,DAT_0` |
| kernel.c | 644557 | `LAB_0042f58e: \| FUN_006fd7c8(iVar10,pbVar8,iVar5); \| LAB_0042f592: \| iVar10 = FUN_006a04e4(*piVar1 + iVar11 * 0x200 + 0x1c8); \| iVar5 = *piV` |
| kernel.c | 644558 | `FUN_006fd7c8(iVar10,pbVar8,iVar5); \| LAB_0042f592: \| iVar10 = FUN_006a04e4(*piVar1 + iVar11 * 0x200 + 0x1c8); \| iVar5 = *piVar1 + iVar11 * 0` |
| kernel.c | 644568 | `} \| *(uint *)(iVar5 + 0x14) = uVar12; \| if ('\0' < *pcVar3) { \| puVar6 = (undefined2 *)(*piVar1 + iVar11 * 0x200); \| FUN_006f4c52(0x21,uVar4` |
| kernel.c | 644613 | `} \| iVar11 = 0; \| LAB_0042f27e: \| if ((*(byte *)(*piVar1 + iVar11 * 0x200 + 0x14) & 1) != 0) { \| if ('\0' < *pcVar3) { \| FUN_006f4bcc(0x21,D` |
| kernel.c | 644620 | `uVar12 = 0; \| if (*param_1 != 0) { \| do { \| if (*(byte *)(*piVar1 + iVar11 * 0x200 + 0x1ba) == uVar12) { \| if ('\0' < *pcVar3) { \| FUN_006f4` |
| kernel.c | 644634 | `} \| iVar10 = 0x2b; \| pbVar8 = param_1 + uVar12 * 0x2b + 1; \| iVar5 = *piVar1 + iVar11 * 0x200 + 0x1c8; \| goto LAB_0042f3ca; \| } \| uVar12 = (` |
| kernel.c | 644656 | `LAB_0042f35e: \| pbVar8 = param_1 + uVar12 * 0x2b + 1; \| iVar10 = 0x2b; \| iVar5 = *piVar1 + iVar11 * 0x200 + 0x1c8; \| goto LAB_0042f3ca; \| } ` |
| kernel.c | 644676 | `} \| iVar11 = 0x20; \| LAB_0042f432: \| iVar10 = *piVar1 + iVar11 * 0x200; \| if ((*(byte *)(iVar10 + 0x14) & 1) != 0) { \| uVar12 = (uint)param_` |
| kernel.c | 644719 | `cVar7 = *(char *)(*piVar2 + 0x608); \| if (cVar7 == '\0') { \| LAB_0042f472: \| iVar10 = *piVar1 + iVar11 * 0x200; \| *(undefined1 *)(iVar10 + 0` |
| kernel.c | 644725 | `} \| else { \| LAB_0042f3ac: \| iVar5 = *piVar1 + iVar11 * 0x200; \| *(char *)(iVar5 + 0x1c8) = cVar7; \| iVar5 = iVar5 + 0x1c9; \| pbVar8 = (byte` |
| kernel.c | 644733 | `LAB_0042f3ca: \| FUN_006fd7c8(iVar5,pbVar8,iVar10); \| } \| iVar10 = FUN_006a04e4(*piVar1 + iVar11 * 0x200 + 0x1c8); \| iVar5 = *piVar1 + iVar11` |
| kernel.c | 644734 | `FUN_006fd7c8(iVar5,pbVar8,iVar10); \| } \| iVar10 = FUN_006a04e4(*piVar1 + iVar11 * 0x200 + 0x1c8); \| iVar5 = *piVar1 + iVar11 * 0x200; \| uVar` |
| kernel.c | 644744 | `} \| *(uint *)(iVar5 + 0x14) = uVar12; \| if ('\0' < *pcVar3) { \| puVar6 = (undefined2 *)(*piVar1 + iVar11 * 0x200); \| FUN_006f4c52(0x21,DAT_0` |
| kernel.c | 644774 | `LAB_0042f58e: \| FUN_006fd7c8(iVar10,pbVar8,iVar5); \| LAB_0042f592: \| iVar10 = FUN_006a04e4(*piVar1 + iVar11 * 0x200 + 0x1c8); \| iVar5 = *piV` |
| kernel.c | 644775 | `FUN_006fd7c8(iVar10,pbVar8,iVar5); \| LAB_0042f592: \| iVar10 = FUN_006a04e4(*piVar1 + iVar11 * 0x200 + 0x1c8); \| iVar5 = *piVar1 + iVar11 * 0` |
| kernel.c | 644785 | `} \| *(uint *)(iVar5 + 0x14) = uVar12; \| if ('\0' < *pcVar3) { \| puVar6 = (undefined2 *)(*piVar1 + iVar11 * 0x200); \| FUN_006f4c52(0x21,uVar4` |
| kernel.c | 644830 | `iVar12 = DAT_0042f714 + 2; \| iVar11 = DAT_0042f714 + 1; \| do { \| iVar5 = *piVar1 + iVar8 * 0x200; \| if ((*(byte *)(iVar5 + 0x14) & 1) == 0) ` |
| kernel.c | 644842 | `cVar4 = cVar10 + '\x01'; \| if (('\0' < *pcVar2) && (FUN_006f4b10(0x21,iVar9,&DAT_0042f720,cVar10,in_r3), '\0' < *pcVar2)) \| { \| puVar6 = (un` |
| kernel.c | 644855 | `iVar9 = 0x20; \| iVar8 = DAT_0042f72c + 1; \| do { \| iVar12 = *piVar1 + iVar9 * 0x200; \| if ((*(byte *)(iVar12 + 0x14) & 1) == 0) { \| cVar4 = ` |
| kernel.c | 644867 | `cVar4 = cVar10 + '\x01'; \| if (('\0' < *pcVar2) && (FUN_006f4b10(0x21,iVar5,&DAT_0042f720,cVar10,in_r3), '\0' < *pcVar2)) \| { \| puVar6 = (un` |
| kernel.c | 645136 | `*(undefined1 *)(iVar5 + 0x8018) = 0xff; \| uVar2 = 0; \| do { \| iVar6 = uVar2 * 0x200; \| uVar2 = uVar2 + 1 & 0xff; \| *(undefined1 *)(iVar5 + i` |
| kernel.c | 645157 | `*(undefined1 *)(iVar5 + 0x801c) = 0; \| uVar2 = 0; \| do { \| iVar6 = iVar5 + uVar2 * 0x200; \| uVar2 = uVar2 + 1 & 0xff; \| *(undefined1 *)(iVar` |
| kernel.c | 645197 | `*(undefined1 *)(iVar4 + 0x8018) = 0xff; \| uVar2 = 0; \| do { \| iVar1 = uVar2 * 0x200; \| uVar2 = uVar2 + 1 & 0xff; \| *(undefined1 *)(iVar4 + i` |
| kernel.c | 645275 | `piVar1 = DAT_00430038; \| uVar8 = 0; \| do { \| puVar7 = (undefined2 *)(*piVar1 + uVar8 * 0x200); \| if ((*(byte *)(puVar7 + 10) & 1) != 0) { \| ` |
| kernel.c | 645315 | `} \| } \| else { \| puVar7 = (undefined2 *)(*DAT_00430038 + uVar6 * 0x200); \| if ('\0' < *DAT_00430040) { \| FUN_006f4c52(0x21,DAT_00430054,2,*(` |
| kernel.c | 645849 | `uVar3 = 0; \| iVar4 = 0; \| do { \| if ((*(byte *)(*DAT_00430a74 + uVar3 * 0x200 + 0x14) & 2) != 0) { \| iVar4 = 1; \| break; \| }` |
| kernel.c | 645863 | `uVar5 = 0; \| do { \| uVar3 = uVar5; \| if ((*(byte *)(*piVar1 + uVar5 * 0x200 + 0x14) & 1) == 0) break; \| uVar5 = uVar5 + 1 & 0xff; \| uVar3 = ` |
| kernel.c | 645920 | ` \| uVar17 = 0; \| local_63c = 0; \| FUN_006fe9dc(local_228,0x200); \| FUN_006fe9dc(&local_638,0x208); \| uVar7 = FUN_0043066e(); \| piVar4 = DAT_` |
| kernel.c | 645931 | `if (!bVar20) { \| iVar14 = *DAT_00430a74; \| if (*(short *)(iVar14 + 0x8000) != 0) { \| psVar8 = (short *)(iVar14 + uVar7 * 0x200); \| psVar8[1]` |
| kernel.c | 645942 | `uVar7 = 0; \| sVar18 = *(short *)(*piVar4 + 0x8000); \| do { \| if ((*(byte *)(*piVar4 + uVar7 * 0x200 + 0x14) & 1) != 0) { \| uVar9 = FUN_0069d` |
| kernel.c | 645944 | `do { \| if ((*(byte *)(*piVar4 + uVar7 * 0x200 + 0x14) & 1) != 0) { \| uVar9 = FUN_0069d3f0(); \| iVar14 = FUN_0069eece(*(undefined2 *)(*piVar4` |
| kernel.c | 645947 | `iVar14 = FUN_0069eece(*(undefined2 *)(*piVar4 + uVar7 * 0x200),uVar9); \| if (iVar14 != 0) { \| iVar14 = uVar7 * 8; \| psVar8 = (short *)(*piVa` |
| kernel.c | 645961 | `} while (uVar7 < 0x20); \| uVar7 = 0x20; \| do { \| if ((*(byte *)(*piVar4 + uVar7 * 0x200 + 0x14) & 1) != 0) { \| uVar9 = FUN_0069d3f0(); \| iVa` |
| kernel.c | 645963 | `do { \| if ((*(byte *)(*piVar4 + uVar7 * 0x200 + 0x14) & 1) != 0) { \| uVar9 = FUN_0069d3f0(); \| iVar14 = FUN_0069eece(*(undefined2 *)(*piVar4` |
| kernel.c | 645965 | `uVar9 = FUN_0069d3f0(); \| iVar14 = FUN_0069eece(*(undefined2 *)(*piVar4 + uVar7 * 0x200),uVar9); \| if ((iVar14 != 0) && \| (psVar8 = (short *` |
| kernel.c | 646027 | `if ('\0' < *pcVar5) { \| FUN_006f4c52(0x21,DAT_00430a90,3,local_638,local_636,local_634); \| } \| FUN_006f4a34(auStack_630,local_228,0x200); \| ` |
| kernel.c | 646130 | `uVar3 = 0; \| do { \| iVar4 = param_1 + uVar3 * 8; \| *(undefined2 *)(iVar4 + 2) = *(undefined2 *)(*piVar2 + uVar3 * 0x200 + 2); \| *(undefined2` |
| kernel.c | 646131 | `do { \| iVar4 = param_1 + uVar3 * 8; \| *(undefined2 *)(iVar4 + 2) = *(undefined2 *)(*piVar2 + uVar3 * 0x200 + 2); \| *(undefined2 *)(param_1 +` |
| kernel.c | 646132 | `iVar4 = param_1 + uVar3 * 8; \| *(undefined2 *)(iVar4 + 2) = *(undefined2 *)(*piVar2 + uVar3 * 0x200 + 2); \| *(undefined2 *)(param_1 + uVar3 ` |
| kernel.c | 646133 | `*(undefined2 *)(iVar4 + 2) = *(undefined2 *)(*piVar2 + uVar3 * 0x200 + 2); \| *(undefined2 *)(param_1 + uVar3 * 8) = *(undefined2 *)(*piVar2 ` |
| kernel.c | 646134 | `*(undefined2 *)(param_1 + uVar3 * 8) = *(undefined2 *)(*piVar2 + uVar3 * 0x200); \| *(undefined1 *)(iVar4 + 4) = *(undefined1 *)(*piVar2 + uV` |
| kernel.c | 646135 | `*(undefined1 *)(iVar4 + 4) = *(undefined1 *)(*piVar2 + uVar3 * 0x200 + 0x22); \| *(bool *)(iVar4 + 7) = *(char *)(*piVar2 + uVar3 * 0x200 + 0` |
| kernel.c | 646424 | `FUN_006a6754(); \| FUN_006a5dce(0); \| piVar1 = DAT_00431340; \| puVar5 = (undefined4 *)(*DAT_0043133c + *(int *)(*(int *)(iVar3 + 8) + 0x20) *` |
| kernel.c | 646652 | `undefined4 *puVar3; \| bool bVar4; \|  \| puVar3 = (undefined4 *)(*DAT_004317b8 + param_1 * 0x200); \| if (((param_1 < 0x41) && ((puVar3[5] & 1)` |
| kernel.c | 646653 | `bool bVar4; \|  \| puVar3 = (undefined4 *)(*DAT_004317b8 + param_1 * 0x200); \| if (((param_1 < 0x41) && ((puVar3[5] & 1) != 0)) && ((puVar3[5]` |
| kernel.c | 646674 | `*(undefined4 *)(iVar2 + 4) = *puVar3; \| *(uint *)(iVar2 + 0x10) = param_1 + 0xe0; \| FUN_0069e342(param_1 + 0xe0,(short)(ushort)*(byte *)((in` |
| kernel.c | 647232 | `else if (iVar7 == 5) { \| uVar6 = 0; \| do { \| iVar7 = *piVar4 + uVar6 * 0x200; \| if ((*(byte *)(iVar7 + 0x14) & 1) != 0) { \| uVar5 = FUN_0043` |
| kernel.c | 647488 | `iVar2 = param_1 + uVar8 * 0xc; \| iVar4 = *(int *)(iVar2 + 0x34); \| if (iVar4 == 1) { \| iVar2 = iVar12 + *(int *)(iVar2 + 0x2c) * 0x200; \| LA` |
| kernel.c | 647517 | `iVar2 = param_1 + uVar8 * 0xc; \| iVar4 = *(int *)(iVar2 + 0x34); \| if (iVar4 == 1) { \| iVar3 = iVar12 + *(int *)(iVar2 + 0x2c) * 0x200; \| LA` |
| kernel.c | 647592 | `if (param_1 == 0x1d1 \|\| iVar16 == 2) { \| uVar17 = 0x20; \| do { \| puVar14 = (ushort *)(*DAT_00433304 + uVar17 * 0x200); \| uVar8 = *(uint *)(p` |
| kernel.c | 648634 | `piVar1 = DAT_00439d24; \| bVar27 = iVar11 == 0x22c; \| if (bVar27) { \| iVar11 = *piVar2 + -0x200; \| } \| if (bVar27 && iVar11 == 0x25) { \| uVar` |
| kernel.c | 649597 | `FUN_006fe9dc(local_920,0x208); \| FUN_006fe9dc(&local_d24,0x204); \| FUN_006fe9dc(auStack_718,0x204); \| FUN_006fe9dc(auStack_b20,0x200); \| FUN` |
| kernel.c | 649598 | `FUN_006fe9dc(&local_d24,0x204); \| FUN_006fe9dc(auStack_718,0x204); \| FUN_006fe9dc(auStack_b20,0x200); \| FUN_006fe9dc(auStack_510,0x200); \| F` |
| kernel.c | 649657 | `FUN_00798e06(local_920,auStack_b20,0); \| if (local_920[0] != 0) { \| local_919 = FUN_0069d3f0(); \| FUN_0045e248(0x2a6,local_920,0x200); \| } \|` |
| kernel.c | 652889 | `uVar5 = uVar5 + 1 & 0xff; \| if ((puVar4 == (undefined1 *)0x0) && (bVar1)) { \| bVar1 = false; \| puVar4 = *(undefined1 **)(*(int *)(iVar2 + pa` |
| kernel.c | 656999 | `(&DAT_000015b6)[iVar2] = 0; \| iVar2 = *(int *)(iVar2 + 0x1514); \| if (iVar2 != 0) { \| FUN_006f3a96(iVar2,1,0x35d,0x2001); \| *(undefined4 *)(` |
| kernel.c | 657675 | `} \| iVar6 = *piVar2; \| do { \| iVar5 = iVar6 + uVar7 * 0x200; \| *(uint *)(iVar5 + 0x14) = *(uint *)(iVar5 + 0x14) & 0xfffffffb; \| *(undefined` |
| kernel.c | 657689 | `iVar6 = *piVar2; \| uVar7 = 0x20; \| do { \| iVar5 = iVar6 + uVar7 * 0x200; \| uVar7 = uVar7 + 1 & 0xff; \| *(uint *)(iVar5 + 0x14) = *(uint *)(i` |
| kernel.c | 658618 | `puVar8 = DAT_0044cad8; \| uVar13 = 0; \| do { \| iVar7 = *piVar3 + uVar13 * 0x200; \| if ((*(byte *)(iVar7 + 0x14) & 0x10) != 0) { \| iVar10 = *(` |
| kernel.c | 658627 | `*(undefined1 *)(iVar10 + 0x21) = *(undefined1 *)(iVar7 + 0x20); \| *(undefined1 *)(iVar10 + 0x1f) = 0; \| *(undefined1 *)(iVar10 + 0x20) = 0; ` |
| kernel.c | 658629 | `*(undefined1 *)(iVar10 + 0x20) = 0; \| *(undefined2 *)(iVar10 + 0x1c) = *(undefined2 *)(*piVar3 + uVar13 * 0x200); \| uVar6 = FUN_0069d3f0(); ` |
| kernel.c | 658633 | `iVar7 = *(int *)(iVar12 + 4); \| iVar10 = iVar7 + (uint)bVar2 * 0x14; \| *(undefined1 *)(iVar10 + 0x1e) = uVar5; \| *(undefined2 *)(iVar10 + 0x` |
| kernel.c | 658640 | `else { \| *(undefined1 *)(iVar10 + 0x29) = 1; \| } \| *(undefined2 *)(iVar10 + 0x22) = *(undefined2 *)(*piVar3 + uVar13 * 0x200 + 0x26); \| *(un` |
| kernel.c | 658641 | `*(undefined1 *)(iVar10 + 0x29) = 1; \| } \| *(undefined2 *)(iVar10 + 0x22) = *(undefined2 *)(*piVar3 + uVar13 * 0x200 + 0x26); \| *(undefined4 ` |
| kernel.c | 658642 | `} \| *(undefined2 *)(iVar10 + 0x22) = *(undefined2 *)(*piVar3 + uVar13 * 0x200 + 0x26); \| *(undefined4 *)(iVar10 + 0x24) = *(undefined4 *)(*p` |
| kernel.c | 658643 | `*(undefined2 *)(iVar10 + 0x22) = *(undefined2 *)(*piVar3 + uVar13 * 0x200 + 0x26); \| *(undefined4 *)(iVar10 + 0x24) = *(undefined4 *)(*piVar` |
| kernel.c | 658656 | `uVar13 = 0x20; \| *(undefined1 *)(*(int *)(iVar12 + 4) + 0x29e) = uVar5; \| do { \| if ((*(byte *)(*piVar3 + uVar13 * 0x200 + 0x14) & 0x10) != ` |
| kernel.c | 658658 | `do { \| if ((*(byte *)(*piVar3 + uVar13 * 0x200 + 0x14) & 0x10) != 0) { \| uVar6 = FUN_0069d3f0(); \| iVar7 = FUN_0069eece(*(undefined2 *)(*piV` |
| kernel.c | 658664 | `*(undefined2 *)(iVar7 + 0x29c) = 0x34; \| bVar2 = *(byte *)(iVar7 + 0x2a8); \| *(undefined2 *)(iVar7 + (uint)bVar2 * 0x14 + 0x2ac) = \| *(undef` |
| kernel.c | 658666 | `*(undefined2 *)(iVar7 + (uint)bVar2 * 0x14 + 0x2ac) = \| *(undefined2 *)(*piVar3 + uVar13 * 0x200); \| uVar6 = FUN_0069d3f0(); \| uVar5 = FUN_0` |
| kernel.c | 658670 | `iVar10 = *(int *)(iVar12 + 4); \| iVar7 = iVar10 + (uint)bVar2 * 0x14; \| *(undefined1 *)(iVar7 + 0x2ae) = uVar5; \| *(undefined2 *)(iVar7 + 0x` |
| kernel.c | 658671 | `iVar7 = iVar10 + (uint)bVar2 * 0x14; \| *(undefined1 *)(iVar7 + 0x2ae) = uVar5; \| *(undefined2 *)(iVar7 + 0x2ba) = *(undefined2 *)(*piVar3 + ` |
| kernel.c | 658672 | `*(undefined1 *)(iVar7 + 0x2ae) = uVar5; \| *(undefined2 *)(iVar7 + 0x2ba) = *(undefined2 *)(*piVar3 + uVar13 * 0x200 + 2); \| *(bool *)(iVar7 ` |
| kernel.c | 658675 | `*(bool *)(iVar7 + 0x2b9) = *(char *)(*piVar3 + uVar13 * 0x200 + 0x1f) != '\0'; \| *(undefined1 *)(iVar7 + 0x2af) = 0; \| *(undefined1 *)(iVar7` |
| kernel.c | 658676 | `*(undefined1 *)(iVar7 + 0x2af) = 0; \| *(undefined1 *)(iVar7 + 0x2b0) = 0; \| *(undefined2 *)(iVar7 + 0x2b2) = *(undefined2 *)(*piVar3 + uVar1` |
| kernel.c | 658677 | `*(undefined1 *)(iVar7 + 0x2b0) = 0; \| *(undefined2 *)(iVar7 + 0x2b2) = *(undefined2 *)(*piVar3 + uVar13 * 0x200 + 0x26); \| *(undefined1 *)(i` |
| kernel.c | 658678 | `*(undefined2 *)(iVar7 + 0x2b2) = *(undefined2 *)(*piVar3 + uVar13 * 0x200 + 0x26); \| *(undefined1 *)(iVar7 + 0x2b1) = *(undefined1 *)(*piVar` |
| kernel.c | 659280 | `uVar12 = 0; \| iVar11 = *piVar4; \| do { \| psVar17 = (short *)(iVar11 + uVar12 * 0x200); \| uVar20 = *(uint *)(psVar17 + 10); \| if (((uVar20 & ` |
| kernel.c | 659331 | `if ((*(char *)(puVar19 + 1) == '\x01') && (*(short *)(*DAT_0044d3dc + 0x18) != 0)) { \| uVar12 = 0; \| do { \| psVar17 = (short *)(*piVar6 + uV` |
| kernel.c | 659394 | `uVar12 = 0x20; \| do { \| uVar20 = 0; \| puVar18 = (ushort *)(*piVar6 + uVar12 * 0x200); \| do { \| uVar8 = 0; \| do {` |
| kernel.c | 659794 | `uVar6 = 0x20; \| iVar2 = *DAT_0044dce8; \| do { \| if ((*(byte *)(*piVar1 + uVar6 * 0x200 + 0x14) & 0x10) != 0) { \| uVar3 = FUN_0069d3f0(); \| i` |
| kernel.c | 659796 | `do { \| if ((*(byte *)(*piVar1 + uVar6 * 0x200 + 0x14) & 0x10) != 0) { \| uVar3 = FUN_0069d3f0(); \| iVar4 = FUN_0069eece(*(undefined2 *)(*piVa` |
| kernel.c | 659873 | `uVar4 = 0x20; \| iVar3 = *DAT_0044dce8; \| do { \| iVar6 = iVar3 + uVar4 * 0x200; \| uVar4 = uVar4 + 1 & 0xff; \| *(uint *)(iVar6 + 0x14) = *(uin` |
| kernel.c | 661382 | `if (*piVar4 == 0) { \| uVar6 = 0; \| do { \| iVar8 = *DAT_0044f348 + uVar6 * 0x200; \| if (((*(byte *)(iVar8 + 0x14) & 1) != 0) && \| (piVar4[1] ` |
| kernel.c | 661480 | `if (*piVar4 == 0) { \| uVar6 = 0; \| do { \| iVar8 = *DAT_0044f348 + uVar6 * 0x200; \| if (((*(byte *)(iVar8 + 0x14) & 1) != 0) && \| (piVar4[1] ` |
| kernel.c | 662245 | `piVar3 = (int *)*DAT_0044fe5c; \| do { \| if (((*(byte *)(piVar3 + uVar9 * 0x80 + 5) & 1) != 0) && \| (*(sbyte *)((int)piVar3 + uVar9 * 0x200 +` |
| kernel.c | 662261 | `piVar3 = (int *)*piVar7; \| } \| if (piVar7 == (int *)0x0 \|\| piVar3 == (int *)0x0) break; \| piVar3 = (int *)(uint)*(byte *)(iVar4 + *piVar3 * ` |
| kernel.c | 662512 | `pcVar7 = (code *)*DAT_00450294; \| do { \| if ((((byte)pcVar7[(uVar9 * 0x80 + 5) * 4] & 1) != 0) && \| (pcVar7[uVar9 * 0x200 + 0x22] == (code)0` |
| kernel.c | 662528 | `pcVar7 = *(code **)pcVar6; \| } \| if (pcVar6 == Reset \|\| pcVar7 == Reset) break; \| pcVar7 = (code *)(uint)*(byte *)(iVar5 + *(int *)pcVar7 * ` |
| kernel.c | 664497 | `if (*piVar4 == 0) { \| uVar6 = 0; \| do { \| iVar7 = *DAT_00451a08 + uVar6 * 0x200; \| if (((*(byte *)(iVar7 + 0x14) & 1) != 0) && \| (piVar4[1] ` |
| kernel.c | 664594 | `if (*piVar4 == 0) { \| uVar6 = 0; \| do { \| iVar7 = *DAT_00451a08 + uVar6 * 0x200; \| if (((*(byte *)(iVar7 + 0x14) & 1) != 0) && \| (piVar4[1] ` |
| kernel.c | 665275 | `piVar2 = (int *)*DAT_00452158; \| do { \| if (((*(byte *)(piVar2 + uVar8 * 0x80 + 5) & 1) != 0) && \| (*(sbyte *)((int)piVar2 + uVar8 * 0x200 +` |
| kernel.c | 665291 | `piVar2 = (int *)*piVar6; \| } \| if (piVar6 == (int *)0x0 \|\| piVar2 == (int *)0x0) break; \| piVar2 = (int *)(uint)*(byte *)(iVar5 + *piVar2 * ` |
| kernel.c | 665535 | `piVar2 = (int *)*DAT_00452578; \| do { \| if (((*(byte *)(piVar2 + uVar8 * 0x80 + 5) & 1) != 0) && \| (*(sbyte *)((int)piVar2 + uVar8 * 0x200 +` |
| kernel.c | 665551 | `piVar2 = (int *)*piVar6; \| } \| if (piVar6 == (int *)0x0 \|\| piVar2 == (int *)0x0) break; \| piVar2 = (int *)(uint)*(byte *)(iVar5 + *piVar2 * ` |
| kernel.c | 666522 | `iVar3 = *DAT_00452bf8; \| uVar5 = 0; \| do { \| iVar9 = iVar3 + uVar5 * 0x200; \| uVar5 = uVar5 + 1 & 0xff; \| *(uint *)(&DAT_00004014 + iVar9) =` |
| kernel.c | 666539 | `} \| if (puVar4 == (undefined4 *)0x0 \|\| pbVar6 == (byte *)0x0) break; \| uVar11 = (uint)*pbVar6; \| iVar9 = iVar3 + uVar11 * 0x200; \| *(uint *)` |
| kernel.c | 666566 | `uVar7 = 0; \| do { \| uVar5 = uVar7; \| if (((&DAT_00004014)[*piVar1 + uVar7 * 0x200] & 1) == 0) break; \| uVar7 = uVar7 + 1 & 0xff; \| uVar5 = u` |
| kernel.c | 666575 | `uVar8 = FUN_0069d3f0(); \| iVar3 = FUN_0069eece(*(undefined2 *)(unaff_r4 + 0x18),uVar8); \| if ((iVar3 != 0) && (*(int *)(unaff_r4 + 0xc) == 0` |
| kernel.c | 666580 | `} \| } \| else { \| *(undefined2 *)(*piVar1 + uVar5 * 0x200 + 0x4000) = uVar12; \| } \| uVar8 = FUN_0069d3f0(); \| iVar3 = FUN_0069eece(*(undefine` |
| kernel.c | 666583 | `*(undefined2 *)(*piVar1 + uVar5 * 0x200 + 0x4000) = uVar12; \| } \| uVar8 = FUN_0069d3f0(); \| iVar3 = FUN_0069eece(*(undefined2 *)(*piVar1 + u` |
| kernel.c | 666586 | `iVar3 = FUN_0069eece(*(undefined2 *)(*piVar1 + uVar5 * 0x200 + 0x4000),uVar8); \| if (iVar3 != 0) { \| if ('\x01' < *pcVar2) { \| FUN_006f4c52(` |
| kernel.c | 666588 | `if ('\x01' < *pcVar2) { \| FUN_006f4c52(0x21,DAT_00452c00,1,*(undefined2 *)(*piVar1 + uVar5 * 0x200 + 0x4000)); \| } \| iVar3 = *piVar1 + uVar5` |
| kernel.c | 666611 | `else { \| *(undefined2 *)(&DAT_00004026 + iVar3) = 0xffff; \| } \| iVar3 = *piVar1 + uVar5 * 0x200; \| if (*(int *)(unaff_r4 + 0x30) == 0) { \| *` |
| kernel.c | 666634 | `*(uint *)(&DAT_00004014 + iVar3) = (*(uint *)(&DAT_00004014 + iVar3) & 0xfffff3ff) + 0x400 \| ; \| } \| iVar3 = *piVar1 + uVar5 * 0x200; \| if (` |
| kernel.c | 666651 | `*(undefined1 *)(param_2 + (int)unaff_r4 * 2), \| *(undefined1 *)(param_2 + (int)unaff_r4 * 2 + 1)); \| } \| iVar9 = *piVar1 + uVar5 * 0x200 + (` |
| kernel.c | 668800 | `iVar3 = *DAT_00454d3c; \| uVar5 = 0; \| do { \| iVar9 = iVar3 + uVar5 * 0x200; \| uVar5 = uVar5 + 1 & 0xff; \| *(uint *)(&DAT_00004014 + iVar9) =` |
| kernel.c | 668817 | `} \| if (puVar4 == (undefined4 *)0x0 \|\| pbVar6 == (byte *)0x0) break; \| uVar11 = (uint)*pbVar6; \| iVar9 = iVar3 + uVar11 * 0x200; \| *(uint *)` |
| kernel.c | 668844 | `uVar7 = 0; \| do { \| uVar5 = uVar7; \| if (((&DAT_00004014)[*piVar1 + uVar7 * 0x200] & 1) == 0) break; \| uVar7 = uVar7 + 1 & 0xff; \| uVar5 = u` |
| kernel.c | 668853 | `uVar8 = FUN_0069d3f0(); \| iVar3 = FUN_0069eece(*(undefined2 *)(unaff_r4 + 0x18),uVar8); \| if ((iVar3 != 0) && (*(int *)(unaff_r4 + 0xc) == 0` |
| kernel.c | 668858 | `} \| } \| else { \| *(undefined2 *)(*piVar1 + uVar5 * 0x200 + 0x4000) = uVar12; \| } \| uVar8 = FUN_0069d3f0(); \| iVar3 = FUN_0069eece(*(undefine` |
| kernel.c | 668861 | `*(undefined2 *)(*piVar1 + uVar5 * 0x200 + 0x4000) = uVar12; \| } \| uVar8 = FUN_0069d3f0(); \| iVar3 = FUN_0069eece(*(undefined2 *)(*piVar1 + u` |
| kernel.c | 668864 | `iVar3 = FUN_0069eece(*(undefined2 *)(*piVar1 + uVar5 * 0x200 + 0x4000),uVar8); \| if (iVar3 != 0) { \| if ('\x01' < *pcVar2) { \| FUN_006f4c52(` |
| kernel.c | 668866 | `if ('\x01' < *pcVar2) { \| FUN_006f4c52(0x21,DAT_00454d44,1,*(undefined2 *)(*piVar1 + uVar5 * 0x200 + 0x4000)); \| } \| iVar3 = *piVar1 + uVar5` |
| kernel.c | 668889 | `else { \| *(undefined2 *)(&DAT_00004026 + iVar3) = 0xffff; \| } \| iVar3 = *piVar1 + uVar5 * 0x200; \| if (*(int *)(unaff_r4 + 0x30) == 0) { \| *` |
| kernel.c | 668912 | `*(uint *)(&DAT_00004014 + iVar3) = (*(uint *)(&DAT_00004014 + iVar3) & 0xfffff3ff) + 0x400 \| ; \| } \| iVar3 = *piVar1 + uVar5 * 0x200; \| if (` |
| kernel.c | 668929 | `*(undefined1 *)(param_2 + (int)unaff_r4 * 2), \| *(undefined1 *)(param_2 + (int)unaff_r4 * 2 + 1)); \| } \| iVar9 = *piVar1 + uVar5 * 0x200 + (` |
| kernel.c | 669659 | `if (*piVar4 == 0) { \| uVar6 = 0; \| do { \| iVar7 = *DAT_004558f4 + uVar6 * 0x200; \| if (((*(byte *)(iVar7 + 0x14) & 1) != 0) && \| (piVar4[1] ` |
| kernel.c | 669756 | `if (*piVar4 == 0) { \| uVar6 = 0; \| do { \| iVar7 = *DAT_004558f4 + uVar6 * 0x200; \| if (((*(byte *)(iVar7 + 0x14) & 1) != 0) && \| (piVar4[1] ` |
| kernel.c | 670429 | `uVar7 = 0; \| do { \| uVar10 = uVar7; \| if ((*(byte *)(*piVar1 + uVar7 * 0x200 + 0x14) & 1) == 0) break; \| uVar7 = uVar7 + 1 & 0xff; \| uVar10 ` |
| kernel.c | 670434 | `uVar10 = uVar8; \| } while (uVar7 < 0x20); \| } \| puVar9 = (undefined2 *)(*piVar1 + uVar10 * 0x200); \| *(char *)(puVar9 + 0x10) = unaff_r5[0xc` |
| kernel.c | 670566 | `piVar3 = (int *)*DAT_0045603c; \| do { \| if (((*(byte *)(piVar3 + uVar9 * 0x80 + 5) & 1) != 0) && \| (*(sbyte *)((int)piVar3 + uVar9 * 0x200 +` |
| kernel.c | 670582 | `piVar3 = (int *)*piVar7; \| } \| if (piVar7 == (int *)0x0 \|\| piVar3 == (int *)0x0) break; \| piVar3 = (int *)(uint)*(byte *)(iVar6 + *piVar3 * ` |
| kernel.c | 671097 | `pcVar8 = (code *)*DAT_004569f4; \| do { \| if ((((byte)pcVar8[(uVar10 * 0x80 + 5) * 4] & 1) != 0) && \| (pcVar8[uVar10 * 0x200 + 0x22] == (code` |
| kernel.c | 671113 | `pcVar8 = *(code **)pcVar7; \| } \| if (pcVar7 == Reset \|\| pcVar8 == Reset) break; \| pcVar8 = (code *)(uint)*(byte *)(iVar6 + *(int *)pcVar8 * ` |
| kernel.c | 673977 | `do { \| if (((uint)*(byte *)(iVar8 + 6) & 1 << (7 - uVar5 & 0xff)) != 0) { \| if (bVar7 == 0) { \| local_3a = local_3a & 0x3ff \| 0x2000; \| } \| ` |
| kernel.c | 673980 | `local_3a = local_3a & 0x3ff \| 0x2000; \| } \| else if (bVar7 == 1) { \| local_38 = local_38 & 0x3ff \| 0x2000; \| } \| else if (bVar7 == 2) { \| lo` |
| kernel.c | 673983 | `local_38 = local_38 & 0x3ff \| 0x2000; \| } \| else if (bVar7 == 2) { \| local_36 = local_36 & 0x3ff \| 0x2000; \| } \| else if (bVar7 == 3) { \| lo` |
| kernel.c | 673986 | `local_36 = local_36 & 0x3ff \| 0x2000; \| } \| else if (bVar7 == 3) { \| local_34 = local_34 & 0x3ff \| 0x2000; \| } \| bVar7 = bVar7 + 1; \| }` |
| kernel.c | 674845 | `if ('\x04' < *DAT_00364dd4) { \| FUN_006f4bcc(0x1f,DAT_00364de0 + -6); \| } \| puVar3 = (undefined4 *)FUN_006f15ec(0x2008,0x25,1,0x53f,0x70e,un` |
| kernel.c | 675177 | `if (*piVar4 == 0) { \| uVar6 = 0; \| do { \| iVar7 = *DAT_0045e860 + uVar6 * 0x200; \| if (((*(byte *)(iVar7 + 0x14) & 1) != 0) && \| (piVar4[1] ` |
| kernel.c | 675273 | `if (*piVar4 == 0) { \| uVar6 = 0; \| do { \| iVar7 = *DAT_0045e860 + uVar6 * 0x200; \| if (((*(byte *)(iVar7 + 0x14) & 1) != 0) && \| (piVar4[1] ` |
| kernel.c | 675920 | `if (*piVar11 == 0) { \| uVar8 = 0; \| do { \| iVar9 = *DAT_0045f180 + uVar8 * 0x200; \| if (((*(byte *)(iVar9 + 0x14) & 1) != 0) && \| (piVar11[1` |
| kernel.c | 676016 | `if (*piVar11 == 0) { \| uVar8 = 0; \| do { \| iVar9 = *DAT_0045f180 + uVar8 * 0x200; \| if (((*(byte *)(iVar9 + 0x14) & 1) != 0) && \| (piVar11[1` |
| kernel.c | 676529 | `uVar7 = 0; \| do { \| uVar10 = uVar7; \| if ((*(byte *)(*piVar1 + uVar7 * 0x200 + 0x14) & 1) == 0) break; \| uVar7 = uVar7 + 1 & 0xff; \| uVar10 ` |
| kernel.c | 676534 | `uVar10 = uVar8; \| } while (uVar7 < 0x20); \| } \| puVar9 = (undefined2 *)(*piVar1 + uVar10 * 0x200); \| *(char *)(puVar9 + 0x10) = unaff_r5[0xc` |
| kernel.c | 676664 | `if (*(int *)(*piVar6 + 0x30) == 2) { \| if (*(char *)(param_1 + 0x48) == '\0') { \| do { \| iVar7 = *DAT_0045fbf0 + uVar10 * 0x200; \| if (((*(b` |
| kernel.c | 676681 | `piVar4 = (int *)*piVar8; \| } \| if (piVar8 == (int *)0x0 \|\| piVar4 == (int *)0x0) break; \| piVar4 = (int *)(uint)*(byte *)(iVar7 + *piVar4 * ` |
| kernel.c | 676915 | `if (*(int *)(*piVar8 + 0x30) == 2) { \| if (*(char *)(param_1 + 0x4c) == '\0') { \| do { \| iVar9 = *DAT_00460010 + uVar10 * 0x200; \| if (((*(b` |
| kernel.c | 676932 | `piVar4 = (int *)*piVar6; \| } \| if (piVar6 == (int *)0x0 \|\| piVar4 == (int *)0x0) break; \| piVar4 = (int *)(uint)*(byte *)(iVar9 + *piVar4 * ` |
| kernel.c | 678720 | `uVar6 = 0; \| do { \| uVar12 = uVar6; \| if (((&DAT_00004014)[*piVar2 + uVar6 * 0x200] & 1) == 0) break; \| uVar6 = uVar6 + 1 & 0xff; \| uVar12 =` |
| kernel.c | 678729 | `uVar7 = FUN_0069d3f0(); \| iVar3 = FUN_0069eece(*(undefined2 *)(unaff_r4 + 0x18),uVar7); \| if ((iVar3 != 0) && (*(int *)(unaff_r4 + 0xc) == 0` |
| kernel.c | 678734 | `} \| } \| else { \| *(undefined2 *)(*piVar2 + uVar12 * 0x200 + 0x4000) = uVar13; \| } \| uVar7 = FUN_0069d3f0(); \| iVar3 = FUN_0069eece(*(undefin` |
| kernel.c | 678737 | `*(undefined2 *)(*piVar2 + uVar12 * 0x200 + 0x4000) = uVar13; \| } \| uVar7 = FUN_0069d3f0(); \| iVar3 = FUN_0069eece(*(undefined2 *)(*piVar2 + ` |
| kernel.c | 678740 | `iVar3 = FUN_0069eece(*(undefined2 *)(*piVar2 + uVar12 * 0x200 + 0x4000),uVar7); \| if (iVar3 != 0) { \| if ('\x01' < *DAT_0046195c) { \| FUN_00` |
| kernel.c | 678742 | `if ('\x01' < *DAT_0046195c) { \| FUN_006f4c52(0x21,DAT_00461960,1,*(undefined2 *)(*piVar2 + uVar12 * 0x200 + 0x4000)); \| } \| iVar3 = *piVar2 ` |
| kernel.c | 678765 | `else { \| *(undefined2 *)(&DAT_00004026 + iVar3) = 0xffff; \| } \| iVar3 = *piVar2 + uVar12 * 0x200; \| if (*(int *)(unaff_r4 + 0x30) == 0) { \| ` |
| kernel.c | 678798 | `*(uint *)(&DAT_00004014 + iVar3) = (*(uint *)(&DAT_00004014 + iVar3) & 0xfffff3ff) + 0x400 \| ; \| } \| iVar3 = *piVar2 + uVar12 * 0x200; \| if ` |
| kernel.c | 680331 | `if (*piVar4 == 0) { \| uVar6 = 0; \| do { \| iVar7 = *DAT_00462af4 + uVar6 * 0x200; \| if (((*(byte *)(iVar7 + 0x14) & 1) != 0) && \| (piVar4[1] ` |
| kernel.c | 680428 | `if (*piVar4 == 0) { \| uVar6 = 0; \| do { \| iVar7 = *DAT_00462af4 + uVar6 * 0x200; \| if (((*(byte *)(iVar7 + 0x14) & 1) != 0) && \| (piVar4[1] ` |
| kernel.c | 681073 | `if (*piVar11 == 0) { \| uVar8 = 0; \| do { \| iVar9 = *DAT_00463410 + uVar8 * 0x200; \| if (((*(byte *)(iVar9 + 0x14) & 1) != 0) && \| (piVar11[1` |
| kernel.c | 681170 | `if (*piVar11 == 0) { \| uVar8 = 0; \| do { \| iVar9 = *DAT_00463410 + uVar8 * 0x200; \| if (((*(byte *)(iVar9 + 0x14) & 1) != 0) && \| (piVar11[1` |
| kernel.c | 681668 | `uVar7 = 0; \| do { \| uVar10 = uVar7; \| if ((*(byte *)(*piVar1 + uVar7 * 0x200 + 0x14) & 1) == 0) break; \| uVar7 = uVar7 + 1 & 0xff; \| uVar10 ` |
| kernel.c | 681673 | `uVar10 = uVar8; \| } while (uVar7 < 0x20); \| } \| puVar9 = (undefined2 *)(*piVar1 + uVar10 * 0x200); \| *(char *)(puVar9 + 0x10) = unaff_r5[0xc` |
| kernel.c | 681800 | `if (*(int *)(*piVar6 + 0x30) == 2) { \| if (param_1[0x44] == '\0') { \| do { \| iVar7 = *DAT_00463e00 + uVar10 * 0x200; \| if (((*(byte *)(iVar7` |
| kernel.c | 681817 | `piVar4 = (int *)*piVar8; \| } \| if (piVar8 == (int *)0x0 \|\| piVar4 == (int *)0x0) break; \| piVar4 = (int *)(uint)*(byte *)(iVar7 + *piVar4 * ` |
| kernel.c | 682031 | `if (*(int *)(*piVar9 + 0x30) == 2) { \| if (param_1[0x48] == '\0') { \| do { \| iVar6 = *DAT_0046425c + uVar10 * 0x200; \| if (((*(byte *)(iVar6` |
| kernel.c | 682048 | `piVar4 = (int *)*piVar7; \| } \| if (piVar7 == (int *)0x0 \|\| piVar4 == (int *)0x0) break; \| piVar4 = (int *)(uint)*(byte *)(iVar6 + *piVar4 * ` |
| kernel.c | 683765 | `iVar3 = *DAT_00465934; \| uVar5 = 0; \| do { \| iVar9 = iVar3 + uVar5 * 0x200; \| uVar5 = uVar5 + 1 & 0xff; \| *(uint *)(&DAT_00004014 + iVar9) =` |
| kernel.c | 683782 | `} \| if (puVar4 == (undefined4 *)0x0 \|\| pbVar6 == (byte *)0x0) break; \| uVar11 = (uint)*pbVar6; \| iVar9 = iVar3 + uVar11 * 0x200; \| *(uint *)` |
| kernel.c | 683809 | `uVar7 = 0; \| do { \| uVar5 = uVar7; \| if (((&DAT_00004014)[*piVar1 + uVar7 * 0x200] & 1) == 0) break; \| uVar7 = uVar7 + 1 & 0xff; \| uVar5 = u` |
| kernel.c | 683818 | `uVar8 = FUN_0069d3f0(); \| iVar3 = FUN_0069eece(*(undefined2 *)(unaff_r4 + 0x18),uVar8); \| if ((iVar3 != 0) && (*(int *)(unaff_r4 + 0xc) == 0` |
| kernel.c | 683823 | `} \| } \| else { \| *(undefined2 *)(*piVar1 + uVar5 * 0x200 + 0x4000) = uVar12; \| } \| uVar8 = FUN_0069d3f0(); \| iVar3 = FUN_0069eece(*(undefine` |
| kernel.c | 683826 | `*(undefined2 *)(*piVar1 + uVar5 * 0x200 + 0x4000) = uVar12; \| } \| uVar8 = FUN_0069d3f0(); \| iVar3 = FUN_0069eece(*(undefined2 *)(*piVar1 + u` |
| kernel.c | 683829 | `iVar3 = FUN_0069eece(*(undefined2 *)(*piVar1 + uVar5 * 0x200 + 0x4000),uVar8); \| if (iVar3 != 0) { \| if ('\x01' < *pcVar2) { \| FUN_006f4c52(` |
| kernel.c | 683831 | `if ('\x01' < *pcVar2) { \| FUN_006f4c52(0x21,DAT_0046593c,1,*(undefined2 *)(*piVar1 + uVar5 * 0x200 + 0x4000)); \| } \| iVar3 = *piVar1 + uVar5` |
| kernel.c | 683854 | `else { \| *(undefined2 *)(&DAT_00004026 + iVar3) = 0xffff; \| } \| iVar3 = *piVar1 + uVar5 * 0x200; \| if (*(int *)(unaff_r4 + 0x30) == 0) { \| *` |
| kernel.c | 683877 | `*(uint *)(&DAT_00004014 + iVar3) = (*(uint *)(&DAT_00004014 + iVar3) & 0xfffff3ff) + 0x400 \| ; \| } \| iVar3 = *piVar1 + uVar5 * 0x200; \| if (` |
| kernel.c | 683894 | `*(undefined1 *)(param_2 + (int)unaff_r4 * 2), \| *(undefined1 *)(param_2 + (int)unaff_r4 * 2 + 1)); \| } \| iVar9 = *piVar1 + uVar5 * 0x200 + (` |
| kernel.c | 685236 | `*(undefined4 *)(iVar10 + 8) = 1; \| if (puVar9 == (uint *)0x0) { \| do { \| iVar10 = *piVar3 + uVar12 * 0x200; \| if ((*(byte *)(iVar10 + 0x14) ` |
| kernel.c | 685241 | `puVar5 = (undefined2 *)(*(int *)(*piVar2 + param_1 * 4) + uVar14 * 0x10 + 0x10); \| uVar14 = uVar14 + 1 & 0xff; \| *puVar5 = *(undefined2 *)(i` |
| kernel.c | 685242 | `uVar14 = uVar14 + 1 & 0xff; \| *puVar5 = *(undefined2 *)(iVar10 + 2); \| *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(*piVar3 + uVar12 * 0x20` |
| kernel.c | 685258 | `} \| do { \| if (((1 << uVar12 & uVar15) != 0) && \| (iVar10 = *piVar3 + uVar12 * 0x200, (*(byte *)(iVar10 + 0x14) & 1) != 0)) { \| uVar15 = uVa` |
| kernel.c | 685263 | `puVar5 = (undefined2 *)(*(int *)(*piVar2 + param_1 * 4) + uVar14 * 0x10 + 0x10); \| uVar14 = uVar14 + 1 & 0xff; \| *puVar5 = *(undefined2 *)(i` |
| kernel.c | 685264 | `uVar14 = uVar14 + 1 & 0xff; \| *puVar5 = *(undefined2 *)(iVar10 + 2); \| *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(*piVar3 + uVar12 * 0x20` |
| kernel.c | 685290 | `} \| do { \| if (((1 << uVar12 & uVar15) != 0) && \| (iVar10 = *piVar3 + uVar12 * 0x200, ((&DAT_00004014)[iVar10] & 1) != 0)) { \| puVar5 = (und` |
| kernel.c | 685294 | `puVar5 = (undefined2 *)(*(int *)(*piVar2 + param_1 * 4) + uVar14 * 0x18 + 0x10); \| uVar14 = uVar14 + 1 & 0xff; \| puVar5[1] = *(undefined2 *)` |
| kernel.c | 685295 | `uVar14 = uVar14 + 1 & 0xff; \| puVar5[1] = *(undefined2 *)(&DAT_00004002 + iVar10); \| *puVar5 = *(undefined2 *)(*piVar3 + uVar12 * 0x200 + 0x` |
| kernel.c | 685304 | `if ('\x01' < *DAT_00466b68) { \| FUN_006f4bcc(0x21,_DAT_00466b6c); \| } \| FUN_006fd7c8(puVar5 + 7,&DAT_000041be + *piVar3 + uVar12 * 0x200,10)` |
| kernel.c | 690621 | `int iVar2; \|  \| iVar2 = *(int *)(DAT_0046f670 + 0x1c); \| uVar1 = *(uint *)(iVar2 + 0xc) \| 0x200; \| *(uint *)(DAT_0046f698 + 0xc) = uVar1; \| ` |
| kernel.c | 691055 | `do { \| uVar2 = uVar2 + 1; \| } while (uVar2 < 0x50); \| *(uint *)(DAT_0046fb50 + 0x2c) = *(uint *)(DAT_0046fb50 + 0x2c) \| 0x2000000; \| *(uint ` |
| kernel.c | 691166 | `iVar9 = DAT_0046ffa4; \| uVar8 = DAT_0046ff88; \| if (uVar10 == 7) { \| *(undefined4 *)(DAT_0046ffa4 + 0x44) = 0x2000000; \| *(undefined4 *)(iVa` |
| kernel.c | 691410 | `uVar8 = *(undefined4 *)(DAT_00470480 + 0x44); \| FUN_00470070(); \| iVar2 = DAT_00470488; \| *(uint *)(DAT_00470488 + 0x44) = *(uint *)(DAT_004` |
| kernel.c | 691528 | `FUN_0071737e(0); \| FUN_0074e746(0); \| *(undefined1 *)(iVar2 + 2) = 0; \| *(uint *)(iVar4 + 0x3c) = *(uint *)(iVar4 + 0x3c) \| 0x2000000; \| FUN` |
| kernel.c | 691776 | ` \| iVar1 = DAT_00470d18; \| if (param_1 != 0) { \| *(undefined4 *)(DAT_00470d18 + 0x44) = 0x2000000; \| *(undefined4 *)(iVar1 + 0x44) = 0x10000` |
| kernel.c | 691778 | `if (param_1 != 0) { \| *(undefined4 *)(DAT_00470d18 + 0x44) = 0x2000000; \| *(undefined4 *)(iVar1 + 0x44) = 0x1000000; \| *(undefined4 *)(iVar1` |
| kernel.c | 691782 | `*(undefined4 *)(iVar1 + 0x34) = 0x3000000; \| return; \| } \| *(undefined4 *)(DAT_00470d1c + 0x34) = 0x2000000; \| *(undefined4 *)(iVar1 + 0x34)` |
| kernel.c | 691794 | `void FUN_00470cc4(void) \|  \| { \| *DAT_00470d6c = 0x20000; \| return; \| } \| ` |
| kernel.c | 693103 | `} \| else { \| if (iVar4 != 0x36c) { \| iVar2 = iVar4 + -0x200; \| } \| if (iVar4 == 0x36c \|\| iVar2 == 0x182) { \| param_1[1] = 0;` |
| kernel.c | 694898 | `uVar1 = 0x100; \| break; \| case 7: \| uVar1 = 0x200; \| break; \| case 8: \| uVar1 = 0x400;` |
| kernel.c | 696374 | `uVar1 = (uint)*(byte *)(param_1 + 8); \| break; \| case 7: \| *param_2 = 0x200; \| uVar1 = (uint)*(byte *)(param_1 + 8); \| break; \| case 8:` |
| kernel.c | 698433 | `} \| } \| else if (param_1 == 0x49) { \| if ((*(ushort *)*DAT_00479e20 & 0x200) != 0) { \| if ('\0' < *pcVar1) { \| FUN_006f4bcc(0x21,DAT_00479e4` |
| kernel.c | 698446 | `*(undefined4 *)(iVar3 + 0x78) = 0; \| } \| puVar4 = (ushort *)*piVar2; \| *puVar4 = *puVar4 \| 0x200; \| puVar4[0x38] = 0x49; \| puVar4[0x39] = 0;` |
| kernel.c | 698521 | `} \| } \| else if (param_1 == 0x4d) { \| if ((*(ushort *)*DAT_00479e20 & 0x2000) != 0) { \| if ('\0' < *pcVar1) { \| FUN_006f4bcc(0x21,DAT_00479e` |
| kernel.c | 698534 | `*(undefined4 *)(iVar3 + 0xa8) = 0; \| } \| puVar4 = (ushort *)*piVar2; \| *puVar4 = *puVar4 \| 0x2000; \| puVar4[0x50] = 0x4d; \| puVar4[0x51] = 0` |
| kernel.c | 700822 | `else if (puVar5 < (undefined *)0x1001) { \| uVar6 = 0xb; \| } \| else if (puVar5 < (undefined *)0x2001) { \| uVar6 = 0xc; \| } \| else if (puVar5 ` |
| kernel.c | 700834 | `else if (puVar5 < (undefined *)0x10001) { \| uVar6 = 0xf; \| } \| else if (puVar5 < (undefined *)0x20001) { \| uVar6 = 0x10; \| } \| else if (puVa` |
| kernel.c | 700893 | `else if (puVar5 < (undefined *)0x1001) { \| uVar6 = 0xb; \| } \| else if (puVar5 < (undefined *)0x2001) { \| uVar6 = 0xc; \| } \| else if (puVar5 ` |
| kernel.c | 700905 | `else if (puVar5 < (undefined *)0x10001) { \| uVar6 = 0xf; \| } \| else if (puVar5 < (undefined *)0x20001) { \| uVar6 = 0x10; \| } \| else if (puVa` |
| kernel.c | 700967 | `else if (puVar5 < (undefined *)0x1001) { \| uVar6 = 0xb; \| } \| else if (puVar5 < (undefined *)0x2001) { \| uVar6 = 0xc; \| } \| else if (puVar5 ` |
| kernel.c | 701648 | `} \| if (*(int *)(iVar2 + 0x48) == 0) { \| *(undefined4 *)(iVar3 + 0x30) = 0; \| *(uint *)(iVar3 + 0x34) = (uint)*(ushort *)(&DAT_00004002 + *D` |
| kernel.c | 701668 | `} \| if ((*(char *)(iVar2 + 0x4d) != '\0') && \| (iVar6 = *(int *)(*piVar1 + param_3 * 4) + param_5 * 0x600, \| (*(ushort *)(iVar6 + iVar5) & 0` |
| kernel.c | 701762 | `if ((1 << uVar2 & param_5) != 0) { \| iVar4 = *(int *)(*DAT_00480628 + param_4 * 4) + param_6 * 0x600; \| iVar5 = uVar2 * 0x28 + 0xd98; \| if (` |
| kernel.c | 702033 | `if (bVar11) { \| uVar2 = (ushort)*puVar10; \| } \| if (bVar11 && (uVar2 & 0x200) != 0) { \| uVar8 = puVar10[2]; \| if ((int)uVar8 < -0x73) { \| iV` |
| kernel.c | 702177 | `if (*pcVar1 != '\0') { \| puVar8 = (undefined *)(uint)*(ushort *)(puVar8 + iVar7); \| } \| if ((*pcVar1 != '\0' && ((uint)puVar8 & 0x200) != 0)` |
| kernel.c | 702198 | `if (*pcVar1 != '\0') { \| puVar8 = (undefined *)(uint)*(ushort *)(puVar8 + iVar7); \| } \| if ((*pcVar1 != '\0' && ((uint)puVar8 & 0x200) != 0)` |
| kernel.c | 702680 | `*(int *)(iVar3 + 0x3c) = iVar6; \| *(undefined1 *)(iVar3 + 0x38) = 1; \| } \| if ((*(char *)(iVar8 + 0xd) == '\x01') && ((*puVar7 & 0x200) != 0` |
| kernel.c | 702822 | `if (bVar12) { \| uVar6 = (uint)*(ushort *)(iVar5 + uVar6); \| } \| if ((bVar12 && (uVar6 & 0x200) != 0) && \| (iVar5 = *(int *)(iVar5 + uVar11 *` |
| kernel.c | 702843 | `if (*pcVar1 != '\0') { \| puVar7 = (undefined *)(uint)*(ushort *)(puVar7 + iVar5); \| } \| if ((*pcVar1 != '\0' && ((uint)puVar7 & 0x200) != 0)` |
| kernel.c | 703010 | `if (bVar12) { \| uVar8 = (uint)*(ushort *)(iVar7 + uVar8); \| } \| if ((bVar12 && (uVar8 & 0x200) != 0) && \| (iVar7 = *(int *)(iVar7 + uVar5 * ` |
| kernel.c | 703031 | `if (*pcVar1 != '\0') { \| puVar9 = (undefined *)(uint)*(ushort *)(puVar9 + iVar7); \| } \| if ((*pcVar1 != '\0' && ((uint)puVar9 & 0x200) != 0)` |
| kernel.c | 703154 | `if (*pcVar1 != '\0') { \| puVar6 = (undefined *)(uint)*(ushort *)(puVar6 + iVar5); \| } \| if ((*pcVar1 != '\0' && ((uint)puVar6 & 0x200) != 0)` |
| kernel.c | 703263 | `if ((1 << uVar2 & param_5) != 0) { \| iVar6 = uVar2 * 0x28 + 0xd9c; \| iVar5 = *(int *)(*DAT_00481f38 + param_4 * 4); \| if (((*(char *)(iVar5 ` |
| kernel.c | 704711 | `} \| iVar3 = *(int *)(*piVar1 + param_1 * 4); \| if ((((&DAT_00001998)[iVar3 + uVar7 * 0x28] == '\x01') && \| ((*(ushort *)(&DAT_00001998 + iVa` |
| kernel.c | 704731 | `} \| iVar4 = uVar7 * 0x28 + 0xd98; \| iVar3 = *(int *)(*piVar1 + param_1 * 4) + param_2 * 0x600; \| if (((*(char *)(iVar3 + iVar4) == '\x01') &` |
| kernel.c | 704799 | `puVar3 = (undefined4 *)*puVar3; \| *puVar3 = 0; \| *(undefined1 *)(puVar3 + 1) = 0; \| puVar4 = (ushort *)(*piVar10 + iVar2 * 0x200); \| if (uVa` |
| kernel.c | 704806 | `puVar3[2] = uVar5; \| } \| else { \| puVar3[3] = (uint)puVar4[0x2000]; \| uVar5 = FUN_006a1434(); \| puVar3[2] = uVar5; \| }` |
| kernel.c | 704814 | `FUN_006b6332(puVar3 + 5,4); \| puVar6 = (undefined4 *)FUN_006b63e4(puVar3 + 5,1,0x5b2,0x1294); \| puVar7 = (uint *)*puVar6; \| iVar2 = *piVar10` |
| kernel.c | 704893 | `piVar4 = DAT_00483ed8; \| if (*(int *)(iVar2 + 0x48) == 0) { \| *(undefined4 *)(iVar3 + 0x30) = 0; \| *(uint *)(iVar3 + 0x34) = (uint)*(ushort ` |
| kernel.c | 704914 | `if (*(char *)(iVar2 + 0x4d) != '\0') { \| iVar10 = *piVar1; \| iVar6 = *(int *)(iVar10 + param_3 * 4) + param_5 * 0x600; \| if ((*(ushort *)(iV` |
| kernel.c | 705013 | `iVar3 = iVar7 + uVar4 * 0x600; \| do { \| iVar1 = uVar2 * 0x28 + 0xd98; \| if (((*(char *)(iVar3 + iVar1) == '\x01') && ((*(ushort *)(iVar3 + i` |
| kernel.c | 705154 | `if (bVar12) { \| uVar2 = (ushort)*puVar9; \| } \| if (bVar12 && (uVar2 & 0x200) != 0) { \| uVar8 = puVar9[2]; \| if ((int)uVar8 < -0x73) { \| iVar` |
| kernel.c | 705680 | `iVar5 = *(int *)(*DAT_00484bf8 + param_4 * 4); \| iVar6 = uVar9 * 0x28 + 0xd9c; \| if (((*(char *)(iVar5 + iVar6) == '\x01') && ((*(ushort *)(` |
| kernel.c | 705742 | `iVar5 = *(int *)(*DAT_0048525c + param_4 * 4); \| if (((*(char *)(iVar5 + iVar6) == '\x01') && \| ((*(ushort *)(iVar5 + iVar6) & 0x400) != 0))` |
| kernel.c | 705781 | `if ((1 << uVar9 & param_5) != 0) { \| iVar5 = *(int *)(*DAT_0048525c + param_4 * 4); \| iVar6 = uVar9 * 0x28 + 0xd9c; \| if (((*(char *)(iVar5 ` |
| kernel.c | 705782 | `iVar5 = *(int *)(*DAT_0048525c + param_4 * 4); \| iVar6 = uVar9 * 0x28 + 0xd9c; \| if (((*(char *)(iVar5 + iVar6) == '\x01') && ((*(ushort *)(` |
| kernel.c | 705799 | `if ((1 << uVar9 & param_6) != 0) { \| iVar5 = *(int *)(*DAT_0048525c + param_4 * 4); \| if ((((&DAT_000012a4)[iVar5 + uVar9 * 0x28] == '\x01')` |
| kernel.c | 705869 | `iVar5 = *(int *)(*DAT_0048525c + param_4 * 4); \| iVar6 = uVar9 * 0x28 + 0xd9c; \| if (((*(char *)(iVar5 + iVar6) == '\x01') && ((*(ushort *)(` |
| kernel.c | 705931 | `iVar5 = *(int *)(*DAT_00485720 + param_4 * 4); \| if (((*(char *)(iVar5 + iVar6) == '\x01') && \| ((*(ushort *)(iVar5 + iVar6) & 0x400) != 0))` |
| kernel.c | 705970 | `if ((1 << uVar9 & param_5) != 0) { \| iVar5 = *(int *)(*DAT_0048525c + param_4 * 4); \| iVar6 = uVar9 * 0x28 + 0xd9c; \| if (((*(char *)(iVar5 ` |
| kernel.c | 705971 | `iVar5 = *(int *)(*DAT_0048525c + param_4 * 4); \| iVar6 = uVar9 * 0x28 + 0xd9c; \| if (((*(char *)(iVar5 + iVar6) == '\x01') && ((*(ushort *)(` |
| kernel.c | 705988 | `if ((1 << uVar9 & param_6) != 0) { \| iVar5 = *(int *)(*DAT_0048525c + param_4 * 4); \| if ((((&DAT_000012a4)[iVar5 + uVar9 * 0x28] == '\x01')` |
| kernel.c | 706225 | `*(int *)(iVar3 + 0x3c) = iVar11; \| *(undefined1 *)(iVar3 + 0x38) = 1; \| } \| if ((*(char *)(iVar9 + 0xd) == '\x01') && ((*puVar8 & 0x200) != ` |
| kernel.c | 707400 | `uVar1 = *(undefined2 *)(param_1 + uVar3 * 4 + 0x104); \| iVar2 = FUN_003f9b6a(uVar1,param_3); \| if (iVar2 == 1) { \| FUN_006a2616(1,uVar3,uVar` |
| kernel.c | 707403 | `FUN_006a2616(1,uVar3,uVar1,0x200,0x200,0x200,param_3); \| } \| else { \| FUN_006a2616(0,uVar3,0,0x200,0x200,0x200,param_3); \| } \| uVar3 = uVar3` |
| kernel.c | 707425 | `if (*(int *)(param_1 + 0x104) == 0) { \| bVar1 = 0; \| do { \| FUN_006a2616(0,bVar1,0,0x200,0x200,0x200,param_3); \| bVar1 = bVar1 + 1; \| } whil` |
| kernel.c | 708069 | `param_1[uVar5 + 0x41] = (uint)*(ushort *)(iVar1 + uVar5 * 2 + 4); \| } \| else { \| param_1[uVar5 + 0x41] = 0x200; \| } \| uVar5 = uVar5 + 1 & 0x` |
| kernel.c | 713911 | `local_34 = 0; \| if (1 < param_3) { \| uVar2 = FUN_006fd49c(DAT_00492f38,param_3); \| thunk_FUN_006fb59e(s_Card_ID_<_CARD_MAXID_00492f08,DAT_00` |
| kernel.c | 714850 | `thunk_FUN_006fb59e(s_MonitoredIndex_<_MAX_CARD_NUM_W*_00495a74,s_wl1c_meas_iram_c_00495a28,0xa26 \| ,uVar1); \| } \| if (param_2 < 0x200) { \| i` |
| kernel.c | 716676 | `iVar11 = (int)(short)((short)iVar11 + 1); \| } while (iVar11 < (int)uVar10); \| } \| thunk_FUN_006f9b9a(iVar5,s_audio_nv_arm_c_00498fa8,0x200);` |
| kernel.c | 717171 | `uVar2 = uVar2 \| 0x40; \| } \| if (*(char *)(param_1 + 0x36) != '\0') { \| uVar2 = uVar2 \| 0x200000; \| } \| if (*(char *)(param_1 + 0x5e) != '\0'` |
| kernel.c | 717174 | `uVar2 = uVar2 \| 0x200000; \| } \| if (*(char *)(param_1 + 0x5e) != '\0') { \| uVar2 = uVar2 \| 0x20000; \| } \| iVar1 = *(int *)(iVar3 + 0x54); \| ` |
| kernel.c | 717178 | `} \| iVar1 = *(int *)(iVar3 + 0x54); \| if (iVar1 == 0xe) { \| uVar2 = uVar2 \| 0x2000000; \| } \| else if (iVar1 < 0xf) { \| if (iVar1 == 5) {` |
| kernel.c | 717189 | `uVar2 = uVar2 \| 0x400; \| } \| else if (iVar1 == 3) { \| uVar2 = uVar2 \| 0x200; \| } \| } \| else if (iVar1 == 0xb) {` |
| kernel.c | 717200 | `} \| } \| else if (iVar1 == 0x2a) { \| uVar2 = uVar2 \| 0x20000; \| } \| else if (iVar1 == 0x2d) { \| uVar2 = uVar2 \| 0x40000;` |
| kernel.c | 717245 | `uVar1 = 0; \| iVar2 = *(int *)(DAT_00499d48 + param_1 * 4 + 0x54); \| if (iVar2 == 0xe) { \| uVar1 = 0x2000000; \| } \| else if (iVar2 < 0xf) { \|` |
| kernel.c | 717256 | `uVar1 = 0x400; \| } \| else if (iVar2 == 3) { \| uVar1 = 0x200; \| } \| } \| else if (iVar2 == 0xb) {` |
| kernel.c | 717267 | `} \| } \| else if (iVar2 == 0x2a) { \| uVar1 = 0x20000; \| } \| else if (iVar2 == 0x2d) { \| uVar1 = 0x40000;` |
| kernel.c | 717282 | `uVar1 = uVar1 \| 0x40; \| } \| if (*(char *)(param_1 + DAT_00499d48 + 0x36) != '\0') { \| uVar1 = uVar1 \| 0x200000; \| } \| *param_2 = uVar1; \| re` |
| kernel.c | 723906 | `uVar4 = 0; \| } \| else { \| uVar4 = (short)((iVar7 + 7U) * 0x2000 >> 0x10) - 6; \| } \| iVar7 = DAT_004a2168 + 2; \| for (uVar8 = (uint)uVar4; pu` |
| kernel.c | 727394 | `uVar3 = 0; \| iVar1 = FUN_004a6dc4(); \| if ((((*DAT_004a8a40 != 0) && (iVar2 = FUN_004a885c(iVar1), iVar2 != 0)) && \| (*(short *)(DAT_004a8a4` |
| kernel.c | 729149 | `} \| iVar6 = iVar6 + -0x244; \| } \| *(int *)(iVar5 + 0x14) = iVar6 + -0x2000; \| if (param_4 != 0) { \| *(int *)(iVar5 + 0x14) = *(int *)(iVar5 ` |
| kernel.c | 729923 | `*param_5 = local_40[0]; \| local_58 = &local_4c; \| FUN_006a7aba(param_1,local_30,puVar3,uVar4); \| param_5[1] = (((local_4c & 0x7ffff) >> 3) +` |
| kernel.c | 729927 | `; \| local_58 = &local_4c; \| FUN_006a7aba(param_3,param_4,param_1,local_30); \| local_50 = (((local_4c & 0x7ffff) >> 3) + (local_48 * 0x2000 +` |
| kernel.c | 734045 | `if ('\x01' < *pcVar1) { \| FUN_006f4b10(0x1f,DAT_004afd8c,&DAT_004af4dc,uVar8); \| } \| uVar9 = *(uint *)(DAT_004afd90 + 4) / ((uint)(*(byte *)` |
| kernel.c | 734234 | `if (0x1f < uVar11) break; \| } \| uVar13 = uVar13 + 1; \| } while (uVar13 < 0x200); \| } \| } \| puVar12[1] = uVar11;` |
| kernel.c | 734302 | `*(undefined1 *)(puVar3 + 4) = \| *(undefined1 *)(iVar9 + (uint)*(byte *)(iVar5 + param_1 * 0x4c) * 0x18 + 8); \| puVar3[3] = 0xffffffff; \| *(u` |
| kernel.c | 734525 | `uVar1 = 1; \| } \| else { \| if (param_1 - 0x200 < 299) { \| if (param_2 != 1) { \| if (param_2 != 2) { \| return 0xff;` |
| kernel.c | 737262 | `do { \| *(undefined1 *)(DAT_004b5190 + uVar3) = 0xff; \| uVar3 = uVar3 + 1; \| } while (uVar3 < 0x200); \| uVar13 = 0; \| for (uVar3 = 0; pcVar2 ` |
| kernel.c | 738665 | `FUN_006f18c4(DAT_004b6c0c + 0x38,0x8e3,0); \| } \| pcVar2 = DAT_004b6c00; \| if (*(ushort *)(param_3 + 10) < 0x200) { \| iVar6 = DAT_004b6c14 + ` |
| kernel.c | 740667 | `if ('\x01' < *DAT_004b870c) { \| FUN_006f4b10(0x1f,DAT_004b8714,&DAT_004b8710,uVar5); \| } \| uVar6 = *(uint *)(DAT_004b8718 + 4) / ((uint)(*(b` |
| kernel.c | 741228 | `*(undefined1 *)(puVar3 + 4) = \| *(undefined1 *)(iVar2 + *(char *)(iVar1 + param_1) * 0x814 + -0x204f); \| } \| *(undefined2 *)((int)puVar3 + 1` |
| kernel.c | 742098 | `if (0x20 < uVar6) { \| uVar6 = 0x20; \| } \| iVar7 = DAT_004bb06c + param_2 * 0x2000; \| for (uVar16 = 0; uVar16 < uVar6; uVar16 = uVar16 + 1 & ` |
| kernel.c | 742110 | `; \| } \| pcVar2 = DAT_004bb064; \| *(char *)(iVar7 + uVar15 * 0x200 + uVar14) = (char)uVar16; \| if ('\0' < *pcVar2) { \| FUN_006f4c52(0x1f,DAT_` |
| kernel.c | 742115 | `FUN_006f4c52(0x1f,DAT_004bb060 + 0x10,3,uVar15,uVar14,uVar16); \| } \| } \| uVar10 = (uint)*(byte *)(iVar7 + uVar15 * 0x200 + uVar14); \| iVar8 ` |
| kernel.c | 742501 | `} \| iVar5 = iVar8 + iVar10 * 0x22cc; \| FUN_006fe9dc(iVar5,&DAT_000022cc); \| iVar6 = DAT_004bb974 + param_2 * 0x2000; \| *(undefined1 *)(iVar8` |
| kernel.c | 742503 | `FUN_006fe9dc(iVar5,&DAT_000022cc); \| iVar6 = DAT_004bb974 + param_2 * 0x2000; \| *(undefined1 *)(iVar8 + iVar10 * 0x22cc) = uVar2; \| FUN_003c` |
| kernel.c | 742542 | `uVar1 = param_1[uVar9 * 0x26 + uVar7 + 8]; \| *(ushort *)(iVar8 + 0x34) = uVar1; \| *(short *)(iVar8 + 0x36) = param_1[uVar9 * 0x26 + uVar7 + ` |
| kernel.c | 742591 | `} \| for (uVar8 = 0; uVar8 < bVar1; uVar8 = uVar8 + 1 & 0xff) { \| iVar5 = iVar9 + uVar8 * 0x10; \| uVar4 = (uint)*(byte *)(DAT_004bbd90 + para` |
| kernel.c | 743145 | `local_5c = *(uint *)(DAT_004bcfb0 + 0x34 + (int)puVar8 * 4); \| if (local_1f4[0] != 0) { \| local_1e0 = 1; \| local_1dc[0] = 0x200; \| } \| if ('` |
| kernel.c | 801415 | `FUN_006f1764(*piVar1 + 4,0x608,0x1fb); \| } \| if (*(int *)(*piVar1 + 8) != 0) { \| FUN_006f1764(*piVar1 + 8,0x608,0x200); \| } \| puVar2 = (unde` |
| kernel.c | 813124 | `FUN_004ef3f8(*(undefined4 *)(param_1 + 0xac)); \| iVar3 = FUN_00678c64(); \| if ((iVar3 != 5) \|\| \| ((iVar3 = FUN_004eeca0(*(undefined1 *)(para` |
| kernel.c | 813177 | `FUN_004ef3f8(*(undefined4 *)(param_1 + 0xac)); \| iVar3 = FUN_00678c64(); \| if ((iVar3 != 5) \|\| \| ((iVar3 = FUN_004eeca0(*(undefined1 *)(para` |
| kernel.c | 816761 | `*(undefined4 *)(iVar5 + 0xc) = uVar6; \| *(undefined1 **)(iVar5 + 0x10) = puVar4; \| *(undefined1 *)(iVar5 + 0x14) = 1; \| FUN_006fe9dc(auStack` |
| kernel.c | 819333 | `iVar3 = (int)(short)param_1 * (int)(short)param_1; \| iVar3 = (uint)*(ushort *) \| (DAT_004fd3f0 + \| ((int)(((int)(short)param_2 * (int)(short` |
| kernel.c | 819334 | `iVar3 = (uint)*(ushort *) \| (DAT_004fd3f0 + \| ((int)(((int)(short)param_2 * (int)(short)param_2 + iVar3 & 0xffffU) * 0x200 + \| -0x200) / 0x1` |
| kernel.c | 819335 | `(DAT_004fd3f0 + \| ((int)(((int)(short)param_2 * (int)(short)param_2 + iVar3 & 0xffffU) * 0x200 + \| -0x200) / 0x1fd & 0xffffU) * 2) - \| (uint` |
| kernel.c | 823773 | `bVar2 = (*(byte **)(param_1 + 0xc))[1]; \| iVar3 = *(int *)(*DAT_00501398 + 0xc); \| *(undefined1 *)(iVar3 + 0x958) = 1; \| *(uint *)(iVar3 + 0` |
| kernel.c | 835139 | `if ('\x02' < *DAT_0052ba04) { \| FUN_006f2e88(DAT_0052b9fc,0x4910,s_SEND_MSG_IND_LTE_WL1C_TASK_CANCE_0052ba4c); \| } \| puVar2 = (undefined4 *)` |
| kernel.c | 838143 | `*(undefined4 *)(*(int *)(iVar5 + 0x430c) + 0x1bc) = 1; \| *(undefined2 *)(*(int *)(iVar5 + 0x430c) + 0x1c8) = \| *(undefined2 *)(&LAB_00003e08` |
| kernel.c | 838593 | `*(undefined4 *)(iVar12 + 0x41cc) = *(undefined4 *)(&LAB_0000390c + iVar12); \| } \| break; \| case IRQ: \| if (*(int *)(&DAT_00003b60 + iVar12) ` |
| kernel.c | 838608 | `puVar5 = (undefined4 *)(iVar12 + 0x374c); \| puVar4 = (undefined4 *)0x3fa4; \| goto LAB_0053028c; \| case IRQ: \| param_1 = *(code **)(param_2 +` |
| kernel.c | 838620 | `} \| } \| break; \| case IRQ: \| param_1 = *(code **)(param_2 + 0x1c0); \| if ((param_1 != (code *)0xa) && (param_1 = *(code **)(param_2 + 0x1bc)` |
| kernel.c | 838629 | `*(ushort *)(iVar12 + 0x4464) = *(ushort *)(iVar12 + 0x3ba4); \| } \| break; \| case IRQ: \| goto LAB_00530354; \| case FIQ: \| if (*(code **)(para` |
| kernel.c | 843446 | `if (iVar3 != 0x400) { \| if (iVar3 < 0x401) { \| iVar4 = 0x140; \| if ((iVar3 != 0x140) && (iVar4 = 0x200, iVar3 != 0x200)) { \| iVar4 = 0x280; ` |
| kernel.c | 847435 | `if (('\x02' < *pcVar1) && (FUN_006f4a98(0x18,DAT_00539be0 + 0x31), '\x02' < *pcVar1)) { \| FUN_006f2e88(DAT_00539be8,&DAT_000019a1,s_SEND_MSG` |
| kernel.c | 912676 | `iVar4 = DAT_005d6354 + 200; \| for (uVar3 = 0; uVar3 < iVar1 + 1U; uVar3 = uVar3 + 1) { \| puVar2 = (undefined4 *)FUN_006b63e4(param_1,1,0x65c` |
| kernel.c | 922001 | `uVar3 = *(undefined4 *)(param_2 + 0xc); \| local_30 = 0; \| *(undefined4 **)(param_2 + 0xc) = &local_30; \| FUN_0060446a(param_1 + 0x200,param_` |
| kernel.c | 933145 | `puVar7 = (ushort *)(*(int *)(iVar1 + 0x28) + uVar3 * 0x24 + 10); \| if (param_1 != 0) { \| if (param_1 == 1) { \| uVar8 = *puVar7 \| 0x2000; \| }` |
| kernel.c | 939271 | `uVar2 = psVar6[iVar5 * 8 + 0x1d]; \| if (uVar1 < uVar2) { \| psVar6[iVar5 * 8 + 0x1d] = uVar1; \| sVar4 = (uVar1 - uVar2) + 0x2000; \| } \| } \| r` |
| kernel.c | 941966 | `uVar20 = 0x100; \| } \| else { \| uVar20 = 0x200; \| if (sVar3 != 3) { \| if (uVar18 < 8) { \| FUN_006fb8b0(s_8_<__drx_cycle_len_00622034,DAT_0062` |
| kernel.c | 941973 | `s________________End_Dump_WCDMA_TR_000016b4 + 0x35); \| } \| uVar20 = uVar18; \| if (0x200 < uVar18) { \| FUN_006fb8b0(s_512_>__drx_cycle_len_00` |
| kernel.c | 942466 | `sVar1 = *(short *)(*(int *)(param_2 + 0xc) + iVar6); \| if ((((((sVar1 != 4) && (sVar1 != 8)) && (sVar1 != 0x10)) && \| ((sVar1 != 0x20 && (sV` |
| kernel.c | 942642 | `local_21e[uVar1] = *(undefined2 *)(iVar2 + 0x80); \| local_19e[uVar1] = *(undefined2 *)(iVar2 + 0x100); \| local_11e[uVar1] = *(undefined2 *)(` |
| kernel.c | 943330 | `pbVar3[-0xffffffff00000001] = 0; \| local_28 = param_4; \| if (pbVar3[0x76c] != 0) { \| *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc)` |
| kernel.c | 943334 | `pcVar4 = DAT_00624474; \| uVar11 = (uint)*(ushort *)(pbVar3 + 0x776) \| (uint)*(ushort *)(pbVar3 + 0x768) << 0x12; \| if (pbVar3[0x75c] != 0) {` |
| kernel.c | 944646 | `if (param_1 < uVar1) { \| iVar2 = 1 << (param_3 & 0xff); \| if ((int)uVar1 < iVar2) { \| uVar1 = uVar1 + 0x2000 & 0xffff; \| } \| uVar1 = uVar1 -` |
| kernel.c | 944650 | `} \| uVar1 = uVar1 - iVar2 & 0xffff; \| } \| if (0x2000 < uVar1) { \| uVar1 = uVar1 - 0x2000 & 0xffff; \| } \| return uVar1;` |
| kernel.c | 944651 | `uVar1 = uVar1 - iVar2 & 0xffff; \| } \| if (0x2000 < uVar1) { \| uVar1 = uVar1 - 0x2000 & 0xffff; \| } \| return uVar1; \| }` |
| kernel.c | 944692 | `(uVar6 = (uint)*(ushort *)(iVar7 + 0x342), uVar6 == 0)) goto LAB_006260c2; \| local_3c = 0; \| puVar5 = (undefined1 *)(iVar7 + 0x344); \| if (*` |
| kernel.c | 944711 | `FUN_006f4a34(auStack_288,iVar7 + 0x340,0x244); \| puVar5 = local_284; \| while (uVar4 = uVar4 + 1 & 0xffff, uVar4 < uVar6) { \| local_280[uVar4` |
| kernel.c | 944712 | `puVar5 = local_284; \| while (uVar4 = uVar4 + 1 & 0xffff, uVar4 < uVar6) { \| local_280[uVar4 * 4] = local_280[uVar4 * 4] + 0x2000; \| local_28` |
| kernel.c | 944716 | `} \| if (param_3 < 0x1000) { \| bVar1 = true; \| param_3 = param_3 + 0x2000 & 0xffff; \| } \| } \| for (uVar4 = 0; uVar4 < uVar6; uVar4 = uVar4 + ` |
| kernel.c | 944739 | `if (param_3 <= *(ushort *)(puVar5 + uVar4 * 8 + 6)) { \| *param_5 = (*(short *)(puVar5 + uVar4 * 8 + 6) - (short)param_3) + 1; \| if (bVar1) {` |
| kernel.c | 963543 | `s_cnt_<_(0xFFFFFFFF_TIMER_MICSEC_P_000025d0[*DAT_0064111c + 0xb]); \| } \| puVar3 = DAT_00641128; \| iVar5 = *piVar2 + 0x2000; \| bVar9 = s_cnt_` |
| kernel.c | 971393 | `} \| else if (*(int *)(param_1 + 0x18) == 1) { \| for (iVar6 = FUN_006b6134(*(undefined4 *)(*DAT_0064d40c + 4),DAT_0064d824,0x1fdc); iVar6 != ` |
| kernel.c | 972667 | `if (iVar11 != 0x280) { \| if (iVar11 < 0x281) { \| if (iVar11 == 0xa0) goto LAB_0064f150; \| if (((iVar11 == 0x100) \|\| (iVar11 == 0x140)) \|\| (i` |
| kernel.c | 979841 | `if (*param_1 == iVar7) { \| FUN_006f2c00(0,DAT_0065a458,&DAT_00009705,DAT_0065a484,DAT_0065a484 + -0x20); \| } \| FUN_006f1b7c(&DAT_00009a80 + ` |
| kernel.c | 987136 | `uint uVar4; \|  \| uVar4 = param_2 - 0x3cf; \| uVar2 = param_2 - 0x200; \| uVar3 = param_2 - 0x80; \| switch(param_1) { \| case 0:` |
| kernel.c | 987407 | `} \| FUN_006fae04(param_6,0,0x82); \| uVar2 = (uint)*param_4; \| iVar8 = (*(byte *)(param_2 + uVar2) & 1) * 0x200 + (uint)*(byte *)(uVar2 + par` |
| kernel.c | 989271 | `while (1 < iVar8) { \| if (iVar8 * 2 < (int)(uVar7 * 3)) { \| iVar8 = iVar8 - (int)uVar7 / 2; \| uVar11 = (0x200 / uVar7 - 2) + uVar9 + local_9` |
| kernel.c | 991392 | `if (0xb7 < (short)(sVar2 + 1)) break; \| } \| } \| else if (iVar9 - 0x200U < 0x176) { \| iVar8 = param_2 + iVar9; \| if ((2 < *(byte *)(iVar8 + -` |
| kernel.c | 991406 | `*param_4 = sVar1 + 1; \| if (0xb7 < (short)(sVar1 + 1)) break; \| } \| if (((iVar9 - 0x200U < 299) && (2 < *(byte *)(iVar8 + 0xa0))) && \| (((pa` |
| kernel.c | 991491 | `} \| } \| } \| else if (iVar7 - 0x200U < 0x176) { \| iVar6 = param_2 + iVar7; \| if ((2 < *(byte *)(iVar6 + -0x183)) && \| ((((param_4 == 1 \|\| (pa` |
| kernel.c | 991510 | `return; \| } \| } \| if (((iVar7 - 0x200U < 299) && (2 < *(byte *)(iVar6 + 0xa0))) && \| ((((param_4 == 3 \|\| \| ((((param_4 == 5 \|\| (param_4 == 7` |
| kernel.c | 991927 | `case 2: \| case 6: \| case 10: \| if (param_1 - 0x200U < 0x176) goto switchD_0066ccb8_caseD_1; \| break; \| case 3: \| switchD_0066ccb8_caseD_3:` |
| kernel.c | 991935 | `case 5: \| case 7: \| case 9: \| if (param_1 - 0x200U < 299) goto switchD_0066ccb8_caseD_3; \| break; \| default: \| return 0x1e;` |
| kernel.c | 992034 | `(uVar9 = (uint)*(short *)(param_1 + 0x1e), (int)uVar9 < (int)(uint)(byte)pcVar6[1])) { \| uVar3 = (ushort)(byte)pcVar6[2]; \| } \| else if ((uV` |
| kernel.c | 992040 | `(uVar9 = (uint)*(short *)(param_1 + 0x1e), (int)uVar9 < (int)(uint)(byte)pcVar6[3])))) { \| uVar3 = (ushort)(byte)pcVar6[4]; \| } \| else if ((` |
| kernel.c | 995312 | `} \| } \| else { \| uVar4 = uVar3 \| 0x2000; \| } \| if ('\x02' < *pcVar1) { \| uVar2 = uVar4;` |
| kernel.c | 1000501 | `pcVar3 = *(code **)(*DAT_00677980 + 0x1370); \| break; \| case 0x41b: \| pcVar3 = *(code **)(*(int *)(*DAT_00677da0 + 0xc) + 0x200); \| break; \|` |
| kernel.c | 1000644 | `puVar2 = DAT_00677dc0; \| break; \| case 7: \| *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x200) = DAT_00677dc4; \| goto LAB_00677b90; \| } \| *(unde` |
| kernel.c | 1000647 | `*(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x200) = DAT_00677dc4; \| goto LAB_00677b90; \| } \| *(undefined **)(*(int *)(iVar3 + 0xc) + 0x200) = p` |
| kernel.c | 1000650 | `*(undefined **)(*(int *)(iVar3 + 0xc) + 0x200) = puVar2; \| LAB_00677b90: \| *(char *)(*(int *)(iVar3 + 0xc) + 0x1fd) = (char)param_2; \| FUN_0` |
| kernel.c | 1000655 | `if (((iVar3 == 1 && param_1 == 0) && param_2 == 1) && (iVar3 = FUN_006801ce(), iVar3 == 1)) { \| iVar3 = *piVar1; \| *(undefined1 *)(*(int *)(` |
| kernel.c | 1001096 | `iVar2 = *(int *)(iVar3 + 0x18); \| switch(param_1) { \| default: \| *(undefined4 *)(iVar2 + 0x200) = 0; \| goto LAB_0067811c; \| case 1: \| puVar1` |
| kernel.c | 1001117 | `puVar1 = DAT_0067826c; \| break; \| case 7: \| *(undefined4 *)(iVar2 + 0x200) = DAT_00678270; \| goto LAB_0067811c; \| } \| *(undefined **)(iVar2 ` |
| kernel.c | 1001120 | `*(undefined4 *)(iVar2 + 0x200) = DAT_00678270; \| goto LAB_0067811c; \| } \| *(undefined **)(iVar2 + 0x200) = puVar1; \| LAB_0067811c: \| *(undef` |
| kernel.c | 1002970 | `goto LAB_0067994a; \| } \| uVar4 = (*(ushort *)(param_1 + 1) + 7 & 0x7ff) >> 3; \| *(char *)(iVar1 + 0xec) = (char)((*(ushort *)(param_1 + 1) +` |
| kernel.c | 1003365 | `goto LAB_00679fba; \| } \| uVar4 = (*(ushort *)(param_1 + 1) + 7 & 0x7ff) >> 3; \| *(char *)(iVar1 + 0xec) = (char)((*(ushort *)(param_1 + 1) +` |
| kernel.c | 1018589 | `} \| goto joined_r0x00686770; \| case 3: \| if (0x12a < param_2 - 0x200) { \| return 0; \| } \| break;` |
| kernel.c | 1018606 | `bVar2 = param_2 - 0x3cf == 0x30; \| } \| if (bVar3 && !bVar2) { \| bVar3 = 0x129 < param_2 - 0x200; \| bVar2 = param_2 - 0x200 == 0x12a; \| } \| i` |
| kernel.c | 1018607 | `} \| if (bVar3 && !bVar2) { \| bVar3 = 0x129 < param_2 - 0x200; \| bVar2 = param_2 - 0x200 == 0x12a; \| } \| if (bVar3 && !bVar2) { \| return 0;` |
| kernel.c | 1018618 | `return 1; \| } \| joined_r0x00686770: \| if (0x175 < param_2 - 0x200) { \| return 0; \| } \| break;` |
| kernel.c | 1018627 | `bVar3 = 0x7a < uVar1; \| bVar2 = uVar1 == 0x7b; \| if (0x7b < uVar1) { \| bVar3 = 0x129 < param_2 - 0x200; \| bVar2 = param_2 - 0x200 == 0x12a; ` |
| kernel.c | 1018628 | `bVar2 = uVar1 == 0x7b; \| if (0x7b < uVar1) { \| bVar3 = 0x129 < param_2 - 0x200; \| bVar2 = param_2 - 0x200 == 0x12a; \| } \| if (bVar3 && !bVar` |
| kernel.c | 1018663 | `bVar3 = 0x2f < uVar1; \| bVar2 = uVar1 == 0x30; \| if (0x30 < uVar1) { \| bVar3 = 0x129 < param_2 - 0x200; \| bVar2 = param_2 - 0x200 == 0x12a; ` |
| kernel.c | 1018664 | `bVar2 = uVar1 == 0x30; \| if (0x30 < uVar1) { \| bVar3 = 0x129 < param_2 - 0x200; \| bVar2 = param_2 - 0x200 == 0x12a; \| } \| if (bVar3 && !bVar` |
| kernel.c | 1018690 | `goto joined_r0x006867e4; \| case 0xd: \| joined_r0x006867e4: \| if (0x175 < param_2 - 0x200) { \| return 0; \| } \| return 1;` |
| kernel.c | 1018695 | `} \| return 1; \| case 0xe: \| uVar1 = param_2 - 0x200; \| bVar3 = 0x175 < uVar1; \| bVar2 = uVar1 == 0x176; \| if (bVar3) {` |
| kernel.c | 1044233 | `*puVar19 = uVar6; \| uVar21 = uVar14; \| } \| if ((undefined2 *)(uint)*(ushort *)(*piVar13 + 0x83a) != (undefined2 *)0x200) { \| puVar18 = puVar` |
| kernel.c | 1047639 | `} \| uVar19 = 0x20; \| do { \| piVar16 = (int *)(*piVar5 + uVar19 * 0x200); \| if (*piVar16 == *(int *)(*piVar13 + 0x10)) { \| uVar22 = (uint)loc` |
| kernel.c | 1048519 | `} \| uVar8 = 0; \| do { \| puVar7 = (undefined4 *)(*piVar2 + uVar8 * 0x200); \| uVar5 = puVar7[5]; \| bVar10 = (uVar5 & 1) == 0; \| bVar11 = (uVar` |
| kernel.c | 1048567 | `piVar2 = DAT_006a1a6c; \| uVar9 = 0; \| do { \| iVar7 = *piVar2 + uVar9 * 0x200; \| if (uVar9 < 0x20) { \| if ((*(byte *)(iVar7 + 0x14) & 1) != 0` |
| kernel.c | 1048965 | `} \| } \| do { \| puVar10 = (undefined2 *)(iVar13 + uVar12 * 0x200); \| uVar8 = *(uint *)(puVar10 + 10); \| if ((uVar8 & 1) == 0 \|\| (uVar8 & 4) =` |
| kernel.c | 1049147 | `if (*(char *)(iVar6 + 2) != '\0') { \| if (*(ushort *)(iVar2 + uVar8 * 10) == param_1) { \| uVar4 = (uint)*(byte *)(iVar6 + 3); \| if (uVar4 ==` |
| kernel.c | 1049236 | `} \| *(undefined1 *)(puVar2 + 1) = 1; \| *(short *)(iVar3 + param_2 * 10) = (short)param_3; \| if (param_4 != 0x200) { \| puVar2[2] = (short)par` |
| kernel.c | 1049239 | `if (param_4 != 0x200) { \| puVar2[2] = (short)param_4; \| *(char *)((int)puVar2 + 3) = *(char *)((int)puVar2 + 3) + '\x01'; \| if (param_5 != 0` |
| kernel.c | 1049243 | `puVar2[3] = (short)param_5; \| cVar1 = *(char *)((int)puVar2 + 3); \| *(char *)((int)puVar2 + 3) = cVar1 + '\x01'; \| if (param_6 != 0x200) { \|` |
| kernel.c | 1049325 | `if ('\0' < *DAT_006a27b4) { \| FUN_006f4c52(0x21,DAT_006a27ec,1,param_1); \| } \| return param_1 < 0x200; \| } \|  \| ` |
| kernel.c | 1049496 | `} \| if (param_2 == 2) { \| *param_3 = 10; \| uVar2 = *(ushort *)(*piVar4 + 0x1ec) & 0x200; \| joined_r0x006a2ae8: \| if (uVar2 != 0) goto LAB_00` |
| kernel.c | 1050496 | `} \| } \| do { \| puVar9 = (undefined4 *)(*piVar3 + uVar10 * 0x200); \| if ((*(byte *)(puVar9 + 5) & 1) != 0) { \| if ('\0' < *pcVar2) { \| in_r3 ` |
| kernel.c | 1050581 | `} \| if ((!bVar7 \|\| uVar3 != param_2) \|\| (uVar3 = (uint)*(char *)(iVar6 + 0x801f), uVar3 == 0)) { \| do { \| puVar4 = (ushort *)(iVar6 + uVar5 ` |
| kernel.c | 1050692 | `} \| else { \| do { \| puVar8 = (ushort *)(iVar2 + uVar10 * 0x200); \| if (((puVar8[10] & 1) != 0) && \| ((*DAT_006a4580 < '\x01' \|\| \| (FUN_006f4` |
| kernel.c | 1051236 | `uVar5 = 0; \| uVar3 = 0x20; \| do { \| iVar4 = *DAT_006a4e58 + uVar3 * 0x200; \| bVar1 = *(byte *)(iVar4 + 0x14); \| bVar6 = (bVar1 & 1) != 0; \| ` |
| kernel.c | 1051481 | `uVar7 = 0x20; \| uVar8 = 0; \| do { \| puVar5 = (undefined2 *)(*piVar4 + uVar7 * 0x200); \| if (((*(byte *)(puVar5 + 10) & 1) != 0) && \| ((*pcVa` |
| kernel.c | 1051485 | `if (((*(byte *)(puVar5 + 10) & 1) != 0) && \| ((*pcVar2 < '\x01' \|\| \| (FUN_006f4b10(0x21,uVar3,DAT_006a52ac,*puVar5,puVar5[0xde]), \| (*(byte ` |
| kernel.c | 1051486 | `((*pcVar2 < '\x01' \|\| \| (FUN_006f4b10(0x21,uVar3,DAT_006a52ac,*puVar5,puVar5[0xde]), \| (*(byte *)(*piVar4 + uVar7 * 0x200 + 0x14) & 1) != 0)` |
| kernel.c | 1051593 | `*(undefined1 *)(iVar3 + 0x8018) = *puVar10; \| uVar12 = 0; \| do { \| iVar4 = uVar12 * 0x200; \| uVar12 = uVar12 + 1 & 0xff; \| *(undefined1 *)(i` |
| kernel.c | 1051638 | `} \| uVar11 = 0x20; \| do { \| puVar5 = (undefined2 *)(*piVar2 + uVar11 * 0x200); \| if (((*(byte *)(puVar5 + 10) & 1) != 0) && \| ((uVar7 = (uin` |
| kernel.c | 1051642 | `if (((*(byte *)(puVar5 + 10) & 1) != 0) && \| ((uVar7 = (uint)*DAT_006a5298, (int)uVar7 < 1 \|\| \| (FUN_006f4b10(0x21,DAT_006a52a4,DAT_006a52ac` |
| kernel.c | 1051644 | `(FUN_006f4b10(0x21,DAT_006a52a4,DAT_006a52ac,*puVar5,puVar5[0xde]), \| uVar7 = extraout_r1, (*(byte *)(*piVar2 + uVar11 * 0x200 + 0x14) & 1) ` |
| kernel.c | 1051661 | `if (uVar14 != 0) { \| do { \| iVar4 = *piVar2; \| iVar3 = iVar4 + (uint)local_48[uVar11] * 0x200; \| cVar1 = *(char *)(iVar3 + 0x19); \| bVar16 =` |
| kernel.c | 1051670 | `if ((bVar16 && cVar1 != -1) && \| (*(undefined1 *)(iVar3 + 0x18) = *puVar10, '\0' < *DAT_006a5298)) { \| FUN_006f4c52(0x21,DAT_006a52c0,4,uVar` |
| kernel.c | 1052620 | `else { \| do { \| if ((*puVar4 & 1 << uVar3) != 0) { \| iVar5 = DAT_006a63fc + param_1 * 0x8200 + uVar3 * 0x200; \| sVar1 = *(short *)(iVar5 + 0` |
| kernel.c | 1052632 | `} while (uVar3 < 0x20); \| if ('\0' < *DAT_006a5f80) { \| FUN_006f4b10(0x21,DAT_006a6404,&DAT_006a5fc8, \| *(undefined2 *)(*DAT_006a6400 + uVar` |
| kernel.c | 1053007 | `} \| if (7 < param_1) { \| if (param_1 == 10) { \| uVar2 = *(ushort *)(iVar3 + 0x1ec) & 0x200; \| joined_r0x006a68b0: \| if (uVar2 != 0) goto LAB` |
| kernel.c | 1073222 | `} while (uVar2 < 2); \| if (uVar3 == 2) { \| uVar1 = FUN_006fd49c(s_L1_invalid_card_mask__x_006bd06c); \| thunk_FUN_006fb59e(s__card_id____MAX_` |
| kernel.c | 1078121 | `iVar4 = FUN_007d7fde(local_20); \| uVar3 = DAT_006c34b8; \| if (iVar4 != 0) { \| local_3a = local_3a & 0xf3ff \| (local_20[0] & 3) << 10 \| 0x200` |
| kernel.c | 1079129 | `*puVar9 = (*puVar9 & 0xffe0) + 5; \| puVar7[-0x19] = puVar7[-0x19] & 0x3ff \| (ushort)((uVar11 & 0x3f) << 10); \| puVar7[-0x20] = puVar7[-0x20]` |
| kernel.c | 1079141 | `*puVar9 = (*puVar9 & 0xffe0) + 3; \| puVar7[0x1d] = (ushort)((uVar11 & 0x3f) << 10) \| 0x3ff; \| puVar7[0x16] = puVar7[0x16] & 0xf0ff \| (*(byte` |
| kernel.c | 1079515 | `*puVar9 = (*puVar9 & 0xffe0) + 5; \| puVar7[-0x19] = (ushort)((uVar10 & 0x3f) << 10) \| 0x3ff; \| puVar7[-0x20] = puVar7[-0x20] & 0xf0ff \| (*(b` |
| kernel.c | 1080396 | `} \| iVar7 = FUN_007d7fde(local_20); \| if (iVar7 != 0) { \| local_3a = local_3a & 0xf3ff \| (local_20[0] & 3) << 10 \| 0x200; \| } \| *(undefined1` |
| kernel.c | 1080467 | `} \| iVar5 = FUN_007d7fde(local_20); \| if (iVar5 != 0) { \| local_3a = local_3a & 0xf3ff \| (local_20[0] & 3) << 10 \| 0x200; \| } \| *(undefined1` |
| kernel.c | 1080533 | `} \| iVar5 = FUN_007d7fde(local_20); \| if (iVar5 != 0) { \| local_3a = local_3a & 0xf3ff \| (local_20[0] & 3) << 10 \| 0x200; \| } \| *(undefined1` |
| kernel.c | 1081328 | `(*(char *)(DAT_006c6fc4 + 9) != '\0')) { \| iVar8 = FUN_007d7fde(local_3c); \| if (iVar8 != 0) { \| param_1[5] = param_1[5] & 0xf3ff \| (local_3` |
| kernel.c | 1081504 | `if ((param_6 == *(ushort *)(iVar8 + 0xe)) \|\| (*(char *)(iVar8 + 9) != '\0')) { \| iVar9 = FUN_007d7fde(local_3c); \| if (iVar9 != 0) { \| param` |
| kernel.c | 1082289 | `} \| iVar9 = FUN_007d7fde(local_28); \| if (iVar9 != 0) { \| local_42 = local_42 & 0xf3ff \| (local_28[0] & 3) << 10 \| 0x200; \| } \| *(undefined1` |
| kernel.c | 1082659 | `iVar8 = FUN_007d7fde(local_50); \| uVar4 = DAT_006c8a40; \| if (iVar8 != 0) { \| local_42 = local_42 & 0xf3ff \| (local_50[0] & 3) << 10 \| 0x200` |
| kernel.c | 1082674 | `if (iVar6 == 7) { \| if ((((uVar10 == 6) \|\| (uVar10 == 7)) \|\| (uVar10 == 0xf)) \|\| \| (((uVar10 == 0x10 \|\| (uVar10 == 0x17)) \|\| (uVar10 == 0x18` |
| kernel.c | 1082751 | `iVar7 = FUN_007d7fde(local_28); \| puVar2 = DAT_006c8a38; \| if (iVar7 != 0) { \| local_4a = local_4a & 0xf3ff \| (local_28[0] & 3) << 10 \| 0x20` |
| kernel.c | 1082835 | `iVar5 = FUN_007d7fde(local_50); \| puVar2 = DAT_006c8a38; \| if (iVar5 != 0) { \| local_42 = local_42 & 0xf3ff \| (local_50[0] & 3) << 10 \| 0x20` |
| kernel.c | 1083211 | `} \| iVar4 = FUN_00911b3a(); \| if ((iVar4 == 0) && (*(char *)(DAT_006c9350 + param_2) != '\0')) { \| local_48 = local_48 \| 0x2000; \| } \| if ((` |
| kernel.c | 1083218 | `} \| if (((uVar7 == 6) \|\| (uVar7 == 7)) \|\| \| ((uVar7 == 0xf \|\| (((uVar7 == 0x10 \|\| (uVar7 == 0x17)) \|\| (uVar8 == uVar7)))))) { \| local_46 = (` |
| kernel.c | 1083352 | `local_24 = local_24 & 0xfc00 \| local_bc & 0x3ff; \| iVar4 = FUN_007d7fde(local_c8); \| if (iVar4 != 0) { \| local_2a = local_2a & 0xf3ff \| (loc` |
| kernel.c | 1083357 | `local_2e = (local_2e & 0xfff) + 0x4000; \| iVar4 = FUN_006bb8b2(*param_1); \| if (iVar4 != 0) { \| local_2c = local_2c \| 0x2000; \| } \| local_32` |
| kernel.c | 1083442 | `local_4c = local_4c & 0xdfff; \| } \| else { \| local_4c = local_4c \| 0x2000; \| } \| FUN_00611f18(&local_54,auStack_e8); \| uVar4 = *param_1 + 1;` |
| kernel.c | 1083693 | `} \| if (*(char *)(iVar4 + 0xcb) != '\0') { \| FUN_00614b34(*(undefined1 *)(iVar4 + 0xca)); \| local_54 = local_54 \| 0x200; \| *(undefined1 *)(i` |
| kernel.c | 1083848 | `} \| if (*(char *)(iVar6 + 0xcb) != '\0') { \| FUN_00614b34(*(undefined1 *)(iVar6 + 0xca)); \| local_f4 = local_f4 \| 0x200; \| *(undefined1 *)(i` |
| kernel.c | 1084027 | `} \| if (*(char *)(iVar5 + 0xcb) != '\0') { \| FUN_00614b34(*(undefined1 *)(iVar5 + 0xca)); \| local_ec = local_ec \| 0x200; \| *(undefined1 *)(i` |
| kernel.c | 1084178 | `} \| if (*(char *)(iVar4 + 0xcb) != '\0') { \| FUN_00614b34(*(undefined1 *)(iVar4 + 0xca)); \| local_ec = local_ec \| 0x200; \| *(undefined1 *)(i` |
| kernel.c | 1084622 | `uVar2 = DAT_006cb370; \| local_36 = local_36 & 0x3ff \| (ushort)*(byte *)(DAT_006cb348 + (uint)bVar1 * 0x408 + 4) << 10; \| local_4c = local_4c` |
| kernel.c | 1085607 | `break; \| case 2: \| case 3: \| local_46 = (local_46 & 0x9fff) + 0x2000; \| break; \| case 4: \| case 6:` |
| kernel.c | 1085765 | `break; \| case 2: \| case 3: \| uVar3 = (*(ushort *)(iVar4 + 10) & 0x9fff) + 0x2000; \| goto LAB_006cc6ec; \| default: \| goto switchD_006cc6ca_de` |
| kernel.c | 1085892 | `FUN_006c22b2(auStack_1c); \| if (param_4 == 1) { \| local_30 = local_30 & 0xfc00 \| uVar2 & 0x3ff; \| local_36 = local_36 & 0xf3ff \| 0x200; \| FU` |
| kernel.c | 1085898 | `} \| else if (param_4 == 2) { \| local_30 = local_30 & 0xfc00 \| uVar2 & 0x3ff; \| local_36 = local_36 & 0xf3ff \| 0x200; \| FUN_00614b3e(param_3 ` |
| kernel.c | 1086005 | `if (uVar6 < 2) goto LAB_006ccaaa; \| } \| else { \| local_26 = local_26 & 0xfcff \| 0x2000 \| (ushort)((uVar6 & 3) << 8); \| FUN_006bf86a(); \| *pc` |
| kernel.c | 1087028 | `} \| else { \| uVar9 = *param_2; \| local_6c = (local_6c & 0xf0ff) + 0x200; \| iVar4 = FUN_006cd1e2(param_1,uVar2,local_78); \| if (iVar4 == 0) {` |
| kernel.c | 1087609 | `local_68 = local_68 \| 0x1f; \| uVar9 = *param_2; \| local_64 = (undefined2)uVar9; \| local_60 = (local_60 & 0xf0ff) + 0x200; \| local_66 = local` |
| kernel.c | 1087709 | `if (((param_2 == 0x34) \|\| (param_2 == 0x38)) && ((*piVar3 != 4 && (*piVar3 != 5)))) { \| bVar1 = true; \| LAB_006cecbe: \| local_48 = local_48 ` |
| kernel.c | 1092104 | `else if (local_18 == 0x10000) { \| FUN_006d4148(param_1,param_2,param_3,param_4); \| } \| else if (local_18 == 0x20000) { \| FUN_006d40be(param_` |
| kernel.c | 1111244 | `FUN_006fb8b0(s_s_fiq_num____s_fiq_status_postio_006f512c,s_threadx_os_c_006f511c,0x2c6); \| } \| if (*(int *)(iVar1 + 8) == 0) { \| FUN_006fb8b` |
| kernel.c | 1111275 | ` \| iVar1 = DAT_006f5118; \| if (0x13 < *(uint *)(DAT_006f5118 + 8)) { \| FUN_006fb8b0(s_s_irq_status_postion_<_SCI_MAX_I_006f5170,s_threadx_os` |
| kernel.c | 1112002 | ` \| iVar1 = DAT_006f6030; \| if (*(int *)(DAT_006f6030 + 8) == 0) { \| FUN_006fb8b0(s_0____s_irq_status_postion_006f5150,s_threadx_os_c_006f511` |
| kernel.c | 1112029 | ` \| iVar1 = DAT_006f6030; \| if (*(int *)(DAT_006f6030 + 0x10) != *(int *)(DAT_006f6030 + 8)) { \| FUN_006fb8b0(s_s_irq_num____s_irq_status_pos` |
| kernel.c | 1115326 | `pcVar3 = s_Current_status_is_SVC__below_is_t_006fb25c; \| } \| else if (iVar2 == 2) { \| pcVar3 = s_Current_status_is_IRQ__below_is_t_006fb29c;` |
| kernel.c | 1115344 | `FUN_006faeac(s_SVC_mode__006fb198); \| FUN_006faeac(s_R13___0x_08lx_R14___0x_08lx_SPSR_006fb1a4,*puVar1,puVar1[1],puVar1[2]); \| puVar1 = DAT_` |
| kernel.c | 1115376 | `iVar4 = *(int *)(DAT_006fb174 + 8); \| if (iVar4 == 2) { \| if (*(char *)(DAT_006fb174 + 1) != '\0') goto LAB_006fafd6; \| FUN_006faeac(s_____I` |
| kernel.c | 1115383 | `if (iVar4 == 1) { \| if (bVar2 != 2) goto LAB_006fafd6; \| uVar6 = *(undefined4 *)(DAT_006fb17c + 0x38); \| pcVar3 = s_____It_is_in_IRQ_before_` |
| kernel.c | 1115411 | `return; \| } \| uVar6 = *DAT_006fb38c; \| pcVar3 = s_____It_is_in_IRQ_before_FIQ____P_006fb390; \| } \| FUN_006faeac(pcVar3,uVar6); \| }` |
| kernel.c | 1115415 | `} \| FUN_006faeac(pcVar3,uVar6); \| } \| FUN_006faeac(s_Before_enter_IRQ__PC___0x_08lx__006fb3c0,*puVar1); \| return; \| } \| ` |
| kernel.c | 1116406 | `case 0x9101: \| return uVar1 & 0x40; \| case 0x9102: \| return uVar1 & 0x200; \| case 0x9103: \| return uVar1 & 0x20; \| case 0x9104:` |
| kernel.c | 1116579 | `if (*(char *)(DAT_006fe1f0 + -2) != '\0') { \| local_4 = param_4; \| iVar4 = FUN_006f72a6(); \| if (0x200 < param_2 >> 0x14) { \| FUN_006fb8b0(s` |
| kernel.c | 1117266 | `*DAT_006fee38 = *DAT_006fee38 & 0xffffffe7 \| (param_3 & 1) << 3 \| (param_4 & 1) << 4; \| uVar2 = (((uint)(&DAT_0000a000 + \| (((puVar1[1] & 0x` |
| kernel.c | 1117330 | `*DAT_006fee38 = *DAT_006fee38 & 0xffffffe7 \| (param_3 & 1) << 3 \| (param_4 & 1) << 4; \| uVar2 = (((uint)(&DAT_0000a000 + \| (((puVar1[1] & 0x` |
| kernel.c | 1118340 | `uVar5 = 0; \| do { \| if (local_34 == 0) { \| uVar6 = *(uint *)(local_58 + 4) / ((uint)(*(byte *)(local_3c + 4) >> 4) * 0x200 + 0x340) \| ; \| if` |
| kernel.c | 1119001 | `local_88[0xb] = 0; \| local_88[0xc] = 0; \| local_88[0xf] = 0; \| FUN_006fe9dc(&local_288,0x200); \| uVar12 = 0; \| do { \| uVar4 = uVar12 + 1;` |
| kernel.c | 1119030 | `uVar8 = *(uint *)(local_34 + (uVar9 + uVar4 * 8) * 4); \| (&local_288)[iVar7 * 2] = uVar8; \| uVar5 = *(uint *)(local_38 + 4) / \| ((uint)(*(by` |
| kernel.c | 1119280 | `uVar6 = *(uint *)(local_105c + (uVar9 + uVar3 * 8) * 4); \| (&local_1058)[iVar5 * 2] = uVar6; \| uVar4 = *(uint *)(local_1060 + 4) / \| ((uint)` |
| kernel.c | 1122437 | `iVar20 = FUN_006f15ec(0x728,local_2c,1,0x5bf); \| piVar9 = DAT_00708438; \| do { \| puVar18 = (undefined2 *)(*DAT_00708438 + uVar25 * 0x200); \|` |
| kernel.c | 1122447 | `} while (uVar25 < 0x20); \| uVar25 = 0x20; \| do { \| psVar14 = (short *)(*piVar9 + uVar25 * 0x200); \| bVar26 = (*(byte *)(psVar14 + 10) & 1) !` |
| kernel.c | 1122535 | `uVar5 = *(undefined1 *)(DAT_00707fe8 + *DAT_00707fec * 4); \| local_f4 = &local_e4; \| FUN_0084486e(3,1,uVar5,uVar5); \| local_f8 = 0x200; \| FU` |
| kernel.c | 1123125 | `sVar4 = 0; \| uVar2 = 0; \| while( true ) { \| puVar3 = (ushort *)(*DAT_00708a84 + uVar2 * 0x200); \| bVar6 = (puVar3[10] & 1) != 0; \| if (bVar6` |
| kernel.c | 1123148 | `return sVar5; \| } \| } \| sVar4 = *(short *)(*DAT_00708a84 + uVar2 * 0x200); \| goto LAB_00708718; \| } \| ` |
| kernel.c | 1123183 | `*(short *)(iVar4 + 0x12) = (short)param_2; \| piVar2 = DAT_00708a84; \| uVar5 = 0x20; \| while ((uVar7 = (uint)*(ushort *)(*DAT_00708a84 + uVar` |
| kernel.c | 1123192 | `FUN_006f4c52(0x21,DAT_00708a98,1,iVar9); \| } \| if (iVar9 == 0) { \| FUN_006fe9dc(*piVar2 + 0x8000,0x200); \| iVar9 = *piVar2; \| *(undefined4 *` |
| kernel.c | 1123202 | `uVar6 = FUN_0069d3f0(); \| iVar9 = FUN_0069eece(*(undefined2 *)(*piVar3 + 0x10),uVar6); \| if (iVar9 != 0) { \| FUN_006f4a34(*piVar2,*piVar2 + ` |
| kernel.c | 1123211 | `FUN_006fe9dc(iVar9,0x4000); \| uVar5 = 0x20; \| do { \| psVar8 = (short *)(*piVar2 + uVar5 * 0x200); \| if (*(short *)(*piVar3 + 0x10) == *psVar` |
| kernel.c | 1123213 | `do { \| psVar8 = (short *)(*piVar2 + uVar5 * 0x200); \| if (*(short *)(*piVar3 + 0x10) == *psVar8) { \| FUN_006f4a34(*piVar2 + (uVar5 - 0x20 & ` |
| kernel.c | 1123218 | `uVar5 = uVar5 + 1 & 0xff; \| } while (uVar5 < 0x40); \| FUN_006f4a34(*piVar2 + 0x4000,auStack_4110,0x4000); \| FUN_006fe9dc(*piVar2 + 0x8000,0x` |
| kernel.c | 1123229 | `iVar9 = *piVar2; \| uVar5 = 0; \| do { \| iVar4 = iVar9 + uVar5 * 0x200; \| uVar5 = uVar5 + 1 & 0xff; \| *(uint *)(iVar4 + 0x14) = *(uint *)(iVar` |
| kernel.c | 1123288 | `*(short *)(iVar5 + 0x12) = (short)param_2; \| piVar3 = DAT_00708a84; \| uVar6 = 0x20; \| while ((uVar8 = (uint)*(ushort *)(*DAT_00708a84 + uVar` |
| kernel.c | 1123298 | `} \| local_4316 = uVar1; \| if (iVar10 == 0) { \| FUN_006fe9dc(*piVar3 + 0x8000,0x200); \| iVar10 = *piVar3; \| *(undefined4 *)(iVar10 + 0x8000) ` |
| kernel.c | 1123306 | `FUN_006f4a34(iVar10 + 0x4000,iVar10,0x4000); \| uVar6 = 0x20; \| do { \| if ((*(byte *)(*piVar3 + uVar6 * 0x200 + 0x14) & 1) != 0) { \| uVar7 = ` |
| kernel.c | 1123308 | `do { \| if ((*(byte *)(*piVar3 + uVar6 * 0x200 + 0x14) & 1) != 0) { \| uVar7 = FUN_0069d3f0(); \| iVar10 = FUN_0069eece(*(undefined2 *)(*piVar3` |
| kernel.c | 1123310 | `uVar7 = FUN_0069d3f0(); \| iVar10 = FUN_0069eece(*(undefined2 *)(*piVar3 + uVar6 * 0x200),uVar7); \| if (iVar10 != 0) { \| puVar9 = (undefined2` |
| kernel.c | 1123329 | `uVar7 = FUN_0069d3f0(); \| iVar10 = FUN_0069eece(*(undefined2 *)(*piVar4 + 0x10),uVar7); \| if (iVar10 != 0) { \| FUN_006f4a34(*piVar3,*piVar3 ` |
| kernel.c | 1123344 | `FUN_006fe9dc(iVar10,0x4000); \| uVar6 = 0x20; \| do { \| psVar12 = (short *)(*piVar3 + uVar6 * 0x200); \| if (*(short *)(*piVar4 + 0x10) == *psV` |
| kernel.c | 1123346 | `do { \| psVar12 = (short *)(*piVar3 + uVar6 * 0x200); \| if (*(short *)(*piVar4 + 0x10) == *psVar12) { \| FUN_006f4a34(*piVar3 + (uVar6 - 0x20 ` |
| kernel.c | 1123351 | `uVar6 = uVar6 + 1 & 0xff; \| } while (uVar6 < 0x40); \| FUN_006f4a34(*piVar3 + 0x4000,pbVar11,0x4000); \| FUN_006fe9dc(*piVar3 + 0x8000,0x200);` |
| kernel.c | 1123361 | `local_4314 = 0; \| local_4312 = 0; \| do { \| if ((*(byte *)(*piVar3 + uVar6 * 0x200 + 0x14) & 1) != 0) { \| uVar7 = FUN_0069d3f0(); \| iVar10 = ` |
| kernel.c | 1123363 | `do { \| if ((*(byte *)(*piVar3 + uVar6 * 0x200 + 0x14) & 1) != 0) { \| uVar7 = FUN_0069d3f0(); \| iVar10 = FUN_0069eece(*(undefined2 *)(*piVar3` |
| kernel.c | 1123365 | `uVar7 = FUN_0069d3f0(); \| iVar10 = FUN_0069eece(*(undefined2 *)(*piVar3 + uVar6 * 0x200),uVar7); \| if (iVar10 != 0) { \| puVar9 = (undefined2` |
| kernel.c | 1123628 | `} \| uVar9 = 0; \| do { \| iVar6 = *piVar4 + uVar9 * 0x200; \| if ((*(byte *)(iVar6 + 0x14) & 1) != 0) { \| if ('\x01' < *pcVar1) { \| FUN_006f4c5` |
| kernel.c | 1123633 | `if ('\x01' < *pcVar1) { \| FUN_006f4c52(0x21,uVar3,1,*(undefined2 *)(iVar6 + 2)); \| } \| psVar7 = (short *)(*piVar4 + uVar9 * 0x200); \| if ((p` |
| kernel.c | 1124054 | `iVar4 = *DAT_00709878; \| *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(param_1 + 0xcc); \| *(undefined1 *)(iVar4 + 0x334) = 1; \| FUN_006fe9` |
| kernel.c | 1124494 | `} \| piVar4 = DAT_00709cd4; \| if (*(char *)(param_1 + 0xd4) != '\x01') { \| FUN_006fe9dc(auStack_288,0x200); \| FUN_006fe9dc(local_490,0x208); ` |
| kernel.c | 1124568 | `} \| return uVar6; \| } \| FUN_006fe9dc(auStack_288,0x200); \| FUN_006fe9dc(local_490,0x208); \| FUN_00798a40(auStack_288); \| FUN_00798e06(local_` |
| kernel.c | 1125384 | `iVar3 = FUN_007978fa(); \| piVar2 = DAT_0070ab3c; \| if ((iVar3 != 0) && (*(char *)(param_1 + iVar3) == '\0')) { \| FUN_006fe9dc(auStack_288,0x` |
| kernel.c | 1130065 | `(*(ushort *)(iVar2 + 0x188) & 0x3ff) << 0x14; \| *(uint *)(iVar3 + 0x28) = uVar5; \| *(uint *)(*piVar4 + 0x28) = uVar5; \| uVar5 = *(uint *)(iV` |
| kernel.c | 1130796 | `uVar2 = (uint)(byte)(&DAT_00001157)[*(int *)(param_1 + 0x24)]; \| uStack_88 = *(undefined4 *)(DAT_007109d0 + uVar2 * 4); \| local_8c = 0; \| lo` |
| kernel.c | 1131558 | `FUN_00676a06(&local_24,local_2c,iStack_28); \| local_2c = local_24; \| iStack_28 = iStack_20; \| iVar3 = ((local_24 & 0x7ffff) >> 3) + (iStack_` |
| kernel.c | 1136414 | `} \| } \| else { \| if (param_2 == 0x200) { \| return &DAT_00004c45; \| } \| if (param_2 == 0x219) {` |
| kernel.c | 1140102 | `} \| local_27 = (undefined1)param_1; \| iVar1 = FUN_0097b890(&local_28); \| local_1c[0] = (undefined2)((iVar1 + 7U) * 0x2000 >> 0x10); \| uVar2 ` |
| kernel.c | 1143605 | `FUN_006f2c00(0,DAT_00721540,0x1ff,DAT_00721578 + -0x18); \| } \| if (param_1[2] == 0) { \| FUN_006f2c00(0,DAT_00721578 + -0xa68,0x200); \| } \| i` |
| kernel.c | 1144537 | `(uVar39 >> 0x16 \| uVar39 << 10)) + \| (uVar39 & uVar51 \| (uVar51 \| uVar39) & uVar47); \| iVar44 = uVar46 + uVar43 + \| ((uVar58 >> 6 \| uVar58 *` |
| kernel.c | 1144545 | `(uVar54 & uVar39 \| (uVar54 \| uVar39) & uVar51); \| iVar44 = uVar41 + uVar52 + \| ((uVar58 ^ uVar42) & uVar60 ^ uVar42) + \| ((uVar60 >> 6 \| uVa` |
| kernel.c | 1144553 | `(uVar48 >> 0x16 \| uVar48 * 0x400)); \| iVar44 = uVar56 + uVar42 + \| ((uVar60 ^ uVar58) & uVar61 ^ uVar58) + \| ((uVar61 >> 6 \| uVar61 * 0x4000` |
| kernel.c | 1144560 | `(uVar53 >> 0x16 \| uVar53 * 0x400)) + (uVar53 & uVar48 \| (uVar53 \| uVar48) & uVar54) + \| iVar44; \| iVar44 = uVar20 + uVar58 + \| ((uVar63 >> 6` |
| kernel.c | 1144568 | `iVar44; \| iVar44 = DAT_00722fe0 + \| uVar57 + uVar60 + \| ((uVar54 >> 6 \| uVar54 * 0x4000000) ^ (uVar54 >> 0xb \| uVar54 * 0x200000) ^ \| (uVar5` |
| kernel.c | 1144575 | `((uVar58 >> 2 \| uVar58 * 0x40000000) ^ (uVar58 >> 0xd \| uVar58 * 0x80000) ^ \| (uVar58 >> 0x16 \| uVar58 * 0x400)); \| iVar44 = ((uVar54 ^ uVar` |
| kernel.c | 1144583 | `(uVar49 & uVar58 \| (uVar49 \| uVar58) & uVar45); \| iVar44 = DAT_00722fe8 + \| uVar63 + uVar24 + \| ((uVar53 >> 6 \| uVar53 * 0x4000000) ^ (uVar5` |
| kernel.c | 1144590 | `(uVar61 >> 0x16 \| uVar61 * 0x400)) + \| (uVar61 & uVar49 \| (uVar61 \| uVar49) & uVar58); \| iVar44 = uVar26 + uVar54 + \| ((uVar45 >> 6 \| uVar45` |
| kernel.c | 1144597 | `((uVar60 >> 2 \| uVar60 * 0x40000000) ^ (uVar60 >> 0xd \| uVar60 * 0x80000) ^ \| (uVar60 >> 0x16 \| uVar60 * 0x400)); \| iVar44 = uVar28 + uVar48` |
| kernel.c | 1144605 | `(uVar54 >> 0x16 \| uVar54 * 0x400)); \| iVar44 = DAT_00723424 + \| uVar30 + uVar53 + \| ((uVar49 >> 6 \| uVar49 * 0x4000000) ^ (uVar49 >> 0xb \| u` |
| kernel.c | 1144612 | `(uVar48 >> 0x16 \| uVar48 * 0x400)) + \| (uVar48 & uVar54 \| (uVar48 \| uVar54) & uVar60); \| iVar44 = uVar32 + uVar45 + \| ((uVar61 >> 6 \| uVar61` |
| kernel.c | 1144619 | `((uVar53 >> 2 \| uVar53 * 0x40000000) ^ (uVar53 >> 0xd \| uVar53 * 0x80000) ^ \| (uVar53 >> 0x16 \| uVar53 * 0x400)); \| iVar44 = uVar34 + uVar58` |
| kernel.c | 1144627 | `(uVar45 & uVar53 \| (uVar45 \| uVar53) & uVar48); \| iVar44 = DAT_00723430 + \| uVar36 + uVar49 + \| ((uVar54 >> 6 \| uVar54 * 0x4000000) ^ (uVar5` |
| kernel.c | 1144634 | `(uVar58 >> 0x16 \| uVar58 * 0x400)) + \| (uVar58 & uVar45 \| (uVar58 \| uVar45) & uVar53); \| iVar44 = uVar59 + uVar61 + \| ((uVar48 >> 6 \| uVar48` |
| kernel.c | 1144641 | `((uVar49 >> 2 \| uVar49 * 0x40000000) ^ (uVar49 >> 0xd \| uVar49 * 0x80000) ^ \| (uVar49 >> 0x16 \| uVar49 * 0x400)); \| iVar44 = uVar60 + uVar55` |
| kernel.c | 1144650 | `uVar63 = ((uVar35 >> 0x11 \| uVar59 << 0xf) ^ (uVar35 >> 0x13 \| uVar59 << 0xd) ^ uVar50 >> 10) + \| ((uVar46 >> 7 \| (uint)bVar1 << 0x19) ^ (uV` |
| kernel.c | 1144660 | `uVar46 = ((uVar37 >> 0x11 \| uVar55 << 0xf) ^ (uVar37 >> 0x13 \| uVar55 << 0xd) ^ uVar38 >> 10) + \| ((uVar41 >> 7 \| (uint)bVar2 << 0x19) ^ (uV` |
| kernel.c | 1144668 | `((uVar15 >> 2 \| uVar15 * 0x40000000) ^ (uVar15 >> 0xd \| uVar15 * 0x80000) ^ \| (uVar15 >> 0x16 \| uVar15 * 0x400)); \| uVar54 = uVar32 + uVar41` |
| kernel.c | 1144671 | `((uVar63 >> 0x11 \| uVar63 * 0x8000) ^ (uVar63 >> 0x13 \| uVar63 * 0x2000) ^ uVar63 >> 10) \| + ((uVar56 >> 7 \| (uint)bVar3 << 0x19) ^ (uVar17 ` |
| kernel.c | 1144678 | `(uVar50 >> 0x16 \| uVar50 * 0x400)) + \| (uVar50 & uVar15 \| (uVar50 \| uVar15) & uVar60); \| uVar40 = uVar34 + uVar56 + \| ((uVar46 >> 0x11 \| uVa` |
| kernel.c | 1144682 | `+ ((uVar20 >> 7 \| (uint)bVar4 << 0x19) ^ (uVar18 >> 0x12 \| uVar20 << 0xe) ^ uVar20 >> 3); \| iVar44 = DAT_0072385c + \| uVar40 + uVar45 + ((uV` |
| kernel.c | 1144688 | `uVar17 = iVar44 + (uVar38 & uVar50 \| (uVar38 \| uVar50) & uVar15) + \| ((uVar38 >> 2 \| uVar38 * 0x40000000) ^ (uVar38 >> 0xd \| uVar38 * 0x8000` |
| kernel.c | 1144691 | `uVar20 = ((uVar54 >> 0x11 \| uVar54 * 0x8000) ^ (uVar54 >> 0x13 \| uVar54 * 0x2000) ^ uVar54 >> 10) \| + ((uVar57 >> 7 \| (uint)bVar5 << 0x19) ^` |
| kernel.c | 1144698 | `uVar16 = iVar44 + (uVar17 & uVar38 \| (uVar17 \| uVar38) & uVar50) + \| ((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x8000` |
| kernel.c | 1144702 | `+ ((uVar62 >> 7 \| (uint)bVar6 << 0x19) ^ (uVar21 >> 0x12 \| uVar62 << 0xe) ^ uVar62 >> 3) \| + uVar59 + uVar57; \| iVar44 = ((uVar60 ^ uVar61) ` |
| kernel.c | 1144708 | `uVar19 = iVar44 + (uVar16 & uVar17 \| (uVar16 \| uVar17) & uVar38) + \| ((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x8000` |
| kernel.c | 1144711 | `uVar41 = ((uVar20 >> 0x11 \| uVar20 * 0x8000) ^ (uVar20 >> 0x13 \| uVar20 * 0x2000) ^ uVar20 >> 10) \| + ((uVar24 >> 7 \| (uint)bVar7 << 0x19) ^` |
| kernel.c | 1144718 | `uVar22 = iVar44 + (uVar19 & uVar16 \| (uVar19 \| uVar16) & uVar17) + \| ((uVar19 >> 2 \| uVar19 * 0x40000000) ^ (uVar19 >> 0xd \| uVar19 * 0x8000` |
| kernel.c | 1144722 | `+ ((uVar26 >> 7 \| (uint)bVar8 << 0x19) ^ (uVar23 >> 0x12 \| uVar26 << 0xe) ^ uVar26 >> 3) \| + uVar63 + uVar24; \| iVar44 = ((uVar50 ^ uVar15) ` |
| kernel.c | 1144728 | `uVar18 = iVar44 + (uVar22 & uVar19 \| (uVar22 \| uVar19) & uVar16) + \| ((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x8000` |
| kernel.c | 1144731 | `uVar26 = ((uVar41 >> 0x11 \| uVar41 * 0x8000) ^ (uVar41 >> 0x13 \| uVar41 * 0x2000) ^ uVar41 >> 10) \| + ((uVar28 >> 7 \| (uint)bVar9 << 0x19) ^` |
| kernel.c | 1144738 | `uVar15 = iVar44 + (uVar18 & uVar22 \| (uVar18 \| uVar22) & uVar19) + \| ((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x8000` |
| kernel.c | 1144741 | `uVar28 = ((uVar24 >> 0x11 \| uVar24 * 0x8000) ^ (uVar24 >> 0x13 \| uVar24 * 0x2000) ^ uVar24 >> 10) \| + ((uVar30 >> 7 \| (uint)bVar10 << 0x19) ` |
| kernel.c | 1144749 | `(uVar15 >> 0x16 \| uVar15 * 0x400)) + \| (uVar15 & uVar18 \| (uVar15 \| uVar18) & uVar22); \| uVar27 = uVar40 + uVar30 + \| ((uVar26 >> 0x11 \| uVa` |
| kernel.c | 1144753 | `+ ((uVar32 >> 7 \| (uint)bVar11 << 0x19) ^ (uVar29 >> 0x12 \| uVar32 << 0xe) ^ uVar32 >> 3) \| ; \| iVar44 = uVar27 + ((uVar16 ^ uVar17) & uVar1` |
| kernel.c | 1144760 | `(uVar21 >> 0x16 \| uVar21 * 0x400)) + \| (uVar21 & uVar15 \| (uVar21 \| uVar15) & uVar18); \| uVar29 = uVar32 + uVar20 + \| ((uVar28 >> 0x11 \| uVa` |
| kernel.c | 1144764 | `+ ((uVar34 >> 7 \| (uint)bVar12 << 0x19) ^ (uVar31 >> 0x12 \| uVar34 << 0xe) ^ uVar34 >> 3) \| ; \| iVar44 = uVar29 + uVar17 + ((uVar22 >> 6 \| u` |
| kernel.c | 1144770 | `uVar17 = iVar44 + ((uVar23 >> 2 \| uVar23 * 0x40000000) ^ (uVar23 >> 0xd \| uVar23 * 0x80000) ^ \| (uVar23 >> 0x16 \| uVar23 * 0x400)) + \| (uVar` |
| kernel.c | 1144773 | `uVar30 = ((uVar27 >> 0x11 \| uVar27 * 0x8000) ^ (uVar27 >> 0x13 \| uVar27 * 0x2000) ^ uVar27 >> 10) \| + ((uVar36 >> 7 \| (uint)bVar13 << 0x19) ` |
| kernel.c | 1144780 | `uVar16 = iVar44 + (uVar17 & uVar23 \| (uVar17 \| uVar23) & uVar21) + \| ((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x8000` |
| kernel.c | 1144784 | `+ ((uVar59 >> 7 \| (uint)bVar14 << 0x19) ^ (uVar35 >> 0x12 \| uVar59 << 0xe) ^ uVar59 >> 3) \| + uVar41 + uVar36; \| iVar44 = ((uVar18 ^ uVar22)` |
| kernel.c | 1144790 | `uVar19 = iVar44 + (uVar16 & uVar17 \| (uVar16 \| uVar17) & uVar23) + \| ((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x8000` |
| kernel.c | 1144793 | `uVar34 = ((uVar30 >> 0x11 \| uVar30 * 0x8000) ^ (uVar30 >> 0x13 \| uVar30 * 0x2000) ^ uVar30 >> 10) \| + ((uVar55 >> 7 \| (uint)*(byte *)(param_` |
| kernel.c | 1144800 | `uVar22 = iVar44 + ((uVar19 >> 2 \| uVar19 * 0x40000000) ^ (uVar19 >> 0xd \| uVar19 * 0x80000) ^ \| (uVar19 >> 0x16 \| uVar19 * 0x400)) + \| (uVar` |
| kernel.c | 1144801 | `(uVar19 >> 0x16 \| uVar19 * 0x400)) + \| (uVar19 & uVar16 \| (uVar19 \| uVar16) & uVar17); \| uVar37 = ((uVar32 >> 0x11 \| uVar32 * 0x8000) ^ (uVa` |
| kernel.c | 1144804 | `+ ((uVar63 >> 7 \| uVar63 * 0x2000000) ^ (uVar63 >> 0x12 \| uVar63 * 0x4000) ^ uVar63 >> 3) \| + uVar26 + uVar55; \| iVar44 = ((uVar21 ^ uVar15)` |
| kernel.c | 1144810 | `uVar18 = iVar44 + (uVar22 & uVar19 \| (uVar22 \| uVar19) & uVar16) + \| ((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x8000` |
| kernel.c | 1144811 | `((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x80000) ^ \| (uVar22 >> 0x16 \| uVar22 * 0x400)); \| uVar36 = ((uVar34 >> 0x1` |
| kernel.c | 1144813 | `uVar36 = ((uVar34 >> 0x11 \| uVar34 * 0x8000) ^ (uVar34 >> 0x13 \| uVar34 * 0x2000) ^ uVar34 >> 10) \| + ((uVar46 >> 7 \| uVar46 * 0x2000000) ^ ` |
| kernel.c | 1144820 | `uVar15 = iVar44 + (uVar18 & uVar22 \| (uVar18 \| uVar22) & uVar19) + \| ((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x8000` |
| kernel.c | 1144821 | `((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x80000) ^ \| (uVar18 >> 0x16 \| uVar18 * 0x400)); \| uVar45 = ((uVar37 >> 0x1` |
| kernel.c | 1144824 | `+ ((uVar54 >> 7 \| uVar54 * 0x2000000) ^ (uVar54 >> 0x12 \| uVar54 * 0x4000) ^ uVar54 >> 3) \| + uVar27 + uVar46; \| iVar44 = DAT_00723cf0 + \| u` |
| kernel.c | 1144832 | `((uVar15 >> 2 \| uVar15 * 0x40000000) ^ (uVar15 >> 0xd \| uVar15 * 0x80000) ^ \| (uVar15 >> 0x16 \| uVar15 * 0x400)); \| uVar31 = uVar29 + uVar54` |
| kernel.c | 1144833 | `(uVar15 >> 0x16 \| uVar15 * 0x400)); \| uVar31 = uVar29 + uVar54 + \| ((uVar36 >> 0x11 \| uVar36 * 0x8000) ^ (uVar36 >> 0x13 \| uVar36 * 0x2000) ` |
| kernel.c | 1144837 | `; \| iVar44 = DAT_00723cf4 + \| ((uVar16 ^ uVar17) & uVar19 ^ uVar17) + \| ((uVar19 >> 6 \| uVar19 * 0x4000000) ^ (uVar19 >> 0xb \| uVar19 * 0x20` |
| kernel.c | 1144843 | `uVar23 = iVar44 + ((uVar21 >> 2 \| uVar21 * 0x40000000) ^ (uVar21 >> 0xd \| uVar21 * 0x80000) ^ \| (uVar21 >> 0x16 \| uVar21 * 0x400)) + \| (uVar` |
| kernel.c | 1144844 | `(uVar21 >> 0x16 \| uVar21 * 0x400)) + \| (uVar21 & uVar15 \| (uVar21 \| uVar15) & uVar18); \| uVar50 = ((uVar45 >> 0x11 \| uVar45 * 0x8000) ^ (uVa` |
| kernel.c | 1144847 | `+ ((uVar20 >> 7 \| uVar20 * 0x2000000) ^ (uVar20 >> 0x12 \| uVar20 * 0x4000) ^ uVar20 >> 3) \| + uVar30 + uVar40; \| iVar44 = ((uVar19 ^ uVar16)` |
| kernel.c | 1144854 | `((uVar23 >> 2 \| uVar23 * 0x40000000) ^ (uVar23 >> 0xd \| uVar23 * 0x80000) ^ \| (uVar23 >> 0x16 \| uVar23 * 0x400)); \| uVar33 = uVar20 + uVar32` |
| kernel.c | 1144855 | `(uVar23 >> 0x16 \| uVar23 * 0x400)); \| uVar33 = uVar20 + uVar32 + \| ((uVar31 >> 0x11 \| uVar31 * 0x8000) ^ (uVar31 >> 0x13 \| uVar31 * 0x2000) ` |
| kernel.c | 1144858 | `+ ((uVar58 >> 7 \| uVar58 * 0x2000000) ^ (uVar58 >> 0x12 \| uVar58 * 0x4000) ^ uVar58 >> 3) \| ; \| iVar44 = DAT_00723cfc + \| uVar33 + ((uVar18 ` |
| kernel.c | 1144865 | `uVar16 = iVar44 + (uVar17 & uVar23 \| (uVar17 \| uVar23) & uVar21) + \| ((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x8000` |
| kernel.c | 1144866 | `((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x80000) ^ \| (uVar17 >> 0x16 \| uVar17 * 0x400)); \| uVar38 = ((uVar50 >> 0x1` |
| kernel.c | 1144868 | `uVar38 = ((uVar50 >> 0x11 \| uVar50 * 0x8000) ^ (uVar50 >> 0x13 \| uVar50 * 0x2000) ^ uVar50 >> 10) \| + ((uVar41 >> 7 \| uVar41 * 0x2000000) ^ ` |
| kernel.c | 1144875 | `uVar19 = iVar44 + (uVar16 & uVar17 \| (uVar16 \| uVar17) & uVar23) + \| ((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x8000` |
| kernel.c | 1144876 | `((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x80000) ^ \| (uVar16 >> 0x16 \| uVar16 * 0x400)); \| uVar20 = ((uVar33 >> 0x1` |
| kernel.c | 1144879 | `+ ((uVar24 >> 7 \| uVar24 * 0x2000000) ^ (uVar24 >> 0x12 \| uVar24 * 0x4000) ^ uVar24 >> 3) \| + uVar37 + uVar41; \| iVar44 = ((uVar15 ^ uVar18)` |
| kernel.c | 1144885 | `uVar25 = iVar44 + ((uVar19 >> 2 \| uVar19 * 0x40000000) ^ (uVar19 >> 0xd \| uVar19 * 0x80000) ^ \| (uVar19 >> 0x16 \| uVar19 * 0x400)) + \| (uVar` |
| kernel.c | 1144886 | `(uVar19 >> 0x16 \| uVar19 * 0x400)) + \| (uVar19 & uVar16 \| (uVar19 \| uVar16) & uVar17); \| uVar24 = ((uVar38 >> 0x11 \| uVar38 * 0x8000) ^ (uVa` |
| kernel.c | 1144889 | `+ ((uVar26 >> 7 \| uVar26 * 0x2000000) ^ (uVar26 >> 0x12 \| uVar26 * 0x4000) ^ uVar26 >> 3) \| + uVar36 + uVar24; \| iVar44 = DAT_0072411c + \| u` |
| kernel.c | 1144896 | `uVar18 = iVar44 + ((uVar25 >> 2 \| uVar25 * 0x40000000) ^ (uVar25 >> 0xd \| uVar25 * 0x80000) ^ \| (uVar25 >> 0x16 \| uVar25 * 0x400)) + \| (uVar` |
| kernel.c | 1144897 | `(uVar25 >> 0x16 \| uVar25 * 0x400)) + \| (uVar25 & uVar19 \| (uVar25 \| uVar19) & uVar16); \| uVar26 = ((uVar20 >> 0x11 \| uVar20 * 0x8000) ^ (uVa` |
| kernel.c | 1144899 | `uVar26 = ((uVar20 >> 0x11 \| uVar20 * 0x8000) ^ (uVar20 >> 0x13 \| uVar20 * 0x2000) ^ uVar20 >> 10) \| + ((uVar28 >> 7 \| uVar28 * 0x2000000) ^ ` |
| kernel.c | 1144907 | `((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x80000) ^ \| (uVar18 >> 0x16 \| uVar18 * 0x400)); \| uVar35 = uVar31 + uVar28` |
| kernel.c | 1144908 | `(uVar18 >> 0x16 \| uVar18 * 0x400)); \| uVar35 = uVar31 + uVar28 + \| ((uVar24 >> 0x11 \| uVar24 * 0x8000) ^ (uVar24 >> 0x13 \| uVar24 * 0x2000) ` |
| kernel.c | 1144911 | `+ ((uVar27 >> 7 \| uVar27 * 0x2000000) ^ (uVar27 >> 0x12 \| uVar27 * 0x4000) ^ uVar27 >> 3) \| ; \| iVar44 = DAT_00724124 + \| uVar35 + ((uVar16 ` |
| kernel.c | 1144918 | `uVar21 = iVar44 + (uVar15 & uVar18 \| (uVar15 \| uVar18) & uVar25) + \| ((uVar15 >> 2 \| uVar15 * 0x40000000) ^ (uVar15 >> 0xd \| uVar15 * 0x8000` |
| kernel.c | 1144919 | `((uVar15 >> 2 \| uVar15 * 0x40000000) ^ (uVar15 >> 0xd \| uVar15 * 0x80000) ^ \| (uVar15 >> 0x16 \| uVar15 * 0x400)); \| uVar40 = ((uVar26 >> 0x1` |
| kernel.c | 1144922 | `+ ((uVar29 >> 7 \| uVar29 * 0x2000000) ^ (uVar29 >> 0x12 \| uVar29 * 0x4000) ^ uVar29 >> 3) \| + uVar50 + uVar27; \| iVar44 = ((uVar16 ^ uVar17)` |
| kernel.c | 1144929 | `(uVar21 >> 0x16 \| uVar21 * 0x400)) + \| (uVar21 & uVar15 \| (uVar21 \| uVar15) & uVar18); \| uVar28 = uVar29 + uVar33 + \| ((uVar35 >> 0x11 \| uVa` |
| kernel.c | 1144930 | `(uVar21 & uVar15 \| (uVar21 \| uVar15) & uVar18); \| uVar28 = uVar29 + uVar33 + \| ((uVar35 >> 0x11 \| uVar35 * 0x8000) ^ (uVar35 >> 0x13 \| uVar3` |
| kernel.c | 1144933 | `+ ((uVar30 >> 7 \| uVar30 * 0x2000000) ^ (uVar30 >> 0x12 \| uVar30 * 0x4000) ^ uVar30 >> 3) \| ; \| iVar44 = uVar28 + ((uVar19 ^ uVar16) & uVar2` |
| kernel.c | 1144939 | `uVar17 = iVar44 + ((uVar27 >> 2 \| uVar27 * 0x40000000) ^ (uVar27 >> 0xd \| uVar27 * 0x80000) ^ \| (uVar27 >> 0x16 \| uVar27 * 0x400)) + \| (uVar` |
| kernel.c | 1144940 | `(uVar27 >> 0x16 \| uVar27 * 0x400)) + \| (uVar27 & uVar21 \| (uVar27 \| uVar21) & uVar15); \| uVar30 = ((uVar40 >> 0x11 \| uVar40 * 0x8000) ^ (uVa` |
| kernel.c | 1144942 | `uVar30 = ((uVar40 >> 0x11 \| uVar40 * 0x8000) ^ (uVar40 >> 0x13 \| uVar40 * 0x2000) ^ uVar40 >> 10) \| + ((uVar32 >> 7 \| uVar32 * 0x2000000) ^ ` |
| kernel.c | 1144949 | `uVar16 = iVar44 + ((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x80000) ^ \| (uVar17 >> 0x16 \| uVar17 * 0x400)) + \| (uVar` |
| kernel.c | 1144950 | `(uVar17 >> 0x16 \| uVar17 * 0x400)) + \| (uVar17 & uVar27 \| (uVar17 \| uVar27) & uVar21); \| uVar32 = ((uVar28 >> 0x11 \| uVar28 * 0x8000) ^ (uVa` |
| kernel.c | 1144952 | `uVar32 = ((uVar28 >> 0x11 \| uVar28 * 0x8000) ^ (uVar28 >> 0x13 \| uVar28 * 0x2000) ^ uVar28 >> 10) \| + ((uVar34 >> 7 \| uVar34 * 0x2000000) ^ ` |
| kernel.c | 1144959 | `uVar22 = iVar44 + (uVar16 & uVar17 \| (uVar16 \| uVar17) & uVar27) + \| ((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x8000` |
| kernel.c | 1144960 | `((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x80000) ^ \| (uVar16 >> 0x16 \| uVar16 * 0x400)); \| uVar34 = ((uVar30 >> 0x1` |
| kernel.c | 1144962 | `uVar34 = ((uVar30 >> 0x11 \| uVar30 * 0x8000) ^ (uVar30 >> 0x13 \| uVar30 * 0x2000) ^ uVar30 >> 10) \| + ((uVar37 >> 7 \| uVar37 * 0x2000000) ^ ` |
| kernel.c | 1144969 | `uVar25 = iVar44 + (uVar22 & uVar16 \| (uVar22 \| uVar16) & uVar17) + \| ((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x8000` |
| kernel.c | 1144970 | `((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x80000) ^ \| (uVar22 >> 0x16 \| uVar22 * 0x400)); \| uVar37 = ((uVar32 >> 0x1` |
| kernel.c | 1144974 | `+ uVar26 + uVar37; \| iVar44 = DAT_00724540 + \| ((uVar21 ^ uVar15) & uVar27 ^ uVar15) + \| ((uVar27 >> 6 \| uVar27 * 0x4000000) ^ (uVar27 >> 0x` |
| kernel.c | 1144981 | `((uVar25 >> 2 \| uVar25 * 0x40000000) ^ (uVar25 >> 0xd \| uVar25 * 0x80000) ^ \| (uVar25 >> 0x16 \| uVar25 * 0x400)); \| uVar36 = uVar35 + uVar36` |
| kernel.c | 1144982 | `(uVar25 >> 0x16 \| uVar25 * 0x400)); \| uVar36 = uVar35 + uVar36 + \| ((uVar34 >> 0x11 \| uVar34 * 0x8000) ^ (uVar34 >> 0x13 \| uVar34 * 0x2000) ` |
| kernel.c | 1144985 | `+ ((uVar45 >> 7 \| uVar45 * 0x2000000) ^ (uVar45 >> 0x12 \| uVar45 * 0x4000) ^ uVar45 >> 3) \| ; \| iVar44 = uVar36 + ((uVar27 ^ uVar21) & uVar1` |
| kernel.c | 1144992 | `((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x80000) ^ \| (uVar18 >> 0x16 \| uVar18 * 0x400)); \| uVar58 = uVar40 + uVar45` |
| kernel.c | 1144993 | `(uVar18 >> 0x16 \| uVar18 * 0x400)); \| uVar58 = uVar40 + uVar45 + \| ((uVar37 >> 0x11 \| uVar37 * 0x8000) ^ (uVar37 >> 0x13 \| uVar37 * 0x2000) ` |
| kernel.c | 1144996 | `+ ((uVar31 >> 7 \| uVar31 * 0x2000000) ^ (uVar31 >> 0x12 \| uVar31 * 0x4000) ^ uVar31 >> 3) \| ; \| iVar44 = ((uVar17 ^ uVar27) & uVar16 ^ uVar2` |
| kernel.c | 1145003 | `(uVar15 >> 0x16 \| uVar15 * 0x400)) + \| (uVar15 & uVar18 \| (uVar15 \| uVar18) & uVar25); \| uVar31 = uVar28 + uVar31 + \| ((uVar36 >> 0x11 \| uVa` |
| kernel.c | 1145004 | `(uVar15 & uVar18 \| (uVar15 \| uVar18) & uVar25); \| uVar31 = uVar28 + uVar31 + \| ((uVar36 >> 0x11 \| uVar36 * 0x8000) ^ (uVar36 >> 0x13 \| uVar3` |
| kernel.c | 1145006 | `((uVar36 >> 0x11 \| uVar36 * 0x8000) ^ (uVar36 >> 0x13 \| uVar36 * 0x2000) ^ uVar36 >> 10) \| + ((uVar50 >> 7 \| uVar50 * 0x2000000) ^ (uVar50 >` |
| kernel.c | 1145013 | `uVar54 = iVar44 + (uVar23 & uVar15 \| (uVar23 \| uVar15) & uVar18) + \| ((uVar23 >> 2 \| uVar23 * 0x40000000) ^ (uVar23 >> 0xd \| uVar23 * 0x8000` |
| kernel.c | 1145014 | `((uVar23 >> 2 \| uVar23 * 0x40000000) ^ (uVar23 >> 0xd \| uVar23 * 0x80000) ^ \| (uVar23 >> 0x16 \| uVar23 * 0x400)); \| uVar50 = ((uVar58 >> 0x1` |
| kernel.c | 1145017 | `+ ((uVar33 >> 7 \| uVar33 * 0x2000000) ^ (uVar33 >> 0x12 \| uVar33 * 0x4000) ^ uVar33 >> 3) \| + uVar30 + uVar50; \| iVar44 = ((uVar22 ^ uVar16)` |
| kernel.c | 1145024 | `((uVar54 >> 2 \| uVar54 * 0x40000000) ^ (uVar54 >> 0xd \| uVar54 * 0x80000) ^ \| (uVar54 >> 0x16 \| uVar54 * 0x400)); \| uVar19 = uVar32 + uVar33` |
| kernel.c | 1145025 | `(uVar54 >> 0x16 \| uVar54 * 0x400)); \| uVar19 = uVar32 + uVar33 + \| ((uVar31 >> 0x11 \| uVar31 * 0x8000) ^ (uVar31 >> 0x13 \| uVar31 * 0x2000) ` |
| kernel.c | 1145028 | `+ ((uVar38 >> 7 \| uVar38 * 0x2000000) ^ (uVar38 >> 0x12 \| uVar38 * 0x4000) ^ uVar38 >> 3) \| ; \| iVar44 = uVar19 + uVar16 + ((uVar18 >> 6 \| u` |
| kernel.c | 1145035 | `(uVar29 >> 0x16 \| uVar29 * 0x400)) + (uVar29 & uVar54 \| (uVar29 \| uVar54) & uVar23) + \| iVar44; \| uVar16 = uVar34 + uVar38 + \| ((uVar50 >> 0` |
| kernel.c | 1145036 | `iVar44; \| uVar16 = uVar34 + uVar38 + \| ((uVar50 >> 0x11 \| uVar50 * 0x8000) ^ (uVar50 >> 0x13 \| uVar50 * 0x2000) ^ uVar50 >> 10) \| + ((uVar20` |
| kernel.c | 1145038 | `((uVar50 >> 0x11 \| uVar50 * 0x8000) ^ (uVar50 >> 0x13 \| uVar50 * 0x2000) ^ uVar50 >> 10) \| + ((uVar20 >> 7 \| uVar20 * 0x2000000) ^ (uVar20 >` |
| kernel.c | 1145045 | `uVar22 = iVar44 + ((uVar27 >> 2 \| uVar27 * 0x40000000) ^ (uVar27 >> 0xd \| uVar27 * 0x80000) ^ \| (uVar27 >> 0x16 \| uVar27 * 0x400)) + \| (uVar` |
| kernel.c | 1145046 | `(uVar27 >> 0x16 \| uVar27 * 0x400)) + \| (uVar27 & uVar29 \| (uVar27 \| uVar29) & uVar54); \| uVar33 = ((uVar19 >> 0x11 \| uVar19 * 0x8000) ^ (uVa` |
| kernel.c | 1145048 | `uVar33 = ((uVar19 >> 0x11 \| uVar19 * 0x8000) ^ (uVar19 >> 0x13 \| uVar19 * 0x2000) ^ uVar19 >> 10) \| + ((uVar24 >> 7 \| uVar24 * 0x2000000) ^ ` |
| kernel.c | 1145055 | `uVar21 = (uVar22 & uVar27 \| (uVar22 \| uVar27) & uVar29) + \| ((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x80000) ^ \| (u` |
| kernel.c | 1145056 | `((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x80000) ^ \| (uVar22 >> 0x16 \| uVar22 * 0x400)) + iVar44; \| uVar38 = ((uVar` |
| kernel.c | 1145059 | `+ ((uVar26 >> 7 \| uVar26 * 0x2000000) ^ (uVar26 >> 0x12 \| uVar26 * 0x4000) ^ uVar26 >> 3) \| + uVar36 + uVar24; \| iVar44 = ((uVar23 ^ uVar15)` |
| kernel.c | 1145066 | `((uVar21 >> 2 \| uVar21 * 0x40000000) ^ (uVar21 >> 0xd \| uVar21 * 0x80000) ^ \| (uVar21 >> 0x16 \| uVar21 * 0x400)); \| uVar20 = uVar58 + uVar26` |
| kernel.c | 1145067 | `(uVar21 >> 0x16 \| uVar21 * 0x400)); \| uVar20 = uVar58 + uVar26 + \| ((uVar33 >> 0x11 \| uVar33 * 0x8000) ^ (uVar33 >> 0x13 \| uVar33 * 0x2000) ` |
| kernel.c | 1145070 | `+ ((uVar35 >> 7 \| uVar35 * 0x2000000) ^ (uVar35 >> 0x12 \| uVar35 * 0x4000) ^ uVar35 >> 3) \| ; \| iVar44 = uVar20 + ((uVar54 ^ uVar23) & uVar2` |
| kernel.c | 1145077 | `((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x80000) ^ \| (uVar17 >> 0x16 \| uVar17 * 0x400)); \| uVar15 = uVar35 + uVar31` |
| kernel.c | 1145078 | `(uVar17 >> 0x16 \| uVar17 * 0x400)); \| uVar15 = uVar35 + uVar31 + \| ((uVar38 >> 0x11 \| uVar38 * 0x8000) ^ (uVar38 >> 0x13 \| uVar38 * 0x2000) ` |
| kernel.c | 1145082 | `; \| iVar44 = DAT_00724978 + \| ((uVar29 ^ uVar54) & uVar27 ^ uVar54) + \| ((uVar27 >> 6 \| uVar27 * 0x4000000) ^ (uVar27 >> 0xb \| uVar27 * 0x20` |
| kernel.c | 1145089 | `(uVar25 >> 0x16 \| uVar25 * 0x400)) + \| (uVar25 & uVar17 \| (uVar25 \| uVar17) & uVar21); \| uVar31 = uVar50 + uVar40 + \| ((uVar20 >> 0x11 \| uVa` |
| kernel.c | 1145090 | `(uVar25 & uVar17 \| (uVar25 \| uVar17) & uVar21); \| uVar31 = uVar50 + uVar40 + \| ((uVar20 >> 0x11 \| uVar20 * 0x8000) ^ (uVar20 >> 0x13 \| uVar2` |
| kernel.c | 1145092 | `((uVar20 >> 0x11 \| uVar20 * 0x8000) ^ (uVar20 >> 0x13 \| uVar20 * 0x2000) ^ uVar20 >> 10) \| + ((uVar28 >> 7 \| uVar28 * 0x2000000) ^ (uVar28 >` |
| kernel.c | 1145099 | `((uVar23 >> 2 \| uVar23 * 0x40000000) ^ (uVar23 >> 0xd \| uVar23 * 0x80000) ^ \| (uVar23 >> 0x16 \| uVar23 * 0x400)); \| uVar21 = uVar21 + iVar44` |
| kernel.c | 1145100 | `(uVar23 >> 0x16 \| uVar23 * 0x400)); \| uVar21 = uVar21 + iVar44; \| uVar50 = ((uVar15 >> 0x11 \| uVar15 * 0x8000) ^ (uVar15 >> 0x13 \| uVar15 * ` |
| kernel.c | 1145103 | `+ ((uVar30 >> 7 \| uVar30 * 0x2000000) ^ (uVar30 >> 0x12 \| uVar30 * 0x4000) ^ uVar30 >> 3) \| + uVar19 + uVar28; \| iVar44 = ((uVar22 ^ uVar27)` |
| kernel.c | 1145109 | `uVar18 = iVar44 + (uVar35 & uVar23 \| (uVar35 \| uVar23) & uVar25) + \| ((uVar35 >> 2 \| uVar35 * 0x40000000) ^ (uVar35 >> 0xd \| uVar35 * 0x8000` |
| kernel.c | 1145110 | `((uVar35 >> 2 \| uVar35 * 0x40000000) ^ (uVar35 >> 0xd \| uVar35 * 0x80000) ^ \| (uVar35 >> 0x16 \| uVar35 * 0x400)); \| uVar19 = ((uVar31 >> 0x1` |
| kernel.c | 1145112 | `uVar19 = ((uVar31 >> 0x11 \| uVar31 * 0x8000) ^ (uVar31 >> 0x13 \| uVar31 * 0x2000) ^ uVar31 >> 10) \| + ((uVar32 >> 7 \| uVar32 * 0x2000000) ^ ` |
| kernel.c | 1145119 | `uVar15 = ((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x80000) ^ \| (uVar18 >> 0x16 \| uVar18 * 0x400)) + (uVar18 & uVar35` |
| kernel.c | 1145120 | `(uVar18 >> 0x16 \| uVar18 * 0x400)) + (uVar18 & uVar35 \| (uVar18 \| uVar35) & uVar23) + \| iVar44; \| uVar27 = ((uVar50 >> 0x11 \| uVar50 * 0x800` |
| kernel.c | 1145123 | `+ ((uVar34 >> 7 \| uVar34 * 0x2000000) ^ (uVar34 >> 0x12 \| uVar34 * 0x4000) ^ uVar34 >> 3) \| + uVar32 + uVar33; \| iVar44 = uVar27 + uVar22 + ` |
| kernel.c | 1145130 | `((uVar15 >> 2 \| uVar15 * 0x40000000) ^ (uVar15 >> 0xd \| uVar15 * 0x80000) ^ \| (uVar15 >> 0x16 \| uVar15 * 0x400)); \| iVar44 = uVar34 + uVar38` |
| kernel.c | 1145131 | `(uVar15 >> 0x16 \| uVar15 * 0x400)); \| iVar44 = uVar34 + uVar38 + \| ((uVar19 >> 0x11 \| uVar19 * 0x8000) ^ (uVar19 >> 0x13 \| uVar19 * 0x2000) ` |
| kernel.c | 1145133 | `((uVar19 >> 0x11 \| uVar19 * 0x8000) ^ (uVar19 >> 0x13 \| uVar19 * 0x2000) ^ uVar19 >> 10) \| + ((uVar37 >> 7 \| uVar37 * 0x2000000) ^ (uVar37 >` |
| kernel.c | 1145140 | `((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x80000) ^ \| (uVar16 >> 0x16 \| uVar16 * 0x400)) + iVar44; \| iVar44 = uVar37` |
| kernel.c | 1145141 | `(uVar16 >> 0x16 \| uVar16 * 0x400)) + iVar44; \| iVar44 = uVar37 + uVar20 + \| ((uVar27 >> 0x11 \| uVar27 * 0x8000) ^ (uVar27 >> 0x13 \| uVar27 *` |
| kernel.c | 1145143 | `((uVar27 >> 0x11 \| uVar27 * 0x8000) ^ (uVar27 >> 0x13 \| uVar27 * 0x2000) ^ uVar27 >> 10) \| + ((uVar36 >> 7 \| uVar36 * 0x2000000) ^ (uVar36 >` |
| kernel.c | 1146169 | `iStack_30 = param_2; \| local_2c = param_3; \| iStack_28 = param_4; \| FUN_006fe9dc(local_23c,0x200); \| iVar5 = DAT_0072bafc; \| cVar2 = *DAT_00` |
| kernel.c | 1147152 | `if (param_2 != 3) { \| FUN_006a77ea(&local_38); \| if ('\x01' < *pcVar1) { \| iVar8 = uStack_34 * 0x2000; \| uVar9 = local_38 >> 0x13; \| local_3` |
| kernel.c | 1152197 | `iVar3 = DAT_00737828; \| *(undefined4 *)(DAT_00737828 + 0x4a8) = 0; \| if ((*(char *)(iVar4 + 0x9a) == '\0') \|\| (*(char *)(iVar4 + 0xdf) == '\` |
| kernel.c | 1152201 | `*(undefined1 *)(iVar3 + 0x4a4) = 0; \| } \| else { \| *(uint *)(iVar3 + 0x4a4) = (*(uint *)(iVar3 + 0x4a4) & 0xfff801ff) + 0x200 & 0xfffffeff; ` |
| kernel.c | 1152223 | `} \| } \| pcVar2 = DAT_00737820; \| *(undefined4 *)(iVar3 + 0x4a8) = 0x20000; \| *(undefined4 *)(iVar3 + 0x4ac) = 0; \| iVar4 = DAT_00737834; \| *` |
| kernel.c | 1152826 | `uVar10 = uVar12 & 0xfffe1fff \| uVar8; \| *(uint *)(iVar5 + 0x404) = uVar10; \| if (param_4[0x10] == '\x01') { \| uVar8 = uVar10 \| 0x20000; \| } ` |
| kernel.c | 1152963 | `uVar9 = uVar11 & 0xfffe1fff \| uVar7; \| *(uint *)(iVar4 + 0x404) = uVar9; \| if (in_r3[0x10] == '\x01') { \| uVar7 = uVar9 \| 0x20000; \| } \| els` |
| kernel.c | 1155167 | `int iVar9; \|  \| iVar3 = DAT_0073cab8; \| FUN_006fe9dc(DAT_0073cab8,0x200,param_3,param_4,param_2,param_3,param_4); \| iVar9 = DAT_0073ca90; \| ` |
| kernel.c | 1155180 | `} \| else { \| uVar7 = uVar6 & 0xfffa7ff8 \| uVar8 \| uVar7; \| uVar8 = (uVar7 \| ((byte)param_1[0x32] & 1) << 0x12 \| 0x20000) >> 0x11; \| uVar6 = ` |
| kernel.c | 1155182 | `uVar7 = uVar6 & 0xfffa7ff8 \| uVar8 \| uVar7; \| uVar8 = (uVar7 \| ((byte)param_1[0x32] & 1) << 0x12 \| 0x20000) >> 0x11; \| uVar6 = uVar8 << 0x11` |
| kernel.c | 1156012 | `*(undefined4 *)(iVar3 + 0x9ec) = 0; \| if (*(char *)(param_2 + 6) == '\0') { \| if (uVar7 < 0x5a) { \| uVar8 = *(uint *)(iVar3 + 0x9ec) \| 0x200` |
| kernel.c | 1156339 | `puVar4 = DAT_0073e4f4; \| uVar7 = (uint)(param_4 == 1); \| *(uint *)(iVar2 + 0x354) = *(uint *)(iVar2 + 0x354) & 0xfff00000 \| 0x6522; \| *(uint` |
| kernel.c | 1156503 | `int iVar10; \|  \| iVar2 = DAT_0073e944; \| FUN_006fe9dc(DAT_0073e944,0x200,param_3,param_4,param_2,param_3,param_4); \| iVar10 = DAT_0073e940; ` |
| kernel.c | 1156514 | `uVar7 = uVar5 & 0xfff87ff8 \| uVar9 \| uVar7; \| if (param_3 != 0) { \| uVar7 = (uVar5 & 0xfff87ff8) >> 0x11; \| uVar7 = iVar2 * 0x20000000 + (uV` |
| kernel.c | 1156642 | `iVar11 = 0; \| } \| uVar12 = (iVar11 + (uint)bVar1 * 5) % 0x500; \| *(uint *)(iVar15 + 0x4a4) = (*(uint *)(iVar15 + 0x4a4) & 0xfff801ff) + 0x20` |
| kernel.c | 1156666 | `uVar16 = *(uint *)(iVar15 + 0x4a8); \| uVar17 = (*(byte *)(iVar3 + 0xe3) & 7) << 0xe; \| *(char *)(iVar15 + 0x4ac) = (char)iVar4; \| *(uint *)(` |
| kernel.c | 1156672 | `} \| else { \| *(uint *)(iVar15 + 0x4a4) = *(uint *)(iVar15 + 0x4a4) \| 0x100; \| *(uint *)(iVar15 + 0x4a8) = uVar16 & 0xfffe0000 \| uVar17 \| 0x2` |
| kernel.c | 1156779 | `uVar18 = *(uint *)(iVar15 + 0x524); \| uVar7 = (uVar6 & 0xfff) << 3; \| uVar6 = uVar18 & 0xfffe8007 \| uVar7; \| *(uint *)(iVar15 + 0x524) = uVa` |
| kernel.c | 1156784 | `uVar6 = uVar6 \| 0x28000; \| } \| else { \| uVar6 = uVar18 & 0xfffe0007 \| uVar7 \| 0x20000; \| } \| *(undefined4 *)(iVar15 + 0x9ec) = 0; \| *(uint *` |
| kernel.c | 1157065 | `*param_2 = *param_2 \| 0x80000; \| *(undefined1 *)((int)param_2 + 1) = 1; \| if (*(char *)(param_3 + 0x281) == '\0') { \| iVar6 = *(int *)(param` |
| kernel.c | 1158402 | `(iVar3 = *(int *)(iVar2 + param_1 * 4), *(int *)(iVar3 + uVar4 * 0x3ac + 0x27c) == 1)) && \| ((iVar3 = iVar3 + uVar4 * 0x3ac, *(char *)(iVar3` |
| kernel.c | 1158403 | `((iVar3 = iVar3 + uVar4 * 0x3ac, *(char *)(iVar3 + 0x20c) == cVar1 && \| (*(int *)(iVar3 + 0x208) == 1)))) { \| *(undefined4 *)(iVar3 + 0x204)` |
| kernel.c | 1159821 | ` \| piVar2 = DAT_00743f5c; \| iVar8 = *DAT_00743f5c; \| puVar4 = (uint *)(iVar8 + param_1 * 0x200); \| if (param_2 == 0) { \| if ((param_1 < 0x20` |
| kernel.c | 1159829 | `puVar5 = (ushort *)(*puVar4 >> 0x10); \| do { \| if ((uVar7 != param_1) && \| (puVar3 = (ushort *)(iVar8 + uVar7 * 0x200), (puVar3[10] & 1) != ` |
| kernel.c | 1159853 | `uVar6 = *puVar4 & 0xffff; \| puVar5 = (ushort *)(*puVar4 >> 0x10); \| do { \| if ((uVar7 != param_1) && (puVar3 = (ushort *)(iVar8 + uVar7 * 0x` |
| kernel.c | 1159864 | `FUN_006f4c52(0x21,DAT_00743f60,4,uVar6,puVar5,param_1,uVar7); \| } \| LAB_00743c18: \| iVar8 = *piVar2 + uVar7 * 0x200; \| *(uint *)(iVar8 + 0x1` |
| kernel.c | 1160180 | `uVar10 = DAT_00743fcc; \| uVar20 = 0; \| while( true ) { \| iVar22 = *piVar15 + uVar20 * 0x200; \| if ('\x03' < *pcVar4) { \| FUN_006f4c52(0x21,u` |
| kernel.c | 1160208 | `if (*(char *)(iVar18 + 2) == '\x01') { \| uVar20 = 0; \| do { \| puVar21 = (undefined2 *)(*piVar15 + uVar20 * 0x200); \| uVar16 = 0; \| do { \| iV` |
| kernel.c | 1160279 | `uVar20 = 0; \| iVar18 = *piVar15; \| do { \| psVar14 = (short *)(iVar18 + uVar20 * 0x200); \| uVar16 = *(uint *)(psVar14 + 10); \| if (((uVar16 &` |
| kernel.c | 1160334 | `uVar20 = 0x20; \| do { \| uVar16 = 0; \| psVar14 = (short *)(*piVar15 + uVar20 * 0x200); \| do { \| uVar17 = 0; \| do {` |
| kernel.c | 1160670 | `*piVar1 = iVar3; \| iVar4 = 0; \| do { \| FUN_006f4a34(iVar3,*piVar2 + iVar4 * 0x200,0x200); \| iVar4 = iVar4 + 1; \| iVar3 = iVar3 + 0x200; \| } ` |
| kernel.c | 1160672 | `do { \| FUN_006f4a34(iVar3,*piVar2 + iVar4 * 0x200,0x200); \| iVar4 = iVar4 + 1; \| iVar3 = iVar3 + 0x200; \| } while (iVar4 < 0x41); \| } \| retu` |
| kernel.c | 1160723 | `if (iVar4 != 0) { \| iVar3 = 0; \| do { \| FUN_006f4a34(*piVar2 + iVar3 * 0x200,iVar4,0x200); \| iVar3 = iVar3 + 1; \| iVar4 = iVar4 + 0x200; \| }` |
| kernel.c | 1160725 | `do { \| FUN_006f4a34(*piVar2 + iVar3 * 0x200,iVar4,0x200); \| iVar3 = iVar3 + 1; \| iVar4 = iVar4 + 0x200; \| } while (iVar3 < 0x41); \| FUN_006f` |
| kernel.c | 1160992 | `uVar5 = iVar4 << 8 \| uVar5; \| if ((uVar9 != 0) && (uVar5 != uVar7)) { \| if (uVar7 < uVar5) { \| if (0x200 < (int)(uVar5 - uVar7)) { \| LAB_007` |
| kernel.c | 1161001 | `goto LAB_00745326; \| } \| } \| else if ((int)(uVar7 - uVar5) < 0x200) goto LAB_00745310; \| } \| iVar4 = FUN_0030c9bc(local_28,&local_30,1); \| i` |
| kernel.c | 1166992 | `if (param_2 != 3) { \| FUN_006a77ea(&local_70); \| if ('\x01' < *pcVar3) { \| iVar10 = local_6c * 0x2000; \| uVar11 = local_70 >> 0x13; \| local_` |
| kernel.c | 1167405 | `FUN_006f4d8e(); \| puVar2 = DAT_0074e9e4; \| if (0xe < *DAT_0074e9e4) { \| FUN_006f18c4(DAT_0074e9e8,0x200,0); \| } \| *(undefined2 *)(puVar2 + *` |
| kernel.c | 1168073 | `} while (uVar4 < *pbVar1); \| } \| if (param_1 == 1) { \| *(ushort *)(local_58 + 0x50) = *(ushort *)(local_58 + 0x50) \| 0x200; \| } \| local_3c =` |
| kernel.c | 1169328 | `if (param_1 - 0x3cf < 0x31) { \| uVar2 = sVar1 - 0x1dc; \| } \| else if (param_1 - 0x200 < 0x176) { \| if ((((param_2 == 4) \|\| (param_2 == 3)) \|` |
| kernel.c | 1169491 | `*(undefined4 *)(iVar1 + 0x78) = uVar3; \| *(undefined4 *)(iVar1 + 0x7c) = 0; \| *(undefined4 *)(iVar1 + 0x80) = 2; \| *(uint *)(iVar1 + 0x74) =` |
| kernel.c | 1179177 | `FUN_007bd7e8(0,&local_3c); \| if (local_3c == 0) { \| uVar8 = FUN_006fd49c(DAT_0075fb48); \| thunk_FUN_006fb59e(DAT_0075fb50,DAT_0075fb4c,0x200` |
| kernel.c | 1179182 | `FUN_0036e2e2(&local_40); \| if (local_40 == 0) { \| uVar8 = FUN_006fd49c(DAT_0075fb54); \| thunk_FUN_006fb59e(DAT_0075fb58,DAT_0075fb4c,0x200c,` |
| kernel.c | 1191363 | `iVar6 = *(int *)(*DAT_00774c88 + 0xc); \| if (*(short *)(param_1 + 8) != 0) { \| local_28 = iVar6 + 0x21b4; \| local_44 = iVar6 + 0x2000; \| loc` |
| kernel.c | 1210341 | `FUN_006f4c52(0x1f,DAT_00788d64 + -0x27,4,piVar3[0xd],*DAT_00788d68,*DAT_00788d68, \| *(undefined4 *)(puVar4 + uVar10 * 6 + 8)); \| } \| if ((*(` |
| kernel.c | 1210385 | `} \| } \| uVar10 = *(uint *)(DAT_00788d6c + 4); \| if ((uVar10 == 1) && (*(short *)(DAT_00788d6c + 8) == 0x200)) { \| uVar10 = (uint)(byte)*puVa` |
| kernel.c | 1210956 | `uVar6 = *(uint *)(iVar3 + 0x30) & 0xfe000000; \| *(uint *)(iVar3 + 0x30) = uVar6; \| *(uint *)(*piVar2 + 0x30) = uVar6; \| *DAT_00789ef8 = 0x20` |
| kernel.c | 1211156 | `local_38 = &local_30; \| FUN_006a7aba(local_28,uStack_24,param_1,param_2); \| uVar5 = *(uint *)(iVar3 + 0x14) & 0xf2000000 \| (local_30 >> 2 & ` |
| kernel.c | 1211259 | `uVar3 = *(uint *)(DAT_0078a388 + 0x1c); \| uVar5 = (param_1 & 1) << 7; \| uVar4 = uVar3 & 0xffffff7f \| uVar5; \| *(uint *)(DAT_0078a388 + 0x1c)` |
| kernel.c | 1211265 | `uVar4 = uVar4 \| 0x3000020; \| } \| else { \| uVar4 = uVar3 & 0xfeffff7f \| uVar5 \| 0x2000020; \| } \| *(uint *)(iVar1 + 0x1c) = uVar4; \| *(uint *)` |
| kernel.c | 1214858 | `else { \| uVar2 = *puVar3 & 0xfffffffd; \| } \| *puVar3 = ((uVar2 & 0x8000ffff) + 0x1000000 & 0xffff8fff) + 0x2000 & 0xfffffff7; \| uVar2 = FUN_` |
| kernel.c | 1216987 | `uVar7 = 0x100; \| } \| else if (iVar3 == 6) { \| uVar7 = 0x200; \| } \| else if (iVar3 == 7) { \| uVar7 = 0x400;` |
| kernel.c | 1217005 | `uVar7 = 0x1800; \| } \| else if (iVar3 == 0xc) { \| uVar7 = 0x2000; \| } \| else if (iVar3 == 0xd) { \| uVar7 = 0x3000;` |
| kernel.c | 1217029 | `uVar7 = 0x18000; \| } \| else if (iVar3 == 0x14) { \| uVar7 = 0x20000; \| } \| else if (iVar3 == 0x15) { \| uVar7 = 0x30000;` |
| kernel.c | 1217175 | `uVar7 = 0x100; \| } \| else if (iVar3 == 6) { \| uVar7 = 0x200; \| } \| else if (iVar3 == 7) { \| uVar7 = 0x400;` |
| kernel.c | 1217193 | `uVar7 = 0x1800; \| } \| else if (iVar3 == 0xc) { \| uVar7 = 0x2000; \| } \| else if (iVar3 == 0xd) { \| uVar7 = 0x3000;` |
| kernel.c | 1217217 | `uVar7 = 0x18000; \| } \| else if (iVar3 == 0x14) { \| uVar7 = 0x20000; \| } \| else if (iVar3 == 0x15) { \| uVar7 = 0x30000;` |
| kernel.c | 1218149 | `uVar6 = 0x100; \| } \| else if (bVar2 == 6) { \| uVar6 = 0x200; \| } \| else if (bVar2 == 7) { \| uVar6 = 0x400;` |
| kernel.c | 1218167 | `uVar6 = 0x1800; \| } \| else if (bVar2 == 0xc) { \| uVar6 = 0x2000; \| } \| else if (bVar2 == 0xd) { \| uVar6 = 0x3000;` |
| kernel.c | 1218191 | `uVar6 = 0x18000; \| } \| else if (bVar2 == 0x14) { \| uVar6 = 0x20000; \| } \| else if (bVar2 == 0x15) { \| uVar6 = 0x30000;` |
| kernel.c | 1218343 | `uVar6 = 0x100; \| } \| else if (bVar2 == 6) { \| uVar6 = 0x200; \| } \| else if (bVar2 == 7) { \| uVar6 = 0x400;` |
| kernel.c | 1218361 | `uVar6 = 0x1800; \| } \| else if (bVar2 == 0xc) { \| uVar6 = 0x2000; \| } \| else if (bVar2 == 0xd) { \| uVar6 = 0x3000;` |
| kernel.c | 1218385 | `uVar6 = 0x18000; \| } \| else if (bVar2 == 0x14) { \| uVar6 = 0x20000; \| } \| else if (bVar2 == 0x15) { \| uVar6 = 0x30000;` |
| kernel.c | 1218777 | `if (*(int *)(iVar10 + 0x18) == 0) { \| uVar4 = 0; \| do { \| iVar12 = *piVar2 + uVar4 * 0x200; \| if (((*(byte *)(iVar12 + 0x14) & 1) != 0) && \|` |
| kernel.c | 1218782 | `(*(short *)(iVar10 + 0x1c) == *(short *)(iVar12 + 2))) { \| puVar8[uVar6 * 2 + 6] = 0; \| *(undefined2 *)(puVar8 + uVar6 * 2 + 7) = \| *(undefi` |
| kernel.c | 1218870 | `if (*(int *)(iVar10 + 0x18) == 0) { \| uVar4 = 0; \| do { \| iVar12 = *piVar2 + uVar4 * 0x200; \| if (((*(byte *)(iVar12 + 0x14) & 1) != 0) && \|` |
| kernel.c | 1218875 | `(*(short *)(iVar10 + 0x1c) == *(short *)(iVar12 + 2))) { \| puVar8[uVar6 * 2 + 6] = 0; \| *(undefined2 *)(puVar8 + uVar6 * 2 + 7) = \| *(undefi` |
| kernel.c | 1220475 | `pcVar1 = DAT_00798e44; \| uVar6 = 0; \| do { \| if ((*(byte *)(*piVar2 + uVar6 * 0x200 + 0x14) & 1) != 0) { \| uVar4 = FUN_0069d3f0(); \| iVar5 =` |
| kernel.c | 1220477 | `do { \| if ((*(byte *)(*piVar2 + uVar6 * 0x200 + 0x14) & 1) != 0) { \| uVar4 = FUN_0069d3f0(); \| iVar5 = FUN_0069eece(*(undefined2 *)(*piVar2 ` |
| kernel.c | 1220480 | `iVar5 = FUN_0069eece(*(undefined2 *)(*piVar2 + uVar6 * 0x200),uVar4); \| if (iVar5 != 0) { \| iVar5 = param_1 + uVar6 * 8; \| *(undefined2 *)(i` |
| kernel.c | 1220481 | `if (iVar5 != 0) { \| iVar5 = param_1 + uVar6 * 8; \| *(undefined2 *)(iVar5 + 2) = *(undefined2 *)(*piVar2 + uVar6 * 0x200 + 2); \| *(undefined2` |
| kernel.c | 1220482 | `iVar5 = param_1 + uVar6 * 8; \| *(undefined2 *)(iVar5 + 2) = *(undefined2 *)(*piVar2 + uVar6 * 0x200 + 2); \| *(undefined2 *)(param_1 + uVar6 ` |
| kernel.c | 1220483 | `*(undefined2 *)(iVar5 + 2) = *(undefined2 *)(*piVar2 + uVar6 * 0x200 + 2); \| *(undefined2 *)(param_1 + uVar6 * 8) = *(undefined2 *)(*piVar2 ` |
| kernel.c | 1220484 | `*(undefined2 *)(param_1 + uVar6 * 8) = *(undefined2 *)(*piVar2 + uVar6 * 0x200); \| *(undefined1 *)(iVar5 + 4) = *(undefined1 *)(*piVar2 + uV` |
| kernel.c | 1220485 | `*(undefined1 *)(iVar5 + 4) = *(undefined1 *)(*piVar2 + uVar6 * 0x200 + 0x22); \| *(bool *)(iVar5 + 7) = *(char *)(*piVar2 + uVar6 * 0x200 + 0` |
| kernel.c | 1220489 | `} \| } \| if ('\x01' < *pcVar1) { \| iVar5 = *piVar2 + uVar6 * 0x200; \| FUN_006f4c52(0x21,uVar3,3,*(undefined2 *)(iVar5 + 2),uVar6,*(byte *)(iV` |
| kernel.c | 1220525 | `uVar8 = 0; \| do { \| if ((**(uint **)(iVar4 + 8) & 1 << uVar8) != 0) { \| iVar6 = *piVar2 + uVar8 * 0x200; \| if ((*(uint *)(iVar6 + 0x14) & 1)` |
| kernel.c | 1220585 | `if ((1 << uVar7 & local_28) != 0) { \| uVar6 = 0; \| do { \| iVar2 = *DAT_00798e48 + uVar6 * 0x200; \| if (((*(byte *)(iVar2 + 0x14) & 1) != 0) ` |
| kernel.c | 1220615 | `uVar6 = 0; \| iVar5 = iVar8 + uVar7 * 2; \| do { \| iVar4 = iVar12 + uVar6 * 0x200; \| if (((*(byte *)(iVar4 + 0x14) & 1) != 0) && \| (*(short *)` |
| kernel.c | 1220727 | `param_1[2] = uVar8; \| iVar4 = *piVar1; \| while( true ) { \| puVar6 = (ushort *)(iVar4 + uVar5 * 0x200); \| bVar9 = (puVar6[10] & 1) != 0; \| if` |
| kernel.c | 1220758 | `return uVar3; \| } \| } \| sVar7 = *(short *)(iVar4 + uVar5 * 0x200); \| goto LAB_00798dbc; \| } \| ` |
| kernel.c | 1220791 | `} \| iVar5 = 0; \| do { \| puVar8 = (ushort *)(*DAT_00798e48 + iVar5 * 0x200); \| bVar10 = (puVar8[10] & 1) != 0; \| if (bVar10) { \| puVar8 = (us` |
| kernel.c | 1220797 | `puVar8 = (ushort *)(uint)*puVar8; \| } \| if (bVar10 && puVar8 != (ushort *)0x0) { \| *param_1 = *(short *)(*DAT_00798e48 + iVar5 * 0x200); \| b` |
| kernel.c | 1221001 | `iVar3 = iVar6 + uVar5 * 8; \| *(undefined4 *)(iVar3 + 0x328) = 0; \| do { \| iVar4 = *piVar1 + uVar2 * 0x200; \| if ((((&DAT_00004014)[iVar4] & ` |
| kernel.c | 1222840 | `do { \| if ((**(uint **)(iVar1 + 8) & 1 << uVar6) != 0) { \| if ('\x01' < *pcVar2) { \| FUN_006f4c52(0x21,uVar3,3,uVar6,*(undefined2 *)(*piVar4` |
| kernel.c | 1222843 | `FUN_006f4c52(0x21,uVar3,3,uVar6,*(undefined2 *)(*piVar4 + uVar6 * 0x200 + 2), \| *(undefined2 *)(*piVar4 + 0x8002)); \| } \| if (*(short *)(*pi` |
| kernel.c | 1223638 | `do { \| piVar3 = DAT_0079b9b4; \| piVar2 = DAT_0079b9a8; \| iVar12 = *DAT_0079b9b4 + uVar15 * 0x200; \| if ((((*(byte *)(iVar12 + 0x14) & 1) != ` |
| kernel.c | 1223687 | `goto LAB_0079b7e6; \| } \| *(undefined4 *)(local_390 + iVar12 + -4) = 2; \| uVar9 = (int)*(char *)(*piVar3 + uVar15 * 0x200 + 0x22) - (int)*(sh` |
| kernel.c | 1223755 | `if ((int)sVar7 <= *(int *)(iVar12 + 4)) { \| uVar19 = 0x20; \| do { \| psVar11 = (short *)(*piVar3 + uVar19 * 0x200); \| sVar1 = *psVar11; \| bVa` |
| kernel.c | 1223790 | `if ((int)sVar7 <= *(int *)(iVar12 + 8)) { \| uVar19 = 0x20; \| do { \| psVar11 = (short *)(*piVar3 + uVar19 * 0x200); \| sVar1 = *psVar11; \| bVa` |
| kernel.c | 1223903 | `*(short *)(iVar4 + 8) = sVar8; \| *(undefined2 *)(iVar4 + 10) = 0; \| if ((*(uint *)(puVar12 + uVar10 * 0x14 + 10) & 0x1000) == 0) { \| if ((*(` |
| kernel.c | 1226372 | `FUN_00384d8e(param_1,1); \| } \| LAB_007a014c: \| FUN_00384b26(param_1,2,0x200); \| return; \| } \| ` |
| kernel.c | 1226933 | `FUN_00672ed2(*(undefined1 *)(param_1 + 0x424),(int)*(short *)(param_1 + 0x454), \| *(undefined1 *)(param_1 + 0x415),*(undefined1 *)(param_1 +` |
| kernel.c | 1227322 | `FUN_00672ed2(*(undefined1 *)(param_1 + 0x424),(int)*(short *)(param_1 + 0x454), \| *(undefined1 *)(param_1 + 0x415),*(undefined1 *)(param_1 +` |
| kernel.c | 1229204 | `iVar3 = *(int *)(iVar3 + param_1 * 4); \| goto LAB_007a5a32; \| } \| iVar4 = iVar1 * 0x3ac + 0x200; \| FUN_007a5818(*(undefined4 *)(iVar2 + iVar` |
| kernel.c | 1229473 | `iVar4 = iVar3 * 0x3ac + 0x204; \| FUN_007a5818(*(undefined4 *)(iVar2 + iVar4)); \| *(undefined4 *)(*(int *)(iVar1 + param_1 * 4) + iVar4) = 0;` |
| kernel.c | 1229527 | `iVar5 = uVar4 * 0x3ac + 0x204; \| FUN_007a5818(*(undefined4 *)(iVar3 + iVar5)); \| *(undefined4 *)(*(int *)(iVar1 + param_1 * 4) + iVar5) = 0;` |
| kernel.c | 1236421 | `local_1c[0] = param_1; \| local_18 = param_2; \| FUN_00a4c40c(&local_24,local_1c); \| *(short *)(*piVar1 + 0x2a0) = (short)((local_20 + 7U) * 0` |
| kernel.c | 1236519 | `local_20 = 0x10; \| FUN_00a4c37c(&local_24,&local_2c); \| (*(code *)*DAT_007b81e0)(local_28,0,0x31,0x14f); \| *(short *)(*piVar1 + 0x2a0) = (sh` |
| kernel.c | 1237899 | ` \| piVar1 = DAT_007bbcc4; \| iVar2 = (((*param_1 >> 0x13) - ((uint)DAT_007bbcc4[2] >> 0x13)) + \| (param_1[1] - DAT_007bbcc4[3]) * 0x2000) * 0` |
| kernel.c | 1238105 | `undefined4 uVar1; \|  \| uVar1 = 0; \| if (((DAT_007bc104 == *(int *)(param_1 + 0x14) * 0x2000) && \| (DAT_007bc104 >> 0x13 == *(uint *)(param_1` |
| kernel.c | 1238349 | `int iVar3; \|  \| *param_3 = '\x01'; \| iVar2 = param_1[1] * 0x2000 + (*param_1 >> 0x13); \| iVar3 = param_2[1] * 0x2000 + (*param_2 >> 0x13); \|` |
| kernel.c | 1238350 | ` \| *param_3 = '\x01'; \| iVar2 = param_1[1] * 0x2000 + (*param_1 >> 0x13); \| iVar3 = param_2[1] * 0x2000 + (*param_2 >> 0x13); \| uVar1 = iVar` |
| kernel.c | 1241063 | `puVar5 = puVar12; \| puVar1 = puVar11 + -1; \| iVar10 = iVar9; \| while (iVar10 = iVar10 + -0x200, iVar4 = iVar9, iVar6 = iVar9, -1 < iVar10) {` |
| kernel.c | 1241073 | `iVar8 = iVar8 - iVar7; \| } \| } \| for (; iVar4 < (int)(param_3 << 9); iVar4 = iVar4 + 0x200) { \| if (iVar4 < iVar6) { \| *puVar11 = *puVar12; ` |
| kernel.c | 1241221 | `puVar2 = (undefined2 *)(param_1 + iVar5 * 2 + param_5 * 2); \| iVar5 = iVar6; \| iVar3 = iVar6; \| while (iVar3 = iVar3 + -0x200, -1 < iVar3) {` |
| kernel.c | 1241235 | `puVar7 = (undefined2 *)(param_1 + iVar5 * 2 + param_5 * 2); \| puVar2 = (undefined2 *)(param_2 + iVar5 * 2 + param_5 * 2); \| iVar3 = iVar6; \|` |
| kernel.c | 1242129 | `int iVar10; \| undefined2 *puVar11; \|  \| iVar1 = param_3 * 0x200 >> 1; \| if (param_11 == 0) { \| iVar3 = 1; \| }` |
| kernel.c | 1242156 | `puVar11 = (undefined2 *)(param_8 + iVar9 * (iVar5 + -1) * 2 + iVar6 * 2 + param_4 * -2); \| iVar7 = iVar1; \| iVar2 = iVar1; \| while (iVar2 = ` |
| kernel.c | 1242169 | `puVar8 = (undefined2 *)(param_1 + iVar5 * param_2 * 2 + iVar6 * 2); \| puVar11 = (undefined2 *)(param_8 + iVar9 * iVar5 * 2 + iVar6 * 2 + par` |
| kernel.c | 1242541 | `iVar1 = DAT_007c4f8c; \| iVar4 = *(int *)(DAT_007c4fcc + param_2 * 4); \| if (-1 < iVar4 << 0xc) { \| if ((iVar4 * 0x200000 < 0) && (iVar4 << 9` |
| kernel.c | 1242557 | `} \| goto LAB_007c4cbe; \| } \| if (iVar4 * 0x200000 < 0) { \| if (iVar4 * 0x200 < 0) { \| uVar5 = *(uint *)(DAT_007c4f8c + 0x2c) % 3; \| if (uVar` |
| kernel.c | 1242558 | `goto LAB_007c4cbe; \| } \| if (iVar4 * 0x200000 < 0) { \| if (iVar4 * 0x200 < 0) { \| uVar5 = *(uint *)(DAT_007c4f8c + 0x2c) % 3; \| if (uVar5 ==` |
| kernel.c | 1242568 | `*param_1 = 0; \| } \| else { \| if ((iVar4 * 0x200 < 0) && ((*(byte *)(DAT_007c4f8c + 0x2c) & 1) != 0)) goto LAB_007c4cc6; \| LAB_007c4cb6: \| *p` |
| kernel.c | 1257769 | `int iVar2; \|  \| iVar2 = FUN_007d9b38(); \| uVar1 = *(ushort *)(iVar2 + 0x4e) & 0x200; \| if ((*(ushort *)(iVar2 + 0x4e) & 0x200) != 0) { \| uVa` |
| kernel.c | 1257770 | ` \| iVar2 = FUN_007d9b38(); \| uVar1 = *(ushort *)(iVar2 + 0x4e) & 0x200; \| if ((*(ushort *)(iVar2 + 0x4e) & 0x200) != 0) { \| uVar1 = 1; \| } \|` |
| kernel.c | 1265285 | `} \| else if (puVar2 == (undefined *)0xa114) { \| FUN_007e61d8(); \| uVar3 = *(byte *)(iVar1 + 8) \| 0x2000; \| } \| else { \| if (puVar2 != (undef` |
| kernel.c | 1266576 | `FUN_0061f144(0x7f); \| FUN_0097f5b0(); \| FUN_00105a80(0x1a,1,0); \| uVar8 = bVar3 \| 0x2000; \| break; \| case 2: \| FUN_007e7382(DAT_007e76a0);` |
| kernel.c | 1267287 | `FUN_007e902c((int)(char)uVar4,uVar2 & 0xffff); \| } \| uVar2 = uVar2 + 1; \| } while (uVar2 < 0x200); \| } \| else if (param_1 == 1) { \| FUN_006a` |
| kernel.c | 1267475 | `*(undefined2 *)(iVar1 + 8) = 0; \| } \| uVar2 = uVar2 + 1; \| } while (uVar2 < 0x200); \| } \| } \| else if ((param_1 - 4 < 4) && (*(char *)(DAT_0` |
| kernel.c | 1267486 | `*(undefined2 *)(iVar1 + 8) = 0; \| } \| uVar2 = uVar2 + 1; \| } while (uVar2 < 0x200); \| } \| return; \| }` |
| kernel.c | 1267538 | `int local_28; \|  \| pcVar3 = DAT_007e9924; \| uVar8 = 0x200; \| if ((*(int *)(DAT_007e993c + param_1 * 0x24) != 0) \|\| \| (*(char *)(DAT_007e9940` |
| kernel.c | 1267585 | `} \| uVar7 = uVar7 + 1; \| if (0x1ff < uVar7) { \| if (uVar8 == 0x200) { \| return 0; \| } \| if (uVar9 != 0xffffffff) {` |
| kernel.c | 1268014 | `iVar6 = *(int *)(iVar8 + 0x208); \| if (iVar6 != *DAT_007ea8a4) { \| *DAT_007ea8a4 = iVar6; \| uVar4 = *(uint *)(iVar8 + 0x200); \| if ('\x01' <` |
| kernel.c | 1268164 | `FUN_006f4d8e(); \| piVar1 = DAT_007ead9c; \| *(uint *)(*DAT_007ead9c + 0xc) = \| ((((*(uint *)(*DAT_007ead9c + 0xc) & 0xfffffcff) + 0x200 & 0xf` |
| kernel.c | 1268168 | `8 & 0xfffffffc) + 2; \| *(uint *)*piVar1 = (*(uint *)*piVar1 & 0xffffffe0 \| 0x60) + 0x17; \| *(uint *)(*piVar1 + 0x80c) = \| ((((*(uint *)(*piV` |
| kernel.c | 1268471 | `*(uint *)(DAT_007eb5ec + 0x44) = uVar5; \| *(uint *)(*piVar1 + 0x44) = uVar5; \| FUN_00379826(10); \| uVar5 = *(uint *)(iVar2 + 0x44) & 0xfffdf` |
| kernel.c | 1268511 | `local_14 = param_4; \| FUN_007e5db4(&local_18,&local_14); \| uVar2 = ((local_14 & 0xffff) - (uint)*(ushort *)(param_1 + 2)) + (local_18 - para` |
| kernel.c | 1271318 | `piVar1 = DAT_007f00bc; \| uVar5 = 0; \| do { \| puVar2 = (undefined2 *)(*piVar1 + uVar5 * 0x200); \| if (((*(byte *)(puVar2 + 10) & 1) != 0) && ` |
| kernel.c | 1271321 | `puVar2 = (undefined2 *)(*piVar1 + uVar5 * 0x200); \| if (((*(byte *)(puVar2 + 10) & 1) != 0) && (iVar3 = FUN_006a26b4(*puVar2), iVar3 == 0)) ` |
| kernel.c | 1272380 | `if (!bVar7) { \| uVar6 = (uint)*(ushort *)(*piVar1 + 0x83a); \| } \| if (bVar7 \|\| uVar6 != 0x200) { \| return; \| } \| }` |
| kernel.c | 1273785 | `FUN_006f3e8a(iVar7,*(undefined4 *)(iVar6 + 0xe10),*piVar14 * 0x94); \| iVar6 = thunk_FUN_006daf26(); \| if (iVar6 == 1) { \| *(uint *)(iVar11 +` |
| kernel.c | 1273789 | `for (; uVar13 < *puVar12; uVar13 = uVar13 + 1) { \| iVar6 = uVar13 * 0x94 + 0x2c; \| uVar10 = *(uint *)(*(int *)(iVar11 + 0x824) + iVar6); \| *` |
| kernel.c | 1273790 | `iVar6 = uVar13 * 0x94 + 0x2c; \| uVar10 = *(uint *)(*(int *)(iVar11 + 0x824) + iVar6); \| *(uint *)(*(int *)(iVar11 + 0x824) + iVar6) = uVar10` |
| kernel.c | 1274842 | `*(undefined4 *)(iVar1 + 0x14) = 0; \| *(undefined1 *)(iVar1 + 10) = *(undefined1 *)(iVar1 + 0xb); \| *(undefined4 *)(iVar1 + 0x24) = *(undefin` |
| kernel.c | 1275085 | `} \| iVar4 = DAT_007f4894 + uVar6 * 0x600; \| for (uVar3 = 0; uVar3 < uVar8; uVar3 = uVar3 + 1 & 0xff) { \| *(char *)(iVar4 + uVar5 * 0x200 + (` |
| kernel.c | 1275202 | `return 0; \| } \| for (uVar10 = 0; uVar10 < *(byte *)(iVar11 + 10); uVar10 = uVar10 + 1 & 0xff) { \| bVar2 = *(byte *)(DAT_007f4894 + param_2 *` |
| kernel.c | 1275208 | `return 0; \| } \| for (uVar9 = 0; uVar9 < *(byte *)(iVar8 + 10); uVar9 = uVar9 + 1 & 0xff) { \| bVar3 = *(byte *)(DAT_007f4894 + iVar6 * 0x600 ` |
| kernel.c | 1275461 | `*(undefined2 *)(iVar5 + 0x2e) = 0; \| *(undefined4 *)(iVar5 + 0x30) = 0; \| *(undefined4 *)(iVar5 + 0x34) = uVar2; \| *(char *)(DAT_007f4da0 + ` |
| kernel.c | 1275571 | `if (*(char *)((int)param_1 + 5) == '\x06') { \| if (*(int *)(iVar7 + 0x24) != 2) { \| bVar2 = true; \| FUN_003c9d34(DAT_007f52b0 + uVar8 * 0x60` |
| kernel.c | 1275601 | `thunk_FUN_006fb59e(s__INVALID_W_PGC_>_pgc__007f52e4,s_dmwgwcellinfo_c_007f4d68,0x18b, \| uVar13); \| } \| *(char *)(DAT_007f52b0 + uVar8 * 0x60` |
| kernel.c | 1275606 | `FUN_006f4b10(0x15,DAT_007f52c0 + 2,&DAT_007f48cc,uVar16,uVar17,uVar12); \| } \| } \| uVar14 = (uint)*(byte *)(DAT_007f52b0 + uVar8 * 0x600 + uV` |
| kernel.c | 1275668 | `*(undefined4 *)(iVar7 + 0x24) = 2; \| iVar9 = DAT_007f4da0; \| *(undefined1 *)(iVar7 + 10) = 0; \| FUN_003c9d34(iVar9 + uVar8 * 0x600 + uVar16 ` |
| kernel.c | 1276581 | `} \| else if (local_38[0] == 2) { \| *(undefined4 *)(puVar3 + 2) = 1; \| puVar3[4] = 0x200; \| *(undefined4 *)(puVar3 + 8) = 0; \| *puVar3 = loca` |
| kernel.c | 1276760 | `*(uint *)(puVar8 + 200) = local_3c; \| FUN_007f6126(1,iVar6); \| *(undefined4 *)(puVar8 + 2) = 1; \| puVar8[4] = 0x200; \| *(undefined4 *)(puVar` |
| kernel.c | 1277215 | `uVar1 = param_1[uVar7 * 0x26 + uVar6 + 8]; \| *(ushort *)(iVar4 + 0x30) = uVar1; \| *(short *)(iVar4 + 0x32) = param_1[uVar7 * 0x26 + uVar6 + ` |
| kernel.c | 1277559 | `uVar10 = extraout_r12; \| for (uVar6 = 0; uVar6 < bVar1; uVar6 = uVar6 + 1 & 0xff) { \| iVar3 = iVar7 + uVar6 * 0x10; \| uVar2 = (uint)*(byte *` |
| kernel.c | 1278860 | `else if ((param_2[6] & 0x7f) >> 4 == 1) { \| param_2[0xc] = uVar9 & 0x1ffff \| 0x8dc0000; \| } \| param_2[0xd] = param_2[0xd] & 0x1ffff \| ((para` |
| kernel.c | 1278867 | `uVar1 = iVar8 * 0x9600000; \| iVar8 = iVar8 * 0x4b0 + 0x4af; \| param_2[0xc] = uVar9 & 0x1ffff \| uVar1; \| param_2[0xd] = param_2[0xd] & 0x1fff` |
| kernel.c | 1285571 | `uVar1 = (uint)*(ushort *)(param_1 + 0x1c); \| goto LAB_0080165a; \| case 6: \| if (0x175 < *(ushort *)(param_1 + 0x1c) - 0x200) goto switchD_00` |
| kernel.c | 1285574 | `if (0x175 < *(ushort *)(param_1 + 0x1c) - 0x200) goto switchD_00801612_caseD_4; \| goto switchD_00801612_caseD_1; \| case 7: \| if (0x12a < *(u` |
| kernel.c | 1285583 | `uVar1 = (uint)*(ushort *)(param_1 + 0x1c); \| if (uVar1 - 0x80 < 0x7c) goto switchD_00801612_caseD_4; \| LAB_0080165a: \| if (uVar1 - 0x200 < 2` |
| kernel.c | 1285599 | `uVar1 = (uint)*(ushort *)(param_1 + 0x1c); \| if (uVar1 - 0x80 < 0x7c) goto switchD_00801612_caseD_4; \| LAB_00801696: \| uVar1 = uVar1 - 0x200` |
| kernel.c | 1285610 | `return 0; \| case 0xe: \| if (*(ushort *)(param_1 + 0x1c) - 0x80 < 0x7c) goto switchD_00801612_caseD_4; \| uVar1 = *(ushort *)(param_1 + 0x1c) ` |
| kernel.c | 1285613 | `uVar1 = *(ushort *)(param_1 + 0x1c) - 0x200; \| goto LAB_0080167c; \| } \| if (uVar1 - 0x200 < 0x176) { \| switchD_00801612_caseD_1: \| return *(` |
| kernel.c | 1288325 | `} \| iVar4 = FUN_0096a322(&local_58); \| piVar1 = DAT_00804b18; \| local_2c[0] = (undefined2)((iVar4 + 7U) * 0x2000 >> 0x10); \| if (*(int *)(*D` |
| kernel.c | 1288387 | `local_2f = (undefined1)param_1; \| iVar2 = FUN_0096a352(&local_30); \| piVar1 = DAT_00804b18; \| local_24[0] = (undefined2)((iVar2 + 7U) * 0x20` |
| kernel.c | 1289271 | `local_38 = DAT_008074a4; \| iVar15 = DAT_008074a8; \| LAB_008071ec: \| *puVar7 = 0x20000000; \| } \| else { \| if (param_3 == 1) {` |
| kernel.c | 1289399 | `pcVar1 = DAT_0080746c; \| iVar5 = 0; \| do { \| uVar4 = *(uint *)(local_28[iVar5] + 0x10) \| 0x200; \| *(uint *)(local_28[iVar5] + 0x10) = uVar4;` |
| kernel.c | 1289692 | `puVar8 = puVar10; \| } \| if (param_3 < 2) { \| *puVar8 = 0x20000000; \| } \| else { \| FUN_006f18c4(s_PS_layer1_wlayer1_V2_hal_baseban_00807434,0` |
| kernel.c | 1292430 | `*(undefined1 *)(iVar1 + 0x1fd) = 0xff; \| *(undefined1 *)(iVar1 + 0x1fe) = 0xff; \| *(undefined1 *)(iVar1 + 0x1ff) = 0xff; \| *(undefined1 *)(i` |
| kernel.c | 1298699 | `uVar6 = (uint)*puVar3; \| *puVar4 = puVar4[uVar6 * 0xfc + 0x1fe]; \| puVar4[1] = puVar4[uVar6 * 0xfc + 0x1ff]; \| puVar4[2] = puVar4[uVar6 * 0x` |
| kernel.c | 1298963 | `} while (uVar8 < 2); \| uVar8 = (uint)*(byte *)(*piVar2 + (uint)*puVar1 * 0xf7b8 + 0x245); \| if (local_2c != 0) { \| if (-1 < (int)(uVar8 * 0x` |
| kernel.c | 1298999 | `*(int *)(iVar9 + 0x180) = local_70; \| return; \| } \| if ((int)(uVar8 * 0x20000000) < 0) { \| if ((char)*piVar3 < '\x03') goto LAB_00816182; \| ` |
| kernel.c | 1304885 | `iVar13 = DAT_008227d8 + uVar14 * 0x68; \| *piVar5 = iVar13; \| *DAT_008227e0 = DAT_008227dc + uVar14 * 0x1dc0; \| *DAT_008227ec = DAT_008227e8 ` |
| kernel.c | 1305814 | `uVar15 = FUN_00495ddc(*puVar12,0,0,uVar11); \| iVar7 = FUN_0036e200(); \| if ((iVar7 == 0) \|\| (iVar7 = FUN_0049762a(), iVar7 == 0)) { \| if ((p` |
| kernel.c | 1305834 | `if (0x1f < uVar13) break; \| } \| uVar14 = uVar14 + 1; \| } while (uVar14 < 0x200); \| if ('\x01' < *pcVar1) { \| FUN_006f4c52(0x1f,DAT_00824228,` |
| kernel.c | 1307990 | `iVar13 = FUN_0096a462(&local_58); \| local_60 = 0x14a; \| local_5c = 0xb2; \| local_28 = CONCAT22(local_28._2_2_,(short)((iVar13 + 7U) * 0x2000` |
| kernel.c | 1308109 | `LAB_00827100: \| FUN_006f3e8a(local_6c,(int)puVar14 + 1,local_70._1_1_); \| iVar13 = FUN_0096a366(&local_70); \| local_54 = CONCAT22(local_54._` |
| kernel.c | 1308269 | `FUN_006f3e8a(local_38,(int)&local_24 + 1,local_48._2_1_); \| } \| iVar13 = FUN_0096a302(&local_48); \| local_28 = CONCAT22(local_28._2_2_,(shor` |
| kernel.c | 1308426 | `local_90 = auStack_88; \| local_8c = 0; \| FUN_0098aafe(&local_90,*piVar8 + 0x788); \| local_12f = (undefined1)((uint)((local_8c + 7) * 0x20000` |
| kernel.c | 1308588 | `LAB_008278b6: \| local_11f = 0; \| iVar13 = FUN_0096a370(&local_130); \| local_30 = (undefined4 *)CONCAT22(local_30._2_2_,(short)((iVar13 + 7U)` |
| kernel.c | 1308794 | `local_9c = &local_94; \| local_98 = 0; \| FUN_0098aafe(&local_9c,*piVar8 + 0x788); \| local_12b = (undefined1)((uint)((local_98 + 7) * 0x200000` |
| kernel.c | 1308891 | `local_112 = 0; \| } \| iVar13 = FUN_0096a248(&local_130); \| local_30 = (undefined4 *)CONCAT22(local_30._2_2_,(short)((iVar13 + 7U) * 0x2000 >>` |
| kernel.c | 1310614 | `{ \| int iVar1; \|  \| iVar1 = *DAT_0082a0c4 + param_1 * 0x200; \| if ((*(byte *)(iVar1 + 0x14) & 1) != 0) { \| FUN_006fe9dc(iVar1,0x200); \| retu` |
| kernel.c | 1310616 | ` \| iVar1 = *DAT_0082a0c4 + param_1 * 0x200; \| if ((*(byte *)(iVar1 + 0x14) & 1) != 0) { \| FUN_006fe9dc(iVar1,0x200); \| return; \| } \| return;` |
| kernel.c | 1315127 | `uVar3 = puVar1[7]; \| puVar1[7] = uVar3 & 0xfff80000; \| *(uint *)(*(int *)(iVar2 + 0x44) + 0x1c) = uVar3 & 0xfff80000; \| uVar3 = (*puVar1 & 0` |
| kernel.c | 1315173 | `puVar2[2] = *(uint *)(iVar5 + param_2 * 4); \| FUN_00744974(uVar3); \| *(uint *)(*(int *)(iVar1 + 0x40) + 8) = puVar2[2]; \| uVar4 = (byte)puVa` |
| kernel.c | 1317629 | `local_29 = 0; \| local_25 = 0; \| local_24 = ((((local_24 & 0xffe0ffff) + 0x40000 & 0xff1fffff) + 0x600000 & 0xf0ffffff) + 0x4000000 \| & 0xfff` |
| kernel.c | 1320479 | `0xb0000000 >> 0x10),0x2a); \| iVar3 = FUN_007ebf2e(local_28,param_2); \| FUN_0083af14(param_2); \| local_2c = (undefined1)((iVar3 + 7U) * 0x200` |
| kernel.c | 1321230 | `} \| if (7 < uVar6) { \| if (uVar6 == 10) { \| if ((*(ushort *)(iVar7 + 0x1ec) & 0x200) == 0) goto LAB_0083c7f0; \| pcVar8 = pcVar5 + (uint)(byt` |
| kernel.c | 1321588 | `piVar4 = DAT_0083d88c; \| } \| do { \| puVar13 = (ushort *)(*piVar4 + uVar14 * 0x200); \| if ((puVar13[10] & 1) != 0) { \| uVar16 = 0; \| uVar8 = ` |
| kernel.c | 1321600 | `} while (uVar16 < uVar15); \| } \| iVar9 = FUN_006a26b4(); \| if ((iVar9 == 0) && (*(short *)(*piVar4 + uVar14 * 0x200) != 0)) { \| uVar11 = FUN` |
| kernel.c | 1321602 | `iVar9 = FUN_006a26b4(); \| if ((iVar9 == 0) && (*(short *)(*piVar4 + uVar14 * 0x200) != 0)) { \| uVar11 = FUN_0069d3f0(); \| iVar9 = FUN_0069ee` |
| kernel.c | 1321605 | `iVar9 = FUN_0069eece(*(undefined2 *)(*piVar4 + uVar14 * 0x200),uVar11); \| if (iVar9 != 0) { \| ((ushort *)piVar6[2])[*(ushort *)piVar6[2] + 0` |
| kernel.c | 1321607 | `((ushort *)piVar6[2])[*(ushort *)piVar6[2] + 0x20] = \| *(ushort *)(*piVar4 + uVar14 * 0x200); \| uVar11 = FUN_0069d3f0(); \| uVar7 = FUN_0069e` |
| kernel.c | 1321611 | `*(undefined1 *)(piVar6[2] + *(ushort *)piVar6[2] + 4) = uVar7; \| *(short *)piVar6[2] = *(short *)piVar6[2] + 1; \| if ('\0' < *pcVar5) { \| FU` |
| kernel.c | 1322758 | `if ('\0' < *DAT_0083f41c) { \| FUN_006f4c52(0x21,DAT_0083f420,2,local_90,local_89); \| } \| local_8e = 0x200; \| } \| else if (*(int *)(puVar3 + ` |
| kernel.c | 1322763 | `else if (*(int *)(puVar3 + 4) == 3) { \| local_90 = puVar3[(uint)*puVar3 * 3 + 7]; \| local_89 = (undefined1)puVar3[(uint)*puVar3 * 3 + 9]; \| ` |
| kernel.c | 1322888 | `if (*(ushort *)(iVar6 + 0x2188) != 0) { \| do { \| iVar8 = iVar6 + uVar5 * 10; \| uVar9 = iVar8 + 0x2000; \| bVar12 = *(ushort *)(iVar8 + 0x218a` |
| kernel.c | 1323077 | `iVar17 = DAT_0083f8f8 + 1; \| iVar13 = *DAT_0083f8f4; \| if (*(char *)(iVar13 + 0x842) == '\0') { \| if (((*(char *)(iVar13 + 0x836) == '\x01')` |
| kernel.c | 1324507 | `local_48 = uVar5 >> 0x15 \| (uVar4 >> 0xd) << 8 \| uVar3 << 0xb \| uVar1; \| if (param_4 != 0) { \| local_48 = (uVar7 & 0x1fffffff) >> 0x15 \| ((u` |
| kernel.c | 1324667 | `local_38 = uVar5 >> 0x15 \| (uVar4 >> 0xd) << 8 \| uVar3 << 0xb \| uVar1; \| if (param_4 != 0) { \| local_38 = (uVar7 & 0x1fffffff) >> 0x15 \| ((u` |
| kernel.c | 1324972 | `} \| } \| FUN_009a6f34(); \| if (0x2000 < (uint)(iVar3 - param_2)) { \| FUN_006f2c00(0,s_PS_stack_las_l2_mac_hh_mac_hh_c_0084185c,0xd03,s_LOGGER` |
| kernel.c | 1328900 | `FUN_006a7aba(uStack_40,local_44,*(undefined4 *)(iVar6 + 0x8d8), \| *(undefined4 *)(iVar6 + 0x8dc),&local_38); \| pcVar1 = DAT_0084eec4; \| iVar` |
| kernel.c | 1328989 | `puVar7 = (undefined1 *)FUN_006f15ec(0x8c,0x9c,1,0x561,0xf20); \| } \| FUN_006fe9dc(puVar7,0x88); \| local_3c = param_2 + 0x2000; \| puVar7[0x84]` |
| kernel.c | 1329975 | `FUN_006f4c52(0x1d,DAT_00850e38,1,*(undefined4 *)(DAT_00850e34 + 0x10)); \| } \| uVar7 = *(uint *)(DAT_00850e14 + 4) & 0xf2000000 \| \| (*puVar2 ` |
| kernel.c | 1330015 | `if ((*param_1 & 0x40000000) != 0) { \| *DAT_00850e28 = uVar5 \| *DAT_00850e28; \| } \| if ((*param_1 & 0x20000000) != 0) { \| *DAT_00850e24 = uVa` |
| kernel.c | 1330023 | `if ((*param_1 & 0x40000000) != 0) { \| *DAT_00850e2c = uVar5 \| *DAT_00850e2c; \| } \| if ((*param_1 & 0x20000000) != 0) { \| *DAT_00850e20 = uVa` |
| kernel.c | 1330652 | `if (*pcVar1 < '\x02') { \| return; \| } \| uVar7 = *(uint *)(DAT_0085178c + 0x3c8) & 0x200; \| FUN_006f4c52(0x1d,DAT_00851798,5,iVar13,iVar14,*D` |
| kernel.c | 1333066 | `uVar1 = FUN_006fd49c(DAT_00855bbc,param_2); \| thunk_FUN_006fb59e(s_Meas_Period_<__1000_00855bc0,s_wl1c_32k_meas_c_00855b94,0x22,uVar1); \| } ` |
| kernel.c | 1333106 | `uVar6 = param_2; \| if (((*(uint *)(DAT_00855b8c + 4) == param_2) && (uVar8 != 0)) && \| (iVar3 = FUN_0093e2e2(), iVar3 == 0)) { \| if (uVar8 <` |
| kernel.c | 1333254 | `piVar4[0xb] = local_1c; \| piVar4[0xc] = uStack_18; \| if ('\0' < *pcVar3) { \| iVar5 = uStack_18 * 0x2000; \| uStack_18 = (piVar4[9] & 0x7ffffU` |
| kernel.c | 1333258 | `uStack_18 = (piVar4[9] & 0x7ffffU) >> 3; \| uVar2 = local_1c & 0x7ffff; \| uVar1 = local_1c >> 0x13; \| local_1c = piVar4[10] * 0x2000 + ((uint` |
| kernel.c | 1333340 | `piVar2[0xb] = local_28; \| piVar2[0xc] = local_24; \| if (*pcVar1 < '\x01') goto LAB_00855d82; \| iVar5 = local_24 * 0x2000 + (local_28 >> 0x13` |
| kernel.c | 1333349 | `goto LAB_00855d82; \| } \| if ('\0' < *pcVar1) { \| local_24 = uVar8 * 0x2000 + (uVar7 >> 0x13); \| local_20 = (uVar7 & 0x7ffff) >> 3; \| local_2` |
| kernel.c | 1333352 | `local_24 = uVar8 * 0x2000 + (uVar7 >> 0x13); \| local_20 = (uVar7 & 0x7ffff) >> 3; \| local_28 = (piVar2[0xb] & 0x7ffffU) >> 3; \| FUN_006f4c52` |
| kernel.c | 1333367 | `piVar2[0xf] = local_28; \| piVar2[0x10] = local_24; \| if (*pcVar1 < '\x01') goto LAB_00855d82; \| iVar5 = local_24 * 0x2000 + (local_28 >> 0x1` |
| kernel.c | 1333378 | `uVar7 = local_24; \| FUN_006a77ea(&local_28); \| if ('\0' < *pcVar1) { \| local_24 = local_24 * 0x2000 + (local_28 >> 0x13); \| iVar5 = uVar8 * ` |
| kernel.c | 1333379 | `FUN_006a77ea(&local_28); \| if ('\0' < *pcVar1) { \| local_24 = local_24 * 0x2000 + (local_28 >> 0x13); \| iVar5 = uVar8 * 0x2000 + (uVar7 >> 0` |
| kernel.c | 1333397 | `piVar2[0x13] = local_28; \| piVar2[0x14] = local_24; \| if (*pcVar1 < '\x01') goto LAB_00855d82; \| iVar5 = local_24 * 0x2000 + (local_28 >> 0x` |
| kernel.c | 1333408 | `uVar7 = local_24; \| FUN_006a77ea(&local_28); \| if ('\0' < *pcVar1) { \| local_24 = local_24 * 0x2000 + (local_28 >> 0x13); \| iVar4 = DAT_0085` |
| kernel.c | 1333410 | `if ('\0' < *pcVar1) { \| local_24 = local_24 * 0x2000 + (local_28 >> 0x13); \| iVar4 = DAT_00856068 + 0xb; \| iVar5 = uVar8 * 0x2000 + (uVar7 >` |
| kernel.c | 1341349 | `if (iVar13 != 0x2ca) { \| if (iVar13 < 0x2cb) { \| if (iVar13 != 0x87) { \| iVar5 = iVar13 + -0x200; \| } \| if (iVar13 != 0x87 && iVar5 != 0xc9)` |
| kernel.c | 1342233 | `*puVar6 = uVar9 & 0x80000000; \| *(uint *)*piVar1 = uVar9 & 0x80000000; \| puVar7 = DAT_00863bb0; \| uVar9 = (((puVar6[1] & 0xfcffffff) + 0x200` |
| kernel.c | 1342234 | `*(uint *)*piVar1 = uVar9 & 0x80000000; \| puVar7 = DAT_00863bb0; \| uVar9 = (((puVar6[1] & 0xfcffffff) + 0x2000000 & 0xff3f000 \| 0xc00f000) + ` |
| kernel.c | 1342412 | `uVar9 = puVar6[0x34]; \| puVar6[0x34] = uVar9 & 0xfffffffe; \| *(uint *)(*piVar1 + 0xd0) = uVar9 & 0xfffffffe; \| puVar6[0x2a] = ((puVar6[0x2a]` |
| kernel.c | 1342765 | `uVar5 = (puVar3[0xee] & 0xfffffc3f) + 0x280; \| } \| else { \| uVar5 = (puVar3[0xee] & 0xfffffc3f) + 0x200; \| } \| uVar5 = ((uVar5 & 0xffffc3ff)` |
| kernel.c | 1343300 | `uVar5 = uVar5 & 0xff00ffff \| (uint)*param_2 << 0x10 \| 0x1000000; \| } \| iVar6 = *DAT_008656c8; \| iVar4 = (uVar5 & 0xffffc7f0 \| 0x2000000 \| pa` |
| kernel.c | 1343344 | `uVar3 = (uint)*param_2 << 0x10 \| 0x1004000; \| } \| iVar4 = *(int *)(param_2 + 0xc); \| uVar3 = uVar3 \| 0x2000000 \| (uint)param_2[8]; \| if (iVa` |
| kernel.c | 1343349 | `uVar3 = uVar3 \| 0x300; \| } \| else if (iVar4 == 0x24) { \| uVar3 = uVar3 + 0x200; \| } \| else if (iVar4 == 0x48) { \| uVar3 = uVar3 + 0x100;` |
| kernel.c | 1343417 | `unaff_r5 = (uVar6 & 0xfdffc000) + 0x3000; \| } \| else { \| unaff_r5 = (uVar6 & 0xfdffc200 \| *(ushort *)(param_2 + 8) & 0x1ff \| 0x200) + 0x3000` |
| kernel.c | 1343882 | `int iVar1; \|  \| iVar1 = DAT_00866398; \| *(uint *)(DAT_00866398 + 0x30) = *(uint *)(DAT_00866398 + 0x30) \| 0x200; \| if (*(char *)(param_1 + 0` |
| kernel.c | 1343956 | `*(uint *)(*piVar4 + 0x10) = uVar5; \| *(undefined4 *)(*piVar4 + 0x14) = *(undefined4 *)(iVar3 + 0x14); \| bVar2 = *(byte *)(DAT_008663a8 + 0x1` |
| kernel.c | 1343959 | `uVar5 = (*(uint *)(iVar3 + 0x44) & 0xff000000) + 0x20000 & 0xc0ffffff \| (bVar2 & 7) << 0x1b; \| *(uint *)(iVar3 + 0x44) = uVar5; \| *(uint *)(` |
| kernel.c | 1343990 | `*(uint *)(DAT_00866398 + 0x10) = uVar5; \| *(uint *)(*piVar2 + 0x10) = uVar5; \| iVar3 = DAT_008663a8; \| uVar5 = (*(uint *)(iVar1 + 0x44) & 0x` |
| kernel.c | 1344001 | `uVar5 = (*(uint *)(iVar1 + 0x14) & 0xfffffff8) + 6 & 0xffffffe7; \| *(uint *)(iVar1 + 0x14) = uVar5; \| *(uint *)(*piVar2 + 0x14) = uVar5; \| u` |
| kernel.c | 1345680 | `uint uVar4; \|  \| uVar4 = param_1 - 0x3cf; \| uVar2 = param_1 - 0x200; \| uVar3 = param_1 - 0x80; \| switch(param_2) { \| case 0:` |
| kernel.c | 1346296 | `if (param_1 == 0x100) { \| return DAT_00869040 + 0x1e; \| } \| if (param_1 == 0x200) { \| return DAT_00869040 + 0x24; \| } \| }` |
| kernel.c | 1346344 | `if (param_1 == 0x100) { \| return *(undefined1 *)(DAT_00869040 + -0x24); \| } \| if (param_1 == 0x200) { \| return *(undefined1 *)(DAT_00869040 ` |
| kernel.c | 1346607 | `return; \| } \| } \| else if (((uVar12 != 0x80) && (uVar12 != 0x100)) && (uVar12 != 0x200)) goto LAB_008693d0; \| } \| if (param_2 == (undefined ` |
| kernel.c | 1346831 | `} \| if (uVar2 == 0x20) goto LAB_0086977c; \| } \| else if (((uVar2 == 0x80) \|\| (uVar2 == 0x100)) \|\| (uVar2 == 0x200)) goto LAB_0086977c; \| uVa` |
| kernel.c | 1346925 | `return; \| } \| if (0x40 < uVar5) { \| if (((uVar5 != 0x80) && (uVar5 != 0x100)) && (uVar5 != 0x200)) { \| LAB_008698f4: \| FUN_006f18c4(s_PS_lay` |
| kernel.c | 1347373 | `FUN_004a9cca(param_1); \| if (*(int *)(DAT_0093deb0 + param_1 * 4) << 9 < 0) { \| *(uint *)(DAT_0093debc + param_1 * 4) = \| 0x200 / *(ushort *` |
| kernel.c | 1349576 | `FUN_006f4b10(0x1f,DAT_0086d504,&DAT_0086d500,uVar9); \| } \| uVar10 = *(uint *)(DAT_0086d508 + 4) / \| ((uint)(*(byte *)(DAT_0086d50c + 4) >> 4` |
| kernel.c | 1356605 | `if (param_1 != 0) { \| iVar1 = DAT_0087a85c; \| } \| *(undefined4 *)(iVar1 + 0xcc) = 0x20000; \| return; \| } \| ` |
| kernel.c | 1358922 | `FUN_00379826(10); \| *puVar2 = 0; \| FUN_006a77ea(&local_30); \| *(uint *)(iVar1 + 0x50) = local_2c * 0x2000 + (local_30 >> 0x13); \| *puVar9 = ` |
| kernel.c | 1358930 | `*(uint *)(iVar1 + 0x44) = uVar7; \| *puVar2 = (uVar7 >> 6) << 8 \| param_1 << 4 \| 2; \| FUN_006a77ea(&local_30); \| *(uint *)(iVar1 + 0x54) = lo` |
| kernel.c | 1360839 | `(iVar4 = FUN_0012c562(*DAT_008817f8,0x25), iVar4 == 0)) && \| ((*(int *)(*piVar3 + 0xf0) != 1 \|\| (iVar4 = FUN_0012c536(*puVar1,0x1b), iVar4 =` |
| kernel.c | 1364593 | `iVar6 = *(int *)(iVar2 + 0xc); \| if (iVar6 != *(int *)(iVar2 + 4)) { \| iVar12 = DAT_0088632c + 0x600; \| iVar13 = DAT_0088632c + -0x200; \| do` |
| kernel.c | 1365090 | `int iVar8; \|  \| iVar2 = DAT_00886c0c; \| iVar8 = DAT_00886c0c + -0x2000; \| iVar3 = *(int *)(DAT_00886c0c + 0xfb8); \| while (iVar3 != 0) { \| *` |
| kernel.c | 1368153 | `} \| else { \| *(uint *)(param_2 + (uint)*param_2 * 0x66 + 2) = (uint)*puVar1; \| if (*(ushort *)(pbVar10 + iVar8 * 4 + 4) < 0x200) { \| param_2` |
| kernel.c | 1375180 | `uVar1 = uVar1 \| 0x20; \| break; \| case 9: \| uVar1 = uVar1 \| 0x200; \| break; \| case 10: \| uVar1 = uVar1 \| 0x400;` |
| kernel.c | 1375192 | `uVar1 = uVar1 \| 0x1000; \| goto LAB_00897624; \| case 0xd: \| uVar1 = uVar1 \| 0x2000; \| goto LAB_00897624; \| case 0xe: \| uVar1 = uVar1 \| 0x4000` |
| kernel.c | 1375201 | `uVar1 = uVar1 \| 0x8000; \| goto LAB_00897624; \| case 0x10: \| uVar1 = uVar1 \| 0x20000; \| goto LAB_00897624; \| case 0x11: \| uVar1 = uVar1 \| 0x1` |
| kernel.c | 1392730 | `uVar1 = *(uint *)(DAT_0087a858 + 0x130) & 0xfffdffff; \| } \| else { \| uVar1 = *(uint *)(DAT_0087a858 + 0x130) \| 0x20000; \| } \| *(uint *)(DAT_` |
| kernel.c | 1396305 | `uVar2 = (param_3 & 0x7ffff) >> 3; \| uVar1 = (param_1 & 0x7ffff) >> 3; \| if ((param_2 & 0x7ffff) <= (param_4 & 0x7ffff)) { \| iVar4 = ((param_` |
| kernel.c | 1404255 | `uVar8 = 0xa00; \| for (; uVar5 < 0x10; uVar5 = uVar5 + 1) { \| uVar4 = uVar8 & 0xfffff; \| uVar8 = uVar8 + 0x200; \| puVar3[uVar5 * 3] = puVar3[` |
| kernel.c | 1405855 | `uVar6 = uVar7 & 0xfffffffd; \| *(uint *)(iVar5 + 0x1c) = uVar6; \| if (param_1[0x14] == 1) { \| *(uint *)(iVar5 + 0x1c) = uVar6 \| 0x2000020; \| ` |
| kernel.c | 1405860 | `uVar6 = uVar6 \| 0x3000020; \| } \| else { \| uVar6 = uVar7 & 0xfefffffd \| 0x2000020; \| } \| *(uint *)(iVar5 + 0x1c) = uVar6; \| }` |
| kernel.c | 1406039 | `return; \| } \| if (param_3 == -1) { \| uVar3 = *(uint *)(DAT_008cd8bc + 0x14) \| 0x20000000; \| } \| else { \| if (param_3 != 1) {` |
| kernel.c | 1414969 | `FUN_006f4c52(0x1f,DAT_008d6a68 + -4,2,(&DAT_00002f66)[iVar4],(&DAT_00002f67)[iVar4], \| param_4); \| } \| iVar5 = iVar4 + 0x2000; \| if ((&DAT_0` |
| kernel.c | 1419115 | `iVar4 = 0; \| if (*param_2 != 0) { \| do { \| if (0x175 < param_2[iVar4 + 1] - 0x200) { \| return 0; \| } \| iVar4 = iVar4 + 1;` |
| kernel.c | 1419139 | `bVar5 = true; \| } \| else { \| if (0x175 < uVar3 - 0x200) { \| return 0; \| } \| bVar6 = true;` |
| kernel.c | 1419155 | `iVar4 = 0; \| if (*param_2 != 0) { \| do { \| if (0x12a < param_2[iVar4 + 1] - 0x200) { \| return 0; \| } \| iVar4 = iVar4 + 1;` |
| kernel.c | 1419190 | `bVar5 = true; \| } \| else { \| if (0x12a < uVar3 - 0x200) { \| return 0; \| } \| bVar6 = true;` |
| kernel.c | 1419212 | `bVar5 = true; \| } \| else { \| if (0x175 < param_2[iVar4 + 1] - 0x200) { \| return 0; \| } \| bVar6 = true;` |
| kernel.c | 1419234 | `bVar5 = true; \| } \| else { \| if (0x12a < param_2[iVar4 + 1] - 0x200) { \| return 0; \| } \| bVar6 = true;` |
| kernel.c | 1419297 | `bVar8 = true; \| } \| else { \| if (0x12a < uVar3 - 0x200) { \| return 0; \| } \| bVar6 = true;` |
| kernel.c | 1419342 | `bVar8 = true; \| } \| else { \| if (0x175 < uVar3 - 0x200) { \| return 0; \| } \| bVar6 = true;` |
| kernel.c | 1419802 | `FUN_006f1460(param_6,0x82); \| uVar2 = (uint)*param_4; \| iVar6 = 1; \| iVar5 = (*(byte *)(param_2 + uVar2) & 1) * 0x200 + (uint)*(byte *)(uVar` |
| kernel.c | 1422424 | `param_1[2] = 0; \| iVar4 = *(int *)(iVar5 + 4); \| *(char *)(param_1 + 3) = \| (char)((*(ushort *)(*(int *)(iVar4 + 0x18) + 4) + 7) * 0x200000 ` |
| kernel.c | 1429032 | `local_54 = local_54 & 0xfffffffb \| 8; \| } \| iVar8 = FUN_00973e88(&local_64); \| local_68[0] = (undefined2)((iVar8 + 7U) * 0x2000 >> 0x10); \| ` |
| kernel.c | 1436976 | `else { \| if (*(short *)(param_1 + 6) != 0x252b) { \| uVar6 = FUN_006fd49c(s_Invalid_MT_CSFB_request_from_CM_L_008f65f8); \| thunk_FUN_006fb59e` |
| kernel.c | 1441111 | `FUN_006fae04(&local_40,0xff,0x24); \| local_3c = 0x1e; \| local_3a = 2; \| local_40 = 0x20000000; \| local_37 = 0x12; \| local_39 = (undefined1)p` |
| kernel.c | 1442909 | `iVar9 = DAT_00901018 + -0x2c; \| uVar7 = (uint)*(ushort *)(DAT_00901018 + -0x10 + (param_2 % 8) * -2); \| if ((iVar2 < 4) && (iVar4 < 4)) { \| ` |
| kernel.c | 1442911 | `if ((iVar2 < 4) && (iVar4 < 4)) { \| uVar6 = (uVar6 * *(int *)(iVar9 + iVar2 * 4) * (uint)*(ushort *)(iVar8 + iVar1 * 2) + 0x200 >> \| 10) + (` |
| kernel.c | 1442915 | `} \| else { \| uVar6 = (uint)*(ushort *)(iVar8 + extraout_r2 * 2) * \| (uVar7 * *(int *)(iVar9 + iVar4 * 4) + 0x200 >> 10) + \| (uint)*(ushort *` |
| kernel.c | 1442917 | `uVar6 = (uint)*(ushort *)(iVar8 + extraout_r2 * 2) * \| (uVar7 * *(int *)(iVar9 + iVar4 * 4) + 0x200 >> 10) + \| (uint)*(ushort *)(iVar8 + iVa` |
| kernel.c | 1443665 | `FUN_006f4c52(0x1f,DAT_0090195c + 1,8,uVar3 & 0x7ffff); \| } \| if ((uint)puVar8 >> 0x13 < (uVar4 & 0x7ffffff) >> 0x13) { \| puVar8 = puVar8 + 0` |
| kernel.c | 1444342 | `iVar6 = (*(uint *)(pcVar2 + iVar1 + 0x50) - \| (uint)*(ushort *)(pcVar3 + uVar7 * 8 + 6) * \| (*(uint *)(pcVar2 + iVar1 + 0x50) / (uint)*(usho` |
| kernel.c | 1446964 | `puVar2 = local_b0 + 0xbf6; \| local_b0 = &local_40; \| FUN_006a7aba(puStack_48,local_4c,*puVar8,*puVar2); \| iVar6 = local_3c * 0x2000 + (local` |
| kernel.c | 1453497 | `undefined4 *param_5) \|  \| { \| if (param_2 == 0x2000000) { \| *param_4 = 0; \| FUN_0092cdda(); \| }` |
| kernel.c | 1453529 | `} \| (*(code *)*DAT_00919518)(param_4,0,0x24); \| iVar1 = FUN_008c9708(param_1,&local_28); \| if (iVar1 == 0x2000000) { \| uVar2 = FUN_0090d7fe(` |
| kernel.c | 1453531 | `iVar1 = FUN_008c9708(param_1,&local_28); \| if (iVar1 == 0x2000000) { \| uVar2 = FUN_0090d7fe(param_1,&local_28); \| FUN_0092cdda(param_1,0x200` |
| kernel.c | 1453542 | `FUN_0092cdda(param_1,0x80000000,iVar1,param_4 + 8,&local_28); \| iVar1 = FUN_008c9708(param_1,&local_28); \| } \| if ((iVar1 == 0x2000000) \|\| (` |
| kernel.c | 1453603 | `undefined4 *param_5) \|  \| { \| if (param_2 == 0x2000000) { \| *param_4 = 0; \| FUN_0092cdda(); \| }` |
| kernel.c | 1453630 | `if ((*(int *)(*param_1 + 0x20) == 0) && (param_3 != 0)) { \| (*(code *)*DAT_00919518)(param_4,0,0x14); \| iVar1 = FUN_008c9708(param_1,&local_` |
| kernel.c | 1453669 | `} \| (*(code *)*DAT_00919518)(param_4,0,0x1c,(code *)*DAT_00919518,param_3); \| iVar1 = FUN_008c9708(param_1,&local_24); \| if (iVar1 == 0x2000` |
| kernel.c | 1453671 | `iVar1 = FUN_008c9708(param_1,&local_24); \| if (iVar1 == 0x2000000) { \| uVar2 = FUN_0090d7fe(param_1,&local_24); \| FUN_0092cdda(param_1,0x200` |
| kernel.c | 1453726 | `undefined4 *param_5) \|  \| { \| if (param_2 == 0x2000000) { \| *param_4 = 0; \| FUN_0092cdda(); \| }` |
| kernel.c | 1453758 | `} \| (*(code *)*DAT_00919518)(param_4,0,0x1c); \| iVar1 = FUN_008c9708(param_1,local_28); \| if (iVar1 == 0x2000000) { \| uVar2 = FUN_0090d7fe(p` |
| kernel.c | 1453760 | `iVar1 = FUN_008c9708(param_1,local_28); \| if (iVar1 == 0x2000000) { \| uVar2 = FUN_0090d7fe(param_1,local_28); \| FUN_0092cdda(param_1,0x20000` |
| kernel.c | 1453762 | `uVar2 = FUN_0090d7fe(param_1,local_28); \| FUN_0092cdda(param_1,0x2000000,uVar2,param_4,local_28); \| iVar1 = FUN_008c9708(param_1,local_28); ` |
| kernel.c | 1453858 | `undefined4 *param_5) \|  \| { \| if (param_2 == 0x2000000) { \| *param_4 = 0; \| FUN_0092cdda(); \| }` |
| kernel.c | 1453884 | `if ((*(int *)(*param_1 + 0x20) == 0) && (param_3 != 0)) { \| (*(code *)*DAT_00919848)(param_4,0,0x10,(code *)*DAT_00919848,param_3); \| iVar1 ` |
| kernel.c | 1457036 | `FUN_006f18c4(s_PS_stack_was_wl2_wrlc_src_wrlc_i_0091e478,0x32d,1); \| } \| iVar4 = DAT_0091ed88 + (uint)(byte)puVar6[0x1b] * 4; \| iVar5 = iVar` |
| kernel.c | 1457332 | `uVar8 = uVar8 & 0xfffdffff; \| } \| else { \| uVar8 = uVar8 \| 0x20000; \| } \| *(uint *)(iVar4 + iVar5) = uVar8; \| iVar3 = uVar2 * 0x2c + 0x20;` |
| kernel.c | 1457456 | `uVar8 = (int)((ulonglong)*(uint *)(pbVar6 + 4) * \| (ulonglong)*(ushort *)(pbVar6 + uVar16 * 0x18 + 0x52) >> 0x20) * uVar7 + \| (int)((ulonglo` |
| kernel.c | 1457462 | `lVar21 = (ulonglong)uVar14 * (uVar3 & 0xffffffff); \| uVar5 = uVar14 * local_1124 + (int)((ulonglong)lVar21 >> 0x20); \| uVar18 = uVar5 >> 3; ` |
| kernel.c | 1457565 | `uVar14 = uVar14 & 0xfffdffff; \| } \| else { \| uVar14 = uVar14 \| 0x20000; \| } \| *(uint *)(iVar15 + iVar10) = uVar14; \| *(short *)(*(int *)(par` |
| kernel.c | 1457996 | `uVar2 = param_6[1] & 0xfdffffff; \| } \| else { \| uVar2 = param_6[1] \| 0x2000000; \| } \| param_6[1] = uVar2; \| *param_3 = uVar1;` |
| kernel.c | 1458084 | `if (uVar5 < 0x20) { \| uVar3 = *(uint *)(iVar6 + 4); \| if ((uVar3 & 0x100) == 0) { \| if ((uVar3 & 0x200) == 0) { \| if ((uVar3 & 0x400) == 0) ` |
| kernel.c | 1458237 | `uVar9 = (uVar10 & 0xffff8007 \| uVar9) + 0x1000; \| break; \| case 2: \| uVar7 = (uVar5 & 0xffff8007 \| uVar7) + 0x2000; \| uVar9 = (uVar10 & 0xff` |
| kernel.c | 1458238 | `break; \| case 2: \| uVar7 = (uVar5 & 0xffff8007 \| uVar7) + 0x2000; \| uVar9 = (uVar10 & 0xffff8007 \| uVar9) + 0x2000; \| break; \| default: \| if` |
| kernel.c | 1458308 | `uVar9 = (uVar12 & 0xf801ffff \| uVar9) + 0x1000000; \| } \| else if (uVar11 == 8) { \| uVar7 = (uVar5 & 0xf801ffff \| uVar7) + 0x2000000; \| uVar9` |
| kernel.c | 1458309 | `} \| else if (uVar11 == 8) { \| uVar7 = (uVar5 & 0xf801ffff \| uVar7) + 0x2000000; \| uVar9 = (uVar12 & 0xf801ffff \| uVar9) + 0x2000000; \| } \| e` |
| kernel.c | 1458455 | `uVar14 = (*puVar10 & 0xffff8fff) + 0x1000; \| break; \| case 2: \| uVar14 = (*puVar10 & 0xffff8fff) + 0x2000; \| break; \| default: \| FUN_006f18c` |
| kernel.c | 1458504 | `} \| else { \| if (uVar13 != 8) goto LAB_00920958; \| uVar14 = (*puVar10 & 0xf8ffffff) + 0x2000000; \| } \| goto LAB_009209c4; \| }` |
| kernel.c | 1458540 | `} \| } \| else if (uVar12 == 0xa0) { \| uVar14 = (*puVar10 & 0xc7ffffff) + 0x20000000; \| } \| else { \| if (uVar12 != 0x140) {` |
| kernel.c | 1459906 | `goto LAB_00923a32; \| } \| } \| if (iVar1 == 0x2000000) { \| iVar1 = FUN_0090d7fe(param_1,local_28); \| if (iVar1 != 0) { \| *(undefined1 *)(param` |
| kernel.c | 1459911 | `if (iVar1 != 0) { \| *(undefined1 *)(param_4 + 8) = 1; \| } \| FUN_0092cdda(param_1,0x2000000,iVar1,param_4 + 0xc,local_28); \| } \| if (param_3 ` |
| kernel.c | 1463386 | `pcVar5[1] = '\0'; \| break; \| case 0xd: \| *(undefined1 *)(iVar4 + 0x200) = 1; \| *(undefined1 *)(iVar4 + 0x201) = *(undefined1 *)(param_1 + 0x` |
| kernel.c | 1463399 | `FUN_006f4a98(0x18,iVar4); \| } \| } \| if (*(char *)(*piVar2 + 0x200) == '\0') { \| (**(code **)(*piVar2 + 0x1cc))(*puVar3,0x15,pcVar5); \| } \| L` |
| kernel.c | 1464788 | `uVar10 = (uint)*(byte *)((unaff_r4 >> 0x18) + 0x92d204); \| uVar3 = (uint)((param_2 & 1) != 0) << 0x1f \| param_3 >> 1; \| iVar11 = ((0x800000 ` |
| kernel.c | 1464841 | `0x4000000 \| uVar6 >> 6; \| uVar13 = uVar10 * (uVar3 >> 0xf); \| uVar18 = uVar6 * 0x4000000 \| uVar2 + uVar5 * -8 >> 6; \| uVar5 = uVar5 * -0x200` |
| kernel.c | 1464882 | `bVar23 = uVar14 * 8 <= uVar7; \| } \| uVar7 = uVar7 + uVar14 * -8; \| uVar9 = uVar21 * 0x400000 + uVar6 * 0x200; \| uVar18 = ((((uVar3 - (uVar4 ` |
| kernel.c | 1464887 | `0x4000000 \| uVar7 >> 6; \| uVar4 = uVar7 * 0x4000000 \| uVar5 + uVar12 * -8 >> 6; \| uVar10 = uVar10 * (uVar18 >> 0xf); \| uVar12 = uVar12 * -0x` |
| kernel.c | 1464944 | `(uint)(bVar27 \|\| bVar26)) * 0x10000000; \| uVar3 = uVar5 + CARRY4(uVar14,uVar2); \| iVar11 = uVar19 * 0x10000 + uVar20 * 8 + (uVar13 >> 0x1a) ` |
| kernel.c | 1469644 | `int iVar1; \|  \| iVar1 = FUN_00932132(); \| if (((iVar1 != 0) && (iVar1 != 0x2000)) && (iVar1 != 0x1000)) { \| return 1; \| } \| return 0;` |
| kernel.c | 1471256 | `iVar2 = FUN_009364b4((char)*param_1); \| piVar1 = DAT_009368b4; \| if (iVar2 == 0) { \| iVar2 = FUN_006f1674(0x200,1,0x85,0x4a); \| *(int *)(*pi` |
| kernel.c | 1472306 | `FUN_006fb8b0(s_s_fiq_num____s_fiq_status_postio_006f512c,s_threadx_os_c_006f511c,0x2c6); \| } \| if (*(int *)(iVar1 + 8) == 0) { \| FUN_006fb8b` |
| kernel.c | 1474163 | `if ((param_1 == 0x80) \|\| (param_1 == 0x100)) { \| return 3; \| } \| if (param_1 == 0x200) { \| return 7; \| } \| }` |
| kernel.c | 1474517 | `bVar18 = true; \| } while (uVar12 == 0x80); \| if (uVar12 != 0x100) { \| if (uVar12 != 0x200) { \| LAB_0093bcc2: \| FUN_006f18c4(s_PS_layer1_wlay` |
| kernel.c | 1474746 | `*(uint *******)(iVar17 + 0x84) = local_68; \| iVar17 = DAT_0093c2d4; \| iVar6 = *(int *)(DAT_0093c2dc + param_3 * 4); \| iVar7 = iVar6 * 0x200;` |
| kernel.c | 1474961 | `goto LAB_0093c048; \| LAB_0093c3c8: \| iVar5 = DAT_0093c2d4; \| if (-1 < iVar17 * 0x200) goto LAB_0093bcd0; \| *(uint *******)(DAT_0093c2d4 + 0x` |
| kernel.c | 1475357 | `if ('\0' < *pcVar1) { \| FUN_006f4b10(0x1f,DAT_0093d548 + 0x47,&DAT_0093d114,puVar9,iVar8,param_4); \| } \| if ((undefined *)0x4000 < puVar9 + ` |
| kernel.c | 1475639 | `iVar8 = DAT_0093da50; \| uVar10 = (uint)*(ushort *)(DAT_0093da50 + param_1 * 2); \| if (*(char *)(DAT_0093da54 + param_1) == '\0') { \| uVar10 ` |
| kernel.c | 1475711 | `goto LAB_0093d992; \| } \| if (uVar7 != 0x100) { \| if (uVar7 == 0x200) { \| iVar8 = uVar10 / 0x200 + *(int *)(DAT_0093d9e4 + param_1 * 4); \| LA` |
| kernel.c | 1475712 | `} \| if (uVar7 != 0x100) { \| if (uVar7 == 0x200) { \| iVar8 = uVar10 / 0x200 + *(int *)(DAT_0093d9e4 + param_1 * 4); \| LAB_0093da6c: \| *(int *` |
| kernel.c | 1475739 | `iVar8 = iVar8 + 2; \| goto LAB_0093d976; \| } \| if (uVar7 == 0x200) { \| iVar8 = iVar8 + 1; \| goto LAB_0093da6c; \| }` |
| kernel.c | 1476345 | `goto LAB_0093e326; \| } \| if (uVar1 != 0x80) { \| if (((uVar1 == 0x100) \|\| (uVar1 == 0x200)) && \| ((iVar6 = *DAT_0093e370, iVar6 != 1 && ((iVa` |
| kernel.c | 1477023 | `} \| iVar8 = FUN_008c678c(iVar9); \| iVar9 = FUN_008c678c(0x400); \| iVar8 = (iVar8 - iVar9) + 0x200 >> 10; \| if ('\x04' < *pcVar1) { \| FUN_006` |
| kernel.c | 1477190 | `} \| uVar9 = uVar9 + 1 & 0xff; \| } while (uVar9 < 6); \| iVar11 = (0x400 - iVar11) * *(int *)(param_1 + 4) + iVar10 + 0x200 >> 10; \| if ('\0' ` |
| kernel.c | 1477199 | `piVar3 = (int *)(param_1 + (uint)*(byte *)(DAT_0093f964 + 2) * 0x90); \| iVar10 = *piVar3; \| iVar7 = piVar3[1]; \| iVar11 = (0x400 - iVar11) *` |
| kernel.c | 1477524 | `uVar10 = uVar9 & 0xfffbf000 \| uVar13 \| 0xe - param_2[1] & 0xf \| 0x30000; \| goto LAB_0093ffce; \| } \| uVar10 = ((uVar9 & 0xfffff000 \| uVar10 \|` |
| kernel.c | 1477538 | `} \| *(uint *)(iVar4 + 0x41c) = uVar10; \| if (param_2[2] == 3) { \| uVar10 = uVar10 \| 0x2000; \| } \| else { \| uVar10 = uVar10 & 0xffffdfff;` |
| kernel.c | 1478568 | `} \| } \| FUN_006fe9dc(*(int *)(*piVar12 + (uint)*param_1 * 4 + 4) + 0xfec,&DAT_0000115c); \| FUN_006fe9dc(*(int *)(*piVar12 + (uint)*param_1 *` |
| kernel.c | 1478593 | `FUN_006f18c4(s_PS_layer1_wlayer1_V2_meas_rpt_sr_00941aa4,0x159,0); \| } \| FUN_006fe9dc(*(int *)(*piVar12 + (uint)*param_1 * 4 + 4) + 0xfec,&D` |
| kernel.c | 1478630 | `FUN_006f18c4(s_PS_layer1_wlayer1_V2_meas_rpt_sr_00941aa4,0x17c,0); \| } \| FUN_006fe9dc(*(int *)(*piVar12 + (uint)*param_1 * 4 + 4) + 0xfec,&D` |
| kernel.c | 1478655 | `} \| } \| FUN_006fe9dc(*(int *)(*piVar12 + (uint)*param_1 * 4 + 4) + 0xfec,&DAT_0000115c); \| FUN_006fe9dc(*(int *)(*piVar12 + (uint)*param_1 *` |
| kernel.c | 1478674 | `FUN_006f18c4(s_PS_layer1_wlayer1_V2_meas_rpt_sr_00941aa4,0x1a2,0); \| } \| FUN_006fe9dc(*(int *)(*piVar12 + (uint)*param_1 * 4 + 4) + 0xfec,&D` |
| kernel.c | 1480412 | `piVar3 = DAT_00943f8c; \| if (iVar6 == 1) { \| FUN_006fe9dc(*(int *)(*DAT_00943f8c + uVar5 * 4 + 4) + 0xfec,&DAT_0000115c); \| FUN_006fe9dc(*(i` |
| kernel.c | 1480479 | `FUN_006f4a34(local_3c + iVar13 * 0x600 + uVar10 * 0x28 + -0x500, \| local_38 + iVar6 * 0x600 + uVar8 * 0x28 + -0x500,0x28); \| iVar13 = local_` |
| kernel.c | 1481574 | `local_30 = 0; \| do { \| iVar12 = DAT_009450a0 + uVar10 * 8; \| if ((*(char *)(iVar12 + 0x206) != '\0') && (*(ushort *)(iVar12 + 0x200) == uVar` |
| kernel.c | 1487710 | `*(undefined4 *)(*(int *)(iVar8 + 4) + 0x230c) = 0; \| iVar11 = *(int *)(iVar8 + 4); \| *(undefined4 *)(iVar11 + 0x2310) = 0; \| FUN_006770da(&l` |
| kernel.c | 1490187 | `*(undefined4 *)(*(int *)(iVar5 + 4) + 0x230c) = 0; \| iVar4 = *(int *)(iVar5 + 4); \| *(undefined4 *)(iVar4 + 0x2310) = 0; \| FUN_006770da(&loc` |
| kernel.c | 1490931 | `uVar1 = uVar1 + 1 & 0xff; \| } while (uVar1 < 0x20); \| } \| return 0x200; \| } \|  \| ` |
| kernel.c | 1491188 | `} \| puVar2[uVar4 * 0x23 + 0xc] = 0xffffffff; \| uVar4 = uVar4 + 1 & 0xffff; \| } while (uVar4 < 0x200); \| return; \| } \| ` |
| kernel.c | 1493877 | `} \| LAB_00953948: \| *(undefined4 *)(iVar6 + (*(ushort *)(pbVar8 + 0x10) & 0x1ff) * 0x8c + 0x28) = 1; \| *(ushort *)(iVar6 + 0xe) = (ushort)((` |
| kernel.c | 1494024 | `LAB_00953b76: \| *(undefined4 *)(iVar7 + (*(ushort *)(iVar9 + 0x24) & 0x1ff) * 0x8c + 0x28) = 1; \| uVar10 = uVar5 + 1 & 0x7ff; \| *(ushort *)(` |
| kernel.c | 1494305 | `bVar4 = 1; \| pbVar12[3] = pbVar12[4]; \| *(undefined4 *)(iVar10 + (*(ushort *)(pbVar12 + 0x10) & 0x1ff) * 0x8c + 0x28) = 1; \| *(ushort *)(iVa` |
| kernel.c | 1494427 | `} \| else { \| *(undefined4 *)(iVar10 + (*(ushort *)(pbVar12 + 0x10) & 0x1ff) * 0x8c + 0x28) = 1; \| *(ushort *)(iVar10 + 0xe) = (ushort)((uVar` |
| kernel.c | 1494513 | `FUN_00952524(1); \| } \| uVar12 = *(ushort *)(iVar6 + 0x42) & 0x1ff; \| *(ushort *)(iVar6 + 0x42) = (ushort)((*(ushort *)(iVar6 + 0x42) + 1) * ` |
| kernel.c | 1494952 | `*(char *)(iVar17 + 0x16) = (char)uVar15; \| *(undefined1 *)(iVar17 + 0x17) = *(undefined1 *)(iVar17 + 0x18); \| uVar9 = uVar14 + 1 & 0x7ff; \| ` |
| kernel.c | 1495030 | `*(char *)(iVar17 + 0x19) = cVar16; \| if (cVar16 != '\x02') { \| uVar9 = uVar14 + 1 & 0x7ff; \| *(ushort *)(iVar11 + 0x44) = (ushort)((uVar14 +` |
| kernel.c | 1496817 | `} \| local_f = (undefined1)(param_1 >> 8); \| *puVar5 = local_f; \| FUN_006fae04(local_23c,0xff,0x200); \| FUN_006fae04(psVar6 + 1,0xff,0x80); \|` |
| kernel.c | 1501433 | `if (puVar1 != (undefined *)0x0) { \| bVar6 = puVar1 < &DAT_00200001; \| } \| if (bVar6 && (puVar1 != (undefined *)0x0 && puVar1 != (undefined *` |
| kernel.c | 1502937 | `uVar4 = param_2[2]; \| while (iVar2 = FUN_00303fcc(uVar4,s_PS_stack_las_common_other_sds_sk_0095e130,0x1fe), iVar2 != 0 \| ) { \| iVar2 = FUN_0` |
| kernel.c | 1508809 | `case 0x30d: \| iVar10 = FUN_0095f410(local_44._2_1_); \| iVar9 = iVar9 + iVar10 * 0x998; \| FUN_006f3e8a(iVar9 + 0x200,local_3c,0x48); \| *(unde` |
| kernel.c | 1509275 | `(((uVar3 & 1) != 0 && \| ((iVar2 = FUN_009d18ce(param_1), iVar2 != 0 \|\| \| (*(int *)(DAT_009d1d14 + param_1 * 4 + 0xc) == 2)))))) { \| uVar4 = ` |
| kernel.c | 1509307 | `uVar4 = uVar4 \| 0x808; \| } \| if (((int)(uVar3 << 0xd) < 0) \|\| ((int)(uVar3 << 0xc) < 0)) { \| uVar4 = uVar4 \| 0x2000; \| } \| if ((int)(uVar3 <` |
| kernel.c | 1509319 | `uVar4 = uVar4 \| 0x10004; \| } \| if (((int)(uVar3 << 4) < 0) \|\| ((int)(uVar3 << 3) < 0)) { \| uVar4 = uVar4 \| 0x20004; \| } \| if (((int)(uVar3 <` |
| kernel.c | 1509334 | `uVar4 = uVar4 \| 0x400008; \| } \| if ((uVar4 == 0) && ((uVar3 & 1) != 0)) { \| uVar4 = 0x200000; \| } \| if ('\x02' < *DAT_009d1c94) { \| FUN_006f` |
| kernel.c | 1510352 | `piVar3 = DAT_009662c0; \| iVar4 = *piVar2; \| if ((*(int *)(iVar4 + 0xf4) == 0) && (*(char *)(DAT_009662c4 + *DAT_009662c0) == '\0')) { \| loca` |
| kernel.c | 1510392 | `local_64 = local_64 & 0xffffff00; \| } \| iVar4 = FUN_0097b8a4(&local_68); \| local_38[0] = (undefined2)((iVar4 + 7U) * 0x2000 >> 0x10); \| uVar` |
| kernel.c | 1510473 | `(*(byte *)(iVar8 + 0x6ed) & 0xf) << 0x10; \| iVar12 = *DAT_009662bc; \| if ((*(int *)(iVar12 + 0xf4) == 0) && (*(char *)(DAT_009662c4 + *DAT_0` |
| kernel.c | 1510623 | `local_74 = local_74 & 0xffffff00; \| } \| iVar8 = FUN_0097b8cc(&local_78); \| local_4c[0] = (undefined2)((iVar8 + 7U) * 0x2000 >> 0x10); \| uVar` |
| kernel.c | 1510780 | `FUN_006f3e8a(local_4c,(int)puVar3 + 1,uVar2); \| LAB_009665f6: \| iVar5 = FUN_0097b8e6(&local_6c); \| local_3c[0] = (undefined2)((iVar5 + 7U) *` |
| kernel.c | 1510860 | `} \| FUN_006f3e8a(local_30,auStack_23,uVar1); \| iVar3 = FUN_0097b90c(&local_38); \| local_18[0] = (undefined2)((iVar3 + 7U) * 0x2000 >> 0x10);` |
| kernel.c | 1510966 | `local_64 = local_64 & 0xffffff00; \| } \| iVar6 = FUN_0097b916(&local_68); \| local_30[0] = (undefined2)((iVar6 + 7U) * 0x2000 >> 0x10); \| uVar` |
| kernel.c | 1512025 | `void FUN_00967b16(void) \|  \| { \| FUN_00a218ce(DAT_00967c98,2,9,0x200,1,DAT_00967d0c,DAT_00967d08,DAT_00967d04,0,0, \| *(undefined4 *)(DAT_009` |
| kernel.c | 1512111 | `FUN_00967a30(); \| FUN_00967aaa(); \| FUN_00967b16(); \| FUN_00a218ce(DAT_00967c98,3,9,0x200,1,DAT_00967d1c,DAT_00967d18,&LAB_009679ae_1,0,0, \|` |
| kernel.c | 1513209 | `else { \| uVar6 = **(undefined4 **)(&DAT_0000140c + local_28); \| uVar9 = *(undefined4 *)(&DAT_00001404 + local_28); \| piVar12 = (int *)(local` |
| kernel.c | 1513211 | `uVar9 = *(undefined4 *)(&DAT_00001404 + local_28); \| piVar12 = (int *)(local_2c + 0x2000); \| uVar10 = *(undefined4 *)(&DAT_00001408 + local_` |
| kernel.c | 1513214 | `uVar11 = *(undefined4 *)(local_2c + 0x2004); \| FUN_006f4c52(0x20,DAT_00969320,7,3,iVar2,*piVar12,uVar11,uVar9,uVar10,uVar6); \| iVar13 = 0; \|` |
| kernel.c | 1513257 | `FUN_006f4c52(0x20,DAT_0096932c,2,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc)); \| } \| iVar13 = FUN_00968f34(iVar2 + 0x178,pbVar7,` |
| kernel.c | 1513259 | `iVar13 = FUN_00968f34(iVar2 + 0x178,pbVar7,uVar8,0); \| *(uint *)(iVar3 + 0x2004) = *(ushort *)(iVar3 + 0x2004) + 1 & 0x7ff; \| FUN_001c16f0(l` |
| kernel.c | 1513287 | `FUN_00a21668(iVar2,3); \| } \| FUN_009679d0(iVar2,3); \| if (0x200 < **(uint **)(iVar2 + 0x184)) { \| FUN_006f18c4(DAT_00969304,0xa21,0); \| } \| ` |
| kernel.c | 1513290 | `if (0x200 < **(uint **)(iVar2 + 0x184)) { \| FUN_006f18c4(DAT_00969304,0xa21,0); \| } \| if (0x200 < **(uint **)(iVar2 + 400)) { \| FUN_006f18c4` |
| kernel.c | 1513295 | `} \| FUN_00908148(); \| if ('\x01' < *DAT_00969760) { \| FUN_006f4c52(0x20,DAT_00969764,6,3,iVar15,*piVar12,*(undefined4 *)(iVar3 + 0x2004), \| ` |
| kernel.c | 1515724 | `uVar2 = *(ushort *)(DAT_0096ca28 + (uVar2 >> 7) * 2) ^ uVar5; \| uVar5 = (uint)*(ushort *)(iVar4 + uVar5 * 2) ^ uVar2 & 0x7f ^ (uint)(uVar1 >` |
| kernel.c | 1515731 | `uVar2 = *(ushort *)(DAT_0096ca28 + (uVar2 >> 7) * 2) ^ uVar6; \| uVar6 = (uint)*(ushort *)(iVar4 + uVar6 * 2) ^ uVar2 & 0x7f ^ (uint)(uVar1 >` |
| kernel.c | 1515738 | `uVar2 = *(ushort *)(DAT_0096ca28 + (uVar5 >> 7) * 2) ^ uVar6; \| uVar5 = (uint)*(ushort *)(iVar4 + uVar6 * 2) ^ uVar2 & 0x7f ^ (uint)(uVar1 >` |
| kernel.c | 1525667 | `uVar6 = *(uint *)(DAT_0097a360 + 0xc); \| uVar5 = *(uint *)(DAT_0097a360 + 4); \| *(uint *)(DAT_0097a364 + 4) = \| *(uint *)(DAT_0097a364 + 4) ` |
| kernel.c | 1525678 | `uVar5 = *(uint *)(iVar2 + 4) & 0xf2000000 \| \| (*(uint *)(iVar1 + 0x10) \| \| *(uint *)(iVar1 + 4) \| *(uint *)(iVar1 + 8) \| *(uint *)(iVar1 + 0` |
| kernel.c | 1525861 | `if ((*param_1 & 0x40000000) != 0) { \| *(uint *)(DAT_0097a360 + 8) = *(uint *)(DAT_0097a360 + 8) \| uVar5; \| } \| if ((*param_1 & 0x20000000) !` |
| kernel.c | 1525869 | `if ((*param_1 & 0x40000000) != 0) { \| *(uint *)(DAT_0097a360 + 0x10) = *(uint *)(DAT_0097a360 + 0x10) \| uVar5; \| } \| if ((*param_1 & 0x20000` |
| kernel.c | 1526692 | `thunk_FUN_006fb59e(s_OSA_FALSE_0097b668,s_mm_proto_common_procedure_c_0097b64c,0x7b,uVar1); \| } \| iVar2 = FUN_0097b872(&local_30); \| local_1` |
| kernel.c | 1529572 | `local_20 = 0; \| local_1c = 0; \| iVar5 = *DAT_0097f62c; \| *(undefined4 *)(iVar5 + 0x20044) = 0; \| pcVar2 = DAT_0097f634; \| *(undefined4 *)(iV` |
| kernel.c | 1529576 | `pcVar2 = DAT_0097f634; \| *(undefined4 *)(iVar5 + 0xb8000) = 0; \| if ((*DAT_0097f630 == 1) \|\| (*pcVar2 == '\0')) { \| *(undefined4 *)(iVar5 + ` |
| kernel.c | 1529579 | `*(undefined4 *)(iVar5 + 0x20048) = 0xbb; \| } \| else if (*pcVar2 == '\x01') { \| *(undefined4 *)(iVar5 + 0x20048) = 0xaa; \| } \| iVar4 = DAT_00` |
| kernel.c | 1529683 | `piVar1 = DAT_0097f64c; \| iVar4 = *DAT_0097f62c; \| if (iVar3 == 1) { \| *(undefined4 *)(iVar4 + 0x20044) = 1; \| if ((*DAT_0097f630 == 1) \|\| (*` |
| kernel.c | 1529685 | `if (iVar3 == 1) { \| *(undefined4 *)(iVar4 + 0x20044) = 1; \| if ((*DAT_0097f630 == 1) \|\| (*DAT_0097f634 == '\0')) { \| *(undefined4 *)(iVar4 +` |
| kernel.c | 1529688 | `*(undefined4 *)(iVar4 + 0x20048) = 0xbb; \| } \| else if (*DAT_0097f634 == '\x01') { \| *(undefined4 *)(iVar4 + 0x20048) = 0xaa; \| } \| FUN_008b` |
| kernel.c | 1529698 | `*(undefined4 *)(iVar4 + 0xb8000) = 1; \| FUN_008b5694(1); \| thunk_FUN_0087a726(0); \| uVar5 = *piVar1 + 0x20080; \| } \| thunk_FUN_0087a716(uVar` |
| kernel.c | 1529779 | `FUN_006f3e02(*(int *)(puVar1 + 0x18),1,0x4d,0x1fb); \| } \| if (*(int *)(puVar1 + 0x1c) != 0) { \| FUN_006f3e02(*(int *)(puVar1 + 0x1c),1,0x4d,` |
| kernel.c | 1536024 | `FUN_006fb8b0(s_s_fiq_num____s_fiq_status_postio_006f512c,s_threadx_os_c_006f511c,0x2c6); \| } \| if (*(int *)(iVar1 + 8) == 0) { \| FUN_006fb8b` |
| kernel.c | 1541417 | `puVar7 = (uint *)0x0; \| uVar6 = 0; \| if (param_1 + 4U < 0x641) { \| iVar9 = DAT_0098d6b8 + -0x2000; \| if (*(byte *)(DAT_0098d6b8 + 0x10) != 0` |
| kernel.c | 1544655 | `uVar3 = 4; \| } \| else if (puVar6[uVar7] == '\0') { \| if ((uVar4 < 0x200) \|\| (0x375 < uVar4)) goto LAB_0098fffc; \| uVar3 = 1; \| } \| else if (` |
| kernel.c | 1544658 | `if ((uVar4 < 0x200) \|\| (0x375 < uVar4)) goto LAB_0098fffc; \| uVar3 = 1; \| } \| else if ((uVar4 < 0x200) \|\| (0x32a < uVar4)) { \| LAB_0098fffc:` |
| kernel.c | 1544812 | `if (param_2 - 0x3cf < 0x31) { \| uVar2 = sVar1 - 0x1dc; \| } \| else if (param_2 - 0x200 < 0x176) { \| if ((((param_1 == 3) \|\| (param_1 == 7)) \|` |
| kernel.c | 1544814 | `} \| else if (param_2 - 0x200 < 0x176) { \| if ((((param_1 == 3) \|\| (param_1 == 7)) \|\| (param_1 == 5)) \|\| (param_1 == 9)) { \| if (0x12a < para` |
| kernel.c | 1548392 | `if (*(char *)(iVar3 + 0x1fc) != '\0') { \| uVar1 = FUN_006f3afa(0x48,0,2,0x93,0x119a); \| FUN_006eff76(&local_24,0,uVar1,0x15e,0x72); \| FUN_00` |
| kernel.c | 1548451 | `local_20 = 0; \| uVar1 = FUN_006f3afa(0x48,0,2,0x93,0x11e0); \| FUN_006eff76(&local_2c,0,uVar1,0x15e,0x72); \| FUN_006f3e8a(uVar1,iVar3 + 0x200` |
| kernel.c | 1550043 | `} \| else { \| if (param_2 < 0x100) { \| uVar4 = 0x200; \| } \| else if (param_2 < 0x200) { \| uVar4 = 0x100;` |
| kernel.c | 1550045 | `if (param_2 < 0x100) { \| uVar4 = 0x200; \| } \| else if (param_2 < 0x200) { \| uVar4 = 0x100; \| } \| else {` |
| kernel.c | 1550121 | `FUN_006f4c52(0x20,DAT_00996b58,2,*(undefined1 *)*param_1); \| } \| if (*(int *)(*param_1 + 0x18) == 0) { \| uVar3 = 0x200; \| } \| else { \| uVar3` |
| kernel.c | 1556681 | `iVar2 = FUN_008ae84e(); \| if (iVar2 != 0x2f2) { \| iVar2 = FUN_008ae84e(); \| uVar8 = 0xf2 < iVar2 - 0x200U; \| if (iVar2 == 0x2f3) { \| iVar2 =` |
| kernel.c | 1557284 | `puVar8 = puVar8 + 1; \| uVar2 = (*(code *)param_4[6])(uStack_30); \| iVar9 = iVar9 + -1; \| uVar6 = uVar6 \| 0x200; \| *puStack_2c = puVar8; \| iS` |
| kernel.c | 1557298 | `uVar2 = (*(code *)param_4[6])(uStack_30); \| if (uVar2 != 0x30) break; \| iVar12 = iVar12 + -1; \| uVar6 = uVar6 \| 0x200; \| *puStack_2c = puVar` |
| kernel.c | 1557382 | `puVar8 = puVar8 + 1; \| iVar1 = (*(code *)param_4[6])(uStack_30); \| *puStack_2c = puVar8; \| uVar6 = uVar6 \| 0x200; \| } \| } \| goto LAB_009c11c` |
| kernel.c | 1557387 | `} \| goto LAB_009c11c8; \| } \| uVar7 = uVar6 \| 0x200; \| if (pcVar14 < acStack_67 + 0x12) { \| pcVar13 = pcVar14 + 1; \| *pcVar14 = (char)uVar2 +` |
| kernel.c | 1558905 | `*(undefined4 *)(iVar8 + 0x40) = 0x40; \| *(undefined4 *)(iVar8 + 0x44) = 0x80; \| *(undefined4 *)(iVar8 + 0x48) = 0x100; \| *(undefined4 *)(iVa` |
| kernel.c | 1559128 | `*(undefined4 *)(iVar8 + 0x40) = 0x40; \| *(undefined4 *)(iVar8 + 0x44) = 0x80; \| *(undefined4 *)(iVar8 + 0x48) = 0x100; \| *(undefined4 *)(iVa` |
| kernel.c | 1562031 | `*(undefined4 *)(pcVar11 + (int)pcVar16 * 4 + 4),0x40, \| DAT_009a5608 + 0x10); \| *(uint *)(&DAT_000099e8 + *piVar4) = \| *(uint *)(&DAT_000099` |
| kernel.c | 1562033 | `*(uint *)(&DAT_000099e8 + *piVar4) = \| *(uint *)(&DAT_000099e8 + *piVar4) \| 0x200; \| iVar7 = *piVar3; \| *(uint *)(iVar7 + 0x4cc) = *(uint *)` |
| kernel.c | 1562593 | `*(undefined4 *)(pcVar11 + (int)pcVar16 * 4 + 4),0x11c, \| DAT_009a638c + 0x10); \| iVar7 = *piVar4; \| *(uint *)(&DAT_000099e8 + iVar7) = *(uin` |
| kernel.c | 1562595 | `iVar7 = *piVar4; \| *(uint *)(&DAT_000099e8 + iVar7) = *(uint *)(&DAT_000099e8 + iVar7) \| 0x2000; \| iVar12 = *piVar3; \| *(uint *)(iVar12 + 0x` |
| kernel.c | 1563223 | `*(undefined4 *)(puVar3 + 0x144) = 1; \| iVar6 = DAT_009a72e4; \| *(int *)(puVar3 + 0x158) = DAT_009a72e4; \| *(undefined4 *)(puVar3 + 0x164) = ` |
| kernel.c | 1563227 | `*(undefined4 *)(puVar3 + 0x168) = 1; \| *(undefined4 *)(puVar3 + 0x160) = 0; \| *(undefined4 *)(puVar3 + 0x15c) = 0; \| *(undefined4 *)(puVar3 ` |
| kernel.c | 1563229 | `*(undefined4 *)(puVar3 + 0x15c) = 0; \| *(undefined4 *)(puVar3 + 0x16c) = 0x2000; \| *(undefined4 *)(puVar3 + 0x170) = 1; \| *(undefined4 *)(pu` |
| kernel.c | 1563232 | `*(undefined4 *)(puVar3 + 400) = 0x2000; \| *(undefined4 *)(puVar3 + 0x194) = 1; \| *(undefined4 *)(puVar3 + 0x18c) = 0; \| *(undefined4 *)(puVa` |
| kernel.c | 1563234 | `*(undefined4 *)(puVar3 + 0x18c) = 0; \| *(undefined4 *)(puVar3 + 0x198) = 0x2000; \| *(undefined4 *)(puVar3 + 0x19c) = 1; \| *(int *)(puVar3 + ` |
| kernel.c | 1563269 | `FUN_006f2c00(0,s_PS_stack_las_rrc_as_ue_src_abstr_009a7140,0x118,s_LOGGER_ASSERT_009a7130, \| s_Failed_to_init_the_queue_009a7300); \| } \| iVa` |
| kernel.c | 1565078 | `*(undefined1 *)(iVar11 + 0x79c) = 0; \| } \| *(undefined1 *)(iVar11 + 0x3fd) = 0; \| if (*(char *)(iVar11 + 0x200) == '\x01') { \| *(undefined1 ` |
| kernel.c | 1565079 | `} \| *(undefined1 *)(iVar11 + 0x3fd) = 0; \| if (*(char *)(iVar11 + 0x200) == '\x01') { \| *(undefined1 *)(iVar11 + 0x200) = 0; \| puVar12 = (un` |
| kernel.c | 1572296 | `FUN_006f4a98(0x18,DAT_009b7cb4); \| } \| if (*(int *)(param_1 + 0x598) == 0) { \| FUN_006f2c00(0,DAT_009b7cb8 + -0x4d4,0x2005,DAT_009b7cb8 + -0` |
| kernel.c | 1572299 | `FUN_006f2c00(0,DAT_009b7cb8 + -0x4d4,0x2005,DAT_009b7cb8 + -0x490,DAT_009b7cb8); \| } \| if (puVar5[1] == 0) { \| FUN_006f2c00(0,DAT_009b7ca8 +` |
| kernel.c | 1572302 | `FUN_006f2c00(0,DAT_009b7ca8 + 0x14,0x2005,DAT_009b7ca8 + 0x58,DAT_009b7ca8 + 0x38); \| } \| if (*(short *)(param_1 + 0x594) == 0) { \| FUN_006f` |
| kernel.c | 1572305 | `FUN_006f2c00(0,DAT_009b7ca8 + 0x14,0x2005,DAT_009b7ca8 + 0x58,DAT_009b7cac); \| } \| FUN_006f1aee(puVar5[1],*(undefined4 *)(param_1 + 0x598),*` |
| kernel.c | 1572307 | `FUN_006f1aee(puVar5[1],*(undefined4 *)(param_1 + 0x598),*(undefined2 *)(param_1 + 0x594), \| DAT_009b7ca8 + 0x14,0x2005); \| } \| FUN_006f1b7c(` |
| kernel.c | 1577972 | `uVar7 = uVar6 & 0xfff803ff \| uVar4 \| uVar10; \| } \| else { \| uVar7 = uVar7 \| 0x20000; \| } \| *(uint *)(iVar3 + 0x894) = uVar7; \| iVar5 = DAT_0` |
| kernel.c | 1579013 | `puVar8 = puVar8 + 1; \| uVar2 = (*(code *)param_4[6])(local_30); \| iVar9 = iVar9 + -1; \| uVar6 = uVar6 \| 0x200; \| *local_2c = puVar8; \| local` |
| kernel.c | 1579027 | `uVar2 = (*(code *)param_4[6])(local_30); \| if (uVar2 != 0x30) break; \| iVar12 = iVar12 + -1; \| uVar6 = uVar6 \| 0x200; \| *local_2c = puVar3 +` |
| kernel.c | 1579111 | `puVar8 = puVar8 + 1; \| iVar1 = (*(code *)param_4[6])(local_30); \| *local_2c = puVar8; \| uVar6 = uVar6 \| 0x200; \| } \| } \| goto LAB_009c11c8;` |
| kernel.c | 1579116 | `} \| goto LAB_009c11c8; \| } \| uVar7 = uVar6 \| 0x200; \| if (pcVar14 < local_67 + 0x12) { \| pcVar13 = pcVar14 + 1; \| *pcVar14 = (char)uVar2 + -` |
| kernel.c | 1580125 | `s_Invalid_value_009c2688); \| } \| iVar6 = (short)local_5c * 0x1ef7; \| iVar8 = param_5 + 0x2000; \| if ((&DAT_0000f670)[*DAT_009c26a8 + (short)` |
| kernel.c | 1588221 | `(((uVar3 & 1) != 0 && \| ((iVar2 = FUN_009d18ce(param_1), iVar2 != 0 \|\| \| (*(int *)(DAT_009d1d14 + param_1 * 4 + 0xc) == 2)))))) { \| uVar4 = ` |
| kernel.c | 1588253 | `uVar4 = uVar4 \| 0x808; \| } \| if (((int)(uVar3 << 0xd) < 0) \|\| ((int)(uVar3 << 0xc) < 0)) { \| uVar4 = uVar4 \| 0x2000; \| } \| if ((int)(uVar3 <` |
| kernel.c | 1588265 | `uVar4 = uVar4 \| 0x10004; \| } \| if (((int)(uVar3 << 4) < 0) \|\| ((int)(uVar3 << 3) < 0)) { \| uVar4 = uVar4 \| 0x20004; \| } \| if (((int)(uVar3 <` |
| kernel.c | 1588280 | `uVar4 = uVar4 \| 0x400008; \| } \| if ((uVar4 == 0) && ((uVar3 & 1) != 0)) { \| uVar4 = 0x200000; \| } \| if ('\x02' < *DAT_009d1c94) { \| FUN_006f` |
| kernel.c | 1589431 | `FUN_006fb8b0(s_s_fiq_num____s_fiq_status_postio_006f512c,s_threadx_os_c_006f511c,0x2c6); \| } \| if (*(int *)(iVar1 + 8) == 0) { \| FUN_006fb8b` |
| kernel.c | 1591389 | `*(short *)(param_1 + 0x212) = (short)(int)(lVar1 >> 0x25) - (short)(lVar1 >> 0x3f); \| } \| *(undefined4 *)(param_1 + 0x1f0) = 0; \| *(undefine` |
| kernel.c | 1593195 | `} \| *(undefined1 *)(DAT_009da8a4 + 0x539) = 0; \| if ((local_2c == (char *)0x2) && (iVar5 = thunk_FUN_006dc8a0(), iVar5 != 0)) { \| FUN_001262` |
| kernel.c | 1593265 | `if (iVar6 == 0) { \| return; \| } \| FUN_001262aa(0,0x20000); \| return; \| } \| if ((*(int *)(*(int *)(*DAT_009da8a0 + 0x50) + 0x1c) == 1) &&` |
| kernel.c | 1594257 | `LAB_009dbd2e: \| iVar6 = thunk_FUN_006dc8a0(); \| if (iVar6 != 0) { \| FUN_001262aa(0,0x20000); \| } \| LAB_009db88a: \| if (*(int *)(*piVar3 + 0x` |
| kernel.c | 1594485 | `} \| *(undefined1 *)(DAT_009dd8a0 + 0x539) = 0; \| if ((param_1 == 2) && (iVar6 = thunk_FUN_006dc8a0(), iVar6 != 0)) { \| FUN_001262aa(0,0x2000` |
| kernel.c | 1595007 | `local_84 = (code *)(param_1 + 0xa60); \| LAB_009de48c: \| local_80 = local_80 & 0xffffff00; \| local_7c = IRQ; \| local_88 = (code *)0x1; \| FUN_` |
| kernel.c | 1598758 | `if ('\x02' < *pcVar1) { \| FUN_006f4a98(0x18,DAT_009eb448 + 1); \| } \| local_20 = local_20 \| 0x200000; \| local_80 = param_1; \| } \| if (*(char ` |
| kernel.c | 1599749 | `(&DAT_0000b929)[iVar3] = 1; \| *(undefined4 *)(&DAT_0000b924 + iVar3) = 0x7fffffff; \| *(undefined1 *)(iVar3 + 0xbd80) = 0; \| *(uint *)(param_` |
| kernel.c | 1600579 | `piVar1 = DAT_009edcd0; \| if ((char)param_1[0x10] != '\0') { \| *(uint **)(param_5 + 0x134) = param_1; \| *(uint *)(param_4 + 8) = *(uint *)(pa` |
| kernel.c | 1602697 | `(&DAT_0000b8e7)[iVar2] = 1; \| *(undefined4 *)(&DAT_0000ac98 + iVar2) = 0; \| *(undefined4 *)(&LAB_0000ae20 + iVar2) = 0x7fffffff; \| *param_2 ` |
| kernel.c | 1615906 | `} \| } \| else { \| local_28[0] = local_28[0] \| 0x200000; \| iVar3 = FUN_006f3178(0,0x1c8,5,0x3e,0x6d45); \| FUN_006fe9dc(iVar3,0x1c8); \| if (iVa` |
| kernel.c | 1616085 | `local_298 = (char *)0xfc; \| local_28c = 0; \| FUN_0002d490(5,5,*(undefined1 *)(DAT_00a06c98 + iVar6 * 4),0x75); \| local_6c = local_6c \| 0x200` |
| kernel.c | 1631933 | `undefined1 auStack_40 [32]; \|  \| FUN_006fe9dc(auStack_40,0x20); \| FUN_006fe9dc(auStack_240,0x200); \| puVar2 = DAT_00a1d9d4; \| iVar1 = DAT_00` |
| kernel.c | 1632022 | `int iVar2; \| undefined1 auStack_218 [516]; \|  \| FUN_006fe9dc(auStack_218,0x200); \| if (param_2 == 0) { \| FUN_00adb714(auStack_218,s_null_00a` |
| kernel.c | 1632071 | `uint uVar8; \| undefined1 auStack_21c [512]; \|  \| FUN_006fe9dc(auStack_21c,0x200); \| puVar2 = DAT_00a1df58; \| pcVar1 = DAT_00a1df54; \| iVar3 ` |
| kernel.c | 1632479 | `} \| goto LAB_00a1e104; \| } \| uVar2 = *(uint *)(iVar4 + 8) \| 0x200; \| goto LAB_00a1e09c; \| case 4: \| uVar2 = *(uint *)(iVar4 + 8) & 0xfffffdf` |
| kernel.c | 1632639 | `uVar2 = *(uint *)(iVar1 + 8) \| 0x400; \| break; \| case 2: \| uVar2 = *(uint *)(iVar1 + 8) \| 0x200; \| break; \| case 3: \| case 6:` |
| kernel.c | 1632699 | `iVar2 = DAT_00a1e404 + param_1 * 0x998; \| if (param_2 == 0x76) { \| FUN_00a1dc8a(param_1); \| uVar1 = *(uint *)(iVar2 + 8) \| 0x20000000; \| got` |
| kernel.c | 1632724 | `break; \| case 0x7a: \| FUN_00a1dc8a(param_1); \| uVar1 = *(uint *)(iVar2 + 8) \| 0x2000000; \| break; \| case 0x7b: \| FUN_00a1dca4(param_1);` |
| kernel.c | 1632788 | `goto switchD_00a1e328_caseD_6b; \| case 0x74: \| FUN_00a1dc8a(param_1); \| uVar1 = *(uint *)(iVar2 + 8) \| 0x200000; \| break; \| case 0x75: \| FUN` |
| kernel.c | 1632945 | `} \| else if (param_2 == 0x38) { \| FUN_00a1dca4(param_1); \| uVar1 = *(uint *)(iVar3 + 8) \| 0x20000; \| } \| else { \| if (param_2 != 0x39) {` |
| kernel.c | 1632996 | `break; \| case 0x41: \| switchD_00a1e5e2_caseD_41: \| uVar1 = *(uint *)(iVar3 + 8) \| 0x200; \| break; \| default: \| goto switchD_00a1e5e2_default` |
| kernel.c | 1647336 | `*(undefined2 *)(param_1 + 0x1c) = 0; \| *(undefined2 *)(param_1 + 0x20) = 0; \| *(undefined4 *)(param_1 + 0x28) = 0; \| *(undefined2 *)(param_1` |
| kernel.c | 1647410 | `*(undefined2 *)(param_1 + 0x9b2) = param_5[1]; \| *(undefined2 *)(param_1 + 0x9b4) = *param_6; \| if (*(char *)(param_1 + 0xa01) == '\0') { \| ` |
| kernel.c | 1647771 | `uVar1 = *(ushort *)(param_1 + 0x1c); \| uVar5 = 0; \| uVar6 = uVar1 - uVar7 & 0x1ff; \| if ((*(short *)(param_1 + 0x10) == 0x200) && \| (*(int *` |
| kernel.c | 1658474 | `if (param_1[0x178] != '\0' && cVar1 != '\0') { \| bVar9 = param_1[0x1fc] == '\0'; \| if (!bVar9) { \| param_1 = param_1 + 0x200; \| bVar9 = para` |
| kernel.c | 1658644 | `if (param_1[0x178] != '\0' && cVar1 != '\0') { \| bVar9 = param_1[0x1fc] == '\0'; \| if (!bVar9) { \| param_1 = param_1 + 0x200; \| bVar9 = para` |
| kernel.c | 1659097 | `*(undefined1 *)(*(int *)(iVar7 + 0x1934) + 0x2ec5) = param_1[0x1f8]; \| if (*(int *)(param_1 + 0x1fc) == 0) { \| *(undefined4 *)(*(int *)(iVar` |
| kernel.c | 1659628 | `*(undefined4 *)(*(int *)(iVar7 + 0x1934) + 0x9a4) = *(undefined4 *)(param_1 + 0x9c); \| } \| else if (*(int *)(param_1 + 0x98) != 1) { \| FUN_0` |
| kernel.c | 1659868 | `else if (iVar10 == 1) { \| *(undefined4 *)(*(int *)(iVar7 + 0x1934) + 0x21cc) = 1; \| cVar2 = param_1[0x16c]; \| uVar15 = *(int *)(iVar7 + 0x19` |
| kernel.c | 1661502 | `*(char *)(*(int *)(iVar7 + 0x1938) + 0x2ec5) = param_1[0x1f8]; \| if (*(int *)(param_1 + 0x1fc) == 0) { \| *(undefined4 *)(*(int *)(iVar7 + 0x` |
| kernel.c | 1662952 | `else if (iVar9 == 1) { \| *(undefined4 *)(*(int *)(iVar7 + 0x1938) + 0x21cc) = 1; \| cVar2 = param_1[0x16c]; \| uVar8 = *(int *)(iVar7 + 0x1938` |
| kernel.c | 1663301 | `*(char *)(*(int *)(iVar7 + 0x1938) + 0x2ec5) = param_1[0x1f8]; \| if (*(int *)(param_1 + 0x1fc) == 0) { \| *(undefined4 *)(*(int *)(iVar7 + 0x` |
| kernel.c | 1664751 | `else if (iVar9 == 1) { \| *(undefined4 *)(*(int *)(iVar7 + 0x1938) + 0x21cc) = 1; \| cVar2 = param_1[0x16c]; \| uVar8 = *(int *)(iVar7 + 0x1938` |
| kernel.c | 1670727 | `puVar3[1] = puVar3[1] + 1 & 0x7ff; \| } \| } \| puVar3[1] = (ushort)((param_1 + 1) * 0x200000 >> 0x15); \| LAB_00a4d79a: \| if (*puVar3 == param_` |
| kernel.c | 1670735 | `(puVar3 + (uint)uVar1 * 8 + 6)[0] = 2; \| (puVar3 + (uint)uVar1 * 8 + 6)[1] = 0; \| uVar1 = *puVar3; \| *puVar3 = (ushort)((uVar1 + 1) * 0x2000` |
| kernel.c | 1671328 | `FUN_00a2dc56(&local_2c,param_3 - 2 & 0xfffffffe,0x20); \| local_34 = local_2c; \| local_30 = iStack_28; \| *(int *)(param_1 + 0x9cc) = *(int *)` |
| kernel.c | 1671330 | `local_30 = iStack_28; \| *(int *)(param_1 + 0x9cc) = *(int *)(param_1 + 0x9cc) + param_5 * 0x200; \| FUN_00a5ed30(param_1,param_3 - 2 >> 1,1,(` |
| kernel.c | 1671442 | `FUN_00a2dc7e(&local_28); \| } \| if ((param_4 == 0) && ((short)param_1[7] == 0)) { \| param_1[0x274] = param_1[0x274] + 0x200; \| } \| return CON` |
| kernel.c | 1671598 | `FUN_00a2dc7e(&local_2c); \| } \| if ((param_5 == 0) && (*(short *)(param_1 + 0x1c) == 0)) { \| *(int *)(param_1 + 0x9d0) = *(int *)(param_1 + 0` |
| kernel.c | 1671681 | `} \| if (*(short *)(param_1 + 0x22) == 0x1ff) { \| *(undefined2 *)(param_1 + 0x22) = 0; \| *(int *)(param_1 + 0x9c8) = *(int *)(param_1 + 0x9c8` |
| kernel.c | 1673375 | `if (*(char *)(DAT_00a54c38 + 0x6b5) == '\0') { \| if (param_1 < (code *)0x46d) { \| if (param_1 < (code *)0x5c) { \| if (param_1 < IRQ) { \| if ` |
| kernel.c | 1673492 | `uVar3 = 4; \| goto LAB_00a54fda; \| } \| if (param_1 < IRQ) { \| LAB_00a54fb6: \| uVar3 = 5; \| goto LAB_00a54fda;` |
| kernel.c | 1678547 | `(uVar39 >> 0x16 \| uVar39 << 10)) + \| (uVar39 & uVar51 \| (uVar51 \| uVar39) & uVar47); \| iVar44 = uVar46 + uVar43 + \| ((uVar58 >> 6 \| uVar58 *` |
| kernel.c | 1678555 | `(uVar54 & uVar39 \| (uVar54 \| uVar39) & uVar51); \| iVar44 = uVar41 + uVar52 + \| ((uVar58 ^ uVar42) & uVar60 ^ uVar42) + \| ((uVar60 >> 6 \| uVa` |
| kernel.c | 1678563 | `(uVar48 >> 0x16 \| uVar48 * 0x400)); \| iVar44 = uVar56 + uVar42 + \| ((uVar60 ^ uVar58) & uVar61 ^ uVar58) + \| ((uVar61 >> 6 \| uVar61 * 0x4000` |
| kernel.c | 1678570 | `(uVar53 >> 0x16 \| uVar53 * 0x400)) + (uVar53 & uVar48 \| (uVar53 \| uVar48) & uVar54) + \| iVar44; \| iVar44 = uVar20 + uVar58 + \| ((uVar63 >> 6` |
| kernel.c | 1678578 | `iVar44; \| iVar44 = DAT_00a5b6b4 + \| uVar57 + uVar60 + \| ((uVar54 >> 6 \| uVar54 * 0x4000000) ^ (uVar54 >> 0xb \| uVar54 * 0x200000) ^ \| (uVar5` |
| kernel.c | 1678585 | `((uVar58 >> 2 \| uVar58 * 0x40000000) ^ (uVar58 >> 0xd \| uVar58 * 0x80000) ^ \| (uVar58 >> 0x16 \| uVar58 * 0x400)); \| iVar44 = ((uVar54 ^ uVar` |
| kernel.c | 1678593 | `(uVar49 & uVar58 \| (uVar49 \| uVar58) & uVar45); \| iVar44 = DAT_00a5b6bc + \| uVar63 + uVar24 + \| ((uVar53 >> 6 \| uVar53 * 0x4000000) ^ (uVar5` |
| kernel.c | 1678600 | `(uVar61 >> 0x16 \| uVar61 * 0x400)) + \| (uVar61 & uVar49 \| (uVar61 \| uVar49) & uVar58); \| iVar44 = uVar26 + uVar54 + \| ((uVar45 >> 6 \| uVar45` |
| kernel.c | 1678607 | `((uVar60 >> 2 \| uVar60 * 0x40000000) ^ (uVar60 >> 0xd \| uVar60 * 0x80000) ^ \| (uVar60 >> 0x16 \| uVar60 * 0x400)); \| iVar44 = uVar28 + uVar48` |
| kernel.c | 1678615 | `(uVar54 >> 0x16 \| uVar54 * 0x400)); \| iVar44 = DAT_00a5baf8 + \| uVar30 + uVar53 + \| ((uVar49 >> 6 \| uVar49 * 0x4000000) ^ (uVar49 >> 0xb \| u` |
| kernel.c | 1678622 | `(uVar48 >> 0x16 \| uVar48 * 0x400)) + \| (uVar48 & uVar54 \| (uVar48 \| uVar54) & uVar60); \| iVar44 = uVar32 + uVar45 + \| ((uVar61 >> 6 \| uVar61` |
| kernel.c | 1678629 | `((uVar53 >> 2 \| uVar53 * 0x40000000) ^ (uVar53 >> 0xd \| uVar53 * 0x80000) ^ \| (uVar53 >> 0x16 \| uVar53 * 0x400)); \| iVar44 = uVar34 + uVar58` |
| kernel.c | 1678637 | `(uVar45 & uVar53 \| (uVar45 \| uVar53) & uVar48); \| iVar44 = DAT_00a5bb04 + \| uVar36 + uVar49 + \| ((uVar54 >> 6 \| uVar54 * 0x4000000) ^ (uVar5` |
| kernel.c | 1678644 | `(uVar58 >> 0x16 \| uVar58 * 0x400)) + \| (uVar58 & uVar45 \| (uVar58 \| uVar45) & uVar53); \| iVar44 = uVar59 + uVar61 + \| ((uVar48 >> 6 \| uVar48` |
| kernel.c | 1678651 | `((uVar49 >> 2 \| uVar49 * 0x40000000) ^ (uVar49 >> 0xd \| uVar49 * 0x80000) ^ \| (uVar49 >> 0x16 \| uVar49 * 0x400)); \| iVar44 = uVar60 + uVar55` |
| kernel.c | 1678660 | `uVar63 = ((uVar35 >> 0x11 \| uVar59 << 0xf) ^ (uVar35 >> 0x13 \| uVar59 << 0xd) ^ uVar50 >> 10) + \| ((uVar46 >> 7 \| (uint)bVar1 << 0x19) ^ (uV` |
| kernel.c | 1678670 | `uVar46 = ((uVar37 >> 0x11 \| uVar55 << 0xf) ^ (uVar37 >> 0x13 \| uVar55 << 0xd) ^ uVar38 >> 10) + \| ((uVar41 >> 7 \| (uint)bVar2 << 0x19) ^ (uV` |
| kernel.c | 1678678 | `((uVar15 >> 2 \| uVar15 * 0x40000000) ^ (uVar15 >> 0xd \| uVar15 * 0x80000) ^ \| (uVar15 >> 0x16 \| uVar15 * 0x400)); \| uVar54 = uVar32 + uVar41` |
| kernel.c | 1678681 | `((uVar63 >> 0x11 \| uVar63 * 0x8000) ^ (uVar63 >> 0x13 \| uVar63 * 0x2000) ^ uVar63 >> 10) \| + ((uVar56 >> 7 \| (uint)bVar3 << 0x19) ^ (uVar17 ` |
| kernel.c | 1678688 | `(uVar50 >> 0x16 \| uVar50 * 0x400)) + \| (uVar50 & uVar15 \| (uVar50 \| uVar15) & uVar60); \| uVar40 = uVar34 + uVar56 + \| ((uVar46 >> 0x11 \| uVa` |
| kernel.c | 1678692 | `+ ((uVar20 >> 7 \| (uint)bVar4 << 0x19) ^ (uVar18 >> 0x12 \| uVar20 << 0xe) ^ uVar20 >> 3); \| iVar44 = DAT_00a5bf30 + \| uVar40 + uVar45 + ((uV` |
| kernel.c | 1678698 | `uVar17 = iVar44 + (uVar38 & uVar50 \| (uVar38 \| uVar50) & uVar15) + \| ((uVar38 >> 2 \| uVar38 * 0x40000000) ^ (uVar38 >> 0xd \| uVar38 * 0x8000` |
| kernel.c | 1678701 | `uVar20 = ((uVar54 >> 0x11 \| uVar54 * 0x8000) ^ (uVar54 >> 0x13 \| uVar54 * 0x2000) ^ uVar54 >> 10) \| + ((uVar57 >> 7 \| (uint)bVar5 << 0x19) ^` |
| kernel.c | 1678708 | `uVar16 = iVar44 + (uVar17 & uVar38 \| (uVar17 \| uVar38) & uVar50) + \| ((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x8000` |
| kernel.c | 1678712 | `+ ((uVar62 >> 7 \| (uint)bVar6 << 0x19) ^ (uVar21 >> 0x12 \| uVar62 << 0xe) ^ uVar62 >> 3) \| + uVar59 + uVar57; \| iVar44 = ((uVar60 ^ uVar61) ` |
| kernel.c | 1678718 | `uVar19 = iVar44 + (uVar16 & uVar17 \| (uVar16 \| uVar17) & uVar38) + \| ((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x8000` |
| kernel.c | 1678721 | `uVar41 = ((uVar20 >> 0x11 \| uVar20 * 0x8000) ^ (uVar20 >> 0x13 \| uVar20 * 0x2000) ^ uVar20 >> 10) \| + ((uVar24 >> 7 \| (uint)bVar7 << 0x19) ^` |
| kernel.c | 1678728 | `uVar22 = iVar44 + (uVar19 & uVar16 \| (uVar19 \| uVar16) & uVar17) + \| ((uVar19 >> 2 \| uVar19 * 0x40000000) ^ (uVar19 >> 0xd \| uVar19 * 0x8000` |
| kernel.c | 1678732 | `+ ((uVar26 >> 7 \| (uint)bVar8 << 0x19) ^ (uVar23 >> 0x12 \| uVar26 << 0xe) ^ uVar26 >> 3) \| + uVar63 + uVar24; \| iVar44 = ((uVar50 ^ uVar15) ` |
| kernel.c | 1678738 | `uVar18 = iVar44 + (uVar22 & uVar19 \| (uVar22 \| uVar19) & uVar16) + \| ((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x8000` |
| kernel.c | 1678741 | `uVar26 = ((uVar41 >> 0x11 \| uVar41 * 0x8000) ^ (uVar41 >> 0x13 \| uVar41 * 0x2000) ^ uVar41 >> 10) \| + ((uVar28 >> 7 \| (uint)bVar9 << 0x19) ^` |
| kernel.c | 1678748 | `uVar15 = iVar44 + (uVar18 & uVar22 \| (uVar18 \| uVar22) & uVar19) + \| ((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x8000` |
| kernel.c | 1678751 | `uVar28 = ((uVar24 >> 0x11 \| uVar24 * 0x8000) ^ (uVar24 >> 0x13 \| uVar24 * 0x2000) ^ uVar24 >> 10) \| + ((uVar30 >> 7 \| (uint)bVar10 << 0x19) ` |
| kernel.c | 1678759 | `(uVar15 >> 0x16 \| uVar15 * 0x400)) + \| (uVar15 & uVar18 \| (uVar15 \| uVar18) & uVar22); \| uVar27 = uVar40 + uVar30 + \| ((uVar26 >> 0x11 \| uVa` |
| kernel.c | 1678763 | `+ ((uVar32 >> 7 \| (uint)bVar11 << 0x19) ^ (uVar29 >> 0x12 \| uVar32 << 0xe) ^ uVar32 >> 3) \| ; \| iVar44 = uVar27 + ((uVar16 ^ uVar17) & uVar1` |
| kernel.c | 1678770 | `(uVar21 >> 0x16 \| uVar21 * 0x400)) + \| (uVar21 & uVar15 \| (uVar21 \| uVar15) & uVar18); \| uVar29 = uVar32 + uVar20 + \| ((uVar28 >> 0x11 \| uVa` |
| kernel.c | 1678774 | `+ ((uVar34 >> 7 \| (uint)bVar12 << 0x19) ^ (uVar31 >> 0x12 \| uVar34 << 0xe) ^ uVar34 >> 3) \| ; \| iVar44 = uVar29 + uVar17 + ((uVar22 >> 6 \| u` |
| kernel.c | 1678780 | `uVar17 = iVar44 + ((uVar23 >> 2 \| uVar23 * 0x40000000) ^ (uVar23 >> 0xd \| uVar23 * 0x80000) ^ \| (uVar23 >> 0x16 \| uVar23 * 0x400)) + \| (uVar` |
| kernel.c | 1678783 | `uVar30 = ((uVar27 >> 0x11 \| uVar27 * 0x8000) ^ (uVar27 >> 0x13 \| uVar27 * 0x2000) ^ uVar27 >> 10) \| + ((uVar36 >> 7 \| (uint)bVar13 << 0x19) ` |
| kernel.c | 1678790 | `uVar16 = iVar44 + (uVar17 & uVar23 \| (uVar17 \| uVar23) & uVar21) + \| ((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x8000` |
| kernel.c | 1678794 | `+ ((uVar59 >> 7 \| (uint)bVar14 << 0x19) ^ (uVar35 >> 0x12 \| uVar59 << 0xe) ^ uVar59 >> 3) \| + uVar41 + uVar36; \| iVar44 = ((uVar18 ^ uVar22)` |
| kernel.c | 1678800 | `uVar19 = iVar44 + (uVar16 & uVar17 \| (uVar16 \| uVar17) & uVar23) + \| ((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x8000` |
| kernel.c | 1678803 | `uVar34 = ((uVar30 >> 0x11 \| uVar30 * 0x8000) ^ (uVar30 >> 0x13 \| uVar30 * 0x2000) ^ uVar30 >> 10) \| + ((uVar55 >> 7 \| (uint)*(byte *)(param_` |
| kernel.c | 1678810 | `uVar22 = iVar44 + ((uVar19 >> 2 \| uVar19 * 0x40000000) ^ (uVar19 >> 0xd \| uVar19 * 0x80000) ^ \| (uVar19 >> 0x16 \| uVar19 * 0x400)) + \| (uVar` |
| kernel.c | 1678811 | `(uVar19 >> 0x16 \| uVar19 * 0x400)) + \| (uVar19 & uVar16 \| (uVar19 \| uVar16) & uVar17); \| uVar37 = ((uVar32 >> 0x11 \| uVar32 * 0x8000) ^ (uVa` |
| kernel.c | 1678814 | `+ ((uVar63 >> 7 \| uVar63 * 0x2000000) ^ (uVar63 >> 0x12 \| uVar63 * 0x4000) ^ uVar63 >> 3) \| + uVar26 + uVar55; \| iVar44 = ((uVar21 ^ uVar15)` |
| kernel.c | 1678820 | `uVar18 = iVar44 + (uVar22 & uVar19 \| (uVar22 \| uVar19) & uVar16) + \| ((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x8000` |
| kernel.c | 1678821 | `((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x80000) ^ \| (uVar22 >> 0x16 \| uVar22 * 0x400)); \| uVar36 = ((uVar34 >> 0x1` |
| kernel.c | 1678823 | `uVar36 = ((uVar34 >> 0x11 \| uVar34 * 0x8000) ^ (uVar34 >> 0x13 \| uVar34 * 0x2000) ^ uVar34 >> 10) \| + ((uVar46 >> 7 \| uVar46 * 0x2000000) ^ ` |
| kernel.c | 1678830 | `uVar15 = iVar44 + (uVar18 & uVar22 \| (uVar18 \| uVar22) & uVar19) + \| ((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x8000` |
| kernel.c | 1678831 | `((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x80000) ^ \| (uVar18 >> 0x16 \| uVar18 * 0x400)); \| uVar45 = ((uVar37 >> 0x1` |
| kernel.c | 1678834 | `+ ((uVar54 >> 7 \| uVar54 * 0x2000000) ^ (uVar54 >> 0x12 \| uVar54 * 0x4000) ^ uVar54 >> 3) \| + uVar27 + uVar46; \| iVar44 = DAT_00a5c3c4 + \| u` |
| kernel.c | 1678842 | `((uVar15 >> 2 \| uVar15 * 0x40000000) ^ (uVar15 >> 0xd \| uVar15 * 0x80000) ^ \| (uVar15 >> 0x16 \| uVar15 * 0x400)); \| uVar31 = uVar29 + uVar54` |
| kernel.c | 1678843 | `(uVar15 >> 0x16 \| uVar15 * 0x400)); \| uVar31 = uVar29 + uVar54 + \| ((uVar36 >> 0x11 \| uVar36 * 0x8000) ^ (uVar36 >> 0x13 \| uVar36 * 0x2000) ` |
| kernel.c | 1678847 | `; \| iVar44 = DAT_00a5c3c8 + \| ((uVar16 ^ uVar17) & uVar19 ^ uVar17) + \| ((uVar19 >> 6 \| uVar19 * 0x4000000) ^ (uVar19 >> 0xb \| uVar19 * 0x20` |
| kernel.c | 1678853 | `uVar23 = iVar44 + ((uVar21 >> 2 \| uVar21 * 0x40000000) ^ (uVar21 >> 0xd \| uVar21 * 0x80000) ^ \| (uVar21 >> 0x16 \| uVar21 * 0x400)) + \| (uVar` |
| kernel.c | 1678854 | `(uVar21 >> 0x16 \| uVar21 * 0x400)) + \| (uVar21 & uVar15 \| (uVar21 \| uVar15) & uVar18); \| uVar50 = ((uVar45 >> 0x11 \| uVar45 * 0x8000) ^ (uVa` |
| kernel.c | 1678857 | `+ ((uVar20 >> 7 \| uVar20 * 0x2000000) ^ (uVar20 >> 0x12 \| uVar20 * 0x4000) ^ uVar20 >> 3) \| + uVar30 + uVar40; \| iVar44 = ((uVar19 ^ uVar16)` |
| kernel.c | 1678864 | `((uVar23 >> 2 \| uVar23 * 0x40000000) ^ (uVar23 >> 0xd \| uVar23 * 0x80000) ^ \| (uVar23 >> 0x16 \| uVar23 * 0x400)); \| uVar33 = uVar20 + uVar32` |
| kernel.c | 1678865 | `(uVar23 >> 0x16 \| uVar23 * 0x400)); \| uVar33 = uVar20 + uVar32 + \| ((uVar31 >> 0x11 \| uVar31 * 0x8000) ^ (uVar31 >> 0x13 \| uVar31 * 0x2000) ` |
| kernel.c | 1678868 | `+ ((uVar58 >> 7 \| uVar58 * 0x2000000) ^ (uVar58 >> 0x12 \| uVar58 * 0x4000) ^ uVar58 >> 3) \| ; \| iVar44 = DAT_00a5c3d0 + \| uVar33 + ((uVar18 ` |
| kernel.c | 1678875 | `uVar16 = iVar44 + (uVar17 & uVar23 \| (uVar17 \| uVar23) & uVar21) + \| ((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x8000` |
| kernel.c | 1678876 | `((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x80000) ^ \| (uVar17 >> 0x16 \| uVar17 * 0x400)); \| uVar38 = ((uVar50 >> 0x1` |
| kernel.c | 1678878 | `uVar38 = ((uVar50 >> 0x11 \| uVar50 * 0x8000) ^ (uVar50 >> 0x13 \| uVar50 * 0x2000) ^ uVar50 >> 10) \| + ((uVar41 >> 7 \| uVar41 * 0x2000000) ^ ` |
| kernel.c | 1678885 | `uVar19 = iVar44 + (uVar16 & uVar17 \| (uVar16 \| uVar17) & uVar23) + \| ((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x8000` |
| kernel.c | 1678886 | `((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x80000) ^ \| (uVar16 >> 0x16 \| uVar16 * 0x400)); \| uVar20 = ((uVar33 >> 0x1` |
| kernel.c | 1678889 | `+ ((uVar24 >> 7 \| uVar24 * 0x2000000) ^ (uVar24 >> 0x12 \| uVar24 * 0x4000) ^ uVar24 >> 3) \| + uVar37 + uVar41; \| iVar44 = ((uVar15 ^ uVar18)` |
| kernel.c | 1678895 | `uVar25 = iVar44 + ((uVar19 >> 2 \| uVar19 * 0x40000000) ^ (uVar19 >> 0xd \| uVar19 * 0x80000) ^ \| (uVar19 >> 0x16 \| uVar19 * 0x400)) + \| (uVar` |
| kernel.c | 1678896 | `(uVar19 >> 0x16 \| uVar19 * 0x400)) + \| (uVar19 & uVar16 \| (uVar19 \| uVar16) & uVar17); \| uVar24 = ((uVar38 >> 0x11 \| uVar38 * 0x8000) ^ (uVa` |
| kernel.c | 1678899 | `+ ((uVar26 >> 7 \| uVar26 * 0x2000000) ^ (uVar26 >> 0x12 \| uVar26 * 0x4000) ^ uVar26 >> 3) \| + uVar36 + uVar24; \| iVar44 = DAT_00a5c7f0 + \| u` |
| kernel.c | 1678906 | `uVar18 = iVar44 + ((uVar25 >> 2 \| uVar25 * 0x40000000) ^ (uVar25 >> 0xd \| uVar25 * 0x80000) ^ \| (uVar25 >> 0x16 \| uVar25 * 0x400)) + \| (uVar` |
| kernel.c | 1678907 | `(uVar25 >> 0x16 \| uVar25 * 0x400)) + \| (uVar25 & uVar19 \| (uVar25 \| uVar19) & uVar16); \| uVar26 = ((uVar20 >> 0x11 \| uVar20 * 0x8000) ^ (uVa` |
| kernel.c | 1678909 | `uVar26 = ((uVar20 >> 0x11 \| uVar20 * 0x8000) ^ (uVar20 >> 0x13 \| uVar20 * 0x2000) ^ uVar20 >> 10) \| + ((uVar28 >> 7 \| uVar28 * 0x2000000) ^ ` |
| kernel.c | 1678917 | `((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x80000) ^ \| (uVar18 >> 0x16 \| uVar18 * 0x400)); \| uVar35 = uVar31 + uVar28` |
| kernel.c | 1678918 | `(uVar18 >> 0x16 \| uVar18 * 0x400)); \| uVar35 = uVar31 + uVar28 + \| ((uVar24 >> 0x11 \| uVar24 * 0x8000) ^ (uVar24 >> 0x13 \| uVar24 * 0x2000) ` |
| kernel.c | 1678921 | `+ ((uVar27 >> 7 \| uVar27 * 0x2000000) ^ (uVar27 >> 0x12 \| uVar27 * 0x4000) ^ uVar27 >> 3) \| ; \| iVar44 = DAT_00a5c7f8 + \| uVar35 + ((uVar16 ` |
| kernel.c | 1678928 | `uVar21 = iVar44 + (uVar15 & uVar18 \| (uVar15 \| uVar18) & uVar25) + \| ((uVar15 >> 2 \| uVar15 * 0x40000000) ^ (uVar15 >> 0xd \| uVar15 * 0x8000` |
| kernel.c | 1678929 | `((uVar15 >> 2 \| uVar15 * 0x40000000) ^ (uVar15 >> 0xd \| uVar15 * 0x80000) ^ \| (uVar15 >> 0x16 \| uVar15 * 0x400)); \| uVar40 = ((uVar26 >> 0x1` |
| kernel.c | 1678932 | `+ ((uVar29 >> 7 \| uVar29 * 0x2000000) ^ (uVar29 >> 0x12 \| uVar29 * 0x4000) ^ uVar29 >> 3) \| + uVar50 + uVar27; \| iVar44 = ((uVar16 ^ uVar17)` |
| kernel.c | 1678939 | `(uVar21 >> 0x16 \| uVar21 * 0x400)) + \| (uVar21 & uVar15 \| (uVar21 \| uVar15) & uVar18); \| uVar28 = uVar29 + uVar33 + \| ((uVar35 >> 0x11 \| uVa` |
| kernel.c | 1678940 | `(uVar21 & uVar15 \| (uVar21 \| uVar15) & uVar18); \| uVar28 = uVar29 + uVar33 + \| ((uVar35 >> 0x11 \| uVar35 * 0x8000) ^ (uVar35 >> 0x13 \| uVar3` |
| kernel.c | 1678943 | `+ ((uVar30 >> 7 \| uVar30 * 0x2000000) ^ (uVar30 >> 0x12 \| uVar30 * 0x4000) ^ uVar30 >> 3) \| ; \| iVar44 = uVar28 + ((uVar19 ^ uVar16) & uVar2` |
| kernel.c | 1678949 | `uVar17 = iVar44 + ((uVar27 >> 2 \| uVar27 * 0x40000000) ^ (uVar27 >> 0xd \| uVar27 * 0x80000) ^ \| (uVar27 >> 0x16 \| uVar27 * 0x400)) + \| (uVar` |
| kernel.c | 1678950 | `(uVar27 >> 0x16 \| uVar27 * 0x400)) + \| (uVar27 & uVar21 \| (uVar27 \| uVar21) & uVar15); \| uVar30 = ((uVar40 >> 0x11 \| uVar40 * 0x8000) ^ (uVa` |
| kernel.c | 1678952 | `uVar30 = ((uVar40 >> 0x11 \| uVar40 * 0x8000) ^ (uVar40 >> 0x13 \| uVar40 * 0x2000) ^ uVar40 >> 10) \| + ((uVar32 >> 7 \| uVar32 * 0x2000000) ^ ` |
| kernel.c | 1678959 | `uVar16 = iVar44 + ((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x80000) ^ \| (uVar17 >> 0x16 \| uVar17 * 0x400)) + \| (uVar` |
| kernel.c | 1678960 | `(uVar17 >> 0x16 \| uVar17 * 0x400)) + \| (uVar17 & uVar27 \| (uVar17 \| uVar27) & uVar21); \| uVar32 = ((uVar28 >> 0x11 \| uVar28 * 0x8000) ^ (uVa` |
| kernel.c | 1678962 | `uVar32 = ((uVar28 >> 0x11 \| uVar28 * 0x8000) ^ (uVar28 >> 0x13 \| uVar28 * 0x2000) ^ uVar28 >> 10) \| + ((uVar34 >> 7 \| uVar34 * 0x2000000) ^ ` |
| kernel.c | 1678969 | `uVar22 = iVar44 + (uVar16 & uVar17 \| (uVar16 \| uVar17) & uVar27) + \| ((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x8000` |
| kernel.c | 1678970 | `((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x80000) ^ \| (uVar16 >> 0x16 \| uVar16 * 0x400)); \| uVar34 = ((uVar30 >> 0x1` |
| kernel.c | 1678972 | `uVar34 = ((uVar30 >> 0x11 \| uVar30 * 0x8000) ^ (uVar30 >> 0x13 \| uVar30 * 0x2000) ^ uVar30 >> 10) \| + ((uVar37 >> 7 \| uVar37 * 0x2000000) ^ ` |
| kernel.c | 1678979 | `uVar25 = iVar44 + (uVar22 & uVar16 \| (uVar22 \| uVar16) & uVar17) + \| ((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x8000` |
| kernel.c | 1678980 | `((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x80000) ^ \| (uVar22 >> 0x16 \| uVar22 * 0x400)); \| uVar37 = ((uVar32 >> 0x1` |
| kernel.c | 1678984 | `+ uVar26 + uVar37; \| iVar44 = DAT_00a5cc14 + \| ((uVar21 ^ uVar15) & uVar27 ^ uVar15) + \| ((uVar27 >> 6 \| uVar27 * 0x4000000) ^ (uVar27 >> 0x` |
| kernel.c | 1678991 | `((uVar25 >> 2 \| uVar25 * 0x40000000) ^ (uVar25 >> 0xd \| uVar25 * 0x80000) ^ \| (uVar25 >> 0x16 \| uVar25 * 0x400)); \| uVar36 = uVar35 + uVar36` |
| kernel.c | 1678992 | `(uVar25 >> 0x16 \| uVar25 * 0x400)); \| uVar36 = uVar35 + uVar36 + \| ((uVar34 >> 0x11 \| uVar34 * 0x8000) ^ (uVar34 >> 0x13 \| uVar34 * 0x2000) ` |
| kernel.c | 1678995 | `+ ((uVar45 >> 7 \| uVar45 * 0x2000000) ^ (uVar45 >> 0x12 \| uVar45 * 0x4000) ^ uVar45 >> 3) \| ; \| iVar44 = uVar36 + ((uVar27 ^ uVar21) & uVar1` |
| kernel.c | 1679002 | `((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x80000) ^ \| (uVar18 >> 0x16 \| uVar18 * 0x400)); \| uVar58 = uVar40 + uVar45` |
| kernel.c | 1679003 | `(uVar18 >> 0x16 \| uVar18 * 0x400)); \| uVar58 = uVar40 + uVar45 + \| ((uVar37 >> 0x11 \| uVar37 * 0x8000) ^ (uVar37 >> 0x13 \| uVar37 * 0x2000) ` |
| kernel.c | 1679006 | `+ ((uVar31 >> 7 \| uVar31 * 0x2000000) ^ (uVar31 >> 0x12 \| uVar31 * 0x4000) ^ uVar31 >> 3) \| ; \| iVar44 = ((uVar17 ^ uVar27) & uVar16 ^ uVar2` |
| kernel.c | 1679013 | `(uVar15 >> 0x16 \| uVar15 * 0x400)) + \| (uVar15 & uVar18 \| (uVar15 \| uVar18) & uVar25); \| uVar31 = uVar28 + uVar31 + \| ((uVar36 >> 0x11 \| uVa` |
| kernel.c | 1679014 | `(uVar15 & uVar18 \| (uVar15 \| uVar18) & uVar25); \| uVar31 = uVar28 + uVar31 + \| ((uVar36 >> 0x11 \| uVar36 * 0x8000) ^ (uVar36 >> 0x13 \| uVar3` |
| kernel.c | 1679016 | `((uVar36 >> 0x11 \| uVar36 * 0x8000) ^ (uVar36 >> 0x13 \| uVar36 * 0x2000) ^ uVar36 >> 10) \| + ((uVar50 >> 7 \| uVar50 * 0x2000000) ^ (uVar50 >` |
| kernel.c | 1679023 | `uVar54 = iVar44 + (uVar23 & uVar15 \| (uVar23 \| uVar15) & uVar18) + \| ((uVar23 >> 2 \| uVar23 * 0x40000000) ^ (uVar23 >> 0xd \| uVar23 * 0x8000` |
| kernel.c | 1679024 | `((uVar23 >> 2 \| uVar23 * 0x40000000) ^ (uVar23 >> 0xd \| uVar23 * 0x80000) ^ \| (uVar23 >> 0x16 \| uVar23 * 0x400)); \| uVar50 = ((uVar58 >> 0x1` |
| kernel.c | 1679027 | `+ ((uVar33 >> 7 \| uVar33 * 0x2000000) ^ (uVar33 >> 0x12 \| uVar33 * 0x4000) ^ uVar33 >> 3) \| + uVar30 + uVar50; \| iVar44 = ((uVar22 ^ uVar16)` |
| kernel.c | 1679034 | `((uVar54 >> 2 \| uVar54 * 0x40000000) ^ (uVar54 >> 0xd \| uVar54 * 0x80000) ^ \| (uVar54 >> 0x16 \| uVar54 * 0x400)); \| uVar19 = uVar32 + uVar33` |
| kernel.c | 1679035 | `(uVar54 >> 0x16 \| uVar54 * 0x400)); \| uVar19 = uVar32 + uVar33 + \| ((uVar31 >> 0x11 \| uVar31 * 0x8000) ^ (uVar31 >> 0x13 \| uVar31 * 0x2000) ` |
| kernel.c | 1679038 | `+ ((uVar38 >> 7 \| uVar38 * 0x2000000) ^ (uVar38 >> 0x12 \| uVar38 * 0x4000) ^ uVar38 >> 3) \| ; \| iVar44 = uVar19 + uVar16 + ((uVar18 >> 6 \| u` |
| kernel.c | 1679045 | `(uVar29 >> 0x16 \| uVar29 * 0x400)) + (uVar29 & uVar54 \| (uVar29 \| uVar54) & uVar23) + \| iVar44; \| uVar16 = uVar34 + uVar38 + \| ((uVar50 >> 0` |
| kernel.c | 1679046 | `iVar44; \| uVar16 = uVar34 + uVar38 + \| ((uVar50 >> 0x11 \| uVar50 * 0x8000) ^ (uVar50 >> 0x13 \| uVar50 * 0x2000) ^ uVar50 >> 10) \| + ((uVar20` |
| kernel.c | 1679048 | `((uVar50 >> 0x11 \| uVar50 * 0x8000) ^ (uVar50 >> 0x13 \| uVar50 * 0x2000) ^ uVar50 >> 10) \| + ((uVar20 >> 7 \| uVar20 * 0x2000000) ^ (uVar20 >` |
| kernel.c | 1679055 | `uVar22 = iVar44 + ((uVar27 >> 2 \| uVar27 * 0x40000000) ^ (uVar27 >> 0xd \| uVar27 * 0x80000) ^ \| (uVar27 >> 0x16 \| uVar27 * 0x400)) + \| (uVar` |
| kernel.c | 1679056 | `(uVar27 >> 0x16 \| uVar27 * 0x400)) + \| (uVar27 & uVar29 \| (uVar27 \| uVar29) & uVar54); \| uVar33 = ((uVar19 >> 0x11 \| uVar19 * 0x8000) ^ (uVa` |
| kernel.c | 1679058 | `uVar33 = ((uVar19 >> 0x11 \| uVar19 * 0x8000) ^ (uVar19 >> 0x13 \| uVar19 * 0x2000) ^ uVar19 >> 10) \| + ((uVar24 >> 7 \| uVar24 * 0x2000000) ^ ` |
| kernel.c | 1679065 | `uVar21 = (uVar22 & uVar27 \| (uVar22 \| uVar27) & uVar29) + \| ((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x80000) ^ \| (u` |
| kernel.c | 1679066 | `((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x80000) ^ \| (uVar22 >> 0x16 \| uVar22 * 0x400)) + iVar44; \| uVar38 = ((uVar` |
| kernel.c | 1679069 | `+ ((uVar26 >> 7 \| uVar26 * 0x2000000) ^ (uVar26 >> 0x12 \| uVar26 * 0x4000) ^ uVar26 >> 3) \| + uVar36 + uVar24; \| iVar44 = ((uVar23 ^ uVar15)` |
| kernel.c | 1679076 | `((uVar21 >> 2 \| uVar21 * 0x40000000) ^ (uVar21 >> 0xd \| uVar21 * 0x80000) ^ \| (uVar21 >> 0x16 \| uVar21 * 0x400)); \| uVar20 = uVar58 + uVar26` |
| kernel.c | 1679077 | `(uVar21 >> 0x16 \| uVar21 * 0x400)); \| uVar20 = uVar58 + uVar26 + \| ((uVar33 >> 0x11 \| uVar33 * 0x8000) ^ (uVar33 >> 0x13 \| uVar33 * 0x2000) ` |
| kernel.c | 1679080 | `+ ((uVar35 >> 7 \| uVar35 * 0x2000000) ^ (uVar35 >> 0x12 \| uVar35 * 0x4000) ^ uVar35 >> 3) \| ; \| iVar44 = uVar20 + ((uVar54 ^ uVar23) & uVar2` |
| kernel.c | 1679087 | `((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x80000) ^ \| (uVar17 >> 0x16 \| uVar17 * 0x400)); \| uVar15 = uVar35 + uVar31` |
| kernel.c | 1679088 | `(uVar17 >> 0x16 \| uVar17 * 0x400)); \| uVar15 = uVar35 + uVar31 + \| ((uVar38 >> 0x11 \| uVar38 * 0x8000) ^ (uVar38 >> 0x13 \| uVar38 * 0x2000) ` |
| kernel.c | 1679092 | `; \| iVar44 = DAT_00a5d04c + \| ((uVar29 ^ uVar54) & uVar27 ^ uVar54) + \| ((uVar27 >> 6 \| uVar27 * 0x4000000) ^ (uVar27 >> 0xb \| uVar27 * 0x20` |
| kernel.c | 1679099 | `(uVar25 >> 0x16 \| uVar25 * 0x400)) + \| (uVar25 & uVar17 \| (uVar25 \| uVar17) & uVar21); \| uVar31 = uVar50 + uVar40 + \| ((uVar20 >> 0x11 \| uVa` |
| kernel.c | 1679100 | `(uVar25 & uVar17 \| (uVar25 \| uVar17) & uVar21); \| uVar31 = uVar50 + uVar40 + \| ((uVar20 >> 0x11 \| uVar20 * 0x8000) ^ (uVar20 >> 0x13 \| uVar2` |
| kernel.c | 1679102 | `((uVar20 >> 0x11 \| uVar20 * 0x8000) ^ (uVar20 >> 0x13 \| uVar20 * 0x2000) ^ uVar20 >> 10) \| + ((uVar28 >> 7 \| uVar28 * 0x2000000) ^ (uVar28 >` |
| kernel.c | 1679109 | `((uVar23 >> 2 \| uVar23 * 0x40000000) ^ (uVar23 >> 0xd \| uVar23 * 0x80000) ^ \| (uVar23 >> 0x16 \| uVar23 * 0x400)); \| uVar21 = uVar21 + iVar44` |
| kernel.c | 1679110 | `(uVar23 >> 0x16 \| uVar23 * 0x400)); \| uVar21 = uVar21 + iVar44; \| uVar50 = ((uVar15 >> 0x11 \| uVar15 * 0x8000) ^ (uVar15 >> 0x13 \| uVar15 * ` |
| kernel.c | 1679113 | `+ ((uVar30 >> 7 \| uVar30 * 0x2000000) ^ (uVar30 >> 0x12 \| uVar30 * 0x4000) ^ uVar30 >> 3) \| + uVar19 + uVar28; \| iVar44 = ((uVar22 ^ uVar27)` |
| kernel.c | 1679119 | `uVar18 = iVar44 + (uVar35 & uVar23 \| (uVar35 \| uVar23) & uVar25) + \| ((uVar35 >> 2 \| uVar35 * 0x40000000) ^ (uVar35 >> 0xd \| uVar35 * 0x8000` |
| kernel.c | 1679120 | `((uVar35 >> 2 \| uVar35 * 0x40000000) ^ (uVar35 >> 0xd \| uVar35 * 0x80000) ^ \| (uVar35 >> 0x16 \| uVar35 * 0x400)); \| uVar19 = ((uVar31 >> 0x1` |
| kernel.c | 1679122 | `uVar19 = ((uVar31 >> 0x11 \| uVar31 * 0x8000) ^ (uVar31 >> 0x13 \| uVar31 * 0x2000) ^ uVar31 >> 10) \| + ((uVar32 >> 7 \| uVar32 * 0x2000000) ^ ` |
| kernel.c | 1679129 | `uVar15 = ((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x80000) ^ \| (uVar18 >> 0x16 \| uVar18 * 0x400)) + (uVar18 & uVar35` |
| kernel.c | 1679130 | `(uVar18 >> 0x16 \| uVar18 * 0x400)) + (uVar18 & uVar35 \| (uVar18 \| uVar35) & uVar23) + \| iVar44; \| uVar27 = ((uVar50 >> 0x11 \| uVar50 * 0x800` |
| kernel.c | 1679133 | `+ ((uVar34 >> 7 \| uVar34 * 0x2000000) ^ (uVar34 >> 0x12 \| uVar34 * 0x4000) ^ uVar34 >> 3) \| + uVar32 + uVar33; \| iVar44 = uVar27 + uVar22 + ` |
| kernel.c | 1679140 | `((uVar15 >> 2 \| uVar15 * 0x40000000) ^ (uVar15 >> 0xd \| uVar15 * 0x80000) ^ \| (uVar15 >> 0x16 \| uVar15 * 0x400)); \| iVar44 = uVar34 + uVar38` |
| kernel.c | 1679141 | `(uVar15 >> 0x16 \| uVar15 * 0x400)); \| iVar44 = uVar34 + uVar38 + \| ((uVar19 >> 0x11 \| uVar19 * 0x8000) ^ (uVar19 >> 0x13 \| uVar19 * 0x2000) ` |
| kernel.c | 1679143 | `((uVar19 >> 0x11 \| uVar19 * 0x8000) ^ (uVar19 >> 0x13 \| uVar19 * 0x2000) ^ uVar19 >> 10) \| + ((uVar37 >> 7 \| uVar37 * 0x2000000) ^ (uVar37 >` |
| kernel.c | 1679150 | `((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x80000) ^ \| (uVar16 >> 0x16 \| uVar16 * 0x400)) + iVar44; \| iVar44 = uVar37` |
| kernel.c | 1679151 | `(uVar16 >> 0x16 \| uVar16 * 0x400)) + iVar44; \| iVar44 = uVar37 + uVar20 + \| ((uVar27 >> 0x11 \| uVar27 * 0x8000) ^ (uVar27 >> 0x13 \| uVar27 *` |
| kernel.c | 1679153 | `((uVar27 >> 0x11 \| uVar27 * 0x8000) ^ (uVar27 >> 0x13 \| uVar27 * 0x2000) ^ uVar27 >> 10) \| + ((uVar36 >> 7 \| uVar36 * 0x2000000) ^ (uVar36 >` |
| kernel.c | 1685548 | `FUN_00a9695c(uVar2,iVar3,0x24); \| *(uint *)(uVar2 + 0x84) = puVar6[1]; \| } \| if (((*(byte *)(uVar2 + 0x200) != 0) && (puVar6[0xb] == uVar2))` |
| kernel.c | 1685551 | `if (((*(byte *)(uVar2 + 0x200) != 0) && (puVar6[0xb] == uVar2)) && \| (((*(int *)(uVar2 + 0x124) == 3 \|\| (*(int *)(uVar2 + 0x124) == 4)) && \|` |
| kernel.c | 1699852 | `if (param_1[0x1ec] == '\x01') { \| FUN_00a6d722(param_1 + 0x1f0); \| } \| *(char *)(param_2 + 0x1c9) = param_1[0x200]; \| if (param_1[0x200] == ` |
| kernel.c | 1699853 | `FUN_00a6d722(param_1 + 0x1f0); \| } \| *(char *)(param_2 + 0x1c9) = param_1[0x200]; \| if (param_1[0x200] == '\x01') { \| *(undefined4 *)(param_` |
| kernel.c | 1705071 | `} \| *(char *)(param_2 + 0x2f0) = param_1[0x104]; \| if ((param_1[0x104] == '\x01') && (uVar3 = *(uint *)(param_1 + 0x108), uVar3 != 0)) { \| *` |
| kernel.c | 1705074 | `*(uint *)(param_2 + 0x200) = uVar3; \| uVar4 = FUN_006f3178(0,uVar3 & 0xffff,5,0x33,&DAT_00002fdb); \| *(undefined4 *)(param_2 + 0x1fc) = uVar` |
| kernel.c | 1705076 | `*(undefined4 *)(param_2 + 0x1fc) = uVar4; \| FUN_006f1460(uVar4,*(undefined4 *)(param_2 + 0x200)); \| if (*(int *)(param_2 + 0x1fc) != 0) { \| ` |
| kernel.c | 1705079 | `if (*(int *)(param_2 + 0x200) == 0) { \| FUN_006f2c00(0,DAT_00a795b0,&DAT_00002fde,DAT_00a795ac + 0x10,DAT_00a795ac); \| } \| FUN_006f1b7c(*(un` |
| kernel.c | 1709738 | `iVar5 = FUN_00a7cdbe(param_1 + 0x74); \| iVar5 = iVar5 + iVar8 + 0x13; \| uVar6 = iVar5 - (iVar8 + 0x13); \| iVar7 = uVar6 * 0x20000000; \| if (` |
| kernel.c | 1720048 | `*(char **)(iVar7 + 0x454) = s_current_ptr________CHAR_PTR____n_00003320 + 0x14; \| *(undefined4 *)(iVar7 + 0x458) = 0x2aab; \| *(undefined4 *)` |
| kernel.c | 1724205 | `iVar1 = FUN_00aa1352(param_1 + 0x92,param_3,param_4,param_4,param_3,param_4); \| if (iVar1 != 0) { \| if (iVar1 != -1) { \| FUN_006fb8b0(&DAT_0` |
| kernel.c | 1726649 | `if (param_1 == (undefined *)0x100) { \| return 10; \| } \| if (param_1 != (undefined *)0x200) { \| return 0x7fffffff; \| } \| uVar1 = 0xb;` |
| kernel.c | 1729836 | `case 7: \| return 0x101; \| case 8: \| return 0x200; \| case 9: \| return 0x400; \| case 10:` |
| kernel.c | 1730357 | `uVar1 = 0x140; \| break; \| case 10: \| uVar1 = 0x200; \| break; \| case 0xb: \| uVar1 = 0x280;` |
| kernel.c | 1730431 | `uVar1 = 0x140; \| break; \| case 0xe: \| uVar1 = 0x200; \| break; \| case 0xf: \| uVar1 = 0x280;` |
| kernel.c | 1733359 | `uVar1 = 0x140; \| break; \| case 3: \| uVar1 = 0x200; \| break; \| case 4: \| uVar1 = 0x280;` |
| kernel.c | 1733586 | `puVar1 = (undefined *)0x1e0; \| break; \| case 10: \| puVar1 = (undefined *)0x200; \| break; \| case 0xb: \| puVar1 = (undefined *)0x280;` |
| kernel.c | 1736113 | `uVar1 = 0x100; \| break; \| case 6: \| uVar1 = 0x200; \| } \| return uVar1; \| }` |
| kernel.c | 1736329 | `uVar1 = 0x100; \| break; \| case 7: \| uVar1 = 0x200; \| } \| return uVar1; \| }` |
| kernel.c | 1737001 | `uVar1 = 0x100; \| break; \| case 6: \| uVar1 = 0x200; \| break; \| case 7: \| uVar1 = 0x400;` |
| kernel.c | 1737045 | ` \| uVar1 = 0x7fffffff; \| if (param_1 == 0) { \| uVar1 = 0x200; \| } \| else if (param_1 == 1) { \| uVar1 = 0x400;` |
| kernel.c | 1737521 | `iVar1 = 0x100; \| break; \| case 8: \| iVar1 = 0x200; \| break; \| case 9: \| iVar1 = 0x400;` |
| kernel.c | 1737533 | `iVar1 = 0x1000; \| break; \| case 0xc: \| iVar1 = 0x2000; \| break; \| case 0xd: \| iVar1 = 0x4000;` |
| kernel.c | 1737545 | `iVar1 = 0x10000; \| break; \| case 0x10: \| iVar1 = 0x20000; \| break; \| case 0x11: \| iVar1 = 0x40000;` |
| kernel.c | 1737557 | `iVar1 = 0x100000; \| break; \| case 0x14: \| iVar1 = 0x200000; \| break; \| case 0x15: \| iVar1 = 0x400000;` |
| kernel.c | 1737569 | `iVar1 = 0x1000000; \| break; \| case 0x18: \| iVar1 = 0x2000000; \| break; \| case 0x19: \| iVar1 = 0x4000000;` |
| kernel.c | 1737581 | `iVar1 = 0x10000000; \| break; \| case 0x1c: \| iVar1 = 0x20000000; \| break; \| case 0x1d: \| iVar1 = 0x40000000;` |
| kernel.c | 1737795 | `uVar1 = 0x100; \| break; \| case 4: \| uVar1 = 0x200; \| break; \| case 5: \| uVar1 = 0x400;` |
| kernel.c | 1737924 | `uVar1 = 0x100; \| break; \| case 7: \| uVar1 = 0x200; \| break; \| case 8: \| uVar1 = 0x400;` |
| kernel.c | 1739331 | `uVar1 = 0x80; \| break; \| case 4: \| uVar1 = 0x200; \| break; \| case 5: \| uVar1 = 0x400;` |
| kernel.c | 1746424 | `FUN_00a9c91a(param_1,uVar10,uVar8); \| param_1[10] = (char)uVar8; \| param_1[4] = 0; \| DAT_00a9ce24[-3] = (ushort)((uVar13 + uVar8) * 0x200000` |
| kernel.c | 1749784 | `local_219 = 0; \| local_217 = 0x12; \| local_216 = 0x1234; \| if (0x200 < param_4) { \| param_4 = 0x200; \| } \| local_218 = param_1;` |
| kernel.c | 1749785 | `local_217 = 0x12; \| local_216 = 0x1234; \| if (0x200 < param_4) { \| param_4 = 0x200; \| } \| local_218 = param_1; \| FUN_006f3e8a(auStack_214,pa` |
| kernel.c | 1755677 | `pcVar1 = DAT_00aa5c34; \| uVar7 = 0; \| if (*(int *)(DAT_00aa5c9c + 0xc70) != 0) { \| iVar8 = DAT_00aa5c9c + -0x2000; \| do { \| iVar4 = iVar8 + ` |
| kernel.c | 1761148 | `} \| uVar21 = uVar21 + iVar6 * 0x80000; \| if (-1 < (int)uVar21) { \| if ((int)(uVar21 - param_1[0xf]) < -0x20000) { \| uVar21 = uVar21 + 0x8000` |
| kernel.c | 1766249 | `*(undefined1 *)(puVar2 + 0x1e) = 2; \| *(undefined2 *)((int)puVar2 + 0x7a) = 0x3ff; \| uVar8 = DAT_00ac1380; \| *(undefined2 *)(puVar2 + 0x1f) ` |
| kernel.c | 1766254 | `puVar2[0x25] = DAT_00ac1384; \| *(undefined1 *)(puVar2 + 0x22) = 2; \| *(undefined2 *)((int)puVar2 + 0x8a) = 0x3ff; \| *(undefined2 *)(puVar2 +` |
| kernel.c | 1767130 | `*(uint *)(iVar6 + 0x20) = *(uint *)(iVar6 + 0x20) \| 0x40; \| } \| uVar2 = piVar5[5]; \| piVar5[5] = uVar2 \| 0x200; \| *(uint *)(iVar6 + 0x18) = ` |
| kernel.c | 1767131 | `} \| uVar2 = piVar5[5]; \| piVar5[5] = uVar2 \| 0x200; \| *(uint *)(iVar6 + 0x18) = uVar2 \| 0x200; \| return 0; \| } \| ` |
| kernel.c | 1767160 | `iVar4 = *(int *)(*piVar5 + 4); \| uVar1 = FUN_00ac2904(param_1); \| FUN_00ac2d9c(iVar4); \| uVar2 = piVar5[2] & 0xffffefffU \| 0x2000; \| piVar5[` |
| kernel.c | 1767380 | `local_38 = param_3; \| FUN_001fd8de(local_50,1,&local_3c); \| uVar4 = piVar5[5]; \| piVar5[5] = uVar4 \| 0x200; \| *(uint *)(iVar6 + 0x18) = uVar` |
| kernel.c | 1767381 | `FUN_001fd8de(local_50,1,&local_3c); \| uVar4 = piVar5[5]; \| piVar5[5] = uVar4 \| 0x200; \| *(uint *)(iVar6 + 0x18) = uVar4 \| 0x200; \| local_3c ` |
| kernel.c | 1767484 | `else { \| FUN_006fb8b0(&DAT_00ac2d0c,s_spi_phy_v5_c_00ac2cfc,0x5df); \| } \| uVar3 = piVar4[2] & 0xffffefffU \| 0x2000; \| piVar4[2] = uVar3; \| *` |
| kernel.c | 1769726 | `iVar3 = *piVar2 + iVar5 * 0x11a8; \| (&DAT_00001103)[iVar3] = (undefined1)local_20; \| iVar5 = DAT_00acac08 + uVar7 * 0x28; \| *(undefined4 *)(` |
| kernel.c | 1773771 | `iVar4 = FUN_0070bd5c(uVar2,uVar7 + iVar6); \| if (iVar4 < 0) goto LAB_00ad936a; \| uVar2 = param_1[3]; \| param_1[3] = uVar2 \| 0x20000; \| if ((` |
| kernel.c | 1773772 | `if (iVar4 < 0) goto LAB_00ad936a; \| uVar2 = param_1[3]; \| param_1[3] = uVar2 \| 0x20000; \| if ((int)((uVar2 \| 0x20000) << 8) < 0) { \| param_1` |
| kernel.c | 1773810 | `else { \| *param_1 = iVar6 - 1; \| param_1[1] = (uint)(pbVar3 + 1); \| param_1[3] = param_1[3] \| 0x20000; \| uVar1 = (uint)*pbVar3; \| } \| }` |
| kernel.c | 1774507 | `uVar3 = uVar1 + uVar4; \| uVar1 = uVar2 + (uVar2 >> 0x10) + (uint)CARRY4(uVar1,uVar4); \| uVar2 = uVar1 + CARRY4(uVar3,uVar1); \| uVar3 = uVar3` |
| kernel.c | 1775118 | `uint uVar1; \|  \| uVar1 = coproc_movefrom_Control(); \| coproc_moveto_Control(uVar1 \| 0x2000); \| return param_1; \| } \| ` |
| kernel.c | 1778353 | ` \| thunk_EXT_FUN_810fad8e(); \| if (param_1 == 0) { \| uVar1 = *(uint *)(DAT_00befdd8 + 4) \| 0x2000000; \| } \| else { \| uVar1 = *(uint *)(DAT_0` |
| mmi_res.c | 123 | ` \|  \|  \| /* Function: IRQ */ \|  \| /* WARNING: Control flow encountered bad instruction data */ \| ` |
| mmi_res.c | 127 | ` \| /* WARNING: Control flow encountered bad instruction data */ \|  \| void IRQ(void) \|  \| { \| bool in_CY;` |
| mmi_res.c | 725 | `*(int *)(iVar15 + iVar25) = (int)cVar5; \| *(short *)(iVar15 + iVar25) = (short)puVar10; \| *(char *)((iVar13 >> 4) + iVar25) = (char)iVar25; ` |
| mmi_res.c | 1117 | `puVar24 = puVar24 + 2; \| puVar37[-1] = (uint)puVar34; \| puVar37[-2] = uVar27; \| while (iVar13 = (int)puVar20 * 0x2000, puVar9 = puVar1, puVa` |
| mmi_res.c | 2176 | `} \| uVar3 = 0; \| if (uVar16 == 0) { \| *(undefined2 *)(uVar4 * 0x20000 + 0x3c) = 0xef4c; \| /* WARNING: Bad instruction - Truncating control f` |
| mmi_res.c | 2190 | `iVar10 = unaff_r10 + -0xfdc; \| if ((int)(uVar4 - 0xec) < 0) { \| in_stack_00000188 = (uint)*(ushort *)((int)piVar2 + 10); \| iVar13 = piVar14[` |
| nvitem.c | 358 | ` \|  \|  \| /* Function: IRQ */ \|  \| /* WARNING: Control flow encountered bad instruction data */ \| ` |
| nvitem.c | 362 | ` \| /* WARNING: Control flow encountered bad instruction data */ \|  \| void IRQ(undefined4 param_1,undefined4 param_2,undefined4 param_3,undef` |
| user.c | 170 | ` \|  \|  \| /* Function: IRQ */ \|  \| /* WARNING: Control flow encountered bad instruction data */ \| ` |
| user.c | 174 | ` \| /* WARNING: Control flow encountered bad instruction data */ \|  \| void IRQ(undefined4 *param_1,undefined4 param_2,undefined4 param_3) \|  ` |
| user.c | 451 | `uVar3 = (uint)*(byte *)(iVar9 + 4); \| bVar10 = true; \| } while (uVar3 == 0); \| thunk_EXT_FUN_811049dc(auStack_440,0x200); \| thunk_EXT_FUN_81` |
| user.c | 452 | `bVar10 = true; \| } while (uVar3 == 0); \| thunk_EXT_FUN_811049dc(auStack_440,0x200); \| thunk_EXT_FUN_811049dc(auStack_240,0x200); \| puVar4 = ` |
| user.c | 7443 | ` \| iVar1 = FUN_00013672(param_1,param_3); \| if (iVar1 == 0) { \| thunk_EXT_FUN_811049dc(param_1 + 0x24,0x200); \| if (param_2 < 0x1000) { \| *(` |
| user.c | 12253 | `} \| return; \| } \| if (iVar1 == 0x1000 \|\| iVar1 == 0x2000) { \| iVar1 = thunk_EXT_FUN_81103f4a(s_Demux_User_FreeBlockBuf__p_block_0001c630,par` |
| user.c | 12267 | `} \| else { \| if (iVar1 == 0x8000) goto LAB_0001b390; \| if (iVar1 == 0x10000 \|\| iVar1 == 0x20000) { \| FUN_003518ec(param_1,*(undefined4 *)(pa` |
| user.c | 12431 | `} \| return; \| } \| if (iVar1 == 0x1000 \|\| iVar1 == 0x2000) { \| iVar1 = thunk_EXT_FUN_81103f4a(s_Demux_User_FreeBlockBuf__p_block_0001c630,par` |
| user.c | 12445 | `} \| else { \| if (iVar1 == 0x8000) goto LAB_0001b390; \| if (iVar1 == 0x10000 \|\| iVar1 == 0x20000) { \| FUN_003518ec(param_1,*(undefined4 *)(pa` |
| user.c | 17072 | `do { \| iVar3 = iVar9 + uVar10 * 0x30; \| *(undefined4 *)(iVar3 + 0x30) = 0x1e; \| *(undefined4 *)(iVar3 + 0x34) = 0x20000; \| iVar8 = *(int *)(` |
| user.c | 18907 | `param_2[0x11] = *(undefined1 *)(param_1 + 0x3e); \| *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(param_1 + 0x40); \| *(undefined2 *)(para` |
| user.c | 21783 | `if (iVar2 != 0) { \| *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) \| 2; \| } \| iVar4 = iVar4 + 0x200; \| FUN_00784682(param_3[2],iVar4); \| if` |
| user.c | 21904 | `*(uint *)(iVar4 + 4) = (*(uint *)(iVar8 + uVar7 * 4) & uVar3) << (0x20 - uVar7 & 0xff); \| piVar1[1] = 0x20 - uVar7; \| if (piVar1 + 0x83 <= (` |
| user.c | 21905 | `piVar1[1] = 0x20 - uVar7; \| if (piVar1 + 0x83 <= (int *)piVar1[2]) { \| thunk_EXT_FUN_811037c8(piVar1[0x86] + piVar1[0x84],piVar1 + 3,0x200);` |
| user.c | 22072 | `*(uint *)(iVar5 + 4) = (*(uint *)(iVar4 + uVar8 * 4) & uVar6) << (0x20 - uVar8 & 0xff); \| piVar2[1] = 0x20 - uVar8; \| if (piVar2 + 0x83 <= (` |
| user.c | 22073 | `piVar2[1] = 0x20 - uVar8; \| if (piVar2 + 0x83 <= (int *)piVar2[2]) { \| thunk_EXT_FUN_811037c8(piVar2[0x86] + piVar2[0x84],piVar2 + 3,0x200);` |
| user.c | 22766 | `*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) \| 0x80; \| } \| if (*(int *)(param_1 + 0x2c) != 0) { \| *(uint *)(param_1 + 0x82a) = *(ui` |
| user.c | 24979 | `*(uint *)(param_1 + 0x30) = uVar12 * 0x40 + 0x60; \| if ((char)param_1[0x44] == '\x01') { \| iVar9 = uVar10 * 4; \| local_48 = *(int *)(DAT_000` |
| user.c | 26048 | `local_60 = uVar17 * -9; \| local_68 = uVar17 * 3; \| auVar33._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6); \| auVar33._0_8_ = 0x200020002` |
| user.c | 27941 | `*(uint *)(iVar3 + 4) = (*(uint *)(iVar1 + uVar2 * 4) & uVar5) << (0x20 - uVar2 & 0xff); \| param_1[1] = 0x20 - uVar2; \| if (param_1 + 0x83 <=` |
| user.c | 27942 | `param_1[1] = 0x20 - uVar2; \| if (param_1 + 0x83 <= (int *)param_1[2]) { \| thunk_EXT_FUN_811037c8(param_1[0x86] + param_1[0x84],param_1 + 3,0` |
| user.c | 28257 | `uStack_28 = DAT_00031920; \| uVar2 = DAT_00031938; \| if (((param_2 == 0) \|\| (param_2 == 1)) \|\| (uVar2 = DAT_0003193c, param_2 == 2)) { \| thun` |
| user.c | 28635 | `if (*(uint *)(param_1 + 0x58) < 0x8000) { \| param_2 = 0; \| } \| else if (*(uint *)(param_1 + 0x58) < 0x200000) { \| param_2 = 1; \| } \| else {` |
| user.c | 29043 | `local_30 = param_2; \| local_2c = param_3; \| iStack_28 = param_4; \| thunk_EXT_FUN_811049dc(local_284,0x200); \| iVar4 = 0; \| local_44 = 0; \| l` |
| user.c | 29240 | `uVar8 = param_1[2]; \| uVar6 = (uint)*(byte *)(DAT_00035a28 + (uint)*param_2 + (param_1[1] & 0xc0) * 2); \| iVar3 = param_1[1] - uVar6; \| uVar` |
| user.c | 29242 | `iVar3 = param_1[1] - uVar6; \| uVar7 = (int)(iVar3 * 0x20000 - *param_1) >> 0x1f; \| uVar4 = *param_2 ^ uVar7; \| *param_1 = *param_1 - (uVar7 ` |
| user.c | 29276 | `*param_1 = (*param_1 + iVar3 * 2) - 0xffff; \| } \| uVar2 = *param_1; \| bVar1 = (int)((uint)(ushort)param_1[1] * 0x20000) <= (int)uVar2; \| if ` |
| user.c | 29278 | `uVar2 = *param_1; \| bVar1 = (int)((uint)(ushort)param_1[1] * 0x20000) <= (int)uVar2; \| if (bVar1) { \| *param_1 = uVar2 + (uint)(ushort)param` |
| user.c | 29299 | `iVar2 = FUN_003e10b2(param_1[2],0x10); \| *param_1 = (*param_1 + iVar2 * 2) - 0xffff; \| } \| iVar2 = *param_1 + (uint)(ushort)param_1[1] * -0x` |
| user.c | 29301 | `} \| iVar2 = *param_1 + (uint)(ushort)param_1[1] * -0x20000; \| uVar1 = iVar2 >> 0x1f; \| *param_1 = ((uint)(ushort)param_1[1] * 0x20000 & uVar` |
| user.c | 29323 | `iVar1 = *(int *)(param_1 + 0x90); \| iVar2 = iVar1 + -2; \| *(int *)(param_1 + 0x90) = iVar2; \| if (iVar2 * 0x20000 <= (int)*puVar5) { \| retur` |
| user.c | 33902 | `} \| else { \| if (bVar1 == 2) { \| local_120 = 0x200; \| } \| else { \| if (bVar1 != 3) {` |
| user.c | 34666 | `local_2a = *(undefined2 *)(iVar1 + 0x10); \| local_12 = *(undefined2 *)(iVar1 + 0x12); \| if (param_2 == 0) { \| FUN_00791fa8(*(undefined1 *)(i` |
| user.c | 35131 | `local_4e = *(undefined2 *)(iVar3 + 0x10); \| local_41 = *(undefined1 *)(iVar3 + 0x29); \| local_36 = (short)param_1; \| FUN_00791fa8(*(undefine` |
| user.c | 37079 | `*(undefined1 *)(uVar4 + 0x5f) = 0; \| goto LAB_000413a8; \| case 0x10: \| if ((uVar12 != 0x200) && (uVar12 == 0xe00)) { \| FUN_000405f6(param_1)` |
| user.c | 37156 | `} \| else { \| iVar6 = FUN_000b59c6(); \| uVar8 = *(ushort *)(iVar6 + 100) \| 0x200; \| } \| local_d0 = 0; \| FUN_001d9c9e(param_1,0x117,uVar8,0);` |
| user.c | 39158 | `} \| goto LAB_00045e78; \| } \| if (uVar1 == 0x200) { \| local_48[2] = param_1[2]; \| local_48[3] = param_1[3]; \| local_38 = 2;` |
| user.c | 39659 | `iVar3 = (int)(param_1 + ((uint)(param_1 >> 0x1f) >> 0x1c)) >> 4; \| iVar3 = (uint)*(ushort *)(DAT_00047a44 + iVar3 * 2) * \| (uint)*(ushort *)` |
| user.c | 39692 | `iVar1 = (int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1c)) >> 4; \| iVar3 = (uint)*(ushort *)(DAT_00047a44 + iVar1 * 2) * \| (uint)*(ushort *)(DAT` |
| user.c | 39793 | ` \| { \| if (param_2 == 0) { \| param_2 = 0x2000; \| } \| *(short *)(param_1 + 0x570) = (short)param_2; \| return;` |
| user.c | 39901 | `FUN_00047868(param_3,0); \| *(undefined1 *)(param_3 + 0x572) = 1; \| uVar2 = DAT_00047a4c; \| *(undefined2 *)(param_3 + 0x570) = 0x2000; \| *(un` |
| user.c | 41706 | `if (((int)uVar10 <= (int)uVar6) && (uVar10 = uVar6, (int)uVar12 < (int)uVar6)) { \| uVar10 = uVar12; \| } \| *(short *)(*piVar11 + iVar5 * 0x20` |
| user.c | 42241 | `return; \| } \| iVar8 = iVar12; \| if (0x2000 < iVar12) { \| iVar8 = iVar13; \| } \| bVar17 = iVar8 == 0x2000;` |
| user.c | 42244 | `if (0x2000 < iVar12) { \| iVar8 = iVar13; \| } \| bVar17 = iVar8 == 0x2000; \| if (0x2000 < iVar8) { \| iVar15 = (short)(sVar4 - sVar5) + 10; \| }` |
| user.c | 42245 | `iVar8 = iVar13; \| } \| bVar17 = iVar8 == 0x2000; \| if (0x2000 < iVar8) { \| iVar15 = (short)(sVar4 - sVar5) + 10; \| } \| iVar2 = iVar8 + -0x200` |
| user.c | 42248 | `if (0x2000 < iVar8) { \| iVar15 = (short)(sVar4 - sVar5) + 10; \| } \| iVar2 = iVar8 + -0x2000; \| if (iVar8 >= 0x2001) { \| bVar17 = iVar15 == 0` |
| user.c | 42249 | `iVar15 = (short)(sVar4 - sVar5) + 10; \| } \| iVar2 = iVar8 + -0x2000; \| if (iVar8 >= 0x2001) { \| bVar17 = iVar15 == 0; \| iVar2 = iVar15; \| }` |
| user.c | 42253 | `bVar17 = iVar15 == 0; \| iVar2 = iVar15; \| } \| if ((!bVar17 && iVar2 < 0 == (iVar8 < 0x2001 && SBORROW4(iVar8,0x2000))) && \| ((short)(sVar4 -` |
| user.c | 42285 | `iVar8 = iVar7 - iVar11; \| } \| if (iVar8 < 0 != bVar17) goto LAB_0004b8f6; \| if ((iVar6 < 0x2001) \|\| (9 < iVar14)) { \| if (0x2000 < iVar12) {` |
| user.c | 42286 | `} \| if (iVar8 < 0 != bVar17) goto LAB_0004b8f6; \| if ((iVar6 < 0x2001) \|\| (9 < iVar14)) { \| if (0x2000 < iVar12) { \| iVar12 = iVar13; \| } \| ` |
| user.c | 42289 | `if (0x2000 < iVar12) { \| iVar12 = iVar13; \| } \| if (0x2000 < iVar12) goto LAB_0004b95c; \| iVar12 = 0; \| do { \| local_30[iVar12] = param_2[iV` |
| user.c | 42329 | `} \| goto LAB_0004b8ae; \| } \| if ((iVar6 < 0x2001) \|\| (9 < iVar14)) { \| if (0x2000 < iVar12) { \| iVar12 = iVar13; \| }` |
| user.c | 42330 | `goto LAB_0004b8ae; \| } \| if ((iVar6 < 0x2001) \|\| (9 < iVar14)) { \| if (0x2000 < iVar12) { \| iVar12 = iVar13; \| } \| if (iVar12 < 0x2001) {` |
| user.c | 42333 | `if (0x2000 < iVar12) { \| iVar12 = iVar13; \| } \| if (iVar12 < 0x2001) { \| iVar12 = 0; \| do { \| local_30[iVar12] = param_2[iVar12];` |
| user.c | 42548 | `uVar1 = (int)uVar5 >> 5 & 0x3e; \| iVar6 = (uVar5 & 0x1f) * 2 + 1; \| if ((uVar5 & 0x800) == 0) { \| *(undefined2 *)(param_3 + uVar1 * 2) = 0x2` |
| user.c | 42554 | `*(undefined2 *)(param_3 + uVar1 * 2) = 0xfe00; \| } \| if ((*param_1 & 0x20) == 0) { \| *(undefined2 *)(param_3 + iVar6 * 2) = 0x200; \| } \| els` |
| user.c | 42570 | `iVar2 = (int)(short)((short)iVar6 + (local_20[iVar3 * 2] & 0xf) * 4); \| sVar4 = *(short *)(param_3 + iVar2 * 2); \| if ((local_20[iVar3 * 2] ` |
| user.c | 42573 | `sVar4 = sVar4 + 0x200; \| } \| else { \| sVar4 = sVar4 + -0x200; \| } \| *(short *)(param_3 + iVar2 * 2) = sVar4; \| iVar3 = (int)(short)((short)i` |
| user.c | 42591 | `iVar2 = (int)(short)((short)iVar6 + (local_20[iVar3 * 2] & 0xf) * 4); \| sVar4 = *(short *)(param_3 + iVar2 * 2); \| if ((local_20[iVar3 * 2] ` |
| user.c | 42594 | `sVar4 = sVar4 + 0x200; \| } \| else { \| sVar4 = sVar4 + -0x200; \| } \| *(short *)(param_3 + iVar2 * 2) = sVar4; \| iVar3 = (int)(short)((short)i` |
| user.c | 42612 | `iVar2 = (int)(short)((short)iVar6 + (local_20[iVar3 * 2] & 0xf) * 4); \| sVar4 = *(short *)(param_3 + iVar2 * 2); \| if ((local_20[iVar3 * 2] ` |
| user.c | 42615 | `sVar4 = sVar4 + 0x200; \| } \| else { \| sVar4 = sVar4 + -0x200; \| } \| *(short *)(param_3 + iVar2 * 2) = sVar4; \| iVar3 = (int)(short)((short)i` |
| user.c | 42630 | `iVar2 = (int)(short)((short)iVar6 + (local_20[iVar3 * 2] & 0xf) * 4); \| sVar4 = *(short *)(param_3 + iVar2 * 2); \| if ((local_20[iVar3 * 2] ` |
| user.c | 42633 | `sVar4 = sVar4 + 0x200; \| } \| else { \| sVar4 = sVar4 + -0x200; \| } \| *(short *)(param_3 + iVar2 * 2) = sVar4; \| iVar3 = (int)(short)((short)i` |
| user.c | 42651 | `iVar2 = (int)(short)((short)iVar6 + (local_20[iVar3 * 2] & 0xf) * 4); \| sVar4 = *(short *)(param_3 + iVar2 * 2); \| if ((local_20[iVar3 * 2] ` |
| user.c | 42654 | `sVar4 = sVar4 + 0x200; \| } \| else { \| sVar4 = sVar4 + -0x200; \| } \| *(short *)(param_3 + iVar2 * 2) = sVar4; \| iVar3 = (int)(short)((short)i` |
| user.c | 42673 | `iVar2 = (int)(short)((short)iVar6 + (local_20[iVar3 * 2] & 0xf) * 4); \| sVar4 = *(short *)(param_3 + iVar2 * 2); \| if ((local_20[iVar3 * 2] ` |
| user.c | 42676 | `sVar4 = sVar4 + 0x200; \| } \| else { \| sVar4 = sVar4 + -0x200; \| } \| *(short *)(param_3 + iVar2 * 2) = sVar4; \| iVar3 = (int)(short)((short)i` |
| user.c | 42695 | `iVar2 = (int)(short)((short)iVar6 + (local_20[iVar3 * 2] & 0xf) * 4); \| sVar4 = *(short *)(param_3 + iVar2 * 2); \| if ((local_20[iVar3 * 2] ` |
| user.c | 42698 | `sVar4 = sVar4 + 0x200; \| } \| else { \| sVar4 = sVar4 + -0x200; \| } \| *(short *)(param_3 + iVar2 * 2) = sVar4; \| iVar3 = (int)(short)((short)i` |
| user.c | 42715 | `iVar2 = (int)(short)((short)iVar6 + (local_20[iVar3 * 2] & 0xf) * 4); \| sVar4 = *(short *)(param_3 + iVar2 * 2); \| if ((local_20[iVar3 * 2] ` |
| user.c | 42718 | `sVar4 = sVar4 + 0x200; \| } \| else { \| sVar4 = sVar4 + -0x200; \| } \| *(short *)(param_3 + iVar2 * 2) = sVar4; \| iVar3 = (int)(short)((short)i` |
| user.c | 42734 | `iVar2 = (int)(short)((short)iVar6 + (local_20[iVar3 * 2] & 0xf) * 4); \| sVar4 = *(short *)(param_3 + iVar2 * 2); \| if ((local_20[iVar3 * 2] ` |
| user.c | 42737 | `sVar4 = sVar4 + 0x200; \| } \| else { \| sVar4 = sVar4 + -0x200; \| } \| *(short *)(param_3 + iVar2 * 2) = sVar4; \| iVar3 = (int)(short)((short)i` |
| user.c | 42778 | `uVar5 = uVar5 + ((int)(iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1c)) >> 4); \| if (0x1ff < (int)uVar5) goto LAB_0004c078; \| } \| uVar5 = 0x200; \| }` |
| user.c | 43969 | `else { \| if (bVar2 == 8) { \| *(undefined1 *)(param_2 + 0x6a) = 4; \| *(undefined2 *)(param_2 + 0x5c) = 0x200; \| *(undefined4 *)(param_2 + 0x5` |
| user.c | 43970 | `if (bVar2 == 8) { \| *(undefined1 *)(param_2 + 0x6a) = 4; \| *(undefined2 *)(param_2 + 0x5c) = 0x200; \| *(undefined4 *)(param_2 + 0x50) = 0x20` |
| user.c | 43971 | `*(undefined1 *)(param_2 + 0x6a) = 4; \| *(undefined2 *)(param_2 + 0x5c) = 0x200; \| *(undefined4 *)(param_2 + 0x50) = 0x20000000; \| *(uint *)(` |
| user.c | 43973 | `*(undefined4 *)(param_2 + 0x50) = 0x20000000; \| *(uint *)(param_2 + 0x54) = 0x20000000 / *(uint *)(param_2 + 0x48); \| *(undefined4 *)(param_` |
| user.c | 43996 | `} \| if (bVar2 != 0x20) goto LAB_0004d0e2; \| *(undefined1 *)(param_2 + 0x6a) = 0x10; \| *(undefined2 *)(param_2 + 0x5c) = 0x200; \| *(undefined` |
| user.c | 43997 | `if (bVar2 != 0x20) goto LAB_0004d0e2; \| *(undefined1 *)(param_2 + 0x6a) = 0x10; \| *(undefined2 *)(param_2 + 0x5c) = 0x200; \| *(undefined4 *)` |
| user.c | 43998 | `*(undefined1 *)(param_2 + 0x6a) = 0x10; \| *(undefined2 *)(param_2 + 0x5c) = 0x200; \| *(undefined4 *)(param_2 + 0x50) = 0x20000000; \| *(uint ` |
| user.c | 44540 | `iVar4 = local_3c + 0x4000; \| local_34 = param_3 + 0x401c; \| thunk_EXT_FUN_810faa34(iVar4,local_34,s_http_HttpTracePostParam_entity_p_000013e` |
| user.c | 44548 | `FUN_00389872(param_1,&local_80,uVar2,iVar5); \| iVar5 = (int)(short)((short)iVar5 + 1); \| } \| iVar3 = local_2c + uVar2 * 0x200; \| FUN_001ea02` |
| user.c | 44556 | `FUN_001ea0f2(local_40,iVar3,local_4c,local_50,iVar6); \| FUN_007acbb2(1,iVar4,local_50,*(int *)(local_38 + 0x464) + uVar2 * 0x80,iVar4); \| uV` |
| user.c | 45054 | `local_7c[iVar18] = -(*(int *)(param_2 + iVar18 * 4) >> 2); \| iVar18 = iVar18 + 1; \| } while (iVar18 < 10); \| iVar13 = local_7c[7] + 0x200000` |
| user.c | 45059 | `(uint)((longlong)local_7c[3] * (longlong)DAT_0004f050) >> 0x1e; \| local_d0 = iVar13 + uVar3; \| local_8c = iVar13 - uVar3; \| local_cc = 0x200` |
| user.c | 45155 | `(int)((ulonglong)((longlong)iVar7 * (longlong)local_7c[7]) >> 0x20) << 2; \| uVar3 = (int)((ulonglong)((longlong)iVar24 * (longlong)local_7c[` |
| user.c | 45158 | `local_f0 = uVar25 + uVar3 + 0x2000000; \| uVar17 = (int)((ulonglong)((longlong)iVar16 * (longlong)local_7c[7]) >> 0x20) << 2 \| \| (uint)((long` |
| user.c | 45161 | `local_d0 = uVar17 + uVar3 + 0x2000000; \| uVar11 = (uint)((longlong)iVar23 * (longlong)local_7c[3]) >> 0x1e \| \| (int)((ulonglong)((longlong)i` |
| user.c | 45162 | `uVar11 = (uint)((longlong)iVar23 * (longlong)local_7c[3]) >> 0x1e \| \| (int)((ulonglong)((longlong)iVar23 * (longlong)local_7c[3]) >> 0x20) <` |
| user.c | 45163 | `(int)((ulonglong)((longlong)iVar23 * (longlong)local_7c[3]) >> 0x20) << 2; \| local_b0 = (0x2000000 - uVar25) - uVar11; \| local_90 = (0x20000` |
| user.c | 45164 | `local_b0 = (0x2000000 - uVar25) - uVar11; \| local_90 = (0x2000000 - uVar17) + uVar11; \| local_ac = (uVar17 - uVar3) + 0x2000000; \| local_cc ` |
| user.c | 45165 | `local_90 = (0x2000000 - uVar17) + uVar11; \| local_ac = (uVar17 - uVar3) + 0x2000000; \| local_cc = (0x2000000 - uVar25) + uVar11; \| local_ec ` |
| user.c | 45166 | `local_ac = (uVar17 - uVar3) + 0x2000000; \| local_cc = (0x2000000 - uVar25) + uVar11; \| local_ec = (0x2000000 - uVar17) - uVar11; \| local_8c ` |
| user.c | 46488 | `{ \| if (param_1 != 0) { \| if ((int)(short)*(ushort *)(param_1 + 0x22) << 0x1d < 0) { \| *(ushort *)(param_1 + 0x22) = *(ushort *)(param_1 + 0` |
| user.c | 59123 | `uVar7 = ((uVar5 \| uVar6) & uVar3 \| uVar5 & uVar6) + DAT_000689dc + uVar7 + local_60; \| uVar7 = uVar7 >> 0x1b \| uVar7 * 0x20; \| uVar6 = uVar6` |
| user.c | 59125 | `uVar6 = uVar6 + local_50 + ((uVar3 \| uVar5) & uVar7 \| uVar3 & uVar5) + DAT_000689dc; \| uVar6 = uVar6 >> 0x17 \| uVar6 * 0x200; \| uVar5 = ((uV` |
| user.c | 59131 | `uVar7 = uVar7 + local_5c + ((uVar5 \| uVar6) & uVar3 \| uVar5 & uVar6) + DAT_000689dc; \| uVar7 = uVar7 >> 0x1b \| uVar7 * 0x20; \| uVar6 = ((uVa` |
| user.c | 59133 | `uVar6 = ((uVar3 \| uVar5) & uVar7 \| uVar3 & uVar5) + DAT_000689dc + uVar6 + local_4c; \| uVar6 = uVar6 >> 0x17 \| uVar6 * 0x200; \| uVar5 = uVar` |
| user.c | 59139 | `uVar7 = uVar7 + local_58 + ((uVar5 \| uVar6) & uVar3 \| uVar5 & uVar6) + DAT_000689dc; \| uVar7 = uVar7 >> 0x1b \| uVar7 * 0x20; \| uVar6 = uVar6` |
| user.c | 59141 | `uVar6 = uVar6 + local_48 + ((uVar3 \| uVar5) & uVar7 \| uVar3 & uVar5) + DAT_000689dc; \| uVar6 = uVar6 >> 0x17 \| uVar6 * 0x200; \| uVar5 = uVar` |
| user.c | 59147 | `uVar7 = uVar7 + local_54 + ((uVar5 \| uVar6) & uVar3 \| uVar5 & uVar6) + DAT_000689dc; \| uVar7 = uVar7 >> 0x1b \| uVar7 * 0x20; \| uVar6 = uVar6` |
| user.c | 59149 | `uVar6 = uVar6 + local_44 + ((uVar3 \| uVar5) & uVar7 \| uVar3 & uVar5) + DAT_000689dc; \| uVar6 = uVar6 >> 0x17 \| uVar6 * 0x200; \| uVar5 = DAT_` |
| user.c | 59153 | `uVar3 = (uVar5 ^ uVar6 ^ uVar7) + DAT_000689e0 + local_70 + uVar3; \| uVar3 = uVar3 >> 0x1d \| uVar3 * 8; \| uVar7 = (uVar3 ^ uVar5 ^ uVar6) + ` |
| user.c | 59161 | `uVar3 = (uVar5 ^ uVar6 ^ uVar7) + DAT_000689e0 + uVar3 + local_68; \| uVar3 = uVar3 >> 0x1d \| uVar3 * 8; \| uVar7 = (uVar3 ^ uVar5 ^ uVar6) + ` |
| user.c | 59169 | `uVar3 = (uVar5 ^ uVar6 ^ uVar7) + DAT_000689e0 + uVar3 + local_6c; \| uVar3 = uVar3 >> 0x1d \| uVar3 * 8; \| uVar7 = (uVar3 ^ uVar5 ^ uVar6) + ` |
| user.c | 59177 | `uVar3 = (uVar5 ^ uVar6 ^ uVar7) + DAT_000689e0 + local_64 + uVar3; \| uVar3 = uVar3 >> 0x1d \| uVar3 * 8; \| uVar7 = (uVar3 ^ uVar5 ^ uVar6) + ` |
| user.c | 59298 | `uVar3 = uVar5 + (uVar4 >> 0x14 \| uVar4 * 0x1000); \| iVar10 = param_2[2]; \| uVar4 = uVar1 + iVar10 + DAT_00068f84 + (uVar3 & uVar5 \| uVar6 & ` |
| user.c | 59310 | `uVar3 = uVar5 + (uVar3 >> 0x14 \| uVar3 * 0x1000); \| iVar21 = param_2[6]; \| uVar4 = uVar4 + iVar21 + (uVar3 & uVar5 \| uVar7 & ~uVar3) + DAT_0` |
| user.c | 59323 | `uVar3 = uVar5 + (uVar3 >> 0x14 \| uVar3 * 0x1000); \| iVar23 = param_2[0xb]; \| uVar4 = uVar4 + iVar22 + ((uVar3 & uVar5 \| uVar7 & ~uVar3) - 0x` |
| user.c | 59334 | `uVar5 = uVar7 + (uVar3 >> 0x14 \| uVar3 * 0x1000); \| iVar9 = param_2[0xe]; \| uVar4 = uVar4 + iVar9 + DAT_00068fb0 + (uVar5 & uVar7 \| uVar24 &` |
| user.c | 59341 | `uVar7 = uVar7 + iVar19 + DAT_00068fb8 + (uVar4 & uVar5 \| uVar3 & ~uVar5); \| uVar7 = uVar4 + (uVar7 >> 0x1b \| uVar7 * 0x20); \| uVar5 = uVar5 ` |
| user.c | 59349 | `uVar7 = uVar7 + iVar20 + DAT_00068fc8 + (uVar4 & uVar5 \| uVar3 & ~uVar5); \| uVar7 = uVar4 + (uVar7 >> 0x1b \| uVar7 * 0x20); \| uVar5 = uVar5 ` |
| user.c | 59357 | `uVar7 = uVar7 + iVar15 + DAT_00068fd8 + (uVar4 & uVar5 \| uVar3 & ~uVar5); \| uVar7 = uVar4 + (uVar7 >> 0x1b \| uVar7 * 0x20); \| uVar5 = uVar5 ` |
| user.c | 59365 | `uVar7 = uVar7 + iVar16 + (uVar4 & uVar5 \| uVar3 & ~uVar5) + DAT_00068fe8; \| uVar7 = uVar4 + (uVar7 >> 0x1b \| uVar7 * 0x20); \| uVar5 = uVar5 ` |
| user.c | 59409 | `uVar3 = uVar3 + iVar9 + ((uVar5 \| ~uVar4) ^ uVar7) + DAT_00069414; \| uVar3 = uVar5 + (uVar3 >> 0x11 \| uVar3 * 0x8000); \| uVar4 = uVar4 + iVa` |
| user.c | 59417 | `uVar3 = uVar3 + iVar22 + ((uVar5 \| ~uVar4) ^ uVar7) + DAT_00069424; \| uVar3 = uVar5 + (uVar3 >> 0x11 \| uVar3 * 0x8000); \| uVar4 = uVar4 + iV` |
| user.c | 59425 | `uVar3 = ((uVar5 \| ~uVar4) ^ uVar7) + DAT_00069434 + iVar21 + uVar3; \| uVar3 = uVar5 + (uVar3 >> 0x11 \| uVar3 * 0x8000); \| uVar4 = ((uVar3 \| ` |
| user.c | 59434 | `uVar3 = uVar5 + (uVar3 >> 0x11 \| uVar3 * 0x8000); \| uVar4 = ((uVar3 \| ~uVar7) ^ uVar5) + DAT_00069448 + iVar15 + uVar4; \| *param_1 = uVar7 +` |
| user.c | 60333 | `} \| pcVar5 = (char *)0x0; \| if (pcVar11 != s_http_HttpTracePatchParam_user_ag_00002008 + 5) { \| pcVar5 = pcVar11 + -0x2000; \| } \| if (pcVar1` |
| user.c | 61386 | `bVar2 = pcVar1 == (char *)0x7180; \| if (bVar3) { \| pcVar1 = param_1 + -0xf900; \| bVar2 = pcVar1 == (char *)0x200; \| } \| bVar4 = bVar3 && (ch` |
| user.c | 61430 | `if ((param_1 != &DAT_0000feff && pcVar1 != (char *)0xff) && \| ((param_1 < s_http_HttpTracePatchParam_user_ag_00002008 + 4 \|\| \| (s_http_HttpT` |
| user.c | 61433 | `bVar4 = (char *)0xd < param_1 + -0x2000; \| bVar2 = param_1 == s_http_HttpTracePatchParam_user_ag_00002008 + 6; \| if (!bVar2) { \| bVar4 = (ch` |
| user.c | 62861 | `FUN_0006dcce(iVar1,iVar11,iVar6,iVar10 << 9,*piVar3 - iVar11); \| } \| iVar10 = iVar10 + piVar3[1]; \| iVar11 = iVar10 * 0x200 - piVar3[2]; \| i` |
| user.c | 62870 | `iVar11 = iVar11 + 1; \| } while (piVar3 != (int *)0x0); \| if (iVar10 != 0) { \| FUN_0006dcce(iVar1,iVar11,iVar6,iVar10 * 0x200, \| *(int *)(iVa` |
| user.c | 63806 | `pcVar9 = (char *)0x0; \| } \| } \| if (((uint)pcVar9 & 0x2000000) != 0) { \| local_58 = &DAT_000017c1; \| local_38[0] = '\x02'; \| local_38[1] = '` |
| user.c | 63929 | `*(int *)(param_5[2] + iVar8 * 4) = param_2; \| *(undefined4 *)(param_5[3] + iVar8 * 4) = *DAT_0006ebf0; \| } \| else if (pcVar10 == (char *)0x2` |
| user.c | 63960 | `pcVar10 = (char *)(uint)*(ushort *)(iVar6 + 2); \| pcVar9 = (char *)0x0; \| if (pcVar10 != s_http_HttpTracePatchParam_user_ag_00002008 + 5) { ` |
| user.c | 63964 | `} \| if (((pcVar10 != s_http_HttpTracePatchParam_user_ag_00002008 + 5 && \| pcVar9 != (char *)0xc) && (pcVar10 + -0x1780 < (char *)0x60)) && \|` |
| user.c | 63987 | `pcVar10 = (char *)(uint)*(ushort *)(iVar6 + 6); \| pcVar9 = (char *)0x0; \| if (pcVar10 != s_http_HttpTracePatchParam_user_ag_00002008 + 5) { ` |
| user.c | 63991 | `} \| if (((pcVar10 != s_http_HttpTracePatchParam_user_ag_00002008 + 5 && \| pcVar9 != (char *)0xc) && (pcVar10 + -0x1780 < (char *)0x60)) && \|` |
| user.c | 64014 | `else { \| pcVar9 = (char *)(uint)*(ushort *)(param_1 + param_2 * 2 + 2); \| if (pcVar9 != s_http_HttpTracePatchParam_user_ag_00002008 + 5) { \|` |
| user.c | 64295 | `iVar4 = FUN_003aec5a(iVar8 + 0x4f4,*(undefined4 *)(param_1 + 8)); \| if (iVar4 != 0) { \| FUN_003aecdc(iVar8 + 0x4f4,uVar1,0xffff); \| FUN_003a` |
| user.c | 67287 | `if (iVar1 == 0) { \| return 0; \| } \| if (((*(char *)(iVar1 + 0x10c) == '\0') \|\| (iVar2 = FUN_000d308c(param_1,0x20000000), iVar2 == 0)) \| \|\| ` |
| user.c | 67371 | `if (iVar1 == 0) { \| return 0; \| } \| if (((*(char *)(iVar1 + 0x10c) == '\0') \|\| (iVar2 = FUN_000d308c(param_1,0x20000000), iVar2 == 0)) \| \|\| ` |
| user.c | 67438 | `if (iVar1 == 0) { \| return 0; \| } \| if (((*(char *)(iVar1 + 0x10c) != '\0') && (iVar2 = FUN_000d308c(param_1,0x20000000), iVar2 != 0)) \| && ` |
| user.c | 68907 | `iVar4 = (*(byte *)(param_2 + 0x12) & 0xf) << 5; \| bVar1 = *(byte *)(param_2 + 0x14); \| param_1[0x10] = (byte)iVar4 \| *(byte *)(param_2 + 0x1` |
| user.c | 68911 | `iVar4 = (*(byte *)(param_2 + 0x26) & 0xf) << 5; \| bVar1 = *(byte *)(param_2 + 0x28); \| param_1[0x12] = (byte)iVar4 \| *(byte *)(param_2 + 0x2` |
| user.c | 68932 | `iVar4 = (*(byte *)(param_2 + 0x1c) & 0xf) << 5; \| bVar1 = *(byte *)(param_2 + 0x1e); \| param_1[0x18] = (byte)iVar4 \| *(byte *)(param_2 + 0x1` |
| user.c | 69079 | `ushort local_1f2; \| short local_26; \|  \| thunk_EXT_FUN_811037c8(auStack_224,param_1,0x200); \| FUN_000759f2(auStack_224); \| *param_3 = 8; \| i` |
| user.c | 69088 | `} \| uVar3 = (uint)local_219; \| if ((uVar3 == 0) \|\| \| ((((uVar3 != 0x200 && (uVar3 != 0x400)) && (uVar3 != 0x800)) && (uVar3 != 0x1000)))) { ` |
| user.c | 73028 | `return uVar1; \| } \| if (param_1 < 0x800) { \| if (param_1 < 0x200) { \| if (param_1 < 0x100) { \| uVar1 = 8; \| }` |
| user.c | 73045 | `} \| return uVar1; \| } \| if (param_1 < 0x2000) { \| if (param_1 < 0x1000) { \| uVar1 = 0xc; \| }` |
| user.c | 73064 | `} \| if (param_1 < 0x800000) { \| if (param_1 < 0x80000) { \| if (param_1 < 0x20000) { \| if (param_1 < 0x10000) { \| uVar1 = 0x10; \| }` |
| user.c | 73081 | `} \| return uVar1; \| } \| if (param_1 < 0x200000) { \| if (param_1 < 0x100000) { \| uVar1 = 0x14; \| }` |
| user.c | 73099 | `return uVar1; \| } \| if (param_1 < 0x8000000) { \| if (param_1 < 0x2000000) { \| if (param_1 < 0x1000000) { \| uVar1 = 0x18; \| }` |
| user.c | 73116 | `} \| return uVar1; \| } \| if (param_1 < 0x20000000) { \| if (param_1 < 0x10000000) { \| uVar1 = 0x1c; \| }` |
| user.c | 73181 | `return pcVar1; \| } \| if (param_1 < 0x800) { \| if (param_1 < 0x200) { \| if (param_1 < 0x100) { \| pcVar1 = ""; \| }` |
| user.c | 73198 | `} \| return pcVar1; \| } \| if (param_1 < 0x2000) { \| if (param_1 < 0x1000) { \| pcVar1 = (char *)0x300000; \| }` |
| user.c | 73217 | `} \| if (param_1 < 0x800000) { \| if (param_1 < 0x80000) { \| if (param_1 < 0x20000) { \| if (param_1 < 0x10000) { \| pcVar1 = (char *)0x400000; ` |
| user.c | 73234 | `} \| return pcVar1; \| } \| if (param_1 < 0x200000) { \| if (param_1 < 0x100000) { \| pcVar1 = &DAT_00500000; \| }` |
| user.c | 73252 | `return pcVar1; \| } \| if (param_1 < 0x8000000) { \| if (param_1 < 0x2000000) { \| if (param_1 < 0x1000000) { \| pcVar1 = (char *)0x600000; \| }` |
| user.c | 73269 | `} \| return pcVar1; \| } \| if (param_1 < 0x20000000) { \| if (param_1 < 0x10000000) { \| pcVar1 = (char *)0x700000; \| }` |
| user.c | 73340 | `} \| } \| else if (iVar1 < 0x800) { \| if (iVar1 < 0x200) { \| if (iVar1 < 0x100) { \| pcVar2 = ""; \| }` |
| user.c | 73355 | `pcVar2 = (char *)0x2c0000; \| } \| } \| else if (iVar1 < 0x2000) { \| if (iVar1 < 0x1000) { \| pcVar2 = (char *)0x300000; \| }` |
| user.c | 73375 | `else { \| if (iVar1 < 0x800000) { \| if (iVar1 < 0x80000) { \| if (iVar1 < 0x20000) { \| if (iVar1 < 0x10000) { \| pcVar2 = (char *)0x400000; \| }` |
| user.c | 73410 | `goto LAB_0007b1dc; \| } \| if (iVar1 < 0x8000000) { \| if (iVar1 < 0x2000000) { \| if (iVar1 < 0x1000000) { \| *param_2 = 0x600000; \| }` |
| user.c | 73425 | `*param_2 = &DAT_006c0000; \| } \| } \| else if (iVar1 < 0x20000000) { \| if (iVar1 < 0x10000000) { \| *param_2 = 0x700000; \| }` |
| user.c | 73474 | `param_1 = param_1 + (1 << (uVar1 - 10 & 0xff)) >> (uVar3 & 0xff); \| } \| return (*(int *)(DAT_0007b484 + (iVar2 + 1) * 4) * param_1 + \| *(int` |
| user.c | 73498 | `iVar1 = param_1 >> 8; \| param_1 = param_1 + iVar1 * -0x100; \| iVar1 = *(int *)(DAT_0007b488 + (iVar1 + 1) * 4) * param_1 * 4 + \| *(int *)(DA` |
| user.c | 84281 | ` \| iVar8 = 0; \| thunk_EXT_FUN_811049dc(auStack_364,0x100); \| thunk_EXT_FUN_811049dc(auStack_564,0x200); \| local_38 = 0; \| local_34 = 0; \| lo` |
| user.c | 84286 | `local_34 = 0; \| local_30 = 0; \| local_2c = 0; \| thunk_EXT_FUN_811049dc(auStack_764,0x200); \| uVar6 = 0; \| thunk_EXT_FUN_811049dc(auStack_264` |
| user.c | 84719 | `iVar3 = DAT_0009c1e4 + 7; \| } \| else { \| iVar3 = thunk_EXT_FUN_810ffa74(0x200,s_mmi_common_c_0009b40c,0xa1d); \| if (iVar3 != 0) { \| iVar4 = ` |
| user.c | 84730 | `thunk_EXT_FUN_810ff23e(); \| thunk_EXT_FUN_811ebaa4(); \| while( true ) { \| thunk_EXT_FUN_810f7460(iVar3,0x200); \| thunk_EXT_FUN_810f7460(iVar` |
| user.c | 85807 | `iVar4 = DAT_0009dde0; \| } \| else { \| iVar6 = iVar6 + 0x20000; \| iVar4 = DAT_0009dde0 + 0x38; \| } \| goto LAB_0009db14;` |
| user.c | 86053 | `local_44 = iVar4 + iVar1 + 4; \| if (local_44 == 0) goto LAB_0009e222; \| local_40 = thunk_EXT_FUN_810ff150(); \| if (0x200 < local_40) { \| loc` |
| user.c | 86054 | `if (local_44 == 0) goto LAB_0009e222; \| local_40 = thunk_EXT_FUN_810ff150(); \| if (0x200 < local_40) { \| local_40 = 0x200; \| } \| iVar1 = (ui` |
| user.c | 86061 | `local_3c = iVar4 + iVar1 + 4; \| if (local_3c == 0) goto LAB_0009e222; \| local_38 = thunk_EXT_FUN_810ff150(); \| if (0x200 < local_38) { \| loc` |
| user.c | 86062 | `if (local_3c == 0) goto LAB_0009e222; \| local_38 = thunk_EXT_FUN_810ff150(); \| if (0x200 < local_38) { \| local_38 = 0x200; \| } \| iVar3 = (ui` |
| user.c | 86256 | `} \| uVar1 = param_2[0x2a]; \| if (0x1ff < uVar1) { \| uVar1 = 0x200; \| } \| *(ushort *)(param_1 + 0x2f8) = uVar1; \| thunk_EXT_FUN_810f7460(para` |
| user.c | 87036 | `thunk_EXT_FUN_811049dc(local_638,0x404); \| uVar4 = *(ushort *)(param_1 + 0x2f8); \| if (0x1ff < uVar4) { \| uVar4 = 0x200; \| } \| local_2c._0_2` |
| user.c | 87039 | `uVar4 = 0x200; \| } \| local_2c._0_2_ = uVar4; \| FUN_007f18ca(local_638,0x200,param_1 + 0xf7,uVar4,uVar4); \| local_30 = local_638; \| uVar2 = F` |
| user.c | 99720 | `undefined4 *puVar2; \|  \| uVar1 = *(int *)(DAT_000ab1e8 + 8) + 0x55; \| if (uVar1 < 0x2000) { \| puVar2 = (undefined4 *)(*(int *)(DAT_000ab1e8 ` |
| user.c | 99752 | `undefined4 *puVar3; \|  \| uVar1 = *(int *)(DAT_000ab1e8 + 8) + 0x55; \| if (uVar1 < 0x2000) { \| puVar3 = (undefined4 *)(*(int *)(DAT_000ab1e8 ` |
| user.c | 99844 | `else if (iVar3 < 0x4000) { \| iVar3 = iVar3 + 3; \| } \| else if (iVar3 < 0x200000) { \| iVar3 = iVar3 + 4; \| } \| else {` |
| user.c | 99858 | `else if (iVar5 < 0x4000) { \| iVar5 = iVar3 + 0x10; \| } \| else if (iVar5 < 0x200000) { \| iVar5 = iVar3 + 0x11; \| } \| else {` |
| user.c | 100667 | `iVar2 = FUN_003518da(param_1,0,puVar1 + 8); \| if (iVar2 == 0) { \| thunk_EXT_FUN_81104074(0x10,DAT_000ac520,&DAT_000ac51c,puVar1[8]); \| if ((` |
| user.c | 105202 | `} \| iVar7 = FUN_00369e74(); \| if (iVar7 != 0) { \| *(uint *)(puVar2 + 0x14) = *(uint *)(puVar2 + 0x14) \| 0x2000; \| } \| thunk_EXT_FUN_81103f4a` |
| user.c | 105286 | `} \| goto LAB_000b8ef0; \| } \| *puVar2 = 0x200000; \| } \| if (((*(char *)(*piVar1 + 10) == '\x05') \|\| (*(char *)(*piVar1 + 10) == '\x04')) && \|` |
| user.c | 106911 | `FUN_003b919c(*piVar1,0); \| *(undefined4 *)(*piVar1 + 0x214) = 0; \| } \| thunk_EXT_FUN_811049dc(*piVar1,0x200); \| FUN_00365484(*piVar1,param_1` |
| user.c | 106941 | `iVar6 = thunk_EXT_FUN_80a938ca(); \| if (((iVar6 == 3) \|\| (iVar6 = thunk_EXT_FUN_80a938ca(), iVar6 == 4)) \|\| \| (iVar6 = thunk_EXT_FUN_80a938c` |
| user.c | 106977 | `iVar6 = thunk_EXT_FUN_80a938ca(); \| if (((iVar6 == 3) \|\| (iVar6 = thunk_EXT_FUN_80a938ca(), iVar6 == 4)) \|\| \| (iVar6 = thunk_EXT_FUN_80a938c` |
| user.c | 109480 | `undefined1 auStack_210 [512]; \|  \| uVar3 = 0; \| thunk_EXT_FUN_811049dc(auStack_210,0x200); \| iVar2 = 2; \| do { \| iVar1 = FUN_000c72fc(param_` |
| user.c | 109550 | `undefined1 auStack_21c [512]; \|  \| uVar3 = 0; \| thunk_EXT_FUN_811049dc(auStack_21c,0x200); \| uVar2 = 1; \| do { \| iVar1 = FUN_000c73a0(param_` |
| user.c | 109578 | `int local_2c [2]; \|  \| uVar5 = 0; \| thunk_EXT_FUN_811049dc(auStack_22c,0x200); \| uVar4 = 1; \| local_2c[0] = 0; \| if (param_3 != 0) {` |
| user.c | 109623 | `int local_24 [2]; \|  \| uVar4 = 0; \| thunk_EXT_FUN_811049dc(auStack_224,0x200); \| iVar3 = 2; \| local_24[0] = 0; \| iVar2 = param_2;` |
| user.c | 109671 | `int local_2c [2]; \|  \| uVar5 = 0; \| thunk_EXT_FUN_811049dc(auStack_22c,0x200); \| uVar4 = 1; \| local_2c[0] = 0; \| if (param_3 != 0) {` |
| user.c | 110871 | `local_30 = param_1; \| uStack_2c = param_2; \| iStack_28 = param_3; \| thunk_EXT_FUN_811049dc(auStack_234,0x200); \| uVar5 = 1; \| local_34 = 0; ` |
| user.c | 110882 | `iVar2 = thunk_FUN_000d0e54(auStack_234,uVar1); \| if (iVar2 != 0) { \| uVar3 = FUN_000d07aa(auStack_234,1); \| thunk_EXT_FUN_811049dc(auStack_2` |
| user.c | 113289 | `local_30 = param_2; \| local_2c = param_3; \| local_28 = param_4; \| thunk_EXT_FUN_811049dc(local_48,0x200); \| *param_5 = 0xffffffff; \| param_5` |
| user.c | 113346 | `LAB_000cbd26: \| if (bVar1) { \| uVar9 = 0xff; \| thunk_EXT_FUN_811049dc(local_48,0x200); \| *param_5 = 0xffffffff; \| param_5[1] = 0xffffffff; \|` |
| user.c | 113443 | `if (uVar5 != 0) goto LAB_000cbf7c; \| } \| LAB_000cbf94: \| thunk_EXT_FUN_811049dc(local_48,0x200); \| goto LAB_000cbfee; \| } \| if (unaff_r10 ==` |
| user.c | 113470 | `bVar10 = iVar3 == 6; \| if (!bVar10) { \| if (bVar1) { \| thunk_EXT_FUN_811049dc(local_48,0x200); \| *param_5 = 0xffffffff; \| param_5[1] = 0xfff` |
| user.c | 113486 | `if (*(int *)(local_28 + 0xc) == 0) { \| LAB_000cbfca: \| if (bVar1) { \| thunk_EXT_FUN_811049dc(local_48,0x200); \| *param_5 = 0xffffffff; \| par` |
| user.c | 113542 | `local_30 = param_2; \| local_2c = param_3; \| local_28 = param_4; \| thunk_EXT_FUN_811049dc(local_48,0x200); \| *param_5 = 0xffffffff; \| param_5` |
| user.c | 113598 | `LAB_000cc81a: \| uVar7 = 0; \| uVar9 = 0xff; \| thunk_EXT_FUN_811049dc(local_48,0x200); \| *param_5 = 0xffffffff; \| param_5[1] = 0xffffffff; \| b` |
| user.c | 113615 | `&& (bVar8)) { \| uVar7 = 0; \| uVar9 = 0xff; \| thunk_EXT_FUN_811049dc(local_48,0x200); \| *param_5 = 0xffffffff; \| param_5[1] = 0xffffffff; \| b` |
| user.c | 113677 | `LAB_000cca02: \| bVar10 = false; \| if (bVar8) { \| thunk_EXT_FUN_811049dc(local_48,0x200); \| *param_5 = 0xffffffff; \| param_5[1] = 0xffffffff;` |
| user.c | 113692 | `if (local_a8[0] == '\0') goto LAB_000cca02; \| if ((int)((uint)local_68 << 0x19) < 0) { \| if ((uVar7 != 0) && (bVar8)) { \| thunk_EXT_FUN_8110` |
| user.c | 113756 | `bVar10 = local_44 == 6; \| if (!bVar10) { \| if (bVar8) { \| thunk_EXT_FUN_811049dc(local_48,0x200); \| *param_5 = 0xffffffff; \| param_5[1] = 0x` |
| user.c | 113772 | `if (*(int *)(local_28 + 0xc) == 0) { \| LAB_000ccaea: \| if (bVar10) { \| thunk_EXT_FUN_811049dc(local_48,0x200); \| *param_5 = 0xffffffff; \| pa` |
| user.c | 117751 | `LAB_000d0346: \| if ((param_5 != 0) && (param_6 != 0)) { \| uVar4 = 0; \| thunk_EXT_FUN_811049dc(auStack_230,0x200); \| if (uVar1 < uVar2 + 1) g` |
| user.c | 119892 | `undefined4 uStack_20; \| undefined2 local_1c [4]; \|  \| thunk_EXT_FUN_811049dc(auStack_230,0x200); \| local_24 = *(undefined4 *)(DAT_000d2638 +` |
| user.c | 120766 | `(s_PNULL____parent_node_ptr____win__000d35c0,s_mmk_window_c_000d2afc,0x398); \| } \| if ((*(int *)(iVar2 + 0x14) != 0) && (*(int *)(iVar2 + 0x` |
| user.c | 120768 | `if ((*(int *)(iVar2 + 0x14) != 0) && (*(int *)(iVar2 + 0x14) != iVar1)) { \| iVar3 = FUN_000d308c(param_1,0x2000); \| if (iVar3 != 0) { \| FUN_` |
| user.c | 120776 | `FUN_007ec8a4(*(undefined4 *)(*(int *)(iVar2 + 0x14) + 4),0xf023,0); \| } \| if (iVar3 != 0) { \| FUN_000d3066(param_2,0x2000,0); \| } \| } \| *(in` |
| user.c | 125193 | `else if (iVar8 == 0x100) { \| iVar6 = iVar6 << 2; \| } \| else if (iVar8 == 0x200) { \| iVar6 = iVar6 << 1; \| } \| else {` |
| user.c | 127765 | `else { \| param_4[0x1b] = 0x4000; \| } \| if (param_2 < 0x200f) { \| param_4[0x1c] = sVar7 + sVar4 + (short)((int)local_20 << 2) + (short)((int)` |
| user.c | 132379 | `iVar11 = FUN_0013ed38(iVar11,iVar9); \| iVar11 = SignedSaturate(iVar11 + 0x8000,0x20); \| SignedDoesSaturate(iVar11,0x20); \| iVar9 = SignedSat` |
| user.c | 132981 | `); \| FUN_002721ce(local_34,0,param_8,&param_9,&param_10,&local_30,local_a4); \| sVar5 = FUN_00276038(0xe,(int)param_10); \| iVar8 = SignedSatu` |
| user.c | 137933 | `FUN_00404da6(param_4,param_1 + 0x3a4); \| iVar1 = param_1 + 0x8a; \| if (param_2 == 0) { \| thunk_EXT_FUN_810f7460(iVar1,0x200); \| *(undefined2` |
| user.c | 137937 | `*(undefined2 *)(param_1 + 0x28a) = 0; \| } \| else if (param_2 != iVar1) { \| thunk_EXT_FUN_810f7460(iVar1,0x200); \| FUN_007f1a1e(iVar1,0xff,pa` |
| user.c | 138108 | `thunk_EXT_FUN_81104074(0x10,DAT_000eb080 + 0x11,&DAT_000eb07c); \| } \| else { \| puVar3 = (undefined2 *)thunk_EXT_FUN_810ffa5c(0x200,0x4444444` |
| user.c | 138321 | `uVar2 = 0; \| } \| else { \| uVar2 = thunk_EXT_FUN_810ffa5c(0x200,0x44444444,DAT_000eb548 + 0x14,0x2d9); \| *(undefined4 *)(iVar1 + 0x10) = uVar` |
| user.c | 138326 | `do { \| iVar5 = iVar1 + uVar4 * 4; \| if (*(int *)(iVar5 + 4) == 0) { \| iVar3 = thunk_EXT_FUN_810ffa5c(0x200,0x44444444,DAT_000eb688,0x2df); \|` |
| user.c | 138756 | `} \| else { \| FUN_000cff4e(param_1,param_2 & 0xffff,param_3 + 0x20c,param_3 + 0x21c,param_3 + 0x21e, \| param_3 + 0x41e,param_3,param_3 + 0x20` |
| user.c | 144851 | `*(undefined2 *)(iVar3 + param_3 * 2) = 0x5c; \| local_178[0] = uVar7; \| FUN_007f1a1e(iVar3 + param_3 * 2 + 2,0xff,local_3c,uVar7); \| *(short ` |
| user.c | 144906 | `*(undefined2 *)(iVar3 + param_3 * 2) = 0x5c; \| local_178[0] = uVar7; \| FUN_007f1a1e(iVar3 + param_3 * 2 + 2,0xff,local_3c,uVar7); \| *(short ` |
| user.c | 145043 | `int iVar3; \|  \| iVar1 = thunk_EXT_FUN_810ffa5c(0x21c,0x44444444,s_mmifmm_srv_c_000f7574,0x66f,param_4); \| *(int *)(iVar1 + 0x200) = param_1 ` |
| user.c | 145284 | `FUN_00404da6(param_4,param_1 + 0x694); \| iVar4 = param_1 + 0x45c; \| if (param_2 == 0) { \| thunk_EXT_FUN_811049dc(iVar4,0x200); \| *(undefined` |
| user.c | 145288 | `*(undefined2 *)(param_1 + 0x65c) = 0; \| } \| else if (param_2 != iVar4) { \| thunk_EXT_FUN_811049dc(iVar4,0x200); \| FUN_007f1a1e(iVar4,0xff,pa` |
| user.c | 145328 | `if (param_2[8] == 2) { \| iVar7 = param_1 + 0x45c; \| if (*param_2 == 0) { \| thunk_EXT_FUN_811049dc(iVar7,0x200); \| uVar1 = 0; \| LAB_000f8004:` |
| user.c | 145334 | `*(undefined2 *)(param_1 + 0x65c) = uVar1; \| } \| else if (*param_2 != iVar7) { \| thunk_EXT_FUN_811049dc(iVar7,0x200); \| FUN_007f1a1e(iVar7,0x` |
| user.c | 145454 | `iVar2 = FUN_000f7098(param_2,auStack_74,0x28); \| bVar1 = false; \| if (iVar2 != 0) { \| if (*(int *)(param_2 + 0x200) == 0) { \| iVar2 = 3; \| }` |
| user.c | 145458 | `iVar2 = 3; \| } \| else { \| iVar2 = FUN_003b9e28(param_2,*(int *)(param_2 + 0x200),auStack_74, \| *(undefined4 *)(param_2 + 0x214),*(undefined4` |
| user.c | 152236 | `thunk_EXT_FUN_81104074(0x10,DAT_0010699c,&DAT_00106998); \| if ((param_1 != 0) && (param_4 != 0)) { \| FUN_0010655c(param_1); \| iVar1 = thunk_` |
| user.c | 152238 | `FUN_0010655c(param_1); \| iVar1 = thunk_EXT_FUN_810ff5c0(0x200,s_drm_dh_c_001069a0,0x4a5); \| if (iVar1 != 0) { \| thunk_EXT_FUN_810f7460(iVar1` |
| user.c | 152282 | ` \| uVar3 = 10; \| if (param_1 != 0) { \| iVar1 = thunk_EXT_FUN_810ff5c0(0x200,s_drm_dh_c_001069a0,0x2d5); \| if (iVar1 == 0) { \| return 8; \| }` |
| user.c | 152286 | `if (iVar1 == 0) { \| return 8; \| } \| thunk_EXT_FUN_810f7460(iVar1,0x200); \| iVar2 = FUN_00106584(param_1,iVar1,0xff,param_2); \| if (iVar2 == ` |
| user.c | 152377 | `bVar5 = local_38 == 3; \| } while (!bVar5); \| if (local_23c[0] == '\x01') { \| thunk_EXT_FUN_811049dc(local_23c,0x200); \| iVar1 = FUN_003b98ca` |
| user.c | 152383 | `thunk_EXT_FUN_81104074(0x10,DAT_0010699c + -6,&DAT_001069b8,local_23c); \| iVar1 = FUN_00858a20(local_23c); \| param_2[0x4e] = iVar1; \| thunk_` |
| user.c | 152412 | `LAB_0010695a: \| while (local_30 != 0) { \| uVar4 = local_30; \| if (0x200 < local_30) { \| uVar4 = 0x200; \| } \| thunk_EXT_FUN_811049dc(local_23` |
| user.c | 152413 | `while (local_30 != 0) { \| uVar4 = local_30; \| if (0x200 < local_30) { \| uVar4 = 0x200; \| } \| thunk_EXT_FUN_811049dc(local_23c); \| iVar3 = FU` |
| user.c | 152544 | `} \| else { \| *param_3 = 2; \| iVar4 = FUN_0042a91a(param_1,auStack_238,0x200,&local_34); \| bVar5 = iVar4 == 0; \| LAB_00106b8a: \| do {` |
| user.c | 152551 | `if (!bVar5) goto LAB_00106d12; \| iVar4 = thunk_EXT_FUN_810ff150(auStack_238); \| if ((iVar4 == 2) && (local_34 == 2)) { \| iVar4 = FUN_0042a91` |
| user.c | 152555 | `bVar5 = iVar4 == 0; \| if (!bVar5) goto LAB_00106b8a; \| } \| iVar4 = FUN_0042a91a(param_1,auStack_43c,0x200,&local_30); \| bVar5 = iVar4 == 0; ` |
| user.c | 152578 | `iVar4 = FUN_00858a20(iVar4); \| } \| param_2[0x4e] = iVar4; \| while (iVar4 = FUN_0042a91a(param_1,auStack_43c,0x200,&local_30), iVar4 == 0) { ` |
| user.c | 152665 | `*param_3 = 2; \| } \| param_2[0x4c] = 2; \| iVar5 = FUN_0042a91a(param_1,auStack_238,0x200,&local_2c); \| bVar7 = iVar5 == 0; \| do { \| if (!bVar` |
| user.c | 152670 | `do { \| if (!bVar7) goto LAB_0010668e; \| local_34 = local_34 + local_2c; \| iVar5 = FUN_0042a91a(param_1,auStack_43c,0x200,&local_30); \| bVar7` |
| user.c | 152686 | `thunk_EXT_FUN_81104074(0x10,DAT_00106ed0 + 2,&DAT_001069b8,iVar5); \| iVar5 = FUN_00858a20(iVar5); \| if (iVar5 == 0x14) { \| iVar5 = FUN_0042a` |
| user.c | 152689 | `iVar5 = FUN_0042a91a(param_1,auStack_43c,0x200,&local_30); \| if (iVar5 != 0) goto LAB_0010668e; \| local_34 = local_34 + local_30; \| iVar5 = ` |
| user.c | 152692 | `iVar5 = FUN_0042a91a(param_1,auStack_43c,0x200,&local_30); \| if (iVar5 != 0) goto LAB_0010668e; \| local_34 = local_30 + local_34; \| iVar5 = ` |
| user.c | 152694 | `local_34 = local_30 + local_34; \| iVar5 = FUN_003b98ca(param_1,auStack_43c,0x200,&local_30,0); \| if (iVar5 == 0) { \| iVar5 = thunk_EXT_FUN_8` |
| user.c | 152698 | `local_34 = local_34 + (iVar5 - (int)auStack_43c); \| uVar8 = FUN_004227d8(auStack_43c,local_30,param_2); \| bVar7 = (int)uVar8 == 0; \| piVar1 ` |
| user.c | 152807 | `thunk_EXT_FUN_811049dc(auStack_21c,0x204); \| local_18 = 0; \| if (param_1 != 0) { \| uVar5 = FUN_0042a91a(param_1,auStack_21c,0x200,&local_18)` |
| user.c | 152810 | `uVar5 = FUN_0042a91a(param_1,auStack_21c,0x200,&local_18); \| uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20); \| if (((int)uVar5 == 0) && \| (u` |
| user.c | 152858 | `local_18 = 0; \| iVar1 = FUN_003b8e7e(param_1,0x31,0); \| if (iVar1 == 0) goto LAB_00107184; \| iVar2 = FUN_0042a91a(iVar1,auStack_218,0x200,&l` |
| user.c | 152859 | `iVar1 = FUN_003b8e7e(param_1,0x31,0); \| if (iVar1 == 0) goto LAB_00107184; \| iVar2 = FUN_0042a91a(iVar1,auStack_218,0x200,&local_14); \| if (` |
| user.c | 152938 | `local_24 = 0; \| if ((param_1 != 0) && (param_4 != 0)) { \| FUN_0010655c(param_1); \| iVar1 = thunk_EXT_FUN_810ff5c0(0x200,s_drm_dh_c_001069a0,` |
| user.c | 152943 | `thunk_EXT_FUN_81104074(0x10,DAT_001077ec + 1,&DAT_00106998); \| } \| else { \| thunk_EXT_FUN_810f7460(iVar1,0x200); \| FUN_0010630c(iVar1,param_` |
| user.c | 153266 | `} \| uVar7 = (uint)(byte)local_23c[1]; \| uVar8 = (uint)(byte)local_23c[2]; \| thunk_EXT_FUN_811049dc(local_23c,0x200); \| iVar3 = FUN_003b98ca(` |
| user.c | 153273 | `while ((((bVar10 && (local_38 == uVar7)) && \| (iVar3 = FUN_003b98ca(param_1,local_23c,uVar8,&local_38,uVar9), iVar3 == 0)) && \| (local_38 ==` |
| user.c | 153275 | `(local_38 == uVar8))) { \| uVar7 = 0x200; \| uVar2 = 0; \| if (local_38 < 0x200) { \| local_23c[local_38] = '\0'; \| uVar2 = local_3d; \| }` |
| user.c | 153303 | `goto LAB_00108968; \| } \| uVar8 = local_30[0]; \| if (0x200 < local_30[0]) { \| uVar8 = 0x200; \| } \| thunk_EXT_FUN_811049dc(local_23c);` |
| user.c | 153304 | `} \| uVar8 = local_30[0]; \| if (0x200 < local_30[0]) { \| uVar8 = 0x200; \| } \| thunk_EXT_FUN_811049dc(local_23c); \| iVar5 = FUN_0042a91a(param` |
| user.c | 153309 | `thunk_EXT_FUN_811049dc(local_23c); \| iVar5 = FUN_0042a91a(param_1,local_23c,uVar8,&local_38); \| bVar10 = iVar5 == 0; \| uVar9 = 0x200; \| if (` |
| user.c | 153775 | `param_2[4] = (param_2[4] & 0xffffffc7) + 8 & 0xfffffff9 \| 1; \| iVar6 = DAT_00109900 + param_3 * 0x1c; \| uVar1 = *(uint *)(iVar6 + 0x14); \| u` |
| user.c | 153816 | `param_2[7] = param_2[7] \| 0x180; \| } \| if ((int)(uVar4 << 0x15) < 0) { \| uVar1 = param_2[7] \| 0x200000; \| } \| else { \| uVar1 = param_2[7] \| ` |
| user.c | 153838 | `break; \| case 3: \| case 4: \| uVar1 = param_2[7] \| 0x20000; \| break; \| case 5: \| uVar1 = param_2[7];` |
| user.c | 153909 | `uVar4 = *(undefined4 *)(param_1 + 0xc); \| puVar1 = (undefined4 *)(iVar3 + 0x9c); \| (*(code *)*puVar1)(uVar4,0xc0000000,1); \| (*(code *)*puVa` |
| user.c | 153916 | `(*(code *)*puVar1)(uVar4,4,1); \| (*(code *)*puVar1)(uVar4,0xd00,1); \| (*(code *)*puVar1)(uVar4,0x40000000); \| (*(code *)*puVar1)(uVar4,0x200` |
| user.c | 153987 | `param_4[5] = DAT_00109d10; \| if ((param_1[0xf] == 2) \|\| (param_1[0xf] == 3)) { \| uVar5 = uVar5 \| 0xa000000; \| uVar7 = uVar7 \| 0x200; \| uVar4` |
| user.c | 156779 | `if (param_3 == 1) { \| local_28[0] = *local_30; \| uVar5 = (uint)local_28[0]; \| if (((uVar5 - 0x2e80 < 0x7180) \|\| (uVar5 - 0xf900 < 0x200)) \|\|` |
| user.c | 159572 | `} \| iVar2 = FUN_000b94e6(uVar1); \| if (iVar2 == 2) { \| FUN_007f0816(1,&local_18,0,0,DAT_00110a14 + 2,(_DAT_00110a1c + -0x8e) * 0x20000000, \|` |
| user.c | 159748 | `return; \| } \| FUN_007ee69e(DAT_00110a18,&local_34); \| FUN_007f0816(1,&local_34,0,0,iVar5,(_DAT_00110a1c + -0x8e) * 0x20000000,_DAT_00110a1c ` |
| user.c | 159787 | `int iVar3; \|  \| thunk_EXT_FUN_81104074(0x10,DAT_00110a64 + 0x54,&DAT_00110a70); \| iVar2 = thunk_EXT_FUN_810ffa74(0x200,s_mmibt_func_c_00110a` |
| user.c | 159789 | `thunk_EXT_FUN_81104074(0x10,DAT_00110a64 + 0x54,&DAT_00110a70); \| iVar2 = thunk_EXT_FUN_810ffa74(0x200,s_mmibt_func_c_00110a78,&DAT_00001080` |
| user.c | 160305 | `if (iVar2 != 0) { \| FUN_003da36e(iVar4); \| } \| thunk_EXT_FUN_811049dc(DAT_00111730,0x200); \| uVar3 = param_2; \| if (0xfe < param_2) { \| uVar` |
| user.c | 160312 | `} \| FUN_007f1a1e(DAT_00111730,0xff,param_1,param_2,uVar3); \| iVar2 = DAT_00111730; \| *(char *)(DAT_00111730 + 0x200) = (char)param_4; \| *(un` |
| user.c | 168107 | `undefined1 auStack_218 [512]; \| undefined2 local_18 [4]; \|  \| thunk_EXT_FUN_811049dc(auStack_218,0x200); \| uVar2 = 0; \| local_18[0] = 0xff; ` |
| user.c | 168167 | `undefined2 local_10 [2]; \|  \| uVar3 = 0; \| thunk_EXT_FUN_811049dc(auStack_210,0x200); \| piVar1 = DAT_0011e15c; \| local_10[0] = 0xff; \| if ((` |
| user.c | 168231 | `uVar2 = 0xff; \| } \| *(undefined2 *)(puVar4 + 0x82) = uVar2; \| thunk_EXT_FUN_811049dc(puVar4 + 2,0x200); \| FUN_007f19f0(puVar4 + 2,param_1,*(` |
| user.c | 168357 | `short local_24 [4]; \|  \| uVar3 = 0; \| thunk_EXT_FUN_811049dc(auStack_224,0x200); \| local_24[0] = 0xff; \| if ((param_1 != 0) && (param_2 != 0` |
| user.c | 168566 | `uVar2 = 0xc; \| } \| else { \| thunk_EXT_FUN_811049dc(auStack_228,0x200); \| if (0xff < param_3) { \| param_3 = 0xff; \| }` |
| user.c | 168596 | `undefined4 local_20 [2]; \|  \| uVar4 = 0; \| thunk_EXT_FUN_811049dc(auStack_224,0x200); \| local_24[0] = 0xff; \| thunk_EXT_FUN_811049dc(local_4` |
| user.c | 168598 | `uVar4 = 0; \| thunk_EXT_FUN_811049dc(auStack_224,0x200); \| local_24[0] = 0xff; \| thunk_EXT_FUN_811049dc(local_424,0x200); \| local_20[0] = 0; ` |
| user.c | 168611 | `else { \| iVar2 = thunk_FUN_0011ddda(*param_1,auStack_224,local_24); \| if (iVar2 != 0) { \| thunk_EXT_FUN_811049dc(local_424,0x200); \| uVar1 =` |
| user.c | 180014 | `piStack_30 = param_2; \| local_2c = param_3; \| iStack_28 = param_4; \| thunk_EXT_FUN_811049dc(aiStack_450,0x200); \| thunk_EXT_FUN_811049dc(aiS` |
| user.c | 180015 | `local_2c = param_3; \| iStack_28 = param_4; \| thunk_EXT_FUN_811049dc(aiStack_450,0x200); \| thunk_EXT_FUN_811049dc(aiStack_250,0x200); \| uVar6` |
| user.c | 183239 | `(int)(short)((uint)*(undefined4 *)(psVar17 + 2) >> 0x10) * (int)sVar10 + \| (int)(short)*(undefined4 *)(psVar17 + 2) * (int)sVar2 + \| (int)ps` |
| user.c | 183395 | `} \| param_3 = param_3 + 2; \| *psVar16 = (short)uVar25; \| iVar26 = iVar27 + -0x20000; \| bVar1 = 0x1ffff < iVar27; \| psVar16 = psVar17 + 2; \| ` |
| user.c | 183553 | `(int)(short)*(undefined4 *)puVar23 * (int)sVar3 + \| (int)(short)((uint)*(undefined4 *)puVar11 >> 0x10) * (int)sVar7 + \| (int)(short)*(undefi` |
| user.c | 183617 | `(int)(short)((uint)*(undefined4 *)(puVar24 + 2) >> 0x10) * (int)sVar3 + \| (int)(short)*(undefined4 *)(puVar24 + 2) * (int)sVar7 + \| (int)(sh` |
| user.c | 183665 | `(int)(short)*(undefined4 *)(puVar24 + 4) * (int)sVar3 + \| (int)(short)((uint)*(undefined4 *)(puVar24 + 2) >> 0x10) * (int)sVar7 + \| (int)(sh` |
| user.c | 183691 | `(int)(short)((uint)*(undefined4 *)(puVar24 + 4) >> 0x10) * (int)sVar3 + \| (int)(short)*(undefined4 *)(puVar24 + 4) * (int)sVar7 + \| (int)(sh` |
| user.c | 183818 | `iVar22 = iVar22 + iVar23 * -0x1000; \| psVar18 = psVar18 + 2; \| *psVar19 = (short)iVar22; \| iVar23 = (int)(short)uVar25 * (int)(short)iVar21 ` |
| user.c | 184012 | `(int)sVar3 * (int)(short)((uint)uVar48 >> 0x10) + \| (int)sVar15 * (int)(short)((uint)uVar47 >> 0x10) + \| (int)sVar2 * (int)(short)((uint)uVa` |
| user.c | 184035 | `(int)sVar4 * (int)(short)uVar54 + \| (int)sVar16 * (int)(short)uVar48 + \| (int)sVar3 * (int)(short)uVar47 + \| (int)sVar15 * (int)(short)uVar4` |
| user.c | 184059 | `(int)sVar4 * (int)(short)((uint)uVar58 >> 0x10) + \| (int)sVar16 * (int)(short)((uint)uVar57 >> 0x10) + \| (int)sVar3 * (int)(short)((uint)uVa` |
| user.c | 184082 | `(int)sVar5 * (int)(short)uVar59 + \| (int)sVar17 * (int)(short)uVar58 + \| (int)sVar4 * (int)(short)uVar57 + \| (int)sVar16 * (int)(short)uVar5` |
| user.c | 184291 | `(int)(short)*puVar22 * (int)sVar3 + \| (int)(short)((uint)*puVar22 >> 0x10) * (int)sVar10 + (int)sVar19 * (int)sVar2) << \| (uVar35 & 0xff)) +` |
| user.c | 184348 | `uVar9 = puVar6[1]; \| *puVar7 = (short)((int)sVar3 * (int)sVar5 + \| (int)sVar2 * (int)sVar4 + \| (int)(short)((uint)puVar6[-1] >> 0x10) * (int` |
| user.c | 184351 | `(int)(short)((uint)puVar6[-1] >> 0x10) * (int)sVar5 + 0x2000 >> 0xe); \| iVar12 = iVar13 + -2; \| puVar7[1] = (short)((int)(short)uVar9 * (int` |
| user.c | 184830 | `param_1 = param_1 + ((1 << (uVar3 & 0xff)) >> 1) >> (uVar3 & 0xff); \| } \| piVar4 = (int *)(param_2 + iVar1 * 4); \| iVar1 = (*piVar4 * (0x200` |
| user.c | 186959 | `(int)((uint6)((int6)piVar15[0x3c0] * (int6)sVar4) >> 0x10) + \| (int)((uint6)((int6)piVar15[0x300] * (int6)sVar9) >> 0x10) + \| (int)((uint6)(` |
| user.c | 186969 | `(int)((uint6)((int6)piVar16[-0x3c0] * (int6)sVar4) >> 0x10) + \| (int)((uint6)((int6)piVar16[-0x300] * (int6)sVar9) >> 0x10) + \| (int)((uint6` |
| user.c | 188694 | `sVar2 = (short)((uint)uVar9 >> 0x10); \| iVar22 = SignedSaturate((int)sVar2 * (int)sVar3 * 2,0x20); \| SignedDoesSaturate(iVar22,0x20); \| iVar` |
| user.c | 188782 | `*param_1 = (short)((uint)uVar3 >> 0x10); \| return; \| } \| iVar1 = SignedSaturate(*param_2 * 0x10000 + 0x20000,0x20); \| SignedDoesSaturate(iVa` |
| user.c | 188790 | `SignedDoesSaturate(uVar3,0x20); \| *param_1 = (short)((uint)uVar3 >> 0x10); \| } \| iVar1 = SignedSaturate(*param_2 * 0x10000 + -0x20000,0x20);` |
| user.c | 188969 | `iVar11 = SignedSaturate(param_2 * 0x10000 + -0x10000,0x20); \| SignedDoesSaturate(iVar11,0x20); \| if (iVar11 >> 0x10 != 0) { \| iVar11 = Signe` |
| user.c | 189005 | `iVar6 = SignedSaturate(local_40[0] * 0x10000 + (iVar6 >> 0x10) * -0x10000,0x20); \| SignedDoesSaturate(iVar6,0x20); \| if (iVar6 >> 0x10 != 0)` |
| user.c | 189047 | `iVar8 = SignedSaturate(param_2 * 0x10000 + -0x10000,0x20); \| SignedDoesSaturate(iVar8,0x20); \| if (iVar8 >> 0x10 == 0) goto LAB_0013ec40; \| ` |
| user.c | 189234 | `iVar29 = DAT_0013f94c; \| } \| do { \| *psVar25 = (short)((uint)(*psVar24 * 0x2000 + 0x8000 + *psVar21 * 0x4000 + *psVar22 * 0x4000) \| >> 0x10)` |
| user.c | 189253 | `iVar12 = uVar17 * 2; \| uVar19 = (uint)(ushort)param_6[3]; \| do { \| uVar9 = SignedSaturate(sVar6 * 0x1000 + sVar7 * 0x2000 + sVar15 * 0x1000 ` |
| user.c | 189255 | `do { \| uVar9 = SignedSaturate(sVar6 * 0x1000 + sVar7 * 0x2000 + sVar15 * 0x1000 + \| *(short *)(iVar29 + iVar12) * 0x1000 + \| *(short *)(iVar` |
| user.c | 189256 | `uVar9 = SignedSaturate(sVar6 * 0x1000 + sVar7 * 0x2000 + sVar15 * 0x1000 + \| *(short *)(iVar29 + iVar12) * 0x1000 + \| *(short *)(iVar16 + iV` |
| user.c | 189257 | `*(short *)(iVar29 + iVar12) * 0x1000 + \| *(short *)(iVar16 + iVar12) * 0x2000 + \| *(short *)(iVar18 + iVar12) * 0x2000 + asStack_a0[uVar19] ` |
| user.c | 189303 | `iVar16 = DAT_0013f94c; \| } \| do { \| iVar29 = SignedSaturate(*psVar21 * 0x2000 + *psVar22 * 0x4000 + *psVar24 * 0x4000 + \| *psVar25 * 0x4000 ` |
| user.c | 189375 | `psVar23 = asStack_a0 + uVar19; \| if (param_2 == 5) { \| do { \| uVar8 = SignedSaturate(*psVar21 * 0x1000 + *psVar22 * 0x2000 + *psVar24 * 0x20` |
| user.c | 189376 | `if (param_2 == 5) { \| do { \| uVar8 = SignedSaturate(*psVar21 * 0x1000 + *psVar22 * 0x2000 + *psVar24 * 0x2000 + \| *psVar25 * 0x2000 + *psVar` |
| user.c | 189377 | `do { \| uVar8 = SignedSaturate(*psVar21 * 0x1000 + *psVar22 * 0x2000 + *psVar24 * 0x2000 + \| *psVar25 * 0x2000 + *psVar27 * 0x2000 + *psVar30` |
| user.c | 189393 | `} \| else { \| do { \| uVar8 = SignedSaturate(*psVar21 * 0x1000 + *psVar22 * 0x2000 + *psVar24 * 0x2000 + \| *psVar25 * 0x2000 + *psVar27 * 0x20` |
| user.c | 189394 | `else { \| do { \| uVar8 = SignedSaturate(*psVar21 * 0x1000 + *psVar22 * 0x2000 + *psVar24 * 0x2000 + \| *psVar25 * 0x2000 + *psVar27 * 0x2000 +` |
| user.c | 189395 | `do { \| uVar8 = SignedSaturate(*psVar21 * 0x1000 + *psVar22 * 0x2000 + *psVar24 * 0x2000 + \| *psVar25 * 0x2000 + *psVar27 * 0x2000 + *psVar30` |
| user.c | 189476 | `if (param_2 == 5) { \| do { \| uVar19 = uVar19 + 5; \| iVar16 = SignedSaturate(*psVar26 * 0x1000 + *psVar21 * 0x2000 + *psVar22 * 0x2000 + \| *p` |
| user.c | 189477 | `do { \| uVar19 = uVar19 + 5; \| iVar16 = SignedSaturate(*psVar26 * 0x1000 + *psVar21 * 0x2000 + *psVar22 * 0x2000 + \| *psVar24 * 0x2000 + *psV` |
| user.c | 189478 | `uVar19 = uVar19 + 5; \| iVar16 = SignedSaturate(*psVar26 * 0x1000 + *psVar21 * 0x2000 + *psVar22 * 0x2000 + \| *psVar24 * 0x2000 + *psVar25 * ` |
| user.c | 189498 | `else { \| do { \| uVar19 = uVar19 + 4; \| iVar16 = SignedSaturate(*psVar26 * 0x1000 + *psVar21 * 0x2000 + *psVar22 * 0x2000 + \| *psVar24 * 0x20` |
| user.c | 189499 | `do { \| uVar19 = uVar19 + 4; \| iVar16 = SignedSaturate(*psVar26 * 0x1000 + *psVar21 * 0x2000 + *psVar22 * 0x2000 + \| *psVar24 * 0x2000 + *psV` |
| user.c | 189500 | `uVar19 = uVar19 + 4; \| iVar16 = SignedSaturate(*psVar26 * 0x1000 + *psVar21 * 0x2000 + *psVar22 * 0x2000 + \| *psVar24 * 0x2000 + *psVar25 * ` |
| user.c | 189535 | `iVar18 = uVar19 * 2; \| uVar20 = (uint)(ushort)param_6[9]; \| do { \| uVar8 = SignedSaturate(uVar17 * 0x8000 + *(short *)(iVar16 + iVar18) * 0x` |
| user.c | 189543 | `*(short *)(local_40 + iVar18) * 0x400 + \| *(short *)(local_3c + iVar18) * 0x400 + \| *(short *)(local_38 + iVar18) * 0x400 + \| *(short *)(loc` |
| user.c | 190585 | `iVar9 = (*pcVar4)(param_1,local_28[0]); \| ppcVar8 = ppcVar2; \| if (iVar9 == 0) { \| uVar7 = uVar7 >> 2 \| 0x2000; \| *piVar6 = (int)pcVar4; \| p` |
| user.c | 190602 | `iVar3 = (*param_3)(param_1,local_28[0]); \| piVar6 = piVar5 + 1; \| if (iVar3 == 0) { \| uVar7 = uVar7 >> 2 \| 0x2000; \| piVar5[1] = (int)param_` |
| user.c | 193024 | `else { \| thunk_EXT_FUN_810f7460(iVar2,0x400); \| FUN_000d5cfa(iVar2,0x400,s__s_s_s_001ab53c,&DAT_001ab51c,param_2,&DAT_001ab5a4); \| iVar3 = F` |
| user.c | 200971 | `iVar2 = iVar2 + DAT_001b7848; \| bVar5 = iVar2 == 0; \| } \| if ((!bVar5) && (iVar2 != 0x20000f6 && iVar2 != 0x20000fd)) goto LAB_001b747e; \| }` |
| user.c | 201044 | `iVar2 = iVar2 + DAT_001b7848; \| bVar5 = iVar2 == 0; \| } \| if ((!bVar5) && (iVar2 != 0x20000f6 && iVar2 != 0x20000fd)) goto LAB_001b747e; \| }` |
| user.c | 203596 | `*(int *)(iVar17 + 0x1fc) = iVar16; \| if (iVar16 == 1 \|\| iVar16 == 3) { \| uVar13 = FUN_003e1180(uVar10); \| *(undefined4 *)(iVar17 + 0x200) = ` |
| user.c | 203995 | `return 0; \| } \| uVar2 = FUN_0024abcc(uVar5,0xc); \| if (uVar2 < 0x200) { \| if (uVar2 < 0x80) { \| if ((int)(uVar2 - 4) < 0) { \| *(undefined1 *` |
| user.c | 204044 | `do { \| uVar3 = FUN_0024abcc(uVar2,0x20); \| uVar4 = uVar3 >> 0x14; \| if (uVar4 < 0x200) { \| if (0x7f < uVar4) { \| iVar10 = *(int *)(param_1 +` |
| user.c | 204066 | `uVar12 = uVar3 << 1; \| if (-1 < (int)uVar3) { \| uVar3 = (uVar3 & 0x7fffffff) >> 0x13; \| if (uVar3 < 0x200) { \| if (0x7f < uVar3) { \| iVar10 ` |
| user.c | 204093 | `} \| if (-1 < (int)uVar12) { \| uVar12 = (uVar12 & 0x7fffffff) >> 0x13; \| if (uVar12 < 0x200) { \| if (0x7f < uVar12) { \| iVar10 = *(int *)(par` |
| user.c | 204182 | `do { \| uVar1 = FUN_0024abcc(param_3,0x20); \| uVar6 = uVar1 >> 0x14; \| if (uVar6 < 0x200) { \| if (uVar6 < 0x80) { \| if (uVar6 < 8) goto LAB_0` |
| user.c | 204258 | `do { \| uVar1 = FUN_0024abcc(param_2,0x20); \| uVar2 = uVar1 >> 0x14; \| if (uVar2 < 0x200) { \| if (0x7f < uVar2) { \| iVar8 = *(int *)(param_1 ` |
| user.c | 204280 | `uVar6 = uVar1 << 1; \| if (-1 < (int)uVar1) { \| uVar1 = (uVar1 & 0x7fffffff) >> 0x13; \| if (uVar1 < 0x200) { \| if (0x7f < uVar1) { \| iVar8 = ` |
| user.c | 204301 | `} \| if (-1 < (int)uVar6) { \| uVar1 = (uVar6 & 0x7fffffff) >> 0x13; \| if (uVar1 < 0x200) { \| if (0x7f < uVar1) { \| iVar8 = *(int *)(param_1 +` |
| user.c | 204468 | `goto LAB_001bb0d8; \| } \| *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) \| 0x1000; \| uVar5 = *(uint *)(&DAT_00001058 + param_1) \| 0x20` |
| user.c | 204642 | `*(uint *)(puVar8 + 0x6c) = uVar7; \| if (0x3c0 < uVar7) { \| *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) \| 0x80; \| *(uint *)(&DAT_00` |
| user.c | 205096 | `} \| *(undefined4 *)(param_2 + 0x2e8) = 1; \| *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) \| 0x80; \| *(uint *)(&DAT_00001058 + param_` |
| user.c | 208513 | `puVar2 = DAT_0003bcd4; \| thunk_EXT_FUN_811037c8(DAT_0003bcd4[iVar5] + 0x12,&local_18,6); \| if ((*(char *)*puVar2 == '\x01') \|\| (*(char *)puV` |
| user.c | 208514 | `thunk_EXT_FUN_811037c8(DAT_0003bcd4[iVar5] + 0x12,&local_18,6); \| if ((*(char *)*puVar2 == '\x01') \|\| (*(char *)puVar2[1] == '\x01')) { \| lo` |
| user.c | 208936 | `*(undefined2 *)(DAT_001c2de4 + -0x14) = 0xac44; \| *(undefined2 *)(puVar1 + 10) = 0x144; \| *puVar1 = 0; \| *(undefined2 *)(puVar1 + 0xc) = 0x2` |
| user.c | 209569 | `*(undefined4 *)(*piVar1 + 0x79c) = 0xff; \| *(undefined4 *)(*piVar1 + 0x524) = 0xffff; \| *(undefined1 *)(*piVar1 + 0x420) = 1; \| *(undefined2` |
| user.c | 209666 | `uStack_14 = param_3; \| thunk_EXT_FUN_81103f4a \| (DAT_001c4470,param_3,param_1 & 0xff,cVar1,uVar4,param_1 >> 0x18,param_2 & 0xff,uVar2); \| th` |
| user.c | 209753 | `iStack_30 = param_2; \| uStack_2c = param_3; \| iStack_28 = param_4; \| thunk_EXT_FUN_811049dc(local_23c,0x200); \| uVar1 = FUN_00795b22(param_4` |
| user.c | 209764 | `uVar4 = uVar3 + 2 & 0xffff; \| local_23c[uVar3 + 1] = *(undefined1 *)(param_4 + uVar3); \| uVar3 = uVar4; \| } while (uVar4 < 0x200); \| thunk_E` |
| user.c | 210059 | `FUN_003b919c(*piVar1,0); \| *(undefined4 *)(*piVar1 + 0x214) = 0; \| } \| thunk_EXT_FUN_811049dc(*piVar1,0x200); \| FUN_00365484(*piVar1,param_1` |
| user.c | 210089 | `iVar6 = thunk_EXT_FUN_80a938ca(); \| if (((iVar6 == 3) \|\| (iVar6 = thunk_EXT_FUN_80a938ca(), iVar6 == 4)) \|\| \| (iVar6 = thunk_EXT_FUN_80a938c` |
| user.c | 210125 | `iVar6 = thunk_EXT_FUN_80a938ca(); \| if (((iVar6 == 3) \|\| (iVar6 = thunk_EXT_FUN_80a938ca(), iVar6 == 4)) \|\| \| (iVar6 = thunk_EXT_FUN_80a938c` |
| user.c | 210180 | `thunk_EXT_FUN_811018b0(DAT_001c5e60 + 0x5a0,DAT_001c5e60,0x837); \| } \| thunk_EXT_FUN_811049dc(iVar3,0x268); \| *(undefined4 *)(iVar3 + 0x200)` |
| user.c | 210189 | `(s__BT_opps_first_push_ind_obj_len__001c5e64,*(undefined4 *)(param_1 + 0xc), \| *(undefined2 *)(param_1 + 0x264)); \| iVar4 = *piVar1; \| puVar` |
| user.c | 210220 | `iVar3 = thunk_EXT_FUN_80a938ca(); \| if (((iVar3 == 3) \|\| (iVar3 = thunk_EXT_FUN_80a938ca(), iVar3 == 4)) \|\| \| (iVar3 = thunk_EXT_FUN_80a938c` |
| user.c | 210307 | `if (local_56 != 0) { \| uVar9 = (uint)*(byte *)(param_5 + (uint)local_56) * 0x100 + -3 + \| (uint)*(byte *)((uint)local_56 + iVar8) & 0xffff; ` |
| user.c | 210309 | `(uint)*(byte *)((uint)local_56 + iVar8) & 0xffff; \| thunk_EXT_FUN_811049dc(&local_258,0x200); \| uVar7 = 0; \| if (0x200 < uVar9) { \| uVar9 = ` |
| user.c | 210313 | `uVar9 = 0x1fe; \| } \| local_2c = puVar3 + 4; \| thunk_EXT_FUN_811049dc(local_2c,0x200); \| for (; uVar7 < uVar9 >> 1; uVar7 = uVar7 + 1 & 0xfff` |
| user.c | 210381 | `uVar7 = 0; \| *(undefined1 *)(*piVar1 + 0x420) = 0; \| if (local_56 != 0) { \| thunk_EXT_FUN_811049dc(&local_258,0x200); \| uVar9 = (uint)*(byte` |
| user.c | 210384 | `thunk_EXT_FUN_811049dc(&local_258,0x200); \| uVar9 = (uint)*(byte *)(param_5 + (uint)local_56) * 0x100 + -3 + \| (uint)*(byte *)((uint)local_5` |
| user.c | 210388 | `uVar9 = 0x1fe; \| } \| local_2c = puVar3 + 4; \| thunk_EXT_FUN_811049dc(local_2c,0x200); \| for (; uVar7 < uVar9 >> 1; uVar7 = uVar7 + 1 & 0xfff` |
| user.c | 210441 | `uVar2 = CONCAT11(*(undefined1 *)(param_5 + 5),*(undefined1 *)(param_5 + 6)); \| *(ushort *)(*piVar1 + 0x41a) = uVar2; \| if (0x1fff < uVar2) {` |
| user.c | 210488 | `iVar5 = thunk_EXT_FUN_80a938ca(); \| if (iVar5 == 3) { \| LAB_001c66ce: \| FUN_00788b10(*(undefined4 *)(*piVar1 + 0x200),*(undefined4 *)(*piVar` |
| user.c | 210577 | `*(undefined4 *)(*piVar1 + 0x528) = 0; \| *(undefined4 *)(*piVar1 + 0x524) = 0xffff; \| *(undefined1 *)(*piVar1 + 0x420) = 1; \| *(undefined2 *)` |
| user.c | 210580 | `*(undefined2 *)(*piVar1 + 0x418) = 0x2000; \| uVar3 = FUN_00795a80(); \| *(undefined4 *)(*piVar1 + 0x41c) = uVar3; \| FUN_001d9866(0,uVar3,0x20` |
| user.c | 210691 | `puVar2 = DAT_001c5e34; \| piVar1 = DAT_001c4ed0; \| piVar7 = DAT_001c43cc; \| local_38 = *piVar3 + 0x200; \| uVar9 = local_38; \| switch(param_1)` |
| user.c | 210895 | `iVar12 = thunk_EXT_FUN_80a938ca(); \| if (((iVar12 == 3) \|\| (iVar12 = thunk_EXT_FUN_80a938ca(), iVar12 == 4)) \|\| \| (iVar12 = thunk_EXT_FUN_80` |
| user.c | 210941 | `else { \| thunk_EXT_FUN_81103f4a(s__BT_AUTH_IND_other_devices_is_co_001c6ec4); \| iVar12 = *piVar3; \| uVar9 = FUN_001d0fd8(*(undefined4 *)(iVa` |
| user.c | 210947 | `break; \| case 0x1a0e: \| iVar12 = *DAT_001c6870; \| uVar10 = FUN_001d0fd8(*(undefined4 *)(iVar12 + 0x200),*(undefined4 *)(iVar12 + 0x204), \| *` |
| user.c | 211068 | `iVar6 = thunk_EXT_FUN_80a938ca(); \| if (((iVar6 == 3) \|\| (iVar6 = thunk_EXT_FUN_80a938ca(), iVar6 == 4)) \|\| \| (iVar6 = thunk_EXT_FUN_80a938c` |
| user.c | 211101 | `iVar12 = thunk_EXT_FUN_80a938ca(); \| if (((iVar12 == 3) \|\| (iVar12 = thunk_EXT_FUN_80a938ca(), iVar12 == 4)) \|\| \| (iVar12 = thunk_EXT_FUN_80` |
| user.c | 211168 | `iVar12 = thunk_EXT_FUN_80a938ca(); \| if (((iVar12 == 3) \|\| (iVar12 = thunk_EXT_FUN_80a938ca(), iVar12 == 4)) \|\| \| (uVar9 = thunk_EXT_FUN_80a` |
| user.c | 211188 | `if (iVar12 != 0) { \| thunk_EXT_FUN_810fe44e(*(undefined4 *)(puVar13 + 0x14)); \| } \| iVar12 = FUN_00789958(*(undefined4 *)(*piVar3 + 0x200),*` |
| user.c | 220246 | `uVar8 = 0x100; \| } \| else if (uVar7 == 2) { \| uVar8 = 0x200; \| } \| else if (2 < uVar7) { \| uVar8 = 0xf00;` |
| user.c | 220376 | `} \| else { \| if (uVar7 < 0xd01) { \| if ((uVar7 == 0) \|\| ((uVar7 != 0x100 && (uVar7 != 0x200)))) goto LAB_001d9dd8; \| if ((*(byte *)(iVar1 + ` |
| user.c | 220714 | `iVar4 = param_3[1]; \| iVar5 = iVar4; \| if (param_1 != 1) { \| iVar5 = iVar4 + 0x2000; \| } \| (*param_5)(param_2,iVar4,iVar5,(int)param_3[6] / ` |
| user.c | 222037 | `*(ushort *)(pcVar3 + 0x5c) = *(ushort *)(pcVar3 + 0x5e); \| iVar2 = (uint)*(ushort *)(pcVar3 + 0x5e) * 0x100000; \| *(int *)(pcVar3 + 0x50) = ` |
| user.c | 222123 | `if (sVar3 == 1) { \| iVar4 = uVar11 + (uint)*(byte *)(puVar8 + 0xb) * 0x80; \| puVar8[0xd] = (short)iVar4; \| iVar4 = (iVar4 + -0x2000) * 100; ` |
| user.c | 222132 | `return; \| } \| puVar8[0xc] = (ushort)*(byte *)(puVar8 + 0xb); \| iVar4 = ((ushort)puVar8[0xd] - 0x2000) * 100; \| puVar8[0xe] = (*(byte *)(puVa` |
| user.c | 222194 | `*(ushort *)(piVar10 + 0x17) = *(ushort *)((int)piVar10 + 0x5e); \| iVar4 = (uint)*(ushort *)((int)piVar10 + 0x5e) * 0x100000; \| piVar10[0x14]` |
| user.c | 222273 | `*(ushort *)(piVar10 + 0x17) = *(ushort *)((int)piVar10 + 0x5e); \| iVar4 = (uint)*(ushort *)((int)piVar10 + 0x5e) * 0x100000; \| piVar10[0x14]` |
| user.c | 222419 | `if (sVar3 == 1) { \| iVar4 = (uint)*(byte *)((int)puVar8 + 0x17) + uVar11 * 0x80; \| puVar8[0xd] = (short)iVar4; \| iVar4 = (iVar4 + -0x2000) *` |
| user.c | 222428 | `return; \| } \| puVar8[0xc] = sVar2; \| iVar4 = ((ushort)puVar8[0xd] - 0x2000) * 100; \| puVar8[0xe] = (sVar2 + -0x40) * 100 + \| (short)((int)(i` |
| user.c | 222458 | `puVar8[1] = 0; \| } \| *(undefined1 *)((int)puVar8 + 7) = 0x7f; \| puVar8[4] = 0x2000; \| puVar8[5] = 0x100; \| puVar8[6] = 0; \| *(undefined1 *)(` |
| user.c | 222468 | `*(undefined1 *)(puVar8 + 0xb) = 0; \| *(undefined1 *)((int)puVar8 + 0x17) = 0; \| puVar8[0xc] = 0x40; \| puVar8[0xd] = 0x2000; \| puVar8[0xe] = ` |
| user.c | 222510 | `*(ushort *)(piVar10 + 0x17) = *(ushort *)((int)piVar10 + 0x5e); \| iVar4 = (uint)*(ushort *)((int)piVar10 + 0x5e) * 0x100000; \| piVar10[0x14]` |
| user.c | 222548 | `if (sVar3 == 1) { \| sVar3 = puVar8[0xd]; \| puVar8[0xd] = sVar3 + 1U; \| iVar4 = ((ushort)(sVar3 + 1U) - 0x2000) * 100; \| puVar8[0xe] = (puVar` |
| user.c | 222558 | `} \| sVar3 = puVar8[0xc]; \| puVar8[0xc] = sVar3 + 1; \| iVar4 = ((ushort)puVar8[0xd] - 0x2000) * 100; \| puVar8[0xe] = (sVar3 + -0x3f) * 100 + ` |
| user.c | 222571 | `if (sVar3 == 1) { \| sVar3 = puVar8[0xd]; \| puVar8[0xd] = sVar3 - 1U; \| iVar4 = ((ushort)(sVar3 - 1U) - 0x2000) * 100; \| puVar8[0xe] = (puVar` |
| user.c | 222581 | `} \| sVar3 = puVar8[0xc]; \| puVar8[0xc] = sVar3 + -1; \| iVar4 = ((ushort)puVar8[0xd] - 0x2000) * 100; \| puVar8[0xe] = (sVar3 + -0x41) * 100 +` |
| user.c | 223190 | `piVar10 = *(int **)(param_1 + 0x14); \| iVar8 = param_1 + 0x2dc + (uint)bVar1 * 0x20; \| *(ushort *)(iVar8 + 8) = uVar3; \| iVar13 = (uVar3 - 0` |
| user.c | 223512 | ` \| iVar1 = DAT_001dedf8; \| if ((-0x3381 < param_2) && (iVar1 = param_2, 0x1fff < param_2)) { \| iVar1 = 0x2000; \| } \| iVar1 = iVar1 + 0x8000;` |
| user.c | 223708 | `*(int *)(iVar9 + 0x5e0) = iVar6 + 1; \| iVar6 = FUN_001de9f8(param_1,(int)param_2[0x1c] - (int)param_2[0x20] * (param_5 + -0x3c)); \| *(int *)` |
| user.c | 223710 | `*(int *)(iVar9 + 0x5e4) = iVar6 + 1; \| sVar5 = 0x200 - (short)((param_2[0x1d] * 0x200 + 500) / 1000); \| *(short *)(iVar9 + 0x604) = sVar5; \|` |
| user.c | 223731 | `iVar6 = -(int)param_2[0x18]; \| iVar10 = DAT_001df2d8; \| if ((-0x3381 < iVar6) && (iVar10 = iVar6, 0x1fff < iVar6)) { \| iVar10 = 0x2000; \| } ` |
| user.c | 223756 | `*(int *)(iVar9 + 0x628) = iVar6 + 1; \| iVar6 = -(int)param_2[0x16]; \| if ((-0x3381 < iVar6) && (iVar13 = iVar6, 0x1fff < iVar6)) { \| iVar13 ` |
| user.c | 224209 | `*(ushort *)(piVar4 + 0x17) = *(ushort *)((int)piVar4 + 0x5e); \| iVar8 = (uint)*(ushort *)((int)piVar4 + 0x5e) * 0x100000; \| piVar4[0x14] = i` |
| user.c | 224962 | `iVar7 = piVar11[(int)piVar9]; \| } \| else { \| iVar7 = param_1[0x830] + -0x20000; \| } \| param_1[0x830] = iVar7; \| if (iVar6 == 7) {` |
| user.c | 224996 | `iVar7 = piVar10[(int)piVar5]; \| } \| else { \| iVar7 = param_1[0x896] + 0x20000; \| } \| param_1[0x896] = iVar7; \| if (iVar6 == 0) {` |
| user.c | 225049 | `iVar8 = *(int *)(DAT_001e0908 + param_1 * 4); \| iVar5 = DAT_001e090c; \| if (iVar8 != 0x400) { \| if (iVar8 == 0x200) { \| iVar5 = DAT_001e090c` |
| user.c | 225865 | `FUN_00139a04(local_84,local_80); \| iVar4 = FUN_0046a3c0(param_1,(int)local_8c[0],local_80,local_5c); \| local_78 = FUN_002ce6f0(local_80,(int` |
| user.c | 225926 | `local_94 = local_94 + 0x24; \| iVar17 = (int)(short)((short)iVar17 + 0x40); \| } while (iVar17 < 0x100); \| thunk_EXT_FUN_811037c8(param_3,loca` |
| user.c | 226144 | `else if (iVar13 == 0x100) { \| iVar3 = piVar9[0x30c] << 2; \| } \| else if (iVar13 == 0x200) { \| iVar3 = piVar9[0x30c] << 1; \| } \| else {` |
| user.c | 228647 | ` \| if (param_1 != 0) { \| *(undefined2 *)(param_1 + 0x150) = 0; \| *(undefined2 *)(param_1 + 0x152) = 0x2000; \| *(undefined2 *)(param_1 + 0x15` |
| user.c | 228685 | `int iVar1; \|  \| *(undefined2 *)(param_1 + 0x150) = 0; \| *(undefined2 *)(param_1 + 0x152) = 0x2000; \| *(undefined2 *)(param_1 + 0x154) = 0xda` |
| user.c | 228737 | `int local_2c; \| short *psStack_28; \|  \| puVar10 = (undefined4 *)(param_2 + 0x200); \| iStack_34 = param_1; \| iStack_30 = param_2; \| local_2c ` |
| user.c | 229384 | `if (*(int *)(iVar6 + 0x28) == 0) { \| if (cVar1 != '\x01') goto LAB_001e5a30; \| puVar5 = *(undefined4 **)(iVar6 + 0x30); \| *(undefined4 *)(iV` |
| user.c | 229386 | `puVar5 = *(undefined4 **)(iVar6 + 0x30); \| *(undefined4 *)(iVar6 + 0x94) = 0x200000; \| for (sVar2 = *(short *)(iVar6 + 0x72); 0 < sVar2; sVa` |
| user.c | 230074 | `cVar4 != '\x0e' && cVar4 != '\x0f')) && \| (*(char *)(param_1 + uVar8 * 0x78 + uVar6 + 0x450) != '\r')) { \| iVar5 = param_1 + uVar6 * 2; \| FU` |
| user.c | 230275 | `puVar6[0xd] = 0x130; \| puVar6[0xe] = 0x180; \| puVar6[0xf] = 0x1f0; \| puVar6[0x10] = 0x200; \| } \| else { \| if (iVar1 == 0x200) {` |
| user.c | 230278 | `puVar6[0x10] = 0x200; \| } \| else { \| if (iVar1 == 0x200) { \| *(undefined4 *)(*(int *)(param_1 + 0xf8) + uVar8 * 4) = 0xf; \| puVar6[1] = 5; \|` |
| user.c | 230313 | `goto LAB_001e6a62; \| } \| if (0x5621 < iVar4) { \| if (iVar1 == 0x200) { \| *(undefined4 *)(*(int *)(param_1 + 0xf8) + uVar8 * 4) = 0xe; \| puVa` |
| user.c | 230383 | `puVar6[0xe] = 0xdd; \| puVar6[0xf] = 0x117; \| puVar6[0x10] = 0x168; \| puVar6[0x11] = 0x200; \| } \| else if (iVar1 == 0x200) { \| *(undefined4 *` |
| user.c | 230385 | `puVar6[0x10] = 0x168; \| puVar6[0x11] = 0x200; \| } \| else if (iVar1 == 0x200) { \| *(undefined4 *)(*(int *)(param_1 + 0xf8) + uVar8 * 4) = 0xf` |
| user.c | 230920 | `bool bVar18; \|  \| piVar16 = (int *)(param_6 + 0x100); \| puVar15 = (uint *)(param_6 + 0x200); \| puVar17 = (uint *)(param_6 + 0x300); \| if (pa` |
| user.c | 230932 | `uVar10 = (param_2 & 0x7f) << 1; \| } \| uVar14 = ((int)((*(int *)(DAT_001e75cc + uVar10 * 4) - *(int *)(DAT_001e75cc + param_2 * 4) >> \| 0xe) ` |
| user.c | 230957 | `((int)(((uint)lVar3 >> 0xe \| (int)((ulonglong)lVar3 >> 0x20) << 0x12) + 0x10000000) >> \| 0xe); \| uVar13 = (uint)lVar4 >> 0xe \| (int)((ulongl` |
| user.c | 230979 | `lVar3 = (longlong)(*(int *)(DAT_001e75cc + param_3 * 4) - *(int *)(DAT_001e75cc + uVar10 * 4)) \| * (longlong)DAT_001e75e0; \| uVar6 = ((int)(` |
| user.c | 231005 | `((int)(((uint)lVar3 >> 0xe \| (int)((ulonglong)lVar3 >> 0x20) << 0x12) + 0x10000000 \| ) >> 0xe); \| uVar13 = (uint)lVar4 >> 0xe \| (int)((ulong` |
| user.c | 231139 | `else { \| uVar3 = (int)((*(int *)(DAT_001e7990 + param_3 * 4) - \| *(int *)(DAT_001e7990 + (uint)*(byte *)(param_1 + 10) * 4) >> 0xe) * \| (uin` |
| user.c | 235641 | `iVar3 = 0x16; \| } \| else { \| if (param_3 == 0x200) { \| uVar2 = *(uint *)(param_1 + 0x10) \| 0x200; \| } \| else {` |
| user.c | 235642 | `} \| else { \| if (param_3 == 0x200) { \| uVar2 = *(uint *)(param_1 + 0x10) \| 0x200; \| } \| else { \| if (param_3 != 0x400) goto LAB_001efc18;` |
| user.c | 237806 | `thunk_EXT_FUN_81103f4a(s__tcpip__tcpip__dns_trace_dnc_sen_001f4274); \| return -1; \| } \| iVar3 = FUN_00252856(0x200); \| if (iVar3 == 0) { \| t` |
| user.c | 238682 | `*(undefined4 *)(local_3c + 0x1f0) = 0x10; \| *(undefined4 *)(local_3c + 0x1f8) = *(undefined4 *)(local_3c + 0x224); \| *(undefined4 *)(local_3` |
| user.c | 240254 | ` \| uVar1 = (uint)(*(ushort *)(param_3 + 6) >> 8); \| uVar2 = (*(ushort *)(param_3 + 6) & 0xff) << 8; \| if ((uVar2 & 0x2000) != 0 \|\| ((uVar2 &` |
| user.c | 240287 | `thunk_EXT_FUN_81103f4a \| (s_CLAT____s__d__offset__0x_x__frag_001fc4f4,DAT_001fc4f0,0x1d0,(uint)uVar1,uVar2); \| if ((*(ushort *)(param_1 + 2)` |
| user.c | 242350 | `iVar2 = FUN_007c6af2(param_2,0); \| if (iVar2 != 0) { \| LAB_001fffb4: \| *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) \| 0x200; \| ` |
| user.c | 242351 | `if (iVar2 != 0) { \| LAB_001fffb4: \| *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) \| 0x200; \| *(ushort *)(param_1 + 0x80) = *(ush` |
| user.c | 242401 | `if (bVar13) goto switchD_001ffffe_caseD_2001be; \| switch(&switchD_001ffffe::switchdataD_00200002 + \| (uint)(&switchD_001ffffe::switchdataD_0` |
| user.c | 242408 | `*(int *)(DAT_00200088 + 0xfc) = *(int *)(DAT_00200088 + 0xfc) + 1; \| } \| goto switchD_001ffffe_caseD_2001be; \| case (byte *)0x2000e4: \| if (` |
| user.c | 242413 | `FUN_007cf5c0(pbVar8,param_1,param_3); \| } \| goto switchD_001ffffe_caseD_2001be; \| case (byte *)0x2000f8: \| if ((uVar9 == 3) && ((int)((uint)` |
| user.c | 242427 | `param_2,iVar15); \| } \| goto switchD_001ffffe_caseD_2001be; \| case (byte *)0x20012e: \| if ((uVar9 == 10) && ((int)((uint)*(ushort *)(iVar10 +` |
| user.c | 242460 | `} \| } \| } \| case (byte *)0x2001be: \| goto switchD_001ffffe_caseD_2001be; \| } \| bVar13 = uVar9 == 4;` |
| user.c | 244639 | `uVar5 = (uint)(byte)((byte)*param_1 >> 6) << 6; \| *puVar3 = uVar4 & 0xffffff38 \| uVar10 \| uVar5; \| uVar6 = ((byte)((byte)*param_1 >> 3) & 7)` |
| user.c | 244640 | `*puVar3 = uVar4 & 0xffffff38 \| uVar10 \| uVar5; \| uVar6 = ((byte)((byte)*param_1 >> 3) & 7) << 3; \| *puVar3 = uVar4 & 0xffffe000 \| uVar10 \| u` |
| user.c | 246157 | `*param_1 = *param_1 \| 0x1000; \| } \| if ((int)((*puVar5 >> 0x12) << 0x17) < 0) { \| *param_1 = *param_1 \| 0x2000; \| } \| } \| else {` |
| user.c | 247205 | `for (; 0x3f < param_3; param_3 = param_3 - 0x40) { \| FUN_002075da(param_1,param_2); \| param_2 = param_2 + 0x40; \| *(int *)(param_1 + 0x20) =` |
| user.c | 248887 | `if ('\x02' < *pcVar3) { \| thunk_EXT_FUN_810fab10(0x13,DAT_0020f108 + -5,&DAT_0020ec94,iVar7); \| } \| if (iVar7 != 0x20000a) goto LAB_0020f0be` |
| user.c | 249343 | `uVar9 = ((uVar7 ^ uVar3) & uVar5 ^ uVar3) + DAT_00211250 + local_64 + uVar9; \| uVar4 = uVar5 + (uVar9 >> 0x14 \| uVar9 * 0x1000); \| uVar3 = (` |
| user.c | 249351 | `uVar5 = ((uVar6 ^ uVar9) & uVar3 ^ uVar9) + DAT_00211260 + local_54 + uVar4; \| uVar4 = uVar3 + (uVar5 >> 0x14 \| uVar5 * 0x1000); \| uVar5 = (` |
| user.c | 249359 | `uVar9 = ((uVar5 ^ uVar7) & uVar3 ^ uVar7) + DAT_00211270 + local_44 + uVar4; \| uVar9 = uVar3 + (uVar9 >> 0x14 \| uVar9 * 0x1000); \| uVar7 = (` |
| user.c | 249367 | `uVar9 = ((uVar5 ^ uVar7) & uVar3 ^ uVar7) + DAT_0021127c + local_34 + uVar9; \| uVar6 = uVar3 + (uVar9 >> 0x14 \| uVar9 * 0x1000); \| uVar7 = (` |
| user.c | 249373 | `uVar3 = ((uVar4 ^ uVar9) & uVar6 ^ uVar4) + DAT_00211288 + local_64 + uVar3; \| uVar3 = uVar9 + (uVar3 >> 0x1b \| uVar3 * 0x20); \| uVar5 = ((u` |
| user.c | 249381 | `uVar3 = ((uVar5 ^ uVar9) & uVar7 ^ uVar5) + DAT_00211298 + local_54 + uVar3; \| uVar3 = uVar9 + (uVar3 >> 0x1b \| uVar3 * 0x20); \| uVar7 = ((u` |
| user.c | 249389 | `uVar3 = ((uVar5 ^ uVar9) & uVar7 ^ uVar5) + DAT_002112a8 + local_44 + uVar3; \| uVar3 = uVar9 + (uVar3 >> 0x1b \| uVar3 * 0x20); \| uVar7 = ((u` |
| user.c | 249397 | `uVar3 = ((uVar5 ^ uVar9) & uVar7 ^ uVar5) + DAT_002112b8 + local_34 + uVar3; \| uVar3 = uVar9 + (uVar3 >> 0x1b \| uVar3 * 0x20); \| uVar7 = ((u` |
| user.c | 249441 | `uVar5 = ((uVar9 \| ~uVar7) ^ uVar3) + DAT_00211718 + local_30 + uVar5; \| uVar5 = uVar9 + (uVar5 >> 0x11 \| uVar5 * 0x8000); \| uVar7 = ((uVar5 ` |
| user.c | 249449 | `uVar3 = ((uVar9 \| ~uVar4) ^ uVar7) + DAT_00211728 + uVar5 + local_40; \| uVar5 = uVar9 + (uVar3 >> 0x11 \| uVar3 * 0x8000); \| uVar3 = ((uVar5 ` |
| user.c | 249457 | `uVar5 = ((uVar9 \| ~uVar3) ^ uVar7) + DAT_00211738 + local_50 + uVar5; \| uVar5 = uVar9 + (uVar5 >> 0x11 \| uVar5 * 0x8000); \| uVar3 = ((uVar5 ` |
| user.c | 249466 | `uVar5 = uVar9 + (uVar5 >> 0x11 \| uVar5 * 0x8000); \| uVar3 = ((uVar5 \| ~uVar7) ^ uVar9) + DAT_0021174c + local_44 + uVar3; \| *param_1 = uVar7` |
| user.c | 253731 | `local_3c = (uint)uVar4; \| } \| if (uVar15 != 0xffff) { \| if ((uVar8 & 0x200) != 0) { \| uVar15 = uVar15 - 1; \| } \| if ((uVar8 & 0x100) != 0) {` |
| user.c | 253792 | `uVar12 = 0; \| } \| } \| else if ((local_50 == 0xffff) && (**(short **)(param_2 + 0x1c) == 0x200c)) { \| uVar12 = 0; \| } \| bVar16 = (puVar6[1] &` |
| user.c | 253902 | `*(undefined2 *)(param_2 + 0x48) = local_54._2_2_; \| *(short *)(param_2 + 0x4a) = (short)uVar11; \| *(short *)(param_2 + 0x4c) = (short)local_` |
| user.c | 254090 | `iVar2 + (uint)*puVar4 & 0xffff \| (uint)*(ushort *)((int)param_1 + 0x1a) << 0x10, \| *(undefined2 *)((int)param_1 + 0x2e)); \| } \| if ((uVar3 &` |
| user.c | 255840 | `uVar9 = uVar12; \| uVar14 = uVar12; \| uVar10 = uVar12; \| if ((uVar7 & 0x20000000) == 0) { \| uVar12 = uVar12 + 1; \| uVar9 = uVar12; \| while ((` |
| user.c | 255849 | `((uVar7 = uVar9, uVar9 != uVar12 && \| (((int)(uVar9 - 1) < (int)uVar12 \|\| \| (uVar8 = FUN_0021ae54(*(undefined2 *)(iVar11 + uVar9 * 2 + -2)),` |
| user.c | 255860 | `((uVar7 = uVar9, uVar9 != uVar12 && \| (((int)(uVar9 - 1) < (int)uVar12 \|\| \| (uVar8 = FUN_0021ae54(*(undefined2 *)(iVar11 + uVar9 * 2 + -2)),` |
| user.c | 255870 | `iVar6 = iVar11 + uVar10 * 2; \| sVar3 = FUN_0021ae54(*(undefined2 *)(iVar6 + 2)); \| if ((sVar3 == 10) && \| (uVar7 = FUN_0021ae54(*(undefined2` |
| user.c | 255903 | `if (uVar7 == 0x10000) { \| FUN_0021aeaa(param_1,*(undefined2 *)(iVar11 + uVar9 * 2),0x4b5,uVar9 & 0xffff); \| } \| else if (uVar7 == 0x20000) {` |
| user.c | 255914 | `FUN_0021aeaa(param_1,*(undefined2 *)(iVar11 + uVar9 * 2),99,uVar9 & 0xffff); \| } \| else { \| bVar16 = (uVar10 & 0x2000000) == 0; \| if (!bVar1` |
| user.c | 255921 | `} \| if ((bVar16 \|\| uVar12 == uVar7) \|\| \| (!bVar16 && (int)(uVar12 - uVar7) < 0) != bVar17) { \| bVar16 = (uVar10 & 0x20000000) != 0; \| if (bV` |
| user.c | 255942 | `(bVar16 && (int)(uVar12 - uVar7) < 0) == bVar17) { \| iVar6 = iVar11 + uVar9 * 2; \| uVar7 = FUN_0021ae54(*(undefined2 *)(iVar6 + 2)); \| if ((` |
| user.c | 255951 | `uVar10 = FUN_0021ae54(*(undefined2 *)(iVar6 + 2)); \| if ((((uVar10 & 0x40000000) != 0) && \| (uVar10 = FUN_0021ae54(*(undefined2 *)(iVar6 + 4` |
| user.c | 257606 | `iVar4 = (iVar4 >> 3) - (iVar4 >> 0x1f); \| do { \| uVar1 = *puVar12; \| if (((uVar1 & uVar14) == 0) && (((uVar1 & 0x100) == 0 \|\| ((uVar1 & 0x20` |
| user.c | 260350 | `uVar6 = *(uint *)(iVar2 + 4) ^ uVar3; \| uVar4 = uVar6 >> 4; \| uVar1 = *(uint *)(DAT_00221338 + (uVar7 & 0xfc)) ^ \| *(uint *)(DAT_00221338 + ` |
| user.c | 260361 | `uVar6 = *(uint *)(iVar2 + -8) ^ uVar1; \| uVar4 = uVar7 >> 4; \| uVar3 = *(uint *)(DAT_00221338 + (uVar6 & 0xfc)) ^ \| *(uint *)(DAT_00221338 +` |
| user.c | 260372 | `uVar7 = *(uint *)(iVar2 + -0xc) ^ uVar3; \| uVar4 = uVar7 >> 4; \| uVar1 = *(uint *)(DAT_00221338 + (uVar6 & 0xfc)) ^ \| *(uint *)(DAT_00221338` |
| user.c | 260384 | `uVar4 = uVar6 >> 4; \| iVar5 = iVar5 + -8; \| uVar3 = *(uint *)(DAT_00221338 + (uVar7 & 0xfc)) ^ \| *(uint *)(DAT_00221338 + ((uVar7 & 0xffff) ` |
| user.c | 260401 | `uVar7 = *(uint *)(iVar2 + 4) ^ uVar3; \| uVar4 = uVar7 >> 4; \| uVar1 = *(uint *)(DAT_00221338 + (uVar6 & 0xfc)) ^ \| *(uint *)(DAT_00221338 + ` |
| user.c | 260412 | `uVar6 = *(uint *)(iVar2 + 8) ^ uVar1; \| uVar4 = uVar7 >> 4; \| uVar3 = *(uint *)(DAT_00221338 + (uVar6 & 0xfc)) ^ \| *(uint *)(DAT_00221338 + ` |
| user.c | 260423 | `uVar6 = *(uint *)(iVar2 + 0x10) ^ uVar3; \| uVar4 = uVar7 >> 4; \| uVar1 = *(uint *)(DAT_00221338 + (uVar6 & 0xfc)) ^ \| *(uint *)(DAT_00221338` |
| user.c | 260435 | `uVar4 = uVar6 >> 4; \| iVar5 = iVar5 + 8; \| uVar3 = *(uint *)(DAT_00221338 + (uVar7 & 0xfc)) ^ \| *(uint *)(DAT_00221338 + ((uVar7 & 0xffff) >` |
| user.c | 260489 | `uVar4 = *(uint *)(iVar2 + 4) ^ uVar7; \| uVar1 = uVar4 >> 4; \| uVar6 = *(uint *)(DAT_002217c8 + (uVar5 & 0xfc)) ^ \| *(uint *)(DAT_002217c8 + ` |
| user.c | 260500 | `uVar4 = *(uint *)(iVar2 + -8) ^ uVar6; \| uVar1 = uVar5 >> 4; \| uVar7 = *(uint *)(DAT_002217c8 + (uVar4 & 0xfc)) ^ \| *(uint *)(DAT_002217c8 +` |
| user.c | 260511 | `uVar5 = *(uint *)(iVar2 + -0xc) ^ uVar7; \| uVar1 = uVar5 >> 4; \| uVar6 = *(uint *)(DAT_002217c8 + (uVar4 & 0xfc)) ^ \| *(uint *)(DAT_002217c8` |
| user.c | 260523 | `uVar1 = uVar4 >> 4; \| iVar3 = iVar3 + -8; \| uVar7 = *(uint *)(DAT_002217c8 + (uVar5 & 0xfc)) ^ \| *(uint *)(DAT_002217c8 + ((uVar5 & 0xffff) ` |
| user.c | 260540 | `uVar5 = *(uint *)(iVar2 + 4) ^ uVar7; \| uVar1 = uVar5 >> 4; \| uVar6 = *(uint *)(DAT_002217c8 + (uVar4 & 0xfc)) ^ \| *(uint *)(DAT_002217c8 + ` |
| user.c | 260551 | `uVar4 = *(uint *)(iVar2 + 8) ^ uVar6; \| uVar1 = uVar5 >> 4; \| uVar7 = *(uint *)(DAT_002217c8 + (uVar4 & 0xfc)) ^ \| *(uint *)(DAT_002217c8 + ` |
| user.c | 260562 | `uVar4 = *(uint *)(iVar2 + 0x10) ^ uVar7; \| uVar1 = uVar5 >> 4; \| uVar6 = *(uint *)(DAT_002217c8 + (uVar4 & 0xfc)) ^ \| *(uint *)(DAT_002217c8` |
| user.c | 260573 | `uVar4 = *(uint *)(iVar2 + 0x1c) ^ uVar6; \| uVar1 = uVar4 >> 4; \| uVar7 = *(uint *)(DAT_002217c8 + (uVar5 & 0xfc)) ^ \| *(uint *)(DAT_002217c8` |
| user.c | 263064 | `local_b4[0] = param_2 + 9; \| local_a20 = param_2 + 0x1a; \| if (*(char *)((int)param_2 + 0xe) == '\x01') { \| if ((int *)0x200000 < local_a38)` |
| user.c | 267371 | `undefined1 *local_1c; \|  \| if (((param_1 != 0) && (*(int *)(param_1 + 0x214) == 0)) && \| ((iVar1 = FUN_0022c21e(param_1,0x2000), iVar1 == 0 ` |
| user.c | 267414 | ` \| if ((param_1 != 0) && (iVar1 = FUN_0022c20a(), iVar1 != 0)) { \| FUN_0022c250(param_1 + 0x80,param_2,param_3); \| iVar1 = FUN_0022c1fe(para` |
| user.c | 267416 | `FUN_0022c250(param_1 + 0x80,param_2,param_3); \| iVar1 = FUN_0022c1fe(param_2,0x2000); \| if ((iVar1 == 0) \|\| (param_3 == 0)) { \| iVar1 = FUN_` |
| user.c | 267583 | ` \| uVar6 = 0; \| iVar7 = 0; \| iVar1 = FUN_0022c21e(param_1,0x20000); \| if ((iVar1 != 0) && (uVar2 = *(uint *)(param_1 + 0x150), uVar2 != 0)) ` |
| user.c | 268657 | `local_2c = piVar1[3]; \| iVar2 = FUN_0022a8cc(*piVar1 + 0x74,4); \| if (iVar2 == 0) { \| iVar2 = FUN_0022c21e(param_1,0x2000); \| if ((iVar2 == ` |
| user.c | 268672 | `local_24 = 0; \| local_20 = 0; \| local_1c = 0; \| iVar2 = FUN_0022c21e(param_1,0x2000); \| if ((iVar2 == 0) \|\| (iVar2 = FUN_007f670a(), iVar2 !` |
| user.c | 270139 | `int iVar1; \|  \| if (param_1 != 0) { \| iVar1 = FUN_0022c21e(param_1,0x2000); \| if (iVar1 == 0) { \| iVar1 = *(int *)(param_1 + 0xf8); \| }` |
| user.c | 270567 | `} \| return; \| } \| iVar2 = FUN_0022c21e(param_1,0x2000); \| if ((iVar2 == 0) \|\| (iVar2 = FUN_007f670a(), iVar2 != 0)) { \| FUN_0022b658(param_1` |
| user.c | 276193 | `*(short *)(iVar5 + 0x3a) = *(short *)(iVar5 + 0x3a) + 1; \| iVar5 = FUN_007879ba(); \| if (-1 < (int)((uint)*(byte *)(iVar5 + 6) << 0x19)) { \|` |
| user.c | 279884 | `*(uint *)(param_1 + 0x220) = uVar4; \| *(uint *)(param_1 + 0x224) = param_2 - uVar1; \| if (uVar4 < 0x201) { \| thunk_EXT_FUN_811049dc(param_1 ` |
| user.c | 279890 | `} \| else { \| thunk_EXT_FUN_811037c8(); \| *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + 0x200; \| *(int *)(param_1 + 0x21c) = *(int ` |
| user.c | 279891 | `else { \| thunk_EXT_FUN_811037c8(); \| *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + 0x200; \| *(int *)(param_1 + 0x21c) = *(int *)(p` |
| user.c | 279892 | `thunk_EXT_FUN_811037c8(); \| *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + 0x200; \| *(int *)(param_1 + 0x21c) = *(int *)(param_1 + ` |
| user.c | 279947 | `*param_1 = param_1[1]; \| if (param_1 + 0x85 <= (undefined4 *)param_1[4]) { \| puVar2 = param_1 + 5; \| if ((uint)param_1[0x88] < 0x200) { \| if` |
| user.c | 279954 | `} \| } \| else { \| thunk_EXT_FUN_811037c8(puVar2,param_1[0x89],0x200); \| param_1[0x89] = param_1[0x89] + 0x200; \| param_1[0x88] = param_1[0x88` |
| user.c | 279955 | `} \| else { \| thunk_EXT_FUN_811037c8(puVar2,param_1[0x89],0x200); \| param_1[0x89] = param_1[0x89] + 0x200; \| param_1[0x88] = param_1[0x88] + ` |
| user.c | 279956 | `else { \| thunk_EXT_FUN_811037c8(puVar2,param_1[0x89],0x200); \| param_1[0x89] = param_1[0x89] + 0x200; \| param_1[0x88] = param_1[0x88] + -0x2` |
| user.c | 285927 | `return param_1; \| } \| iVar3 = (int)param_2 >> 0x1f; \| if ((int)(-(uint)(0x2000000 < param_2) - iVar3) < 0 != \| (SBORROW4(0,iVar3) != SBORROW` |
| user.c | 285928 | `} \| iVar3 = (int)param_2 >> 0x1f; \| if ((int)(-(uint)(0x2000000 < param_2) - iVar3) < 0 != \| (SBORROW4(0,iVar3) != SBORROW4(-iVar3,(uint)(0x` |
| user.c | 285941 | `uVar10 = 0x16e; \| goto LAB_00250f32; \| } \| puVar1 = (undefined4 *)FUN_003dfc50(param_2 * 4 + 4,iVar3,0x2000000 - param_2,param_4,param_4); \|` |
| user.c | 291501 | ` \| iVar2 = (int)*param_1; \| if (iVar2 != 0) { \| iVar1 = iVar2 * 0x200000 + -0x200000 >> 0x10; \| for (uVar3 = *(uint *)(*(int *)(param_1 + 4)` |
| user.c | 293497 | `thunk_EXT_FUN_811049dc(&local_35c,0xe8); \| thunk_EXT_FUN_811049dc(auStack_560,0x204); \| local_3c[0] = 0; \| thunk_EXT_FUN_811049dc(auStack_96` |
| user.c | 294204 | `int iVar2; \|  \| iVar2 = *(int *)(DAT_002589e8 + ((int)param_1 >> 0x12) * 4); \| if ((param_1 & 0x20000) != 0) { \| lVar1 = (longlong)iVar2 * (` |
| user.c | 294220 | `lVar1 = (longlong)iVar2 * (longlong)*(int *)(DAT_002589e8 + -0x3c); \| iVar2 = (int)((ulonglong)lVar1 >> 0x20) * 4 + ((uint)lVar1 >> 0x1e); \|` |
| user.c | 294236 | `lVar1 = (longlong)iVar2 * (longlong)*(int *)(DAT_002589e8 + -0x2c); \| iVar2 = (int)((ulonglong)lVar1 >> 0x20) * 4 + ((uint)lVar1 >> 0x1e); \|` |
| user.c | 295728 | `; \| iVar9 = (short)(param_1[0x20] >> 0x10) * -0x10b5 + \| ((int)((param_1[0x20] & 0xffff) * DAT_0025aae8) >> 0x10) + \| (short)(param_1[0x200]` |
| user.c | 295729 | `iVar9 = (short)(param_1[0x20] >> 0x10) * -0x10b5 + \| ((int)((param_1[0x20] & 0xffff) * DAT_0025aae8) >> 0x10) + \| (short)(param_1[0x200] >> ` |
| user.c | 295747 | `((int)((param_1[0x140] & 0xffff) * DAT_0025aae0) >> 0x10) + \| (short)(param_1[0xe0] >> 0x10) * 0x30fc + ((param_1[0xe0] & 0xffff) * 0x30fc >` |
| user.c | 295748 | `(short)(param_1[0xe0] >> 0x10) * 0x30fc + ((param_1[0xe0] & 0xffff) * 0x30fc >> 0x10) \| ; \| iVar9 = ((param_1[0x200] & 0xffff) >> 1) + ((int` |
| user.c | 295749 | `; \| iVar9 = ((param_1[0x200] & 0xffff) >> 1) + ((int)param_1[0x200] >> 0x10) * 0x8000; \| iVar14 = (short)(param_2[0x200] >> 0x10) * -0x10b5 ` |
| user.c | 296185 | `(short)(param_1[0x80] >> 0x10) * 0x7642 + ((param_1[0x80] & 0xffff) * 0x7642 >> 0x10) + \| sVar3 * -0x30fc + ((int)((uVar12 & 0xffff) * -0x30` |
| user.c | 296203 | `else { \| param_2[0x1a0] = ((uVar12 & 0xffff) >> 1) + ((int)uVar12 >> 0x10) * 0x8000; \| param_2[0x80] = param_1[0x80]; \| param_2[0x200] = ((u` |
| user.c | 296555 | `piVar9[1] = param_3 + 0x80; \| piVar9[2] = param_3 + 0x100; \| piVar9[3] = param_3 + 0x180; \| piVar9[4] = param_3 + 0x200; \| piVar9[5] = param` |
| user.c | 296573 | `*piVar9 = param_3 + 0x80; \| piVar9[1] = param_3 + 0x100; \| piVar9[2] = param_3 + 0x180; \| piVar9[3] = param_3 + 0x200; \| piVar9[4] = param_3` |
| user.c | 296591 | `case 2: \| *piVar9 = param_3 + 0x100; \| piVar9[1] = param_3 + 0x180; \| piVar9[2] = param_3 + 0x200; \| piVar9[3] = param_3 + 0x280; \| piVar9[4` |
| user.c | 296609 | `break; \| case 3: \| *piVar9 = param_3 + 0x180; \| piVar9[1] = param_3 + 0x200; \| piVar9[2] = param_3 + 0x280; \| piVar9[3] = param_3 + 0x300; \|` |
| user.c | 296627 | `param_4 = 2; \| break; \| case 4: \| *piVar9 = param_3 + 0x200; \| piVar9[1] = param_3 + 0x280; \| piVar9[2] = param_3 + 0x300; \| piVar9[3] = par` |
| user.c | 296661 | `piVar9[0xc] = param_3 + 0x80; \| piVar9[0xd] = param_3 + 0x100; \| piVar9[0xe] = param_3 + 0x180; \| piVar9[0xf] = param_3 + 0x200; \| param_4 =` |
| user.c | 296679 | `piVar9[0xb] = param_3 + 0x80; \| piVar9[0xc] = param_3 + 0x100; \| piVar9[0xd] = param_3 + 0x180; \| piVar9[0xe] = param_3 + 0x200; \| piVar9[0x` |
| user.c | 296697 | `piVar9[10] = param_3 + 0x80; \| piVar9[0xb] = param_3 + 0x100; \| piVar9[0xc] = param_3 + 0x180; \| piVar9[0xd] = param_3 + 0x200; \| piVar9[0xe` |
| user.c | 296715 | `piVar9[9] = param_3 + 0x80; \| piVar9[10] = param_3 + 0x100; \| piVar9[0xb] = param_3 + 0x180; \| piVar9[0xc] = param_3 + 0x200; \| piVar9[0xd] ` |
| user.c | 296733 | `piVar9[8] = param_3 + 0x80; \| piVar9[9] = param_3 + 0x100; \| piVar9[10] = param_3 + 0x180; \| piVar9[0xb] = param_3 + 0x200; \| piVar9[0xc] = ` |
| user.c | 296751 | `piVar9[7] = param_3 + 0x80; \| piVar9[8] = param_3 + 0x100; \| piVar9[9] = param_3 + 0x180; \| piVar9[10] = param_3 + 0x200; \| piVar9[0xb] = pa` |
| user.c | 296769 | `piVar9[6] = param_3 + 0x80; \| piVar9[7] = param_3 + 0x100; \| piVar9[8] = param_3 + 0x180; \| piVar9[9] = param_3 + 0x200; \| piVar9[10] = para` |
| user.c | 296787 | `piVar9[5] = param_3 + 0x80; \| piVar9[6] = param_3 + 0x100; \| piVar9[7] = param_3 + 0x180; \| piVar9[8] = param_3 + 0x200; \| piVar9[9] = param` |
| user.c | 296805 | `piVar9[4] = param_3 + 0x80; \| piVar9[5] = param_3 + 0x100; \| piVar9[6] = param_3 + 0x180; \| piVar9[7] = param_3 + 0x200; \| piVar9[8] = param` |
| user.c | 296823 | `piVar9[3] = param_3 + 0x80; \| piVar9[4] = param_3 + 0x100; \| piVar9[5] = param_3 + 0x180; \| piVar9[6] = param_3 + 0x200; \| piVar9[7] = param` |
| user.c | 296841 | `piVar9[2] = param_3 + 0x80; \| piVar9[3] = param_3 + 0x100; \| piVar9[4] = param_3 + 0x180; \| piVar9[5] = param_3 + 0x200; \| piVar9[6] = param` |
| user.c | 297779 | `(((short)(uVar21 >> 0x10) * -0x3740 + (iVar19 >> 0x10) + \| (short)(uVar90 >> 0x10) * 0x5bb + ((uVar90 & 0xffff) * 0x5bb >> 0x10) + \| (short)` |
| user.c | 297798 | `(short)(uVar78 >> 0x10) * 0x336 + ((uVar78 & 0xffff) * 0x336 >> 0x10) + \| (short)(uVar73 >> 0x10) * -0x4c + ((int)((uVar73 & 0xffff) * -0x4c` |
| user.c | 298759 | `piVar56[1] = param_3 + 0x80; \| piVar56[2] = param_3 + 0x100; \| piVar56[3] = param_3 + 0x180; \| piVar56[4] = param_3 + 0x200; \| piVar56[5] = ` |
| user.c | 298777 | `*piVar56 = param_3 + 0x80; \| piVar56[1] = param_3 + 0x100; \| piVar56[2] = param_3 + 0x180; \| piVar56[3] = param_3 + 0x200; \| piVar56[4] = pa` |
| user.c | 298795 | `case 2: \| *piVar56 = param_3 + 0x100; \| piVar56[1] = param_3 + 0x180; \| piVar56[2] = param_3 + 0x200; \| piVar56[3] = param_3 + 0x280; \| piVa` |
| user.c | 298813 | `break; \| case 3: \| *piVar56 = param_3 + 0x180; \| piVar56[1] = param_3 + 0x200; \| piVar56[2] = param_3 + 0x280; \| piVar56[3] = param_3 + 0x30` |
| user.c | 298831 | `param_4 = 2; \| break; \| case 4: \| *piVar56 = param_3 + 0x200; \| piVar56[1] = param_3 + 0x280; \| piVar56[2] = param_3 + 0x300; \| piVar56[3] =` |
| user.c | 298865 | `piVar56[0xc] = param_3 + 0x80; \| piVar56[0xd] = param_3 + 0x100; \| piVar56[0xe] = param_3 + 0x180; \| piVar56[0xf] = param_3 + 0x200; \| param` |
| user.c | 298883 | `piVar56[0xb] = param_3 + 0x80; \| piVar56[0xc] = param_3 + 0x100; \| piVar56[0xd] = param_3 + 0x180; \| piVar56[0xe] = param_3 + 0x200; \| piVar` |
| user.c | 298901 | `piVar56[10] = param_3 + 0x80; \| piVar56[0xb] = param_3 + 0x100; \| piVar56[0xc] = param_3 + 0x180; \| piVar56[0xd] = param_3 + 0x200; \| piVar5` |
| user.c | 298919 | `piVar56[9] = param_3 + 0x80; \| piVar56[10] = param_3 + 0x100; \| piVar56[0xb] = param_3 + 0x180; \| piVar56[0xc] = param_3 + 0x200; \| piVar56[` |
| user.c | 298937 | `piVar56[8] = param_3 + 0x80; \| piVar56[9] = param_3 + 0x100; \| piVar56[10] = param_3 + 0x180; \| piVar56[0xb] = param_3 + 0x200; \| piVar56[0x` |
| user.c | 298955 | `piVar56[7] = param_3 + 0x80; \| piVar56[8] = param_3 + 0x100; \| piVar56[9] = param_3 + 0x180; \| piVar56[10] = param_3 + 0x200; \| piVar56[0xb]` |
| user.c | 298973 | `piVar56[6] = param_3 + 0x80; \| piVar56[7] = param_3 + 0x100; \| piVar56[8] = param_3 + 0x180; \| piVar56[9] = param_3 + 0x200; \| piVar56[10] =` |
| user.c | 298991 | `piVar56[5] = param_3 + 0x80; \| piVar56[6] = param_3 + 0x100; \| piVar56[7] = param_3 + 0x180; \| piVar56[8] = param_3 + 0x200; \| piVar56[9] = ` |
| user.c | 299009 | `piVar56[4] = param_3 + 0x80; \| piVar56[5] = param_3 + 0x100; \| piVar56[6] = param_3 + 0x180; \| piVar56[7] = param_3 + 0x200; \| piVar56[8] = ` |
| user.c | 299027 | `piVar56[3] = param_3 + 0x80; \| piVar56[4] = param_3 + 0x100; \| piVar56[5] = param_3 + 0x180; \| piVar56[6] = param_3 + 0x200; \| piVar56[7] = ` |
| user.c | 299045 | `piVar56[2] = param_3 + 0x80; \| piVar56[3] = param_3 + 0x100; \| piVar56[4] = param_3 + 0x180; \| piVar56[5] = param_3 + 0x200; \| piVar56[6] = ` |
| user.c | 302723 | `if (0 < iVar8) { \| do { \| iVar5 = *(int *)(local_54 + iVar6 * 4) - param_4 >> 2; \| if ((double)fVar13 < *(double *)(local_50 + 0x200)) { \| *` |
| user.c | 308567 | `*param_3 = (short)((uint)uVar1 >> 0x10); \| iVar3 = FUN_00885f9c(param_1,9); \| sVar2 = FUN_00885f9c(iVar3,1); \| iVar3 = SignedSaturate((iVar3` |
| user.c | 311449 | `if (param_4 != 0) { \| iVar2 = SignedSaturate(param_1 * 0x10000 + param_3 * -0x10000,0x20); \| SignedDoesSaturate(iVar2,0x20); \| iVar1 = Signe` |
| user.c | 311453 | `SignedDoesSaturate(iVar1,0x20); \| iVar1 = SignedSaturate((iVar1 >> 0x10) * 0x10000 + (iVar2 >> 0x10) * 0x10000,0x20); \| SignedDoesSaturate(i` |
| user.c | 311464 | `iVar1 = SignedSaturate(param_1 * 0x10000 + -0x5e0000,0x20); \| SignedDoesSaturate(iVar1,0x20); \| if (iVar1 >> 0x10 < 1) { \| iVar1 = SignedSat` |
| user.c | 311468 | `SignedDoesSaturate(iVar1,0x20); \| iVar1 = SignedSaturate((iVar1 >> 0x10) * 0x10000 + param_1 * 0x10000,0x20); \| SignedDoesSaturate(iVar1,0x2` |
| user.c | 311898 | `if ((param_1 != 0) && (param_5 != (undefined4 *)0x0)) { \| iVar2 = FUN_00276d78(&local_28,param_6); \| if (iVar2 == 0) { \| iVar2 = thunk_EXT_F` |
| user.c | 311904 | `iVar2 = 3; \| } \| else { \| thunk_EXT_FUN_810f7460(iVar2,0x200); \| FUN_0010638a(*(undefined4 *)(local_28 + 0x18),param_1,0xff); \| *(undefined4` |
| user.c | 312060 | `iStack_30 = param_2; \| local_2c = param_3; \| uStack_28 = param_4; \| iVar2 = thunk_EXT_FUN_810ff5c0(0x200,s_drm_sfs_c_00276f98,0x193); \| if (` |
| user.c | 312643 | `if (param_1 != 0) { \| iVar3 = FUN_00276d78(&local_18); \| if (iVar3 == 0) { \| iVar2 = thunk_EXT_FUN_810ff5c0(0x200,s_drm_sfs_c_00276fb0,0x375` |
| user.c | 312646 | `iVar2 = thunk_EXT_FUN_810ff5c0(0x200,s_drm_sfs_c_00276fb0,0x375); \| *(int *)(local_18 + 0x18) = iVar2; \| if (iVar2 != 0) { \| thunk_EXT_FUN_8` |
| user.c | 312709 | `local_38 = (undefined1 *)0x0; \| local_34 = 0; \| thunk_EXT_FUN_811049dc(auStack_5c,0x24); \| thunk_EXT_FUN_811049dc(auStack_25c,0x200); \| iVar` |
| user.c | 312738 | `FUN_007ee69e(local_30[uVar8 - 1],&local_38); \| } \| else { \| thunk_EXT_FUN_811049dc(auStack_25c,0x200); \| uVar7 = thunk_EXT_FUN_810ff150(auSt` |
| user.c | 313038 | `} \| if ((iVar13 == 4) \|\| (iVar13 == 5)) { \| uVar4 = FUN_003deafc(piVar2[5]); \| thunk_EXT_FUN_810f7460(piVar2[3],0x200); \| FUN_000eb70c(*(und` |
| user.c | 313087 | `local_28 = (ushort *)0x0; \| local_24 = 0; \| thunk_EXT_FUN_811049dc(auStack_4c,0x24); \| thunk_EXT_FUN_811049dc(auStack_24c,0x200); \| if (para` |
| user.c | 313101 | `uVar2 = (uint)*param_5; \| thunk_EXT_FUN_81104074(0x10,DAT_00278070 + 0x95,&DAT_00277bc4,param_2,uVar2); \| iVar3 = thunk_EXT_FUN_810ffa5c \| (` |
| user.c | 313115 | `uVar9 = FUN_000d0460(2); \| iVar7 = FUN_000d117e(uVar9,auStack_4c); \| if (iVar7 != 0) { \| thunk_EXT_FUN_811049dc(auStack_24c,0x200); \| uVar9 ` |
| user.c | 313135 | `FUN_007ee69e(uVar9,&local_28); \| } \| else { \| if ((0xf < param_5[1]) && (iVar7 = FUN_0022be7c(param_4,0x2000), iVar7 != 0)) { \| FUN_000eb3a6` |
| user.c | 313414 | `else { \| if ((short)param_1[3] != 0) { \| FUN_007f19f0(piVar5[2]); \| *(short *)(piVar5[2] + 0x200) = (short)param_1[3]; \| goto LAB_0027a590; ` |
| user.c | 313819 | `local_4c = 0; \| local_48 = 0; \| local_44 = 0; \| thunk_EXT_FUN_811049dc(&local_4d0,0x200); \| local_38[0] = 7; \| local_3c[0] = 0xff; \| local_4` |
| user.c | 317438 | ` \| bVar5 = true; \| uVar6 = 0; \| thunk_EXT_FUN_811049dc(auStack_230,0x200); \| thunk_EXT_FUN_811049dc(&local_30,0x14); \| local_30 = 0x5c; \| lo` |
| user.c | 317444 | `local_2e = 0x68; \| thunk_EXT_FUN_81104074(0x10,DAT_00282f9c,&DAT_00282f98,param_1); \| if (param_1 < 0x1f5) { \| thunk_EXT_FUN_811049dc(auStac` |
| user.c | 317507 | ` \| bVar8 = true; \| uVar9 = 0; \| thunk_EXT_FUN_811049dc(auStack_238,0x200); \| thunk_EXT_FUN_811049dc(&local_38,0x14); \| local_38 = 0x5c; \| lo` |
| user.c | 317512 | `local_38 = 0x5c; \| local_36 = 0x56; \| if (param_1 < 0x15) { \| thunk_EXT_FUN_811049dc(auStack_238,0x200); \| puVar3 = (ushort *)FUN_0027a8fa()` |
| user.c | 317606 | `thunk_EXT_FUN_811049dc(auStack_94,0x14); \| local_68 = (undefined1 *)0x0; \| local_64 = 0; \| thunk_EXT_FUN_811049dc(auStack_350,0x200); \| thun` |
| user.c | 318870 | `iVar5 = thunk_FUN_000d1a44(iVar4); \| if (iVar5 != 0) goto LAB_00284fc4; \| } \| iVar4 = FUN_00284e62(iVar4,param_1 + 0x402,param_1,*(undefined` |
| user.c | 318990 | `else { \| thunk_EXT_FUN_810faa34(auStack_40,u__A__NF_F_00285200,0x14); \| local_2c[0] = DAT_00285214; \| if ((*(short *)(param_1 + 0x604) == 0)` |
| user.c | 318993 | `if ((*(short *)(param_1 + 0x604) == 0) \|\| (*(short *)(param_1 + 0x200) == 0)) { \| thunk_EXT_FUN_810ffbd2(iVar3,s_mmi_filetask_c_00284db4,0x7` |
| user.c | 319002 | `iVar4 = FUN_003b9b6c(iVar6,local_2c,auStack_40,param_1 + 0x814,iVar3,0); \| if ((*(int *)(param_1 + 0x814) != 0) && (iVar4 == 0)) break; \| bV` |
| user.c | 319101 | `if (iVar2 != 0) { \| return iVar2; \| } \| iVar4 = thunk_EXT_FUN_810ffa74(0x200,s_mmi_filetask_c_00284db4,0x8d3); \| iVar2 = thunk_EXT_FUN_810ff` |
| user.c | 319102 | `return iVar2; \| } \| iVar4 = thunk_EXT_FUN_810ffa74(0x200,s_mmi_filetask_c_00284db4,0x8d3); \| iVar2 = thunk_EXT_FUN_810ffa74(0x200,s_mmi_file` |
| user.c | 319109 | `uVar8 = 0x8d9; \| } \| else { \| thunk_EXT_FUN_810f7460(iVar4,0x200); \| thunk_EXT_FUN_810f7460(iVar2,0x200); \| local_764[0] = *(undefined2 *)(p` |
| user.c | 319110 | `} \| else { \| thunk_EXT_FUN_810f7460(iVar4,0x200); \| thunk_EXT_FUN_810f7460(iVar2,0x200); \| local_764[0] = *(undefined2 *)(param_1 + 0x604); ` |
| user.c | 319115 | `FUN_007f19f0(iVar2,local_30); \| FUN_000cff00(iVar2,local_764,iVar4,local_760); \| FUN_003b9628(iVar2,iVar4,&local_990,0); \| thunk_EXT_FUN_810` |
| user.c | 319116 | `FUN_000cff00(iVar2,local_764,iVar4,local_760); \| FUN_003b9628(iVar2,iVar4,&local_990,0); \| thunk_EXT_FUN_810f7460(iVar4,0x200); \| thunk_EXT_` |
| user.c | 319193 | `if (((iVar3 == 5) \|\| (iVar3 == 0)) && (local_40 != puVar7)) { \| if (uVar9 <= *(uint *)(param_1 + 0x810)) { \| thunk_EXT_FUN_811049dc(auStack_` |
| user.c | 319194 | `if (uVar9 <= *(uint *)(param_1 + 0x810)) { \| thunk_EXT_FUN_811049dc(auStack_380,0x22c); \| thunk_EXT_FUN_811049dc(auStack_980,0x200); \| thunk` |
| user.c | 319195 | `thunk_EXT_FUN_811049dc(auStack_380,0x22c); \| thunk_EXT_FUN_811049dc(auStack_980,0x200); \| thunk_EXT_FUN_811049dc(auStack_780,0x200); \| thunk` |
| user.c | 319200 | `uVar1 = *(undefined2 *)(param_1 + 0x604); \| local_28 = 0; \| local_2c[0] = uVar1; \| thunk_EXT_FUN_811049dc(auStack_780,0x200); \| thunk_EXT_FU` |
| user.c | 319201 | `local_28 = 0; \| local_2c[0] = uVar1; \| thunk_EXT_FUN_811049dc(auStack_780,0x200); \| thunk_EXT_FUN_811049dc(auStack_980,0x200); \| FUN_007f19f` |
| user.c | 319205 | `FUN_007f19f0(auStack_980,local_30,uVar1); \| FUN_000cff00(auStack_980,local_2c,auStack_780); \| FUN_003b9628(auStack_980,auStack_780,auStack_3` |
| user.c | 319206 | `FUN_000cff00(auStack_980,local_2c,auStack_780); \| FUN_003b9628(auStack_980,auStack_780,auStack_380,0); \| thunk_EXT_FUN_811049dc(auStack_780,` |
| user.c | 319361 | `if (iVar10 == 0) goto LAB_00285f54; \| if (*(char *)(iVar10 + 0x81c) == '\0') { \| *(undefined1 *)(iVar10 + 0x80c) = 1; \| thunk_EXT_FUN_810f74` |
| user.c | 319362 | `if (*(char *)(iVar10 + 0x81c) == '\0') { \| *(undefined1 *)(iVar10 + 0x80c) = 1; \| thunk_EXT_FUN_810f7460(iVar10 + 0x60a,0x200); \| *(undefine` |
| user.c | 319364 | `thunk_EXT_FUN_810f7460(iVar10 + 0x60a,0x200); \| *(undefined2 *)(iVar10 + 0x606) = *(undefined2 *)(iVar10 + 0x200); \| iVar5 = iVar10 + 0x404;` |
| user.c | 319365 | `*(undefined2 *)(iVar10 + 0x606) = *(undefined2 *)(iVar10 + 0x200); \| iVar5 = iVar10 + 0x404; \| thunk_EXT_FUN_811049dc(iVar5,0x200); \| *(unde` |
| user.c | 319408 | `if (uVar11 == 0) { \| iVar5 = FUN_008363b0(0); \| if (iVar5 != 0) { \| thunk_EXT_FUN_811049dc(auStack_22c,0x200); \| local_2c[0] = 0xff; \| uVar2` |
| user.c | 319434 | `} \| iVar6 = FUN_008363b0(0,iVar5); \| if (iVar6 != 0) { \| thunk_EXT_FUN_811049dc(auStack_22c,0x200); \| local_2c[0] = 0xff; \| uVar2 = FUN_007f` |
| user.c | 319483 | `if (iVar10 == 0) goto LAB_00285f54; \| if (*(char *)(iVar10 + 0x81c) == '\0') { \| *(undefined4 *)(iVar10 + 0x810) = 0; \| thunk_EXT_FUN_810f74` |
| user.c | 319555 | `*(undefined2 *)(iVar10 + iVar6 * 2 + 0x404) = 0; \| sVar4 = FUN_007f1d80(iVar5); \| *(short *)(iVar10 + 0x604) = sVar4; \| if ((sVar4 != *(shor` |
| user.c | 319761 | `} \| thunk_EXT_FUN_811049dc(iVar1,0x820); \| thunk_EXT_FUN_811037c8(iVar1,param_1,param_2 << 1); \| *(short *)(iVar1 + 0x200) = (short)param_2;` |
| user.c | 319894 | ` \| thunk_EXT_FUN_811049dc(&uStack_48,0x18); \| thunk_EXT_FUN_811049dc(auStack_298,0x100); \| thunk_EXT_FUN_811049dc(auStack_498,0x200); \| loca` |
| user.c | 319900 | `return; \| } \| thunk_EXT_FUN_811049dc(auStack_298,0x100); \| thunk_EXT_FUN_811049dc(auStack_498,0x200); \| iVar3 = (int)param_1 + 0x16; \| uVar1` |
| user.c | 319917 | `uVar2 = thunk_EXT_FUN_810ff150(auStack_298); \| FUN_002866c4(param_2,DAT_00286b5c + -0xb,0,local_30,auStack_498,uVar2); \| thunk_EXT_FUN_81104` |
| user.c | 319922 | `FUN_007f188c(auStack_298,auStack_498); \| uVar2 = thunk_EXT_FUN_810ff150(auStack_298); \| FUN_002866c4(param_2,DAT_00286b5c + -10,0,local_30,a` |
| user.c | 319931 | `FUN_002866c4(param_2,DAT_00286b5c + 0x44,uVar5,local_30,0,0); \| if (param_1[4] != 1) goto LAB_00286bae; \| thunk_EXT_FUN_811049dc(auStack_298` |
| user.c | 319972 | `uVar5 = FUN_007f1d80(iVar3); \| FUN_00249e7e(iVar3,uVar5,local_198); \| thunk_EXT_FUN_811049dc(auStack_298,0x100); \| thunk_EXT_FUN_811049dc(au` |
| user.c | 319983 | `if (((local_184 == '\x01') && (iVar6 = FUN_007f1d80(auStack_178), iVar6 != 0)) \|\| \| ((local_184 == '\0' && (iVar6 = thunk_EXT_FUN_810ff150(a` |
| user.c | 320000 | `if (((local_184 == '\x01') && (iVar6 = FUN_007f1d80(auStack_158), iVar6 != 0)) \|\| \| ((local_184 == '\0' && (iVar6 = thunk_EXT_FUN_810ff150(a` |
| user.c | 320944 | `thunk_EXT_FUN_810ffbd2(local_a4,s_mmiidle_func_c_002888dc,0x1fd); \| local_a4 = 0; \| } \| thunk_EXT_FUN_810ffbd2(iVar13,s_mmiidle_func_c_00288` |
| user.c | 322846 | `if (iVar1 == 0) { \| return 0; \| } \| iVar1 = FUN_00109844(*(undefined4 *)(param_1 + 8),0x15,0x200,0,&local_34); \| if (iVar1 == 0) { \| *(undef` |
| user.c | 322848 | `} \| iVar1 = FUN_00109844(*(undefined4 *)(param_1 + 8),0x15,0x200,0,&local_34); \| if (iVar1 == 0) { \| *(undefined4 *)(param_1 + 0x24) = 0x200` |
| user.c | 324314 | `FUN_00213b64(&local_d0,&local_60,param_2,param_3,*(ushort *)((int)param_1 + 10),param_1[3]); \| FUN_00214032(&local_d0,local_98); \| iVar4 = (` |
| user.c | 324708 | `uVar7 = 0; \| local_2c = 0; \| iVar8 = 0; \| thunk_EXT_FUN_811049dc(auStack_254,0x200); \| FUN_004167a2(auStack_54,auStack_254,0xff); \| FUN_007d` |
| user.c | 326175 | `local_30 = *(undefined4 *)(param_1 + 500); \| local_2c = *(undefined4 *)(param_1 + 0x1f8); \| local_28 = *(undefined4 *)(param_1 + 0x1fc); \| l` |
| user.c | 327590 | `int *piVar6; \| undefined1 auStack_20c [512]; \|  \| thunk_EXT_FUN_811049dc(auStack_20c,0x200); \| iVar2 = DAT_00292e18; \| piVar6 = (int *)(DAT_` |
| user.c | 327787 | `undefined1 auStack_214 [512]; \| undefined2 local_14 [4]; \|  \| thunk_EXT_FUN_811049dc(auStack_214,0x200); \| local_14[0] = 0xff; \| if (param_2` |
| user.c | 327999 | `undefined1 auStack_214 [512]; \| undefined2 local_14 [4]; \|  \| thunk_EXT_FUN_811049dc(auStack_214,0x200); \| local_14[0] = 0x100; \| uVar3 = 0;` |
| user.c | 328054 | `undefined1 auStack_214 [512]; \| undefined2 local_14 [4]; \|  \| thunk_EXT_FUN_811049dc(auStack_214,0x200); \| local_14[0] = 0x100; \| uVar3 = 0;` |
| user.c | 328132 | `uint uVar2; \| undefined1 auStack_20c [512]; \|  \| thunk_EXT_FUN_811049dc(auStack_20c,0x200); \| if ((param_1 != 0) && (param_2 != 0)) { \| FUN_` |
| user.c | 328155 | `int iVar3; \| undefined1 auStack_210 [512]; \|  \| thunk_EXT_FUN_811049dc(auStack_210,0x200); \| piVar1 = DAT_002936b0; \| FUN_00292c3a(DAT_00293` |
| user.c | 328269 | ` \| local_18 = CONCAT22((short)((uint)param_4 >> 0x10),0xff); \| uVar3 = param_2; \| uVar1 = thunk_EXT_FUN_810ffa74(0x200,s_mmiebook_file_c_002` |
| user.c | 328271 | `uVar3 = param_2; \| uVar1 = thunk_EXT_FUN_810ffa74(0x200,s_mmiebook_file_c_00292eb8,0x70c,param_4,param_2,param_3); \| if (uVar1 != 0) { \| thu` |
| user.c | 330198 | ` \| iStack_2c = param_1; \| local_28 = param_2; \| thunk_EXT_FUN_811049dc(auStack_22c,0x200); \| iVar2 = DAT_002967ac; \| iVar3 = FUN_00294818(0x` |
| user.c | 330242 | `*(undefined1 *)(iVar8 + 0x9ea)); \| } \| iVar3 = thunk_EXT_FUN_810ff150(DAT_002967ac); \| thunk_EXT_FUN_811049dc(auStack_22c,0x200); \| FUN_003c` |
| user.c | 330250 | `(iVar3 + iVar2,s___d__d__s__d_002967cc,2,*(undefined2 *)(iVar8 + 0xbf4),auStack_22c, \| uVar5); \| iVar3 = thunk_EXT_FUN_810ff150(DAT_002967ac` |
| user.c | 330261 | `uVar5); \| } \| iVar3 = thunk_EXT_FUN_810ff150(DAT_002967ac); \| thunk_EXT_FUN_811049dc(auStack_22c,0x200); \| if (*(char *)(iVar8 + 0x8ae) == '` |
| user.c | 330273 | `*(undefined1 *)(iVar8 + 0xc10),auStack_22c); \| } \| iVar3 = thunk_EXT_FUN_810ff150(DAT_002967ac); \| thunk_EXT_FUN_811049dc(auStack_22c,0x200)` |
| user.c | 330301 | `thunk_EXT_FUN_810ff124(iVar3,DAT_00296c04,cVar7,uVar1,puVar10); \| } \| iVar3 = thunk_EXT_FUN_810ff150(DAT_002967ac); \| thunk_EXT_FUN_811049dc` |
| user.c | 330338 | `*(undefined2 *)(iVar8 + 0xc44),puVar10); \| } \| iVar3 = thunk_EXT_FUN_810ff150(DAT_00296c00); \| thunk_EXT_FUN_811049dc(auStack_22c,0x200); \| ` |
| user.c | 330735 | `uVar7 = 0x411; \| } \| if (*(int *)(param_1 + 0xd0) == 0) { \| uVar7 = uVar7 \| 0x2000; \| } \| if (iVar5 == 0) { \| iVar5 = FUN_0028cfb4(*(undefin` |
| user.c | 330781 | `puVar4 = (undefined4 *)((uint)puVar4 \| 0x400); \| } \| if (*(int *)(param_1 + 0xd0) == 0) { \| puVar4 = (undefined4 *)((uint)puVar4 \| 0x2000); ` |
| user.c | 331964 | `if (uVar1 + uVar2 == 0x40) { \| FUN_0029b77e(param_1); \| uVar2 = *param_1; \| *param_1 = uVar2 + 0x200; \| param_1[1] = param_1[1] + (uint)(0xf` |
| user.c | 334902 | `if ((iVar2 != 0) && (iVar2 = thunk_FUN_000d1a08(iVar4,0), iVar2 != 0)) goto LAB_002a1ad4; \| } \| thunk_EXT_FUN_811049dc(param_1 + param_2 * 0` |
| user.c | 334925 | `} \| if (iVar4 == 0) { \| thunk_EXT_FUN_811049dc(param_1 + uVar5 * 0x186 + 1,0x401); \| thunk_EXT_FUN_810f7460((int)param_1 + uVar5 * 0x618 + 0` |
| user.c | 335082 | `} \| uVar1 = FUN_007f1d80(param_3); \| iVar2 = (int)param_1 + uVar4 * 0x618 + 0x406; \| thunk_EXT_FUN_810f7460(iVar2,0x200); \| uVar3 = FUN_007f` |
| user.c | 335118 | `iVar1 = (int)param_1 + param_2 * 0x618 + 0x406; \| thunk_FUN_000d1a08(iVar1,0); \| thunk_EXT_FUN_811049dc(param_1 + param_2 * 0x186 + 1,0x401)` |
| user.c | 335133 | `iVar1 = (int)param_1 + uVar2 * 0x618 + 0x406; \| thunk_FUN_000d1a08(iVar1,0); \| thunk_EXT_FUN_811049dc(param_1 + uVar2 * 0x186 + 1,0x401); \| ` |
| user.c | 335229 | `int iVar6; \| ushort auStack_220 [258]; \|  \| thunk_EXT_FUN_811049dc(auStack_220,0x200); \| if ((param_2 < 0x14) && (iVar6 = param_1 + param_2 ` |
| user.c | 335255 | `uVar4 = uVar4 - 1; \| } while (-1 < (int)uVar4); \| FUN_003b9354(iVar6 + 0x406,auStack_220,0); \| thunk_EXT_FUN_811037c8(iVar6 + 0x406,auStack_` |
| user.c | 335275 | `undefined1 auStack_224 [516]; \|  \| if ((param_2 < 0x14) && (iVar4 = param_1 + param_2 * 0x618, *(int *)(iVar4 + 0x608) == 2)) { \| thunk_EXT_` |
| user.c | 335287 | `(0x10,DAT_002a225c,s_MMIDL_ChangeDownloadTaskStatus_m_002a222c + 0x2c,param_2); \| } \| else { \| thunk_EXT_FUN_811049dc(auStack_224,0x200); \| ` |
| user.c | 335457 | `undefined2 local_2c [4]; \|  \| thunk_EXT_FUN_811049dc(auStack_a60,0x618); \| thunk_EXT_FUN_811049dc(auStack_448,0x200); \| local_34[0] = 0xff; ` |
| user.c | 335459 | `thunk_EXT_FUN_811049dc(auStack_a60,0x618); \| thunk_EXT_FUN_811049dc(auStack_448,0x200); \| local_34[0] = 0xff; \| thunk_EXT_FUN_811049dc(auSta` |
| user.c | 335475 | `thunk_EXT_FUN_811049dc(auStack_48,0x14); \| local_30[0] = 0; \| local_2c[0] = 0xff; \| iVar4 = thunk_EXT_FUN_810ff868(0x200,0x44444444,s_mmidl_` |
| user.c | 335479 | `if (iVar4 == 0) { \| return; \| } \| thunk_EXT_FUN_810f7460(iVar4,0x200); \| uVar1 = FUN_007f1d80(auStack_65e); \| FUN_000cff4e(auStack_65e,uVar1` |
| user.c | 336634 | `local_1c = param_2; \| uStack_18 = param_3; \| if (param_1 != 0) { \| thunk_EXT_FUN_810faa34(auStack_290,param_1,0x200); \| local_90 = *(undefin` |
| user.c | 336635 | `uStack_18 = param_3; \| if (param_1 != 0) { \| thunk_EXT_FUN_810faa34(auStack_290,param_1,0x200); \| local_90 = *(undefined1 *)(param_1 + 0x200` |
| user.c | 336667 | `else { \| *(undefined4 *)(iVar2 + 0x278) = *(undefined4 *)(param_1 + 0x278); \| *(undefined4 *)(iVar2 + 0x274) = *(undefined4 *)(param_1 + 0x2` |
| user.c | 336668 | `*(undefined4 *)(iVar2 + 0x278) = *(undefined4 *)(param_1 + 0x278); \| *(undefined4 *)(iVar2 + 0x274) = *(undefined4 *)(param_1 + 0x274); \| th` |
| user.c | 336669 | `*(undefined4 *)(iVar2 + 0x274) = *(undefined4 *)(param_1 + 0x274); \| thunk_EXT_FUN_811049dc(iVar2,0x200); \| thunk_EXT_FUN_810faa34(iVar2,par` |
| user.c | 342709 | `uVar1 = *param_1; \| param_3 = param_3 - 0x40; \| param_2 = param_2 + 0x40; \| *param_1 = uVar1 + 0x200; \| param_1[1] = param_1[1] + (uint)(0xf` |
| user.c | 342725 | `if (uVar1 + uVar2 == 0x40) { \| FUN_002af188(param_1,param_1 + 0xb); \| uVar1 = *param_1; \| *param_1 = uVar1 + 0x200; \| param_1[1] = param_1[1` |
| user.c | 343254 | `undefined2 local_24 [2]; \| undefined2 local_20 [2]; \|  \| thunk_EXT_FUN_811049dc(auStack_224,0x200); \| local_24[0] = 0xff; \| local_20[0] = 0;` |
| user.c | 343423 | `undefined1 auStack_21c [512]; \| undefined2 local_1c [4]; \|  \| thunk_EXT_FUN_811049dc(auStack_21c,0x200); \| puVar1 = DAT_002b0c24; \| local_1c` |
| user.c | 343433 | `*(short *)(puVar1 + 4) = (short)param_1; \| *(undefined2 *)(puVar1 + 0x206) = local_1c[0]; \| *(undefined2 *)(puVar1 + 0x208) = param_2; \| thu` |
| user.c | 343600 | `local_17 = *(undefined1 *)(param_1 + 0x209); \| local_18 = *(undefined1 *)(param_1 + 0x208); \| local_14 = *(undefined4 *)(param_1 + 0x218); \|` |
| user.c | 343601 | `local_18 = *(undefined1 *)(param_1 + 0x208); \| local_14 = *(undefined4 *)(param_1 + 0x218); \| thunk_EXT_FUN_811049dc(auStack_220,0x200); \| l` |
| user.c | 343952 | `*(uint *)(DAT_002b2034 + -0x500 + ((uVar3 & 0x3fffffff) >> 0x18) * 4) ^ \| *(uint *)(DAT_002b2034 + (uVar4 & 0x3f) * 4) ^ \| *(uint *)(DAT_002` |
| user.c | 343962 | `*(uint *)(DAT_002b2034 + -0x500 + ((uVar3 & 0x3fffffff) >> 0x18) * 4) ^ \| *(uint *)(DAT_002b2034 + (uVar4 & 0x3f) * 4) ^ \| *(uint *)(DAT_002` |
| user.c | 344003 | `FUN_002b1c34(param_1 + 8,1,param_3 + 0x80); \| FUN_002b1c34(param_1 + 0x10,0,param_3 + 0x100); \| FUN_002b1c34(param_1,1,param_3 + 0x280); \| F` |
| user.c | 344132 | `local_14 = uVar1 << 0x18 \| (uVar1 >> 8 & 0xff) << 0x10 \| (uVar1 >> 0x10 & 0xff) << 8 \| \| (uint)*(byte *)(param_1 + 7); \| FUN_002b1d32(&local` |
| user.c | 345881 | `undefined2 local_20 [2]; \| undefined2 local_1c [4]; \|  \| thunk_EXT_FUN_811049dc(auStack_420,0x200); \| local_20[0] = 0xff; \| thunk_EXT_FUN_81` |
| user.c | 345883 | ` \| thunk_EXT_FUN_811049dc(auStack_420,0x200); \| local_20[0] = 0xff; \| thunk_EXT_FUN_811049dc(auStack_220,0x200); \| local_1c[0] = 0xff; \| if ` |
| user.c | 345886 | `thunk_EXT_FUN_811049dc(auStack_220,0x200); \| local_1c[0] = 0xff; \| if ((param_1 != 0) && (param_2 != 0)) { \| FUN_000cff4e(param_1,*(undefine` |
| user.c | 345887 | `local_1c[0] = 0xff; \| if ((param_1 != 0) && (param_2 != 0)) { \| FUN_000cff4e(param_1,*(undefined2 *)(param_1 + 0x200),0,0,0,0,auStack_420,lo` |
| user.c | 346001 | `iVar1 = FUN_00870380(param_1,uVar2,auStack_230); \| if ((iVar1 != 0) && (iVar1 = FUN_002b497e(param_2,auStack_230,param_4), iVar1 != 0)) { \| ` |
| user.c | 350354 | `DAT_002baa94[1] = 0x1000; \| puVar1[2] = 0x10000; \| puVar1[3] = 0xffffffff; \| puVar1[4] = 0x200000; \| puVar1[5] = 4; \| puVar1[0x74] = 4; \| uV` |
| user.c | 352401 | `uint uVar17; \|  \| if (((param_2 != (undefined1 *)0x0) && (param_1 != 0)) && (param_3 != 0)) { \| iVar15 = *(int *)(param_3 + 0x200); \| uVar4 ` |
| user.c | 361465 | `puVar28 = (uint *)((int)puVar28 + 1); \| piVar22 = piVar27; \| } while ((int)puVar28 < 0x50); \| local_a0 = (int *)0x2000; \| local_a8 = (int *)` |
| user.c | 361601 | `if (local_a4 != (uint *)0x0) { \| iVar24 = 1; \| puVar28 = local_a4; \| while (iVar9 = (int)(puVar28 + 0x2000) >> 0x10, iVar9 < iVar21) { \| iVa` |
| user.c | 362099 | `iVar14 = 8; \| goto LAB_002cdbcc; \| } \| if (iVar21 == 0x200) { \| iVar13 = piVar15[0x44]; \| iVar14 = 7; \| goto LAB_002cdbcc;` |
| user.c | 362183 | `uVar12 = 8; \| goto LAB_002cdd3c; \| } \| if (iVar21 == 0x200) { \| iVar9 = piVar15[0x44]; \| uVar12 = 7; \| goto LAB_002cdd3c;` |
| user.c | 362234 | `uVar12 = 8; \| goto LAB_002cde2c; \| } \| if (iVar21 == 0x200) { \| iVar9 = piVar15[0x44]; \| uVar12 = 7; \| goto LAB_002cde2c;` |
| user.c | 362328 | `sVar2 = (short)uVar6; \| sVar5 = (short)((uint)uVar7 >> 0x10); \| sVar3 = (short)uVar7; \| uVar13 = ((int)(short)uVar16 * (int)sVar2 + (int)(sh` |
| user.c | 362335 | `(int)(short)uVar17 * (int)sVar2 + (int)(short)uVar10 * (int)sVar4) * 4; \| uVar17 = (int)uVar13 >> 0xf; \| uVar16 = uVar13 & 0x7fff; \| iVar14 ` |
| user.c | 362342 | `} \| puVar8 = (ushort *)((int)param_1 + 2); \| *(ushort *)param_1 = uVar12; \| uVar9 = ((int)(short)uVar11 * (int)sVar2 + (int)(short)(ushort)u` |
| user.c | 362350 | `(int)(short)uVar10 * (int)sVar2 + (int)(short)(ushort)uVar17 * (int)sVar4) * 4; \| uVar10 = (int)uVar9 >> 0xf; \| uVar11 = uVar9 & 0x7fff; \| i` |
| user.c | 362602 | `*param_3 = uVar6; \| sVar3 = (short)((uint)param_4 >> 0x10); \| sVar2 = (short)param_4; \| iVar9 = (int)(short)uVar6 * (int)sVar2 + (int)(short` |
| user.c | 362615 | `uVar11 = uVar10; \| } \| iVar9 = (int)(short)((uint)uVar6 >> 0x10) * (int)sVar2 + \| (int)(short)((uint)uVar7 >> 0x10) * (int)sVar3 * 0x20 + 0x` |
| user.c | 362630 | `} \| param_3 = param_3 + 2; \| *puVar5 = uVar6; \| iVar9 = (int)(short)uVar6 * (int)sVar2 + (int)(short)uVar8 * (int)sVar3 * 0x20 + 0x2000; \| u` |
| user.c | 362641 | `uVar10 = -uVar10; \| } \| iVar9 = (int)(short)((uint)uVar6 >> 0x10) * (int)sVar2 + \| (int)(short)((uint)uVar8 >> 0x10) * (int)sVar3 * 0x20 + 0` |
| user.c | 362849 | `(int)(short)(0x4000 - ((int)sVar4 * (int)sVar7 + \| (int)sVar2 * (int)sVar6 + \| (int)(short)((uint)uVar13 >> 0x10) * (int)sVar7) >> 0xf) * 0x` |
| user.c | 362858 | `(int)sVar3 * \| (int)(short)(0x4000 - ((int)sVar4 * (int)sVar6 + \| (int)(short)puVar8[1] * (int)sVar7 + (int)sVar2 * (int)sVar7) >> \| 0xf) * ` |
| user.c | 362873 | `(int)sVar3 * \| (int)(short)(0x4000 - ((int)sVar2 * (int)sVar7 + \| (int)(short)uVar13 * (int)sVar6 + (int)sVar4 * (int)sVar7) >> 0xf \| ) * 0x` |
| user.c | 362882 | `(int)sVar3 * \| (int)(short)(0x4000 - ((int)sVar2 * (int)sVar6 + \| (int)(short)*param_1 * (int)sVar7 + \| (int)(short)uVar13 * (int)sVar7) >> ` |
| user.c | 362900 | `(int)sVar3 * \| (int)(short)(0x4000 - ((int)sVar5 * (int)sVar7 + \| (int)sVar4 * (int)sVar6 + (int)sVar2 * (int)sVar7) >> 0xf) * 0x20 + \| 0x20` |
| user.c | 362909 | `(int)sVar3 * \| (int)(short)(0x4000 - ((int)sVar5 * (int)sVar6 + \| (int)(short)puVar8[3] * (int)sVar7 + (int)sVar4 * (int)sVar7) >> \| 0xf) * ` |
| user.c | 362924 | `(int)sVar3 * \| (int)(short)(0x4000 - ((int)sVar4 * (int)sVar7 + \| (int)sVar2 * (int)sVar6 + (int)sVar5 * (int)sVar7) >> 0xf) * 0x20 + \| 0x20` |
| user.c | 362932 | `iVar12 = (int)(short)((uint)uVar14 >> 0x10) * (int)param_6 + \| (int)sVar3 * \| (int)(short)(0x4000 - ((int)sVar4 * (int)sVar6 + (int)sVar2 * ` |
| user.c | 362973 | `sVar3 = (short)((uint)DAT_002cec30 >> 0x10); \| sVar2 = (short)DAT_002cec30; \| sVar4 = (short)((uint)DAT_002cec34 >> 0x10); \| uVar6 = ((int)(` |
| user.c | 362980 | `(int)(short)uVar5 * (int)sVar2 + (int)(short)uVar7 * (int)sVar3) * 2; \| uVar5 = (int)uVar6 >> 0xf; \| uVar6 = uVar6 & 0x7fff; \| uVar8 = ((int` |
| user.c | 363258 | `} \| param_3 = param_3 + 2; \| *psVar18 = (short)uVar28; \| iVar29 = iVar30 + -0x20000; \| bVar1 = 0x1ffff < iVar30; \| puVar16 = puVar17 + 1; \| ` |
| user.c | 363462 | `(int)(short)*puVar22 * (int)sVar3 + \| (int)(short)((uint)*puVar22 >> 0x10) * (int)sVar10 + (int)sVar19 * (int)sVar2) << \| (uVar36 & 0xff)) +` |
| user.c | 365481 | `(int)((uint6)((int6)iVar15 * (int6)sVar2) >> 0x10) + \| (int)((uint6)((int6)iVar14 * (int6)sVar3) >> 0x10); \| iVar14 = piVar11[0x201]; \| piVa` |
| user.c | 366865 | `} \| } \| else { \| iVar13 = SignedSaturate(uVar11 * 0x10000 + -0x20000,0x20); \| SignedDoesSaturate(iVar13,0x20); \| if (iVar13 >> 0x10 == 0) { ` |
| user.c | 367016 | `} \| } \| else { \| iVar13 = SignedSaturate(uVar11 * 0x10000 + -0x20000,0x20); \| SignedDoesSaturate(iVar13,0x20); \| if (iVar13 >> 0x10 == 0) { ` |
| user.c | 367042 | `if (uVar11 != (int)(uVar4 << 0x1a) >> 0x10) { \| uVar11 = (uVar12 ^ 0x7fffffff) >> 0x10; \| } \| iVar13 = SignedSaturate(uVar11 * 0x10000 + 0x2` |
| user.c | 368224 | `local_1c = &DAT_00002710; \| local_34 = *(undefined4 *)(param_2 + 0x50); \| local_30 = *(undefined4 *)(param_2 + 0x28); \| local_28 = *(undefin` |
| user.c | 368715 | `} \| else { \| thunk_EXT_FUN_81103f4a(s__iperf___s__d__listen_ok_0033ffa0,DAT_0033ff9c,0x3a1); \| iVar9 = thunk_EXT_FUN_810ffa74(0x2000,s_DAPS_` |
| user.c | 368717 | `thunk_EXT_FUN_81103f4a(s__iperf___s__d__listen_ok_0033ffa0,DAT_0033ff9c,0x3a1); \| iVar9 = thunk_EXT_FUN_810ffa74(0x2000,s_DAPS_source_iperf_` |
| user.c | 368744 | `thunk_EXT_FUN_81103f4a(s__iperf__s__d_NO_EVENT_OCCUR_00340044,DAT_0033ff9c,0x3e2); \| } \| else { \| iVar10 = FUN_000d50ee(iVar4,iVar9,0x2000,0` |
| user.c | 368873 | `uVar3 = 0; \| if (iVar5 == 3) { \| thunk_EXT_FUN_81103f4a(s__iperf_This_is_Udp_server_00340d58); \| uVar4 = 0x2000; \| thunk_EXT_FUN_80bcc374(DA` |
| user.c | 369100 | `undefined1 auStack_418 [512]; \| undefined1 auStack_218 [516]; \|  \| thunk_EXT_FUN_811049dc(auStack_418,0x200); \| thunk_EXT_FUN_811049dc(auSta` |
| user.c | 369101 | `undefined1 auStack_218 [516]; \|  \| thunk_EXT_FUN_811049dc(auStack_418,0x200); \| thunk_EXT_FUN_811049dc(auStack_218,0x200); \| if ((param_1 ==` |
| user.c | 369167 | `undefined1 local_25; \|  \| thunk_EXT_FUN_811049dc(&local_34,0x14); \| thunk_EXT_FUN_811049dc(auStack_434,0x200); \| thunk_EXT_FUN_811049dc(auSt` |
| user.c | 369168 | ` \| thunk_EXT_FUN_811049dc(&local_34,0x14); \| thunk_EXT_FUN_811049dc(auStack_434,0x200); \| thunk_EXT_FUN_811049dc(auStack_234,0x200); \| if ((` |
| user.c | 377515 | `thunk_EXT_FUN_810ffbd2(*(int *)(param_1 + 0x254),s_file_cache_rd_c_00353bf0,0x19b); \| *(undefined4 *)(param_1 + 0x254) = 0; \| } \| uVar1 = pa` |
| user.c | 378743 | `thunk_EXT_FUN_810fe8e6(*(undefined4 *)(iVar5 + 0xac),0xffffffff); \| bVar8 = false; \| param_3 = param_2 + param_3; \| if (*(int *)(param_1 + 0` |
| user.c | 379454 | `} \| (**(code **)(*(int *)(pcVar3 + 0x18) + 8)) \| (*(int *)(pcVar3 + 0x18),&local_80,&local_58); \| *(undefined4 *)(local_84 + 0x10) = 0x200; ` |
| user.c | 381182 | `uVar8 = (int)(short)(ushort)(byte)((uVar3 + 0xf) * 0x100000 >> 0x18) * \| (int)(short)(ushort)(byte)((uVar4 + 0xf) * 0x100000 >> 0x18); \| iVa` |
| user.c | 383099 | `*(uint *)(iVar4 + 4) = (*(uint *)(iVar2 + param_3 * 4) & param_2) << (0x20 - param_3 & 0xff); \| param_1[1] = 0x20 - param_3; \| if (param_1 +` |
| user.c | 383100 | `param_1[1] = 0x20 - param_3; \| if (param_1 + 0x83 <= (int *)param_1[2]) { \| thunk_EXT_FUN_811037c8(param_1[0x86] + param_1[0x84],param_1 + 3` |
| user.c | 390004 | `iVar11 = *(int *)(param_2 + iVar14 * 0xf0 + 0x378); \| if (7 < uVar8) { \| *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) \| 0x400; \| *(` |
| user.c | 390021 | `thunk_EXT_FUN_81103f4a \| (s__s__pRefFrame__p___p_<_0x8000000_003631f0,DAT_0036369c,*puVar7,puVar7[1]); \| *(uint *)(param_1 + 0x58) = *(uint ` |
| user.c | 390258 | `uVar13 = (int)(short)*(int *)(iVar4 + 0x518) + (int)(short)iVar5; \| iVar4 = (*(int *)(iVar4 + 0x518) >> 0x10) + (iVar5 >> 0x10); \| uVar11 = ` |
| user.c | 390408 | `uVar16 = (int)(short)*(int *)(iVar8 + 0x518) + (int)(short)iVar9; \| iVar9 = (*(int *)(iVar8 + 0x518) >> 0x10) + (iVar9 >> 0x10); \| uVar10 = ` |
| user.c | 390545 | `uVar13 = (int)(short)*(int *)(iVar3 + 0x518) + (int)(short)iVar10; \| iVar10 = (*(int *)(iVar3 + 0x518) >> 0x10) + (iVar10 >> 0x10); \| uVar5 ` |
| user.c | 390572 | `uVar13 = (uint)*pcVar8; \| if (7 < uVar13) { \| *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) \| 0x400; \| *(uint *)(&DAT_0000105c + par` |
| user.c | 390589 | `thunk_EXT_FUN_81103f4a \| (s__s__pRefFrame__p___p_<_0x8000000_003631f0,DAT_00363fbc,*puVar12,puVar12[1]); \| *(uint *)(param_1 + 0x58) = *(uin` |
| user.c | 390709 | `uVar16 = (int)(short)*(int *)(iVar8 + 0x518) + (int)(short)iVar9; \| iVar9 = (*(int *)(iVar8 + 0x518) >> 0x10) + (iVar9 >> 0x10); \| uVar10 = ` |
| user.c | 391063 | `uVar30 = (int)(short)*(int *)(iVar36 + 0x558) + (int)(short)iVar26; \| iVar26 = (*(int *)(iVar36 + 0x558) >> 0x10) + (iVar26 >> 0x10); \| uVar` |
| user.c | 391138 | `iVar36 = iVar26 + local_180[1]; \| if (7 < *(byte *)(iVar36 + 0xe0)) { \| *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) \| 0x400; \| *(u` |
| user.c | 391174 | `uVar30 = (int)(short)*local_178 + (int)(short)iVar26; \| iVar26 = (*local_178 >> 0x10) + (iVar26 >> 0x10); \| uVar24 = uVar30; \| if (0x3fff < ` |
| user.c | 391213 | `auVar58._0_12_ = extraout_var_07; \| in_q0 = auVar58 << 0x20; \| *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) \| 0x400; \| uVar24 = *(u` |
| user.c | 391277 | `uVar30 = (int)(short)*(int *)(iVar26 + 0x518) + (int)(short)iVar36; \| iVar36 = (*(int *)(iVar26 + 0x518) >> 0x10) + (iVar36 >> 0x10); \| uVar` |
| user.c | 391384 | `uVar30 = (uint)(short)iVar27; \| iVar27 = iVar27 >> 0x10; \| uVar24 = uVar30; \| if (0x3fff < uVar30 + 0x2000) { \| thunk_EXT_FUN_81103f4a(s_MB_` |
| user.c | 394940 | `uVar2 = thunk_EXT_FUN_810fddf8(s_PBAP_Connect_Timer_0036a788,0x369f69,0,0x32,0); \| *(undefined4 *)(iVar1 + 0x14) = uVar2; \| } \| FUN_001d9866` |
| user.c | 394962 | `uVar3 = thunk_EXT_FUN_810fddf8(s_PBAP_Connect_Timer_0036a788,0x369f69,0,0x32,0); \| *(undefined4 *)(iVar1 + 0x14) = uVar3; \| } \| FUN_001d9866` |
| user.c | 397084 | `} \| } while (uVar5 != 0); \| } \| else if (iVar6 == 0x200) { \| iVar7 = iVar1 + 6; \| uVar9 = uVar9 - 3 & 0xff; \| iVar10 = (uint)*(byte *)(iVar1` |
| user.c | 398291 | `undefined2 local_228 [256]; \| int local_28; \|  \| thunk_EXT_FUN_811049dc(local_228,0x200); \| pbVar4 = DAT_0036e654; \| local_28 = *(int *)(DAT` |
| user.c | 398402 | `if (0x4000 < param_1) { \| return 0xe; \| } \| if (0x2000 < param_1) { \| return 0xd; \| } \| if (0x1000 < param_1) {` |
| user.c | 398414 | `if (0x400 < param_1) { \| return 10; \| } \| if (0x200 < param_1) { \| return 9; \| } \| if (0x100 < param_1) {` |
| user.c | 398529 | `local_2c = 0; \| local_28 = uVar3; \| if (iVar7 == 0) { \| thunk_EXT_FUN_811018b0(s_fileCacheBuf____PNULL_00371410,s_aac_adp_c_00371388,0x200);` |
| user.c | 398548 | `*(undefined4 *)(iVar5 + 0x14) = 0x800; \| } \| FUN_003b99fe(local_28,uVar3,*(int *)(iVar5 + 0xc),*(int *)(iVar5 + 0xc) >> 0x1f,0); \| FUN_003b9` |
| user.c | 402995 | `if (0x100 < *param_1) { \| param_1[7] = 6; \| } \| if (0x200 < *param_1) { \| param_1[7] = param_1[7] + 1; \| } \| LAB_0037e024:` |
| user.c | 403008 | `if (iVar1 == 0x100) { \| param_1[0xe] = 0; \| } \| else if (iVar1 == 0x200) { \| param_1[0xe] = 1; \| } \| else {` |
| user.c | 403055 | `if (iVar7 < 0) { \| thunk_EXT_FUN_810f7460(param_3,0x800); \| thunk_EXT_FUN_810f7460(param_4,0x800); \| thunk_EXT_FUN_811049dc(param_7 + 0x2f,0` |
| user.c | 403056 | `thunk_EXT_FUN_810f7460(param_3,0x800); \| thunk_EXT_FUN_810f7460(param_4,0x800); \| thunk_EXT_FUN_811049dc(param_7 + 0x2f,0x2000); \| thunk_EXT` |
| user.c | 403095 | `if (iVar3 < 0) { \| thunk_EXT_FUN_810f7460(param_3,0x800); \| thunk_EXT_FUN_810f7460(param_4,0x800); \| thunk_EXT_FUN_811049dc(param_7 + 0x2f,0` |
| user.c | 403096 | `thunk_EXT_FUN_810f7460(param_3,0x800); \| thunk_EXT_FUN_810f7460(param_4,0x800); \| thunk_EXT_FUN_811049dc(param_7 + 0x2f,0x2000); \| thunk_EXT` |
| user.c | 404067 | `} \| iVar1 = (int)(param_1 + ((uint)(param_1 >> 0x1f) >> 0x1c)) >> 4; \| return (int)((uint)*(ushort *)(DAT_00380660 + iVar1 * 2) * \| (uint)*(` |
| user.c | 404366 | `} \| iVar12 = (int)(iVar11 + ((uint)(iVar11 >> 0x1f) >> 0x1c)) >> 4; \| iVar11 = (uint)*(ushort *)(DAT_00380a74 + iVar12 * 2) * \| (uint)*(usho` |
| user.c | 404869 | `if (0 < *(int *)(param_1 + 0x20)) { \| do { \| if ((int)uVar7 < *(int *)(param_1 + 0x14) * 2) { \| puVar8 = (uint *)(param_2 + ((int)uVar7 >> 1` |
| user.c | 404949 | `do { \| (&DAT_0000433c)[uVar7 + param_1] = 7; \| if ((int)uVar7 < *(int *)(param_1 + 0x14) * 2) { \| piVar3 = (int *)(param_2 + ((int)uVar7 >> ` |
| user.c | 405072 | `} \| iVar9 = (param_6 >> 2) - (param_6 >> 5); \| while (bVar11 = iVar9 != 0, iVar9 = iVar9 + -1, bVar11) { \| iVar3 = (int)(*puVar2 + 0x2000) >` |
| user.c | 405073 | `iVar9 = (param_6 >> 2) - (param_6 >> 5); \| while (bVar11 = iVar9 != 0, iVar9 = iVar9 + -1, bVar11) { \| iVar3 = (int)(*puVar2 + 0x2000) >> 0x` |
| user.c | 406863 | `} \| iVar3 = thunk_EXT_FUN_810ffa74 \| ((uint)*(ushort *)(param_1 + 0x26) * *(int *)(param_1 + 0xdc) * 4, \| s_msaudio_c_00384904,0x200); \| *(i` |
| user.c | 407705 | `iVar12 = piVar20[0x123]; \| if (iVar12 < 0x400001) { \| LAB_00385ee0: \| bVar19 = SBORROW4(iVar12,psVar15[8] * 0x200); \| iVar12 = iVar12 + psVa` |
| user.c | 407706 | `if (iVar12 < 0x400001) { \| LAB_00385ee0: \| bVar19 = SBORROW4(iVar12,psVar15[8] * 0x200); \| iVar12 = iVar12 + psVar15[8] * -0x200; \| do { \| i` |
| user.c | 407716 | `} \| else { \| iVar13 = (int)psVar15[8]; \| bVar19 = SBORROW4(iVar12,iVar13 * 0x200); \| iVar10 = iVar12 + iVar13 * -0x200; \| do { \| if (iVar10 ` |
| user.c | 407717 | `else { \| iVar13 = (int)psVar15[8]; \| bVar19 = SBORROW4(iVar12,iVar13 * 0x200); \| iVar10 = iVar12 + iVar13 * -0x200; \| do { \| if (iVar10 < 0 ` |
| user.c | 407724 | `bVar19 = SBORROW4(iVar9,iVar1); \| iVar10 = iVar9 + psVar15[7] * -0x80; \| } while (iVar1 <= iVar9); \| iVar12 = FUN_008835c8(iVar13 * 0x200 - ` |
| user.c | 407789 | `uVar6 = DAT_00386018; \| if (0 < piVar16[iVar14 + 0x112b]) { \| iVar12 = FUN_0007b2a6(); \| lVar2 = (longlong)(iVar12 + -0x200000) * 0xc0a8; \| ` |
| user.c | 407796 | `uVar6 = DAT_00386018; \| if (0 < piVar16[(int)(s_http_CreatePostRequest_post_file_00001220 + iVar14 + 0xf)]) { \| iVar12 = FUN_0007b2a6(); \| l` |
| user.c | 408570 | `local_3c = local_38[param_2 + 2]; \| iVar3 = local_38[param_3 + 2]; \| if (param_1 == 0) { \| FUN_002d01fc(param_4,param_8,DAT_00386c0c,0x200);` |
| user.c | 408572 | `if (param_1 == 0) { \| FUN_002d01fc(param_4,param_8,DAT_00386c0c,0x200); \| FUN_0046c2b0(param_4,param_8); \| FUN_002d02c4(param_4,param_8,DAT_` |
| user.c | 408581 | `FUN_002d048c(&local_50); \| } \| else if (param_1 == 1) { \| FUN_002d01fc(param_4,param_8,DAT_00386c0c,0x200); \| FUN_0046c2b0(param_4,param_8);` |
| user.c | 408583 | `else if (param_1 == 1) { \| FUN_002d01fc(param_4,param_8,DAT_00386c0c,0x200); \| FUN_0046c2b0(param_4,param_8); \| FUN_002d02c4(param_4,param_8` |
| user.c | 408598 | `do { \| FUN_002d01fc(iVar4,iVar1,DAT_00386c10,0x40); \| FUN_00884854(iVar1,iVar4); \| thunk_EXT_FUN_810faa34(iVar4,iVar1,0x200); \| FUN_002d02c4` |
| user.c | 408602 | `FUN_002d02c4(iVar4,iVar1,DAT_00386c10,0x40); \| iVar2 = iVar2 + 1; \| iVar1 = iVar1 + 0x400; \| iVar4 = iVar4 + 0x200; \| } while (iVar2 < 8); \|` |
| user.c | 408612 | `FUN_002d0674(&local_50); \| } \| else if (param_1 == 3) { \| FUN_002d01fc(param_4,param_8,DAT_00386c0c,0x200); \| FUN_0046c2b0(param_4,param_8);` |
| user.c | 408614 | `else if (param_1 == 3) { \| FUN_002d01fc(param_4,param_8,DAT_00386c0c,0x200); \| FUN_0046c2b0(param_4,param_8); \| FUN_002d02c4(param_4,param_8` |
| user.c | 408687 | `uVar4 = 0; \| do { \| uVar2 = uVar4 + 1 & 0xff; \| *(undefined4 *)(param_2 + uVar4 * 4 + 0x3e5c) = 0x20000000; \| *(undefined4 *)(param_2 + uVar` |
| user.c | 408688 | `do { \| uVar2 = uVar4 + 1 & 0xff; \| *(undefined4 *)(param_2 + uVar4 * 4 + 0x3e5c) = 0x20000000; \| *(undefined4 *)(param_2 + uVar4 * 4 + 0x3f2` |
| user.c | 409399 | `thunk_EXT_FUN_81103f4a(s_rdabt_rfcomm_msg_dispatch_0x_x_00388a50,*param_1); \| piVar2 = DAT_003889f8; \| uVar1 = *param_1; \| if (uVar1 == 0x20` |
| user.c | 409403 | `FUN_001e1ec0(s_http_HttpTracePatchParam_ua_prof_00001fd8 + 0x2c,iVar4); \| return 0; \| } \| if (uVar1 < 0x2005) { \| if (uVar1 != 0x2001) { \| i` |
| user.c | 409404 | `return 0; \| } \| if (uVar1 < 0x2005) { \| if (uVar1 != 0x2001) { \| if (0x2001 < uVar1) { \| if (uVar1 == 0x2002) { \| FUN_001d098c(s_http_HttpTr` |
| user.c | 409405 | `} \| if (uVar1 < 0x2005) { \| if (uVar1 != 0x2001) { \| if (0x2001 < uVar1) { \| if (uVar1 == 0x2002) { \| FUN_001d098c(s_http_HttpTracePatchPara` |
| user.c | 409406 | `if (uVar1 < 0x2005) { \| if (uVar1 != 0x2001) { \| if (0x2001 < uVar1) { \| if (uVar1 == 0x2002) { \| FUN_001d098c(s_http_HttpTracePatchParam_ua` |
| user.c | 409417 | `*piVar2 = iVar4; \| return 0; \| } \| if (uVar1 != 0x2003) { \| return 0; \| } \| if (*DAT_003889f8 != 0) {` |
| user.c | 409436 | `FUN_007a5c8a(*puVar3,puVar3[2]); \| return 0; \| } \| if (uVar1 != 0x2000) { \| return 0; \| } \| FUN_0038874a(0x2000,iVar4);` |
| user.c | 409439 | `if (uVar1 != 0x2000) { \| return 0; \| } \| FUN_0038874a(0x2000,iVar4); \| return 0; \| } \| if ((*(short *)(iVar4 + 0x10) == 0) \|\| (*(short *)(iV` |
| user.c | 409448 | `} \| } \| else { \| if (uVar1 == 0x2005) { \| FUN_001e1ee8(s_http_HttpTracePatchParam_ua_prof_00001fd8 + 0x2d,iVar4); \| return 0; \| }` |
| user.c | 409452 | `FUN_001e1ee8(s_http_HttpTracePatchParam_ua_prof_00001fd8 + 0x2d,iVar4); \| return 0; \| } \| if (uVar1 == 0x2007) { \| FUN_001e1e98(*(undefined2` |
| user.c | 409456 | `FUN_001e1e98(*(undefined2 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0x18)); \| return 0; \| } \| if (uVar1 == 0x2009) { \| return 0; \| } \| if (uVar1` |
| user.c | 409459 | `if (uVar1 == 0x2009) { \| return 0; \| } \| if (uVar1 != 0x200b) { \| return 0; \| } \| if (*DAT_003889f8 != 0) {` |
| user.c | 409737 | `int iStack_28; \|  \| iVar8 = DAT_00389128; \| local_a0 = (int *)(param_4 + 0x200); \| local_a8 = (int *)(param_4 + 0x300); \| local_88 = (int *)` |
| user.c | 409774 | `iVar14 = ((int)((ulonglong)((longlong)iVar13 * 0xc000000) >> 0x20) + \| (int)((ulonglong)((longlong)iVar14 * 0x74000000) >> 0x20)) * 2; \| } \|` |
| user.c | 410001 | `iVar20 = (int)((ulonglong) \| ((longlong)iVar20 * \| (longlong) \| (0x20000000 - \| (int)((ulonglong) \| ((longlong)(iVar8 << ((uint)piVar19 & 0x` |
| user.c | 410057 | `iVar8 = (int)((ulonglong) \| ((longlong)iVar8 * \| (longlong) \| (0x20000000 - \| (int)((ulonglong) \| ((longlong)(int)(uVar18 << ((uint)piVar10 ` |
| user.c | 410111 | `if (0 < (int)local_58) { \| local_84 = uVar6 - 1; \| iVar14 = local_60 - local_64; \| iVar20 = local_30 + local_64 * 0x200; \| do { \| uVar6 = *(` |
| user.c | 417132 | `} \| bVar10 = (byte)((uint)iVar18 >> 8); \| if ((*puVar12 & 1) == 0) { \| iVar13 = *puVar12 * 0x20000000; \| if (bVar20) { \| if (iVar13 < 0) { \|` |
| user.c | 422612 | ` \| uVar2 = 0; \| iVar1 = FUN_000d44ee(); \| if ((iVar1 != 0) \|\| (iVar1 = FUN_000d308c(param_1,0x20000000), iVar1 != 0)) { \| uVar2 = 1; \| } \| r` |
| user.c | 423444 | `if (iVar6 != 0) { \| iVar6 = FUN_000d3e70(iVar3,piVar8); \| if (iVar6 == 0) { \| piVar2[2] = 0x200; \| } \| *piVar2 = iVar3; \| piVar2[1] = 0;` |
| user.c | 423457 | `} \| else { \| pcVar7 = s_MMK_HandleWinMoveMsg_MSG_LOSE_FO_003a30fc + 0x34; \| piVar2[2] = 0x200; \| iVar6 = iVar6 + 4; \| } \| }` |
| user.c | 424687 | `local_18 = 0; \| local_14 = 0; \| FUN_007ee69e(param_2,&local_18); \| FUN_007f0894(param_1,1,&local_18,0,0,DAT_003a5d08,DAT_003a5cc8 * 0x200000` |
| user.c | 425551 | `if ((((int)(param_6 << 0x1e) < 0) && (local_4c._2_1_ != '\0')) && (local_74._2_1_ != '\0') \| ) { \| local_80 = (undefined4 *)0x1; \| FUN_003a4` |
| user.c | 429684 | `ushort local_30 [2]; \| undefined4 local_2c; \|  \| iVar3 = thunk_EXT_FUN_810ff868(0x200,0x44444444,s_spml_otf_gpos_c_003adb7c,0x11b); \| local_` |
| user.c | 430562 | `thunk_EXT_FUN_811018b0(s_gpos____buf____gpos_>script____T_003aefb8,DAT_003aefb0,0x56a); \| } \| local_34 = thunk_EXT_FUN_810ff868(0x100,0x4444` |
| user.c | 436944 | `thunk_EXT_FUN_80a72382(s_SFS_FAT___fileName_is_too_long___003b8c08,0xff); \| return 0; \| } \| iVar2 = thunk_EXT_FUN_810ff868(0x200,0x44444444,` |
| user.c | 436967 | `thunk_EXT_FUN_80a72382(s_SFS_FAT___matching_fileName_is_t_003b8c48,0xff); \| return 0; \| } \| iVar2 = thunk_EXT_FUN_810ff868(0x200,0x44444444,` |
| user.c | 437039 | `thunk_EXT_FUN_80a72382(DAT_003b8cfc,0xff); \| return (undefined2 *)0x0; \| } \| puVar2 = (undefined2 *)thunk_EXT_FUN_810ff868(0x200,0x44444444,` |
| user.c | 437636 | `param_3[0x11] = local_23a; \| *(undefined2 *)(param_3 + 0x12) = local_238; \| *(undefined2 *)(param_3 + 0x14) = local_234; \| thunk_EXT_FUN_810` |
| user.c | 439997 | `iVar5 = DAT_003c1564 + -0xe9; \| FUN_007ee69e(iVar5,&local_40); \| local_64 = &local_40; \| local_5c = iVar3 * 0x2000000; \| FUN_0025553c(0,1,0,` |
| user.c | 440001 | `FUN_0025553c(0,1,0,auStack_68,iVar3); \| FUN_007ee69e(iVar2,&local_28); \| local_64 = &local_28; \| local_5c = iVar3 * 0x2000000; \| FUN_0025553` |
| user.c | 442131 | `if (param_1 != 0) { \| FUN_0022840a(DAT_003c8524); \| local_30 = 0; \| local_2c = *(undefined4 *)(param_1 + 0x200); \| local_28 = (short)local_1` |
| user.c | 442226 | `local_18 = 0; \| local_14 = 0; \| FUN_007f6602(*(undefined4 *)(*(int *)(param_2 + 0x44) + param_3 * 0x10), \| *(undefined4 *)(param_1 + 0x200),` |
| user.c | 442488 | `uVar3 = uVar3 + 1 & 0xffff; \| } while (uVar3 < 6); \| } \| FUN_007ecbda(*(undefined4 *)(param_1 + 0x200),0xe070); \| FUN_003c8204(param_1,4,0);` |
| user.c | 442785 | `if (iVar2 != 0) { \| return; \| } \| FUN_000cf356(local_50,local_4c,param_4,*(undefined4 *)(param_1 + 0x200)); \| local_58 = (uint)local_4c[0]; ` |
| user.c | 442811 | `thunk_EXT_FUN_812bb7d4(1); \| iStack_54 = param_5; \| local_58 = param_4; \| FUN_000cf72c(0,&local_40,&local_34,*(undefined4 *)(param_1 + 0x200` |
| user.c | 442839 | `local_34 = 0; \| local_30 = 0; \| if (((param_1 != 0) && (param_3 != 0)) && (param_2 != 0)) { \| FUN_000cf356(local_2c,local_28,param_8,*(undef` |
| user.c | 442904 | `if (param_2 == 0) { \| return 0; \| } \| iVar2 = FUN_000cf356(local_3c,local_38,param_7,*(undefined4 *)(param_1 + 0x200)); \| if (iVar2 == 0) { ` |
| user.c | 442930 | `LAB_003c8d08: \| local_4c = CONCAT22(sVar1,(undefined2)local_4c); \| thunk_EXT_FUN_812bb7d4(1); \| FUN_000cf72c(0,&local_68,&local_50,*(undefin` |
| user.c | 443588 | `thunk_EXT_FUN_811037c8(&local_38,param_1,8,param_4,*(undefined4 *)(param_2 + 0x30)); \| iVar1 = FUN_00251a26(&local_30,local_38,uStack_34,*(u` |
| user.c | 443613 | `} \| thunk_EXT_FUN_812bb7d4(1); \| local_44 = param_3; \| FUN_000cf72c(0,&local_30,&local_28,*(undefined4 *)(param_2 + 0x200),iVar1); \| thunk_E` |
| user.c | 443699 | `if ((int)((uint)*(byte *)(*(int *)(iVar4 + 0x40) + param_4 * 0x20 + 4) << 0x1c) < 0) { \| local_38 = (undefined2)param_3; \| local_36 = (short` |
| user.c | 445839 | `} \| else if (param_3 == 1) { \| sVar2 = (short)(param_2 * 7 >> 3); \| if (param_2 * -0x20000000 != 0) { \| sVar2 = sVar2 + 1; \| } \| local_30[0]` |
| user.c | 450379 | `pcVar6 = *(char **)(iVar9 + 0x48); \| if (((*pcVar6 == 'A') \|\| (*pcVar6 == 'a')) && ((pcVar6[1] == 'T' \|\| (pcVar6[1] == 't')))) { \| if ((pcVa` |
| user.c | 450384 | `if ('\x02' < *pcVar3) { \| thunk_EXT_FUN_810fab10(0x13,DAT_003d2360 + -4,&DAT_003d1110,uVar10); \| } \| if (0x200 < uVar10) { \| FUN_00057c04();` |
| user.c | 454570 | `local_2c = 0; \| local_28 = 0; \| FUN_007f6602(*(undefined4 *)(*(int *)(param_2 + 0x44) + *(short *)(iVar6 + 0xc4) * 0x10), \| *(undefined4 *)(` |
| user.c | 454684 | `if (param_1 != 0) { \| local_84 = FUN_000ce570(*(undefined4 *)(param_1 + 0x14)); \| local_86 = *(undefined2 *)(param_1 + 0x1d2); \| iVar1 = FUN` |
| user.c | 454685 | `local_84 = FUN_000ce570(*(undefined4 *)(param_1 + 0x14)); \| local_86 = *(undefined2 *)(param_1 + 0x1d2); \| iVar1 = FUN_000d44a0(*(undefined4` |
| user.c | 454687 | `iVar1 = FUN_000d44a0(*(undefined4 *)(param_1 + 0x200)); \| if ((iVar1 != 0) && (iVar1 = FUN_0082005e(*(undefined4 *)(param_1 + 0x200)), iVar1` |
| user.c | 454688 | `if ((iVar1 != 0) && (iVar1 = FUN_0082005e(*(undefined4 *)(param_1 + 0x200)), iVar1 != 0)) { \| uVar2 = FUN_007f60c8(0x24); \| FUN_00820034(*(u` |
| user.c | 454695 | `if ((iVar1 != 0) && (iVar1 = FUN_003c80fc(param_1,0), iVar1 != 0)) { \| local_24 = CONCAT22(local_24._2_2_,*(undefined2 *)(iVar1 + 10)); \| } ` |
| user.c | 454700 | `FUN_003db25e(&local_18,param_1); \| local_20 = local_18; \| local_1c = uStack_14; \| FUN_00820008(*(undefined4 *)(param_1 + 0x200),&local_20); ` |
| user.c | 454701 | `local_20 = local_18; \| local_1c = uStack_14; \| FUN_00820008(*(undefined4 *)(param_1 + 0x200),&local_20); \| FUN_0081ffa6(*(undefined4 *)(para` |
| user.c | 454842 | `local_9c = (code *)CONCAT22(local_9c._2_2_ - sVar2,(short)local_9c - sVar1); \| local_a8 = (code *)FUN_003c8f6e(param_1,param_3,local_2c); \| ` |
| user.c | 454918 | `FUN_003c82b2(iVar4,4,1); \| iVar5 = FUN_003c80e0(param_1,4); \| if ((iVar5 == 0) && \| (iVar5 = FUN_000d3862(*(undefined4 *)(param_1 + 0x200)),` |
| user.c | 455075 | `thunk_EXT_FUN_811037c8(&local_46,param_1 + 0x2c,8); \| thunk_EXT_FUN_811037c8(auStack_3e,&local_60,8); \| local_2c = *(undefined4 *)(param_1 +` |
| user.c | 455095 | `local_1c = uStack_70; \| local_18 = uStack_6c; \| if (local_24 == 1) { \| iVar1 = FUN_000cf2c8(uStack_70,*(undefined4 *)(param_1 + 0x200)); \| i` |
| user.c | 455097 | `if (local_24 == 1) { \| iVar1 = FUN_000cf2c8(uStack_70,*(undefined4 *)(param_1 + 0x200)); \| if (iVar1 == 0) { \| iVar1 = FUN_000cf356(local_68` |
| user.c | 455189 | `(sVar1 + (short)local_2c) - (short)local_30); \| FUN_003db8a0(param_1,param_2); \| thunk_EXT_FUN_812bb7d4(1); \| FUN_000cf72c(0,&local_30,&loca` |
| user.c | 455266 | `local_34 = CONCAT22(local_34._2_2_ - local_1c._2_2_,(short)local_34 - (short)local_1c); \| local_40 = (undefined4 *)FUN_003c8f6e(param_1,*(un` |
| user.c | 455291 | ` \| local_10 = param_3; \| local_c = param_4; \| iVar3 = FUN_003c80e0(param_1,0x200); \| if (iVar3 != 0) { \| local_10 = 0; \| local_c = 0;` |
| user.c | 455308 | `uVar1 = local_10; \| local_10 = local_c; \| if ((((*(char *)(param_1 + 0x1c6) == '\0') && \| (iVar3 = FUN_003dac12(param_1,0x200000,uVar1), iVa` |
| user.c | 456203 | `thunk_EXT_FUN_811037c8(auStack_56,&local_44,8); \| local_7c = 0; \| uStack_78 = 0x3ea; \| local_74 = *(undefined4 *)(param_1 + 0x200); \| local_` |
| user.c | 456567 | ` \| iVar1 = FUN_003df0ae(); \| if (iVar1 != 0) { \| FUN_003daa60(iVar1,0x200,param_2); \| return; \| } \| return;` |
| user.c | 457045 | `if (iVar1 == 0) { \| iVar1 = *(int *)(param_1 + 0x160); \| } \| FUN_007f6602(iVar1,*(undefined4 *)(param_1 + 0x200),&local_20); \| } \| else { \| ` |
| user.c | 457110 | `local_30[uVar3] = (ushort)local_3c[uVar3]; \| } \| } \| FUN_000cde50(*(undefined4 *)(param_1 + 0x200),uVar5,local_30,uVar4,1); \| } \| return; \| ` |
| user.c | 458183 | `} \| iVar4 = *(int *)(param_1 + 0xa0); \| if ((iVar4 == 1) \|\| (iVar4 == 0)) { \| puVar5 = (undefined *)((uint)puVar5 \| 0x2000); \| } \| uVar6 = 6` |
| user.c | 459057 | `*(uint *)(param_1 + 0x224) = uVar3; \| *(uint *)(param_1 + 0x228) = param_2 - uVar1; \| if (uVar3 < 0x201) { \| thunk_EXT_FUN_811049dc(puVar2,0` |
| user.c | 459062 | `*(undefined4 *)(param_1 + 0x224) = 0; \| } \| else { \| thunk_EXT_FUN_811037c8(puVar2,param_2 - uVar1,0x200); \| *(int *)(param_1 + 0x224) = *(i` |
| user.c | 459063 | `} \| else { \| thunk_EXT_FUN_811037c8(puVar2,param_2 - uVar1,0x200); \| *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + -0x200; \| *(int` |
| user.c | 459064 | `else { \| thunk_EXT_FUN_811037c8(puVar2,param_2 - uVar1,0x200); \| *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + -0x200; \| *(int *)(` |
| user.c | 459122 | `*param_1 = param_1[1]; \| param_1[3] = uVar2 + (0x20 - param_2); \| if (param_1 + 0x86 <= puVar3) { \| if ((uint)param_1[0x89] < 0x200) { \| if ` |
| user.c | 459129 | `} \| } \| else { \| thunk_EXT_FUN_811037c8(param_1 + 6,param_1[0x8a],0x200); \| param_1[0x89] = param_1[0x89] + -0x200; \| param_1[0x8a] = param_` |
| user.c | 459130 | `} \| else { \| thunk_EXT_FUN_811037c8(param_1 + 6,param_1[0x8a],0x200); \| param_1[0x89] = param_1[0x89] + -0x200; \| param_1[0x8a] = param_1[0x` |
| user.c | 459131 | `else { \| thunk_EXT_FUN_811037c8(param_1 + 6,param_1[0x8a],0x200); \| param_1[0x89] = param_1[0x89] + -0x200; \| param_1[0x8a] = param_1[0x8a] ` |
| user.c | 459476 | `int local_1c [2]; \|  \| uVar3 = 0; \| thunk_EXT_FUN_811049dc(auStack_21c,0x200); \| local_1c[0] = 0; \| if (((param_2 != 0) && (iVar1 = FUN_003e` |
| user.c | 461112 | `undefined4 local_1c [2]; \|  \| bVar3 = false; \| thunk_EXT_FUN_811049dc(auStack_21c,0x200); \| local_1c[0] = 0; \| if ((((param_2 != 0) && (iVar` |
| user.c | 461185 | `undefined1 auStack_210 [516]; \|  \| uVar2 = 0; \| thunk_EXT_FUN_811049dc(auStack_210,0x200); \| iVar1 = FUN_003e16ce(param_1,auStack_210,0x100)` |
| user.c | 464418 | `uVar1 = (ushort)(0xf << ((0xb - uVar3) * 4 - 0x20 & 0xff)) \| uVar1; \| } \| } \| else if ((code *)&stack0x00000000 != IRQ) { \| local_18 = local` |
| user.c | 466773 | `uVar3 = (uVar4 + param_2) - uVar3; \| uVar4 = uVar3 & 0xffff; \| FUN_007f1a1e(param_5 + uVar4 * 2,0xff - uVar4,auStack_3c,uVar5,uVar5); \| *(us` |
| user.c | 468934 | `puVar2[2] = 0x28; \| puVar2[3] = 0x50; \| puVar2[7] = 0x180; \| puVar2[8] = 0x200; \| puVar2[9] = 0x301; \| } \| return 0;` |
| user.c | 468977 | `*(int *)(param_1 + 0x40) = iVar1; \| if (iVar1 != 0) { \| *(undefined4 *)(iVar1 + 4) = 0x280; \| **(undefined4 **)(param_1 + 0x40) = 0x200; \| *` |
| user.c | 469582 | `psVar7 = psVar7 + 1; \| piVar9 = piVar9 + 1; \| } while (sVar2 < 0xf6); \| uVar5 = (uint)lVar1 >> 0x13 \| (int)((ulonglong)lVar1 >> 0x20) * 0x20` |
| user.c | 469614 | `psVar7 = psVar7 + 1; \| piVar9 = piVar9 + 1; \| } while (sVar2 < 0xf6); \| uVar6 = (uint)lVar1 >> 0x13 \| (int)((ulonglong)lVar1 >> 0x20) * 0x20` |
| user.c | 473976 | `thunk_EXT_FUN_811049dc(&local_98,0x60); \| local_ac = 0; \| local_a8 = 0; \| iVar7 = param_4 + 0x2000; \| local_a4 = 0; \| iVar9 = 0; \| local_a0 ` |
| user.c | 481397 | `if (0 < *(int *)(param_1 + 0xf0)) { \| do { \| iVar4 = param_1 + iVar7 * 8 + iVar2 * 4; \| FUN_000d9262((*(int *)(iVar4 + 0x124) + (uint)*(usho` |
| user.c | 481443 | `if (0 < *(int *)(param_1 + 0xf0)) { \| do { \| iVar7 = param_1 + iVar2 * 8; \| FUN_000d9262((*(int *)(iVar7 + 0x124) + (uint)*(ushort *)(iVar7 ` |
| user.c | 481962 | `iVar1 = (iVar1 + iVar2) - (iVar2 + 0x80000U & 0xfff00000); \| } \| else { \| iVar1 = iVar1 + 0x20000; \| } \| iVar1 = iVar1 >> 0x12; \| }` |
| user.c | 482024 | `piStack_28 = param_4; \| local_3c = FUN_0007b2a6(); \| iVar6 = DAT_00401ff0; \| local_3c = local_3c + -0x200000; \| if (local_44 < iVar2) { \| iV` |
| user.c | 482027 | `local_3c = local_3c + -0x200000; \| if (local_44 < iVar2) { \| iVar2 = FUN_0007b2a6(iVar2); \| iVar6 = iVar2 + -0x200000 + iVar6; \| if (0 < iVa` |
| user.c | 483617 | ` \| local_20 = 0; \| local_1c[0] = 0; \| thunk_EXT_FUN_811049dc(auStack_220,0x200); \| if (param_1 != 0) { \| uVar2 = FUN_007f1d80(param_1); \| FU` |
| user.c | 483673 | `thunk_EXT_FUN_811049dc(&local_50,0x30); \| local_3c = 0; \| local_38 = DAT_00403720 + -0x89; \| local_34 = local_38 * 0x20000000; \| local_30 = ` |
| user.c | 483701 | `undefined1 auStack_224 [516]; \|  \| thunk_EXT_FUN_811049dc(auStack_644,0x420); \| thunk_EXT_FUN_811049dc(auStack_224,0x200); \| iVar5 = 0; \| uV` |
| user.c | 484696 | `int local_28; \|  \| if (param_1 != 0) { \| iVar1 = *(int *)(param_1 + 0x200); \| if (iVar1 == 0xe) { \| iVar1 = 1; \| }` |
| user.c | 485350 | `undefined1 auStack_210 [512]; \|  \| thunk_EXT_FUN_811049dc(auStack_828,0x618); \| thunk_EXT_FUN_811049dc(auStack_210,0x200); \| if (param_2 < 0` |
| user.c | 485768 | `sVar1 = *(short *)(param_1 + 0x68); \| *(short *)(param_1 + 0x68) = sVar1 >> 1; \| if (param_2 != 0) { \| *(ushort *)(param_1 + 0x68) = sVar1 >` |
| user.c | 486328 | `iVar3 = SignedSaturate(param_1 * 0x10000 + -0x550000,0x20); \| SignedDoesSaturate(iVar3,0x20); \| if (iVar3 >> 0x10 < 1) { \| iVar3 = SignedSat` |
| user.c | 486361 | `SignedDoesSaturate(param_3,0x20); \| param_3 = param_3 >> 0x10; \| } \| iVar3 = SignedSaturate(param_1 * 0x20000,0x20); \| SignedDoesSaturate(iV` |
| user.c | 486367 | `SignedDoesSaturate(iVar3,0x20); \| iVar3 = SignedSaturate((iVar3 >> 0x10) * 0x10000 + param_2 * 0x10000,0x20); \| SignedDoesSaturate(iVar3,0x2` |
| user.c | 486370 | `iVar4 = SignedSaturate(param_3 * 0x10000 + -0x20000,0x20); \| SignedDoesSaturate(iVar4,0x20); \| iVar3 = iVar3 >> 0x10; \| iVar1 = SignedSatura` |
| user.c | 486385 | `} \| iVar4 = SignedSaturate(param_3 * 0x10000 + 0x10000,0x20); \| SignedDoesSaturate(iVar4,0x20); \| iVar2 = SignedSaturate((iVar4 >> 0x10) * 0` |
| user.c | 486406 | `} \| iVar1 = SignedSaturate(param_1 * 0x10000 + param_4 * -0x10000,0x20); \| SignedDoesSaturate(iVar1,0x20); \| iVar3 = SignedSaturate((iVar1 >` |
| user.c | 486410 | `SignedDoesSaturate(iVar3,0x20); \| iVar3 = SignedSaturate((iVar3 >> 0x10) * 0x10000 + (iVar1 >> 0x10) * 0x10000,0x20); \| SignedDoesSaturate(i` |
| user.c | 489174 | `local_34 = 0; \| local_30 = 0; \| local_24 = 0; \| thunk_EXT_FUN_811049dc(auStack_250,0x200); \| iVar6 = DAT_00411738; \| local_44 = 1; \| local_3` |
| user.c | 490223 | `undefined1 auStack_3c [24]; \|  \| thunk_EXT_FUN_811049dc(auStack_164,0x100); \| thunk_EXT_FUN_811049dc(auStack_6a0,0x200); \| local_40[0] = 0; ` |
| user.c | 490260 | `puVar13 = auStack_6a0; \| if ((local_19c & 1) != 0) { \| thunk_EXT_FUN_811049dc(auStack_164,0x100); \| thunk_EXT_FUN_811049dc(auStack_6a0,0x200` |
| user.c | 490274 | `local_398 = 0; \| FUN_0083652e(iVar2,&local_3a0); \| thunk_EXT_FUN_811049dc(auStack_4a0,0x100); \| thunk_EXT_FUN_811049dc(auStack_6a0,0x200); \|` |
| user.c | 490316 | `} \| thunk_EXT_FUN_811049dc(auStack_4a0,0x100); \| thunk_EXT_FUN_811049dc(&local_3a0,0x100); \| thunk_EXT_FUN_811049dc(auStack_6a0,0x200); \| iV` |
| user.c | 490335 | `FUN_00414c60(in_stack_00000000,iVar4,0,local_40,puVar13,uVar1); \| thunk_EXT_FUN_811049dc(auStack_4a0,0x100); \| thunk_EXT_FUN_811049dc(&local` |
| user.c | 491062 | `uVar4 = FUN_000d0460(iVar2); \| iVar5 = FUN_000d08c0(uVar4,uVar3); \| if ((iVar5 != 0) && (uVar6 = FUN_0009c3bc(iVar2), param_3 >> 10 <= uVar6` |
| user.c | 491064 | `if ((iVar5 != 0) && (uVar6 = FUN_0009c3bc(iVar2), param_3 >> 10 <= uVar6)) { \| iVar5 = thunk_EXT_FUN_810ffa74(0x200,s_mmivcard_c_004165b0,0x` |
| user.c | 491538 | `uVar10 = 0xff; \| } \| *(byte *)(param_3 + 9) = (*(byte *)(param_3 + 9) & 0x7f) + 0x80; \| thunk_EXT_FUN_810f7460(param_4 + 2,0x200); \| *param_` |
| user.c | 495401 | `else { \| *param_7 = 0x7fff; \| sVar1 = *(short *)(iVar8 + iVar16 * 2); \| if (sVar1 < 0x2000) { \| *param_6 = (short)((int)*param_6 * (int)sVar` |
| user.c | 495550 | `uVar13 = (uVar17 >> 0xe \| iVar5 << 0x12) + 0x1000; \| local_60 = 0x4000000 - uVar17; \| uStack_5c = -(uint)(0x4000000 < uVar17) - iVar5; \| loc` |
| user.c | 495552 | `uStack_5c = -(uint)(0x4000000 < uVar17) - iVar5; \| local_50 = (-(uint)(iVar10 != 0) - (iVar10 >> 0x1f)) * 0x2000 \| (uint)-iVar10 >> 0x13; \| ` |
| user.c | 495636 | `if (2 < uVar2) { \| return 1; \| } \| thunk_EXT_FUN_811049dc(auStack_220,0x200); \| local_20[0] = 0xff; \| uVar1 = FUN_007f1d80(DAT_0041fd7c); \| ` |
| user.c | 496689 | `(iVar5 = thunk_EXT_FUN_810ffa74(0x20c,s_mmivirtualarray_c_0041fdac,0x82c), iVar5 == 0)) \| break; \| thunk_EXT_FUN_811049dc(iVar5,0x20c); \| iV` |
| user.c | 496859 | `return iVar8; \| } \| thunk_EXT_FUN_811049dc(iVar5,0x20c); \| iVar4 = FUN_0041f974(iVar5,iVar5 + 0x200); \| *(int *)(param_1 + 0x240) = iVar4; \|` |
| user.c | 496930 | `thunk_EXT_FUN_81104074 \| (0x10,DAT_00420f90 + -10,s_MMIVIRTUALARRAY_Read_check_mem_1_0042066c + 0x20) \| ; \| local_20 = (code *)(uint)*(ushor` |
| user.c | 496933 | `local_20 = (code *)(uint)*(ushort *)(iVar2 + 0x200); \| FUN_007f1a1e(param_3,0xff,iVar2); \| uVar1 = DAT_00420f94; \| *(undefined2 *)param_4 = ` |
| user.c | 497087 | `} \| } \| FUN_0042028a(param_1,local_28,iVar5); \| iVar6 = FUN_000d0192(iVar4,*(undefined2 *)(iVar4 + 0x200),iVar5, \| *(undefined2 *)(iVar5 + 0` |
| user.c | 497088 | `} \| FUN_0042028a(param_1,local_28,iVar5); \| iVar6 = FUN_000d0192(iVar4,*(undefined2 *)(iVar4 + 0x200),iVar5, \| *(undefined2 *)(iVar5 + 0x200` |
| user.c | 497336 | `if ((param_1 != 0) && (param_2 != 0)) { \| do { \| FUN_003b9a0a(param_1,0,&local_24); \| iVar1 = FUN_0042a91a(param_1,auStack_274,0x200,&local_` |
| user.c | 497344 | `LAB_00422174: \| local_2c = 0; \| local_30 = param_2; \| thunk_EXT_FUN_811049dc(auStack_274,0x200); \| thunk_EXT_FUN_811049dc(local_70,0x40); \| ` |
| user.c | 497355 | `} \| else { \| do { \| iVar2 = FUN_0042a91a(param_1,auStack_274,0x200,&local_28); \| if (iVar2 != 0) { \| uVar3 = 4; \| break;` |
| user.c | 497411 | `uint local_2c [2]; \|  \| uVar3 = 0; \| thunk_EXT_FUN_811049dc(auStack_274,0x200); \| local_2c[0] = 0; \| iVar4 = 0; \| if ((param_1 != 0) && (par` |
| user.c | 497417 | `if ((param_1 != 0) && (param_2 != 0)) { \| local_30 = 0; \| local_34 = param_2; \| thunk_EXT_FUN_811049dc(auStack_274,0x200); \| thunk_EXT_FUN_8` |
| user.c | 497429 | `else { \| do { \| local_2c[0] = 0; \| iVar2 = FUN_003b98ca(param_1,auStack_274,0x200,local_2c,0); \| if (iVar2 != 0) { \| uVar3 = 0xd; \| break;` |
| user.c | 497434 | `uVar3 = 0xd; \| break; \| } \| if (local_2c[0] < 0x200) { \| iVar4 = 1; \| } \| iVar2 = FUN_00859284(iVar1,auStack_274,local_2c[0],iVar4);` |
| user.c | 497774 | `*puVar1 = param_2; \| puVar1[0x82] = param_3; \| puVar1[0x83] = 0; \| if (0x200 < param_2) { \| uVar4 = 0xf; \| goto LAB_004228c6; \| }` |
| user.c | 499156 | `} \| FUN_00801630(4); \| iVar1 = *DAT_00423ff4 + DAT_00423ff4[1] * 0x20c; \| FUN_001113a2(iVar1,*(undefined2 *)(iVar1 + 0x200),*(undefined4 *)(` |
| user.c | 499459 | `{ \| undefined4 local_208 [129]; \|  \| thunk_EXT_FUN_811049dc(local_208,0x200); \| FUN_00801d52(&DAT_00150000,local_208); \| return local_208[0]` |
| user.c | 500120 | `thunk_EXT_FUN_811049dc(local_70,0x18); \| thunk_EXT_FUN_811049dc(local_13c,0x6c); \| local_70[0] = 0x1c; \| local_6c = local_6c \| 0x200; \| loca` |
| user.c | 502709 | ` \| iVar1 = 0; \| if (param_1 != (undefined4 *)0x0) { \| *param_1 = 0x2000; \| iVar1 = thunk_EXT_FUN_810ffa74(0x2000,s_drm_common_c_0042aacc,0x2` |
| user.c | 502710 | `iVar1 = 0; \| if (param_1 != (undefined4 *)0x0) { \| *param_1 = 0x2000; \| iVar1 = thunk_EXT_FUN_810ffa74(0x2000,s_drm_common_c_0042aacc,0x2d5)` |
| user.c | 504195 | `if ((iVar2 == 0xf021) \|\| (iVar2 == 0xe003)) { \| piVar6 = local_20 + 2; \| *piVar1 = *piVar5; \| uVar3 = 0x20000000; \| } \| else if (iVar2 == 0x` |
| user.c | 504542 | `*param_2 = *param_2 \| 0x10000; \| } \| if ((int)(param_1 << 0xb) < 0) { \| *param_2 = *param_2 \| 0x20000; \| } \| if ((int)(param_1 << 0x19) < 0)` |
| user.c | 504545 | `*param_2 = *param_2 \| 0x20000; \| } \| if ((int)(param_1 << 0x19) < 0) { \| *param_2 = *param_2 \| 0x200; \| } \| if ((int)(param_1 << 0x18) < 0) ` |
| user.c | 504730 | `thunk_EXT_FUN_811018b0(&DAT_0042fec8,s_guistring_c_0042febc,0x23a); \| } \| iVar1 = FUN_00431f5a(param_1,0x10); \| if ((iVar1 != 0) && (iVar1 =` |
| user.c | 505748 | `local_2c = param_3; \| puStack_28 = param_4; \| local_80 = (undefined4 ***)FUN_00431f5a(param_7,0x10); \| local_44 = FUN_00431f5a(param_7,0x200` |
| user.c | 508831 | `undefined2 local_1c [2]; \|  \| thunk_EXT_FUN_811049dc(auStack_428,0x20c); \| thunk_EXT_FUN_811049dc(auStack_21c,0x200); \| local_1c[0] = 0; \| t` |
| user.c | 510260 | `uVar7 = 0x411; \| } \| if (*(int *)(param_1 + 0xd0) == 0) { \| uVar7 = uVar7 \| 0x2000; \| } \| if ((iVar9 == 1) \|\| (iVar9 == 7)) { \| local_88 = 1` |
| user.c | 511305 | `iVar6 = FUN_000ce782(local_28); \| local_58 = 0; \| local_50 = 0; \| thunk_EXT_FUN_811049dc(auStack_45c,0x200); \| thunk_EXT_FUN_811049dc(auStac` |
| user.c | 511306 | `local_58 = 0; \| local_50 = 0; \| thunk_EXT_FUN_811049dc(auStack_45c,0x200); \| thunk_EXT_FUN_811049dc(auStack_25c,0x200); \| local_34 = 0; \| lo` |
| user.c | 511327 | `FUN_007f3cfa(local_4c,local_40,0); \| FUN_003e0abe(iVar5,uVar1); \| FUN_007f3cfa(local_4c,uVar3,0); \| thunk_EXT_FUN_811049dc(auStack_45c,0x200` |
| user.c | 511329 | `FUN_007f3cfa(local_4c,uVar3,0); \| thunk_EXT_FUN_811049dc(auStack_45c,0x200); \| local_58._0_2_ = 0xff; \| thunk_EXT_FUN_811049dc(auStack_25c,0` |
| user.c | 511334 | `FUN_00116e8a(2,local_5c,&local_58); \| FUN_002a2906(&local_5c,local_54,&local_50); \| FUN_003e0a70(local_44,&local_54,0); \| thunk_EXT_FUN_8110` |
| user.c | 511336 | `FUN_003e0a70(local_44,&local_54,0); \| thunk_EXT_FUN_811049dc(auStack_45c,0x200); \| local_58._0_2_ = 0xff; \| thunk_EXT_FUN_811049dc(auStack_2` |
| user.c | 511341 | `FUN_00116e8a(0,local_5c,&local_58); \| FUN_002a2906(&local_5c,local_54,&local_50); \| FUN_003e0a70(local_48,&local_54,0); \| thunk_EXT_FUN_8110` |
| user.c | 511343 | `FUN_003e0a70(local_48,&local_54,0); \| thunk_EXT_FUN_811049dc(auStack_45c,0x200); \| local_58._0_2_ = 0xff; \| thunk_EXT_FUN_811049dc(auStack_2` |
| user.c | 511348 | `FUN_00116e8a(1,local_5c,&local_58); \| FUN_002a2906(&local_5c,local_54,&local_50); \| FUN_003e0a70(iVar2,&local_54,0); \| thunk_EXT_FUN_811049d` |
| user.c | 511350 | `FUN_003e0a70(iVar2,&local_54,0); \| thunk_EXT_FUN_811049dc(auStack_45c,0x200); \| local_58._0_2_ = 0xff; \| thunk_EXT_FUN_811049dc(auStack_25c,` |
| user.c | 511497 | `iVar4 = FUN_000ce584(param_1,DAT_004384d0 + 0xb); \| local_38 = (undefined1 *)0x0; \| local_34[0] = 0; \| thunk_EXT_FUN_811049dc(local_238,0x20` |
| user.c | 517228 | `return; \| } \| iVar1 = thunk_EXT_FUN_810ffa74 \| (0x200,s_mmisms_receive_c_004412bc, \| s_http_HttpTracePostParam_accept_c_000012fc + 0x28); \| ` |
| user.c | 517232 | `s_http_HttpTracePostParam_accept_c_000012fc + 0x28); \| local_20 = param_4; \| if (iVar1 != 0) { \| thunk_EXT_FUN_810f7460(iVar1,0x200); \| loca` |
| user.c | 518224 | `thunk_EXT_FUN_80b22dcc((local_ec & 0x7fff) >> 0xc,local_ec & 3,local_f0 & 0xffff,uVar3); \| *(char *)(DAT_0044457c + 6) = *(char *)(DAT_00444` |
| user.c | 519363 | `(iVar1 = thunk_EXT_FUN_810ffa74(0x202,s__mmiapwin_set_c_00446507 + 1,0x80e), iVar1 != 0)) { \| thunk_EXT_FUN_810f7460(iVar1,0x202); \| if (0x1` |
| user.c | 519365 | `if (0x1ff < param_2) { \| param_2 = 0x200; \| } \| *(short *)(iVar1 + 0x200) = (short)param_2; \| thunk_EXT_FUN_810f7460(iVar1); \| FUN_007f19f0(` |
| user.c | 519367 | `} \| *(short *)(iVar1 + 0x200) = (short)param_2; \| thunk_EXT_FUN_810f7460(iVar1); \| FUN_007f19f0(iVar1,param_1,*(undefined2 *)(iVar1 + 0x200)` |
| user.c | 521268 | `return 1; \| } \| LAB_004485da: \| FUN_00432afa(iVar3,(int)param_2 + 0x112,0x200,0); \| uVar2 = thunk_EXT_FUN_810ff150((int)param_2 + 0x112); \| ` |
| user.c | 521496 | `return 1; \| } \| LAB_00448948: \| FUN_00432afa(iVar3,(int)param_2 + 0x112,0x200,0); \| uVar2 = thunk_EXT_FUN_810ff150((int)param_2 + 0x112); \| ` |
| user.c | 521714 | `bVar12 = iVar6 == 0; \| LAB_00448c2c: \| if (bVar12) goto LAB_00448f84; \| FUN_00432afa(local_2c,(int)param_1 + 0x112,0x200,0); \| uVar5 = thunk` |
| user.c | 521735 | `iVar6 = FUN_004479bc(puVar7,0xb); \| bVar12 = true; \| if (iVar6 == 0) goto LAB_00448c2c; \| FUN_00432afa(iVar6,param_1 + 0x33f,0x200,0); \| uVa` |
| user.c | 521756 | `iVar6 = FUN_004479bc(puVar7,0xd); \| if (iVar6 != 0) { \| piVar9 = param_1 + 0xd3; \| FUN_00432afa(iVar6,piVar9,0x200,0); \| uVar5 = thunk_EXT_F` |
| user.c | 521858 | `} \| iVar6 = FUN_004479bc(puVar7,0x13); \| if (iVar6 != 0) { \| FUN_00432afa(iVar6,param_1 + 0x1bc,0x200,0); \| uVar5 = thunk_EXT_FUN_810ff150(p` |
| user.c | 521899 | `} \| iVar6 = FUN_004479bc(puVar7,0x16); \| if (iVar6 == 0) goto LAB_00448f84; \| FUN_00432afa(iVar6,param_1 + 0x27e,0x200,0); \| uVar5 = thunk_E` |
| user.c | 522129 | `undefined2 local_1c [4]; \|  \| uVar4 = 0; \| thunk_EXT_FUN_811049dc(auStack_224,0x200); \| iVar1 = DAT_00449d10; \| local_1c[0] = 0xff; \| local_` |
| user.c | 523200 | `else if (*(int *)(puVar3 + 4) == 2) { \| local_30 = 0; \| local_4c = 0; \| thunk_EXT_FUN_811049dc(&local_250,0x200); \| local_4c = CONCAT22(loca` |
| user.c | 523293 | ` \| thunk_EXT_FUN_811049dc(auStack_94,0x7c); \| local_18 = 0; \| thunk_EXT_FUN_811049dc(auStack_294,0x200); \| local_14[0] = 0xff; \| puVar2 = (u` |
| user.c | 523371 | `ushort local_1c [4]; \|  \| uVar2 = 0; \| thunk_EXT_FUN_811049dc(auStack_220,0x200); \| local_1c[0] = 0xff; \| thunk_EXT_FUN_811049dc(local_580,0` |
| user.c | 523538 | `uVar1 = *(undefined1 *)(puVar5 + 2); \| uVar4 = *(undefined2 *)(puVar5 + 1); \| uVar2 = *(undefined2 *)((int)puVar5 + 6); \| thunk_EXT_FUN_8110` |
| user.c | 523835 | `undefined2 local_28 [2]; \| undefined4 local_24 [2]; \|  \| thunk_EXT_FUN_811049dc(auStack_434,0x200); \| local_28[0] = 0xff; \| thunk_EXT_FUN_81` |
| user.c | 523877 | `undefined2 local_20 [2]; \| undefined4 local_1c [2]; \|  \| thunk_EXT_FUN_811049dc(auStack_220,0x200); \| local_20[0] = 0xff; \| local_1c[0] = DA` |
| user.c | 525938 | `*(uint *)(param_1 + 0xc54) = uVar3; \| thunk_EXT_FUN_811037c8(param_1 + 0x1b0,*(undefined4 *)(param_1 + 0x174)); \| thunk_EXT_FUN_811037c8 \| (` |
| user.c | 527324 | `undefined4 uStack_2c; \|  \| thunk_EXT_FUN_811049dc(&local_58,0x20); \| thunk_EXT_FUN_811049dc(local_258,0x200); \| sVar7 = 0; \| uVar6 = 1; \| sV` |
| user.c | 534982 | `piVar1[4] = 0x10; \| piVar1[5] = 0; \| piVar1[6] = 8; \| piVar1[7] = 0x200; \| piVar1[8] = 0x100; \| piVar1[9] = 0; \| piVar1[10] = 0;` |
| user.c | 537815 | `sVar3 = (short)DAT_0046ab78; \| sVar2 = (short)(uVar9 >> 0x10); \| sVar6 = (short)((uint)DAT_0046ab7c >> 0x10); \| uVar11 = ((int)(short)uVar8 ` |
| user.c | 537829 | `uVar7 = (int)uVar11 >> 0xf; \| uVar11 = uVar11 & 0x7fff; \| uVar8 = uVar11 \| uVar7 << 0x10; \| uVar12 = ((int)(short)uVar9 * (int)sVar3 + (int)` |
| user.c | 538514 | `int iVar9; \|  \| uVar2 = *param_1; \| *param_2 = 0x200000; \| piVar4 = param_2 + 2; \| param_2[1] = (uint)uVar2 * -0x80; \| iVar6 = 8;` |
| user.c | 538541 | `} while (iVar6 < 0x29); \| puVar3 = puVar3 + -0xf; \| uVar2 = *puVar3; \| *piVar4 = 0x200000; \| piVar5 = piVar4 + 2; \| piVar4[1] = (uint)uVar2 ` |
| user.c | 538599 | `uVar2 = *param_1; \| *param_2 = 0x800000; \| piVar4 = param_2 + 2; \| param_2[1] = (uint)uVar2 * -0x200; \| iVar6 = 8; \| do { \| puVar3 = param_1` |
| user.c | 538619 | `iVar9 = iVar8; \| } while (iVar8 != 0 && bVar1); \| piVar4 = (int *)((int)piVar5 + iVar6); \| *piVar5 = iVar7 + (short)uVar2 * -0x200; \| iVar6 ` |
| user.c | 538626 | `uVar2 = *puVar3; \| piVar4[2] = 0x800000; \| piVar5 = piVar4 + 4; \| piVar4[3] = (uint)uVar2 * -0x200; \| iVar6 = 8; \| do { \| puVar3 = puVar3 + ` |
| user.c | 538645 | `iVar9 = iVar8; \| } while (iVar8 != 0 && bVar1); \| piVar5 = (int *)((int)piVar4 + iVar6); \| *piVar4 = iVar7 + (short)uVar2 * -0x200; \| iVar6 ` |
| user.c | 540194 | `iVar2 = (int)((ulonglong)((longlong)iVar39 * (longlong)(iVar18 - iVar2)) >> 0x20) * 4 - iVar36; \| iVar3 = iVar36 * 4 - iVar3; \| piVar1[0x208` |
| user.c | 540260 | `uint uVar23; \| int iVar24; \|  \| piVar6 = param_2 + 0x200; \| piVar7 = param_2 + 0x100; \| piVar9 = param_2 + 0x300; \| iVar24 = 0x80;` |
| user.c | 540328 | `sVar1 = (short)uVar8; \| sVar4 = (short)((uint)uVar11 >> 0x10); \| sVar2 = (short)uVar11; \| iVar22 = piVar5[0x200] + piVar5[0x300]; \| iVar17 =` |
| user.c | 540329 | `sVar4 = (short)((uint)uVar11 >> 0x10); \| sVar2 = (short)uVar11; \| iVar22 = piVar5[0x200] + piVar5[0x300]; \| iVar17 = piVar5[0x200] - piVar5[` |
| user.c | 540332 | `iVar17 = piVar5[0x200] - piVar5[0x300]; \| iVar20 = piVar5[0x201] + piVar5[0x301]; \| iVar18 = piVar5[0x201] - piVar5[0x301]; \| piVar5[0x200] ` |
| user.c | 540425 | `(int)((uint6)((int6)iVar17 * (int6)sVar2) >> 0x10); \| sVar2 = (short)((uint)uVar8 >> 0x10); \| sVar1 = (short)uVar8; \| piVar7[0x200] = \| (int` |
| user.c | 540462 | `piVar6[0x101] = iVar10 + iVar14 >> 1; \| *piVar6 = iVar12 + iVar18 >> 1; \| piVar6[1] = iVar17 + iVar16 >> 1; \| piVar6[0x200] = iVar12 - iVar1` |
| user.c | 540601 | `iVar20 = param_2[7] - param_2[3]; \| *param_1 = iVar12 + iVar18; \| param_1[1] = iVar17 + iVar16; \| param_1[0x200] = iVar12 - iVar18; \| param_` |
| user.c | 542184 | `param_1 = param_1 + ((1 << (uVar3 & 0xff)) >> 1) >> (uVar3 & 0xff); \| } \| piVar4 = (int *)(param_2 + iVar1 * 4); \| iVar1 = (*piVar4 * (0x200` |
| user.c | 550020 | `case -0x201: \| pcVar1 = s_Stream_ID_is_invalid_00762b98; \| break; \| case -0x200: \| pcVar1 = s_The_transmission_is_not_allowed_f_00762b68; \| ` |
| user.c | 555890 | `return 0xff; \| } \| if (*pcVar2 == '\0') { \| FUN_0035189e(*puVar1,*(undefined4 *)(param_1 + 0x200)); \| FUN_00351870(*puVar1,iVar5,0xc00); \| i` |
| user.c | 555903 | `} while (iVar6 < 0x300); \| } \| else { \| FUN_00019b5c(puVar1[2],iVar5,*(int *)(param_1 + 0x204) * 0xc,*(undefined4 *)(param_1 + 0x200)) \| ; \|` |
| user.c | 555946 | `uVar3 << 0x18 \| (uVar3 >> 8 & 0xff) << 0x10 \| (uVar3 >> 0x10 & 0xff) << 8 \| \| (uint)*(byte *)(iVar7 + 3); \| iVar6 = iVar6 + 1; \| } while (iV` |
| user.c | 556899 | `iVar4 = iVar4 + uVar15 * 0x250; \| pcVar6 = (char *)0x76f074; \| *(undefined4 *)(iVar4 + 0x1b4) = 0; \| iVar8 = FUN_003518c0(*puVar3,0,0x20000,` |
| user.c | 557087 | `iVar4 = iVar4 + DAT_0076f168; \| bVar18 = iVar4 == 0; \| } \| if ((!bVar18) && (iVar4 != 0x20000f6 && iVar4 != 0x20000fd)) goto LAB_0076ef1c; \|` |
| user.c | 557196 | `iVar4 = iVar4 + uVar5 * 0x250; \| pcVar8 = (char *)0x76f074; \| *(undefined4 *)(iVar4 + 0x1b4) = 0; \| iVar6 = FUN_003518c0(*puVar3,0,0x20000,0` |
| user.c | 557232 | `} \| pcVar8 = (char *)0x76f084; \| *(undefined4 *)(iVar4 + uVar5 * 0x250 + 0x1b4) = 1; \| iVar4 = FUN_003518c0(*puVar3,1,0x10000,uVar9,0x2000);` |
| user.c | 557473 | `puVar2 = DAT_0076fb04; \| iVar5 = *(int *)(param_1 + 0x208) + 0xff; \| *(int *)(param_1 + 0x208) = iVar5; \| FUN_0035189e(*puVar2,*(int *)(para` |
| user.c | 557561 | `uVar7 << 0x18 \| (uVar7 >> 8 & 0xff) << 0x10 \| (uVar7 >> 0x10 & 0xff) << 8 \| \| (uint)*(byte *)(iVar5 + 3); \| iVar3 = iVar3 + 1; \| } while (iV` |
| user.c | 557871 | `puVar10[0x59] * puVar10[0x66] + (int)((ulonglong)lVar1 >> 0x20) + \| (uint)(0xdfffffff < uVar16); \| uVar8 = uVar5 >> 0x1e; \| uVar2 = uVar16 +` |
| user.c | 557905 | `puVar10[0x59] * puVar10[0x66] + (int)((ulonglong)lVar1 >> 0x20) + \| (uint)(0xdfffffff < uVar16); \| uVar5 = uVar11 >> 0x1e; \| uVar11 = uVar16` |
| user.c | 558134 | `uVar5 = puVar10[0x58] * puVar10[0x67] + \| puVar10[0x59] * puVar10[0x66] + (int)((ulonglong)lVar1 >> 0x20) + \| (uint)(0xdfffffff < uVar11); \|` |
| user.c | 558266 | `uVar4 << 0x18 \| (uVar4 >> 8 & 0xff) << 0x10 \| (uVar4 >> 0x10 & 0xff) << 8 \| \| (uint)*(byte *)(iVar5 + 3); \| iVar2 = iVar2 + 1; \| } while (iV` |
| user.c | 558329 | `uVar4 << 0x18 \| (uVar4 >> 8 & 0xff) << 0x10 \| (uVar4 >> 0x10 & 0xff) << 8 \| \| (uint)*(byte *)(iVar5 + 3); \| iVar2 = iVar2 + 1; \| } while (iV` |
| user.c | 558369 | `puVar1 = DAT_00770c0c; \| iVar4 = *(int *)(param_1 + 0x208) + -0xff; \| *(int *)(param_1 + 0x208) = iVar4; \| iVar4 = *(int *)(param_1 + 0x200)` |
| user.c | 558597 | `uVar2 = param_2[0x58] * iVar3 + param_2[0x59] * uVar2 + (int)((ulonglong)lVar9 >> 0x20) + \| (uint)(0xdfffffff < uVar6); \| uVar4 = uVar2 >> 0` |
| user.c | 558609 | `param_2[0x59] * param_2[0x66] + (int)((ulonglong)lVar9 >> 0x20) + \| (uint)(0xdfffffff < uVar6); \| uVar4 = uVar2 >> 0x1e; \| bVar7 = param_3 <` |
| user.c | 558697 | `} \| lVar1 = (ulonglong)*(uint *)(iVar4 + 0x160) * (ulonglong)*(uint *)(iVar4 + 0x198); \| uVar7 = (uint)lVar1; \| uVar7 = uVar7 + 0x20000000 >` |
| user.c | 560825 | `iVar7 = *(int *)(iVar9 + 0x138); \| if (iVar7 == 0) { \| *(undefined4 *)(iVar9 + 0x58) = 0x100; \| *(uint *)(&DAT_00001054 + iVar9) = *(uint *)` |
| user.c | 564685 | `return 0xff; \| } \| uVar4 = (((int)pcVar2 >> 0x1f) - 1U) + (uint)((char *)0x17 < pcVar2); \| uVar8 = (uint)(pcVar2 + -0x18) >> 3 \| uVar4 * 0x2` |
| user.c | 564690 | `uVar8 = 0x400; \| } \| uVar14 = (uVar14 - 1) + (uint)((char *)0x1f < pcVar13); \| uVar6 = uVar6 - 0x18 >> 3 \| uVar14 * 0x20000000; \| uVar4 = *(` |
| user.c | 565648 | `*(undefined8 *)(param_2 + 0x10) = uVar14; \| uVar6 = iVar5 + (uint)((char *)0x7 < pcVar9 + -0x14) + -2 + \| (uint)((char *)0x3 < pcVar9 + -0x1` |
| user.c | 565654 | `uVar7 = 0x400; \| } \| uVar6 = (uVar13 - 1) + (uint)((char *)0x1f < pcVar12); \| uVar13 = uVar3 - 0x18 >> 3 \| uVar6 * 0x20000000; \| uVar3 = par` |
| user.c | 567738 | `local_68 = 0; \| local_60 = 0; \| local_28 = 0; \| local_2c = local_3c << 9 \| 0x2000U \| local_40 << 8; \| do { \| iVar5 = iVar13; \| if (*(int *)(` |
| user.c | 568091 | `uint uVar1; \| int iVar2; \|  \| uVar1 = *param_1 * 0x800 + 0x2000U >> 0xe; \| uVar1 = uVar1 \| uVar1 << 8; \| uVar1 = uVar1 \| uVar1 << 0x10; \| iV` |
| user.c | 570464 | `local_2c = param_2; \| iStack_28 = param_3; \| if (*param_2 == '\n') { \| thunk_EXT_FUN_811049dc(param_3 + 0x878,0x200); \| if ((*(int *)(param_` |
| user.c | 571015 | `local_2c = param_2; \| iStack_28 = param_3; \| if (*param_2 == '\n') { \| thunk_EXT_FUN_811049dc(param_3 + 0x878,0x200); \| uVar2 = *(uint *)(pa` |
| user.c | 571542 | `iVar16 = iVar16 - iVar6; \| iVar10 = iVar7 + iVar12; \| iVar7 = iVar7 - iVar12; \| iVar6 = iVar13 * 0x16a0 + iVar10 * -0x16a0 + 0x20000 >> 0x12` |
| user.c | 571553 | `iVar2 = iVar2 + 1; \| } \| piVar1[0x20] = (int)sVar11 * (int)(short)((uint)iVar6 >> 0x10); \| *piVar1 = (iVar10 + iVar13) * 0x16a0 + 0x20000 >>` |
| user.c | 571554 | `} \| piVar1[0x20] = (int)sVar11 * (int)(short)((uint)iVar6 >> 0x10); \| *piVar1 = (iVar10 + iVar13) * 0x16a0 + 0x20000 >> 0x12; \| iVar6 = iVar` |
| user.c | 571565 | `iVar2 = iVar2 + 1; \| } \| piVar1[0x30] = (int)sVar11 * (int)(short)((uint)iVar6 >> 0x10); \| iVar6 = iVar7 * 0xc3e + iVar16 * 0x1d90 + 0x20000` |
| user.c | 571582 | `iVar6 = (iVar15 + iVar14) * 0x5a82 + 0x4000 >> 0xf; \| iVar16 = iVar8 + iVar6; \| iVar8 = iVar8 - iVar6; \| iVar6 = iVar16 * 0x63e + iVar7 * -0` |
| user.c | 571593 | `iVar2 = iVar2 + 1; \| } \| piVar1[0x38] = (int)sVar11 * (int)(short)((uint)iVar6 >> 0x10); \| iVar6 = iVar7 * 0x63e + iVar16 * 0x1f62 + 0x20000` |
| user.c | 571604 | `iVar2 = iVar2 + 1; \| } \| piVar1[8] = (int)sVar11 * (int)(short)((uint)iVar6 >> 0x10); \| iVar6 = iVar9 * DAT_00784a38 + iVar8 * 0x1a9b + 0x20` |
| user.c | 571615 | `iVar2 = iVar2 + 1; \| } \| piVar1[0x18] = (int)sVar11 * (int)(short)((uint)iVar6 >> 0x10); \| iVar6 = iVar8 * 0x11c7 + iVar9 * 0x1a9b + 0x20000` |
| user.c | 571891 | `iVar7 = iVar7 - iVar9; \| iVar6 = iVar6 - iVar5; \| iVar9 = piVar1[0x18] - piVar1[0x20]; \| iVar5 = iVar13 * 0x16a0 + iVar14 * -0x16a0 + 0x2000` |
| user.c | 571901 | `iVar2 = iVar2 + 1; \| } \| piVar1[0x20] = (int)sVar8 * (int)(short)(iVar5 >> 3); \| iVar5 = (iVar13 + iVar14) * 0x16a0 + 0x20000 >> 0x12; \| sVa` |
| user.c | 571911 | `iVar2 = iVar2 + 1; \| } \| *piVar1 = (int)sVar8 * (int)(short)(iVar5 >> 3); \| iVar5 = iVar7 * 0xc3e + iVar6 * -0x1d90 + 0x20000 >> 0x12; \| sVa` |
| user.c | 571921 | `iVar2 = iVar2 + 1; \| } \| piVar1[0x30] = (int)sVar8 * (int)(short)(iVar5 >> 3); \| iVar5 = iVar6 * 0xc3e + iVar7 * 0x1d90 + 0x20000 >> 0x12; \|` |
| user.c | 571937 | `iVar5 = (iVar11 + iVar10) * 0x5a82 + 0x4000 >> 0xf; \| iVar6 = iVar12 + iVar5; \| iVar12 = iVar12 - iVar5; \| iVar5 = iVar6 * 0x63e + iVar9 * -` |
| user.c | 571947 | `iVar2 = iVar2 + 1; \| } \| piVar1[0x38] = (int)sVar8 * (int)(short)(iVar5 >> 3); \| iVar5 = iVar9 * 0x63e + iVar6 * 0x1f62 + 0x20000 >> 0x12; \|` |
| user.c | 571957 | `iVar2 = iVar2 + 1; \| } \| piVar1[8] = (int)sVar8 * (int)(short)(iVar5 >> 3); \| iVar5 = iVar7 * DAT_00784e64 + iVar12 * 0x1a9b + 0x20000 >> 0x` |
| user.c | 571967 | `iVar2 = iVar2 + 1; \| } \| piVar1[0x18] = (int)sVar8 * (int)(short)(iVar5 >> 3); \| iVar5 = iVar12 * 0x11c7 + iVar7 * 0x1a9b + 0x20000 >> 0x12;` |
| user.c | 572020 | `iVar6 = iVar6 - iVar8; \| iVar8 = iVar5 + iVar4; \| iVar5 = iVar5 - iVar4; \| iVar4 = iVar9 * 0x16a0 + iVar8 * -0x16a0 + 0x20000 >> 0x12; \| sVa` |
| user.c | 572036 | `} \| } \| param_1[0x20] = (int)sVar7 * (int)(short)iVar4; \| iVar4 = (iVar9 + iVar8) * 0x16a0 + 0x20000 >> 0x12; \| sVar7 = 1; \| if (iVar4 < 0) ` |
| user.c | 572052 | `} \| } \| *param_1 = (int)sVar7 * (int)(short)iVar4; \| iVar4 = iVar6 * 0xc3e + iVar5 * -0x1d90 + 0x20000 >> 0x12; \| sVar7 = 1; \| if (iVar4 < 0` |
| user.c | 572068 | `} \| } \| param_1[0x30] = (int)sVar7 * (int)(short)iVar4; \| iVar4 = iVar5 * 0xc3e + iVar6 * 0x1d90 + 0x20000 >> 0x12; \| sVar7 = 1; \| if (iVar4` |
| user.c | 572090 | `iVar4 = (iVar11 + iVar10) * 0x5a82 + 0x4000 >> 0xf; \| iVar5 = iVar13 + iVar4; \| iVar13 = iVar13 - iVar4; \| iVar4 = iVar5 * 0x63e + iVar12 * ` |
| user.c | 572106 | `} \| } \| param_1[0x38] = (int)sVar7 * (int)(short)iVar4; \| iVar4 = iVar12 * 0x63e + iVar5 * 0x1f62 + 0x20000 >> 0x12; \| sVar7 = 1; \| if (iVar` |
| user.c | 572122 | `} \| } \| param_1[8] = (int)sVar7 * (int)(short)iVar4; \| iVar4 = iVar6 * DAT_0078534c + iVar13 * 0x1a9b + 0x20000 >> 0x12; \| sVar7 = 1; \| if (` |
| user.c | 572138 | `} \| } \| param_1[0x18] = (int)sVar7 * (int)(short)iVar4; \| iVar4 = iVar13 * 0x11c7 + iVar6 * 0x1a9b + 0x20000 >> 0x12; \| sVar7 = 1; \| if (iVa` |
| user.c | 572266 | `*param_2 = uVar1; \| } \| else { \| iVar13 = *param_1 * 0x100 + 0x2000; \| iVar16 = (iVar11 + iVar15) * 0x235 + 4; \| iVar12 = iVar16 + iVar11 * ` |
| user.c | 572408 | `*param_1 = iVar4; \| } \| else { \| iVar8 = *param_1 * 0x100 + 0x2000; \| iVar13 = (iVar9 + iVar11) * 0x235 + 4; \| iVar12 = iVar13 + iVar9 * 0x8` |
| user.c | 572500 | `*(uint *)(iVar5 + 4) = (*(uint *)(iVar1 + uVar2 * 4) & uVar4) << (0x20 - uVar2 & 0xff); \| param_1[1] = 0x20 - uVar2; \| if (param_1 + 0x83 <=` |
| user.c | 572501 | `param_1[1] = 0x20 - uVar2; \| if (param_1 + 0x83 <= (int *)param_1[2]) { \| thunk_EXT_FUN_811037c8(param_1[0x86] + param_1[0x84],param_1 + 3,0` |
| user.c | 572629 | `param_3 = (param_3 ^ 0xfff) + 1; \| } \| iVar5 = 0x1e; \| uVar1 = param_3 << 1 \| 0x2001 \| param_2 << 0xe \| 0x1e00000; \| } \| if (param_1[1] <= i` |
| user.c | 572644 | `*(uint *)(iVar6 + 4) = (*(uint *)(iVar5 + uVar7 * 4) & uVar1) << (0x20 - uVar7 & 0xff); \| param_1[1] = 0x20 - uVar7; \| if (param_1 + 0x83 <=` |
| user.c | 572645 | `param_1[1] = 0x20 - uVar7; \| if (param_1 + 0x83 <= (int *)param_1[2]) { \| thunk_EXT_FUN_811037c8(param_1[0x86] + param_1[0x84],param_1 + 3,0` |
| user.c | 572736 | `param_3 = (param_3 ^ 0xfff) + 1; \| } \| iVar5 = 0x1e; \| uVar1 = param_3 << 1 \| 0x2001 \| param_2 << 0xe \| 0x1e00000; \| } \| if (param_1[1] <= i` |
| user.c | 572751 | `*(uint *)(iVar2 + 4) = (*(uint *)(iVar5 + uVar6 * 4) & uVar1) << (0x20 - uVar6 & 0xff); \| param_1[1] = 0x20 - uVar6; \| if (param_1 + 0x83 <=` |
| user.c | 572752 | `param_1[1] = 0x20 - uVar6; \| if (param_1 + 0x83 <= (int *)param_1[2]) { \| thunk_EXT_FUN_811037c8(param_1[0x86] + param_1[0x84],param_1 + 3,0` |
| user.c | 572901 | `uVar2 = (uVar2 ^ 0xfff) + 1; \| } \| iVar6 = 0x1e; \| uVar7 = uVar2 << 1 \| 0x2001 \| iVar1 << 0xe \| 0x1f00000; \| } \| if (param_1[1] <= iVar6) { ` |
| user.c | 572917 | `param_1[1] = 0x20 - uVar5; \| if (param_1 + 0x83 <= (int *)param_1[2]) { \| thunk_EXT_FUN_811037c8 \| (param_1[0x86] + param_1[0x84],param_1 + ` |
| user.c | 572919 | `thunk_EXT_FUN_811037c8 \| (param_1[0x86] + param_1[0x84],param_1 + 3,0x200,uVar7,unaff_r4,unaff_r5,unaff_r6, \| unaff_lr); \| param_1[0x84] = p` |
| user.c | 573062 | `uVar4 = (uVar4 ^ 0xfff) + 1; \| } \| iVar12 = 0x1e; \| uVar8 = uVar4 << 1 \| 0x2001 \| iVar3 << 0xe \| 0x1f00000; \| } \| if (param_1[1] <= iVar12) ` |
| user.c | 573078 | `param_1[1] = 0x20 - uVar6; \| if (param_1 + 0x83 <= (int *)param_1[2]) { \| thunk_EXT_FUN_811037c8 \| (param_1[0x86] + param_1[0x84],param_1 + ` |
| user.c | 573080 | `thunk_EXT_FUN_811037c8 \| (param_1[0x86] + param_1[0x84],param_1 + 3,0x200,uVar8,unaff_r4,unaff_r5,unaff_r6, \| unaff_lr); \| param_1[0x84] = p` |
| user.c | 574846 | `pcVar13 = (char *)0x0; \| uVar9 = 0; \| uVar8 = 1; \| puVar4 = (undefined *)0x200; \| } \| LAB_00787ef0: \| FUN_000417b2(puVar4,4,uVar8,uVar9,pcVa` |
| user.c | 574900 | `uStack_1c = param_4; \| iVar3 = FUN_000b59c6(); \| cVar2 = FUN_000b565a(); \| if (*param_1 == 0x200) { \| cVar2 = FUN_00245df0(&local_20); \| if ` |
| user.c | 575019 | `if (cVar1 != '\x02') { \| uVar6 = 4; \| uVar7 = 1; \| uVar8 = 0x200; \| goto LAB_0078839c; \| } \| }` |
| user.c | 577389 | `iVar5 = FUN_00367d46(local_1c,uStack_18); \| if (iVar5 == 0) { \| iVar5 = FUN_00367ddc(local_1c,uStack_18); \| *(undefined2 *)(iVar5 + 8) = 0x2` |
| user.c | 577407 | `uVar4 = 0x400; \| } \| else { \| uVar4 = 0x200; \| } \| *(ushort *)(iVar5 + 8) = uVar3 \| uVar4; \| FUN_0078b548(param_1 + 9,iVar5,cVar1);` |
| user.c | 577655 | `undefined2 *puVar1; \| undefined4 uVar2; \|  \| puVar1 = (undefined2 *)thunk_EXT_FUN_810ff868(0x10,0x44444444,s_sbc_pal_c_0078bc5c,0x200); \| *p` |
| user.c | 584416 | `undefined4 FUN_00795a80(void) \|  \| { \| thunk_EXT_FUN_810f7460(DAT_00795e50,0x2000); \| return DAT_00795e50; \| } \| ` |
| user.c | 585791 | `puVar1[3] = 0x50; \| puVar1[4] = 0x80; \| puVar1[7] = 0x180; \| puVar1[8] = 0x200; \| puVar1[9] = 0x301; \| puVar2 = puVar1; \| }` |
| user.c | 586498 | `param_1[0x20] = (uint)uVar5 * 0x80 + uVar15; \| } \| else if (((uVar9 == 1) \|\| (uVar9 == 2)) && (uVar2 != 0x4000 && 0x1fffff < uVar15)) { \| pa` |
| user.c | 587669 | `} \| *piVar8 = (local_44 >> 0x18) * 10 + 200 + (local_40 & 0xff); \| uVar2 = DAT_0079a008; \| local_b0 = (local_40 >> 0x10 & 0x7f) * 0x200000 +` |
| user.c | 590691 | `} \| else { \| iVar9 = FUN_0013a000(*(undefined4 *)(param_1 + 0x48),DAT_0079e78c); \| iVar9 = 0xf - (iVar9 + 0x20000 >> 0x12); \| if (iVar9 < 0)` |
| user.c | 590750 | `} \| else { \| iVar5 = FUN_0013a000(*(undefined4 *)(param_1 + 0x4c),DAT_0079e78c); \| iVar5 = 0xf - (iVar5 + 0x20000 >> 0x12); \| if (iVar5 < 0)` |
| user.c | 590918 | `else if (iVar7 == 0x100) { \| iVar11 = iVar11 << 2; \| } \| else if (iVar7 == 0x200) { \| iVar11 = iVar11 << 1; \| } \| else {` |
| user.c | 590950 | `iVar11 = iVar11 << 2; \| goto LAB_0079f840; \| } \| if (iVar7 == 0x200) { \| iVar11 = iVar11 << 1; \| goto LAB_0079f840; \| }` |
| user.c | 591589 | `iVar13 = param_2[2]; \| uVar4 = uVar6 + (uVar5 >> 0x14 \| uVar5 * 0x1000); \| uVar5 = ((uVar6 ^ uVar1) & uVar4 ^ uVar1) + DAT_007a0eac + iVar13` |
| user.c | 591602 | `uVar4 = uVar6 + (uVar5 >> 0x14 \| uVar5 * 0x1000); \| uVar5 = ((uVar6 ^ uVar10) & uVar4 ^ uVar10) + DAT_007a0ebc + uVar14 + iVar21; \| iVar15 =` |
| user.c | 591614 | `iVar23 = param_2[0xb]; \| uVar4 = uVar14 + (uVar4 >> 0x14 \| uVar4 * 0x1000); \| uVar5 = (((uVar14 ^ uVar10) & uVar4 ^ uVar10) - 0xa44f) + iVar` |
| user.c | 591626 | `uVar6 = uVar14 + (uVar4 >> 0x14 \| uVar4 * 0x1000); \| uVar5 = ((uVar14 ^ uVar10) & uVar6 ^ uVar10) + DAT_007a0ed8 + iVar12 + uVar5; \| iVar18 ` |
| user.c | 591632 | `uVar5 = ((uVar10 ^ uVar4) & uVar6 ^ uVar4) + DAT_007a0ee0 + uVar14 + iVar24; \| uVar5 = uVar10 + (uVar5 >> 0x1b \| uVar5 * 0x20); \| uVar6 = ((` |
| user.c | 591640 | `uVar5 = ((uVar10 ^ uVar4) & uVar6 ^ uVar4) + DAT_007a0ef0 + iVar20 + uVar5; \| uVar5 = uVar10 + (uVar5 >> 0x1b \| uVar5 * 0x20); \| uVar6 = ((u` |
| user.c | 591648 | `uVar5 = ((uVar4 ^ uVar14) & uVar6 ^ uVar14) + DAT_007a0f00 + iVar7 + uVar5; \| uVar5 = uVar4 + (uVar5 >> 0x1b \| uVar5 * 0x20); \| uVar6 = uVar` |
| user.c | 591656 | `uVar5 = uVar5 + iVar17 + ((uVar4 ^ uVar10) & uVar6 ^ uVar10) + DAT_007a0f10; \| uVar5 = uVar4 + (uVar5 >> 0x1b \| uVar5 * 0x20); \| uVar6 = ((u` |
| user.c | 591700 | `uVar10 = uVar10 + iVar12 + ((uVar6 \| ~uVar4) ^ uVar5) + DAT_007a1384; \| uVar10 = uVar6 + (uVar10 >> 0x11 \| uVar10 * 0x8000); \| uVar4 = uVar4` |
| user.c | 591708 | `uVar10 = uVar10 + iVar22 + ((uVar6 \| ~uVar4) ^ uVar5) + DAT_007a1394; \| uVar10 = uVar6 + (uVar10 >> 0x11 \| uVar10 * 0x8000); \| uVar4 = uVar4` |
| user.c | 591716 | `uVar10 = ((uVar6 \| ~uVar4) ^ uVar5) + DAT_007a13a4 + iVar21 + uVar10; \| uVar10 = uVar6 + (uVar10 >> 0x11 \| uVar10 * 0x8000); \| uVar4 = ((uVa` |
| user.c | 591725 | `uVar10 = uVar6 + (uVar10 >> 0x11 \| uVar10 * 0x8000); \| uVar4 = ((uVar10 \| ~uVar5) ^ uVar6) + DAT_007a13b8 + iVar7 + uVar4; \| *param_1 = uVar` |
| user.c | 593196 | `uVar4 = *(uint *)(s_http_HttpTracePatchParam_user_ag_00002008 + param_1); \| iVar7 = local_2c + uVar6 * 0x1000; \| if (uVar6 == 0) { \| local_3` |
| user.c | 593677 | `iVar7 = 8; \| do { \| thunk_EXT_FUN_811049dc \| (s_http_HttpTracePatchParam_user_ag_00002008 + iVar11 + iVar7 * 0x200 + 0xc,0x100); \| iVar7 = (` |
| user.c | 593723 | `iVar10 = iVar7 + uVar12; \| uVar8 = (uint)(byte)(*(char *)(iVar10 + 0x3a9) + 2); \| uVar14 = (byte)(*(char *)(iVar10 + 0x3aa) + 2) - uVar8; \| ` |
| user.c | 593747 | `uVar4 = (uint)*(byte *)(iVar7 + 0x56); \| uVar19 = *(byte *)(iVar7 + 0x57) - uVar4; \| iVar7 = (uint)*(byte *)(iVar17 + 0x3aa) - (uint)*(byte ` |
| user.c | 593832 | `else { \| local_38 = -1; \| } \| pcStack_48 = local_30 + (uint)*(byte *)(iVar17 + 10) * 8 + uVar12 * 0x200 + 0x400; \| if (*(byte *)(iVar17 + 0x` |
| user.c | 593904 | `param_1 + 0x7314,*(undefined4 *)(FUN_00018464 + param_4),param_4 + 0x70bc); \| iVar3 = 0; \| do { \| iVar4 = param_1 + iVar3 * 0x200; \| thunk_E` |
| user.c | 593906 | `do { \| iVar4 = param_1 + iVar3 * 0x200; \| thunk_EXT_FUN_814e14c4 \| (s_http_HttpTracePatchParam_is_head_00001f14 + iVar4,iVar4 + 0x5f14,0x200` |
| user.c | 593907 | `iVar4 = param_1 + iVar3 * 0x200; \| thunk_EXT_FUN_814e14c4 \| (s_http_HttpTracePatchParam_is_head_00001f14 + iVar4,iVar4 + 0x5f14,0x200); \| th` |
| user.c | 593966 | `param_1 + 0x2314,*(undefined4 *)(DAT_007a6704 + param_4),param_4 + 0x70bc); \| uVar4 = 0; \| do { \| iVar3 = param_1 + uVar4 * 0x200; \| thunk_E` |
| user.c | 593968 | `do { \| iVar3 = param_1 + uVar4 * 0x200; \| thunk_EXT_FUN_814e14c4 \| (s_http_HttpTracePatchParam_is_head_00001f14 + iVar3,iVar3 + 0x5f14,0x200` |
| user.c | 594018 | `FUN_0004e624(*(undefined4 *)(&DAT_0000bf88 + param_1),param_1 + 0x2314,param_3); \| uVar5 = 0; \| do { \| iVar3 = param_1 + uVar5 * 0x200; \| th` |
| user.c | 594463 | `int iVar2; \|  \| iVar2 = *(int *)(DAT_007a7ac4 + ((int)param_1 >> 0x12) * 4); \| if ((param_1 & 0x20000) != 0) { \| lVar1 = (longlong)iVar2 * (` |
| user.c | 594479 | `lVar1 = (longlong)iVar2 * (longlong)*(int *)(DAT_007a7ac4 + -0x3c); \| iVar2 = (int)((ulonglong)lVar1 >> 0x20) * 4 + ((uint)lVar1 >> 0x1e); \|` |
| user.c | 594495 | `lVar1 = (longlong)iVar2 * (longlong)*(int *)(DAT_007a7ac4 + -0x2c); \| iVar2 = (int)((ulonglong)lVar1 >> 0x20) * 4 + ((uint)lVar1 >> 0x1e); \|` |
| user.c | 595142 | `local_38 = local_30 + uVar12; \| local_3c = local_30 + uVar12 * 0x80; \| local_40 = local_30 + uVar12 * 4; \| local_44 = param_5 + uVar12 * 0x2` |
| user.c | 595245 | `FUN_007ab1e2(*param_1 + 500); \| FUN_0004dd9c(*param_1 + 0x1f8); \| FUN_0004dc4c(*param_1 + 0x1fc); \| FUN_00387cf8(*param_1 + 0x200); \| FUN_00` |
| user.c | 595268 | `FUN_007ab1e2(*param_1 + 500); \| FUN_0004dd9c(*param_1 + 0x1f8); \| FUN_0004dc4c(*param_1 + 0x1fc); \| FUN_00387cf8(*param_1 + 0x200); \| FUN_00` |
| user.c | 595581 | `uVar3 = uVar5 + (uVar4 >> 0x14 \| uVar4 * 0x1000); \| iVar10 = param_2[2]; \| uVar4 = uVar1 + iVar10 + DAT_007aa114 + (uVar3 & uVar5 \| uVar6 & ` |
| user.c | 595593 | `uVar3 = uVar5 + (uVar3 >> 0x14 \| uVar3 * 0x1000); \| iVar21 = param_2[6]; \| uVar4 = uVar4 + iVar21 + (uVar3 & uVar5 \| uVar7 & ~uVar3) + DAT_0` |
| user.c | 595606 | `iVar23 = param_2[0xb]; \| uVar3 = uVar5 + (uVar3 >> 0x14 \| uVar3 * 0x1000); \| uVar4 = uVar4 + iVar22 + ((uVar3 & uVar5 \| uVar7 & ~uVar3) - 0x` |
| user.c | 595617 | `uVar5 = uVar7 + (uVar3 >> 0x14 \| uVar3 * 0x1000); \| iVar9 = param_2[0xe]; \| uVar4 = uVar4 + iVar9 + DAT_007aa140 + (uVar5 & uVar7 \| uVar24 &` |
| user.c | 595624 | `uVar7 = uVar7 + iVar19 + DAT_007aa148 + (uVar4 & uVar5 \| uVar3 & ~uVar5); \| uVar7 = uVar4 + (uVar7 >> 0x1b \| uVar7 * 0x20); \| uVar5 = uVar5 ` |
| user.c | 595632 | `uVar7 = uVar7 + iVar20 + DAT_007aa158 + (uVar4 & uVar5 \| uVar3 & ~uVar5); \| uVar7 = uVar4 + (uVar7 >> 0x1b \| uVar7 * 0x20); \| uVar5 = uVar5 ` |
| user.c | 595640 | `uVar7 = uVar7 + iVar15 + DAT_007aa168 + (uVar4 & uVar5 \| uVar3 & ~uVar5); \| uVar7 = uVar4 + (uVar7 >> 0x1b \| uVar7 * 0x20); \| uVar5 = uVar5 ` |
| user.c | 595648 | `uVar7 = uVar7 + iVar16 + (uVar4 & uVar5 \| uVar3 & ~uVar5) + DAT_007aa178; \| uVar7 = uVar4 + (uVar7 >> 0x1b \| uVar7 * 0x20); \| uVar5 = uVar5 ` |
| user.c | 595692 | `uVar3 = ((uVar5 \| ~uVar4) ^ uVar7) + DAT_007aa670 + iVar9 + uVar3; \| uVar3 = uVar5 + (uVar3 >> 0x11 \| uVar3 * 0x8000); \| uVar4 = ((uVar3 \| ~` |
| user.c | 595700 | `uVar3 = ((uVar5 \| ~uVar4) ^ uVar7) + DAT_007aa680 + iVar22 + uVar3; \| uVar24 = uVar5 + (uVar3 >> 0x11 \| uVar3 * 0x8000); \| uVar4 = ((uVar24 ` |
| user.c | 595708 | `uVar5 = ((uVar7 \| ~uVar4) ^ uVar3) + DAT_007aa690 + uVar24 + iVar21; \| uVar5 = uVar7 + (uVar5 >> 0x11 \| uVar5 * 0x8000); \| uVar4 = ((uVar5 \|` |
| user.c | 595717 | `uVar5 = uVar7 + (uVar5 >> 0x11 \| uVar5 * 0x8000); \| uVar4 = ((uVar5 \| ~uVar3) ^ uVar7) + DAT_007aa6a4 + iVar15 + uVar4; \| *param_1 = uVar3 +` |
| user.c | 596955 | `else { \| local_38 = 0xffffffff; \| } \| local_48 = local_30 + uVar2 * 0x200 + (uint)*(byte *)(param_1 + 10) * 8 + 0x400; \| if (*(byte *)(param` |
| user.c | 597128 | `FUN_00884fd8(param_6,param_3,pcVar3); \| param_3 = param_3 + 0x80; \| FUN_0013c07c(param_6); \| FUN_0088522c(param_4 + uVar2 * 0x200 + 0x1000,p` |
| user.c | 597135 | `} \| /* WARNING: Could not recover jumptable at 0x000a18ac. Too many branches */ \| /* WARNING: Treating indirect jump as call */ \| (*DAT_000a` |
| user.c | 597157 | `uVar1 = 0; \| if (0 < param_1) { \| do { \| param_5 = param_5 + -0x200; \| FUN_0013bccc(auStack_220,param_3 + uVar1 * 0x200); \| FUN_0013c07c(auS` |
| user.c | 597158 | `if (0 < param_1) { \| do { \| param_5 = param_5 + -0x200; \| FUN_0013bccc(auStack_220,param_3 + uVar1 * 0x200); \| FUN_0013c07c(auStack_220); \| ` |
| user.c | 599750 | `case 0x1ff: \| uVar8 = 0x1a8; \| break; \| case 0x200: \| uVar8 = 0x1a9; \| break; \| case 0x201:` |
| user.c | 600010 | `uVar8 = 0x1ff; \| break; \| case 599: \| uVar8 = 0x200; \| break; \| case 600: \| uVar8 = 0x201;` |
| user.c | 603526 | `return 0; \| } \| if ((int)param_2 < 0x1003) { \| if (param_2 != (char *)0x200) { \| if ((int)param_2 < 0x201) { \| if (param_2 == (char *)0x80) ` |
| user.c | 603747 | `if (param_3 == (uint *)0x0) { \| return 0xfffffff6; \| } \| if (param_2 != (char *)0x200) { \| if (0x200 < (int)param_2) { \| pcVar1 = param_2 + ` |
| user.c | 603748 | `return 0xfffffff6; \| } \| if (param_2 != (char *)0x200) { \| if (0x200 < (int)param_2) { \| pcVar1 = param_2 + -0x1012; \| if (param_2 == (char ` |
| user.c | 605255 | `*(undefined4 *)(param_1 + 0x1f0) = 1; \| } \| *(undefined4 *)(param_1 + 0x1fc) = 0; \| *(undefined4 *)(param_1 + 0x200) = 0; \| goto LAB_007c5e3` |
| user.c | 605514 | `&& (iVar5 == param_1)) { \| *(undefined4 *)(param_1 + 0x1fc) = 0; \| *(undefined4 *)(param_1 + 0x1dc) = 1; \| *(undefined4 *)(param_1 + 0x200) ` |
| user.c | 606757 | `local_80 = (ushort)(byte)((uint)iVar2 >> 8) \| (short)iVar2 * 0x100; \| } \| else { \| local_80 = 0x2000; \| } \| local_7e = 0; \| local_7d = 1;` |
| user.c | 607029 | `return -0x25; \| } \| uVar10 = (*(ushort *)(pbVar11 + 6) & 0xff) << 8; \| local_30 = uVar10 & 0x2000; \| local_38 = (uVar10 & 0x1fff \| (uint)(*(` |
| user.c | 611119 | `if (*(int *)(param_2 + 0x110) != iVar3) { \| *(undefined4 *)(param_2 + 0x28) = 0x1e; \| *(int *)(param_2 + 0x110) = iVar3; \| *(ushort *)(param` |
| user.c | 614758 | `} \| iVar2 = FUN_007d617c(uVar3); \| if (iVar2 == 6) { \| puVar8 = (undefined4 *)((uint)puVar8 \| 0x2000); \| } \| uVar4 = (uint)*(ushort *)(*(int` |
| user.c | 618804 | `undefined4 uVar2; \| undefined1 auStack_208 [512]; \|  \| thunk_EXT_FUN_811049dc(auStack_208,0x200); \| iVar1 = FUN_007da91e(param_1,0xff,auStac` |
| user.c | 619885 | `} \| else { \| thunk_EXT_FUN_811049dc(iVar4,0x420); \| thunk_EXT_FUN_811049dc(auStack_234,0x200); \| FUN_004166c2(param_2,*(ushort *)(param_2 + ` |
| user.c | 625207 | `*(undefined4 *)(param_1 + 0x10a) = 2; \| } \| *param_1 = 0; \| thunk_EXT_FUN_810f7460(param_1 + 9,0x200); \| FUN_007ee832(&DAT_00220000,param_1)` |
| user.c | 625760 | `local_28 = 0; \| local_2c = 0; \| local_34 = 0; \| thunk_EXT_FUN_811049dc(auStack_234,0x200); \| local_24[0] = 0xff; \| iVar2 = FUN_003da50e(&DAT` |
| user.c | 626092 | `local_34[2] = 0; \| local_34[3] = 0; \| local_34[0] = 0; \| thunk_EXT_FUN_811049dc(auStack_234,0x200); \| local_24[0] = 0xff; \| iVar3 = FUN_007e` |
| user.c | 626197 | `*(undefined4 *)(param_1 + 0x20) = 0; \| *(undefined2 *)(param_1 + 0x242) = 0; \| iVar4 = 0; \| thunk_EXT_FUN_811049dc(auStack_21c,0x200); \| loc` |
| user.c | 626299 | `undefined1 auStack_230 [532]; \| undefined4 local_1c; \|  \| thunk_EXT_FUN_811049dc(auStack_64c,0x200); \| FUN_007e39d2(auStack_44c); \| thunk_EX` |
| user.c | 626454 | `local_40 = 0; \| local_3c = 0; \| thunk_EXT_FUN_811049dc(auStack_58,0x14); \| thunk_EXT_FUN_811049dc(auStack_458,0x200); \| thunk_EXT_FUN_811049` |
| user.c | 626455 | `local_3c = 0; \| thunk_EXT_FUN_811049dc(auStack_58,0x14); \| thunk_EXT_FUN_811049dc(auStack_458,0x200); \| thunk_EXT_FUN_811049dc(auStack_258,0` |
| user.c | 626894 | `local_1c = 0; \| local_14 = 0; \| local_18 = 0; \| thunk_EXT_FUN_811049dc(auStack_21c,0x200); \| local_10[0] = 0xff; \| iVar2 = FUN_007e372c(auSt` |
| user.c | 626993 | `local_3c = 0; \| local_38 = 0; \| local_34 = 0; \| thunk_EXT_FUN_811049dc(auStack_4bc,0x200); \| bVar1 = false; \| local_20[0] = 0; \| local_30 = ` |
| user.c | 629371 | `acStack_30[0] = '\0'; \| uStack_2c = 0xb; \| aiStack_28[0] = 0; \| thunk_EXT_FUN_811049dc(auStack_254,0x200); \| auStack_38[0] = 0xff; \| uVar4 =` |
| user.c | 629914 | `FUN_00434154(); \| FUN_002b1892(param_1); \| thunk_EXT_FUN_811049dc(&local_30,0x18); \| local_30 = 0x2000; \| local_1c = param_1; \| FUN_000e26e4` |
| user.c | 629973 | `(0x10,DAT_007e7700,s__MMIAP__MMIAPIAP_ReleaseAudioHan_007e722c + 0x30,param_1); \| } \| else { \| iVar1 = thunk_EXT_FUN_810ff868(0x200,0x444444` |
| user.c | 629975 | `else { \| iVar1 = thunk_EXT_FUN_810ff868(0x200,0x44444444,DAT_007e72f0,0xa2c); \| if (iVar1 != 0) { \| thunk_EXT_FUN_810f7460(iVar1,0x200); \| l` |
| user.c | 633781 | `local_28 = param_3; \| thunk_EXT_FUN_810f7460(param_2,9); \| thunk_EXT_FUN_810f7460(local_28,4); \| thunk_EXT_FUN_811049dc(asStack_442 + 1,0x20` |
| user.c | 633782 | `thunk_EXT_FUN_810f7460(param_2,9); \| thunk_EXT_FUN_810f7460(local_28,4); \| thunk_EXT_FUN_811049dc(asStack_442 + 1,0x200); \| thunk_EXT_FUN_81` |
| user.c | 633957 | `uStack_30 = param_2; \| local_2c = param_3; \| iStack_28 = param_4; \| thunk_EXT_FUN_810f7460(param_3,0x200); \| FUN_007e97d6(local_2c,param_2);` |
| user.c | 634059 | `iVar8 = FUN_000cc6e8(local_34,param_5,&local_40,param_6,auStack_2c0,0); \| if (iVar8 != 0) { \| if (bVar11) { \| thunk_EXT_FUN_810f7460(local_2` |
| user.c | 634893 | `} \| else if (param_2 == (char *)0xf023) { \| iVar2 = FUN_000d38e6(param_1); \| if (((iVar2 == 0) \|\| (iVar2 = FUN_000d308c(iVar2,0x2000), iVar2` |
| user.c | 635759 | `local_18 = 0; \| local_14 = 0; \| FUN_007ee69e(param_2,&local_18); \| FUN_007f0816(1,&local_18,0,0,DAT_007edfd8 + 0x1e,(DAT_007edfd4 + -0xfa) *` |
| user.c | 637304 | `iVar3 = param_1 + uVar2 * 8; \| if ((*(int *)(iVar3 + 0xd0) != 0) && (*(short *)(iVar3 + 0xd4) != 0)) { \| if (uVar6 == uVar2) { \| puVar5 = (u` |
| user.c | 638718 | `local_24 = DAT_007f0a10; \| local_18 = 1; \| local_1c = 0; \| local_10 = 0x200; \| local_c = 5; \| iVar1 = FUN_003da06a(local_30); \| if (iVar1 ==` |
| user.c | 653057 | `if ((puVar9 != (undefined *)0x0) && (iVar2 == 0)) { \| return puVar6; \| } \| thunk_EXT_FUN_811049dc(param_2,0x200); \| uVar7 = FUN_000d0460(puV` |
| user.c | 653063 | `*(undefined2 *)((int)param_2 + 2) = 0x3a; \| FUN_007ee832(puVar3,param_2); \| puVar8 = auStack_210; \| thunk_EXT_FUN_811049dc(auStack_210,0x200` |
| user.c | 653102 | `undefined4 local_10; \|  \| puVar4 = auStack_410; \| thunk_EXT_FUN_811049dc(auStack_210,0x200); \| local_10 = 0; \| thunk_EXT_FUN_811049dc(auStac` |
| user.c | 653104 | `puVar4 = auStack_410; \| thunk_EXT_FUN_811049dc(auStack_210,0x200); \| local_10 = 0; \| thunk_EXT_FUN_811049dc(auStack_410,0x200); \| FUN_00801d` |
| user.c | 653111 | `uVar2 = thunk_EXT_FUN_810ff150(auStack_410); \| thunk_EXT_FUN_810faa34(&local_10,auStack_410,uVar2); \| } \| thunk_EXT_FUN_811049dc(auStack_410` |
| user.c | 658627 | `undefined1 auStack_22c [532]; \|  \| thunk_EXT_FUN_811049dc(auStack_248,0x22c); \| thunk_EXT_FUN_811049dc(auStack_448,0x200); \| iVar1 = 0; \| if` |
| user.c | 658647 | `FUN_00106420(auStack_448,&DAT_008156e0); \| iVar4 = FUN_003b9abc(auStack_448,auStack_248); \| if (iVar4 != 0) { \| thunk_EXT_FUN_811049dc(auSta` |
| user.c | 658659 | `FUN_003b9dfa(iVar4); \| goto LAB_00815392; \| } \| thunk_EXT_FUN_811049dc(auStack_448,0x200); \| FUN_0010630c(auStack_448,iVar1); \| iVar5 = FUN_` |
| user.c | 658778 | ` \| uVar8 = 0; \| thunk_EXT_FUN_811049dc(auStack_38,0x14); \| thunk_EXT_FUN_811049dc(auStack_438,0x200); \| thunk_EXT_FUN_811049dc(auStack_238,0` |
| user.c | 658779 | `uVar8 = 0; \| thunk_EXT_FUN_811049dc(auStack_38,0x14); \| thunk_EXT_FUN_811049dc(auStack_438,0x200); \| thunk_EXT_FUN_811049dc(auStack_238,0x20` |
| user.c | 659990 | `local_30 = param_2; \| puStack_2c = param_3; \| iStack_28 = param_4; \| iVar3 = thunk_EXT_FUN_810ff868(0x200,0x44444444,s_spml_otf_gsub_c_00817` |
| user.c | 660610 | `(s_gsub____gdef____buf____gsub_>scr_00818398,s_spml_otf_gsub_c_0081786c,0x5c7); \| LAB_0081821c: \| local_38 = thunk_EXT_FUN_810ff868(0x100,0x` |
| user.c | 661694 | `iVar10 = FUN_0006cdd6(&local_30,local_30,local_2c,param_1[5],param_1[6]); \| if (iVar10 != 0) { \| iVar12 = (uint)*(ushort *)(param_2 + 0xc) +` |
| user.c | 661908 | `iVar1 = FUN_0006cdd6(&local_30,local_30,local_2c,param_1[5],param_1[6]); \| if (iVar1 != 0) { \| iVar1 = (uint)*(ushort *)(param_2 + 0xc) + pa` |
| user.c | 662355 | `if (iVar2 != 0) { \| iVar2 = (uint)*(ushort *)(param_2 + 0xc) + param_4 + -1; \| uVar13 = (param_6 \| param_6 << 0x10) & DAT_0081a1f0; \| if ((p` |
| user.c | 662492 | `iVar1 = FUN_0006cdd6(&local_58,local_58,local_54,param_1[5],param_1[6]); \| if (iVar1 != 0) { \| local_48 = (uint)*(ushort *)(param_2 + 0xc) +` |
| user.c | 662742 | `local_44 = pbVar10; \| iVar5 = FUN_00819032(&local_58,&local_64,local_5c); \| if (iVar5 == 0) goto LAB_0081a72c; \| if ((*(ushort *)(param_1 + ` |
| user.c | 663104 | `local_6c = 0xfffe; \| sVar8 = local_74; \| if ((((uVar10 & 0xffff) == 2) && (sVar8 = sVar7, (uVar10 & 0x300000) != 0x100000)) && \| (sVar8 = lo` |
| user.c | 663214 | `iVar21 = local_94, uVar10 != 0)) && \| ((uVar3 = uVar1, uVar4 = local_aa, iVar25 = iVar11, iVar13 = local_98, uVar10 != 0x100000 \| && (uVar18` |
| user.c | 663266 | `(((uVar3 = uVar1, uVar4 = local_aa, iVar25 = iVar11, iVar13 = local_98, \| uVar10 != 0x100000 && \| (uVar18 = uVar1, uVar3 = local_ac, iVar24 ` |
| user.c | 663323 | `iVar14 = local_c0; \| for (iVar23 = iVar22; local_c0 = iVar14, iVar23 < local_54; iVar23 = iVar23 + 1) { \| sVar7 = *(short *)(param_2 + iVar2` |
| user.c | 663335 | `pcVar26 = local_b4; \| local_c0 = iVar14 + 1; \| } \| else if (sVar7 != 0x200d) { \| local_c0 = iVar14 + 1; \| *(undefined2 *)(local_bc + iVar14 ` |
| user.c | 663504 | `if (iVar13 << 1 < 0) { \| pcVar26 = (char *)0x81b565; \| sVar7 = FUN_0081d400(param_1,*(undefined2 *)(param_2 + iVar22 * 2 + 2)); \| if ((((sVa` |
| user.c | 663505 | `pcVar26 = (char *)0x81b565; \| sVar7 = FUN_0081d400(param_1,*(undefined2 *)(param_2 + iVar22 * 2 + 2)); \| if ((((sVar7 == 0xc) && (iVar14 = i` |
| user.c | 663515 | `iVar13 = FUN_0081d400(param_1,*(undefined2 *)(param_2 + iVar25 * 2)); \| if (iVar13 < 0) break; \| } \| bVar28 = (*(uint *)(param_1 + 4) & 0x20` |
| user.c | 663582 | `} \| } \| } \| if (((uVar10 & 0x2000000) == 0) \|\| (local_50 != 0)) { \| local_38 = 0; \| } \| else {` |
| user.c | 663702 | `} \| } \| if ((uVar17 & 0x80000000) == 0) { \| if (((uVar17 & 0xffff) == 0xc) && (*(short *)(param_2 + iVar13 * 2 + 2) == 0x200c)) { \| uVar16 =` |
| user.c | 663706 | `uVar16 = 0xfff0; \| } \| else if (local_48 == s_http_HttpTracePatchParam_user_ag_00002008 + 4) { \| uVar18 = 0x200b; \| } \| } \| else {` |
| user.c | 663710 | `} \| } \| else { \| if ((uVar17 & 0x20000000) != 0 && uVar10 != 0) { \| uVar16 = 0xfff0; \| } \| uVar10 = (uVar17 & 0x3fffffff) >> 0x1d;` |
| user.c | 663738 | `if (sVar7 != 0xe) goto LAB_0081b968; \| } \| iVar21 = iVar13 + 1; \| if ((iVar21 < iVar23) && (*(short *)(param_2 + iVar21 * 2) == 0x200c)) { \|` |
| user.c | 664147 | `pcVar9 = (char *)(uint)*(ushort *)(iVar23 + -4); \| if (pcVar9 == (char *)0x9b0) { \| bVar28 = false; \| if (*(short *)(iVar23 + -2) == 0x200d)` |
| user.c | 664454 | `} \| bVar28 = bVar27 && uVar19 == 0xd4d; \| if (bVar27 && uVar19 == 0xd4d) { \| bVar28 = puVar15[3] == 0x200b; \| } \| if ((!bVar28) \|\| (uVar19 =` |
| user.c | 664461 | `puVar15 = puVar5 + iVar4; \| *puVar15 = uVar23; \| puVar15[1] = 0xd4d; \| puVar15[2] = 0x200b; \| puVar15[3] = 0xd48; \| puVar15[4] = uVar19; \| g` |
| user.c | 664475 | `} \| bVar28 = bVar27 && uVar19 == 0xd4d; \| if (bVar27 && uVar19 == 0xd4d) { \| bVar28 = puVar5[iVar4 + 3] == 0x200b; \| } \| if ((bVar28) && (pu` |
| user.c | 664480 | `if ((bVar28) && (puVar5[iVar4 + 4] == 0xd35)) { \| puVar5[iVar4] = 0xd38; \| puVar5[iVar4 + 1] = 0xd4d; \| puVar5[iVar4 + 2] = 0x200b; \| puVar5` |
| user.c | 664498 | `} \| bVar28 = bVar27 && uVar19 == 0xd4d; \| if (bVar27 && uVar19 == 0xd4d) { \| bVar28 = puVar15[3] == 0x200b; \| } \| if ((bVar28) && (uVar19 = ` |
| user.c | 664692 | `} \| if (bVar27 && uVar19 == 0xd4d) { \| uVar19 = puVar5[iVar4 + 5]; \| bVar27 = uVar19 == 0x200b; \| if (bVar27) { \| uVar19 = puVar5[iVar4 + 6]` |
| user.c | 664701 | `puVar5[iVar4 + 1] = 0xd4d; \| puVar5[iVar4 + 2] = 0xd15; \| puVar5[iVar4 + 3] = 0xd4d; \| puVar5[iVar4 + 4] = 0x200b; \| puVar5[iVar4 + 5] = uVa` |
| user.c | 664760 | `puVar5[iVar4] = 0xd38; \| puVar5[iVar4 + 1] = 0xd4d; \| puVar5[iVar4 + 2] = 0xd47; \| puVar5[iVar4 + 3] = 0x200b; \| puVar5[iVar4 + 4] = 0xd31; ` |
| user.c | 664818 | `pcVar21 == (char *)0xacd && \| pcVar12 == s_http_HttpTracePatchParam_user_ag_00002008 + 3)) && \| (pcVar21 = (char *)0xab7, puVar15[1] == 0xab` |
| user.c | 664821 | `puVar15[-1] = 0x200b; \| uVar6 = uVar6 + 1; \| puVar5[iVar4] = 0xacd; \| puVar15[1] = 0x200b; \| puVar15[2] = 0xab7; \| goto LAB_0081cc4c; \| }` |
| user.c | 665020 | `} \| LAB_0081cc4c: \| if (*(int *)(param_1 + 8) == 0x15) { \| if (puVar5[iVar4] == 0x200b) { \| puVar5[iVar4] = 0x200c; \| } \| }` |
| user.c | 665021 | `LAB_0081cc4c: \| if (*(int *)(param_1 + 8) == 0x15) { \| if (puVar5[iVar4] == 0x200b) { \| puVar5[iVar4] = 0x200c; \| } \| } \| else if (3 < (int)` |
| user.c | 665194 | `} \| bVar28 = bVar27 && uVar19 == 0xd4d; \| if (bVar27 && uVar19 == 0xd4d) { \| bVar28 = puVar5[iVar4 + 5] == 0x200b; \| } \| if (((bVar28) && (p` |
| user.c | 665201 | `puVar5[iVar4 + 1] = 0xd4d; \| puVar5[iVar4 + 2] = 0xd31; \| puVar5[iVar4 + 3] = 0xd4d; \| puVar5[iVar4 + 4] = 0x200c; \| puVar5[iVar4 + 5] = 0xd` |
| user.c | 665218 | `} \| bVar28 = bVar27 && uVar19 == 0xd4d; \| if (bVar27 && uVar19 == 0xd4d) { \| bVar28 = puVar5[iVar4 + 3] == 0x200b; \| } \| if ((bVar28) && (pu` |
| user.c | 665223 | `if ((bVar28) && (puVar5[iVar4 + 4] == 0xd38)) { \| puVar5[iVar4] = 0xd21; \| puVar5[iVar4 + 1] = 0xd4d; \| puVar5[iVar4 + 2] = 0x200c; \| puVar5` |
| user.c | 665283 | `} \| bVar28 = bVar27 && uVar11 == 0xd4d; \| if (bVar27 && uVar11 == 0xd4d) { \| bVar28 = puVar5[iVar4 + 4] == 0x200b; \| } \| if (bVar28) { \| uVa` |
| user.c | 665296 | `puVar5[iVar4 + 1] = uVar20; \| puVar5[iVar4 + 2] = 0xd2f; \| puVar5[iVar4 + 3] = 0xd4d; \| puVar5[iVar4 + 4] = 0x200c; \| puVar5[iVar4 + 5] = 0x` |
| user.c | 668111 | `*(uint *)(iVar2 + (uVar4 >> 7 & 0x3c \| (uVar5 & 0xff) >> 6) * 4 + 0x100) \| \| *(uint *)(iVar2 + (uVar4 >> 0x15 & 6 \| (uVar5 & 0x1fffff) >> 0x` |
| user.c | 669580 | `FUN_007ee74e(0xd31e,auStack_224); \| } \| thunk_EXT_FUN_811049dc(auStack_224,0x20c); \| local_24 = *(undefined2 *)(param_1 + 0x200); \| FUN_007f` |
| user.c | 669581 | `} \| thunk_EXT_FUN_811049dc(auStack_224,0x20c); \| local_24 = *(undefined2 *)(param_1 + 0x200); \| FUN_007f1a1e(auStack_224,0xff,param_1,*(unde` |
| user.c | 669582 | `thunk_EXT_FUN_811049dc(auStack_224,0x20c); \| local_24 = *(undefined2 *)(param_1 + 0x200); \| FUN_007f1a1e(auStack_224,0xff,param_1,*(undefine` |
| user.c | 669642 | `thunk_EXT_FUN_810f7460(DAT_0082261c,0x20a); \| thunk_EXT_FUN_811037c8(DAT_0082261c,DAT_008225fc,0x20a); \| FUN_003ebaf8(DAT_00822610 + 8); \| t` |
| user.c | 669643 | `thunk_EXT_FUN_811037c8(DAT_0082261c,DAT_008225fc,0x20a); \| FUN_003ebaf8(DAT_00822610 + 8); \| thunk_EXT_FUN_810f7460(DAT_008225fc,0x200); \| *` |
| user.c | 669646 | `*(short *)(iVar1 + 0x200) = (short)param_3; \| FUN_007f1a1e(DAT_008225fc,0xff,param_2,param_3,param_3); \| } \| iVar2 = FUN_000d0dd4(DAT_008225` |
| user.c | 669719 | `FUN_008221a8(); \| FUN_007ee74e(0xd31e,auStack_21c); \| } \| *(undefined2 *)(param_1 + 0x200) = local_1c; \| FUN_007f1a1e(param_1,0xff,auStack_2` |
| user.c | 669774 | `FUN_008221a8(); \| FUN_007ee74e(0xd31e,auStack_21c); \| } \| *(undefined2 *)(param_1 + 0x200) = uStack_1c; \| FUN_007f1a1e(param_1,0xff,auStack_` |
| user.c | 670774 | `iVar1 = DAT_00823844 + 0x12; \| } \| FUN_007ee69e(iVar1,&local_38); \| FUN_007f0816(1,&local_38,0,0,iVar2,(DAT_00823840 + -0xfd) * 0x20000000,D` |
| user.c | 670889 | `uStack_48 = DAT_00823ca0 + -0xfd; \| local_40 = 0; \| uStack_3c = DAT_00823ca8; \| local_4c = uStack_48 * 0x20000000; \| local_50 = piVar1; \| lo` |
| user.c | 671037 | `puVar2[1] = *(undefined4 *)(param_1 + 0x10); \| puVar2[2] = *(undefined4 *)(param_1 + 0x14); \| puVar2[3] = *(undefined4 *)(param_1 + 0x18); \|` |
| user.c | 672094 | `iVar20 = FUN_0007b2a6(iVar22); \| iVar6 = iVar6 - iVar20; \| if (local_2c == 0) { \| iVar20 = FUN_0007b310((iVar6 >> 1) + 0x200000); \| } \| else` |
| user.c | 672100 | `if (local_2c != 1) { \| iVar6 = iVar6 << (local_2c - 1U & 0xff); \| } \| iVar20 = FUN_0007b310(iVar6 + 0x200000); \| } \| if (iVar5 < iVar20) { \|` |
| user.c | 674039 | `bVar12 = SBORROW4(iVar2,iVar4); \| iVar10 = iVar2 - iVar4; \| } \| if (((iVar10 < 0 == bVar12) && (iVar2 < 0x2001)) && \| (iVar2 = FUN_000a5616(` |
| user.c | 676504 | `iVar23 = (short)(param_2[0x80] >> 0x10) * 0x7642 + ((param_2[0x80] & 0xffff) * 0x7642 >> 0x10) + \| (short)(param_2[0x1a0] >> 0x10) * 0x30fc ` |
| user.c | 676509 | `((int)((param_1[0x20] & 0xffff) * DAT_0082bb10) >> 0x10); \| iVar14 = (short)(param_2[0x20] >> 0x10) * -0x7ee8 + \| ((int)((param_2[0x20] & 0x` |
| user.c | 676510 | `iVar14 = (short)(param_2[0x20] >> 0x10) * -0x7ee8 + \| ((int)((param_2[0x20] & 0xffff) * DAT_0082bb14) >> 0x10) + \| (short)(param_2[0x200] >>` |
| user.c | 676914 | `sVar2 * -0x30fc + ((int)(uVar10 * -0x30fc) >> 0x10); \| sVar2 = (short)(uVar8 >> 0x10); \| uVar8 = uVar8 & 0xffff; \| param_2[0x200] = \| (short` |
| user.c | 677460 | `while (param_2 != 0) { \| param_2 = param_2 + -1; \| iVar2 = *param_1; \| if (iVar2 < 0x200) { \| *param_1 = *(int *)(iVar1 + iVar2 * 4); \| } \| ` |
| user.c | 677464 | `*param_1 = *(int *)(iVar1 + iVar2 * 4); \| } \| else { \| if (iVar2 < 0x2000) { \| iVar3 = iVar2 >> 4; \| iVar2 = iVar2 + iVar3 * -0x10; \| iVar2 ` |
| user.c | 677470 | `iVar2 = (iVar2 * -0x40 + 0x400) * *(int *)(iVar1 + iVar3 * 4) + \| *(int *)(iVar1 + iVar3 * 4 + 4) * iVar2 * 0x40 >> 7; \| } \| else if (iVar2 ` |
| user.c | 677476 | `iVar2 = (iVar2 * -4 + 0x400) * *(int *)(iVar1 + iVar3 * 4) + \| *(int *)(iVar1 + iVar3 * 4 + 4) * iVar2 * 4 >> 4; \| } \| else if (iVar2 < 0x20` |
| user.c | 677482 | `iVar2 = (0x400 - iVar2) * *(int *)(iVar1 + iVar3 * 4) + \| *(int *)(iVar1 + iVar3 * 4 + 4) * iVar2 >> 1; \| } \| else if (iVar2 < 0x2000000) { ` |
| user.c | 677488 | `iVar2 = ((0x400 - iVar2) * *(int *)(iVar1 + iVar3 * 4) + \| *(int *)(iVar1 + iVar3 * 4 + 4) * iVar2) * 4; \| } \| else if (iVar2 < 0x20000000) ` |
| user.c | 678403 | `if ((local_434 != 1) && (local_434 != 2)) goto LAB_0082ee3a; \| iVar4 = thunk_FUN_000d0e54(auStack_430,local_230); \| if (iVar4 != 0) { \| thun` |
| user.c | 678452 | `} \| goto switchD_0082ed68_default; \| } \| bVar9 = SBORROW4((int)pcVar3,0x200); \| bVar7 = (int)(param_2 + -0xfc18) < 0; \| bVar8 = true; \| } wh` |
| user.c | 678455 | `bVar9 = SBORROW4((int)pcVar3,0x200); \| bVar7 = (int)(param_2 + -0xfc18) < 0; \| bVar8 = true; \| } while (pcVar3 == (char *)0x200); \| if (0x20` |
| user.c | 678456 | `bVar7 = (int)(param_2 + -0xfc18) < 0; \| bVar8 = true; \| } while (pcVar3 == (char *)0x200); \| if (0x200 < (int)pcVar3) { \| if (pcVar3 == (cha` |
| user.c | 678674 | `local_30 = 0; \| local_2c = 0; \| thunk_EXT_FUN_811049dc(auStack_4c,0x18); \| thunk_EXT_FUN_811049dc(auStack_24c,0x200); \| thunk_EXT_FUN_810ff1` |
| user.c | 679165 | `iVar10 = (int)(short)((short)iVar10 + 1); \| psVar11 = psVar11 + 3; \| } while (iVar10 < 0x20); \| iVar7 = SignedSaturate(iVar3 * 0x20000,0x20)` |
| user.c | 684524 | `thunk_FUN_002771d4(iVar3); \| if (((bVar1) && (bVar2)) && ((iVar8 == 0 && (iVar8 = FUN_0084bf00(), iVar8 == 0)))) { \| if (iVar9 == 4) { \| uVa` |
| user.c | 684525 | `if (((bVar1) && (bVar2)) && ((iVar8 == 0 && (iVar8 = FUN_0084bf00(), iVar8 == 0)))) { \| if (iVar9 == 4) { \| uVar5 = thunk_EXT_FUN_810ffa5c(0` |
| user.c | 688253 | ` \| if ((param_1 != 0) && (param_3 != 0)) { \| uVar1 = FUN_0042028a(); \| if ((*(ushort *)(param_3 + 0x200) == 0) \|\| (0xff < *(ushort *)(param_` |
| user.c | 688375 | `} \| } \| FUN_0042028a(param_1,uStack_28,iVar5); \| iVar6 = FUN_000d0192(iVar4,*(undefined2 *)(iVar4 + 0x200),iVar5, \| *(undefined2 *)(iVar5 + ` |
| user.c | 688376 | `} \| FUN_0042028a(param_1,uStack_28,iVar5); \| iVar6 = FUN_000d0192(iVar4,*(undefined2 *)(iVar4 + 0x200),iVar5, \| *(undefined2 *)(iVar5 + 0x20` |
| user.c | 690916 | `local_14 = 0; \| FUN_007ee69e(param_3,&local_18); \| uVar1 = FUN_003da1de(); \| FUN_007f0894(uVar1,1,&local_18,0,0,param_2,(DAT_00847cbc + -0xf` |
| user.c | 691396 | `undefined1 auStack_224 [516]; \|  \| iVar5 = 3; \| thunk_EXT_FUN_811049dc(auStack_424,0x200); \| thunk_EXT_FUN_811049dc(auStack_224,0x200); \| iV` |
| user.c | 691397 | ` \| iVar5 = 3; \| thunk_EXT_FUN_811049dc(auStack_424,0x200); \| thunk_EXT_FUN_811049dc(auStack_224,0x200); \| iVar1 = thunk_EXT_FUN_810ff5c0(0x1` |
| user.c | 694506 | `uStack_74 = 1; \| uStack_70 = 4; \| uStack_6c = DAT_0084dd1c; \| iStack_7c = local_78 * 0x20000000; \| FUN_007f0816(2,&local_4c,&local_14,0,DAT_` |
| user.c | 694559 | `return 1; \| } \| iVar1 = DAT_0084e594; \| if (iVar2 != 0x20000a) { \| return 0; \| } \| }` |
| user.c | 696571 | `(uVar39 >> 0x16 \| uVar39 << 10)) + \| (uVar39 & uVar51 \| (uVar51 \| uVar39) & uVar47); \| iVar44 = uVar46 + uVar43 + \| ((uVar58 >> 6 \| uVar58 *` |
| user.c | 696579 | `(uVar54 & uVar39 \| (uVar54 \| uVar39) & uVar51); \| iVar44 = uVar41 + uVar52 + \| ((uVar58 ^ uVar42) & uVar60 ^ uVar42) + \| ((uVar60 >> 6 \| uVa` |
| user.c | 696587 | `(uVar48 >> 0x16 \| uVar48 * 0x400)); \| iVar44 = uVar56 + uVar42 + \| ((uVar60 ^ uVar58) & uVar61 ^ uVar58) + \| ((uVar61 >> 6 \| uVar61 * 0x4000` |
| user.c | 696594 | `(uVar53 >> 0x16 \| uVar53 * 0x400)) + (uVar53 & uVar48 \| (uVar53 \| uVar48) & uVar54) + \| iVar44; \| iVar44 = uVar20 + uVar58 + \| ((uVar63 >> 6` |
| user.c | 696602 | `iVar44; \| iVar44 = DAT_00851cf4 + \| uVar57 + uVar60 + \| ((uVar54 >> 6 \| uVar54 * 0x4000000) ^ (uVar54 >> 0xb \| uVar54 * 0x200000) ^ \| (uVar5` |
| user.c | 696609 | `((uVar58 >> 2 \| uVar58 * 0x40000000) ^ (uVar58 >> 0xd \| uVar58 * 0x80000) ^ \| (uVar58 >> 0x16 \| uVar58 * 0x400)); \| iVar44 = ((uVar54 ^ uVar` |
| user.c | 696617 | `(uVar49 & uVar58 \| (uVar49 \| uVar58) & uVar45); \| iVar44 = DAT_00851cfc + \| uVar63 + uVar24 + \| ((uVar53 >> 6 \| uVar53 * 0x4000000) ^ (uVar5` |
| user.c | 696624 | `(uVar61 >> 0x16 \| uVar61 * 0x400)) + \| (uVar61 & uVar49 \| (uVar61 \| uVar49) & uVar58); \| iVar44 = uVar26 + uVar54 + \| ((uVar45 >> 6 \| uVar45` |
| user.c | 696631 | `((uVar60 >> 2 \| uVar60 * 0x40000000) ^ (uVar60 >> 0xd \| uVar60 * 0x80000) ^ \| (uVar60 >> 0x16 \| uVar60 * 0x400)); \| iVar44 = uVar28 + uVar48` |
| user.c | 696639 | `(uVar54 >> 0x16 \| uVar54 * 0x400)); \| iVar44 = DAT_00851d08 + \| uVar30 + uVar53 + \| ((uVar49 >> 6 \| uVar49 * 0x4000000) ^ (uVar49 >> 0xb \| u` |
| user.c | 696646 | `(uVar48 >> 0x16 \| uVar48 * 0x400)) + \| (uVar48 & uVar54 \| (uVar48 \| uVar54) & uVar60); \| iVar44 = uVar32 + uVar45 + \| ((uVar61 >> 6 \| uVar61` |
| user.c | 696653 | `((uVar53 >> 2 \| uVar53 * 0x40000000) ^ (uVar53 >> 0xd \| uVar53 * 0x80000) ^ \| (uVar53 >> 0x16 \| uVar53 * 0x400)); \| iVar44 = uVar34 + uVar58` |
| user.c | 696661 | `(uVar45 & uVar53 \| (uVar45 \| uVar53) & uVar48); \| iVar44 = DAT_00851d14 + \| uVar36 + uVar49 + \| ((uVar54 >> 6 \| uVar54 * 0x4000000) ^ (uVar5` |
| user.c | 696668 | `(uVar58 >> 0x16 \| uVar58 * 0x400)) + \| (uVar58 & uVar45 \| (uVar58 \| uVar45) & uVar53); \| iVar44 = uVar59 + uVar61 + \| ((uVar48 >> 6 \| uVar48` |
| user.c | 696675 | `((uVar49 >> 2 \| uVar49 * 0x40000000) ^ (uVar49 >> 0xd \| uVar49 * 0x80000) ^ \| (uVar49 >> 0x16 \| uVar49 * 0x400)); \| iVar44 = uVar60 + uVar55` |
| user.c | 696684 | `uVar63 = ((uVar35 >> 0x11 \| uVar59 << 0xf) ^ (uVar35 >> 0x13 \| uVar59 << 0xd) ^ uVar50 >> 10) + \| ((uVar46 >> 7 \| (uint)bVar1 << 0x19) ^ (uV` |
| user.c | 696694 | `uVar46 = ((uVar37 >> 0x11 \| uVar55 << 0xf) ^ (uVar37 >> 0x13 \| uVar55 << 0xd) ^ uVar38 >> 10) + \| ((uVar41 >> 7 \| (uint)bVar2 << 0x19) ^ (uV` |
| user.c | 696702 | `((uVar15 >> 2 \| uVar15 * 0x40000000) ^ (uVar15 >> 0xd \| uVar15 * 0x80000) ^ \| (uVar15 >> 0x16 \| uVar15 * 0x400)); \| uVar54 = uVar32 + uVar41` |
| user.c | 696705 | `((uVar63 >> 0x11 \| uVar63 * 0x8000) ^ (uVar63 >> 0x13 \| uVar63 * 0x2000) ^ uVar63 >> 10) \| + ((uVar56 >> 7 \| (uint)bVar3 << 0x19) ^ (uVar17 ` |
| user.c | 696712 | `(uVar50 >> 0x16 \| uVar50 * 0x400)) + \| (uVar50 & uVar15 \| (uVar50 \| uVar15) & uVar60); \| uVar40 = uVar34 + uVar56 + \| ((uVar46 >> 0x11 \| uVa` |
| user.c | 696716 | `+ ((uVar20 >> 7 \| (uint)bVar4 << 0x19) ^ (uVar18 >> 0x12 \| uVar20 << 0xe) ^ uVar20 >> 3); \| iVar44 = DAT_00852160 + \| uVar40 + uVar45 + ((uV` |
| user.c | 696722 | `uVar17 = iVar44 + (uVar38 & uVar50 \| (uVar38 \| uVar50) & uVar15) + \| ((uVar38 >> 2 \| uVar38 * 0x40000000) ^ (uVar38 >> 0xd \| uVar38 * 0x8000` |
| user.c | 696725 | `uVar20 = ((uVar54 >> 0x11 \| uVar54 * 0x8000) ^ (uVar54 >> 0x13 \| uVar54 * 0x2000) ^ uVar54 >> 10) \| + ((uVar57 >> 7 \| (uint)bVar5 << 0x19) ^` |
| user.c | 696732 | `uVar16 = iVar44 + (uVar17 & uVar38 \| (uVar17 \| uVar38) & uVar50) + \| ((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x8000` |
| user.c | 696736 | `+ ((uVar62 >> 7 \| (uint)bVar6 << 0x19) ^ (uVar21 >> 0x12 \| uVar62 << 0xe) ^ uVar62 >> 3) \| + uVar59 + uVar57; \| iVar44 = ((uVar60 ^ uVar61) ` |
| user.c | 696742 | `uVar19 = iVar44 + (uVar16 & uVar17 \| (uVar16 \| uVar17) & uVar38) + \| ((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x8000` |
| user.c | 696745 | `uVar41 = ((uVar20 >> 0x11 \| uVar20 * 0x8000) ^ (uVar20 >> 0x13 \| uVar20 * 0x2000) ^ uVar20 >> 10) \| + ((uVar24 >> 7 \| (uint)bVar7 << 0x19) ^` |
| user.c | 696752 | `uVar22 = iVar44 + (uVar19 & uVar16 \| (uVar19 \| uVar16) & uVar17) + \| ((uVar19 >> 2 \| uVar19 * 0x40000000) ^ (uVar19 >> 0xd \| uVar19 * 0x8000` |
| user.c | 696756 | `+ ((uVar26 >> 7 \| (uint)bVar8 << 0x19) ^ (uVar23 >> 0x12 \| uVar26 << 0xe) ^ uVar26 >> 3) \| + uVar63 + uVar24; \| iVar44 = ((uVar50 ^ uVar15) ` |
| user.c | 696762 | `uVar18 = iVar44 + (uVar22 & uVar19 \| (uVar22 \| uVar19) & uVar16) + \| ((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x8000` |
| user.c | 696765 | `uVar26 = ((uVar41 >> 0x11 \| uVar41 * 0x8000) ^ (uVar41 >> 0x13 \| uVar41 * 0x2000) ^ uVar41 >> 10) \| + ((uVar28 >> 7 \| (uint)bVar9 << 0x19) ^` |
| user.c | 696772 | `uVar15 = iVar44 + (uVar18 & uVar22 \| (uVar18 \| uVar22) & uVar19) + \| ((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x8000` |
| user.c | 696775 | `uVar28 = ((uVar24 >> 0x11 \| uVar24 * 0x8000) ^ (uVar24 >> 0x13 \| uVar24 * 0x2000) ^ uVar24 >> 10) \| + ((uVar30 >> 7 \| (uint)bVar10 << 0x19) ` |
| user.c | 696783 | `(uVar15 >> 0x16 \| uVar15 * 0x400)) + \| (uVar15 & uVar18 \| (uVar15 \| uVar18) & uVar22); \| uVar27 = uVar40 + uVar30 + \| ((uVar26 >> 0x11 \| uVa` |
| user.c | 696787 | `+ ((uVar32 >> 7 \| (uint)bVar11 << 0x19) ^ (uVar29 >> 0x12 \| uVar32 << 0xe) ^ uVar32 >> 3) \| ; \| iVar44 = uVar27 + ((uVar16 ^ uVar17) & uVar1` |
| user.c | 696794 | `(uVar21 >> 0x16 \| uVar21 * 0x400)) + \| (uVar21 & uVar15 \| (uVar21 \| uVar15) & uVar18); \| uVar29 = uVar32 + uVar20 + \| ((uVar28 >> 0x11 \| uVa` |
| user.c | 696798 | `+ ((uVar34 >> 7 \| (uint)bVar12 << 0x19) ^ (uVar31 >> 0x12 \| uVar34 << 0xe) ^ uVar34 >> 3) \| ; \| iVar44 = uVar29 + uVar17 + ((uVar22 >> 6 \| u` |
| user.c | 696804 | `uVar17 = iVar44 + ((uVar23 >> 2 \| uVar23 * 0x40000000) ^ (uVar23 >> 0xd \| uVar23 * 0x80000) ^ \| (uVar23 >> 0x16 \| uVar23 * 0x400)) + \| (uVar` |
| user.c | 696807 | `uVar30 = ((uVar27 >> 0x11 \| uVar27 * 0x8000) ^ (uVar27 >> 0x13 \| uVar27 * 0x2000) ^ uVar27 >> 10) \| + ((uVar36 >> 7 \| (uint)bVar13 << 0x19) ` |
| user.c | 696814 | `uVar16 = iVar44 + (uVar17 & uVar23 \| (uVar17 \| uVar23) & uVar21) + \| ((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x8000` |
| user.c | 696818 | `+ ((uVar59 >> 7 \| (uint)bVar14 << 0x19) ^ (uVar35 >> 0x12 \| uVar59 << 0xe) ^ uVar59 >> 3) \| + uVar41 + uVar36; \| iVar44 = ((uVar18 ^ uVar22)` |
| user.c | 696824 | `uVar19 = iVar44 + (uVar16 & uVar17 \| (uVar16 \| uVar17) & uVar23) + \| ((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x8000` |
| user.c | 696827 | `uVar34 = ((uVar30 >> 0x11 \| uVar30 * 0x8000) ^ (uVar30 >> 0x13 \| uVar30 * 0x2000) ^ uVar30 >> 10) \| + ((uVar55 >> 7 \| (uint)*(byte *)(param_` |
| user.c | 696834 | `uVar22 = iVar44 + ((uVar19 >> 2 \| uVar19 * 0x40000000) ^ (uVar19 >> 0xd \| uVar19 * 0x80000) ^ \| (uVar19 >> 0x16 \| uVar19 * 0x400)) + \| (uVar` |
| user.c | 696835 | `(uVar19 >> 0x16 \| uVar19 * 0x400)) + \| (uVar19 & uVar16 \| (uVar19 \| uVar16) & uVar17); \| uVar37 = ((uVar32 >> 0x11 \| uVar32 * 0x8000) ^ (uVa` |
| user.c | 696838 | `+ ((uVar63 >> 7 \| uVar63 * 0x2000000) ^ (uVar63 >> 0x12 \| uVar63 * 0x4000) ^ uVar63 >> 3) \| + uVar26 + uVar55; \| iVar44 = ((uVar21 ^ uVar15)` |
| user.c | 696844 | `uVar18 = iVar44 + (uVar22 & uVar19 \| (uVar22 \| uVar19) & uVar16) + \| ((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x8000` |
| user.c | 696845 | `((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x80000) ^ \| (uVar22 >> 0x16 \| uVar22 * 0x400)); \| uVar36 = ((uVar34 >> 0x1` |
| user.c | 696847 | `uVar36 = ((uVar34 >> 0x11 \| uVar34 * 0x8000) ^ (uVar34 >> 0x13 \| uVar34 * 0x2000) ^ uVar34 >> 10) \| + ((uVar46 >> 7 \| uVar46 * 0x2000000) ^ ` |
| user.c | 696854 | `uVar15 = iVar44 + (uVar18 & uVar22 \| (uVar18 \| uVar22) & uVar19) + \| ((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x8000` |
| user.c | 696855 | `((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x80000) ^ \| (uVar18 >> 0x16 \| uVar18 * 0x400)); \| uVar45 = ((uVar37 >> 0x1` |
| user.c | 696858 | `+ ((uVar54 >> 7 \| uVar54 * 0x2000000) ^ (uVar54 >> 0x12 \| uVar54 * 0x4000) ^ uVar54 >> 3) \| + uVar27 + uVar46; \| iVar44 = DAT_00852a14 + \| u` |
| user.c | 696866 | `((uVar15 >> 2 \| uVar15 * 0x40000000) ^ (uVar15 >> 0xd \| uVar15 * 0x80000) ^ \| (uVar15 >> 0x16 \| uVar15 * 0x400)); \| uVar31 = uVar29 + uVar54` |
| user.c | 696867 | `(uVar15 >> 0x16 \| uVar15 * 0x400)); \| uVar31 = uVar29 + uVar54 + \| ((uVar36 >> 0x11 \| uVar36 * 0x8000) ^ (uVar36 >> 0x13 \| uVar36 * 0x2000) ` |
| user.c | 696871 | `; \| iVar44 = DAT_00852a18 + \| ((uVar16 ^ uVar17) & uVar19 ^ uVar17) + \| ((uVar19 >> 6 \| uVar19 * 0x4000000) ^ (uVar19 >> 0xb \| uVar19 * 0x20` |
| user.c | 696877 | `uVar23 = iVar44 + ((uVar21 >> 2 \| uVar21 * 0x40000000) ^ (uVar21 >> 0xd \| uVar21 * 0x80000) ^ \| (uVar21 >> 0x16 \| uVar21 * 0x400)) + \| (uVar` |
| user.c | 696878 | `(uVar21 >> 0x16 \| uVar21 * 0x400)) + \| (uVar21 & uVar15 \| (uVar21 \| uVar15) & uVar18); \| uVar50 = ((uVar45 >> 0x11 \| uVar45 * 0x8000) ^ (uVa` |
| user.c | 696881 | `+ ((uVar20 >> 7 \| uVar20 * 0x2000000) ^ (uVar20 >> 0x12 \| uVar20 * 0x4000) ^ uVar20 >> 3) \| + uVar30 + uVar40; \| iVar44 = ((uVar19 ^ uVar16)` |
| user.c | 696888 | `((uVar23 >> 2 \| uVar23 * 0x40000000) ^ (uVar23 >> 0xd \| uVar23 * 0x80000) ^ \| (uVar23 >> 0x16 \| uVar23 * 0x400)); \| uVar33 = uVar20 + uVar32` |
| user.c | 696889 | `(uVar23 >> 0x16 \| uVar23 * 0x400)); \| uVar33 = uVar20 + uVar32 + \| ((uVar31 >> 0x11 \| uVar31 * 0x8000) ^ (uVar31 >> 0x13 \| uVar31 * 0x2000) ` |
| user.c | 696892 | `+ ((uVar58 >> 7 \| uVar58 * 0x2000000) ^ (uVar58 >> 0x12 \| uVar58 * 0x4000) ^ uVar58 >> 3) \| ; \| iVar44 = DAT_00852a20 + \| uVar33 + ((uVar18 ` |
| user.c | 696899 | `uVar16 = iVar44 + (uVar17 & uVar23 \| (uVar17 \| uVar23) & uVar21) + \| ((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x8000` |
| user.c | 696900 | `((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x80000) ^ \| (uVar17 >> 0x16 \| uVar17 * 0x400)); \| uVar38 = ((uVar50 >> 0x1` |
| user.c | 696902 | `uVar38 = ((uVar50 >> 0x11 \| uVar50 * 0x8000) ^ (uVar50 >> 0x13 \| uVar50 * 0x2000) ^ uVar50 >> 10) \| + ((uVar41 >> 7 \| uVar41 * 0x2000000) ^ ` |
| user.c | 696909 | `uVar19 = iVar44 + (uVar16 & uVar17 \| (uVar16 \| uVar17) & uVar23) + \| ((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x8000` |
| user.c | 696910 | `((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x80000) ^ \| (uVar16 >> 0x16 \| uVar16 * 0x400)); \| uVar20 = ((uVar33 >> 0x1` |
| user.c | 696913 | `+ ((uVar24 >> 7 \| uVar24 * 0x2000000) ^ (uVar24 >> 0x12 \| uVar24 * 0x4000) ^ uVar24 >> 3) \| + uVar37 + uVar41; \| iVar44 = ((uVar15 ^ uVar18)` |
| user.c | 696919 | `uVar25 = iVar44 + ((uVar19 >> 2 \| uVar19 * 0x40000000) ^ (uVar19 >> 0xd \| uVar19 * 0x80000) ^ \| (uVar19 >> 0x16 \| uVar19 * 0x400)) + \| (uVar` |
| user.c | 696920 | `(uVar19 >> 0x16 \| uVar19 * 0x400)) + \| (uVar19 & uVar16 \| (uVar19 \| uVar16) & uVar17); \| uVar24 = ((uVar38 >> 0x11 \| uVar38 * 0x8000) ^ (uVa` |
| user.c | 696923 | `+ ((uVar26 >> 7 \| uVar26 * 0x2000000) ^ (uVar26 >> 0x12 \| uVar26 * 0x4000) ^ uVar26 >> 3) \| + uVar36 + uVar24; \| iVar44 = DAT_00852a2c + \| u` |
| user.c | 696930 | `uVar18 = iVar44 + ((uVar25 >> 2 \| uVar25 * 0x40000000) ^ (uVar25 >> 0xd \| uVar25 * 0x80000) ^ \| (uVar25 >> 0x16 \| uVar25 * 0x400)) + \| (uVar` |
| user.c | 696931 | `(uVar25 >> 0x16 \| uVar25 * 0x400)) + \| (uVar25 & uVar19 \| (uVar25 \| uVar19) & uVar16); \| uVar26 = ((uVar20 >> 0x11 \| uVar20 * 0x8000) ^ (uVa` |
| user.c | 696933 | `uVar26 = ((uVar20 >> 0x11 \| uVar20 * 0x8000) ^ (uVar20 >> 0x13 \| uVar20 * 0x2000) ^ uVar20 >> 10) \| + ((uVar28 >> 7 \| uVar28 * 0x2000000) ^ ` |
| user.c | 696941 | `((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x80000) ^ \| (uVar18 >> 0x16 \| uVar18 * 0x400)); \| uVar35 = uVar31 + uVar28` |
| user.c | 696942 | `(uVar18 >> 0x16 \| uVar18 * 0x400)); \| uVar35 = uVar31 + uVar28 + \| ((uVar24 >> 0x11 \| uVar24 * 0x8000) ^ (uVar24 >> 0x13 \| uVar24 * 0x2000) ` |
| user.c | 696945 | `+ ((uVar27 >> 7 \| uVar27 * 0x2000000) ^ (uVar27 >> 0x12 \| uVar27 * 0x4000) ^ uVar27 >> 3) \| ; \| iVar44 = DAT_00852e3c + \| uVar35 + ((uVar16 ` |
| user.c | 696952 | `uVar21 = iVar44 + (uVar15 & uVar18 \| (uVar15 \| uVar18) & uVar25) + \| ((uVar15 >> 2 \| uVar15 * 0x40000000) ^ (uVar15 >> 0xd \| uVar15 * 0x8000` |
| user.c | 696953 | `((uVar15 >> 2 \| uVar15 * 0x40000000) ^ (uVar15 >> 0xd \| uVar15 * 0x80000) ^ \| (uVar15 >> 0x16 \| uVar15 * 0x400)); \| uVar40 = ((uVar26 >> 0x1` |
| user.c | 696956 | `+ ((uVar29 >> 7 \| uVar29 * 0x2000000) ^ (uVar29 >> 0x12 \| uVar29 * 0x4000) ^ uVar29 >> 3) \| + uVar50 + uVar27; \| iVar44 = ((uVar16 ^ uVar17)` |
| user.c | 696963 | `(uVar21 >> 0x16 \| uVar21 * 0x400)) + \| (uVar21 & uVar15 \| (uVar21 \| uVar15) & uVar18); \| uVar28 = uVar29 + uVar33 + \| ((uVar35 >> 0x11 \| uVa` |
| user.c | 696964 | `(uVar21 & uVar15 \| (uVar21 \| uVar15) & uVar18); \| uVar28 = uVar29 + uVar33 + \| ((uVar35 >> 0x11 \| uVar35 * 0x8000) ^ (uVar35 >> 0x13 \| uVar3` |
| user.c | 696967 | `+ ((uVar30 >> 7 \| uVar30 * 0x2000000) ^ (uVar30 >> 0x12 \| uVar30 * 0x4000) ^ uVar30 >> 3) \| ; \| iVar44 = uVar28 + ((uVar19 ^ uVar16) & uVar2` |
| user.c | 696973 | `uVar17 = iVar44 + ((uVar27 >> 2 \| uVar27 * 0x40000000) ^ (uVar27 >> 0xd \| uVar27 * 0x80000) ^ \| (uVar27 >> 0x16 \| uVar27 * 0x400)) + \| (uVar` |
| user.c | 696974 | `(uVar27 >> 0x16 \| uVar27 * 0x400)) + \| (uVar27 & uVar21 \| (uVar27 \| uVar21) & uVar15); \| uVar30 = ((uVar40 >> 0x11 \| uVar40 * 0x8000) ^ (uVa` |
| user.c | 696976 | `uVar30 = ((uVar40 >> 0x11 \| uVar40 * 0x8000) ^ (uVar40 >> 0x13 \| uVar40 * 0x2000) ^ uVar40 >> 10) \| + ((uVar32 >> 7 \| uVar32 * 0x2000000) ^ ` |
| user.c | 696983 | `uVar16 = iVar44 + ((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x80000) ^ \| (uVar17 >> 0x16 \| uVar17 * 0x400)) + \| (uVar` |
| user.c | 696984 | `(uVar17 >> 0x16 \| uVar17 * 0x400)) + \| (uVar17 & uVar27 \| (uVar17 \| uVar27) & uVar21); \| uVar32 = ((uVar28 >> 0x11 \| uVar28 * 0x8000) ^ (uVa` |
| user.c | 696986 | `uVar32 = ((uVar28 >> 0x11 \| uVar28 * 0x8000) ^ (uVar28 >> 0x13 \| uVar28 * 0x2000) ^ uVar28 >> 10) \| + ((uVar34 >> 7 \| uVar34 * 0x2000000) ^ ` |
| user.c | 696993 | `uVar22 = iVar44 + (uVar16 & uVar17 \| (uVar16 \| uVar17) & uVar27) + \| ((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x8000` |
| user.c | 696994 | `((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x80000) ^ \| (uVar16 >> 0x16 \| uVar16 * 0x400)); \| uVar34 = ((uVar30 >> 0x1` |
| user.c | 696996 | `uVar34 = ((uVar30 >> 0x11 \| uVar30 * 0x8000) ^ (uVar30 >> 0x13 \| uVar30 * 0x2000) ^ uVar30 >> 10) \| + ((uVar37 >> 7 \| uVar37 * 0x2000000) ^ ` |
| user.c | 697003 | `uVar25 = iVar44 + (uVar22 & uVar16 \| (uVar22 \| uVar16) & uVar17) + \| ((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x8000` |
| user.c | 697004 | `((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x80000) ^ \| (uVar22 >> 0x16 \| uVar22 * 0x400)); \| uVar37 = ((uVar32 >> 0x1` |
| user.c | 697008 | `+ uVar26 + uVar37; \| iVar44 = DAT_00852e54 + \| ((uVar21 ^ uVar15) & uVar27 ^ uVar15) + \| ((uVar27 >> 6 \| uVar27 * 0x4000000) ^ (uVar27 >> 0x` |
| user.c | 697015 | `((uVar25 >> 2 \| uVar25 * 0x40000000) ^ (uVar25 >> 0xd \| uVar25 * 0x80000) ^ \| (uVar25 >> 0x16 \| uVar25 * 0x400)); \| uVar36 = uVar35 + uVar36` |
| user.c | 697016 | `(uVar25 >> 0x16 \| uVar25 * 0x400)); \| uVar36 = uVar35 + uVar36 + \| ((uVar34 >> 0x11 \| uVar34 * 0x8000) ^ (uVar34 >> 0x13 \| uVar34 * 0x2000) ` |
| user.c | 697019 | `+ ((uVar45 >> 7 \| uVar45 * 0x2000000) ^ (uVar45 >> 0x12 \| uVar45 * 0x4000) ^ uVar45 >> 3) \| ; \| iVar44 = uVar36 + ((uVar27 ^ uVar21) & uVar1` |
| user.c | 697026 | `((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x80000) ^ \| (uVar18 >> 0x16 \| uVar18 * 0x400)); \| uVar58 = uVar40 + uVar45` |
| user.c | 697027 | `(uVar18 >> 0x16 \| uVar18 * 0x400)); \| uVar58 = uVar40 + uVar45 + \| ((uVar37 >> 0x11 \| uVar37 * 0x8000) ^ (uVar37 >> 0x13 \| uVar37 * 0x2000) ` |
| user.c | 697030 | `+ ((uVar31 >> 7 \| uVar31 * 0x2000000) ^ (uVar31 >> 0x12 \| uVar31 * 0x4000) ^ uVar31 >> 3) \| ; \| iVar44 = ((uVar17 ^ uVar27) & uVar16 ^ uVar2` |
| user.c | 697037 | `(uVar15 >> 0x16 \| uVar15 * 0x400)) + \| (uVar15 & uVar18 \| (uVar15 \| uVar18) & uVar25); \| uVar31 = uVar28 + uVar31 + \| ((uVar36 >> 0x11 \| uVa` |
| user.c | 697038 | `(uVar15 & uVar18 \| (uVar15 \| uVar18) & uVar25); \| uVar31 = uVar28 + uVar31 + \| ((uVar36 >> 0x11 \| uVar36 * 0x8000) ^ (uVar36 >> 0x13 \| uVar3` |
| user.c | 697040 | `((uVar36 >> 0x11 \| uVar36 * 0x8000) ^ (uVar36 >> 0x13 \| uVar36 * 0x2000) ^ uVar36 >> 10) \| + ((uVar50 >> 7 \| uVar50 * 0x2000000) ^ (uVar50 >` |
| user.c | 697047 | `uVar54 = iVar44 + (uVar23 & uVar15 \| (uVar23 \| uVar15) & uVar18) + \| ((uVar23 >> 2 \| uVar23 * 0x40000000) ^ (uVar23 >> 0xd \| uVar23 * 0x8000` |
| user.c | 697048 | `((uVar23 >> 2 \| uVar23 * 0x40000000) ^ (uVar23 >> 0xd \| uVar23 * 0x80000) ^ \| (uVar23 >> 0x16 \| uVar23 * 0x400)); \| uVar50 = ((uVar58 >> 0x1` |
| user.c | 697051 | `+ ((uVar33 >> 7 \| uVar33 * 0x2000000) ^ (uVar33 >> 0x12 \| uVar33 * 0x4000) ^ uVar33 >> 3) \| + uVar30 + uVar50; \| iVar44 = ((uVar22 ^ uVar16)` |
| user.c | 697058 | `((uVar54 >> 2 \| uVar54 * 0x40000000) ^ (uVar54 >> 0xd \| uVar54 * 0x80000) ^ \| (uVar54 >> 0x16 \| uVar54 * 0x400)); \| uVar19 = uVar32 + uVar33` |
| user.c | 697059 | `(uVar54 >> 0x16 \| uVar54 * 0x400)); \| uVar19 = uVar32 + uVar33 + \| ((uVar31 >> 0x11 \| uVar31 * 0x8000) ^ (uVar31 >> 0x13 \| uVar31 * 0x2000) ` |
| user.c | 697062 | `+ ((uVar38 >> 7 \| uVar38 * 0x2000000) ^ (uVar38 >> 0x12 \| uVar38 * 0x4000) ^ uVar38 >> 3) \| ; \| iVar44 = uVar19 + uVar16 + ((uVar18 >> 6 \| u` |
| user.c | 697069 | `(uVar29 >> 0x16 \| uVar29 * 0x400)) + (uVar29 & uVar54 \| (uVar29 \| uVar54) & uVar23) + \| iVar44; \| uVar16 = uVar34 + uVar38 + \| ((uVar50 >> 0` |
| user.c | 697070 | `iVar44; \| uVar16 = uVar34 + uVar38 + \| ((uVar50 >> 0x11 \| uVar50 * 0x8000) ^ (uVar50 >> 0x13 \| uVar50 * 0x2000) ^ uVar50 >> 10) \| + ((uVar20` |
| user.c | 697072 | `((uVar50 >> 0x11 \| uVar50 * 0x8000) ^ (uVar50 >> 0x13 \| uVar50 * 0x2000) ^ uVar50 >> 10) \| + ((uVar20 >> 7 \| uVar20 * 0x2000000) ^ (uVar20 >` |
| user.c | 697079 | `uVar22 = iVar44 + ((uVar27 >> 2 \| uVar27 * 0x40000000) ^ (uVar27 >> 0xd \| uVar27 * 0x80000) ^ \| (uVar27 >> 0x16 \| uVar27 * 0x400)) + \| (uVar` |
| user.c | 697080 | `(uVar27 >> 0x16 \| uVar27 * 0x400)) + \| (uVar27 & uVar29 \| (uVar27 \| uVar29) & uVar54); \| uVar33 = ((uVar19 >> 0x11 \| uVar19 * 0x8000) ^ (uVa` |
| user.c | 697082 | `uVar33 = ((uVar19 >> 0x11 \| uVar19 * 0x8000) ^ (uVar19 >> 0x13 \| uVar19 * 0x2000) ^ uVar19 >> 10) \| + ((uVar24 >> 7 \| uVar24 * 0x2000000) ^ ` |
| user.c | 697089 | `uVar21 = (uVar22 & uVar27 \| (uVar22 \| uVar27) & uVar29) + \| ((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x80000) ^ \| (u` |
| user.c | 697090 | `((uVar22 >> 2 \| uVar22 * 0x40000000) ^ (uVar22 >> 0xd \| uVar22 * 0x80000) ^ \| (uVar22 >> 0x16 \| uVar22 * 0x400)) + iVar44; \| uVar38 = ((uVar` |
| user.c | 697093 | `+ ((uVar26 >> 7 \| uVar26 * 0x2000000) ^ (uVar26 >> 0x12 \| uVar26 * 0x4000) ^ uVar26 >> 3) \| + uVar36 + uVar24; \| iVar44 = ((uVar23 ^ uVar15)` |
| user.c | 697100 | `((uVar21 >> 2 \| uVar21 * 0x40000000) ^ (uVar21 >> 0xd \| uVar21 * 0x80000) ^ \| (uVar21 >> 0x16 \| uVar21 * 0x400)); \| uVar20 = uVar58 + uVar26` |
| user.c | 697101 | `(uVar21 >> 0x16 \| uVar21 * 0x400)); \| uVar20 = uVar58 + uVar26 + \| ((uVar33 >> 0x11 \| uVar33 * 0x8000) ^ (uVar33 >> 0x13 \| uVar33 * 0x2000) ` |
| user.c | 697104 | `+ ((uVar35 >> 7 \| uVar35 * 0x2000000) ^ (uVar35 >> 0x12 \| uVar35 * 0x4000) ^ uVar35 >> 3) \| ; \| iVar44 = uVar20 + ((uVar54 ^ uVar23) & uVar2` |
| user.c | 697111 | `((uVar17 >> 2 \| uVar17 * 0x40000000) ^ (uVar17 >> 0xd \| uVar17 * 0x80000) ^ \| (uVar17 >> 0x16 \| uVar17 * 0x400)); \| uVar15 = uVar35 + uVar31` |
| user.c | 697112 | `(uVar17 >> 0x16 \| uVar17 * 0x400)); \| uVar15 = uVar35 + uVar31 + \| ((uVar38 >> 0x11 \| uVar38 * 0x8000) ^ (uVar38 >> 0x13 \| uVar38 * 0x2000) ` |
| user.c | 697116 | `; \| iVar44 = DAT_0085329c + \| ((uVar29 ^ uVar54) & uVar27 ^ uVar54) + \| ((uVar27 >> 6 \| uVar27 * 0x4000000) ^ (uVar27 >> 0xb \| uVar27 * 0x20` |
| user.c | 697123 | `(uVar25 >> 0x16 \| uVar25 * 0x400)) + \| (uVar25 & uVar17 \| (uVar25 \| uVar17) & uVar21); \| uVar31 = uVar50 + uVar40 + \| ((uVar20 >> 0x11 \| uVa` |
| user.c | 697124 | `(uVar25 & uVar17 \| (uVar25 \| uVar17) & uVar21); \| uVar31 = uVar50 + uVar40 + \| ((uVar20 >> 0x11 \| uVar20 * 0x8000) ^ (uVar20 >> 0x13 \| uVar2` |
| user.c | 697126 | `((uVar20 >> 0x11 \| uVar20 * 0x8000) ^ (uVar20 >> 0x13 \| uVar20 * 0x2000) ^ uVar20 >> 10) \| + ((uVar28 >> 7 \| uVar28 * 0x2000000) ^ (uVar28 >` |
| user.c | 697133 | `((uVar23 >> 2 \| uVar23 * 0x40000000) ^ (uVar23 >> 0xd \| uVar23 * 0x80000) ^ \| (uVar23 >> 0x16 \| uVar23 * 0x400)); \| uVar21 = uVar21 + iVar44` |
| user.c | 697134 | `(uVar23 >> 0x16 \| uVar23 * 0x400)); \| uVar21 = uVar21 + iVar44; \| uVar50 = ((uVar15 >> 0x11 \| uVar15 * 0x8000) ^ (uVar15 >> 0x13 \| uVar15 * ` |
| user.c | 697137 | `+ ((uVar30 >> 7 \| uVar30 * 0x2000000) ^ (uVar30 >> 0x12 \| uVar30 * 0x4000) ^ uVar30 >> 3) \| + uVar19 + uVar28; \| iVar44 = ((uVar22 ^ uVar27)` |
| user.c | 697143 | `uVar18 = iVar44 + (uVar35 & uVar23 \| (uVar35 \| uVar23) & uVar25) + \| ((uVar35 >> 2 \| uVar35 * 0x40000000) ^ (uVar35 >> 0xd \| uVar35 * 0x8000` |
| user.c | 697144 | `((uVar35 >> 2 \| uVar35 * 0x40000000) ^ (uVar35 >> 0xd \| uVar35 * 0x80000) ^ \| (uVar35 >> 0x16 \| uVar35 * 0x400)); \| uVar19 = ((uVar31 >> 0x1` |
| user.c | 697146 | `uVar19 = ((uVar31 >> 0x11 \| uVar31 * 0x8000) ^ (uVar31 >> 0x13 \| uVar31 * 0x2000) ^ uVar31 >> 10) \| + ((uVar32 >> 7 \| uVar32 * 0x2000000) ^ ` |
| user.c | 697153 | `uVar15 = ((uVar18 >> 2 \| uVar18 * 0x40000000) ^ (uVar18 >> 0xd \| uVar18 * 0x80000) ^ \| (uVar18 >> 0x16 \| uVar18 * 0x400)) + (uVar18 & uVar35` |
| user.c | 697154 | `(uVar18 >> 0x16 \| uVar18 * 0x400)) + (uVar18 & uVar35 \| (uVar18 \| uVar35) & uVar23) + \| iVar44; \| uVar27 = ((uVar50 >> 0x11 \| uVar50 * 0x800` |
| user.c | 697157 | `+ ((uVar34 >> 7 \| uVar34 * 0x2000000) ^ (uVar34 >> 0x12 \| uVar34 * 0x4000) ^ uVar34 >> 3) \| + uVar32 + uVar33; \| iVar44 = uVar27 + uVar22 + ` |
| user.c | 697164 | `((uVar15 >> 2 \| uVar15 * 0x40000000) ^ (uVar15 >> 0xd \| uVar15 * 0x80000) ^ \| (uVar15 >> 0x16 \| uVar15 * 0x400)); \| iVar44 = uVar34 + uVar38` |
| user.c | 697165 | `(uVar15 >> 0x16 \| uVar15 * 0x400)); \| iVar44 = uVar34 + uVar38 + \| ((uVar19 >> 0x11 \| uVar19 * 0x8000) ^ (uVar19 >> 0x13 \| uVar19 * 0x2000) ` |
| user.c | 697167 | `((uVar19 >> 0x11 \| uVar19 * 0x8000) ^ (uVar19 >> 0x13 \| uVar19 * 0x2000) ^ uVar19 >> 10) \| + ((uVar37 >> 7 \| uVar37 * 0x2000000) ^ (uVar37 >` |
| user.c | 697174 | `((uVar16 >> 2 \| uVar16 * 0x40000000) ^ (uVar16 >> 0xd \| uVar16 * 0x80000) ^ \| (uVar16 >> 0x16 \| uVar16 * 0x400)) + iVar44; \| iVar44 = uVar37` |
| user.c | 697175 | `(uVar16 >> 0x16 \| uVar16 * 0x400)) + iVar44; \| iVar44 = uVar37 + uVar20 + \| ((uVar27 >> 0x11 \| uVar27 * 0x8000) ^ (uVar27 >> 0x13 \| uVar27 *` |
| user.c | 697177 | `((uVar27 >> 0x11 \| uVar27 * 0x8000) ^ (uVar27 >> 0x13 \| uVar27 * 0x2000) ^ uVar27 >> 10) \| + ((uVar36 >> 7 \| uVar36 * 0x2000000) ^ (uVar36 >` |
| user.c | 700435 | `int *piVar9; \| undefined1 auStack_218 [516]; \|  \| thunk_EXT_FUN_811049dc(auStack_218,0x200); \| iVar1 = DAT_0085a404; \| uVar8 = 0; \| FUN_0029` |
| user.c | 707734 | `if (iVar2 != 0) { \| FUN_003da36e(puVar1); \| } \| if ((*(int *)(param_1 + 0x200) == 2) \|\| (*(int *)(param_1 + 0x200) == 4)) { \| iVar4 = DAT_00` |
| user.c | 707740 | `} \| iVar2 = thunk_EXT_FUN_810ffa5c(0x20c,0x44444444,s_mmibt_filetransfer_c_00867a77 + 1,0x15f); \| if (iVar2 != 0) { \| thunk_EXT_FUN_811049dc` |
| user.c | 707743 | `thunk_EXT_FUN_811049dc(iVar2,0x200); \| uVar3 = FUN_007f1d80(param_1); \| FUN_007f19f0(iVar2,param_1,uVar3); \| *(undefined4 *)(iVar2 + 0x200) ` |
| user.c | 709334 | `undefined2 local_c [2]; \|  \| thunk_EXT_FUN_811049dc(auStack_50,0x40); \| thunk_EXT_FUN_811049dc(auStack_250,0x200); \| local_10[0] = 0xff; \| l` |
| user.c | 709373 | `undefined2 local_18 [4]; \|  \| thunk_EXT_FUN_811049dc(auStack_60,0x44); \| thunk_EXT_FUN_811049dc(auStack_260,0x200); \| local_18[0] = 0xff; \| ` |
| user.c | 709412 | `undefined2 local_18 [4]; \|  \| thunk_EXT_FUN_811049dc(auStack_60,0x44); \| thunk_EXT_FUN_811049dc(auStack_260,0x200); \| local_18[0] = 0xff; \| ` |
| user.c | 709477 | `undefined2 local_18 [2]; \| undefined2 local_14 [2]; \|  \| thunk_EXT_FUN_811049dc(auStack_218,0x200); \| local_14[0] = 0xff; \| local_18[0] = 0;` |
| user.c | 711719 | `FUN_000cf356(&local_50,0,uVar2,DAT_0086f9f4 + -1); \| } \| FUN_007f38d0(iVar7,iVar6 + 0x31,&local_50); \| uVar3 = FUN_0086f74a(auStack_2c8,0x20` |
| user.c | 712382 | `FUN_0041fcc0(param_1); \| goto LAB_00420fde; \| } \| iVar3 = thunk_EXT_FUN_810ffa74(0x200,DAT_00421400,0x526); \| if (iVar3 != 0) { \| thunk_EXT_` |
| user.c | 712384 | `} \| iVar3 = thunk_EXT_FUN_810ffa74(0x200,DAT_00421400,0x526); \| if (iVar3 != 0) { \| thunk_EXT_FUN_810f7460(iVar3,0x200); \| iVar2 = FUN_00420` |
| user.c | 712392 | `else { \| piVar4 = param_1 + 0xb; \| FUN_003b919c(piVar4,0); \| thunk_EXT_FUN_811049dc(piVar4,0x200); \| FUN_007f1a1e(piVar4,0xff,iVar3,local_24` |
| user.c | 712550 | `if (uVar1 + uVar2 == 0x40) { \| FUN_00870828(param_1); \| uVar2 = *param_1; \| *param_1 = uVar2 + 0x200; \| param_1[1] = param_1[1] + (uint)(0xf` |
| user.c | 713156 | `int local_20; \| undefined2 local_1c [2]; \|  \| thunk_EXT_FUN_811049dc(auStack_284,0x200); \| local_1c[0] = 0xff; \| local_20 = 0; \| thunk_EXT_F` |
| user.c | 720322 | `uVar3 = param_1[4] & 0x3f \| \| (uVar3 & 3) << 0x18 \| (param_1[1] & 0x3f) << 0x12 \| (param_1[2] & 0x3f) << 0xc \| \| (param_1[3] & 0x3f) << 6; \|` |
| user.c | 721375 | `piVar1 = (int *)uVar10; \| uVar5 = *puVar2 & 0xffff; \| uVar3 = *puVar2 >> 0x10; \| uVar6 = uVar5 * uVar3 * 0x20000; \| iVar4 = uVar3 * uVar3 + ` |
| user.c | 721385 | `if (param_3 == 1) break; \| uVar5 = puVar2[1] & 0xffff; \| uVar3 = puVar2[1] >> 0x10; \| uVar6 = uVar5 * uVar3 * 0x20000; \| iVar4 = uVar3 * uVa` |
| user.c | 721397 | `} \| uVar5 = puVar2[2] & 0xffff; \| uVar3 = puVar2[2] >> 0x10; \| uVar6 = uVar5 * uVar3 * 0x20000; \| iVar4 = uVar3 * uVar3 + (uVar5 * uVar3 >> ` |
| user.c | 721409 | `} \| uVar5 = puVar2[3] & 0xffff; \| uVar3 = puVar2[3] >> 0x10; \| uVar6 = uVar5 * uVar3 * 0x20000; \| iVar4 = uVar3 * uVar3 + (uVar5 * uVar3 >> ` |
| user.c | 723712 | ` \| uVar2 = *param_2 & 0xffff; \| uVar4 = *param_2 >> 0x10; \| uVar3 = uVar2 * uVar4 * 0x20000; \| uVar4 = uVar4 * uVar4 + (uVar2 * uVar4 >> 0xf` |
| user.c | 723750 | `uVar8 = param_2[1] & 0xffff; \| uVar4 = param_2[1] >> 0x10; \| uVar5 = uVar4 * uVar4 + (uVar8 * uVar4 >> 0xf); \| uVar10 = uVar8 * uVar4 * 0x20` |
| user.c | 723861 | `param_1[3] = uVar8 + uVar10; \| uVar8 = param_2[2] & 0xffff; \| uVar3 = param_2[2] >> 0x10; \| uVar5 = uVar8 * uVar3 * 0x20000; \| uVar3 = uVar3` |
| user.c | 724042 | `uVar8 = param_2[3] & 0xffff; \| uVar3 = param_2[3] >> 0x10; \| uVar4 = uVar3 * uVar3 + (uVar8 * uVar3 >> 0xf); \| uVar10 = uVar8 * uVar3 * 0x20` |
| user.c | 724290 | `uVar5 = param_2[4] & 0xffff; \| uVar3 = param_2[4] >> 0x10; \| uVar4 = uVar3 * uVar3 + (uVar5 * uVar3 >> 0xf); \| uVar8 = uVar5 * uVar3 * 0x200` |
| user.c | 724503 | `param_1[9] = uVar7 + uVar4; \| uVar10 = param_2[5] & 0xffff; \| uVar3 = param_2[5] >> 0x10; \| uVar8 = uVar10 * uVar3 * 0x20000; \| uVar3 = uVar` |
| user.c | 724650 | `uVar5 = param_2[6] & 0xffff; \| uVar3 = param_2[6] >> 0x10; \| uVar4 = uVar3 * uVar3 + (uVar5 * uVar3 >> 0xf); \| uVar8 = uVar5 * uVar3 * 0x200` |
| user.c | 724727 | `param_1[0xd] = uVar7 + uVar5; \| uVar8 = param_2[7] & 0xffff; \| uVar5 = param_2[7] >> 0x10; \| uVar10 = uVar8 * uVar5 * 0x20000; \| iVar1 = uVa` |
| user.c | 724762 | ` \| uVar3 = *param_2 & 0xffff; \| uVar1 = *param_2 >> 0x10; \| uVar4 = uVar3 * uVar1 * 0x20000; \| uVar10 = uVar1 * uVar1 + (uVar3 * uVar1 >> 0x` |
| user.c | 724800 | `uVar7 = param_2[1] & 0xffff; \| uVar4 = param_2[1] >> 0x10; \| uVar10 = uVar4 * uVar4 + (uVar7 * uVar4 >> 0xf); \| uVar9 = uVar7 * uVar4 * 0x20` |
| user.c | 724912 | `uVar10 = param_2[2] & 0xffff; \| uVar3 = param_2[2] >> 0x10; \| uVar4 = uVar3 * uVar3 + (uVar10 * uVar3 >> 0xf); \| uVar7 = uVar10 * uVar3 * 0x` |
| user.c | 724989 | `param_1[5] = uVar6 + uVar10; \| uVar7 = param_2[3] & 0xffff; \| uVar10 = param_2[3] >> 0x10; \| uVar9 = uVar7 * uVar10 * 0x20000; \| iVar2 = uVa` |

## 7. בקר NAND ומחיצות
*וודאות:* בינונית*
| קובץ | שורה | קטע קוד |
|---|---|---|
| boot0.c | 2573 | `iVar5 = FUN_0000085a(*puVar3,&local_3c); \| if (iVar5 == 0) { \| uVar2 = CONCAT11((undefined1)local_3c,local_3c._1_1_); \| FUN_00001e28(s_boot0` |
| boot0.c | 2650 | `uVar12 = uVar12 + 1; \| } while( true ); \| } \| FUN_00001e28(s_boot0_nand_set_param_fail__00001bdc); \| uVar4 = *puVar3; \| goto LAB_00001a8c; \|` |
| boot0.c | 2654 | `uVar4 = *puVar3; \| goto LAB_00001a8c; \| } \| FUN_00001e28(s_fdl2_not_fand_NandFlash_ID_in_Na_00001bf8,local_3c & 0xff,local_3c._1_1_); \| } \| ` |
| boot0.c | 2657 | `FUN_00001e28(s_fdl2_not_fand_NandFlash_ID_in_Na_00001bf8,local_3c & 0xff,local_3c._1_1_); \| } \| else { \| FUN_00001e28(s_boot0_read_Nand_ID_f` |
| boot0.c | 3819 | `iVar4 = DAT_00002ec4; \| *(undefined4 *)(DAT_00002ec4 + 0xa4) = DAT_00002ec0; \| *(undefined4 *)(iVar4 + 0xb8) = DAT_00002ec8; \| *(undefined4 ` |
| cm4_b.c | 24862 | ` \|  \|  \| /* Function: FUN_0001fecc */ \|  \| uint FUN_0001fecc(int param_1) \| ` |
| cm4_b.c | 24864 | ` \| /* Function: FUN_0001fecc */ \|  \| uint FUN_0001fecc(int param_1) \|  \| { \| return ((uint)*(byte *)(param_1 + 6) * 0x10000 + (uint)*(byte *` |
| cm4_b.c | 35132 | `iVar1 = FUN_0005201c(); \| *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) \| 0x10000; \| if (*(int *)(iVar1 + 0x10) == 0x10) { \| FUN_000` |
| cm4_b.c | 47796 | `FUN_0001ba5a(); \| puVar13 = puVar3 + 0xb; \| FUN_0001ce84(puVar13); \| uVar11 = FUN_0001fecc(puVar13); \| FUN_0003a7ee(iVar10,uVar11); \| uVar11` |
| cm4_b.c | 48341 | `case 10: \| if (((param_1 == 0) && (sVar7 != 7)) && (iVar10 == 2)) { \| FUN_0001ce84(local_38); \| uVar15 = FUN_0001fecc(local_38); \| FUN_0003a` |
| cm4_b.c | 60829 | `FUN_0004898c(); \| FUN_00048a7c(*DAT_00046890 + (short)(ushort)*(byte *)(iVar6 + 4) * 0x19c); \| LAB_00046838: \| FUN_0005fecc(*(undefined1 *)(` |
| cm4_b.c | 60889 | `FUN_00050b74(iVar1 + 0xe4); \| FUN_00018708(); \| *DAT_000469f0 = *DAT_000469f0 & 0xffffff1f; \| FUN_0005fecc(*(undefined1 *)(iVar1 + 0x7d),*(u` |
| cm4_b.c | 65331 | `if (DAT_0004cd94[10] == '\x01') { \| FUN_00003d8c(9,*DAT_0004cd94,1,DAT_0004cd94[0x11],DAT_0004cd94[0x12]); \| FUN_00018688(); \| FUN_0005fecc(` |
| cm4_b.c | 65350 | `else { \| FUN_00037146(4); \| *DAT_0004cd98 = *DAT_0004cd98 & 0xffffffef; \| FUN_0005fecc(puVar2[0x11],0); \| FUN_00018946(puVar2[0x14]); \| } \| ` |
| cm4_b.c | 67980 | `int local_18; \| undefined2 local_14; \|  \| iVar2 = DAT_0004eecc; \| iVar1 = DAT_0004eec4; \| FUN_000520a0(local_28); \| FUN_00051d7a(iVar1 + 0x2` |
| cm4_b.c | 76454 | `iVar12 = iVar12 + 1; \| } \| if (iVar10 == 0) { \| lVar3 = (ulonglong)DAT_00056ecc * (ulonglong)(uint)bVar1; \| FUN_00031000(iVar5 + ((uint)bVar` |
| cm4_b.c | 77328 | `*(undefined1 *)(param_1 + 0x71) = 1; \| *(undefined1 *)(param_1 + 0x72) = 0; \| } \| FUN_0005fecc(*(undefined1 *)(param_1 + 0x71),*(undefined1 ` |
| cm4_b.c | 80094 | `*(undefined4 *)(iVar1 + 8) = 0; \| *(undefined1 *)(iVar1 + 1) = *(undefined1 *)(iVar1 + 0xc); \| *(undefined1 *)(iVar1 + 2) = 0; \| FUN_0005fec` |
| cm4_b.c | 81734 | `} \| *(undefined1 *)(iVar6 + 1) = uVar4; \| *(undefined1 *)(iVar6 + 2) = 0; \| FUN_0005fecc(); \| if (*(char *)(iVar3 + 8) == '\0') { \| if (*(ch` |
| cm4_b.c | 84015 | ` \|  \|  \| /* Function: FUN_0005fecc */ \|  \| void FUN_0005fecc(int param_1,uint param_2) \| ` |
| cm4_b.c | 84017 | ` \| /* Function: FUN_0005fecc */ \|  \| void FUN_0005fecc(int param_1,uint param_2) \|  \| { \| int iVar1;` |
| fdl2.c | 3340 | `iVar4 = DAT_000037ec; \| *(int *)(DAT_000037ec + 0x18) = iVar2; \| if (iVar2 == 0) { \| pcVar3 = s_fdl2_NANDCTL_Open_failed__000037f0; \| } \| el` |
| fdl2.c | 3346 | `FUN_00000844(iVar2); \| iVar2 = FUN_00000c48(*(undefined4 *)(iVar4 + 0x18),&local_28); \| if (iVar2 != 0) { \| FUN_00005c74(s_fdl2_NANDCTL_Read` |
| fdl2.c | 3351 | `return 1; \| } \| uVar1 = CONCAT11((undefined1)local_28,local_28._1_1_); \| FUN_00005c74(s_fdl2_nand_flash_ID___0x_0x__0000382c); \| iVar2 = FUN` |
| fdl2.c | 3356 | `*(int *)(iVar4 + 0x10) = iVar2; \| if (iVar2 == 0) { \| FUN_0000344c(*(undefined4 *)(iVar4 + 0x18)); \| FUN_00005c74(s_fdl2_not_fand_NandFlash_` |
| fdl2.c | 3407 | `} \| iVar4 = FUN_000058be(0,1,0,0,0,0,0); \| if (iVar4 == 0) { \| FUN_00005c74(s_fdl2_nand_flash_init_success__00003cf8); \| return 0; \| } \| }` |
| fdl2.c | 4887 | `FUN_0000b47a(); \| } \| else if (iVar1 != 4) { \| FUN_00005c74(s_nand_init_failed__0x_0x__00005b10,iVar1); \| switch(iVar1) { \| case 0: \| uVar2 ` |
| fdl2.c | 7645 | `if (local_30 < uVar4 + uVar3) break; \| iVar1 = FUN_00005686(param_1,uVar3,uVar4,DAT_0000b1f4); \| if ((iVar1 != 0) && (iVar1 != 4)) { \| pcVar` |
| fdl2.c | 7650 | `} \| iVar1 = FUN_000056f8(param_2,uVar3,uVar4,DAT_0000b1f4); \| if (iVar1 != 0) { \| pcVar2 = s_nand_partiition_copy_dst_info_SC_0000b26c; \| go` |
| fdl2.c | 7657 | `} \| iVar1 = FUN_00005686(param_1,uVar3,local_30 - uVar3,DAT_0000b1f4); \| if ((iVar1 != 0) && (iVar1 != 4)) { \| pcVar2 = s_nand_partiition_co` |
| fdl2.c | 7663 | `iVar1 = FUN_000056f8(param_2,uVar3,local_30 - uVar3,DAT_0000b1f4); \| uVar3 = local_30; \| } while (iVar1 == 0); \| pcVar2 = s_nand_partiition_` |
| fdl2.c | 7668 | `FUN_00005c74(pcVar2); \| } \| else { \| FUN_00005c74(s_nand_partiition_copy_dst_info_SC_0000b1f8); \| } \| } \| return 0;` |
| img_90000024.c | 7914 | ` \|  \|  \| /* Function: FUN_00007ecc */ \|  \| undefined4 FUN_00007ecc(void) \| ` |
| img_90000024.c | 7916 | ` \| /* Function: FUN_00007ecc */ \|  \| undefined4 FUN_00007ecc(void) \|  \| { \| FUN_000079d0();` |
| img_90000024.c | 12364 | `if (bVar12) { \| if (puVar3[1] == 0) { \| uVar4 = FUN_000006ec(s_alpha_base_address_is_invalid_0000eca0); \| FUN_000006e8(s_layer_ptr_>alpha_ba` |
| img_90000024.c | 20019 | `local_30 = param_2; \| uStack_2c = param_3; \| iStack_28 = param_4; \| FUN_0001ecca(DAT_0001ea74,param_3,param_4,&local_40,&uStack_3c); \| puVar` |
| img_90000024.c | 20092 | ` \|  \|  \| /* Function: FUN_0001ecca */ \|  \| void FUN_0001ecca(int param_1,uint param_2,int param_3,uint *param_4,int *param_5) \| ` |
| img_90000024.c | 20094 | ` \| /* Function: FUN_0001ecca */ \|  \| void FUN_0001ecca(int param_1,uint param_2,int param_3,uint *param_4,int *param_5) \|  \| { \| *param_4 = ` |
| img_90000024.c | 21905 | ` \|  \|  \| /* Function: FUN_0001fecc */ \|  \| undefined8 FUN_0001fecc(int param_1,uint param_2) \| ` |
| img_90000024.c | 21907 | ` \| /* Function: FUN_0001fecc */ \|  \| undefined8 FUN_0001fecc(int param_1,uint param_2) \|  \| { \| int iVar1;` |
| kernel.c | 5933 | `param_1[3] = param_5; \| uVar2 = FUN_0017b9a0(0x80); \| piVar1 = DAT_0000bed0; \| *param_1 = DAT_0000becc; \| iVar3 = *piVar1; \| if (iVar3 == 0)` |
| kernel.c | 8158 | `thunk_FUN_006fb59e(s_nas_swth_context_ptr_g_>acc_clas_0081d420, \| s_nas_swth_signal_conversion_c_0081c9a4,0x4fd,uVar68); \| } \| FUN_0097aecc(` |
| kernel.c | 8280 | `FUN_0097af76(UNRECOVERED_JUMPTABLE + uVar60 * 8 + 0x112, \| *(int *)(*(int *)(iVar45 + *puVar23 * 4) + 4) + uVar60 * 8 + 0x77c); \| } \| FUN_00` |
| kernel.c | 11311 | `*piVar53 = piVar58[2]; \| *piVar50 = *piVar58; \| *piVar20 = piVar58[3]; \| *DAT_00821ecc = piVar58[4]; \| *DAT_00821ed0 = piVar58[5]; \| UNRECOV` |
| kernel.c | 13475 | ` \| piVar3 = DAT_00017e98; \| if (*(short *)(*DAT_00017e98 + 0x2a0) != 0) { \| FUN_006fdf4a(s_At__d___mta_log_c__s___Failed_____00017ecc,0x255,` |
| kernel.c | 13524 | ` \| piVar3 = DAT_00017e98; \| if (*(short *)(*DAT_00017e98 + 0x2a0) != 0) { \| FUN_006fdf4a(s_At__d___mta_log_c__s___Failed_____00017ecc,0x285,` |
| kernel.c | 20390 | `return; \| } \| if (sVar1 == 0x300f) { \| puVar9 = *(undefined4 **)(*DAT_008eeecc + 0x22c); \| local_28 = 0x118; \| uStack_2c = 0x4f3; \| local_30` |
| kernel.c | 28611 | `uVar2 = 0x81; \| iVar5 = _DAT_0002deac + 5; \| } \| FUN_006f4b10(0x26,iVar5,&DAT_0002dee0,&DAT_0002decc,uVar2); \| return 0; \| } \| if (*pcVar7 <` |
| kernel.c | 28621 | `pcVar7 = &DAT_0002dec0; \| } \| } \| FUN_006f4b10(0x26,iVar5,&DAT_0002dee8,&DAT_0002decc,uVar2,pcVar7); \| return 0; \| } \| ` |
| kernel.c | 30605 | `); \| _local_38 = CONCAT12(0,local_38); \| LAB_00036f5e: \| FUN_0027ecca(&local_50); \| iVar10 = DAT_00036fb0; \| *(undefined1 *)(*piVar3 + 0x6f)` |
| kernel.c | 53198 | `if (*(char *)(param_1 + 0xac) != '\0') { \| if ((iVar4 != 4) && (iVar3 != 2)) { \| uVar1 = FUN_006fd49c(DAT_0005eec8); \| thunk_FUN_006fb59e(s_` |
| kernel.c | 97335 | `undefined4 uVar6; \| undefined *local_28; \|  \| iVar3 = DAT_000abecc; \| uVar6 = 1; \| local_28 = (undefined *)0x0; \| if (*(char *)(DAT_000abecc` |
| kernel.c | 97338 | `iVar3 = DAT_000abecc; \| uVar6 = 1; \| local_28 = (undefined *)0x0; \| if (*(char *)(DAT_000abecc + 0x50c) == '\0') { \| uVar6 = 0; \| } \| else {` |
| kernel.c | 97415 | `} \| iVar4 = FUN_000aad18(local_28); \| if (iVar4 == 0) { \| uVar5 = FUN_006fd49c(s_L1C_DCLT_SaveCctrchFrameInfo_no_s_000ac8ac,local_28[0]); \| ` |
| kernel.c | 97464 | `FUN_000aadb4(unaff_r4,uVar8); \| if ('\x02' < *pcVar1) { \| uVar5 = thunk_FUN_000024fa(); \| FUN_006f4b10(3,DAT_000ac888 + 5,s_L1C_DCLT_SaveCct` |
| kernel.c | 97571 | `FUN_000aadb4(unaff_r4,local_2c[0]); \| if ('\x02' < *pcVar1) { \| uVar6 = thunk_FUN_000024fa(); \| FUN_006f4b10(3,DAT_000ac888 + 9,s_L1C_DCLT_S` |
| kernel.c | 97665 | `FUN_000aadb4(unaff_r4,uVar9); \| if ('\x02' < *pcVar1) { \| uVar6 = thunk_FUN_000024fa(); \| FUN_006f4b10(3,DAT_000acd2c + 9,s_L1C_DCLT_SaveCct` |
| kernel.c | 119715 | `} \| } \| else if (uVar5 < 2) { \| if ((*(int *)(DAT_000cbecc + uVar5 * 0x408) != 0) && \| (cVar1 = *(char *)(DAT_000cbecc + uVar5 * 0x408 + 4),` |
| kernel.c | 119716 | `} \| else if (uVar5 < 2) { \| if ((*(int *)(DAT_000cbecc + uVar5 * 0x408) != 0) && \| (cVar1 = *(char *)(DAT_000cbecc + uVar5 * 0x408 + 4), cVa` |
| kernel.c | 124603 | `} \| } \| for (uVar3 = 0; uVar3 < *puVar1; uVar3 = uVar3 + 1 & 0xff) { \| if ('\x02' < *DAT_000d2ecc) { \| FUN_006f4b10(0x15,DAT_000d2ed4,DAT_00` |
| kernel.c | 124793 | `} \| psVar8 = (short *)FUN_0037529e(2,0xae); \| *psVar8 = sVar9; \| if ('\x02' < *DAT_000d2ecc) { \| FUN_006f4b10(0x15,DAT_000d2ee4 + 1,DAT_000d` |
| kernel.c | 124838 | `*(undefined1 *)(piVar4 + 8) = 0; \| uVar10 = uVar10 + 1 & 0xffff; \| } \| if ('\x02' < *DAT_000d2ecc) { \| local_30 = (int *)(uint)*(ushort *)(p` |
| kernel.c | 124984 | `} \| } \| else { \| if ('\x02' < *DAT_000d2ecc) { \| FUN_006f4a98(0x15,DAT_000d2ef4); \| } \| LAB_000d2ff2:` |
| kernel.c | 126921 | `*param_6 = 0; \| } while (*param_7 == '\0'); \| if ('\x02' < *pcVar1) { \| FUN_006f4b10(0x15,DAT_000d4ec4 + -0xd8,DAT_000d4ecc,(int)*param_5,(i` |
| kernel.c | 136769 | ` \|  \|  \| /* Function: FUN_000dfecc */ \|  \| void FUN_000dfecc(void) \| ` |
| kernel.c | 136771 | ` \| /* Function: FUN_000dfecc */ \|  \| void FUN_000dfecc(void) \|  \| { \| char *pcVar1;` |
| kernel.c | 136907 | `} \| FUN_0002d0c8(1,5,0x70,0x78,0xb8,0x352,iVar3,0); \| } \| FUN_000dfecc(); \| return; \| } \| piVar4 = (int *)FUN_000ba428((char)local_a8[uVar9]` |
| kernel.c | 137106 | `sVar4 = 0; \| puVar7 = param_1; \| FUN_000ba448(); \| FUN_000dfecc(); \| pcVar1 = DAT_000e15b0; \| iVar6 = DAT_000e15ac; \| do {` |
| kernel.c | 137149 | `FUN_006f4b10(0x15,DAT_000e15ac + 0xb,s_L1_lte_cancel_too_much_task__d_000e122c + 0x1c,sVar4); \| } \| } \| FUN_000dfecc(); \| puVar2 = DAT_000e1` |
| kernel.c | 137505 | `if ((*(int *)(s__REF__REF_ioctl__cmd____d__data__00001c80 + iVar3 + 0x14) == \| *(int *)(s__REF__REF_ioctl__cmd____d__data__00001c80 + iVar3 ` |
| kernel.c | 137539 | `*DAT_000e1ed4 = 1; \| } \| if ('\x02' < *DAT_000e1ec4) { \| FUN_006f4b10(3,DAT_000e1ecc + 3,&DAT_000e1ed8,param_1,param_2); \| } \| return; \| }` |
| kernel.c | 137589 | `if (((iVar2 == 0x21) \|\| (iVar2 == 0x23)) \|\| (iVar2 == 0x24)) goto LAB_000e1e48; \| uVar4 = 1; \| if ('\x02' < *DAT_000e1ec4) { \| FUN_006f4a98(` |
| kernel.c | 137598 | `((iVar3 == 0x30 \|\| \| ((((iVar3 == 0x33 \|\| (iVar3 == 0x35)) \|\| (iVar3 == 0x38)) \|\| (iVar3 == 0x3d)))))) && \| (uVar4 = 2, '\x02' < *pcVar1)) {` |
| kernel.c | 144039 | `} \| else { \| uVar3 = *(byte *)(*local_14 + 3) & 0xf; \| if (uVar3 != 3) goto LAB_000ecc28; \| } \| param_2[2] = uVar3; \| }` |
| kernel.c | 144044 | `param_2[2] = uVar3; \| } \| else { \| LAB_000ecc28: \| param_2[2] = 2; \| } \| *param_2 = (ushort)(*param_1 >> 4) * 100 + (param_1[1] & 0xf) * 10 ` |
| kernel.c | 144068 | ` \|  \|  \| /* Function: FUN_000eccb2 */ \|  \| void FUN_000eccb2(void) \| ` |
| kernel.c | 144070 | ` \| /* Function: FUN_000eccb2 */ \|  \| void FUN_000eccb2(void) \|  \| { \| uint *puVar1;` |
| kernel.c | 144083 | ` \|  \|  \| /* Function: FUN_000ecccc */ \|  \| void FUN_000ecccc(void) \| ` |
| kernel.c | 144085 | ` \| /* Function: FUN_000ecccc */ \|  \| void FUN_000ecccc(void) \|  \| { \| uint *puVar1;` |
| kernel.c | 144099 | ` \|  \|  \| /* Function: FUN_000eccea */ \|  \| undefined4 FUN_000eccea(int param_1,int param_2) \| ` |
| kernel.c | 144101 | ` \| /* Function: FUN_000eccea */ \|  \| undefined4 FUN_000eccea(int param_1,int param_2) \|  \| { \| byte bVar1;` |
| kernel.c | 147191 | `pcVar1[2] = '\0'; \| pcVar1[3] = '\0'; \| if ('\x02' < *pcVar6) { \| FUN_006f4b10(0x10,iVar9,&DAT_000f3ecc,2); \| } \| if ((&DAT_00002fcc)[*(int ` |
| kernel.c | 147210 | `pcVar1[2] = '\0'; \| pcVar1[3] = '\0'; \| if ('\x02' < *pcVar6) { \| FUN_006f4b10(0x10,iVar9,&DAT_000f3ecc,2); \| return; \| } \| }` |
| kernel.c | 153942 | `} \| iVar8 = FUN_000aad18(local_2c); \| if (iVar8 == 0) { \| uVar6 = FUN_006fd49c(s_L1C_DCLT__SaveBchFrameInfo_no_sp_000ac3d4,local_2c[0]); \| t` |
| kernel.c | 169174 | `pcVar1[3] = -1; \| (&DAT_000036cb)[iVar4] = 0; \| FUN_000ece8c(); \| FUN_000ecccc(); \| FUN_000eccb2(); \| FUN_006fae04(&DAT_0000357c + *(int *)(` |
| kernel.c | 169175 | `(&DAT_000036cb)[iVar4] = 0; \| FUN_000ece8c(); \| FUN_000ecccc(); \| FUN_000eccb2(); \| FUN_006fae04(&DAT_0000357c + *(int *)(iVar2 + -4),0,8,&D` |
| kernel.c | 179130 | ` \| uVar3 = DAT_0012cedc; \| iVar2 = DAT_0012ced8; \| pcVar1 = DAT_0012cecc; \| iVar5 = 0; \| local_24 = 0; \| do {` |
| kernel.c | 186639 | ` \|  \|  \| /* Function: FUN_0013ecc8 */ \|  \| undefined4 FUN_0013ecc8(int param_1,undefined4 param_2) \| ` |
| kernel.c | 186641 | ` \| /* Function: FUN_0013ecc8 */ \|  \| undefined4 FUN_0013ecc8(int param_1,undefined4 param_2) \|  \| { \| int iVar1;` |
| kernel.c | 203176 | `else { \| uVar1 = 4; \| } \| if ('\x02' < *DAT_0015aecc) { \| FUN_006f4b10(0x10,DAT_0015aed0,&DAT_0015aa8c,param_1); \| } \| return uVar1;` |
| kernel.c | 203206 | `else { \| uVar1 = 0; \| } \| if ('\x02' < *DAT_0015aecc) { \| FUN_006f4b10(0x10,DAT_0015aed0 + 1,&DAT_0015aa8c,param_1); \| } \| return uVar1;` |
| kernel.c | 203232 | `uVar3 = 0; \| do { \| iVar2 = thunk_FUN_00101dfa(auStack_48 + uVar3 * 10,param_1); \| pcVar1 = DAT_0015aecc; \| if (iVar2 == 0) { \| *param_2 = (` |
| kernel.c | 203267 | `do { \| if (*param_2 == (uint)local_38[uVar1 * 5]) { \| FUN_006f3e8a(param_1,auStack_40 + uVar1 * 10,8); \| if (*DAT_0015aecc < '\x03') { \| ret` |
| kernel.c | 203361 | `if (param_4 == 0) { \| FUN_006fb8b0(s_PNULL____req_qos_0015af3c,s_mngprs_module_c_0015aed8,0x4ec); \| } \| if ('\x02' < *DAT_0015aecc) { \| FUN_` |
| kernel.c | 203392 | `if (param_4 == (undefined1 *)0x0) { \| FUN_006fb8b0(s_PNULL____r99_req_qos_0015af50,s_mngprs_module_c_0015aed8,0x50e); \| } \| pcVar1 = DAT_001` |
| kernel.c | 203393 | `FUN_006fb8b0(s_PNULL____r99_req_qos_0015af50,s_mngprs_module_c_0015aed8,0x50e); \| } \| pcVar1 = DAT_0015aecc; \| if ('\x02' < *DAT_0015aecc) {` |
| kernel.c | 205645 | `if ('\x02' < *pcVar3) { \| local_dc = *(uint *)(iVar11 + 0x390); \| local_e0 = iVar11 + 0x328; \| FUN_006f4b10(0x10,DAT_0015eecc,&DAT_0015eec0,` |
| kernel.c | 205660 | `*(undefined1 *)(iVar6 + 0x54d) = *(undefined1 *)(param_2 + 0xa2); \| if (bVar2) { \| if ('\x02' < *pcVar3) { \| FUN_006f4a98(0x10,DAT_0015eecc ` |
| kernel.c | 205805 | `} \| *(undefined4 *)(*(int *)(*(int *)(iVar2 + param_1 * 4) + 0x10) + iVar1 * 0x568 + 0x390) = uVar5; \| if ('\x02' < *DAT_0015eedc) { \| FUN_0` |
| kernel.c | 230100 | `FUN_00149522(param_1,&DAT_0000403a,0x2b,iVar2); \| return; \| } \| if ('\x02' < *DAT_0012cecc) { \| FUN_006f4b10(2,DAT_0012ced0 + 1,&DAT_0012c62` |
| kernel.c | 237120 | `FUN_006fdf4a(DAT_0019aec8,param_1,param_2,param_4,param_4); \| } \| else { \| FUN_006fdf4a(s_AUDIO_DM_SetExtraVolume_ori___d__0019aecc,(uint)*(` |
| kernel.c | 246048 | ` \| puVar2 = DAT_001b340c; \| if (0x1f < *DAT_001b340c) { \| uVar3 = FUN_006fd49c(s_Nand_MC_Wrong_Pos__d_001b343c); \| thunk_FUN_006fb59e(&DAT_0` |
| kernel.c | 246194 | `} \| } \| else { \| uVar3 = FUN_006fd49c(s__NANDCTL_SetParam_Err_handler_001b3cab + 1); \| thunk_FUN_006fb59e(&DAT_001b3438,s_nfc_drv_c_001b342c` |
| kernel.c | 246842 | `undefined4 uVar1; \|  \| if ((param_1 != DAT_001b52bc) && (param_1 != DAT_001b52bc + 0x68)) { \| uVar1 = FUN_006fd49c(s_NANDCTL_SetParam_Err_ha` |
| kernel.c | 248572 | ` \|  \|  \| /* Function: FUN_001becce */ \|  \| undefined4 FUN_001becce(int param_1) \| ` |
| kernel.c | 248574 | ` \| /* Function: FUN_001becce */ \|  \| undefined4 FUN_001becce(int param_1) \|  \| { \| undefined4 uVar1;` |
| kernel.c | 248651 | `int iVar1; \|  \| *DAT_001bef78 = param_1; \| iVar1 = FUN_001becce(); \| return iVar1 != 0; \| } \| ` |
| kernel.c | 267574 | `} \| } \| iVar1 = 0; \| iVar2 = FUN_0026fecc(); \| if (iVar2 == 0) { \| local_30 = 0; \| while (iVar2 = FUN_0026fe14(&DAT_00002544 + param_1,&loca` |
| kernel.c | 267585 | `} \| } \| } \| iVar2 = FUN_0026fecc(); \| if (iVar2 == 0) { \| iVar2 = param_4 + iVar1 * 0x180; \| local_34 = FUN_006f3582(&DAT_00003684 + iVar2,0` |
| kernel.c | 268926 | `goto LAB_001e0526; \| } \| if (*param_2 != '\0') { \| FUN_0024ecc6(iVar2); \| uVar1 = thunk_FUN_006f9150(param_2); \| iVar4 = FUN_00250114(param_` |
| kernel.c | 268936 | `} \| } \| if (*param_3 != '\0') { \| FUN_0024ecc6(iVar3); \| uVar1 = thunk_FUN_006f9150(param_3); \| iVar4 = FUN_00250114(param_3,uVar1,iVar3); \|` |
| kernel.c | 268996 | `void FUN_001e064a(void) \|  \| { \| FUN_0026fecc(DAT_001e08f4); \| return; \| } \| ` |
| kernel.c | 275219 | `undefined4 uStack_1c; \| undefined2 local_18 [2]; \|  \| FUN_0076ecc6(&local_50); \| iVar4 = *DAT_001ec05c + param_3 * 0x11a8; \| local_48 = (loc` |
| kernel.c | 275788 | `local_3c = 0; \| iVar3 = FUN_001eabf4(&local_848,param_1,param_2,0); \| if (iVar3 != 0xff) { \| if ('\x02' < *DAT_001eccc0) { \| FUN_006f4a98(0x` |
| kernel.c | 275789 | `iVar3 = FUN_001eabf4(&local_848,param_1,param_2,0); \| if (iVar3 != 0xff) { \| if ('\x02' < *DAT_001eccc0) { \| FUN_006f4a98(0xd,DAT_001eccc4);` |
| kernel.c | 275799 | `uVar5 = (local_848 & 0x7ffff) >> 0x10; \| uVar4 = 0xff; \| if (uVar5 == 2) { \| iVar10 = *DAT_001eccc8 + iVar3 * 0x11a8; \| if (*(short *)(&DAT_` |
| kernel.c | 275801 | `if (uVar5 == 2) { \| iVar10 = *DAT_001eccc8 + iVar3 * 0x11a8; \| if (*(short *)(&DAT_00001100 + iVar10) != 0) { \| if ('\x02' < *DAT_001eccc0) ` |
| kernel.c | 275802 | `iVar10 = *DAT_001eccc8 + iVar3 * 0x11a8; \| if (*(short *)(&DAT_00001100 + iVar10) != 0) { \| if ('\x02' < *DAT_001eccc0) { \| iVar3 = DAT_001e` |
| kernel.c | 275811 | `goto LAB_001ece1e; \| } \| uVar8 = param_3; \| puVar6 = DAT_001eccc8; \| if (*(int *)(iVar10 + 0xe0) == 1) { \| uVar8 = FUN_001e9de8(); \| puVar6 ` |
| kernel.c | 275817 | `puVar6 = extraout_r3; \| if ((*(int *)(*extraout_r3 + iVar3 * 0x11a8 + 0xe0) == 1) && \| ((&DAT_00001102)[*extraout_r3 + (short)uVar8 * 0x11a8` |
| kernel.c | 275828 | `(bVar2 = (&DAT_0000112d)[iVar10 + uVar9] - 5, bVar2 != param_3)) && \| ((&DAT_0000111f)[*puVar6 + (short)(ushort)bVar2 * 0x11a8] == '\0')) { ` |
| kernel.c | 275829 | `((&DAT_0000111f)[*puVar6 + (short)(ushort)bVar2 * 0x11a8] == '\0')) { \| if ((&DAT_00001102)[iVar10] != '\0') { \| if (*DAT_001eccc0 < '\x03')` |
| kernel.c | 275832 | `iVar3 = DAT_001eccc4 + 3; \| goto LAB_001eca78; \| } \| if ('\x02' < *DAT_001eccc0) { \| FUN_006f4a98(0xd,DAT_001eccc4 + 4); \| } \| *param_5 = 0x` |
| kernel.c | 275833 | `goto LAB_001eca78; \| } \| if ('\x02' < *DAT_001eccc0) { \| FUN_006f4a98(0xd,DAT_001eccc4 + 4); \| } \| *param_5 = 0xd; \| goto LAB_001ecaae;` |
| kernel.c | 275842 | `} while (uVar9 < 8); \| } \| else if ((uVar5 == 5) \|\| (uVar5 == 4)) { \| local_38 = *DAT_001eccc8 + iVar3 * 0x11a8; \| for (uVar7 = 0; uVar7 < (` |
| kernel.c | 275851 | `uVar8 = uVar8 \| 1 << (&local_844)[uVar7 * 0x40] & 0xffffU; \| } \| if ((*(ushort *)(&DAT_00001100 + local_38) & uVar8) != 0) { \| cVar1 = *DAT_` |
| kernel.c | 275855 | `if (cVar1 < '\x03') { \| LAB_001ec984: \| if (cVar1 < '\x03') goto LAB_001ec942; \| iVar3 = DAT_001eccc4 + 2; \| } \| else { \| iVar3 = DAT_001ecc` |
| kernel.c | 275858 | `iVar3 = DAT_001eccc4 + 2; \| } \| else { \| iVar3 = DAT_001eccc4 + 5; \| } \| LAB_001eca78: \| FUN_006f4a98(0xd,iVar3);` |
| kernel.c | 275865 | `goto LAB_001ec942; \| } \| if ((uVar5 == 5) && ((uVar9 & ~uVar8) == 0)) { \| if ('\x02' < *DAT_001eccc0) { \| FUN_006f4a98(0xd,DAT_001eccc4 + 6)` |
| kernel.c | 275866 | `} \| if ((uVar5 == 5) && ((uVar9 & ~uVar8) == 0)) { \| if ('\x02' < *DAT_001eccc0) { \| FUN_006f4a98(0xd,DAT_001eccc4 + 6); \| } \| *param_5 = 0x` |
| kernel.c | 275880 | `LAB_001ecad4: \| if ((local_848 & 0xf00000) != 0) goto LAB_001ecadc; \| LAB_001ecae0: \| local_38 = *DAT_001eccc8; \| iVar10 = local_38 + iVar3 ` |
| kernel.c | 275907 | `uVar9 = uVar9 \| 1 << (&local_844)[uVar8 * 0x40] & 0xffffU; \| } \| if ((uVar9 & uVar5) != 0) { \| if ('\x02' < *DAT_001eccc0) { \| FUN_006f4a98(` |
| kernel.c | 275908 | `} \| if ((uVar9 & uVar5) != 0) { \| if ('\x02' < *DAT_001eccc0) { \| FUN_006f4a98(0xd,DAT_001eccc4 + 9); \| } \| uVar4 = 0x2d; \| FUN_006f3e8a(par` |
| kernel.c | 275924 | `while ((int)uVar8 < (int)(uVar9 - 1)) { \| bVar2 = (char)uVar8 + 1; \| uVar5 = (uint)bVar2; \| LAB_001eccfc: \| if (uVar5 < uVar9) { \| if (local` |
| kernel.c | 275926 | `uVar5 = (uint)bVar2; \| LAB_001eccfc: \| if (uVar5 < uVar9) { \| if (local_843[uVar8 * 0x40] != local_843[uVar5 * 0x40]) goto LAB_001eccf8; \| i` |
| kernel.c | 275998 | `} \| } \| if (uVar9 != 0) goto LAB_001ecbb4; \| if ('\x02' < *DAT_001eccc0) { \| iVar3 = DAT_001eccc4 + 7; \| goto LAB_001ecbcc; \| }` |
| kernel.c | 275999 | `} \| if (uVar9 != 0) goto LAB_001ecbb4; \| if ('\x02' < *DAT_001eccc0) { \| iVar3 = DAT_001eccc4 + 7; \| goto LAB_001ecbcc; \| } \| }` |
| kernel.c | 276016 | `} \| } \| if ((uVar7 & ~uVar9) != 0) goto LAB_001ecbb4; \| if ('\x02' < *DAT_001eccc0) { \| iVar3 = DAT_001eccc4 + 8; \| LAB_001ecbcc: \| FUN_006f` |
| kernel.c | 276017 | `} \| if ((uVar7 & ~uVar9) != 0) goto LAB_001ecbb4; \| if ('\x02' < *DAT_001eccc0) { \| iVar3 = DAT_001eccc4 + 8; \| LAB_001ecbcc: \| FUN_006f4a98` |
| kernel.c | 276037 | `LAB_001ece1e: \| *param_4 = uVar4; \| return 1; \| LAB_001eccf8: \| uVar5 = uVar5 + 1 & 0xff; \| goto LAB_001eccfc; \| }` |
| kernel.c | 276039 | `return 1; \| LAB_001eccf8: \| uVar5 = uVar5 + 1 & 0xff; \| goto LAB_001eccfc; \| } \|  \| ` |
| kernel.c | 290479 | `uVar7 = uVar4 + (uVar7 >> 0x11 \| uVar7 * 0x8000); \| uVar3 = ((uVar7 \| ~uVar6) ^ uVar4) + DAT_001feec8 + local_3c + uVar3; \| uVar3 = uVar7 + ` |
| kernel.c | 303655 | ` \| iVar1 = FUN_003ae7f4(param_1,auStack_28); \| if ((iVar1 == 1) && (local_10 == 2)) { \| FUN_003aeecc(param_3,auStack_24); \| uVar2 = 1; \| } \|` |
| kernel.c | 304139 | `else { \| if (*(int *)(&DAT_000022bc + param_2) == 2) { \| FUN_0027867e(param_1,1,param_2 + 0x234c,&local_24); \| iVar3 = FUN_0026fecc(s_______` |
| kernel.c | 304141 | `FUN_0027867e(param_1,1,param_2 + 0x234c,&local_24); \| iVar3 = FUN_0026fecc(s_________________Dump_All_Memory_T_00001834 + param_1 + 0x2c); \|` |
| kernel.c | 304554 | `FUN_0025eaae(); \| *(undefined4 *)(param_1 + 0x54) = 0; \| } \| FUN_00220ecc(param_1); \| if (param_2 == 1) { \| FUN_0021e7d6(0x12,0,param_1); \| ` |
| kernel.c | 304620 | `{ \| int iVar1; \|  \| FUN_00220ecc(); \| iVar1 = FUN_003af422(param_3 + 1,1,0x14c,0xbde,param_4); \| *(int *)(param_1 + 0x1b0) = iVar1; \| if (iV` |
| kernel.c | 305372 | `FUN_0025b7de(*(undefined4 *)(DAT_00221118 + 0x11c)); \| while (iVar2 = FUN_0026fe14(iVar3,&local_14), iVar2 != 0) { \| if ((local_14 != 0) && ` |
| kernel.c | 305449 | ` \|  \|  \| /* Function: FUN_00220ecc */ \|  \| undefined4 FUN_00220ecc(int param_1) \| ` |
| kernel.c | 305451 | ` \| /* Function: FUN_00220ecc */ \|  \| undefined4 FUN_00220ecc(int param_1) \|  \| { \| if (*(int *)(param_1 + 0x1b0) != 0) {` |
| kernel.c | 320078 | `if (iVar11 == 0x30) { \| if (*(int *)(*DAT_0023e100 + 0xf4) == 0x10) { \| LAB_0023e8da: \| iVar8 = DAT_0023ecc4; \| if (cVar2 < '\x03') { \| retu` |
| kernel.c | 320103 | `if (iVar11 != 0x46) goto switchD_0023dd28_caseD_24ca; \| if (*(int *)(*DAT_0023e100 + 0xf4) != 0x10) { \| if ('\x02' < cVar2) { \| iVar8 = DAT_` |
| kernel.c | 320478 | `undefined4 FUN_0023e9be(int param_1) \|  \| { \| if (*(int *)(*(int *)(*(int *)(DAT_0023ecc8 + param_1 * 4) + 8) + 0x860) != 3) { \| return 0; \|` |
| kernel.c | 320499 | `local_18 = param_3; \| local_14 = param_4; \| if (param_2 == (byte *)0x0) { \| FUN_006fb8b0(s_NULL____imei_Ptr_0023eccc,s_PS_stack_nas_mm_src_m` |
| kernel.c | 320607 | `uStack_28 = param_2; \| iStack_24 = param_3; \| if ('\x02' < *DAT_0023ecfc) { \| FUN_006f4a98(9,DAT_0023ecc4 + 0x28); \| } \| puVar2 = DAT_0023ed` |
| kernel.c | 320615 | `piVar4 = DAT_0023ed08; \| piVar3 = DAT_0023ed04; \| if ('\x02' < *pcVar1) { \| FUN_006f4b10(9,DAT_0023ecc4 + 0x29,&DAT_0023ed0c,*(undefined4 *)` |
| kernel.c | 320623 | `iVar7 = FUN_006ea0a2(*puVar2); \| if ((iVar7 == 1) && (*(char *)(*piVar3 + 0x10c) != '\x01')) { \| if ('\x02' < *pcVar1) { \| iVar7 = DAT_0023e` |
| kernel.c | 320646 | `((*(int *)(iVar6 + 0x27c) == -1 \|\| (*(int *)(iVar6 + 0x27c) == 0)))) { \| LAB_0023ec6a: \| if ('\x02' < *pcVar1) { \| iVar7 = DAT_0023ecc4 + 0x` |
| kernel.c | 320655 | `iVar7 = FUN_0023eb2c((int)puVar5 + 0x18d,(int)&local_2c + 2); \| if (iVar7 == 1) { \| if ('\x02' < *pcVar1) { \| FUN_006f4a98(9,DAT_0023ecc4 + ` |
| kernel.c | 320659 | `} \| if ((local_2c & 0xffff) == (uint)*(ushort *)*puVar5) { \| if ('\x02' < *pcVar1) { \| FUN_006f4a98(9,DAT_0023ecc4 + 0x2c); \| } \| if (puVar5` |
| kernel.c | 320663 | `} \| if (puVar5[0x136] == param_3) { \| if ('\x02' < *pcVar1) { \| iVar7 = DAT_0023ecc4 + 0x2d; \| LAB_0023ed3e: \| FUN_006f4a98(9,iVar7); \| }` |
| kernel.c | 320700 | `} \| } \| else if ('\x02' < *pcVar1) { \| iVar7 = DAT_0023ecc4 + 0x32; \| LAB_0023ec54: \| FUN_006f4a98(9,iVar7); \| }` |
| kernel.c | 333867 | ` \|  \|  \| /* Function: FUN_0024ecc6 */ \|  \| void FUN_0024ecc6(int param_1) \| ` |
| kernel.c | 333869 | ` \| /* Function: FUN_0024ecc6 */ \|  \| void FUN_0024ecc6(int param_1) \|  \| { \| *(undefined4 *)(param_1 + 8) = 0;` |
| kernel.c | 333895 | `void FUN_0024ed10(int param_1) \|  \| { \| FUN_0024ecc6(); \| *(undefined1 *)(param_1 + 0x5b4) = 0; \| *(undefined1 *)(param_1 + 0x5f4) = 0; \| *(` |
| kernel.c | 336940 | `if (local_28 != 0) { \| return uVar5; \| } \| iVar3 = FUN_0026fecc(param_5 + 0xbf0); \| if (iVar3 == 0) { \| if ('\x02' < *pcVar2) { \| FUN_006f4b` |
| kernel.c | 336993 | `} \| uVar3 = FUN_00254f22(&local_28,puVar2); \| if (local_28 == 0) { \| iVar1 = FUN_0026fecc(param_5 + 0xbf0); \| if (iVar1 == 0) { \| FUN_002172` |
| kernel.c | 339499 | `if ((((iVar2 != 0) && ((char *)piVar4[1] != (char *)0x0)) && (*(char *)piVar4[1] != '\0')) && \| (*(int *)(iVar6 + 4) != 0x29)) { \| if (*(int` |
| kernel.c | 340280 | ` \| iVar2 = *(int *)(param_1 + 4); \| uVar1 = *(ushort *)(param_1 + 0xc); \| FUN_0024e8a4(0xc0000,s_TOKEN_bCheckPgbk_0025af74,0,0,0); \| pcVar3 ` |
| kernel.c | 346993 | `break; \| default: \| uVar8 = 0xc06; \| local_d8 = s_invalid_transmission_status_fail_00267ecc; \| iVar9 = DAT_00267eb0 + 0x70; \| break; \| case ` |
| kernel.c | 354455 | ` \|  \|  \| /* Function: FUN_0026fecc */ \|  \| undefined4 FUN_0026fecc(int *param_1) \| ` |
| kernel.c | 354457 | ` \| /* Function: FUN_0026fecc */ \|  \| undefined4 FUN_0026fecc(int *param_1) \|  \| { \| if ((param_1 != (int *)0x0) && (*param_1 != 0)) {` |
| kernel.c | 357808 | `local_44 = 1; \| } \| else if (local_40 != 0) { \| FUN_0013ecc8(&DAT_00001158 + param_1,iVar4); \| } \| } \| bVar1 = true;` |
| kernel.c | 359408 | `FUN_00001aa4[param_1 + 4] = (code)0x0; \| FUN_0024ed10(param_1 + 800); \| FUN_0024ed10(param_1 + 0xa54); \| FUN_0024ecc6(FUN_00001188 + param_1` |
| kernel.c | 359576 | ` \| pcVar1 = s_________________Dump_LogSave_Dsp_00001730 + param_1 + 0x14; \| FUN_0025a0e0(pcVar1,0xd); \| iVar2 = FUN_0026fecc(); \| if (iVar2 ` |
| kernel.c | 359609 | `if (*(int *)(local_10 + 8) != 0) { \| pcVar4 = FUN_00001188 + param_1; \| FUN_003af414(pcVar4,0,0x5b4); \| FUN_0024ecc6(pcVar4); \| uVar2 = thun` |
| kernel.c | 359732 | `FUN_00001aa4[param_1 + 4] = (code)0x0; \| FUN_0024ed10(param_1 + 800); \| FUN_0024ed10(param_1 + 0xa54); \| FUN_0024ecc6(FUN_00001188 + param_1` |
| kernel.c | 359854 | `} \| else { \| puVar4 = &DAT_000023cc + param_2; \| iVar2 = FUN_0026fecc(); \| if (iVar2 == 0) { \| FUN_0024e8a4(0x8000000,DAT_00277608,param_2,0` |
| kernel.c | 359926 | `*(undefined4 *)(s_________________Dump_LogSave_IQ_M_0000176c + param_1 + 8) = uVar10; \| LAB_00277346: \| iVar4 = param_2 + 0x23e4; \| iVar5 = ` |
| kernel.c | 359933 | `FUN_0025a490(iVar4,pcVar6,param_1 + 0x2450); \| } \| else { \| iVar5 = FUN_0026fecc(pcVar6); \| if (iVar5 == 0) { \| FUN_0025a490(pcVar6,iVar4,iV` |
| kernel.c | 360063 | `FUN_006f3582(iVar3 + iVar1 + 0xc,0x100 - iVar2,&DAT_00277a40,&DAT_00277a38); \| FUN_0024e8a4(0xc00000,s_add_199_in_supported_header_00277a44,` |
| kernel.c | 360530 | `if (0 < *(int *)(s_________________Dump_All_Memory_T_00001834 + param_1)) { \| return 0; \| } \| iVar1 = FUN_0026fecc(); \| if (iVar1 != 0) { \| ` |
| kernel.c | 360814 | `} \| else { \| FUN_0026fe74(pcVar3,iVar1); \| iVar1 = FUN_0026fecc(s_________________Dump_All_Memory_T_00001834 + param_1 + 0x2c); \| if ((iVar1` |
| kernel.c | 360816 | `FUN_0026fe74(pcVar3,iVar1); \| iVar1 = FUN_0026fecc(s_________________Dump_All_Memory_T_00001834 + param_1 + 0x2c); \| if ((iVar1 == 0) \|\| \| (` |
| kernel.c | 360849 | `} \| else { \| FUN_0026fe74(pcVar3,iVar1); \| iVar1 = FUN_0026fecc(s_________________Dump_All_Memory_T_00001834 + param_1 + 0x2c); \| if ((iVar1` |
| kernel.c | 360851 | `FUN_0026fe74(pcVar3,iVar1); \| iVar1 = FUN_0026fecc(s_________________Dump_All_Memory_T_00001834 + param_1 + 0x2c); \| if ((iVar1 == 0) \|\| \| (` |
| kernel.c | 363607 | ` \|  \|  \| /* Function: FUN_0027ecca */ \|  \| uint FUN_0027ecca(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4) \|` |
| kernel.c | 363609 | ` \| /* Function: FUN_0027ecca */ \|  \| uint FUN_0027ecca(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4) \|  \| { ` |
| kernel.c | 375221 | `undefined4 uVar2; \|  \| if ('\x02' < *DAT_00291ec8) { \| FUN_006f4a98(0x2c,DAT_00291ecc,param_3,param_4,param_4); \| } \| iVar1 = FUN_00291a58(p` |
| kernel.c | 382024 | `} \| if (*pcVar7 != '\0') { \| FUN_003af414(auStack_460,0,0x428); \| FUN_00297558(pcVar7,auStack_460,&DAT_00298ecc); \| FUN_00297910(auStack_460` |
| kernel.c | 399135 | `FUN_00219014(1,iVar5,local_84); \| goto LAB_002b3988; \| } \| FUN_0024ecc6(iVar3); \| uVar2 = thunk_FUN_006f9150(param_2); \| iVar6 = FUN_0025011` |
| kernel.c | 399153 | `iVar5 = 0; \| } \| else { \| FUN_0024ecc6(iVar3); \| uVar2 = thunk_FUN_006f9150(local_2c); \| iVar5 = FUN_002501d6(local_2c,uVar2,iVar3); \| if (i` |
| kernel.c | 399175 | `iVar5 = local_84; \| } \| else { \| FUN_0024ecc6(iVar3); \| uVar2 = thunk_FUN_006f9150(param_2); \| iVar6 = FUN_002501d6(param_2,uVar2,iVar3); \| ` |
| kernel.c | 399195 | `iVar5 = 0; \| } \| else { \| FUN_0024ecc6(iVar3); \| uVar2 = thunk_FUN_006f9150(param_5); \| iVar6 = FUN_00250114(param_5,uVar2,iVar3); \| iVar5 =` |
| kernel.c | 400164 | `*(undefined4 *)(iVar4 + 0x18) = uVar5; \| } \| } \| iVar2 = FUN_0026fecc(iVar3 + 0x23e4); \| if ((iVar2 != 0) && \| (iVar2 = FUN_0026fecc(s______` |
| kernel.c | 400166 | `} \| iVar2 = FUN_0026fecc(iVar3 + 0x23e4); \| if ((iVar2 != 0) && \| (iVar2 = FUN_0026fecc(s_________________Dump_LogSave_Dsp_00001730 + param_` |
| kernel.c | 400826 | `*(undefined4 *)(iVar1 + 0x6ec) = *puVar6; \| } \| if (param_4 != 0) { \| iVar3 = FUN_0026fecc(); \| if (iVar3 == 0) { \| FUN_0026fd3c(auStack_50)` |
| kernel.c | 401562 | `if (0x7f < iVar2) goto LAB_002b78a0; \| FUN_0025a93a(param_6,iVar1 + 0x14); \| } \| iVar2 = FUN_0026fecc(); \| if (iVar2 == 1) { \| FUN_001dfe9a(` |
| kernel.c | 402545 | ` \| local_30 = 0; \| local_2c = 0; \| if (((param_2 != 0) && (param_3 != 0)) && (iVar1 = FUN_0026fecc(param_2 + 0x192c), iVar1 == 0)) { \| iVar1` |
| kernel.c | 402546 | `local_30 = 0; \| local_2c = 0; \| if (((param_2 != 0) && (param_3 != 0)) && (iVar1 = FUN_0026fecc(param_2 + 0x192c), iVar1 == 0)) { \| iVar1 = ` |
| kernel.c | 402602 | `FUN_00293a52(local_30); \| goto LAB_002b8a06; \| } \| iVar4 = FUN_0026fecc(iVar1 + 0x192c); \| if (iVar4 != 0) { \| FUN_0026fe74(local_28,iVar1);` |
| kernel.c | 406305 | `} \| if ('\x02' < *pcVar1) { \| iVar2 = DAT_002bee84 + 10; \| LAB_002becc2: \| FUN_006f4a98(0x17,iVar2); \| } \| LAB_002bec2a:` |
| kernel.c | 406349 | `if ((local_50 == 1) \|\| (local_50 == 3)) goto LAB_002bed04; \| if ('\x02' < *pcVar1) { \| iVar2 = DAT_002bee9c + -1; \| goto LAB_002becc2; \| } \|` |
| kernel.c | 406397 | `int iVar5; \| undefined4 *puVar6; \|  \| uVar2 = FUN_006f2c88(&DAT_002beecc); \| *DAT_002beed0 = uVar2; \| if ('\x02' < *DAT_002bee80) { \| FUN_00` |
| kernel.c | 437687 | `} \| if (param_4 == 0) { \| FUN_006f2c00(0,s_PS_stack_nas_emm_msg_codec_msg_i_002fde18,0x2c2,s_LOGGER_ASSERT_002fde08, \| s_Invalid_count__002f` |
| kernel.c | 440220 | `if (*(uint *)(param_1 + 0x74) < 0xb) { \| if (*(char *)(param_1 + 0x67) == '\x01') { \| if (*(char *)(DAT_003026cc + 0xfc) == '\0') { \| FUN_00` |
| kernel.c | 440226 | `} \| else { \| if (*(char *)(DAT_003026cc + 0xfd) == '\0') { \| FUN_006f2c00(0,DAT_003026e8 + 0x10,0x431,DAT_003026e8,s_doHwSecCnt_can_not_be_0` |
| kernel.c | 460718 | `FUN_006fdf4a(s_checkUnimodeTimeouts__gotoIrStat_0031eca0); \| } \| if ((param_1[8] != 0) && ('\x02' < *pcVar1)) { \| FUN_006fdf4a(s_checkUnimod` |
| kernel.c | 467765 | `FUN_00326224(param_1,0x81); \| if (*(int *)(param_1[0x11] + 4) == 3) { \| if (param_1[3] != 2) { \| if (param_1[3] != 1) goto LAB_00326ecc; \| g` |
| kernel.c | 467772 | `uVar2 = *(undefined1 *)(param_1[0x10] + 4); \| } \| else { \| if (*(int *)(param_1[0x11] + 4) == 1) goto LAB_00326ecc; \| iVar5 = *(int *)*param` |
| kernel.c | 467782 | `(FUN_00324884(param_1,1,*(undefined1 *)(param_1[0x10] + 4),0,1), param_1[3] == 1)) { \| FUN_0032dcaa(param_1 + 0x12); \| } \| goto LAB_00326ecc` |
| kernel.c | 467789 | `uVar2 = *(undefined1 *)(param_1[0x10] + 4); \| } \| FUN_00324884(param_1,uVar12,uVar2,0,1); \| LAB_00326ecc: \| FUN_00326274(param_1); \| return ` |
| kernel.c | 471028 | `if (!bVar19) goto LAB_0032baee; \| } \| if (*pcVar3 < '\x04') goto LAB_0032bd16; \| pcVar5 = s_Rohc_Normal_____Got_UOR_2_ID_pac_0032becc; \| got` |
| kernel.c | 471790 | `if ('\x03' < *pcVar4) { \| uVar5 = FUN_00344fb6(); \| uVar6 = FUN_00344fb6(*(undefined4 *)(puVar15[0x10] + 4)); \| FUN_006fdf4a(DAT_0032cecc,uV` |
| kernel.c | 479707 | `uVar7 = param_5 + 0x1fU >> 5; \| local_30 = param_3; \| local_2c = param_4; \| iVar5 = FUN_006f95c0(uVar7 << 2,s_zuc_c_00338ecc,300); \| local_3` |
| kernel.c | 479722 | `for (uVar6 = 0; uVar6 < uVar7; uVar6 = uVar6 + 1) { \| *(uint *)(param_7 + uVar6 * 4) = *(uint *)(param_6 + uVar6 * 4) ^ *(uint *)(iVar5 + uV` |
| kernel.c | 479768 | `local_33 = 0; \| local_2c = (uint)CONCAT12((char)(param_3 << 7),(ushort)local_34); \| uVar5 = param_5 + 0x5f >> 5; \| iVar1 = FUN_006f95c0(uVar` |
| kernel.c | 479779 | `} \| uVar3 = FUN_00339198(iVar1,param_5); \| *param_7 = *(uint *)(iVar1 + uVar5 * 4 + -4) ^ uVar3 ^ uVar4; \| thunk_FUN_006f9b9a(iVar1,s_zuc_c_` |
| kernel.c | 479832 | `uVar4 = param_1; \| uVar3 = param_3; \| uVar5 = param_4; \| uVar1 = FUN_006f95c0(param_3 + 4,s_zuc_c_00338ecc,0x1bc); \| uVar2 = FUN_006f95c0(pa` |
| kernel.c | 479833 | `uVar3 = param_3; \| uVar5 = param_4; \| uVar1 = FUN_006f95c0(param_3 + 4,s_zuc_c_00338ecc,0x1bc); \| uVar2 = FUN_006f95c0(param_3 + 4,s_zuc_c_0` |
| kernel.c | 479843 | `} \| FUN_00338fd8(uVar2,uVar3); \| FUN_006fd7c8(param_2,uVar2,param_3); \| thunk_FUN_006f9b9a(uVar1,s_zuc_c_00338ecc,0x1c8); \| thunk_FUN_006f9b` |
| kernel.c | 479844 | `FUN_00338fd8(uVar2,uVar3); \| FUN_006fd7c8(param_2,uVar2,param_3); \| thunk_FUN_006f9b9a(uVar1,s_zuc_c_00338ecc,0x1c8); \| thunk_FUN_006f9b9a(u` |
| kernel.c | 479865 | `if (param_4 < 4) { \| FUN_006f2e28(s_zuc_ulMicLen_<_sizeof(unsigned_l_003391bc); \| } \| iVar1 = FUN_006f95c0(param_2 + 4,s_zuc_c_00338ecc,0x1e` |
| kernel.c | 479867 | `} \| iVar1 = FUN_006f95c0(param_2 + 4,s_zuc_c_00338ecc,0x1e6); \| if (iVar1 == 0) { \| FUN_006fb8b0(s_NULL__pucEndianBuf_003391e0,s_zuc_c_00338` |
| kernel.c | 479874 | `param_2 = param_2 << 3; \| iVar2 = iVar1; \| FUN_00338efe(param_8,param_6,param_7,param_5,param_2,iVar1,&uStack_2c); \| thunk_FUN_006f9b9a(iVar` |
| kernel.c | 483442 | `uVar7 = (uint)uVar1; \| iVar3 = (int)(short)(ushort)*(byte *)(param_1 + 3); \| if (7 < *(byte *)(*DAT_0033eec8 + iVar3 * 0xf7b8 + 0x93)) { \| F` |
| kernel.c | 513398 | `puVar7[3] = 0; \| puVar7[4] = 0; \| if ('\x01' < *pcVar1) { \| FUN_006f4c52(0x1b,DAT_00371ecc,5,*puVar7,puVar7[1],puVar7[2],puVar7[3],puVar7[4]` |
| kernel.c | 544376 | ` \|  \|  \| /* Function: FUN_003aeecc */ \|  \| void FUN_003aeecc(int param_1,int param_2) \| ` |
| kernel.c | 544378 | ` \| /* Function: FUN_003aeecc */ \|  \| void FUN_003aeecc(int param_1,int param_2) \|  \| { \| ushort uVar1;` |
| kernel.c | 544442 | `uVar1 = *param_2; \| *param_1 = uVar1 << 0x18 \| (uVar1 >> 8 & 0xff) << 0x10 \| (uVar1 >> 0x10 & 0xff) << 8 \| \| uVar1 >> 0x18; \| FUN_003aeecc(p` |
| kernel.c | 551665 | `uVar7 = 0; \| uVar4 = param_2; \| if (1 < param_2) { \| uVar2 = FUN_006fd49c(s_MEAS_CheckBCH2Cell_error_Card_ID_003b808c); \| thunk_FUN_006fb59e` |
| kernel.c | 559942 | `if ('\x01' < *pcVar2) { \| param_4 = (uint)*(byte *)((int)param_1 + uVar4 * 0x28 + 0x189); \| param_3 = (uint)(byte)param_1[uVar4 * 10 + 0x62]` |
| kernel.c | 559944 | `param_3 = (uint)(byte)param_1[uVar4 * 10 + 0x62]; \| FUN_006f4c52(0x1f,DAT_003c5ecc,4,uVar4,param_1[uVar4 * 10 + 0x61],param_3,param_4); \| } ` |
| kernel.c | 564069 | ` \| puVar1 = DAT_003ce414; \| local_18 = 0; \| iVar4 = FUN_003ceccc(DAT_003ce414[1]); \| iVar2 = DAT_003ce418; \| if (iVar4 == 0) { \| return DAT_` |
| kernel.c | 564126 | ` \| iVar1 = DAT_003ce414; \| iVar4 = 0; \| iVar3 = FUN_003ceccc(*(undefined4 *)(DAT_003ce414 + 4)); \| iVar2 = DAT_003ce418; \| if (iVar3 != 0) {` |
| kernel.c | 564160 | `undefined4 uVar4; \|  \| iVar1 = DAT_003ce414; \| iVar2 = FUN_003ceccc(*(undefined4 *)(DAT_003ce414 + 4)); \| if (iVar2 == 0) { \| return DAT_003` |
| kernel.c | 564192 | `undefined4 uVar5; \|  \| iVar1 = DAT_003ce840; \| iVar3 = FUN_003ceccc(*(undefined4 *)(DAT_003ce840 + 4)); \| if (iVar3 == 0) { \| return DAT_003` |
| kernel.c | 564241 | `uVar7 = param_1; \| uVar8 = param_2; \| iVar9 = param_3; \| iVar2 = FUN_003ceccc(*(undefined4 *)(DAT_003ce840 + 4)); \| iVar1 = DAT_003ce830; \| ` |
| kernel.c | 564267 | `iVar4 = (*pcVar5)(iVar2,param_2 + iVar6,param_3,param_4,uVar7,uVar8,iVar9); \| } \| else { \| iVar3 = FUN_003ceccc(); \| iVar4 = iVar1; \| if (iV` |
| kernel.c | 564303 | `uVar7 = param_1; \| uVar8 = param_2; \| iVar9 = param_3; \| iVar2 = FUN_003ceccc(*(undefined4 *)(DAT_003ce840 + 4)); \| iVar1 = DAT_003ce830; \| ` |
| kernel.c | 564329 | `iVar4 = (*pcVar5)(iVar2,param_2 + iVar6,param_3,param_4,uVar7,uVar8,iVar9); \| } \| else { \| iVar3 = FUN_003ceccc(); \| iVar4 = iVar1; \| if (iV` |
| kernel.c | 564361 | `iVar5 = DAT_003ce840; \| uVar8 = 0; \| pcVar7 = Reset; \| iVar2 = FUN_003ceccc(*(undefined4 *)(DAT_003ce840 + 4)); \| iVar1 = DAT_003ce830; \| if` |
| kernel.c | 564397 | `iVar2 = (*pcVar7)(iVar3,param_2,uVar8); \| } \| else { \| iVar5 = FUN_003ceccc(); \| iVar2 = iVar1; \| if (iVar5 != 0) { \| iVar2 = (*pcVar7)(iVar` |
| kernel.c | 564427 | `iVar3 = DAT_003cec48; \| pcVar5 = Reset; \| uVar6 = param_1; \| iVar2 = FUN_003ceccc(*(undefined4 *)(DAT_003cec48 + 4)); \| iVar1 = DAT_003cec4c` |
| kernel.c | 564445 | `iVar4 = (*pcVar5)(iVar2,param_2,param_3,param_4,param_5,param_6,param_7,uVar6); \| } \| else { \| iVar3 = FUN_003ceccc(); \| iVar4 = iVar1; \| if` |
| kernel.c | 564470 | `undefined4 uVar3; \|  \| iVar1 = DAT_003cec48; \| iVar2 = FUN_003ceccc(*(undefined4 *)(DAT_003cec48 + 4)); \| if (iVar2 == 0) { \| return DAT_003` |
| kernel.c | 564496 | `int iVar3; \|  \| iVar1 = DAT_003cec48; \| iVar3 = FUN_003ceccc(*(undefined4 *)(DAT_003cec48 + 4)); \| uVar2 = DAT_003ced80; \| if (iVar3 != 0) {` |
| kernel.c | 564512 | ` \|  \|  \| /* Function: FUN_003ceccc */ \|  \| undefined4 FUN_003ceccc(undefined4 param_1) \| ` |
| kernel.c | 564514 | ` \| /* Function: FUN_003ceccc */ \|  \| undefined4 FUN_003ceccc(undefined4 param_1) \|  \| { \| int iVar1;` |
| kernel.c | 570421 | `if (*(char *)(*(int *)(iVar6 + param_1 * 4) + 0x526) != '\0') { \| FUN_006f3e8a(&DAT_000015a8 + iVar5,iVar5 + 0x9ebe,0xe); \| *(undefined1 *)(` |
| kernel.c | 570440 | `} \| FUN_006f4a98(0x14,iVar5); \| LAB_003d6cc8: \| (&DAT_00009ecc)[*(int *)(iVar6 + param_1 * 4)] = 0; \| return; \| } \| ` |
| kernel.c | 570494 | `} \| iVar4 = *(int *)(iVar5 + param_1 * 4); \| if ((((*(char *)(iVar4 + 0x39d) == '\0') && (*(char *)(iVar4 + 0x6a9) == '\0')) \|\| \| ((&DAT_000` |
| kernel.c | 570495 | `iVar4 = *(int *)(iVar5 + param_1 * 4); \| if ((((*(char *)(iVar4 + 0x39d) == '\0') && (*(char *)(iVar4 + 0x6a9) == '\0')) \|\| \| ((&DAT_00009ec` |
| kernel.c | 586988 | `*param_6 = 0; \| *param_8 = 0; \| if ('\x02' < *DAT_003eb2e8) { \| FUN_006f4b10(0x14,DAT_003eb2ec,&DAT_003eaecc,*pcVar7,(&DAT_0000159e)[iVar5],` |
| kernel.c | 587033 | `pcVar3 = DAT_003eb2e8; \| if ((param_4 <= (byte)(bVar1 + 1)) \|\| (cVar8 == '\0')) { \| if ('\x02' < *DAT_003eb2e8) { \| FUN_006f4b10(0x14,DAT_00` |
| kernel.c | 617950 | ` \|  \|  \| /* Function: FUN_0040eecc */ \|  \| void FUN_0040eecc(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4) \| ` |
| kernel.c | 617952 | ` \| /* Function: FUN_0040eecc */ \|  \| void FUN_0040eecc(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4) \|  \| { \| FUN_` |
| kernel.c | 618783 | `if ((int *)(param_2 + 8) != (int *)0x0) { \| piVar1 = *(int **)(param_2 + 8); \| while ((*(int **)(param_2 + 0x10) = piVar1, piVar1 != (int *)` |
| kernel.c | 639357 | `if (*(byte *)(iVar7 + 0x8018) == 0xff) { \| *(undefined1 *)(*(int *)(iVar5 + 8) + 0x28) = 1; \| if ('\x01' < *pcVar3) { \| FUN_006f4c52(0x21,DA` |
| kernel.c | 639367 | `cVar2 = *pcVar3; \| joined_r0x00429e46: \| if ('\x01' < cVar2) { \| FUN_006f4c52(0x21,DAT_00429ecc,1,1); \| } \| uVar8 = *(uint *)(puVar9 + 6) \| ` |
| kernel.c | 693357 | ` \| { \| *(undefined4 *)*DAT_00473ec8 = param_1; \| if ('\x03' < *DAT_00473ecc) { \| FUN_006f4c52(0x22,DAT_00473ed0,3,0x29,0x19,param_1); \| } \| ` |
| kernel.c | 693401 | `if (iVar1 == 5) { \| FUN_008d959e(); \| iVar1 = FUN_008d91d6(0x18); \| if ('\x03' < *DAT_00473ecc) { \| FUN_006f4c52(0x22,DAT_00473f08,3,0x26,0x` |
| kernel.c | 693467 | `undefined4 local_14; \|  \| puVar1 = DAT_00473ec8; \| if ('\x03' < *DAT_00473ecc) { \| FUN_006f4c52(0x22,DAT_00473f0c,1,*(undefined4 *)*DAT_0047` |
| kernel.c | 704771 | `piVar10 = param_2; \| iVar2 = param_4; \| if (0x20 < param_3) { \| FUN_006f18c4(DAT_00483ecc,&DAT_0000125f,0); \| } \| pcVar1 = DAT_00483ed0; \| *` |
| kernel.c | 704780 | `} \| switch(param_4) { \| default: \| FUN_006f18c4(DAT_00483ecc,&DAT_000012b3,1); \| break; \| case 1: \| case 2:` |
| kernel.c | 704870 | `*(undefined1 *)(param_1 + 0x254) = 0; \| } \| if (0x20 < param_3) { \| FUN_006f18c4(DAT_00483ecc,0x14cf,0); \| } \| piVar1 = DAT_00483ee4; \| iVar` |
| kernel.c | 708000 | ` \|  \|  \| /* Function: FUN_00489ecc */ \|  \| void FUN_00489ecc(int param_1,int param_2,int param_3) \| ` |
| kernel.c | 708002 | ` \| /* Function: FUN_00489ecc */ \|  \| void FUN_00489ecc(int param_1,int param_2,int param_3) \|  \| { \| uint uVar1;` |
| kernel.c | 726775 | `local_2c = param_3; \| iStack_28 = param_4; \| if (1 < param_2) { \| uVar2 = FUN_006fd49c(s_srch__get_next_bch_cardId__d_004a7b08); \| thunk_FUN` |
| kernel.c | 726795 | `uVar9 = *DAT_004a7b54; \| uVar3 = DAT_004a7b54[1]; \| if (5 < uVar10) { \| uVar2 = FUN_006fd49c(s_srch__get_next_bch_bchNum__d_004a7b58,uVar10)` |
| kernel.c | 726796 | `uVar3 = DAT_004a7b54[1]; \| if (5 < uVar10) { \| uVar2 = FUN_006fd49c(s_srch__get_next_bch_bchNum__d_004a7b58,uVar10); \| thunk_FUN_006fb59e(s_` |
| kernel.c | 726809 | `local_40 = uVar5; \| iVar4 = FUN_006763c4(local_48,uStack_44,*puVar6,*(undefined4 *)(uVar5 + 0x34)); \| if (iVar4 == 0) { \| uVar2 = FUN_006fd4` |
| kernel.c | 726862 | `local_40 = uVar5; \| iVar4 = FUN_006763c4(local_48,uStack_44,*puVar6,*(undefined4 *)(uVar5 + 0x34)); \| if (iVar4 == 0) { \| uVar2 = FUN_006fd4` |
| kernel.c | 727460 | `if (((iVar4 == 0) && (*(int *)(DAT_004a8a78 + param_1 * 4) == 0)) && \| (iVar4 = FUN_008b8c90(param_1), *(int *)(iVar2 + iVar4 * 4) == 0)) { ` |
| kernel.c | 728243 | `FUN_006f4c52(0x1f,DAT_004a98a0 + -0x27,5,*(undefined1 *)(iVar7 + 9)); \| } \| if ((*(short *)(iVar7 + 10) == 0) \|\| (*(char *)(iVar7 + 9) == '\` |
| kernel.c | 775350 | ` \|  \|  \| /* Function: FUN_004d9ecc */ \|  \| uint FUN_004d9ecc(uint *param_1,int param_2) \| ` |
| kernel.c | 775352 | ` \| /* Function: FUN_004d9ecc */ \|  \| uint FUN_004d9ecc(uint *param_1,int param_2) \|  \| { \| char cVar1;` |
| kernel.c | 775521 | `iStack_24 = param_2; \| uStack_20 = param_3; \| uStack_1c = param_4; \| FUN_004d9ecc(); \| *(undefined4 *)(param_2 + 0xc) = uVar2; \| iVar1 = FUN` |
| kernel.c | 802261 | `} \| goto LAB_004ef022; \| } \| LAB_004eecc8: \| *(undefined1 *)(*(int *)(iVar7 + 0xc) + 0xc6a) = 0; \| } \| else {` |
| kernel.c | 802265 | `*(undefined1 *)(*(int *)(iVar7 + 0xc) + 0xc6a) = 0; \| } \| else { \| if (param_1 != 1) goto LAB_004eecc8; \| *(undefined1 *)(*(int *)(iVar7 + 0` |
| kernel.c | 821122 | ` \|  \|  \| /* Function: FUN_004fecce */ \|  \| void FUN_004fecce(int param_1) \| ` |
| kernel.c | 821124 | ` \| /* Function: FUN_004fecce */ \|  \| void FUN_004fecce(int param_1) \|  \| { \| undefined1 uVar1;` |
| kernel.c | 822081 | `*(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(iVar6 + 0x32e); \| *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(iVar6 + 0x32f); \| *(un` |
| kernel.c | 837427 | ` \|  \|  \| /* Function: FUN_0052ecc6 */ \|  \| void FUN_0052ecc6(byte *param_1) \| ` |
| kernel.c | 837429 | ` \| /* Function: FUN_0052ecc6 */ \|  \| void FUN_0052ecc6(byte *param_1) \|  \| { \| byte bVar1;` |
| kernel.c | 854593 | `else { \| local_28 = CONCAT22((short)param_4,(ushort)(param_3 != 0x28)); \| } \| if ((param_2 != *(ushort *)(&DAT_00003ecc + iVar2)) \|\| \| (iVar` |
| kernel.c | 864226 | `{ \| /* WARNING: Could not recover jumptable at 0x0058aec8. Too many branches */ \| /* WARNING: Treating indirect jump as call */ \| (*DAT_0058` |
| kernel.c | 870160 | `FUN_00591d9a(param_1 + 4,param_2); \| *(undefined4 *)(param_2 + 0xc) = uVar2; \| iVar1 = FUN_00666442(&local_28,uVar2,param_1); \| if (iVar1 ==` |
| kernel.c | 870171 | `FUN_00591de8(param_1 + 0x18,param_2); \| *(undefined4 *)(param_2 + 0xc) = uVar2; \| FUN_00666414(&local_28,uVar2); \| LAB_00591ecc: \| return CO` |
| kernel.c | 870465 | `*(undefined4 *)(param_1 + 4) = uVar3; \| *(undefined4 *)(param_2 + 0xc) = uVar4; \| iVar2 = FUN_00666442(&local_28,uVar4,param_1); \| if (iVar2` |
| kernel.c | 870474 | `param_1[8] = uVar1; \| uVar1 = FUN_0092e834(param_2,1); \| param_1[9] = uVar1; \| LAB_00591ecc: \| return CONCAT44(iStack_24,local_28); \| } \| ` |
| kernel.c | 918609 | ` \|  \|  \| /* Function: FUN_005ecc26 */ \|  \| undefined8 FUN_005ecc26(int *param_1,int param_2) \| ` |
| kernel.c | 918611 | ` \| /* Function: FUN_005ecc26 */ \|  \| undefined8 FUN_005ecc26(int *param_1,int param_2) \|  \| { \| int iVar1;` |
| kernel.c | 934339 | `int iVar11; \| int iVar12; \|  \| pcVar1 = DAT_00618ecc; \| iVar12 = *DAT_00618ec4 + DAT_00618ec8; \| if ('\x02' < *DAT_00618ecc) { \| FUN_006f4b1` |
| kernel.c | 934341 | ` \| pcVar1 = DAT_00618ecc; \| iVar12 = *DAT_00618ec4 + DAT_00618ec8; \| if ('\x02' < *DAT_00618ecc) { \| FUN_006f4b10(0x15,DAT_00618ed8,DAT_0061` |
| kernel.c | 934472 | `undefined4 uVar1; \|  \| uVar1 = *(undefined4 *)(DAT_00618ec8 + *DAT_00618ec4 + 8); \| if ('\x02' < *DAT_00618ecc) { \| FUN_006f4b10(0x15,DAT_00` |
| kernel.c | 934488 | `undefined4 uVar1; \|  \| uVar1 = *(undefined4 *)(DAT_00618ec8 + *DAT_00618ec4 + 0xc); \| if ('\x02' < *DAT_00618ecc) { \| FUN_006f4b10(0x15,DAT_` |
| kernel.c | 942805 | `iVar2 = *DAT_0062378c; \| local_32 = *(undefined1 *)(DAT_00623778 + 0x12); \| local_31 = (&DAT_00009ecd)[iVar2]; \| local_30 = (&DAT_00009ecc)[` |
| kernel.c | 948810 | `local_22 = *puVar1; \| local_26 = local_28; \| local_20 = FUN_0062c690(); \| FUN_0052ecc6(&local_48); \| if ((*(int *)(*(int *)(*piVar3 + 0x3c0)` |
| kernel.c | 949151 | `local_54 = param_3; \| pcStack_50 = param_4; \| local_30 = FUN_0062c690(); \| FUN_0052ecc6(&local_58); \| *(undefined2 *)(*piVar11 + 0x3d8) = pa` |
| kernel.c | 952692 | `local_74 = 0; \| local_6a = *puVar1; \| local_68 = FUN_0062c690(); \| FUN_0052ecc6(&local_90); \| *(undefined2 *)(*piVar2 + 0x3d8) = param_6[1];` |
| kernel.c | 954812 | `local_12 = *DAT_00634550; \| local_16 = local_18; \| local_10 = FUN_0062c690(); \| FUN_0052ecc6(&local_38); \| } \| return; \| }` |
| kernel.c | 966091 | `local_52 = *DAT_006445d4; \| local_56 = local_58; \| local_50 = FUN_0062c690(); \| FUN_0052ecc6(&local_78); \| if ((*(int *)(*(int *)(*piVar2 + ` |
| kernel.c | 966170 | `iVar6 = DAT_00644a74 + -0xe9; \| switch(*(undefined4 *)(&DAT_00001980 + iVar5)) { \| case 0: \| iVar5 = DAT_00644ecc + 1; \| break; \| case 1: \| ` |
| kernel.c | 966268 | `local_5a = *DAT_00644a8c; \| local_5e = local_60; \| local_58 = FUN_0062c690(); \| FUN_0052ecc6(&local_80); \| if ((*(int *)(*(int *)(*piVar3 + ` |
| kernel.c | 966283 | `goto LAB_006447f8; \| case 4: \| case 5: \| iVar5 = DAT_00644ecc; \| break; \| default: \| iVar5 = DAT_00644ecc + -0xd7;` |
| kernel.c | 966286 | `iVar5 = DAT_00644ecc; \| break; \| default: \| iVar5 = DAT_00644ecc + -0xd7; \| } \| FUN_006f4a98(0x18,iVar5); \| LAB_006447f8:` |
| kernel.c | 979141 | `local_b8 = DAT_00658ec4; \| local_b4 = DAT_00658ec0; \| FUN_006f3840(*(undefined4 *)(iVar6 + 0xa0),s_Bar_GSM_frequency_Timer_00658edc, \| *(und` |
| kernel.c | 1003317 | ` \|  \|  \| /* Function: FUN_00679ecc */ \|  \| undefined4 FUN_00679ecc(int *param_1,int param_2) \| ` |
| kernel.c | 1003319 | ` \| /* Function: FUN_00679ecc */ \|  \| undefined4 FUN_00679ecc(int *param_1,int param_2) \|  \| { \| int iVar1;` |
| kernel.c | 1003626 | `} \| } \| iVar2 = 1; \| if ((*param_1 != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 4,0), iVar2 == 1)) { \| iVar3 = *DAT_0067a6c0; \| *(char *)(*` |
| kernel.c | 1003920 | `} \| } \| iVar2 = 1; \| if ((*param_1 != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 4,0), iVar2 == 1)) { \| iVar3 = *DAT_0067a6c0; \| *(char *)(*` |
| kernel.c | 1003954 | `} \| } \| iVar2 = 1; \| if ((*param_1 != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 4,0), iVar2 == 1)) { \| iVar3 = *DAT_0067a6c0; \| *(char *)(*` |
| kernel.c | 1003988 | `} \| } \| iVar2 = 1; \| if ((*(char *)(param_1 + 4) != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 8,0), iVar2 == 1)) { \| iVar3 = *DAT_0067a6c0;` |
| kernel.c | 1005023 | `} \| } \| iVar2 = 1; \| if ((*param_1 != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 4,0), iVar2 == 1)) { \| iVar3 = *DAT_0067b3b0; \| *(char *)(*` |
| kernel.c | 1005120 | `} \| } \| iVar2 = 1; \| if ((*param_1 != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 4,0), iVar2 == 1)) { \| iVar3 = *DAT_0067b7bc; \| *(char *)(*` |
| kernel.c | 1005155 | `} \| } \| iVar2 = 1; \| if ((*param_1 != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 4,0), iVar2 == 1)) { \| iVar3 = *DAT_0067b7bc; \| *(char *)(*` |
| kernel.c | 1005190 | `} \| } \| iVar2 = 1; \| if ((*(char *)(param_1 + 4) != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 8,0), iVar2 == 1)) { \| iVar3 = *DAT_0067b7bc;` |
| kernel.c | 1005455 | `} \| } \| iVar2 = 1; \| if ((*param_1 != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 4,0), iVar2 == 1)) { \| iVar3 = *DAT_0067bc38; \| *(char *)(*` |
| kernel.c | 1005552 | `} \| } \| iVar2 = 1; \| if ((*param_1 != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 4,0), iVar2 == 1)) { \| iVar3 = *DAT_0067bc38; \| *(char *)(*` |
| kernel.c | 1005586 | `} \| } \| iVar2 = 1; \| if ((*param_1 != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 4,0), iVar2 == 1)) { \| iVar3 = *DAT_0067bc38; \| *(char *)(*` |
| kernel.c | 1005620 | `} \| } \| iVar2 = 1; \| if ((*(char *)(param_1 + 4) != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 8,0), iVar2 == 1)) { \| iVar3 = *DAT_0067c07c;` |
| kernel.c | 1005899 | `} \| } \| iVar2 = 1; \| if ((*param_1 != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 4,0), iVar2 == 1)) { \| iVar3 = *DAT_0067c4e8; \| *(char *)(*` |
| kernel.c | 1005996 | `} \| } \| iVar2 = 1; \| if ((*param_1 != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 4,0), iVar2 == 1)) { \| iVar3 = *DAT_0067c4e8; \| *(char *)(*` |
| kernel.c | 1006030 | `} \| } \| iVar2 = 1; \| if ((*param_1 != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 4,0), iVar2 == 1)) { \| iVar3 = *DAT_0067c4e8; \| *(char *)(*` |
| kernel.c | 1006064 | `} \| } \| iVar2 = 1; \| if ((*(char *)(param_1 + 4) != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 8,0), iVar2 == 1)) { \| iVar3 = *DAT_0067c4e8;` |
| kernel.c | 1006328 | `} \| } \| iVar2 = 1; \| if ((*param_1 != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 4,0), iVar2 == 1)) { \| iVar3 = *DAT_0067c9a0; \| *(char *)(*` |
| kernel.c | 1006425 | `} \| } \| iVar2 = 1; \| if ((*param_1 != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 4,0), iVar2 == 1)) { \| iVar3 = *DAT_0067c9a0; \| *(char *)(*` |
| kernel.c | 1006459 | `} \| } \| iVar2 = 1; \| if ((*param_1 != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 4,0), iVar2 == 1)) { \| iVar3 = *DAT_0067ce0c; \| *(char *)(*` |
| kernel.c | 1006493 | `} \| } \| iVar2 = 1; \| if ((*(char *)(param_1 + 4) != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 8,0), iVar2 == 1)) { \| iVar3 = *DAT_0067ce0c;` |
| kernel.c | 1006821 | `} \| } \| iVar3 = 1; \| if ((*param_1 != '\x01') \|\| (iVar3 = FUN_00679ecc(param_1 + 4,0), iVar3 == 1)) { \| piVar1 = DAT_0067d2ac; \| iVar4 = *DA` |
| kernel.c | 1006922 | `} \| } \| iVar3 = 1; \| if ((*param_1 != '\x01') \|\| (iVar3 = FUN_00679ecc(param_1 + 4,0), iVar3 == 1)) { \| piVar1 = DAT_0067d2ac; \| iVar4 = *DA` |
| kernel.c | 1006961 | `} \| } \| iVar3 = 1; \| if ((*param_1 != '\x01') \|\| (iVar3 = FUN_00679ecc(param_1 + 4,0), iVar3 == 1)) { \| piVar1 = DAT_0067d2ac; \| iVar4 = *DA` |
| kernel.c | 1007000 | `} \| } \| iVar3 = 1; \| if ((*(char *)(param_1 + 4) != '\x01') \|\| (iVar3 = FUN_00679ecc(param_1 + 8,0), iVar3 == 1)) { \| piVar1 = DAT_0067d2ac;` |
| kernel.c | 1007241 | `} \| } \| iVar3 = 1; \| if ((*(char *)(param_1 + 0x14) != '\x01') \|\| (iVar3 = FUN_00679ecc(param_1 + 0x18,0), iVar3 == 1)) \| { \| piVar1 = DAT_0` |
| kernel.c | 1007604 | `} \| } \| iVar3 = 1; \| if ((*param_1 != '\x01') \|\| (iVar3 = FUN_00679ecc(param_1 + 4,0), iVar3 == 1)) { \| piVar1 = DAT_0067db40; \| iVar4 = *DA` |
| kernel.c | 1007652 | `} \| } \| iVar3 = 1; \| if ((*(char *)(param_1 + 4) != '\x01') \|\| (iVar3 = FUN_00679ecc(param_1 + 8,0), iVar3 == 1)) { \| piVar1 = DAT_0067db40;` |
| kernel.c | 1008095 | `} \| } \| iVar2 = 1; \| if ((*param_1 != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 4,0), iVar2 == 1)) { \| iVar3 = *DAT_0067e3a4; \| *(char *)(*` |
| kernel.c | 1008207 | `} \| } \| iVar2 = 1; \| if ((*(char *)(param_1 + 4) != '\x01') \|\| (iVar2 = FUN_00679ecc(param_1 + 8,0), iVar2 == 1)) { \| iVar3 = *DAT_0067e3a4;` |
| kernel.c | 1008842 | `(iVar3 = FUN_0067a088(param_1 + 7,param_1[0x1a],1), iVar3 != 1)) { \| return iVar3; \| } \| if (((char)param_1[0x11] == '\x01') && (iVar3 = FUN` |
| kernel.c | 1011176 | `*(undefined1 *)(iVar5 + 0x87d) = *(undefined1 *)(param_2 + 0xa4); \| if (iVar6 != 0) { \| if (*(char *)(param_2 + 0x69) == '\0') { \| iVar6 = F` |
| kernel.c | 1048626 | `int iVar2; \|  \| iVar2 = FUN_0069d3f0(); \| iVar2 = DAT_006a1ecc + iVar2 * 0x34; \| if (*(int *)(iVar2 + 8) == 1) { \| cVar1 = *(char *)(iVar2 +` |
| kernel.c | 1048647 | `int iVar2; \|  \| iVar2 = FUN_0069d3f0(); \| iVar2 = DAT_006a1ecc + iVar2 * 0x34; \| if (*(int *)(iVar2 + 8) == 1) { \| cVar1 = *(char *)(iVar2 +` |
| kernel.c | 1048668 | `undefined4 *puVar2; \|  \| iVar1 = FUN_0069d3f0(); \| iVar1 = DAT_006a1ecc + iVar1 * 0x34; \| if ((*(int *)(iVar1 + 8) == 1) && (*(int *)(iVar1 ` |
| kernel.c | 1048694 | ` \| uVar5 = 0; \| iVar2 = FUN_0069d3f0(); \| uVar3 = DAT_006a1ecc + iVar2 * 0x34; \| bVar6 = *(int *)(uVar3 + 8) == 1; \| if (bVar6) { \| uVar3 = ` |
| kernel.c | 1048734 | `uint uVar1; \| bool bVar2; \|  \| uVar1 = DAT_006a1ecc + param_1 * 0x34; \| bVar2 = *(int *)(uVar1 + 8) == 1; \| if (bVar2) { \| uVar1 = (uint)*(b` |
| kernel.c | 1048752 | `int iVar1; \| bool bVar2; \|  \| iVar1 = DAT_006a1ecc + param_1 * 0x34; \| bVar2 = *(int *)(iVar1 + 8) == 1; \| if (bVar2) { \| iVar1 = *(int *)(i` |
| kernel.c | 1048778 | `iVar2 = DAT_006a1ed0 + param_1 * 0x8200; \| local_18 = CONCAT31((int3)((uint)param_4 >> 8),1); \| uVar1 = 0; \| iVar3 = DAT_006a1ecc + param_1 ` |
| kernel.c | 1070365 | `local_20 = CONCAT22(local_20._2_2_,sVar1 + 0x33); \| uVar6 = uVar6 + 1 & 0xffff; \| if ((short)(sVar1 + 0x33) < 0) { \| FUN_006fb8b0(s_cbch_del` |
| kernel.c | 1073991 | `} \| if (*(int *)(DAT_006bda58 + iVar6 * 0x408) == 0) goto LAB_006bdafc; \| uVar8 = FUN_006b700a(uVar12); \| iVar9 = DAT_006bdecc; \| if ((uVar8` |
| kernel.c | 1073993 | `uVar8 = FUN_006b700a(uVar12); \| iVar9 = DAT_006bdecc; \| if ((uVar8 & 0x1b8) == 0) { \| if (*(int *)(DAT_006bdecc + iVar6 * 0x408) == 0) goto ` |
| kernel.c | 1074045 | `uVar10 = (uint)*(byte *)(iVar6 + 0xbc) & ~param_1; \| *(char *)(iVar6 + 0xbc) = (char)uVar10; \| if (uVar10 == 0) { \| if ((*(int *)(DAT_006bde` |
| kernel.c | 1074046 | `*(char *)(iVar6 + 0xbc) = (char)uVar10; \| if (uVar10 == 0) { \| if ((*(int *)(DAT_006bdecc + iVar5 * 0x408) == 0) \|\| \| (*(byte *)(DAT_006bdec` |
| kernel.c | 1074200 | `pcVar2 = DAT_006bdedc; \| local_2c = uVar8 * 0x81; \| local_34 = iVar9 * 0x81; \| local_3c = DAT_006bdecc + uVar8 * 0x102; \| uVar12 = (uint)*(b` |
| kernel.c | 1074202 | `local_34 = iVar9 * 0x81; \| local_3c = DAT_006bdecc + uVar8 * 0x102; \| uVar12 = (uint)*(byte *)(local_3c + 1); \| local_38 = DAT_006bdecc + iV` |
| kernel.c | 1074244 | `if (uVar10 != 0xffff) { \| if ('\x02' < *pcVar2) { \| FUN_006f4b10(0x15,DAT_006bdee4 + 7,&DAT_006bdf10,uVar10,uVar1, \| *(undefined1 *)(DAT_006` |
| kernel.c | 1075521 | `} while (uVar8 < 0x20); \| *puVar12 = (char)uVar9; \| if (0x10 < (uVar9 & 0xff)) { \| uVar6 = FUN_006fd49c(s_L1_more_bch_num__d_006bfaf0); \| th` |
| kernel.c | 1075522 | `*puVar12 = (char)uVar9; \| if (0x10 < (uVar9 & 0xff)) { \| uVar6 = FUN_006fd49c(s_L1_more_bch_num__d_006bfaf0); \| thunk_FUN_006fb59e(s__MAX_BC` |
| kernel.c | 1079838 | `} \| else { \| if (*param_1 != 3) { \| uVar5 = FUN_006fd49c(s_wrong_dch_type_for_CBCH___d_006c596c); \| thunk_FUN_006fb59e(DAT_006c598c,DAT_006c` |
| kernel.c | 1083040 | `} \| if (iVar1 == 1) { \| if ('\x02' < *DAT_006c8ea4) { \| FUN_006f4b10(0x15,DAT_006c8ecc,DAT_006c8ec8,uVar2,local_18 & 0xff,*param_1); \| } \| F` |
| kernel.c | 1083048 | `else { \| if (iVar1 == 2) { \| if ('\x02' < *DAT_006c8ea4) { \| FUN_006f4b10(0x15,DAT_006c8ecc + 2,DAT_006c8ec8,uVar2,local_18 & 0xff,*param_1)` |
| kernel.c | 1083063 | `return; \| } \| if ('\x02' < *DAT_006c8ea4) { \| FUN_006f4b10(0x15,DAT_006c8ecc + 1,DAT_006c8ec8,uVar2,local_18 & 0xff,*param_1); \| } \| FUN_000` |
| kernel.c | 1084447 | `puVar7 = (undefined4 *)FUN_00735a26(); \| pcVar2 = DAT_006caec4; \| if ('\x02' < *DAT_006caec4) { \| FUN_006f4b10(0x15,DAT_006caecc,DAT_006caec` |
| kernel.c | 1085372 | ` \|  \|  \| /* Function: FUN_006cbecc */ \|  \| void FUN_006cbecc(uint *param_1) \| ` |
| kernel.c | 1085374 | ` \| /* Function: FUN_006cbecc */ \|  \| void FUN_006cbecc(uint *param_1) \|  \| { \| char *pcVar1;` |
| kernel.c | 1087514 | `FUN_006c22b2(auStack_20); \| if (10000 < param_2) { \| uVar2 = FUN_006fd49c(DAT_006ceb64,*param_1,param_1[1]); \| thunk_FUN_006fb59e(DAT_006ceb` |
| kernel.c | 1090750 | `FUN_006f4a98(0x15,DAT_006d276c + 0xe7); \| return; \| } \| FUN_000dfecc(); \| FUN_006d2164(); \| iVar10 = *piVar1; \| iVar6 = FUN_000c8f06();` |
| kernel.c | 1159173 | `FUN_006c3efa(param_2,param_1,uVar3,uVar4); \| LAB_00741d6c: \| FUN_006c2afc(param_1,4); \| *DAT_00741ecc = 0; \| if ('\x02' < *pcVar1) { \| uVar4` |
| kernel.c | 1187241 | ` \|  \|  \| /* Function: FUN_0076ecc6 */ \|  \| void FUN_0076ecc6(int param_1) \| ` |
| kernel.c | 1187243 | ` \| /* Function: FUN_0076ecc6 */ \|  \| void FUN_0076ecc6(int param_1) \|  \| { \| undefined4 *puVar1;` |
| kernel.c | 1226198 | `uVar4 = param_4; \| if ('\x02' < *DAT_0079fec8) { \| uVar4 = param_2; \| FUN_006f4b10(1,DAT_0079fecc,&DAT_0079f6cc,param_5,param_6,param_2); \| ` |
| kernel.c | 1226204 | `if (iVar2 != 0) { \| if ((uint)param_1[5] < param_2) { \| if ('\x02' < *pcVar1) { \| FUN_006f4b10(1,DAT_0079fecc + 1,&DAT_0079fcf8,param_1[5],p` |
| kernel.c | 1226218 | `param_2 = param_2 - 1; \| } while (iVar2 != 0); \| if ('\x02' < *pcVar1) { \| FUN_006f4a98(1,DAT_0079fecc + 2); \| } \| } \| }` |
| kernel.c | 1226233 | ` \| { \| if ((*(uint *)(param_1 + 0x14) <= param_2) && ('\x02' < *DAT_0079fec8)) { \| FUN_006f4b10(1,DAT_0079fecc + 3,&DAT_0079fcf8); \| } \| FUN` |
| kernel.c | 1227436 | `uStack_30 = param_2; \| local_2c = param_3; \| uStack_28 = param_4; \| if ((*(char *)(param_1 + 0x424) != '\0') && ('\x02' < *DAT_007a1ecc)) { ` |
| kernel.c | 1227486 | `} \| FUN_0066cbec(iVar6); \| iVar3 = FUN_00670828(param_1 + *(short *)(param_1 + 0x436) * 0x9d4 + 0x464); \| pcVar2 = DAT_007a1ecc; \| if (iVar3` |
| kernel.c | 1227488 | `iVar3 = FUN_00670828(param_1 + *(short *)(param_1 + 0x436) * 0x9d4 + 0x464); \| pcVar2 = DAT_007a1ecc; \| if (iVar3 == 0) { \| if ('\x02' < *DA` |
| kernel.c | 1240436 | `param_4 = extraout_r3; \| } \| if (((uint)param_1 & 1) != 0) { \| FUN_006fb8b0(s_0______uint32_buf_ptr___0x1__007beecc,s_ui_special_effect_c_00` |
| kernel.c | 1245980 | `local_160 = *(char **)(*(int *)(pcVar18 + uVar19 * 4 + 0x10) + 4); \| local_15c = uVar20; \| local_158 = uVar19; \| FUN_006f4b10(0x18,DAT_007ca` |
| kernel.c | 1245988 | `*(undefined1 *)(*(int *)(pcVar18 + uVar19 * 4 + 0x10) + 0x341) = 1; \| if ('\x02' < *pcVar6) { \| local_160 = *(char **)(*(int *)(pcVar18 + uV` |
| kernel.c | 1246018 | `FUN_006429d4(pcVar18,0); \| } \| else if ('\x02' < *pcVar6) { \| FUN_006f4a98(0x18,DAT_007caecc + 2); \| } \| cVar10 = FUN_005429c4(); \| piVar8 =` |
| kernel.c | 1246118 | `uVar4 = 0; \| if ('\x02' < *DAT_007caee4) { \| param_4 = *(undefined4 *)(param_1 + 0xc); \| FUN_006f4b10(0x18,DAT_007caecc + -0x1a,DAT_007caec8` |
| kernel.c | 1246130 | `if (*pcVar2 < '\x03') { \| return 0; \| } \| FUN_006f4a98(0x18,DAT_007caecc + -0x19,piVar1,iVar3,param_4); \| return 0; \| } \| }` |
| kernel.c | 1246171 | `pcVar1 = DAT_007caee4; \| uVar4 = 0; \| if ('\x02' < *DAT_007caee4) { \| FUN_006f4a98(0x18,DAT_007caecc + 0x33,param_3,param_4,param_4); \| } \| ` |
| kernel.c | 1246174 | `FUN_006f4a98(0x18,DAT_007caecc + 0x33,param_3,param_4,param_4); \| } \| piVar2 = DAT_007caeec; \| iVar5 = DAT_007caecc + 0x34; \| while( true ) ` |
| kernel.c | 1267265 | `uStack_2c = param_4; \| if (1 < param_2) { \| uVar1 = FUN_006fd49c(DAT_007e946c); \| thunk_FUN_006fb59e(s_card_id_<_CARD_MAXID_007e9484,s_wl1c_` |
| kernel.c | 1267339 | ` \| if (1 < param_1) { \| uVar2 = FUN_006fd49c(DAT_007e94bc,param_1,param_3,param_4,param_3,param_4); \| thunk_FUN_006fb59e(s_card_id_<_CARD_MA` |
| kernel.c | 1267720 | `} \| if (1 < param_1) { \| uVar3 = FUN_006fd49c(DAT_007e9d6c,param_1); \| thunk_FUN_006fb59e(s_card_id_<_CARD_MAXID_007e9484,s_wl1c_meas_bch2_c` |
| kernel.c | 1270717 | ` \| iVar1 = *DAT_007eeca8; \| if (1 < iVar1) { \| FUN_006fb8b0(s_multi_sys_<_RR_SYS_NUMBER_007eecc4,s_rrdm_gsm2utran_pcco_c_007eecac,0xcb); \| }` |
| kernel.c | 1270755 | `iVar2 = *DAT_007eeca8; \| local_14 = param_4; \| if (1 < iVar2) { \| FUN_006fb8b0(s_multi_sys_<_RR_SYS_NUMBER_007eecc4,s_rrdm_gsm2utran_pcco_c_` |
| kernel.c | 1270795 | `iVar2 = *DAT_007ef16c; \| local_14 = param_4; \| if (1 < iVar2) { \| FUN_006fb8b0(s_multi_sys_<_RR_SYS_NUMBER_007eecc4,s_rrdm_gsm2utran_pcco_c_` |
| kernel.c | 1270857 | ` \| iVar4 = *DAT_007ef16c; \| if (1 < iVar4) { \| FUN_006fb8b0(s_multi_sys_<_RR_SYS_NUMBER_007eecc4,s_rrdm_gsm2utran_pcco_c_007eecac,0x1cd); \| ` |
| kernel.c | 1270914 | ` \| iVar3 = *DAT_007ef16c; \| if (1 < iVar3) { \| FUN_006fb8b0(s_multi_sys_<_RR_SYS_NUMBER_007eecc4,s_rrdm_gsm2utran_pcco_c_007eecac,0x216); \| ` |
| kernel.c | 1271012 | ` \| iVar3 = *DAT_007ef510; \| if (1 < iVar3) { \| FUN_006fb8b0(s_multi_sys_<_RR_SYS_NUMBER_007eecc4,s_rrdm_gsm2utran_pcco_c_007eecac,0x284,para` |
| kernel.c | 1273539 | `*puVar17 = uVar12 & 0xfffff0ff \| uVar1 \| uVar16; \| uVar15 = (uint)(*pbVar18 >> 5) << 0xd; \| *puVar17 = uVar12 & 0xfffe10ff \| uVar1 \| uVar16 ` |
| kernel.c | 1280620 | `if (*(char *)(param_1 + 0xcdb) != '\0') { \| LAB_007fae3e: \| if ((*(char *)(param_1 + 0x34) != '\x01') \|\| \| (*(char *)(iVar6 + 0x7e) != *(cha` |
| kernel.c | 1280648 | `if (*(char *)(param_1 + 0xcdb) != '\0') goto LAB_007fae5c; \| } \| else if (cVar1 == '\x04') goto LAB_007fae3e; \| LAB_007faecc: \| } \| } \| retu` |
| kernel.c | 1302534 | `puVar5[0x1e] = puVar7[6]; \| } \| puVar5[2] = (byte)((uint)(iVar11 << 0x1b) >> 0x1f); \| puVar5[3] = *(undefined1 *)(iVar9 + 0xecc); \| puVar5[4` |
| kernel.c | 1302760 | `thunk_FUN_006fb59e(s_nas_swth_context_ptr_g_>acc_clas_0081d420, \| s_nas_swth_signal_conversion_c_0081c9a4,0x637,uVar8); \| } \| FUN_0097aecc(u` |
| kernel.c | 1302874 | `FUN_0097af76(uVar4 + uVar8 * 8 + 0x112, \| *(int *)(*(int *)(iVar7 + *piVar2 * 4) + 4) + uVar8 * 8 + 0x77c); \| } \| FUN_0097aecc(uVar4 + 0x7c,` |
| kernel.c | 1304240 | `*piVar1 = piVar6[2]; \| *piVar2 = *piVar6; \| *piVar4 = piVar6[3]; \| *DAT_00821ecc = piVar6[4]; \| *DAT_00821ed0 = piVar6[5]; \| *DAT_00821ed4 =` |
| kernel.c | 1338636 | `else { \| puVar7 = (undefined4 *)(param_1 + 4); \| iVar2 = FUN_0076f26c(); \| uVar1 = DAT_0085fecc; \| if (iVar2 == 1) { \| if (puVar7 != (undefi` |
| kernel.c | 1350575 | `FUN_006f18c4(DAT_0086efd8,0x213e,0); \| goto LAB_0086ece0; \| } \| LAB_0086ecc6: \| uVar7 = puVar3[1]; \| *puVar4 = *puVar3; \| puVar4[1] = uVar7;` |
| kernel.c | 1350591 | `if (iVar6 == 0) { \| FUN_008d8ba8(&local_30,*puVar2,puVar2[1],1); \| iVar6 = FUN_00676430(*puVar3,puVar3[1],local_30,uStack_2c); \| if (iVar6 !` |
| kernel.c | 1364409 | `if (bVar13) { \| iVar8 = *(int *)(DAT_00885ec8 + 4); \| } \| if ((bVar13 && iVar8 == 1) && (*DAT_00885ecc = 1, '\x01' < *pcVar1)) { \| FUN_006f4` |
| kernel.c | 1365373 | `if (*pcVar2 < '\x03') { \| return; \| } \| goto LAB_00886ecc; \| } \| *(undefined4 *)(param_1 + 0x84) = 1; \| *(undefined4 *)(param_1 + 0x8c) = 0x` |
| kernel.c | 1365392 | `*(int *)(param_1 + 0x88) = iVar5; \| if (iVar5 == 0) { \| if ('\x01' < *pcVar2) { \| LAB_00886ecc: \| FUN_006f4a98(0x20,DAT_00886fb4); \| return;` |
| kernel.c | 1366351 | `FUN_006a7a78(&local_4c,uVar5,local_40,local_30); \| iVar7 = FUN_006763fa(local_4c,local_48,uVar9,local_28); \| if (iVar7 == 0) { \| if (*DAT_00` |
| kernel.c | 1381211 | `if ((uVar4 & local_38[0]) != 0) { \| iVar2 = *DAT_008a4204 + param_1 * 4; \| if (iVar7 == 0xffffff) { \| iVar2 = *(int *)(&DAT_00003ecc + *(int` |
| kernel.c | 1381217 | `iVar7 = iVar2; \| } \| else { \| iVar2 = *(int *)(&DAT_00003ecc + *(int *)(iVar2 + 0xc) + uVar5 * 0x14); \| if (iVar7 < iVar2) goto LAB_008a3ff8` |
| kernel.c | 1381237 | `*(undefined2 *)(*(int *)(iVar7 + 0xc) + 0x2c3e) = \| *(undefined2 *)(&DAT_00003ed2 + *(int *)(iVar7 + 0xc) + uVar6 * 0x14); \| *(undefined4 *)` |
| kernel.c | 1381283 | `do { \| if (((&DAT_00003ec8)[iVar3 + uVar6 * 0x14] != '\0') && \| (((*(int *)(iVar3 + 0x2e0) != 0 \|\| ((&DAT_00003ec9)[iVar3 + uVar6 * 0x14] !=` |
| kernel.c | 1381286 | `(iVar4 < *(int *)(&DAT_00003ecc + iVar3 + uVar6 * 0x14))))) { \| uVar9 = *(undefined2 *)(&DAT_00003ed0 + iVar3 + uVar6 * 0x14); \| uVar8 = (ui` |
| kernel.c | 1415120 | `*(undefined4 *)(iVar9 + 0x8e4) = uVar4; \| } \| if (*pcVar1 < '\x02') goto LAB_008d6d0e; \| iVar3 = DAT_008d6ecc + -0xf; \| } \| else { \| local_5` |
| kernel.c | 1415147 | `*(undefined4 *)(iVar9 + 0x8e0) = *(undefined4 *)(iVar3 + 0xa0); \| *(undefined4 *)(iVar9 + 0x8e4) = uVar4; \| } \| iVar3 = DAT_008d6ecc; \| if (` |
| kernel.c | 1429707 | ` \|  \|  \| /* Function: FUN_008eccb8 */ \|  \| int FUN_008eccb8(void) \| ` |
| kernel.c | 1429709 | ` \| /* Function: FUN_008eccb8 */ \|  \| int FUN_008eccb8(void) \|  \| { \| int iVar1;` |
| kernel.c | 1431752 | `{ \| int *piVar1; \|  \| piVar1 = DAT_008eeecc; \| FUN_007ebaa4(*(undefined4 *)(*DAT_008eeecc + 0x22c),1,0x4f3,0x8e); \| FUN_006f3a14(*piVar1 + 0` |
| kernel.c | 1431753 | `int *piVar1; \|  \| piVar1 = DAT_008eeecc; \| FUN_007ebaa4(*(undefined4 *)(*DAT_008eeecc + 0x22c),1,0x4f3,0x8e); \| FUN_006f3a14(*piVar1 + 0x1f0` |
| kernel.c | 1431780 | `uVar7 = param_1; \| FUN_006f4b10(0xe,DAT_008eef1c,&DAT_008eef10,param_2,param_1,param_3,param_4); \| } \| piVar1 = DAT_008eeecc; \| if ((param_2` |
| kernel.c | 1431782 | `} \| piVar1 = DAT_008eeecc; \| if ((param_2 < 8) && ('\x02' < *pcVar2)) { \| iVar6 = *DAT_008eeecc + param_2 * 4; \| uVar7 = *(uint *)(iVar6 + 0` |
| kernel.c | 1431784 | `if ((param_2 < 8) && ('\x02' < *pcVar2)) { \| iVar6 = *DAT_008eeecc + param_2 * 4; \| uVar7 = *(uint *)(iVar6 + 0x3c); \| FUN_006f4b10(0xe,DAT_` |
| kernel.c | 1431849 | `{ \| int iVar1; \|  \| if ((*(int *)(*DAT_008eeecc + param_2 * 0x70 + param_1 * 0x10 + 0x24c) != 0) && \| (iVar1 = FUN_007eb956(*(undefined4 *)(` |
| kernel.c | 1431850 | `int iVar1; \|  \| if ((*(int *)(*DAT_008eeecc + param_2 * 0x70 + param_1 * 0x10 + 0x24c) != 0) && \| (iVar1 = FUN_007eb956(*(undefined4 *)(*DAT` |
| kernel.c | 1431869 | `int iVar4; \|  \| pcVar2 = DAT_008eef0c; \| piVar1 = DAT_008eeecc; \| iVar4 = *DAT_008eeecc + param_2 * 0x70 + param_1 * 0x10; \| if ('\x02' < *D` |
| kernel.c | 1431870 | ` \| pcVar2 = DAT_008eef0c; \| piVar1 = DAT_008eeecc; \| iVar4 = *DAT_008eeecc + param_2 * 0x70 + param_1 * 0x10; \| if ('\x02' < *DAT_008eef0c) ` |
| kernel.c | 1431911 | `{ \| undefined4 uVar1; \|  \| if (*(int *)(*DAT_008eeecc + param_2 * 0x70 + param_1 * 0x10 + 0x24c) != 0) { \| uVar1 = FUN_007eb956(*(undefined4` |
| kernel.c | 1431912 | `undefined4 uVar1; \|  \| if (*(int *)(*DAT_008eeecc + param_2 * 0x70 + param_1 * 0x10 + 0x24c) != 0) { \| uVar1 = FUN_007eb956(*(undefined4 *)(` |
| kernel.c | 1441373 | `if (0x17 < param_3) { \| FUN_006fb8b0(s_unit_len_<__MAX_L2_MESSAGE_SIZE_008feca0,DAT_008fec98,0xa04); \| } \| FUN_006f3e8a(DAT_008fecc0,param_4` |
| kernel.c | 1441422 | `uVar1 = 6; \| } \| FUN_008fe70e(param_1,uVar1,0x17,auStack_20,0,0); \| iVar2 = DAT_008fecc0 + -0x78 + param_1 * 0x28; \| if (((*(int *)(iVar2 + ` |
| kernel.c | 1441423 | `} \| FUN_008fe70e(param_1,uVar1,0x17,auStack_20,0,0); \| iVar2 = DAT_008fecc0 + -0x78 + param_1 * 0x28; \| if (((*(int *)(iVar2 + 0x18) == 1) &` |
| kernel.c | 1441425 | `iVar2 = DAT_008fecc0 + -0x78 + param_1 * 0x28; \| if (((*(int *)(iVar2 + 0x18) == 1) && (*(char *)(DAT_008fecc0 + -0x78 + param_1 * 0x28) == ` |
| kernel.c | 1441426 | `if (((*(int *)(iVar2 + 0x18) == 1) && (*(char *)(DAT_008fecc0 + -0x78 + param_1 * 0x28) == '\x01') \| ) && (*(char *)(iVar2 + 1) == '?')) { \|` |
| kernel.c | 1441473 | `else { \| FUN_008fe91e(0x17,auStack_24); \| } \| iVar1 = DAT_008fecc0; \| FUN_006f3e8a(DAT_008fecc0 + -0x26,auStack_24,0x15); \| *(undefined1 *)(` |
| kernel.c | 1441474 | `FUN_008fe91e(0x17,auStack_24); \| } \| iVar1 = DAT_008fecc0; \| FUN_006f3e8a(DAT_008fecc0 + -0x26,auStack_24,0x15); \| *(undefined1 *)(iVar1 + -` |
| kernel.c | 1441476 | `iVar1 = DAT_008fecc0; \| FUN_006f3e8a(DAT_008fecc0 + -0x26,auStack_24,0x15); \| *(undefined1 *)(iVar1 + -0x11) = 0x17; \| if ('\x04' < *DAT_008` |
| kernel.c | 1441477 | `FUN_006f3e8a(DAT_008fecc0 + -0x26,auStack_24,0x15); \| *(undefined1 *)(iVar1 + -0x11) = 0x17; \| if ('\x04' < *DAT_008fecc4) { \| FUN_006f4a98(` |
| kernel.c | 1452064 | `} \| iVar8 = *(int *)puVar3[2]; \| if ((iVar8 != puVar3[7]) && (puVar3[7] = iVar8, '\x02' < *pcVar2)) { \| FUN_006f4b10(0x1f,DAT_00915ec8 + 1,&` |
| kernel.c | 1452065 | `iVar8 = *(int *)puVar3[2]; \| if ((iVar8 != puVar3[7]) && (puVar3[7] = iVar8, '\x02' < *pcVar2)) { \| FUN_006f4b10(0x1f,DAT_00915ec8 + 1,&DAT_` |
| kernel.c | 1452066 | `if ((iVar8 != puVar3[7]) && (puVar3[7] = iVar8, '\x02' < *pcVar2)) { \| FUN_006f4b10(0x1f,DAT_00915ec8 + 1,&DAT_00915ed0,*DAT_00915ecc,DAT_00` |
| kernel.c | 1473149 | `} \| if ((char)param_1[0x1b] == '\x01') { \| if ('\x03' < *pcVar1) { \| FUN_006f4bcc(0x22,DAT_00939ecc); \| puVar8 = extraout_r1_00; \| } \| if ((` |
| kernel.c | 1475841 | `*(uint *)(param_1 + 0x1c) = local_2c; \| *(int *)(param_1 + 0x14) = local_34; \| *(uint *)(param_1 + 0x18) = local_30; \| uVar4 = DAT_0093decc;` |
| kernel.c | 1475842 | `*(int *)(param_1 + 0x14) = local_34; \| *(uint *)(param_1 + 0x18) = local_30; \| uVar4 = DAT_0093decc; \| iVar5 = FUN_00adb194((local_30 >> 3) ` |
| kernel.c | 1482773 | `} \| else { \| if (param_2 != 1) { \| if (param_2 == 2) goto LAB_00946ecc; \| if (param_2 != 4) goto LAB_00946ece; \| } \| if (uVar1 != 0) goto LA` |
| kernel.c | 1482778 | `} \| if (uVar1 != 0) goto LAB_00946ece; \| } \| LAB_00946ecc: \| uVar2 = 1; \| LAB_00946ece: \| if ('\x02' < *DAT_009472ac) {` |
| kernel.c | 1488754 | `if (bVar16) { \| uVar14 = *(undefined4 *)(iVar7 + 0xc); \| local_44[uVar11] = uVar14; \| if (*DAT_0094decc < '\x03') goto LAB_0094dc4c; \| iVar7` |
| kernel.c | 1488768 | `bVar16 = (int)((uint)*(ushort *)(iVar7 + 8) << 0x16) < 0; \| if (!bVar16) goto LAB_0094dbb6; \| local_44[uVar11] = *(undefined4 *)(iVar7 + 0x1` |
| kernel.c | 1488785 | `bVar16 = (int)((uint)*(ushort *)(iVar7 + 8) << 0x15) < 0; \| if (!bVar16) goto LAB_0094dbb6; \| local_44[uVar11] = *(undefined4 *)(iVar7 + 0x1` |
| kernel.c | 1488817 | `LAB_0094dc6a: \| if (bVar16) { \| local_44[uVar11] = *(undefined4 *)(iVar7 + uVar13 * 0x28 + 0x285c); \| if (*DAT_0094decc < '\x03') goto LAB_0` |
| kernel.c | 1488831 | `bVar16 = (int)((uint)*(ushort *)(iVar7 + iVar9) << 0x16) < 0; \| if (!bVar16) goto LAB_0094dc6a; \| local_44[uVar11] = *(undefined4 *)(iVar7 +` |
| kernel.c | 1488847 | `bVar16 = (int)((uint)*(ushort *)(iVar7 + iVar9) << 0x15) < 0; \| if (!bVar16) goto LAB_0094dc6a; \| local_44[uVar11] = *(undefined4 *)(iVar7 +` |
| kernel.c | 1488865 | `cVar1 = *(char *)(local_154 + 0x172); \| uVar13 = (uint)*(byte *)(local_154 + 0x60); \| uVar6 = (uint)*(byte *)(local_154 + 0x174); \| if ('\x0` |
| kernel.c | 1488877 | `local_160 = local_15c - (uVar13 * 0x20 + uVar6 * 0x10); \| local_15c = local_15c - (uVar13 * 0x20 + uVar6 * -0x10); \| iVar7 = DAT_0094dedc; \|` |
| kernel.c | 1488885 | `else if (iVar7 == 1) { \| iVar7 = FUN_00971b54(local_44,uVar11,cVar1); \| local_160 = iVar7 - (uVar13 * 0x20 + uVar6 * 0x10); \| if ('\x02' < *` |
| kernel.c | 1488899 | `} \| local_160 = uVar13 * 0x20 + uVar6 * 0x10 + local_15c; \| local_15c = local_15c + uVar13 * 0x20 + uVar6 * -0x10; \| if ('\x02' < *DAT_0094d` |
| kernel.c | 1488924 | `LAB_0094de56: \| iVar10 = 1; \| } \| if ('\x02' < *DAT_0094decc) { \| FUN_006f4c52(0x1e,DAT_0094ded0 + -0x34,1,iVar10); \| } \| puVar2 = DAT_0094d` |
| kernel.c | 1488985 | `uVar12 = uVar12 \| 1 << uVar11; \| iVar7 = *(int *)(*DAT_0094dec4 + param_1 * 4 + 4); \| *(uint *)(iVar7 + 0x218c) = *(uint *)(iVar7 + 0x218c) ` |
| kernel.c | 1488999 | `iVar7 = *(int *)(*DAT_0094dec4 + param_1 * 4 + 4); \| *(uint *)(iVar7 + 0x218c) = *(uint *)(iVar7 + 0x218c) & ~(1 << uVar11); \| iVar7 = DAT_0` |
| kernel.c | 1503068 | `char *pcVar7; \|  \| *param_4 = 0xfc; \| piVar5 = DAT_0095ecc8; \| iVar4 = DAT_0095ecc4; \| switch(*(undefined1 *)(param_1 + 0x15)) { \| case 0:` |
| kernel.c | 1503069 | ` \| *param_4 = 0xfc; \| piVar5 = DAT_0095ecc8; \| iVar4 = DAT_0095ecc4; \| switch(*(undefined1 *)(param_1 + 0x15)) { \| case 0: \| cVar1 = *(char ` |
| kernel.c | 1503084 | `} \| if (cVar1 != '\x02') { \| uVar6 = 0x4c3; \| pcVar7 = s_timer_param_wrong__owner_module_u_0095eccc; \| goto LAB_0095eb5e; \| } \| uVar3 = 0x25` |
| kernel.c | 1503105 | `case 2: \| *param_2 = 0x1c1; \| iVar4 = DAT_0095ecbc; \| piVar5 = DAT_0095ecc0; \| break; \| case 3: \| *param_2 = 0x209;` |
| kernel.c | 1505825 | `FUN_00961860(uVar2); \| if ((char)local_30 == '\0') { \| if ((local_3c & 0xff) == 0) { \| iVar3 = FUN_0098decc(uVar2); \| if ((iVar3 != 0) && (*` |
| kernel.c | 1512813 | `uVar6 = (local_40 + 3U >> 2) + 2; \| if (*(ushort *)(iVar13 + 8) < uVar6) { \| if ('\x01' < *DAT_00968a9c) { \| FUN_006f4b10(0x20,DAT_00968ecc,` |
| kernel.c | 1515983 | `*(int *)(iVar1 + 0x58) = iVar3; \| *(uint *)(iVar3 + 0x4c) = *(byte *)(iVar3 + 0x4c) & 3; \| iVar1 = FUN_0096c5f0(); \| FUN_006f4b10(0x22,DAT_0` |
| kernel.c | 1516600 | `*(int *)(DAT_0096d368 + 0x58) = iVar3; \| *(uint *)(iVar3 + 0x4c) = *(byte *)(iVar3 + 0x4c) & 3; \| iVar1 = FUN_0096c652(); \| FUN_006f4b10(0x2` |
| kernel.c | 1526418 | ` \|  \|  \| /* Function: FUN_0097aecc */ \|  \| void FUN_0097aecc(short *param_1,ushort *param_2) \| ` |
| kernel.c | 1526420 | ` \| /* Function: FUN_0097aecc */ \|  \| void FUN_0097aecc(short *param_1,ushort *param_2) \|  \| { \| short sVar1;` |
| kernel.c | 1541835 | ` \|  \|  \| /* Function: FUN_0098decc */ \|  \| undefined4 FUN_0098decc(uint param_1) \| ` |
| kernel.c | 1541837 | ` \| /* Function: FUN_0098decc */ \|  \| undefined4 FUN_0098decc(uint param_1) \|  \| { \| uint uVar1;` |
| kernel.c | 1547487 | `iVar4 = FUN_0098dd06(); \| if ((iVar4 != 0) && \| (((iVar4 = FUN_0098e212(DAT_00992ec8), iVar4 == 1 && \| (iVar4 = FUN_0095f72e(DAT_00992ec8), ` |
| kernel.c | 1547494 | `FUN_006f4a98(0x14,DAT_00992ed0); \| } \| FUN_00a1b758(DAT_00992ec8); \| FUN_00a1b758(DAT_00992ecc); \| pcVar3 = DAT_00992ed4; \| if (*DAT_00992ed` |
| kernel.c | 1585441 | `(((int)((uint)*(byte *)(iVar9 + 8) << 0x1a) < 0 && \| ((iVar5 = FUN_0098e236(param_2), iVar5 != 0 \|\| \| ((iVar5 = FUN_0098e260(param_2), iVar5` |
| kernel.c | 1595052 | `undefined4 local_18; \|  \| if (param_1 == (undefined4 *)0x0) { \| local_40 = s_a_UL_InfoTransferRequestContext__009dfecc; \| FUN_006f2c00(0,DAT` |
| kernel.c | 1608576 | `iVar3 = FUN_009f9df0(iVar2,param_2,&local_18); \| goto LAB_009f9f06; \| } \| if ((*(char *)(iVar2 + 0x83a) != '\x01') \|\| (param_1 != 1)) goto L` |
| kernel.c | 1608585 | `iVar2 = DAT_009f9f88 + -5; \| } \| else { \| LAB_009f9ecc: \| iVar2 = DAT_009f9f88 + -4; \| } \| FUN_006f4a98(0x18,iVar2);` |
| kernel.c | 1611689 | `iVar12 = DAT_009fed4c + 0x15; \| goto LAB_009fe886; \| } \| LAB_009fecc2: \| if (*(int *)(local_9c + iVar12 + -4) == 0) { \| if (local_a6[iVar12]` |
| kernel.c | 1611708 | `} \| if (((local_9c[iVar12] == '\x01') && (local_e8[uVar7 * 0x14 + 8] == 0)) && \| (local_e8[uVar7 * 0x14 + 7] != 0)) goto LAB_009fecf6; \| if ` |
| kernel.c | 1659098 | `if (*(int *)(param_1 + 0x1fc) == 0) { \| *(undefined4 *)(*(int *)(iVar7 + 0x1934) + 0x2ec8) = 0; \| if (param_1[0x200] == '\0') { \| *(undefine` |
| kernel.c | 1659101 | `*(undefined1 *)(*(int *)(iVar7 + 0x1934) + 0x2ecc) = 0; \| } \| else { \| *(undefined1 *)(*(int *)(iVar7 + 0x1934) + 0x2ecc) = param_1[0x214]; ` |
| kernel.c | 1659182 | `else { \| uVar4 = 0xff; \| } \| *(undefined1 *)(*(int *)(iVar7 + 0x1934) + 0x2ecc) = uVar4; \| } \| else { \| FUN_006f18c4(DAT_00a382d4,0x1abc,1);` |
| kernel.c | 1661503 | `if (*(int *)(param_1 + 0x1fc) == 0) { \| *(undefined4 *)(*(int *)(iVar7 + 0x1938) + 0x2ec8) = 0; \| if (param_1[0x200] == '\0') { \| *(undefine` |
| kernel.c | 1661506 | `*(undefined1 *)(*(int *)(iVar7 + 0x1938) + 0x2ecc) = 0; \| } \| else { \| *(char *)(*(int *)(iVar7 + 0x1938) + 0x2ecc) = param_1[0x214]; \| FUN_` |
| kernel.c | 1661587 | `else { \| uVar4 = 0xff; \| } \| *(undefined1 *)(*(int *)(iVar7 + 0x1938) + 0x2ecc) = uVar4; \| } \| else { \| FUN_006f18c4(DAT_00a3ab14,0x2450,1);` |
| kernel.c | 1663302 | `if (*(int *)(param_1 + 0x1fc) == 0) { \| *(undefined4 *)(*(int *)(iVar7 + 0x1938) + 0x2ec8) = 0; \| if (param_1[0x200] == '\0') { \| *(undefine` |
| kernel.c | 1663305 | `*(undefined1 *)(*(int *)(iVar7 + 0x1938) + 0x2ecc) = 0; \| } \| else { \| *(char *)(*(int *)(iVar7 + 0x1938) + 0x2ecc) = param_1[0x214]; \| FUN_` |
| kernel.c | 1663386 | `else { \| uVar4 = 0xff; \| } \| *(undefined1 *)(*(int *)(iVar7 + 0x1938) + 0x2ecc) = uVar4; \| } \| else { \| FUN_006f18c4(DAT_00a3ab14,0x2450,1);` |
| kernel.c | 1711372 | ` \|  \|  \| /* Function: FUN_00a7ecc8 */ \|  \| void FUN_00a7ecc8(undefined4 param_1,int param_2) \| ` |
| kernel.c | 1711374 | ` \| /* Function: FUN_00a7ecc8 */ \|  \| void FUN_00a7ecc8(undefined4 param_1,int param_2) \|  \| { \| FUN_006662c4(param_1,param_2,0x10,0x10,2);` |
| kernel.c | 1716263 | `} \| FUN_0092ef96(param_1,1,uVar1); \| if (*puVar2 == 0) { \| FUN_00a7ecc8(); \| FUN_00a7da90(param_1,param_2 + 8); \| FUN_006662c4(param_1,param` |
| kernel.c | 1719339 | `} \| FUN_0092ef96(param_1,1,uVar1); \| if (*puVar2 == 0) { \| FUN_00a7ecc8(); \| FUN_00a7da90(param_1,param_2 + 8); \| FUN_006662c4(param_1,param` |
| kernel.c | 1769068 | ` \|  \|  \| /* Function: FUN_00ac7ecc */ \|  \| void FUN_00ac7ecc(int param_1) \| ` |
| kernel.c | 1769070 | ` \| /* Function: FUN_00ac7ecc */ \|  \| void FUN_00ac7ecc(int param_1) \|  \| { \| undefined4 uVar1;` |
| kernel.c | 1769548 | `FUN_00ac71e4(local_58,local_4c); \| if (iVar2 != 0) { \| LAB_00ac89dc: \| FUN_00ac7ecc(local_58); \| FUN_006f89ae(*(undefined4 *)(iVar1 + uVar7 ` |
| kernel.c | 1770567 | `uVar5 \| ((*(uint *)(param_2 + 0x10) & 0x7ff) >> 3 \| \| ((*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb) << 8) << 3; \| if (*(uint *)(param_1 + ` |
| kernel.c | 1770629 | `uVar5 \| ((*(uint *)(param_2 + 0x10) & 0x7ff) >> 3 \| \| ((*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb) << 8) << 3; \| if (*(uint *)(param_1 + ` |
| kernel.c | 1770722 | `uVar5 \| ((*(uint *)(param_2 + 0x10) & 0x7ff) >> 3 \| \| ((*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb) << 8) << 3; \| if (*(uint *)(param_1 + ` |
| kernel.c | 1770845 | `uVar5 \| ((*(uint *)(param_2 + 0x10) & 0x7ff) >> 3 \| \| ((*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb) << 8) << 3; \| if (*(uint *)(param_1 + ` |
| kernel.c | 1771057 | `uVar8 \| ((*(uint *)(param_2 + 0x10) & 0x7ff) >> 3 \| \| ((*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb) << 8) << 3; \| if (*(uint *)(param_1 + ` |
| kernel.c | 1771151 | `uVar8 \| ((*(uint *)(param_2 + 0x10) & 0x7ff) >> 3 \| \| ((*(uint *)(param_2 + 0x10) & 0xffffff) >> 0xb) << 8) << 3; \| if (*(uint *)(param_1 + ` |
| user.c | 27220 | `else { \| iVar6 = 0; \| } \| *(char *)(param_3 + 0xecc) = (char)iVar6; \| if (*(char *)(param_1 + 0xbe) == '\0') { \| iVar15 = param_1 + iVar6 * ` |
| user.c | 27538 | `else { \| iVar5 = 0; \| } \| *(char *)(param_3 + 0xecc) = (char)iVar5; \| if (*(char *)(param_1 + 0xbe) == '\0') { \| iVar7 = param_1 + iVar5 * 4` |
| user.c | 36978 | `} \| goto LAB_000414b0; \| } \| thunk_EXT_FUN_810faa34(&local_d0,DAT_00040ecc,0x20); \| thunk_EXT_FUN_81103f4a(s_HF_Send_Call_Handling_Supported` |
| user.c | 68002 | `local_14 = 0x37; \| local_1c = param_2; \| local_18 = param_3; \| FUN_007ecc2c(&local_1c,DAT_00074c20,param_3,param_4,param_1); \| } \| uVar1 = t` |
| user.c | 84317 | `} \| else { \| uVar1 = FUN_007f1d80(param_1); \| iVar3 = thunk_FUN_000d0ecc(param_1,uVar1); \| } \| if (iVar3 == 0) { \| return;` |
| user.c | 86514 | `local_20 = auStack_424; \| switch(*(undefined4 *)(param_2 + 100)) { \| default: \| goto switchD_0009ecce_caseD_0; \| case 1: \| iVar2 = FUN_000f5` |
| user.c | 86521 | `*param_3 = 1; \| } \| thunk_EXT_FUN_81103f4a(s_IsValidNetworkAccount_leave__isV_0009f0e8,iVar2); \| goto switchD_0009ecce_caseD_0; \| case 2: \| ` |
| user.c | 86524 | `goto switchD_0009ecce_caseD_0; \| case 2: \| iVar2 = FUN_000f4d22(param_1,&local_20); \| if ((iVar2 != 1) \|\| (*param_3 != 6)) goto switchD_0009` |
| user.c | 86530 | `case 3: \| if (*(char *)(DAT_0009f110 + param_1 * 2) != '\0') { \| *(undefined1 *)(DAT_0009f110 + param_1 * 2 + 1) = 1; \| goto switchD_0009ecc` |
| user.c | 86533 | `goto switchD_0009ecce_caseD_0; \| } \| iVar2 = FUN_000f5564(param_1,&local_20); \| if ((iVar2 != 1) \|\| (*param_3 != 6)) goto switchD_0009ecce_c` |
| user.c | 86538 | `break; \| case 4: \| iVar2 = FUN_000f55cc(param_1,&local_20); \| if ((iVar2 != 1) \|\| (*param_3 != 6)) goto switchD_0009ecce_caseD_0; \| iVar1 = ` |
| user.c | 86543 | `break; \| case 5: \| iVar2 = FUN_000f5674(param_1,&local_20); \| if ((iVar2 != 1) \|\| (*param_3 != 6)) goto switchD_0009ecce_caseD_0; \| iVar1 = ` |
| user.c | 86547 | `iVar1 = 5; \| } \| *param_3 = iVar1; \| switchD_0009ecce_caseD_0: \| thunk_EXT_FUN_81103f4a \| (DAT_0009f114,*(undefined2 *)(param_2 + 2),*(undef` |
| user.c | 91789 | `{ \| /* WARNING: Could not recover jumptable at 0x000a2ec8. Too many branches */ \| /* WARNING: Treating indirect jump as call */ \| (*DAT_000a` |
| user.c | 101562 | `pbVar3 = DAT_000b3ec8; \| iVar6 = *DAT_000b3ec4; \| thunk_EXT_FUN_81103f4a \| (DAT_000b3ecc,uVar10,bVar4,bVar5,uVar1,uVar9,uVar8,*DAT_000b3ec8,` |
| user.c | 112005 | `} \| FUN_002522f0(*(undefined4 *)(param_1 + 0x14),&local_28,param_1 + 0x1c); \| if (*(int *)(param_1 + 0x9c) != 0) { \| thunk_FUN_0010aecc(); \|` |
| user.c | 112104 | `*(byte *)(param_1 + 0x96) = bVar1; \| FUN_000c9c48(param_1,2,param_1 + 0x2c); \| if ((bVar1 == 0) && (*(int *)(param_1 + 0x9c) != 0)) { \| thun` |
| user.c | 112669 | `if (iVar1 != 0) { \| FUN_000cb06e(); \| if (*(int *)(iVar1 + 0x9c) != 0) { \| thunk_FUN_0010aecc(); \| FUN_000ce514(); \| *(undefined4 *)(iVar1 +` |
| user.c | 113070 | ` \| { \| if ((param_1 != 0) && (*(int *)(param_1 + 0x6c) != 0)) { \| thunk_FUN_0010aecc(); \| FUN_000ce514(); \| *(undefined4 *)(param_1 + 0x6c) ` |
| user.c | 118425 | ` \|  \|  \| /* Function: FUN_000d0ecc */ \|  \| undefined4 FUN_000d0ecc(int param_1,undefined4 param_2) \| ` |
| user.c | 118427 | ` \| /* Function: FUN_000d0ecc */ \|  \| undefined4 FUN_000d0ecc(int param_1,undefined4 param_2) \|  \| { \| int iVar1;` |
| user.c | 118473 | ` \|  \|  \| /* Function: thunk_FUN_000d0ecc */ \|  \| undefined4 thunk_FUN_000d0ecc(int param_1,undefined4 param_2) \| ` |
| user.c | 118475 | ` \| /* Function: thunk_FUN_000d0ecc */ \|  \| undefined4 thunk_FUN_000d0ecc(int param_1,undefined4 param_2) \|  \| { \| int iVar1;` |
| user.c | 138123 | `} \| FUN_007f19f0(puVar3,*param_1,uVar9); \| uVar1 = (undefined2)param_1[1]; \| iVar2 = thunk_FUN_000d0ecc(puVar3,uVar1); \| if (iVar2 == 0) { \|` |
| user.c | 138971 | `undefined4 uVar5; \| int iVar6; \|  \| iVar3 = DAT_000ecc3c; \| iVar6 = 0; \| iVar2 = FUN_000dfd34(); \| if (iVar2 != 0) {` |
| user.c | 138975 | `iVar6 = 0; \| iVar2 = FUN_000dfd34(); \| if (iVar2 != 0) { \| iVar2 = DAT_000ecc40 + 0x30; \| goto LAB_000ecbec; \| } \| if (2 < param_1) {` |
| user.c | 138979 | `goto LAB_000ecbec; \| } \| if (2 < param_1) { \| iVar2 = DAT_000ecc38 + -0x1c; \| goto LAB_000ecbec; \| } \| if ((param_1 == 2) && (iVar3 = FUN_00` |
| user.c | 138984 | `} \| if ((param_1 == 2) && (iVar3 = FUN_003a4520(), iVar3 != 0)) { \| iVar3 = FUN_000d247c(2); \| iVar2 = DAT_000ecc40 + 0x5f; \| goto LAB_000ec` |
| user.c | 139006 | `iVar6 = 1; \| } \| if (iVar6 == 0 && !bVar1) { \| iVar2 = DAT_000ecc4c + -0xa2; \| if (iVar6 != 0) { \| return iVar6; \| }` |
| user.c | 139015 | `if (iVar6 != 0) { \| return iVar6; \| } \| iVar2 = DAT_000ecc38 + -0x7b; \| } \| LAB_000ecbec: \| FUN_007eff8e(0,iVar3,iVar2,DAT_000ecc3c + 0xfb,0` |
| user.c | 139018 | `iVar2 = DAT_000ecc38 + -0x7b; \| } \| LAB_000ecbec: \| FUN_007eff8e(0,iVar3,iVar2,DAT_000ecc3c + 0xfb,0,0,1,0); \| return iVar6; \| } \| ` |
| user.c | 139024 | ` \|  \|  \| /* Function: FUN_000ecc5c */ \|  \| undefined4 FUN_000ecc5c(int param_1) \| ` |
| user.c | 139026 | ` \| /* Function: FUN_000ecc5c */ \|  \| undefined4 FUN_000ecc5c(int param_1) \|  \| { \| undefined4 uVar1;` |
| user.c | 139041 | ` \|  \|  \| /* Function: FUN_000ecc76 */ \|  \| undefined4 FUN_000ecc76(int param_1) \| ` |
| user.c | 139043 | ` \| /* Function: FUN_000ecc76 */ \|  \| undefined4 FUN_000ecc76(int param_1) \|  \| { \| int iVar1;` |
| user.c | 139053 | `if (param_1 != 0) { \| iVar1 = thunk_FUN_000d12c0(); \| if (iVar1 != 0) { \| uVar2 = FUN_000ecc5c(); \| } \| thunk_FUN_000d1242(iVar1); \| return ` |
| user.c | 139064 | ` \|  \|  \| /* Function: FUN_000ecca4 */ \|  \| bool FUN_000ecca4(int param_1,int param_2,undefined4 param_3) \| ` |
| user.c | 139066 | ` \| /* Function: FUN_000ecca4 */ \|  \| bool FUN_000ecca4(int param_1,int param_2,undefined4 param_3) \|  \| { \| int iVar1;` |
| user.c | 139114 | `thunk_EXT_FUN_81104074(0x10,DAT_000ed04c + 2,&DAT_000ed048); \| } \| else { \| uVar1 = FUN_000ecca4(param_1,1,param_2); \| } \| return uVar1; \| }` |
| user.c | 139134 | `if (param_1 != 0) { \| iVar1 = thunk_FUN_000d12c0(); \| if (iVar1 != 0) { \| uVar2 = FUN_000ecca4(iVar1,1,in_stack_00000000); \| } \| thunk_FUN_0` |
| user.c | 139157 | `thunk_EXT_FUN_81104074(0x10,DAT_000ed04c + 4,&DAT_000ed048); \| } \| else { \| uVar1 = FUN_000ecca4(param_1,0,2); \| } \| return uVar1; \| }` |
| user.c | 139176 | `if (param_1 != 0) { \| iVar1 = thunk_FUN_000d12c0(); \| if (iVar1 != 0) { \| uVar2 = FUN_000ecca4(iVar1,0,2); \| } \| thunk_FUN_000d1242(iVar1); ` |
| user.c | 139201 | `thunk_EXT_FUN_81104074(0x10,DAT_000ed04c + 10,&DAT_000ed048); \| return 0; \| } \| iVar1 = FUN_000ecc5c(param_1); \| if (iVar1 == 0) { \| thunk_E` |
| user.c | 139619 | `thunk_EXT_FUN_81104074(0x10,iVar2,&DAT_000ed43c); \| } \| else { \| iVar2 = FUN_000ecc5c(); \| if (iVar2 != 0) { \| thunk_EXT_FUN_811049dc(auStac` |
| user.c | 141308 | `uint local_30; \| undefined4 local_2c [5]; \|  \| iVar3 = DAT_000f1ecc; \| uVar1 = DAT_000f1ec8; \| if (*(char *)(DAT_000f1ecc + 5) == '\0') { \| ` |
| user.c | 141310 | ` \| iVar3 = DAT_000f1ecc; \| uVar1 = DAT_000f1ec8; \| if (*(char *)(DAT_000f1ecc + 5) == '\0') { \| iVar3 = FUN_000d32c6(DAT_000f1ec8); \| if (iV` |
| user.c | 141336 | `local_30 = 0; \| local_60 = 0; \| local_5c = 0; \| *(undefined4 *)(DAT_000f1ecc + 0x28) = 0; \| *(undefined4 *)(iVar3 + 0x2c) = 0; \| FUN_007ee69` |
| user.c | 141384 | `FUN_003da36e(uVar1); \| } \| else { \| *(int *)(DAT_000f1ecc + 0x2c) = *(int *)(DAT_000f1ecc + 0x2c) + 1; \| iVar4 = *(int *)(iVar3 + 0x28) + 1;` |
| user.c | 143229 | `undefined4 uVar5; \| int iVar6; \|  \| iVar6 = DAT_000f4ecc; \| iVar2 = FUN_002501c4(); \| if (param_2 != (undefined4 *)0x0) { \| iVar2 = iVar2 + ` |
| user.c | 143420 | `undefined4 uStack_2c; \| int local_28; \|  \| iVar8 = DAT_000f4ecc; \| iVar3 = FUN_002501c4(); \| local_40 = (undefined4 *)0x0; \| local_3c = 0;` |
| user.c | 149978 | `iVar2 = DAT_00103e4c + -9; \| thunk_FUN_003da36e(iVar2); \| FUN_007f0816(1,&local_18,0,0,iVar2,0x40000000,DAT_00103e54 + -0xfd,1,1,DAT_00103ec` |
| user.c | 154666 | ` \|  \|  \| /* Function: FUN_0010aecc */ \|  \| undefined4 FUN_0010aecc(int param_1) \| ` |
| user.c | 154668 | ` \| /* Function: FUN_0010aecc */ \|  \| undefined4 FUN_0010aecc(int param_1) \|  \| { \| undefined4 uVar1;` |
| user.c | 156222 | `uint local_18; \| int local_14; \|  \| uVar4 = thunk_FUN_0010aecc(param_4); \| uVar6 = FUN_000d911c(uVar4); \| iVar2 = (int)uVar6; \| uVar6 = uVar` |
| user.c | 156298 | `{ \| undefined4 uVar1; \|  \| uVar1 = thunk_FUN_0010aecc(); \| FUN_000d8ea6(uVar1,param_2,param_3); \| return; \| }` |
| user.c | 156317 | `int iVar5; \| uint uVar6; \|  \| thunk_FUN_0010aecc(); \| iVar4 = FUN_000d911c(); \| if (iVar4 != 0) { \| if ((iVar4 != 0) && (iVar1 = FUN_000d908` |
| user.c | 156363 | `{ \| int iVar1; \|  \| thunk_FUN_0010aecc(); \| iVar1 = FUN_000d911c(); \| if (iVar1 != 0) { \| FUN_000d908a();` |
| user.c | 156383 | `int iVar2; \| undefined4 uVar3; \|  \| thunk_FUN_0010aecc(); \| uVar3 = 0; \| iVar1 = FUN_000d911c(); \| if (iVar1 != 0) {` |
| user.c | 158043 | ` \|  \|  \| /* Function: FUN_0010ecc4 */ \|  \| undefined4 FUN_0010ecc4(undefined4 param_1,int param_2) \| ` |
| user.c | 158045 | ` \| /* Function: FUN_0010ecc4 */ \|  \| undefined4 FUN_0010ecc4(undefined4 param_1,int param_2) \|  \| { \| if (param_2 != 0) {` |
| user.c | 162273 | `FUN_0009796a(iVar1,auStack_88); \| FUN_001146b0(auStack_88,param_2,param_3); \| if (local_7c << 0x10 < 0) { \| FUN_003decc6(param_2,1); \| FUN_0` |
| user.c | 169935 | `else { \| iVar1 = FUN_002b9e54(*(undefined4 *)(param_1 + 0xc),local_2c); \| if (iVar1 < 0) { \| pcVar4 = s_ssl__GetEcdhPubKey_get_eccparams_001` |
| user.c | 169980 | `} \| } \| else { \| pcVar4 = s_ssl__GetEcdhPubKey_psEccMakeKeyE_00120ab0; \| } \| } \| }` |
| user.c | 171335 | `local_94 = *param_1; \| local_8c = auStack_74; \| FUN_000ce2c8(&local_9c); \| uVar3 = thunk_FUN_0010aecc(); \| param_1[uVar6 + 0x36] = uVar3; \| ` |
| user.c | 202406 | `undefined4 uVar2; \| undefined4 uVar3; \|  \| if (*DAT_001b8ecc == '\0') { \| if (*(int *)(param_1 + 0x38) == 2) { \| return; \| }` |
| user.c | 209822 | `piVar1 = DAT_001c4ed0; \| thunk_EXT_FUN_81103f4a \| (s__BT_rdabt_oppc_connect_timeout_G_001c4f90,*(undefined4 *)(*DAT_001c4ed0 + 0x534)); \| iV` |
| user.c | 209823 | `thunk_EXT_FUN_81103f4a \| (s__BT_rdabt_oppc_connect_timeout_G_001c4f90,*(undefined4 *)(*DAT_001c4ed0 + 0x534)); \| iVar3 = DAT_001c4ecc; \| iVa` |
| user.c | 210736 | `local_38 = 0; \| FUN_003b9916(*(undefined4 *)(*piVar1 + 0x538),*(undefined4 *)(*piVar1 + 0x53c),uVar10, \| &stack0xffffffe4); \| iVar12 = DAT_0` |
| user.c | 210738 | `&stack0xffffffe4); \| iVar12 = DAT_001c4ecc; \| if (uVar10 == 0) { \| iVar6 = thunk_EXT_FUN_810fe4f2(*(undefined4 *)(DAT_001c4ecc + 4)); \| if (` |
| user.c | 210772 | `} \| } \| else { \| iVar6 = thunk_EXT_FUN_810fe4f2(*(undefined4 *)(DAT_001c4ecc + 4)); \| if (iVar6 != 0) { \| thunk_EXT_FUN_810fe44e(*(undefined` |
| user.c | 215658 | ` \| { \| if (param_1 != 0) { \| thunk_EXT_FUN_81103f4a(s_rdabt_sdp_free_primitive_task_0x_001ceecc,param_1); \| if (*(int *)(param_1 + 0xc) != 0` |
| user.c | 220358 | `iVar6 = 3; \| } \| if (0x2c < param_2) { \| thunk_EXT_FUN_81103f4a(DAT_001d9ecc,0x2d); \| return 3; \| } \| uVar5 = 0;` |
| user.c | 233934 | ` \|  \|  \| /* Function: FUN_001eccac */ \|  \| uint FUN_001eccac(undefined4 param_1,undefined4 param_2,byte *param_3,uint param_4) \| ` |
| user.c | 233936 | ` \| /* Function: FUN_001eccac */ \|  \| uint FUN_001eccac(undefined4 param_1,undefined4 param_2,byte *param_3,uint param_4) \|  \| { \| int iVar1;` |
| user.c | 234370 | `local_6cc = 0; \| thunk_EXT_FUN_81133d32(*piVar11,local_310); \| if (local_310[0] != '\0') { \| uVar22 = FUN_001eccac(*piVar11,4,local_310); \| ` |
| user.c | 234371 | `thunk_EXT_FUN_81133d32(*piVar11,local_310); \| if (local_310[0] != '\0') { \| uVar22 = FUN_001eccac(*piVar11,4,local_310); \| pcVar16 = (char *` |
| user.c | 234372 | `if (local_310[0] != '\0') { \| uVar22 = FUN_001eccac(*piVar11,4,local_310); \| pcVar16 = (char *)FUN_001eccac(*piVar11,5,local_310); \| uVar5 =` |
| user.c | 234374 | `pcVar16 = (char *)FUN_001eccac(*piVar11,5,local_310); \| uVar5 = FUN_001eccac(*piVar11,3,local_310); \| local_6cc = local_6cc & 0xffffff00 \| u` |
| user.c | 234376 | `local_6cc = local_6cc & 0xffffff00 \| uVar5 & 0xff; \| uVar5 = FUN_001eccac(*piVar11,8,local_310); \| local_6cc = local_6cc & 0xffff00ff \| (uVa` |
| user.c | 234378 | `local_6cc = local_6cc & 0xffff00ff \| (uVar5 & 0xff) << 8; \| uVar5 = FUN_001eccac(*piVar11,9,local_310); \| local_6cc = local_6cc & 0xff00ffff` |
| user.c | 234793 | `} \| else { \| uVar7 = uVar22 * 2 + 1; \| local_6d4 = thunk_EXT_FUN_810ff5c0(uVar7,DAT_001edecc,&DAT_00001174); \| puVar8 = *(uint **)(*(int *)(` |
| user.c | 234856 | `+ 8) + 8) + 8) + 8) + 4) >> 1); \| } \| thunk_EXT_FUN_810ffbd2 \| (local_6d4,DAT_001edecc,s_http_HttpTraceHeadParam_ua_profi_0000119c + 0xc) \| ` |
| user.c | 234911 | `*)( \| *(int *)(param_2 + 0x20) + 8) + 8) + 8) + 8) + 8) \| + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 4) + 2, \| DAT_001edecc, \| s_http_HttpTraceHea` |
| user.c | 234964 | `} \| iVar3 = (int)pcVar16 * 2 + 1; \| local_6d0 = thunk_EXT_FUN_810ff5c0 \| (iVar3,DAT_001edecc, \| s_http_CreatePostRequest_scheme__s_000011fc ` |
| user.c | 241366 | `iStack_44 = param_4; \| uStack_40 = param_1; \| iVar2 = FUN_007d58a6(local_58,&local_2c,&local_30); \| piVar1 = DAT_001fecc8; \| if (iVar2 != 0)` |
| user.c | 241372 | `if (((*piVar1 == 0) \|\| (iVar2 = FUN_001ff916(param_2,&local_28), iVar2 != 0)) \|\| \| (local_28 != -1)) { \| FUN_001fe858(local_2c,param_3); \| t` |
| user.c | 241402 | `thunk_EXT_FUN_811049dc(puVar2,0x14); \| *puVar2 = 0xad3c; \| uVar3 = thunk_EXT_FUN_810fd2a6(); \| piVar1 = DAT_001fecc8; \| *(undefined4 *)(puVa` |
| user.c | 241449 | `local_30 = param_1; \| thunk_EXT_FUN_81103f4a(s_http_HttpSendErrorIndToApp_error_001fed94,param_5); \| iVar2 = FUN_007d568c(local_48,&local_24` |
| user.c | 241493 | `uStack_28 = param_4; \| thunk_EXT_FUN_81103f4a(s_http_HttpSendCookieSetCnfToApp_e_001fede4,param_4); \| iVar2 = FUN_007d56ce(local_40,&local_2` |
| user.c | 241540 | `iStack_34 = param_4; \| uStack_30 = param_1; \| iVar2 = FUN_007d5710(local_48,&local_24,&local_28); \| piVar1 = DAT_001fecc8; \| if (iVar2 != 0)` |
| user.c | 247991 | `iVar1 = *(int *)(iVar5 + 0x2e4); \| if ((iVar1 == 1) \|\| (iVar1 == 2)) { \| thunk_EXT_FUN_810ff124 \| (auStack_48,&DAT_00208ecc,*(undefined4 *)(` |
| user.c | 261957 | `thunk_EXT_FUN_811049dc(auStack_40,0x20); \| thunk_EXT_FUN_81103f4a(s_Streaming_callback_enter_00223ddc); \| if (param_2 == 0) { \| thunk_EXT_FU` |
| user.c | 261968 | `thunk_EXT_FUN_81103f4a \| (s_Streaming_callback_play_offset___00223e28,*(undefined4 *)(iVar1 + 0x74)); \| thunk_EXT_FUN_81103f4a \| (s_Streamin` |
| user.c | 263343 | `local_74 = *local_b8; \| goto LAB_00225bfa; \| } \| thunk_EXT_FUN_811018b0(&DAT_00225ed0,DAT_00225ecc,0x800); \| } \| else { \| *local_b8 = *local` |
| user.c | 263359 | `if (param_2[0x31] == 0) { \| uVar3 = 0x810; \| LAB_00225c38: \| thunk_EXT_FUN_811018b0(s_0_____fcb_>fileLnkInfo_elmCnt__0022512c,DAT_00225ecc,u` |
| user.c | 263462 | `piVar6 = (int *)piVar6[0x38]; \| } \| if (*(char *)((int)piVar6 + 0xd) != '\x01') { \| thunk_EXT_FUN_811018b0(s_STAF1____next_>ifRoot_00225ed4 ` |
| user.c | 263471 | `if (param_3 == 0) { \| iVar8 = 1; \| if (param_7 != -1) { \| thunk_EXT_FUN_811018b0(s_0xFFFFFFFF____fEClus_00225eec,DAT_00225ecc,0x2a6); \| } \| ` |
| user.c | 263474 | `thunk_EXT_FUN_811018b0(s_0xFFFFFFFF____fEClus_00225eec,DAT_00225ecc,0x2a6); \| } \| if (param_8 != 0) { \| thunk_EXT_FUN_811018b0(s_0____fEOfst` |
| user.c | 263477 | `thunk_EXT_FUN_811018b0(s_0____fEOfst_00225f04,DAT_00225ecc,0x2a7); \| } \| if (param_4 != 0) { \| thunk_EXT_FUN_811018b0(s_0____sEOfst_00225f10` |
| user.c | 263480 | `thunk_EXT_FUN_811018b0(s_0____sEOfst_00225f10,DAT_00225ecc,0x2a8); \| } \| if (-1 < (int)((uint)*(byte *)(param_5 + 0x2c) << 0x1b)) { \| thunk_` |
| user.c | 263483 | `thunk_EXT_FUN_811018b0(s_0_____0x10_sEntryInfo_>fAttr__00225f1c,DAT_00225ecc,0x2a9); \| } \| if (*(int *)(param_5 + 0x34) != 1) { \| thunk_EXT_` |
| user.c | 263633 | `else { \| if (param_3 == 1) { \| if (param_7 != 0) { \| thunk_EXT_FUN_811018b0(s_0____fEClus_00225f58,DAT_00225ecc,0x2b0); \| } \| if (param_8 !=` |
| user.c | 263636 | `thunk_EXT_FUN_811018b0(s_0____fEClus_00225f58,DAT_00225ecc,0x2b0); \| } \| if (param_8 != 0) { \| thunk_EXT_FUN_811018b0(s_0____fEOfst_00225f04` |
| user.c | 263644 | `goto LAB_00225e68; \| if (iVar4 == 2) { \| if (param_4 != 0) { \| thunk_EXT_FUN_811018b0(s_0____sEOfst_00225f10,DAT_00225ecc,0x2be); \| } \| if (` |
| user.c | 263647 | `thunk_EXT_FUN_811018b0(s_0____sEOfst_00225f10,DAT_00225ecc,0x2be); \| } \| if (-1 < (int)((uint)*(byte *)(param_5 + 0x2c) << 0x1b)) { \| thunk_` |
| user.c | 263650 | `thunk_EXT_FUN_811018b0(s_0_____0x10_sEntryInfo_>fAttr__00225f1c,DAT_00225ecc,0x2bf); \| } \| if (*(int *)(param_1 + 0x30) != *(int *)(param_5 ` |
| user.c | 263698 | `} \| else { \| if (*piVar6 != s_STAF1____next_>ifRoot_00225ed4._0_4_) { \| thunk_EXT_FUN_811018b0(s_STAF0x46415453____fcb_>SFLAG_00225570 + 4,D` |
| user.c | 263701 | `thunk_EXT_FUN_811018b0(s_STAF0x46415453____fcb_>SFLAG_00225570 + 4,DAT_00225ecc,0x28e); \| } \| if (piVar6[0x3a] != s_STAF1____next_>ifRoot_00` |
| user.c | 263708 | `FUN_007d32c8(param_1,local_30,param_3,param_4,param_7,param_8); \| } \| if (*piVar6 != uVar5) { \| thunk_EXT_FUN_811018b0(s_STAF0x46415453____f` |
| user.c | 264126 | `if (piVar5 == (int *)0x0) { \| thunk_EXT_FUN_810ff124(param_2,s_No_file_has_been_opend_00227208); \| uVar2 = thunk_EXT_FUN_810ff150(param_2); ` |
| user.c | 267423 | `} \| } \| else if (*(int *)(param_1 + 0x214) != 0) { \| thunk_FUN_0010aecc(); \| FUN_000ce514(); \| *(undefined4 *)(param_1 + 0x214) = 0; \| }` |
| user.c | 267447 | `if (((piVar2 != (int *)0x0) && (*piVar2 != 0)) && (piVar2[5] != 0)) { \| iVar1 = *(int *)(*piVar2 + 0x7c); \| if (((iVar1 == 3) \|\| (iVar1 == 4` |
| user.c | 267481 | `if (param_2[5] != 0) { \| iVar1 = *(int *)(*param_2 + 0x7c); \| if (((iVar1 == 3) \|\| (iVar1 == 4)) \|\| ((iVar1 == 5 \|\| (iVar1 == 6)))) { \| thun` |
| user.c | 269743 | ` \|  \|  \| /* Function: FUN_0022becc */ \|  \| undefined4 FUN_0022becc(undefined4 param_1,undefined4 param_2,int param_3) \| ` |
| user.c | 269745 | ` \| /* Function: FUN_0022becc */ \|  \| undefined4 FUN_0022becc(undefined4 param_1,undefined4 param_2,int param_3) \|  \| { \| int iVar1;` |
| user.c | 271321 | `thunk_EXT_FUN_81103544 \| (s__5__<__(buf_len___offset)_0022ec74,s_mmieng_win_c_0022de38,&DAT_00001d2f,uVar6); \| } \| thunk_EXT_FUN_811037c8(pa` |
| user.c | 271323 | `} \| thunk_EXT_FUN_811037c8(param_1 + iVar12 + 0x15,s_hour__0022ecc0,5); \| iVar12 = iVar12 + 0x1a; \| thunk_EXT_FUN_810ff124(local_74,&DAT_002` |
| user.c | 271352 | `} \| thunk_EXT_FUN_811037c8(param_1 + iVar12 + 1,&DAT_0022f130,4); \| iVar12 = iVar12 + 5; \| thunk_EXT_FUN_810ff124(local_74,&DAT_0022ecc8,((u` |
| user.c | 273387 | `do { \| if (((*(char *)(iVar13 + uVar11) != '\0') && \| (iVar3 = FUN_000d029c(iVar12 + uVar11 * 4,1,DAT_0024073c,9,0,0,auStack_a80,local_30), ` |
| user.c | 285254 | ` \| if (param_1 != 0) { \| thunk_EXT_FUN_81103f4a \| (s_HandleNwECCInfoInd_dual_sys__d__n_002507f8,*(undefined4 *)(param_1 + 0x94), \| *(undefin` |
| user.c | 291228 | ` \|  \|  \| /* Function: FUN_00255ecc */ \|  \| void FUN_00255ecc(short *param_1) \| ` |
| user.c | 291230 | ` \| /* Function: FUN_00255ecc */ \|  \| void FUN_00255ecc(short *param_1) \|  \| { \| int iVar1;` |
| user.c | 291275 | `uStack_1c = param_8; \| local_18 = 0; \| for (iVar1 = 0; local_38[iVar1] != 0; iVar1 = iVar1 + 1) { \| FUN_00255ecc(); \| } \| return; \| }` |
| user.c | 291804 | `LAB_002565ac: \| if (iVar3 == -8) { \| for (iVar2 = 0; local_40[iVar2] != 0; iVar2 = iVar2 + 1) { \| FUN_00255ecc(); \| } \| } \| return iVar3;` |
| user.c | 292189 | `if (iVar2 != 0) { \| uVar3 = uVar6; \| } \| FUN_00255ecc(&uStack_28); \| LAB_00256970: \| return CONCAT44(uStack_28,uVar3); \| }` |
| user.c | 292409 | `goto LAB_00256e5e; \| } \| LAB_00256e64: \| FUN_00255ecc(local_4c); \| LAB_00256e6a: \| FUN_00255ecc(local_64); \| return iVar2;` |
| user.c | 292411 | `LAB_00256e64: \| FUN_00255ecc(local_4c); \| LAB_00256e6a: \| FUN_00255ecc(local_64); \| return iVar2; \| LAB_00256dda: \| uVar10 = (undefined2)uVa` |
| user.c | 292504 | `iVar2 = -8; \| } \| LAB_00256e52: \| FUN_00255ecc(local_58); \| LAB_00256e58: \| FUN_00255ecc(local_70); \| LAB_00256e5e:` |
| user.c | 292506 | `LAB_00256e52: \| FUN_00255ecc(local_58); \| LAB_00256e58: \| FUN_00255ecc(local_70); \| LAB_00256e5e: \| FUN_00255ecc(local_7c); \| goto LAB_00256` |
| user.c | 292508 | `LAB_00256e58: \| FUN_00255ecc(local_70); \| LAB_00256e5e: \| FUN_00255ecc(local_7c); \| goto LAB_00256e64; \| } \| ` |
| user.c | 292565 | `iVar1 = FUN_00256ade(&uStack_24,param_3,param_4); \| } \| } \| FUN_00255ecc(&uStack_24); \| } \| return iVar1; \| }` |
| user.c | 292590 | `if (iVar1 == 0) { \| iVar1 = FUN_00256e88(param_1,auStack_28,param_4,param_5); \| } \| FUN_00255ecc(auStack_28); \| } \| return iVar1; \| }` |
| user.c | 292716 | `*(short *)(auStack_1d8 + iVar6 + 2) + 1); \| if (iVar3 == 0) goto LAB_0025709c; \| for (sVar1 = (short)local_38; (int)sVar1 < (int)psVar9; sVa` |
| user.c | 292817 | `iVar3 = FUN_00459494(local_34,local_58,local_28,local_4c), iVar3 == 0)); \| LAB_00257284: \| for (sVar1 = (short)local_38; (int)sVar1 < (int)u` |
| user.c | 292822 | `LAB_002572a0: \| thunk_EXT_FUN_810ffbd2(psVar4,DAT_002573cc,0x7c0); \| LAB_002572ac: \| FUN_00255ecc(local_48); \| LAB_002572b2: \| FUN_00255ecc(` |
| user.c | 292824 | `LAB_002572ac: \| FUN_00255ecc(local_48); \| LAB_002572b2: \| FUN_00255ecc(local_58); \| return iVar3; \| } \| ` |
| user.c | 292855 | `*(undefined1 *)(param_3 + iVar2) = *(undefined1 *)(param_3 + iVar3); \| *(undefined1 *)(param_3 + iVar3) = uVar1; \| } \| FUN_00255ecc(&local_2` |
| user.c | 292862 | `iVar3 = (int)(short)((short)iVar3 + 1); \| iVar2 = FUN_0025694a(param_1,&local_24,8,&local_24,0); \| } while (iVar2 == 0); \| FUN_00255ecc(&loc` |
| user.c | 305241 | `thunk_EXT_FUN_811049dc(auStack_154,0x78); \| local_1c = 0; \| local_18 = 0; \| thunk_EXT_FUN_81104074(0x10,DAT_0026c3ec,s__CC_HandleCcAnimWinMs` |
| user.c | 305312 | `FUN_007ff01a(); \| uVar2 = FUN_007ffedc(); \| if (param_1 == 0) { \| thunk_EXT_FUN_81104074(0x10,DAT_0026c3ec + -8,s__CC_HandleCcAnimWinMsg_TIM` |
| user.c | 305528 | `if (iVar1 != 1) { \| if (iVar1 == 2) goto LAB_0026c458; \| if (iVar1 != 3) { \| (*(code *)&LAB_81104074)(0x10,_DAT_0026c838,s__CC_HandleCcAnimW` |
| user.c | 305786 | `iVar4 = DAT_0026d104 + -0x1e; \| local_2c = 0; \| local_24[0] = iVar4; \| thunk_EXT_FUN_81104074(0x10,DAT_0026d100 + -0x36,s__CC_HandleCcAnimWi` |
| user.c | 312754 | `local_34 = CONCAT22(local_34._2_2_,uVar1); \| } \| FUN_0022bef6(iVar12,&local_38,(uVar8 - 1) + DAT_00277bcc + -3,(uVar8 - 1) + DAT_00277bcc); ` |
| user.c | 313394 | `*(int *)(iVar3 + 0x42c) = iVar2; \| *(int *)(iVar3 + 0x430) = iVar7; \| if (((*param_1 == 0) \|\| ((short)param_1[1] == 0)) \|\| \| ((iVar3 = thunk` |
| user.c | 317465 | `uVar2 = FUN_007f1d80(&local_30); \| FUN_007f19f0(auStack_230 + (uint)uVar1 * 2,&local_30,uVar2); \| uVar2 = FUN_007f1d80(auStack_230); \| iVar3` |
| user.c | 317525 | `local_32 = (short)uVar5 + sVar1 * -10 + 0x30; \| uVar2 = FUN_007f1d80(&local_38); \| FUN_007f19f0(auStack_238 + uVar6 * 2,&local_38,(uint)uVar` |
| user.c | 319093 | `local_30 = param_1 + 0x404; \| local_3c = param_1 + 0x202; \| if ((*(int *)(param_1 + 0x810) == 0) && \| (iVar2 = thunk_FUN_000d0ecc(local_30,*` |
| user.c | 321945 | ` \|  \|  \| /* Function: thunk_FUN_0010aecc */ \|  \| undefined4 thunk_FUN_0010aecc(int param_1) \| ` |
| user.c | 321947 | ` \| /* Function: thunk_FUN_0010aecc */ \|  \| undefined4 thunk_FUN_0010aecc(int param_1) \|  \| { \| undefined4 uVar1;` |
| user.c | 327335 | `uVar1 = FUN_007f1d80(DAT_00292e14); \| iVar2 = FUN_00292a38(param_1,DAT_00292e14,uVar1,0,0,auStack_214,local_10); \| if (iVar2 != 0) { \| iVar2` |
| user.c | 328759 | `thunk_EXT_FUN_81104074(0x10,DAT_00293fd4 + 2,&DAT_00293fd8,param_3); \| break; \| case 1: \| uVar1 = FUN_0084eccc(param_1,param_4,param_5,param` |
| user.c | 332091 | `pcVar2[0x46] = '\0'; \| pcVar2[0x47] = '\0'; \| *(undefined4 *)(pcVar2 + 0x1c) = *(undefined4 *)(param_1 + 4); \| uVar3 = thunk_FUN_0010aecc(*(` |
| user.c | 332143 | `} \| (**(code **)(*piVar6 + 100))(piVar6,0); \| FUN_0029c68e(*(undefined4 *)(pcVar2 + 0x1c),0x40,1); \| uVar3 = thunk_FUN_0010aecc(*(undefined4` |
| user.c | 332145 | `FUN_0029c68e(*(undefined4 *)(pcVar2 + 0x1c),0x40,1); \| uVar3 = thunk_FUN_0010aecc(*(undefined4 *)(pcVar2 + 0x1c)); \| FUN_007f3776(uVar3,*(un` |
| user.c | 332147 | `FUN_007f3776(uVar3,*(undefined4 *)(iVar1 + 0x10c)); \| uVar3 = thunk_FUN_0010aecc(*(undefined4 *)(pcVar2 + 0x1c)); \| FUN_007f3e2c(uVar3,0); \|` |
| user.c | 338191 | `FUN_0022beb4(iVar3,4); \| FUN_007ee69e(DAT_002a6c58,&local_38); \| FUN_0022bef6(iVar3,&local_38,local_30,uStack_2c); \| FUN_0022becc(iVar3,DAT_` |
| user.c | 338194 | `FUN_0022becc(iVar3,DAT_002a6c44 + -0x59,0); \| FUN_007ee69e(DAT_002a6c58 + 0x8a,&local_38); \| FUN_0022bef6(iVar3,&local_38,local_28,uStack_24` |
| user.c | 338197 | `FUN_0022becc(iVar3,DAT_002a6c44 + -0x57,1); \| FUN_007ee69e(DAT_002a6c58 + 0x72,&local_38); \| FUN_0022bef6(iVar3,&local_38,local_20,uStack_1c` |
| user.c | 338200 | `FUN_0022becc(iVar3,DAT_002a6c44 + -0x56,2); \| FUN_007ee69e(_DAT_002a6c5c,&local_38); \| FUN_0022bef6(iVar3,&local_38,local_18,uStack_14); \| F` |
| user.c | 346093 | `void FUN_002b4ab8(int param_1) \|  \| { \| FUN_00255ecc(param_1 + 0x18); \| FUN_00255ecc(param_1); \| FUN_00255ecc(param_1 + 0xc); \| FUN_00255ecc` |
| user.c | 346094 | ` \| { \| FUN_00255ecc(param_1 + 0x18); \| FUN_00255ecc(param_1); \| FUN_00255ecc(param_1 + 0xc); \| FUN_00255ecc(param_1 + 0x48); \| FUN_00255ecc(` |
| user.c | 346095 | `{ \| FUN_00255ecc(param_1 + 0x18); \| FUN_00255ecc(param_1); \| FUN_00255ecc(param_1 + 0xc); \| FUN_00255ecc(param_1 + 0x48); \| FUN_00255ecc(par` |
| user.c | 346096 | `FUN_00255ecc(param_1 + 0x18); \| FUN_00255ecc(param_1); \| FUN_00255ecc(param_1 + 0xc); \| FUN_00255ecc(param_1 + 0x48); \| FUN_00255ecc(param_1` |
| user.c | 346097 | `FUN_00255ecc(param_1); \| FUN_00255ecc(param_1 + 0xc); \| FUN_00255ecc(param_1 + 0x48); \| FUN_00255ecc(param_1 + 0x54); \| FUN_00255ecc(param_1` |
| user.c | 346098 | `FUN_00255ecc(param_1 + 0xc); \| FUN_00255ecc(param_1 + 0x48); \| FUN_00255ecc(param_1 + 0x54); \| FUN_00255ecc(param_1 + 0x30); \| FUN_00255ecc(` |
| user.c | 346099 | `FUN_00255ecc(param_1 + 0x48); \| FUN_00255ecc(param_1 + 0x54); \| FUN_00255ecc(param_1 + 0x30); \| FUN_00255ecc(param_1 + 0x3c); \| FUN_00255ecc` |
| user.c | 346100 | `FUN_00255ecc(param_1 + 0x54); \| FUN_00255ecc(param_1 + 0x30); \| FUN_00255ecc(param_1 + 0x3c); \| FUN_00255ecc(param_1 + 0x24); \| (*(code *)&L` |
| user.c | 346134 | `} \| iVar1 = FUN_002560d2(auStack_48,param_2,param_3); \| if (iVar1 != 0) { \| FUN_00255ecc(auStack_48); \| return 0xffffffff; \| } \| iVar1 = par` |
| user.c | 346177 | `if (iVar2 == 0) { \| iVar2 = FUN_00255d58(param_1,auStack_30,(int)*(short *)(param_6 + 0x56)); \| if (iVar2 != 0) { \| FUN_00255ecc(); \| goto L` |
| user.c | 346201 | `FUN_00255f00(auStack_3c,auStack_30,0,0,0,0,0,0); \| } \| LAB_002b4cb0: \| FUN_00255ecc(auStack_48); \| return uVar6; \| } \| ` |
| user.c | 348452 | `FUN_00255f00(puVar4,puVar5,puVar6,0,0,0,0,0); \| return iVar7; \| } \| FUN_00255ecc(puVar4); \| puVar4 = puVar5; \| } \| FUN_00255ecc(puVar4);` |
| user.c | 348455 | `FUN_00255ecc(puVar4); \| puVar4 = puVar5; \| } \| FUN_00255ecc(puVar4); \| } \| } \| return iVar7;` |
| user.c | 348549 | `piVar2 = (int *)0x0; \| param_2 = 0; \| FUN_00255f00(iVar1 + 8,iVar1 + 0x14,iVar1 + 0x20,iVar1 + 0x2c,0,0,0,0); \| thunk_EXT_FUN_810ffbd2(iVar1` |
| user.c | 348683 | `} \| } \| LAB_002b87dc: \| FUN_00255ecc(local_78); \| LAB_002b87e2: \| FUN_00255ecc(local_60); \| LAB_002b87e8:` |
| user.c | 348685 | `LAB_002b87dc: \| FUN_00255ecc(local_78); \| LAB_002b87e2: \| FUN_00255ecc(local_60); \| LAB_002b87e8: \| FUN_00255ecc(local_48); \| LAB_002b87ee:` |
| user.c | 348687 | `LAB_002b87e2: \| FUN_00255ecc(local_60); \| LAB_002b87e8: \| FUN_00255ecc(local_48); \| LAB_002b87ee: \| FUN_00255ecc(local_6c); \| LAB_002b87f4:` |
| user.c | 348689 | `LAB_002b87e8: \| FUN_00255ecc(local_48); \| LAB_002b87ee: \| FUN_00255ecc(local_6c); \| LAB_002b87f4: \| FUN_00255ecc(local_54); \| LAB_002b87fa:` |
| user.c | 348691 | `LAB_002b87ee: \| FUN_00255ecc(local_6c); \| LAB_002b87f4: \| FUN_00255ecc(local_54); \| LAB_002b87fa: \| FUN_00255ecc(local_3c); \| LAB_002b8800:` |
| user.c | 348693 | `LAB_002b87f4: \| FUN_00255ecc(local_54); \| LAB_002b87fa: \| FUN_00255ecc(local_3c); \| LAB_002b8800: \| FUN_00255ecc(local_24); \| LAB_002b8806:` |
| user.c | 348695 | `LAB_002b87fa: \| FUN_00255ecc(local_3c); \| LAB_002b8800: \| FUN_00255ecc(local_24); \| LAB_002b8806: \| FUN_00255ecc(local_30); \| return iVar3;` |
| user.c | 348697 | `LAB_002b8800: \| FUN_00255ecc(local_24); \| LAB_002b8806: \| FUN_00255ecc(local_30); \| return iVar3; \| } \| ` |
| user.c | 348803 | `} \| } \| LAB_002b89da: \| FUN_00255ecc(local_60); \| LAB_002b89e0: \| FUN_00255ecc(local_48); \| LAB_002b89e6:` |
| user.c | 348805 | `LAB_002b89da: \| FUN_00255ecc(local_60); \| LAB_002b89e0: \| FUN_00255ecc(local_48); \| LAB_002b89e6: \| FUN_00255ecc(local_54); \| LAB_002b89ec:` |
| user.c | 348807 | `LAB_002b89e0: \| FUN_00255ecc(local_48); \| LAB_002b89e6: \| FUN_00255ecc(local_54); \| LAB_002b89ec: \| FUN_00255ecc(local_3c); \| LAB_002b89f2:` |
| user.c | 348809 | `LAB_002b89e6: \| FUN_00255ecc(local_54); \| LAB_002b89ec: \| FUN_00255ecc(local_3c); \| LAB_002b89f2: \| FUN_00255ecc(auStack_24); \| LAB_002b89f8` |
| user.c | 348811 | `LAB_002b89ec: \| FUN_00255ecc(local_3c); \| LAB_002b89f2: \| FUN_00255ecc(auStack_24); \| LAB_002b89f8: \| FUN_00255ecc(auStack_30); \| return iVa` |
| user.c | 348813 | `LAB_002b89f2: \| FUN_00255ecc(auStack_24); \| LAB_002b89f8: \| FUN_00255ecc(auStack_30); \| return iVar2; \| } \| ` |
| user.c | 348836 | `if (-1 < iVar1) { \| iVar1 = FUN_00255d58(param_1,auStack_34,(int)*(short *)(param_2 + 2)); \| if (iVar1 < 0) { \| FUN_00255ecc(auStack_40); \| ` |
| user.c | 348840 | `} \| else { \| iVar4 = *param_3 * 8 + 4; \| iVar1 = thunk_EXT_FUN_810ffa74(iVar4,s_ecc_c_002b8844,0x642); \| if (iVar1 != 0) { \| iVar2 = param_2` |
| user.c | 348863 | `} \| FUN_00255f00(auStack_40,auStack_34,0,0,0,0,0,0); \| if (iVar1 != 0) { \| thunk_EXT_FUN_810ffbd2(iVar1,s_ecc_c_002b8844,0x671); \| } \| } \| }` |
| user.c | 348929 | `} while (iVar1 < 0); \| iVar1 = FUN_00255d58(local_34,local_44,param_2); \| if (iVar1 < 0) { \| FUN_00255ecc(auStack_50); \| } \| else { \| iVar3 ` |
| user.c | 348933 | `} \| else { \| iVar3 = *param_4 * 8 + 4; \| iVar1 = thunk_EXT_FUN_810ffa74(iVar3,s_ecc_c_002b8844,0x541); \| if (iVar1 != 0) { \| iVar2 = FUN_001` |
| user.c | 349026 | `LAB_002b8eec: \| FUN_00255f00(auStack_50,local_44,0,0,0,0,0,0); \| if (iVar1 != 0) { \| thunk_EXT_FUN_810ffbd2(iVar1,s_ecc_c_002b8844,0x5ca); \|` |
| user.c | 349141 | `bVar7 = iVar1 == 0; \| } while (!bVar7); \| param_2 = *param_5 * 8 + 4; \| iVar6 = thunk_EXT_FUN_810ffa74(param_2,s_ecc_c_002b8844,0x432); \| iV` |
| user.c | 349402 | `} \| } \| LAB_002b94be: \| FUN_00255ecc(auStack_48); \| iVar5 = iVar1; \| } \| FUN_00255ecc(local_54);` |
| user.c | 349405 | `FUN_00255ecc(auStack_48); \| iVar5 = iVar1; \| } \| FUN_00255ecc(local_54); \| } \| FUN_00255ecc(auStack_60); \| }` |
| user.c | 349407 | `} \| FUN_00255ecc(local_54); \| } \| FUN_00255ecc(auStack_60); \| } \| FUN_00255ecc(auStack_6c); \| }` |
| user.c | 349409 | `} \| FUN_00255ecc(auStack_60); \| } \| FUN_00255ecc(auStack_6c); \| } \| FUN_00255ecc(auStack_78); \| if (iVar6 != 0) {` |
| user.c | 349411 | `} \| FUN_00255ecc(auStack_6c); \| } \| FUN_00255ecc(auStack_78); \| if (iVar6 != 0) { \| thunk_EXT_FUN_810ffbd2(iVar6,s_ecc_c_002b8844,0x513); \| ` |
| user.c | 349413 | `} \| FUN_00255ecc(auStack_78); \| if (iVar6 != 0) { \| thunk_EXT_FUN_810ffbd2(iVar6,s_ecc_c_002b8844,0x513); \| } \| } \| return iVar5;` |
| user.c | 349429 | `int iVar1; \| int iVar2; \|  \| iVar1 = thunk_EXT_FUN_810ffa74(0x24,s_ecc_c_002b8844,0x5f6); \| if (iVar1 != 0) { \| if (param_2 == 0) { \| iVar2 ` |
| user.c | 349442 | `if (iVar2 == 0) { \| return iVar1; \| } \| FUN_00255ecc(iVar1); \| iVar1 = iVar1 + 0xc; \| } \| }` |
| user.c | 349457 | `if (iVar2 == 0) { \| return iVar1; \| } \| FUN_00255ecc(iVar1); \| iVar1 = iVar1 + 0xc; \| } \| }` |
| user.c | 349461 | `iVar1 = iVar1 + 0xc; \| } \| } \| FUN_00255ecc(iVar1); \| } \| return 0; \| }` |
| user.c | 349510 | `} \| iVar2 = FUN_0025683c(auStack_50,param_5); \| if (iVar2 != 0) { \| FUN_00255ecc(auStack_50); \| return iVar2; \| } \| iVar2 = 0;` |
| user.c | 349521 | `for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) { \| FUN_002ba55c(local_70[iVar3]); \| } \| FUN_00255ecc(auStack_50); \| return -8; \| } \| iVar` |
| user.c | 349549 | `iVar2 = FUN_00256ee4(local_34,param_3 + 0xc,auStack_50,param_5); \| } \| if (iVar2 == 0) { \| FUN_00255ecc(auStack_50); \| local_78 = auStack_44` |
| user.c | 349634 | `} \| } \| LAB_002b98a8: \| FUN_00255ecc(auStack_50); \| FUN_002ba55c(puVar4); \| iVar3 = 0; \| do {` |
| user.c | 349721 | `if (iVar4 == 0) { \| FUN_00256250(&psStack_30,iVar5); \| FUN_00256ade(param_2,&psStack_30); \| FUN_00255ecc(&psStack_30); \| } \| param_3 = param` |
| user.c | 349767 | `if (local_40 == (undefined4 *)0x0) { \| thunk_EXT_FUN_81103f4a(s_psError__s_002b9d4c,s_DAPS_source_matrix_ssl_src_crypt_002b9d1c); \| thunk_EX` |
| user.c | 349779 | `if (iVar2 == 0) { \| thunk_EXT_FUN_81103f4a(s_psError__s_002b9d4c,s_DAPS_source_matrix_ssl_src_crypt_002b9d1c); \| thunk_EXT_FUN_81103f4a(&DAT` |
| user.c | 349813 | `if (iVar4 == 0) { \| *local_40 = 2; \| FUN_002ba55c(iVar3); \| FUN_00255ecc(auStack_3c); \| thunk_EXT_FUN_810ffbd2(iVar2,DAT_002b9d18,0x162); \| ` |
| user.c | 349823 | `} \| FUN_002ba55c(iVar3); \| } \| FUN_00255ecc(auStack_3c); \| } \| } \| else {` |
| user.c | 350056 | `} \| } \| } \| FUN_00255ecc(auStack_30); \| } \| FUN_002ba55c(iVar2); \| }` |
| user.c | 350191 | `} \| FUN_002ba55c(iVar3); \| } \| FUN_00255ecc(auStack_50); \| } \| FUN_00255ecc(auStack_5c); \| }` |
| user.c | 350193 | `} \| FUN_00255ecc(auStack_50); \| } \| FUN_00255ecc(auStack_5c); \| } \| FUN_00255ecc(auStack_74); \| }` |
| user.c | 350195 | `} \| FUN_00255ecc(auStack_5c); \| } \| FUN_00255ecc(auStack_74); \| } \| FUN_00255ecc(auStack_98); \| }` |
| user.c | 350197 | `} \| FUN_00255ecc(auStack_74); \| } \| FUN_00255ecc(auStack_98); \| } \| FUN_00255ecc(auStack_68); \| }` |
| user.c | 350199 | `} \| FUN_00255ecc(auStack_98); \| } \| FUN_00255ecc(auStack_68); \| } \| FUN_00255ecc(auStack_80); \| }` |
| user.c | 350201 | `} \| FUN_00255ecc(auStack_68); \| } \| FUN_00255ecc(auStack_80); \| } \| FUN_00255ecc(auStack_b0); \| }` |
| user.c | 350203 | `} \| FUN_00255ecc(auStack_80); \| } \| FUN_00255ecc(auStack_b0); \| } \| FUN_00255ecc(&local_8c); \| }` |
| user.c | 350205 | `} \| FUN_00255ecc(auStack_b0); \| } \| FUN_00255ecc(&local_8c); \| } \| FUN_00255ecc(&local_a4); \| }` |
| user.c | 350207 | `} \| FUN_00255ecc(&local_8c); \| } \| FUN_00255ecc(&local_a4); \| } \| return iVar1; \| }` |
| user.c | 350220 | ` \| { \| if (param_1 != 0) { \| FUN_00255ecc(); \| FUN_00255ecc(param_1 + 0xc); \| FUN_00255ecc(param_1 + 0x18); \| (*(code *)&LAB_810ffbd2)(param` |
| user.c | 350221 | `{ \| if (param_1 != 0) { \| FUN_00255ecc(); \| FUN_00255ecc(param_1 + 0xc); \| FUN_00255ecc(param_1 + 0x18); \| (*(code *)&LAB_810ffbd2)(param_1,` |
| user.c | 350222 | `if (param_1 != 0) { \| FUN_00255ecc(); \| FUN_00255ecc(param_1 + 0xc); \| FUN_00255ecc(param_1 + 0x18); \| (*(code *)&LAB_810ffbd2)(param_1,0x2b` |
| user.c | 351796 | `uVar2 = 0; \| } \| else { \| FUN_00255ecc(param_4); \| } \| } \| else {` |
| user.c | 357291 | `code *pcVar2; \|  \| if (param_1 != 0) { \| iVar1 = FUN_0012ff6c(param_1 + 0x30,0xffffffff,8,s_DAPS_source_tcpip6_src_crypt_dsa_002c6ecc); \| if` |
| user.c | 368166 | `thunk_EXT_FUN_811037c8(auStack_40,param_3,iVar2); \| } \| psVar1 = DAT_0033ced4; \| local_24 = &DAT_0033cecc; \| local_28 = 4; \| local_1a = 0xe1` |
| user.c | 380682 | `local_28 = 1; \| local_24 = *(int *)param_1[1]; \| iVar1 = *(int *)(param_1[1] + 4); \| local_38 = DAT_00359ecc; \| if ((((iVar1 != 0) && (local` |
| user.c | 381928 | `*(char *)(param_1 + 0x61) = cVar2; \| if (cVar2 != '\0') { \| uVar9 = 0; \| LAB_0035aecc: \| cVar2 = FUN_0024ac82(uVar6,8); \| pbVar1 = (byte *)(` |
| user.c | 381993 | `goto LAB_0035ae60; \| code_r0x0035aeea: \| if (0x3f < uVar9) goto LAB_0035af26; \| goto LAB_0035aecc; \| } \|  \| ` |
| user.c | 388748 | `if (iVar4 == 2 \|\| iVar8 == iVar4) { \| if (*(int *)(param_3 + iVar8 * 4 + 0x10) != 0) { \| iVar5 = (**(code **)(&DAT_0000c7e0 + param_1))(para` |
| user.c | 388808 | `if (iVar4 == 2 \|\| iVar8 == iVar4) { \| if (*(int *)(param_3 + iVar8 * 4 + 0x10) != 0) { \| iVar4 = (**(code **)(&DAT_0000c7e0 + param_1))(para` |
| user.c | 388876 | `if (iVar4 == 2 \|\| iVar8 == iVar4) { \| if (*(int *)(param_3 + iVar8 * 4 + 0x10) != 0) { \| iVar4 = (**(code **)(&DAT_0000c7e0 + param_1))(para` |
| user.c | 388970 | `if (iVar4 == 2 \|\| iVar8 == iVar4) { \| if (*(int *)(param_3 + iVar8 * 4 + 0x10) != 0) { \| iVar4 = (**(code **)(&DAT_0000c7e0 + param_1))(para` |
| user.c | 389841 | `local_38[1] = 0; \| local_38[2] = 0; \| iVar14 = 0; \| bVar1 = *(byte *)(param_2 + 0xecc); \| uVar12 = *(uint *)(param_2 + 0x738); \| iVar4 = *(i` |
| user.c | 390071 | `local_58[1] = 0; \| local_58[2] = 0; \| local_58[3] = 0; \| bVar1 = *(byte *)(param_2 + 0xecc); \| do { \| iVar9 = param_2 + iVar2 * 0x10; \| iVar` |
| user.c | 390228 | `iVar3 = *(int *)(param_1 + 0x38); \| iVar6 = *(int *)(param_1 + 0xfdc) + *(int *)(param_1 + 0xc) * 0x20; \| iVar15 = (int)*(char *)(param_2 + ` |
| user.c | 390335 | `iVar5 = *(int *)(param_1 + 0x38); \| iVar6 = (int)*(char *)(param_4 + param_2 + 0x2c); \| iVar7 = *(int *)(param_1 + 0xfdc) + *(int *)(param_1` |
| user.c | 390509 | `iVar2 = *(int *)(param_1 + 0x38); \| iVar6 = *(int *)(param_1 + 0xfdc) + *(int *)(param_1 + 0xc) * 0x20; \| iVar7 = (int)*(char *)(param_2 + p` |
| user.c | 390636 | `iVar5 = *(int *)(param_1 + 0x38); \| iVar6 = (int)*(char *)(param_4 + param_2 + 0x2c); \| iVar7 = *(int *)(param_1 + 0xfdc) + *(int *)(param_1` |
| user.c | 390800 | `bool bVar13; \| bool bVar14; \|  \| uVar1 = *(undefined1 *)(param_2 + 0xecc); \| iVar5 = *(int *)(param_2 + 0x738); \| iVar10 = *(int *)(param_2 ` |
| user.c | 391041 | `local_190[0] = (undefined8 *)(param_1 + 0xd000); \| local_1a0[1] = 0; \| iVar27 = (int)*(char *)(param_3 + 0x2c); \| local_1a0[2] = (int)*(byte` |
| user.c | 391124 | `local_184 = param_1 + 0xd000; \| local_180[0] = *(int *)(param_1 + 0xfdc) + *(int *)(param_1 + 0xc) * 0x20; \| local_1a0[1] = *(int *)(param_1` |
| user.c | 391229 | `} \| else if (cVar29 == '\x03') { \| local_1b4 = 0; \| local_190[0] = (undefined8 *)(uint)*(byte *)(param_3 + 0xecc); \| local_1b0[3] = param_1;` |
| user.c | 391361 | `} \| goto LAB_00364cbc; \| } \| bVar8 = *(byte *)(param_3 + 0xecc); \| iVar27 = (int)*(char *)(param_3 + 0xe4); \| iVar22 = (int)*(char *)(param_` |
| user.c | 391546 | `auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4); \| auVar1._0_8_ = 0xff000000ff; \| auVar2 = *(undefined1 (*) [16])(auVar1 << 0x40 \|` |
| user.c | 398458 | ` \| uVar1 = thunk_EXT_FUN_810ff23e(); \| thunk_EXT_FUN_81103f4a(s_DSPVB_DrvOutSwitch_id__d__mode___0036ec90,param_1,param_2,param_3,uVar1); \| ` |
| user.c | 398471 | `if (iVar3 == 0) { \| uVar4 = *puVar2; \| thunk_EXT_FUN_81103f4a(DAT_0036ecd8,uVar4 & 0xf,uVar4 >> 0x18,(uVar4 & 0xffffff) >> 8,uVar1); \| thunk` |
| user.c | 398481 | `(uVar4 & 0xffffff) >> 8,uVar1); \| thunk_EXT_FUN_81104074 \| (0x10,DAT_0036ecd4,&DAT_0036ecd0,*puVar2 >> 0x18,(*puVar2 & 0xffffff) >> 8); \| th` |
| user.c | 416287 | `*(undefined1 *)(uVar2 + 0x301) = 1; \| uVar3 = uVar2; \| thunk_EXT_FUN_81103f4a \| (DAT_00396ecc,*(int *)(uVar2 + 0x3b4),*(undefined4 *)(uVar2 ` |
| user.c | 425639 | `(**(code **)(iVar2 + 0x14))(); \| uVar4 = FUN_003da4d6(local_30,*(undefined4 *)(iVar1 + uVar5 * 0x18)); \| uVar3 = FUN_000ce584(local_2c,DAT_0` |
| user.c | 426556 | `thunk_EXT_FUN_81104074(0x10,DAT_003a8ac8 + 8,&DAT_003a7cf8,param_1); \| iVar2 = thunk_EXT_FUN_810ffb6e(0x134,DAT_003a8ab4,0x4083); \| if (iVar` |
| user.c | 427265 | `} \| FUN_003de778(param_2,sVar1 + local_ba); \| FUN_003de75e(param_2,sVar1 + local_ba,1); \| FUN_003decc6(param_2,1); \| FUN_003a6bdc(param_2,uV` |
| user.c | 436537 | `iVar8 = 0; \| uVar7 = 0; \| if (param_2 != 0) { \| iVar8 = thunk_FUN_0010aecc(); \| uVar7 = FUN_003dec2c(); \| } \| if (iVar1 != 0) {` |
| user.c | 444820 | ` \| if ((param_1 == 0) \|\| (param_3 == (char *)0x0)) { \| thunk_EXT_FUN_811018b0 \| (s__PNULL____bin_ptr______PNULL____h_003caecc,s_atc_common_c` |
| user.c | 452944 | `void thunk_EXT_FUN_80b24f8c(void) \|  \| { \| /* WARNING: Could not recover jumptable at 0x003d9ecc. Too many branches */ \| /* WARNING: Treatin` |
| user.c | 456528 | ` \|  \|  \| /* Function: FUN_003decc6 */ \|  \| undefined4 FUN_003decc6(undefined4 param_1,int param_2) \| ` |
| user.c | 456530 | ` \| /* Function: FUN_003decc6 */ \|  \| undefined4 FUN_003decc6(undefined4 param_1,int param_2) \|  \| { \| int iVar1;` |
| user.c | 462284 | `else { \| iVar2 = FUN_000d029c(iVar2,iVar3,DAT_003e648c,5,0,0,auStack_218,local_14); \| if (iVar2 != 0) { \| iVar2 = thunk_FUN_000d0ecc(auStack` |
| user.c | 466356 | ` \|  \|  \| /* Function: FUN_003ecc52 */ \|  \| undefined8 FUN_003ecc52(uint param_1,uint param_2,byte *param_3) \| ` |
| user.c | 466358 | ` \| /* Function: FUN_003ecc52 */ \|  \| undefined8 FUN_003ecc52(uint param_1,uint param_2,byte *param_3) \|  \| { \| int iVar1;` |
| user.c | 466383 | `if (*(int *)(param_2 + 0x11c) == 4) { \| if ((*(int *)(param_3 + 0x14) != 0) \|\| (*param_3 != 0)) { \| *(undefined2 *)(param_2 + 0x10e) = *(und` |
| user.c | 466387 | `} \| if (*(char *)(param_2 + 0x14e) != '\0') { \| *(undefined2 *)(param_2 + 0x10e) = 1; \| goto LAB_003eccb0; \| } \| } \| else {` |
| user.c | 466391 | `} \| } \| else { \| LAB_003eccb0: \| if (*(int *)(param_2 + 0xfc) != 0) { \| FUN_00074a08(0,*(int *)(param_2 + 0xfc),*(undefined4 *)(param_2 + 0x` |
| user.c | 466915 | `} \| } \| else { \| FUN_003ecc52(0,param_4,auStack_48); \| } \| } \| return iVar2;` |
| user.c | 468995 | `*(int *)(*(int *)(param_1 + 0x44) + 0xc) = iVar1 + *(int *)(param_1 + 0x68); \| *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x10) = DAT_003efe` |
| user.c | 483451 | `} \| else { \| iVar1 = FUN_000d029c(param_1,param_2,param_3,param_4,0,0,auStack_220,local_1c); \| if ((iVar1 != 0) && (iVar1 = thunk_FUN_000d0e` |
| user.c | 483538 | `thunk_EXT_FUN_811049dc(auStack_220,0x204); \| thunk_EXT_FUN_811049dc(auStack_220,0x101); \| FUN_007f188c(s_D__DRM_LRO_000ed454,auStack_220); \|` |
| user.c | 483549 | `} \| thunk_EXT_FUN_811049dc(auStack_220,0x101); \| FUN_007f188c(s_E__DRM_LRO_000ed460,auStack_220); \| iVar2 = thunk_FUN_000d0ecc(auStack_220,0` |
| user.c | 483560 | `} \| thunk_EXT_FUN_811049dc(auStack_220,0x101); \| FUN_007f188c(s_F__DRM_LRO_000ed46c,auStack_220); \| iVar2 = thunk_FUN_000d0ecc(auStack_220,0` |
| user.c | 490597 | `FUN_00445bd4(); \| iVar1 = FUN_000d029c(param_1,param_2,param_3,param_4,0,0,auStack_220,local_1c); \| if (iVar1 != 0) { \| iVar1 = thunk_FUN_00` |
| user.c | 493828 | `if (pcVar4 == (char *)0x1b) { \| iVar8 = FUN_003deab0(uVar12,0); \| if (iVar8 == 0) { \| FUN_003decc6(uVar12,0); \| return local_38; \| } \| retur` |
| user.c | 500990 | `if (iVar2 != 0) { \| uVar3 = FUN_00424850(*(undefined4 *)(DAT_004258b4 + -4)); \| uVar4 = FUN_003deafc(); \| FUN_0010ecc4(*(undefined4 *)(iVar1` |
| user.c | 501020 | `if (iVar2 != 0) { \| uVar3 = FUN_00424850(*(undefined4 *)(DAT_004258b4 + -4)); \| uVar4 = FUN_003deafc(); \| FUN_0010ecc4(*(undefined4 *)(iVar1` |
| user.c | 509718 | `uVar3 = 1; \| LAB_00434bba: \| thunk_EXT_FUN_810e9c4e(local_30,uVar3,uVar4,auStack_a2,auStack_108); \| FUN_007ee69e(DAT_00434ecc,&local_3c); \| ` |
| user.c | 510997 | ` \|  \|  \| /* Function: FUN_00435ecc */ \|  \| undefined4 FUN_00435ecc(int param_1,int param_2) \| ` |
| user.c | 510999 | ` \| /* Function: FUN_00435ecc */ \|  \| undefined4 FUN_00435ecc(int param_1,int param_2) \|  \| { \| int iVar1;` |
| user.c | 515419 | `LAB_0043edb0: \| bVar17 = true; \| if (bVar18) { \| LAB_0043ecc4: \| if (bVar17) goto LAB_0043f1a0; \| uVar12 = 0; \| uVar15 = FUN_00440162(local_` |
| user.c | 515467 | `FUN_00432220(local_40); \| iVar16 = FUN_007f17d8(local_40,&DAT_0043e970); \| bVar17 = true; \| if (iVar16 == 0) goto LAB_0043ecc4; \| uVar12 = 0` |
| user.c | 515489 | `FUN_00432220(local_40); \| iVar16 = FUN_007f17d8(local_40,&DAT_0043e970); \| bVar17 = true; \| if (iVar16 == 0) goto LAB_0043ecc4; \| uVar12 = 0` |
| user.c | 515548 | `} \| iVar6 = FUN_007f17d8(local_40,&DAT_0043e970); \| bVar17 = iVar6 == 0; \| goto LAB_0043ecc4; \| } \| if (((pcVar5 != (char *)0x2e) && (pcVar5` |
| user.c | 523436 | `FUN_007eff2e(&DAT_0000800a,&local_30,DAT_0044eb08,DAT_0044eaf4,DAT_0044eb04,local_28,0,0, \| DAT_0044eb00,0); \| FUN_007ec962(local_28[0],0x86` |
| user.c | 523595 | `break; \| case 1: \| if (puVar5 != (undefined4 *)0x0) { \| FUN_003decc6(*puVar5,1); \| uVar4 = FUN_002b0aaa(*(undefined1 *)(puVar5 + 2),*(undefi` |
| user.c | 523613 | `goto LAB_0044e970; \| case 3: \| if (puVar5 != (undefined4 *)0x0) { \| FUN_003decc6(*puVar5,1); \| uVar4 = FUN_002b0aaa(*(undefined1 *)(puVar5 +` |
| user.c | 523624 | `return; \| } \| LAB_0044e970: \| FUN_003decc6(*puVar5,0); \| break; \| case 5: \| goto switchD_0044e8d8_caseD_5;` |
| user.c | 526043 | `} \| if (*(int *)(param_1 + 0xb8) != 0) { \| if (*(int *)(param_1 + 0xc4) == 0x285) { \| FUN_00255ecc(*(int *)(param_1 + 0xb8) + 0x18); \| piVar` |
| user.c | 526045 | `if (*(int *)(param_1 + 0xc4) == 0x285) { \| FUN_00255ecc(*(int *)(param_1 + 0xb8) + 0x18); \| piVar1 = (int *)(param_1 + 0xb8); \| FUN_00255ecc` |
| user.c | 526046 | `FUN_00255ecc(*(int *)(param_1 + 0xb8) + 0x18); \| piVar1 = (int *)(param_1 + 0xb8); \| FUN_00255ecc(*piVar1); \| FUN_00255ecc(*piVar1 + 0xc); \|` |
| user.c | 526047 | `piVar1 = (int *)(param_1 + 0xb8); \| FUN_00255ecc(*piVar1); \| FUN_00255ecc(*piVar1 + 0xc); \| FUN_00255ecc(*piVar1 + 0x24); \| FUN_00255ecc(*pi` |
| user.c | 526048 | `FUN_00255ecc(*piVar1); \| FUN_00255ecc(*piVar1 + 0xc); \| FUN_00255ecc(*piVar1 + 0x24); \| FUN_00255ecc(*piVar1 + 0x30); \| FUN_00255ecc(*piVar1` |
| user.c | 526049 | `FUN_00255ecc(*piVar1 + 0xc); \| FUN_00255ecc(*piVar1 + 0x24); \| FUN_00255ecc(*piVar1 + 0x30); \| FUN_00255ecc(*piVar1 + 0x3c); \| FUN_00255ecc(` |
| user.c | 526050 | `FUN_00255ecc(*piVar1 + 0x24); \| FUN_00255ecc(*piVar1 + 0x30); \| FUN_00255ecc(*piVar1 + 0x3c); \| FUN_00255ecc(*piVar1 + 0x54); \| FUN_00255ecc` |
| user.c | 526051 | `FUN_00255ecc(*piVar1 + 0x30); \| FUN_00255ecc(*piVar1 + 0x3c); \| FUN_00255ecc(*piVar1 + 0x54); \| FUN_00255ecc(*piVar1 + 0x48); \| } \| if (*(in` |
| user.c | 526055 | `} \| if (*(int *)(param_1 + 0xc4) == 0x206) { \| if (*(int *)(*(int *)(param_1 + 0xb8) + 0x10) != 0) { \| FUN_00255ecc(*(int *)(param_1 + 0xb8)` |
| user.c | 526058 | `FUN_00255ecc(*(int *)(param_1 + 0xb8) + 8); \| } \| if (*(int *)(*(int *)(param_1 + 0xb8) + 0x1c) != 0) { \| FUN_00255ecc(*(int *)(param_1 + 0x` |
| user.c | 526061 | `FUN_00255ecc(*(int *)(param_1 + 0xb8) + 0x14); \| } \| if (*(int *)(*(int *)(param_1 + 0xb8) + 0x28) != 0) { \| FUN_00255ecc(*(int *)(param_1 +` |
| user.c | 526064 | `FUN_00255ecc(*(int *)(param_1 + 0xb8) + 0x20); \| } \| if (*(int *)(*(int *)(param_1 + 0xb8) + 0x34) != 0) { \| FUN_00255ecc(*(int *)(param_1 +` |
| user.c | 528725 | `for (; uVar1 < *(ushort *)(param_1 + 0x84); uVar1 = uVar1 + 1 & 0xffff) { \| iVar2 = *(int *)(param_1 + 0x88) + uVar1 * 0xc; \| if (*(int *)(i` |
| user.c | 528858 | `} \| if (*(int *)(param_2 + 0x20) != 0) { \| *(undefined1 *)(param_1 + 0x82) = 0; \| thunk_FUN_0010aecc(*(undefined4 *)(param_2 + 0x20)); \| FUN` |
| user.c | 535414 | `iVar1 = DAT_00463e98; \| if (piVar2 != (int *)0x0) { \| if (*(int *)(DAT_00463e98 + 8) == 0) { \| iVar3 = FUN_00463754(DAT_00463ed0,DAT_00463ec` |
| user.c | 550539 | `iVar1 = 0; \| } \| LAB_00763618: \| FUN_00255ecc(&local_3c); \| FUN_00255ecc(&local_30); \| FUN_00255ecc(auStack_60); \| return iVar1;` |
| user.c | 550540 | `} \| LAB_00763618: \| FUN_00255ecc(&local_3c); \| FUN_00255ecc(&local_30); \| FUN_00255ecc(auStack_60); \| return iVar1; \| }` |
| user.c | 550541 | `LAB_00763618: \| FUN_00255ecc(&local_3c); \| FUN_00255ecc(&local_30); \| FUN_00255ecc(auStack_60); \| return iVar1; \| } \| ` |
| user.c | 552247 | `else { \| uVar4 = 1; \| } \| FUN_00255ecc(iVar2); \| FUN_00255ecc(iVar3); \| } \| return uVar4;` |
| user.c | 552248 | `uVar4 = 1; \| } \| FUN_00255ecc(iVar2); \| FUN_00255ecc(iVar3); \| } \| return uVar4; \| }` |
| user.c | 552289 | `} \| } \| } \| FUN_00255ecc(&iStack_2c); \| } \| else { \| iVar1 = -1;` |
| user.c | 562876 | `puVar13 = (ushort *)((int)puVar8 + 1); \| uVar16 = uVar17 - 1; \| } while (((byte)*puVar8 & 0x80) != 0); \| thunk_EXT_FUN_81103f4a(s_found_esds` |
| user.c | 591615 | `uVar4 = uVar14 + (uVar4 >> 0x14 \| uVar4 * 0x1000); \| uVar5 = (((uVar14 ^ uVar10) & uVar4 ^ uVar10) - 0xa44f) + iVar22 + uVar5; \| uVar5 = uVa` |
| user.c | 592464 | `uVar6 = 0; \| local_28 = 0; \| if (param_1 == 0) { \| thunk_EXT_FUN_811018b0(s_PNULL____puiDestData_007a2ecc,DAT_007a2dcc,0x825); \| } \| if (((p` |
| user.c | 615609 | ` \| { \| if (*(int *)(param_1 + 0xf0) != 0) { \| thunk_FUN_0010aecc(); \| FUN_000ce514(); \| *(undefined4 *)(param_1 + 0xf0) = 0; \| }` |
| user.c | 616606 | `uVar1 = *(uint *)(iVar2 + -0x50); \| if (uVar1 < 2) { \| FUN_007ee74e(3,aiStack_38); \| FUN_00435ecc(&local_18,local_14,*(undefined1 *)(iVar2 +` |
| user.c | 626310 | `iVar1 = FUN_000d1bf8(local_1c,20000,param_1); \| if (iVar1 == 0) { \| uVar2 = FUN_000d048a(auStack_64c,0xff,*param_1,DAT_007e3d34,0); \| iVar1 ` |
| user.c | 631304 | `void thunk_EXT_FUN_80a0a218(void) \|  \| { \| /* WARNING: Could not recover jumptable at 0x007e8ecc. Too many branches */ \| /* WARNING: Treatin` |
| user.c | 635056 | `uVar1 = FUN_000d2f3a(); \| iVar2 = FUN_000d308c(uVar1,0x80); \| if (iVar2 == 0) { \| iVar2 = FUN_007eccaa(param_1,param_2); \| if (iVar2 == 0) {` |
| user.c | 635064 | `else { \| iVar2 = FUN_007ecb28(); \| if (iVar2 == 0) { \| iVar2 = FUN_007eccaa(param_1,param_2); \| } \| } \| if (param_1 == 0xf041) {` |
| user.c | 635142 | ` \|  \|  \| /* Function: FUN_007ecc2c */ \|  \| void FUN_007ecc2c(undefined4 param_1,code *param_2) \| ` |
| user.c | 635144 | ` \| /* Function: FUN_007ecc2c */ \|  \| void FUN_007ecc2c(undefined4 param_1,code *param_2) \|  \| { \| int *piVar1;` |
| user.c | 635171 | ` \|  \|  \| /* Function: FUN_007eccaa */ \|  \| undefined4 FUN_007eccaa(undefined4 param_1,undefined4 param_2) \| ` |
| user.c | 635173 | ` \| /* Function: FUN_007eccaa */ \|  \| undefined4 FUN_007eccaa(undefined4 param_1,undefined4 param_2) \|  \| { \| int iVar1;` |
| user.c | 636758 | `iVar4 = iVar7 + 0xc; \| goto LAB_000aac04; \| } \| thunk_EXT_FUN_811018b0(s_s_nand_mem_manager_id_>_0_000aad68 + 0x18,DAT_000aaca0,0x88c); \| } ` |
| user.c | 645866 | `pcVar6 = s_http_CreatePatchRequest_patch_fi_000019b0 + 0x17; \| } \| else if (param_4 == 0) { \| pcVar2 = s__MMICC____s____d__PNULL_ecc_007f84f` |
| user.c | 645889 | `return local_3c; \| } \| thunk_EXT_FUN_81103f4a \| (s__YHL__MMICC__a____s____d__eccdat_007f8540,DAT_007f84b0, \| s_http_CreatePatchRequest_patch` |
| user.c | 645945 | `uVar11 = uVar11 + 1; \| } while( true ); \| } \| pcVar2 = s__MMICC____s____d__eccdata____PNU_007f851c; \| pcVar6 = s_http_CreatePatchRequest_pat` |
| user.c | 646043 | `LAB_007f8462: \| uVar3 = uVar3 + 1; \| } while (uVar3 < 2); \| thunk_EXT_FUN_81103f4a(s_MMIAPIPHONE_IsEccExistedStatusEx_007f8610,uVar6,uVar4);` |
| user.c | 646133 | `} while( true ); \| } \| pcVar5 = s_http_HttpTracePostParam_body_typ_00001924 + 0x27; \| pcVar2 = s__MMICC____s____d__eccdata____PNU_007f851c; ` |
| user.c | 646183 | `do { \| if (uVar6 <= uVar4) { \| thunk_EXT_FUN_81103f4a \| (s__s___d__Not_3GP_ECC_Number_007f8ad0,DAT_007f8a18 + 0x36, \| s_http_CreatePatchRequ` |
| user.c | 646301 | `thunk_EXT_FUN_810ed64a(&local_1e0,param_4); \| thunk_EXT_FUN_810faa34(&local_364,&local_1e0,0x184); \| thunk_EXT_FUN_81104074 \| (0x10,DAT_007f` |
| user.c | 646408 | `uVar2 = FUN_0021f21c(&local_70,param_4,0x78,0); \| thunk_EXT_FUN_811043bc(s_ccapp_c__GetNameFromPb_pb_num__x_007f8fbc,auStack_6e,0x14); \| thu` |
| user.c | 646438 | `local_28[0] = 0; \| if (1 < param_3) { \| thunk_EXT_FUN_81104074 \| (0x10,DAT_007f8f7c + -7,s_MMIAPIPHONE_IsEccExistedStatusEx_007f8610 + 0x38,` |
| user.c | 646495 | `thunk_EXT_FUN_811049dc(&local_1d8,0x2c); \| uVar3 = FUN_0009b546(2,*(undefined1 *)(iVar1 + uVar5 * 0xd + 0x1d),iVar1 + uVar5 * 0xd + 0x11, \| ` |
| user.c | 646505 | `thunk_EXT_FUN_810ed64a(&local_1d8,param_3); \| thunk_EXT_FUN_810faa34(&local_35c,&local_1d8,0x184); \| thunk_EXT_FUN_81104074 \| (0x10,DAT_007f` |
| user.c | 646979 | `if (iVar10 == 0) { \| if (puVar4 == (undefined4 *)0x2) { \| thunk_EXT_FUN_81103f4a \| (s__MMICC____s____d__clear_Fake_ECC_007f9a20,DAT_007f9a1c` |
| user.c | 646987 | `*(undefined4 *)(iVar9 + 0x18) = 0; \| *(undefined1 *)(puVar1 + 0x10) = 0; \| if (puVar4 == (undefined4 *)0x2) { \| thunk_EXT_FUN_81103f4a(s__MM` |
| user.c | 647290 | `bVar14 = 0x29; \| } \| if (bVar15 < bVar14) { \| uVar9 = thunk_EXT_FUN_8110349c(DAT_007f9ecc); \| thunk_EXT_FUN_81103544 \| (DAT_007f9ed0,DAT_007` |
| user.c | 647292 | `if (bVar15 < bVar14) { \| uVar9 = thunk_EXT_FUN_8110349c(DAT_007f9ecc); \| thunk_EXT_FUN_81103544 \| (DAT_007f9ed0,DAT_007f9ecc + -0x34, \| s_ht` |
| user.c | 647400 | `uVar18 = local_3c & 0xff; \| *(ushort *)(DAT_007f9ed4 + 0x18) = uVar18; \| if (0x14 < uVar18) { \| uVar19 = thunk_EXT_FUN_8110349c(DAT_007f9ecc` |
| user.c | 647402 | `if (0x14 < uVar18) { \| uVar19 = thunk_EXT_FUN_8110349c(DAT_007f9ecc + -0x5c); \| thunk_EXT_FUN_81103544 \| (DAT_007f9ed8,DAT_007f9ecc + -0x34,` |
| user.c | 647404 | `thunk_EXT_FUN_81103544 \| (DAT_007f9ed8,DAT_007f9ecc + -0x34, \| s_http_HttpTraceGetParam_password__00003140 + 0x19,uVar19); \| uVar19 = thunk_` |
| user.c | 647406 | `s_http_HttpTraceGetParam_password__00003140 + 0x19,uVar19); \| uVar19 = thunk_EXT_FUN_8110349c(DAT_007f9ecc); \| thunk_EXT_FUN_81103544 \| (s__` |
| user.c | 647475 | `if (uVar18 != 0) goto LAB_007f9ee8; \| } \| else { \| uVar19 = thunk_EXT_FUN_8110349c(DAT_007f9ecc + -0x5c); \| thunk_EXT_FUN_81103544 \| (DAT_00` |
| user.c | 647477 | `else { \| uVar19 = thunk_EXT_FUN_8110349c(DAT_007f9ecc + -0x5c); \| thunk_EXT_FUN_81103544 \| (DAT_007f9ed8,DAT_007f9ecc + -0x34, \| s_http_Http` |
| user.c | 647479 | `thunk_EXT_FUN_81103544 \| (DAT_007f9ed8,DAT_007f9ecc + -0x34, \| s_http_HttpTraceGetParam_entity_le_00003198 + 0x16,uVar19); \| uVar19 = thunk_` |
| user.c | 647481 | `s_http_HttpTraceGetParam_entity_le_00003198 + 0x16,uVar19); \| uVar19 = thunk_EXT_FUN_8110349c(DAT_007f9ecc); \| thunk_EXT_FUN_81103544 \| (s__` |
| user.c | 650677 | `uVar5 = 0x28; \| } \| if ((uVar5 & 0xff) == 0) { \| pcVar1 = s_ccapp_c__MMIAPICC_IsEmergencyPar_007feccc; \| goto LAB_007fea5a; \| } \| pcVar1 = l` |
| user.c | 650906 | `iVar5 = DAT_0026d104 + -0x1e; \| uStack_2c = 0; \| aiStack_24[0] = iVar5; \| thunk_EXT_FUN_81104074(0x10,DAT_0026d100 + -0x36,s__CC_HandleCcAni` |
| user.c | 652800 | `iVar2 = DAT_00103e4c + -9; \| thunk_FUN_003da36e(iVar2); \| FUN_007f0816(1,&uStack_18,0,0,iVar2,0x40000000,DAT_00103e54 + -0xfd,1,1,DAT_00103e` |
| user.c | 653047 | `} \| } \| else { \| puVar9 = (undefined *)thunk_FUN_000d0ecc(param_2,uVar5 & 0xffff); \| } \| puVar6 = puVar9; \| if ((undefined *)0x2 < puVar4) {` |
| user.c | 655384 | `thunk_EXT_FUN_81103f4a(s_MNSS_SendSSEx_number_plan__d__nu_00806ea0); \| iVar2 = thunk_EXT_FUN_80b165e4(*puVar1,&local_d8,local_24); \| if (iVa` |
| user.c | 678942 | ` \| { \| FUN_003dec62(param_1,0); \| FUN_003decc6(param_1,0); \| return; \| } \| ` |
| user.c | 678985 | `return; \| } \| FUN_0082f5a8(); \| FUN_003decc6(param_2,0); \| } \| else { \| FUN_0082f5a8();` |
| user.c | 684057 | `thunk_EXT_FUN_81104074(0x10,DAT_008367bc,&DAT_008367b8); \| } \| else { \| uVar1 = FUN_000ecc76(param_2,0x31,0); \| } \| } \| else {` |
| user.c | 684061 | `} \| } \| else { \| uVar1 = FUN_000ecc5c(); \| } \| return uVar1; \| }` |
| user.c | 694846 | ` \|  \|  \| /* Function: FUN_0084eccc */ \|  \| int FUN_0084eccc(ushort *param_1,byte *param_2,int param_3,undefined4 *param_4) \| ` |
| user.c | 694848 | ` \| /* Function: FUN_0084eccc */ \|  \| int FUN_0084eccc(ushort *param_1,byte *param_2,int param_3,undefined4 *param_4) \|  \| { \| byte bVar1;` |
| user.c | 694894 | `void FUN_0084ed2a(void) \|  \| { \| FUN_0084eccc(); \| return; \| } \| ` |
| user.c | 714885 | `iVar1 = *param_1; \| if (param_1[2] == 2) { \| if (*(int *)(iVar1 + 0x10) != 0) { \| FUN_00255ecc(iVar1 + 8); \| } \| if (*(int *)(*param_1 + 0x1` |
| user.c | 714888 | `FUN_00255ecc(iVar1 + 8); \| } \| if (*(int *)(*param_1 + 0x1c) != 0) { \| FUN_00255ecc(*param_1 + 0x14); \| } \| if (*(int *)(*param_1 + 0x28) !=` |
| user.c | 714891 | `FUN_00255ecc(*param_1 + 0x14); \| } \| if (*(int *)(*param_1 + 0x28) != 0) { \| FUN_00255ecc(*param_1 + 0x20); \| } \| if (*(int *)(*param_1 + 0x` |
| user.c | 714894 | `FUN_00255ecc(*param_1 + 0x20); \| } \| if (*(int *)(*param_1 + 0x34) != 0) { \| FUN_00255ecc(*param_1 + 0x2c); \| } \| iVar1 = *param_1; \| uVar2 ` |

## 8. תצוגה GC9106
*וודאות:* גבוהה*
| קובץ | שורה | קטע קוד |
|---|---|---|
| img_90000024.c | 10120 | `bVar2 = param_2 == 1; \| } \| if (bVar3 && !bVar2) { \| FUN_000006e4(s__lcd_cs_<__3)_&&_(lcd_cd_<__1)_0000b690,&DAT_0000b63c,0x166); \| } \| iVar` |
| img_90000024.c | 10218 | `local_14[0] = local_28; \| FUN_0000aab8(uVar4,0x33,local_14); \| if ((uVar3 & 0xffff) == uVar3 >> 0x10) { \| FUN_000006e4(s__lcm_spec_info_t_cs` |
| img_90000024.c | 10775 | ` \| { \| if (param_2 == 0) { \| FUN_000006e4(s_PNULL____func_0000c4f4,s_lcd_if_hal_c_0000c4e4,0x138); \| } \| *DAT_0000c4e0 = param_2; \| return 1` |
| img_90000024.c | 11056 | `undefined4 uVar1; \|  \| if (*(uint *)(DAT_0000c828 + 0x24) <= param_1) { \| FUN_000006e4(s_lcd_id_<_s_lcd_used_num_0000cb80,&DAT_0000c810,0x68` |
| img_90000024.c | 11078 | `undefined4 uVar1; \|  \| if (*(uint *)(DAT_0000c828 + 0x24) <= param_1) { \| FUN_000006e4(s_lcd_id_<_s_lcd_used_num_0000cb80,&DAT_0000c810,0x67` |
| img_90000024.c | 11112 | ` \| uVar7 = 0; \| if (*(uint *)(DAT_0000c828 + 0x24) <= param_1) { \| FUN_000006e4(s_lcd_id_<_s_lcd_used_num_0000cb80,&DAT_0000c810,0x62f,param` |
| img_90000024.c | 11193 | `undefined4 uVar5; \|  \| if (*(uint *)(DAT_0000c828 + 0x24) <= param_1) { \| FUN_000006e4(s_lcd_id_<_s_lcd_used_num_0000cb80,DAT_0000d000,0x35a` |
| img_90000024.c | 11297 | `piVar11[uVar10] = iVar4; \| if (iVar4 != 0) { \| if (*(int *)(*(int *)(iVar4 + 8) + 0x18) == 0) { \| FUN_000006e4(s_PNULL____s_lcd_spec_info_pt` |
| img_90000024.c | 11307 | `uVar10 = uVar10 + 1; \| } while (uVar10 < 2); \| if ((2 < *(uint *)(iVar3 + 0x24)) \|\| (*(uint *)(iVar3 + 0x24) == 0)) { \| FUN_000006e4(s__s_lc` |
| img_90000024.c | 11450 | ` \| if (param_4 <= param_2 \|\| param_5 <= param_3) { \| uVar5 = param_5; \| uVar2 = FUN_000006ec(s_LCD_InvalidateRect_l__d_t__d_r___0000d394); \|` |
| img_90000024.c | 11477 | `if (iVar3 == 0) { \| FUN_000100bc(1); \| FUN_00010098(0); \| FUN_000006d8(0x10,DAT_0000d3e4,s__s_lcd_used_num_<__LCD_SUPPORT_M_0000d04c + 0x3c)` |
| img_90000024.c | 11485 | `} \| iVar3 = FUN_0000fec4(param_1,param_2,param_3,param_4,param_5); \| if (iVar3 != 0) { \| uVar2 = FUN_000006ec(s_lcd_invalidate_timeout_0000d` |
| img_90000024.c | 11735 | `undefined4 uVar1; \|  \| if (*(uint *)(DAT_0000dc14 + 0x24) <= param_1) { \| uVar1 = FUN_000006ec(s_LCD_GetBrushMode_lcd_id____d_0000df08,param` |
| img_90000024.c | 11736 | ` \| if (*(uint *)(DAT_0000dc14 + 0x24) <= param_1) { \| uVar1 = FUN_000006ec(s_LCD_GetBrushMode_lcd_id____d_0000df08,param_1); \| FUN_000006e8(` |
| img_90000024.c | 11758 | `if (DAT_0000df28 < param_1 - 1U) { \| FUN_000006e4(s__ahb_clk_>_0______ahb_clk<_10000_0000df2c,DAT_0000d000,0x76d); \| } \| FUN_000006d8(0x10,D` |
| img_90000024.c | 12160 | `} \| if (*(int *)(DAT_0000e644 + 8) == 0) { \| uVar2 = FUN_000006ec(s_src_y_address_is_null_0000e648); \| FUN_000006e8(s_layer_ptr_>src_base_ad` |
| img_90000024.c | 12164 | `} \| if ((puVar1[8] & 3) != 0) { \| uVar2 = FUN_000006ec(s_y_address_is_not_word_aligned_0000e68c); \| FUN_000006e8(s_0_____layer_ptr_>src_base` |
| img_90000024.c | 12170 | `if (uVar3 < 2) { \| if (*(int *)(puVar1 + 10) == 0) { \| uVar2 = FUN_000006ec(s_src_y_address_is_null_0000e648); \| FUN_000006e8(s_layer_ptr_>s` |
| img_90000024.c | 12174 | `} \| if ((puVar1[10] & 3) != 0) { \| uVar2 = FUN_000006ec(s_u_address_is_not_word_aligned_0000e728); \| FUN_000006e8(s_0_____layer_ptr_>src_bas` |
| img_90000024.c | 12182 | `else { \| LAB_0000e564: \| if ((uVar3 != 2 && uVar3 != 3) && ((uVar3 != 4 && uVar3 != 5) && uVar3 != 6)) { \| uVar2 = FUN_000006ec(s_LCDC_img_d` |
| img_90000024.c | 12183 | `LAB_0000e564: \| if ((uVar3 != 2 && uVar3 != 3) && ((uVar3 != 4 && uVar3 != 5) && uVar3 != 6)) { \| uVar2 = FUN_000006ec(s_LCDC_img_data_forma` |
| img_90000024.c | 12198 | `} \| else { \| LAB_0000e778: \| uVar2 = FUN_000006ec(s_LCDC_img_src_size_not_algin_data_0000eb2c,*(undefined4 *)(puVar1 + 0xc), \| uVar3,puVar1[` |
| img_90000024.c | 12200 | `LAB_0000e778: \| uVar2 = FUN_000006ec(s_LCDC_img_src_size_not_algin_data_0000eb2c,*(undefined4 *)(puVar1 + 0xc), \| uVar3,puVar1[1]); \| FUN_00` |
| img_90000024.c | 12223 | `param_2 = (uint)puVar1[5]; \| param_1 = (uint)puVar1[4]; \| uVar2 = FUN_000006ec(DAT_0000eb6c,*(undefined4 *)(puVar1 + 0xc),uVar3,puVar1[3],pa` |
| img_90000024.c | 12233 | `uVar5 = local_14; \| } \| if (!bVar7 \|\| (uVar3 & uVar5) != 0) { \| uVar2 = FUN_000006ec(s_LCDC_img_postion_not_algin_data__0000eb70,*(undefined` |
| img_90000024.c | 12235 | `if (!bVar7 \|\| (uVar3 & uVar5) != 0) { \| uVar2 = FUN_000006ec(s_LCDC_img_postion_not_algin_data__0000eb70,*(undefined4 *)(puVar1 + 0xc), \| (u` |
| img_90000024.c | 12240 | `uVar3 = FUN_00012ae8(); \| if ((uVar3 < (uint)puVar1[6] + (uint)puVar1[4]) \|\| \| (uVar3 = FUN_00012af0(), uVar3 < (uint)puVar1[7] + (uint)puVa` |
| img_90000024.c | 12242 | `(uVar3 = FUN_00012af0(), uVar3 < (uint)puVar1[7] + (uint)puVar1[5])) { \| uVar2 = FUN_000006ec(s_LCDC_img_size_err_x__d__y__d__w__0000eba8,pu` |
| img_90000024.c | 12286 | `uVar7 = puVar3[4]; \| uVar6 = param_1; \| if ((uVar7 != 3 && uVar7 != 4) && ((uVar7 != 5 && uVar7 != 6) && uVar7 != 7)) { \| uVar4 = FUN_000006` |
| img_90000024.c | 12287 | `uVar6 = param_1; \| if ((uVar7 != 3 && uVar7 != 4) && ((uVar7 != 5 && uVar7 != 6) && uVar7 != 7)) { \| uVar4 = FUN_000006ec(s_LCDC_osd1_data_f` |
| img_90000024.c | 12302 | `(uVar10 = extraout_r3, uVar7 = extraout_r12, uVar9 == 0 \|\| uVar5 == 0)) { \| uVar4 = FUN_000006ec(DAT_0000ebfc,puVar3[4],uVar9,*(undefined2 *` |
| img_90000024.c | 12327 | `uVar6 = (uint)(ushort)puVar3[-2]; \| uVar4 = FUN_000006ec(DAT_0000ec00,puVar3[4],uVar5,*(undefined2 *)((int)puVar3 + -10),uVar6,param_2 \| ); ` |
| img_90000024.c | 12337 | `uVar7 = local_1c; \| } \| if (!bVar11 \|\| (uVar5 & uVar7) != 0) { \| uVar4 = FUN_000006ec(s_LCDC_osd1_postion_not_algin_data_0000ec04,puVar3[4],` |
| img_90000024.c | 12344 | `if (((uint)uVar1 < (uint)(ushort)puVar3[-1] + (uint)(ushort)puVar3[-2]) \|\| \| (uVar6 = (uint)*(ushort *)((int)puVar3 + -2) + (uint)*(ushort *` |
| img_90000024.c | 12368 | `} \| if ((puVar3[1] & 3) != 0) { \| uVar4 = FUN_000006ec(s_alpha_base_address_is_not_word_a_0000ee94); \| FUN_000006e8(s_LCDC_ZERO_____layer_pt` |
| img_90000024.c | 12405 | `} \| iVar6 = *(int *)(DAT_0000ef04 + 10); \| if ((iVar6 != 3 && iVar6 != 4) && iVar6 != 5) { \| uVar4 = FUN_000006ec(s_LCDC_cap_data_format_err` |
| img_90000024.c | 12450 | `} \| if (bVar10 && uVar1 == uVar2) goto LAB_0000ee60; \| } \| uVar4 = FUN_000006ec(s_LCDC_capture_rect_error__x__d__y_0000ef34,(uint)*puVar3,pu` |
| img_90000024.c | 12913 | `int iVar2; \|  \| if (1 < param_1) { \| uVar1 = FUN_000006ec(s_LCDC_AppSetFmark_lcd_id_is_error_0000f9d8,param_1); \| FUN_000006e8(s__lcd_id_<_2` |
| img_90000024.c | 12914 | ` \| if (1 < param_1) { \| uVar1 = FUN_000006ec(s_LCDC_AppSetFmark_lcd_id_is_error_0000f9d8,param_1); \| FUN_000006e8(s__lcd_id_<_2)_0000fa00,DA` |
| img_90000024.c | 12990 | `undefined4 uVar1; \|  \| if (3 < param_1) { \| uVar1 = FUN_000006ec(s_LCDC_AppUnRegisterIntFunc__The_i_0000fd0c,param_1); \| FUN_000006e8(s__uin` |
| img_90000024.c | 12991 | ` \| if (3 < param_1) { \| uVar1 = FUN_000006ec(s_LCDC_AppUnRegisterIntFunc__The_i_0000fd0c,param_1); \| FUN_000006e8(s__uint32__LCD_INT_MAX_>__` |
| img_90000024.c | 13016 | `switch(param_1) { \| case 0: \| if (param_2 == (ushort *)0x0) { \| FUN_000006e4(s_PNULL____param_ptr_0000fd54,s_lcdc_app_c_0000fd48,0x457); \| }` |
| img_90000024.c | 13042 | `return 0; \| } \| if (param_2 == (ushort *)0x0) { \| FUN_000006e4(s_PNULL____param_ptr_0000fd54,s_lcdc_app_c_0000fd48,0x488); \| } \| iVar3 = iVa` |
| img_90000024.c | 13092 | `*(uint *)(iVar1 + 0x138) = (uint)*(ushort *)(param_1 + 8); \| if (*(short *)(param_1 + 4) != *(short *)(param_1 + 0x10)) { \| uVar2 = FUN_0000` |
| img_90000024.c | 13096 | `} \| if (*(short *)(param_1 + 6) != *(short *)(param_1 + 0x12)) { \| uVar2 = FUN_000006ec(DAT_0000fda4); \| FUN_000006e8(s_param_ptr_>cap_rect_` |
| img_90000024.c | 13159 | `undefined4 uVar1; \|  \| if (1 < param_1) { \| uVar1 = FUN_000006ec(s_LCDC_AppSetCSPin_lcd_id_is_error_00010068); \| FUN_000006e8(DAT_0001008c,s` |
| img_90000024.c | 13160 | ` \| if (1 < param_1) { \| uVar1 = FUN_000006ec(s_LCDC_AppSetCSPin_lcd_id_is_error_00010068); \| FUN_000006e8(DAT_0001008c,s_lcdc_app_c_0000fd48` |
| img_90000024.c | 13333 | `(param_2 & 0x1f) << 3; \| } \| if (iVar1 != 2) { \| FUN_000006c8(s__LCDC_GetColorKey__expand_mode_i_00010324); \| return 0; \| } \| uVar2 = (param` |
| img_90000024.c | 13420 | `} \| if (((!bVar7 \|\| sVar1 == 0) \|\| (uVar3 = FUN_00012ae8(), uVar3 < *(ushort *)(iVar2 + 0x40))) \|\| \| (uVar3 = FUN_00012af0(), uVar3 < *(usho` |
| img_90000024.c | 13442 | `if (((bVar7 \|\| uVar5 != uVar6) \|\| \| ((uint)*(ushort *)(DAT_00010094 + 0x40) < *(ushort *)(DAT_00010094 + 0x54) + uVar3)) \|\| \| ((uint)*(ushor` |
| img_90000024.c | 14255 | `piVar11[uVar10] = iVar4; \| if (iVar4 != 0) { \| if (*(int *)(*(int *)(iVar4 + 8) + 0x18) == 0) { \| FUN_000006e4(s_PNULL____s_lcd_spec_info_pt` |
| img_90000024.c | 14265 | `uVar10 = uVar10 + 1; \| } while (uVar10 < 2); \| if ((2 < *(uint *)(iVar3 + 0x24)) \|\| (*(uint *)(iVar3 + 0x24) == 0)) { \| FUN_000006e4(s__s_lc` |
| img_90000024.c | 14663 | `uVar2 = FUN_00012e80(); \| if (1 < uVar2) { \| uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1); \| FUN_000006e8(s` |
| img_90000024.c | 14688 | `uVar2 = FUN_00012e80(); \| if (1 < uVar2) { \| uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1); \| FUN_000006e8(s` |
| img_90000024.c | 14736 | `uVar2 = FUN_00012e80(); \| if (1 < uVar2) { \| uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1); \| FUN_000006e8(s` |
| img_90000024.c | 14764 | `bVar4 = param_2 <= uVar3; \| uVar3 = uVar3 + 1; \| if (bVar4) { \| FUN_000006c8(s_LCDC___0x20800110____0x_08X_000120a7 + 1,_DAT_20800110); \| FU` |
| img_90000024.c | 14765 | `uVar3 = uVar3 + 1; \| if (bVar4) { \| FUN_000006c8(s_LCDC___0x20800110____0x_08X_000120a7 + 1,_DAT_20800110); \| FUN_000006c8(s_LCDC___0x208001` |
| img_90000024.c | 14766 | `if (bVar4) { \| FUN_000006c8(s_LCDC___0x20800110____0x_08X_000120a7 + 1,_DAT_20800110); \| FUN_000006c8(s_LCDC___0x20800114____0x_08X_000120c8` |
| img_90000024.c | 14767 | `FUN_000006c8(s_LCDC___0x20800110____0x_08X_000120a7 + 1,_DAT_20800110); \| FUN_000006c8(s_LCDC___0x20800114____0x_08X_000120c8,_DAT_20800114)` |
| img_90000024.c | 14825 | `uVar2 = FUN_00012e80(); \| if (1 < uVar2) { \| uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1); \| FUN_000006e8(s` |
| img_90000024.c | 14851 | `uVar3 = FUN_00012e80(); \| if (1 < uVar3) { \| uVar4 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1); \| FUN_000006e8(s` |
| img_90000024.c | 14906 | `if (*pcVar1 == '\0') { \| iVar2 = FUN_00000740(0x13,DAT_000123d8,DAT_000123d4,*DAT_000123d0,pcVar1 + 4); \| if (iVar2 != 0) { \| uVar3 = FUN_00` |
| img_90000024.c | 14907 | `iVar2 = FUN_00000740(0x13,DAT_000123d8,DAT_000123d4,*DAT_000123d0,pcVar1 + 4); \| if (iVar2 != 0) { \| uVar3 = FUN_000006ec(s_Register_Interru` |
| img_90000024.c | 15839 | `uVar1 = 1; \| } \| else { \| FUN_000006c8(s___LCDC_IRQ_type_is_wrong__irq_ty_00012ef6 + 2,param_1); \| } \| return uVar1; \| }` |
| img_90000024.c | 15861 | `uVar1 = 3; \| } \| else { \| FUN_000006c8(s_LCDC_IRQ_num_is_wrong__irq_numbe_00012f20,param_1); \| } \| return uVar1; \| }` |
| img_90000024.c | 17053 | `undefined4 FUN_00014d50(void) \|  \| { \| FUN_000006c8(s_GC9106_Init_00015034); \| FUN_00014a64(); \| return 0; \| }` |
| img_90000024.c | 17065 | `undefined4 FUN_00014d68(int param_1) \|  \| { \| FUN_000006c8(s_qinss_LCD__in_GC9106_EnterSleep__00015040,param_1); \| if (param_1 == 0) { \| FUN` |
| img_90000024.c | 17067 | `{ \| FUN_000006c8(s_qinss_LCD__in_GC9106_EnterSleep__00015040,param_1); \| if (param_1 == 0) { \| FUN_000006c8(s_qinss_LCD__GC9106_mainlcd_id__` |

## 9. GPIO ופין מיקס
*וודאות:* בינונית*
| קובץ | שורה | קטע קוד |
|---|---|---|
| img_90000024.c | 9494 | `FUN_0000a4e8(); \| iVar1 = FUN_0000a4a8(param_1); \| if (iVar1 == -1) { \| FUN_000006e4(s_gpio_id____INVALID_U32_0000a620,DAT_00009cc0,0xa0f); ` |
| img_90000024.c | 14087 | `undefined4 uVar1; \|  \| if (0x7f < param_1) { \| uVar1 = FUN_000006ec(s__s___d__gpio__d_exceed_max__00011624,s_gpio_phy_c_00011618,0x19,param_` |
| img_90000024.c | 14088 | ` \| if (0x7f < param_1) { \| uVar1 = FUN_000006ec(s__s___d__gpio__d_exceed_max__00011624,s_gpio_phy_c_00011618,0x19,param_1); \| FUN_000006e8(s` |
| kernel.c | 36159 | `undefined4 uVar1; \|  \| if (0x7f < param_1) { \| uVar1 = FUN_006fd49c(s__s___d__gpio__d_exceed_max__00040604,s_gpio_phy_c_000405f8,0x19,param_` |
| kernel.c | 36160 | ` \| if (0x7f < param_1) { \| uVar1 = FUN_006fd49c(s__s___d__gpio__d_exceed_max__00040604,s_gpio_phy_c_000405f8,0x19,param_1); \| thunk_FUN_006f` |
| kernel.c | 36372 | `uVar4 = *pbVar10 >> uVar7 & uVar8 & 1; \| if ((uVar8 & 1) != 0) { \| if (0x2f < uVar11) { \| FUN_006fb8b0(s_gpio_num_<_GPIO_TOTAL_CNT_00040ac4,` |
| kernel.c | 36496 | `uVar11 = uVar11 + 1 & 0xffff; \| } while (uVar11 < 3); \| if (*(int *)(DAT_00040eec + 0xc) != 0xffff) { \| uVar2 = FUN_006f7f62(s_GPIO_EXT_INT_` |
| kernel.c | 36550 | `uVar5 = param_1 + uVar7 * 0x10; \| if ((uVar7 < 3) && (param_1 < 0x10)) { \| if (0x2f < uVar5) { \| FUN_006fb8b0(s_gpio_index_<_GPIO_TOTAL_CNT_` |
| kernel.c | 36600 | `uVar2 = 0; \| goto LAB_00040c66; \| } \| FUN_006fb8b0(&DAT_00040f0c,s_gpio_ext_drv_c_00040a6c,0x2a9); \| } \| uVar2 = 0xff; \| local_28 = param_2;` |
| kernel.c | 36638 | `param_1 = param_1 & 0xff; \| uVar6 = param_1 + uVar5 * 0x10; \| if ((2 < uVar5) \|\| (0xf < param_1)) { \| FUN_006fb8b0(s__ic_<_GPIO_EXT_DEV_MAX_` |
| kernel.c | 36641 | `FUN_006fb8b0(s__ic_<_GPIO_EXT_DEV_MAX_CNT)_&&_(_00040f2c,s_gpio_ext_drv_c_00040a6c,0x31a); \| } \| if (0x2f < uVar6) { \| FUN_006fb8b0(s_gpio_i` |
| kernel.c | 36705 | `uVar3 = param_1 & 0xff; \| uVar5 = uVar3 + uVar4 * 0x10; \| if ((2 < uVar4) \|\| (0xf < uVar3)) { \| FUN_006fb8b0(s__ic_<_GPIO_EXT_DEV_MAX_CNT)_&` |
| kernel.c | 36710 | `} \| FUN_006fe074(0x10,DAT_00040ee4 + 0xc,&DAT_00040a54,param_1); \| if (0x2f < uVar5) { \| FUN_006fb8b0(s_gpio_index_<_GPIO_TOTAL_CNT_00040f10` |
| kernel.c | 36715 | `iVar6 = DAT_00040eec + 0x10 + uVar5 * 0xc; \| if (*(char *)(iVar6 + 2) != '\0') { \| if (*(char *)(iVar6 + 3) != '\0') { \| FUN_006fb8b0(s___s_` |
| kernel.c | 36757 | `uVar2 = param_1 >> 8; \| uVar3 = (param_1 & 0xff) + uVar2 * 0x10 & 0xff; \| if ((2 < uVar2) \|\| (0xf < (param_1 & 0xff))) { \| FUN_006fb8b0(&DAT` |
| kernel.c | 36760 | `FUN_006fb8b0(&DAT_00040f0c,s_gpio_ext_drv_c_00040a6c,0x409); \| } \| if (0x2f < uVar3) { \| FUN_006fb8b0(s_gpio_index_<_GPIO_TOTAL_CNT_00040f10` |
| kernel.c | 42214 | ` \| iVar1 = DAT_0004db54; \| if (0x5d < param_1) { \| FUN_006fb8b0(s_id_<_GPIO_PROD_ID_MAX_0004db64,s_gpio_prod_c_0004db58,0x8c8); \| } \| puVar2` |
| kernel.c | 42520 | ` \| iVar1 = DAT_0004e0c8; \| if (param_1 == (uint *)0x0) { \| FUN_006fb8b0(s_PNULL____cfg_info_ptr_0004e0cc,s_gpio_prod_c_0004db58,0x8ee); \| } ` |
| kernel.c | 42523 | `FUN_006fb8b0(s_PNULL____cfg_info_ptr_0004e0cc,s_gpio_prod_c_0004db58,0x8ee); \| } \| if (0x5d < *param_1) { \| FUN_006fb8b0(s_cfg_info_ptr_>gpi` |
| kernel.c | 42529 | `if (*(uint *)(iVar1 + *param_1 * 0x10) != *param_1) { \| iVar3 = DAT_0004e110 + 1; \| } \| FUN_006fe074(0x10,iVar3,s_headset__GPIO_SentHeadsetI` |
| kernel.c | 42551 | `undefined4 *puVar1; \| undefined4 uVar2; \|  \| FUN_006fdf4a(s_zgt_GPIO_HeadsetRecogPowerOn_0004e114); \| FUN_0004d94a(1); \| FUN_006f7a2a(0x14);` |
| kernel.c | 42611 | `} \| else { \| if (iVar4 != 3) { \| FUN_006fe074(0x10,DAT_0004e110 + -3,s_GPIO_HeadsetButtonIntHandler_gpi_0004e070 + 0x38); \| return 0; \| } \| ` |
| kernel.c | 42628 | `return 1; \| } \| if (iVar7 != 3) { \| FUN_006fe074(0x10,DAT_0004e110 + -2,s_headset__GPIO_SentHeadsetIsConne_0004db98 + 0x30); \| return 1; \| }` |
| kernel.c | 42632 | `return 1; \| } \| uVar5 = FUN_002b9e5c(*(undefined2 *)(iVar3 + 10)); \| FUN_006fdf4a(s_GPIO_PROD_RegGpio_EICA_DBNC_num__0004e134,*(undefined2 *` |
| kernel.c | 42705 | `uVar17 = 0; \| iVar4 = FUN_0003d0ec(); \| iVar10 = DAT_0004e0c8; \| FUN_006fe074(0x10,DAT_0004e110 + -1,s_GPIO_HeadsetButtonIntHandler_gpi_0004` |
| kernel.c | 42728 | `piVar6[3] = iVar18; \| } \| else { \| uVar7 = FUN_006fd49c(s_GPIO_full_table__d_line_has_been_0004e454); \| thunk_FUN_006fb59e(&DAT_0004e480,s_g` |
| kernel.c | 42729 | `} \| else { \| uVar7 = FUN_006fd49c(s_GPIO_full_table__d_line_has_been_0004e454); \| thunk_FUN_006fb59e(&DAT_0004e480,s_gpio_prod_c_0004db58,0x` |
| kernel.c | 42732 | `thunk_FUN_006fb59e(&DAT_0004e480,s_gpio_prod_c_0004db58,0x8ab,uVar7); \| } \| if (uVar17 == 0x5d) { \| uVar7 = FUN_006fd49c(s_GPIO_cus_cfg_tabl` |
| kernel.c | 42733 | `} \| if (uVar17 == 0x5d) { \| uVar7 = FUN_006fd49c(s_GPIO_cus_cfg_table_has_not_end_f_0004e484); \| thunk_FUN_006fb59e(&DAT_0004e480,s_gpio_pro` |
| kernel.c | 42767 | `} while (uVar16 < 0x30); \| iVar4 = puVar5[2]; \| if (iVar4 == 0) { \| FUN_006fb8b0(s_PNULL____cus_gpio_tab_00040a7c,s_gpio_ext_drv_c_00040a6c,` |
| kernel.c | 42775 | `if (uVar2 == 0xffff) break; \| uVar16 = (uint)(uVar2 >> 8) * 0x10 + (uVar2 & 0xff); \| if (0x2f < uVar16) { \| FUN_006fb8b0(s_GPIO_TOTAL_CNT_>_` |
| kernel.c | 42806 | `} while (uVar17 < 3); \| iVar4 = puVar5[1]; \| if (iVar4 == 0) { \| FUN_006fb8b0(s_PNULL____cus_dev_tab_00040aac,s_gpio_ext_drv_c_00040a6c,0x16` |
| kernel.c | 42918 | `FUN_000414d6(param_2); \| uVar3 = FUN_00041426(param_2); \| *param_3 = param_5; \| FUN_006fdf4a(s_GPIO_GetTCXO_DCXO_Status______d__0004e4d4,uVa` |
| kernel.c | 1266864 | `*param_1 = (int)puVar2; \| *puVar2 = (short)iVar1; \| if (iVar1 != 0x10c) { \| FUN_006fb8b0(s_sizeof_GSM_ANTENNA_SWITCH_RFGPIO_007e83c4,DAT_007` |
| kernel.c | 1266882 | `*param_13 = (int)puVar2; \| *puVar2 = (short)iVar1; \| if (iVar1 != 8) { \| FUN_006fb8b0(s_sizeof_GSM_ANTENNA_SWITCH_RFGPIO_007e83fc,DAT_007e83` |

## 10. בקר שעונים
*וודאות:* בינונית*
| קובץ | שורה | קטע קוד |
|---|---|---|
| boot0.c | 2801 | `FUN_000034f8(s___DDR_init_start_000031ce + 2); \| iVar4 = DAT_000031a4; \| iVar5 = *(int *)(DAT_000031a4 + 0x24); \| FUN_000034f8(s_sdram_clk_i` |
| boot0.c | 3575 | `undefined8 uVar6; \| undefined4 local_1c; \|  \| FUN_000034f8(s_DDR_dpll_clk_get_begin_00002a08); \| uVar2 = FUN_000030e8(); \| if (uVar2 != para` |
| boot0.c | 3578 | `FUN_000034f8(s_DDR_dpll_clk_get_begin_00002a08); \| uVar2 = FUN_000030e8(); \| if (uVar2 != param_1) { \| FUN_000034f8(s_DDR_dpll_clk_get_end_0` |
| fdl1.c | 1029 | `undefined8 uVar6; \| undefined4 local_1c; \|  \| FUN_00002fc8(s_DDR_dpll_clk_get_begin_0000139c); \| uVar2 = FUN_00001a7c(); \| if (uVar2 != para` |
| fdl1.c | 1032 | `FUN_00002fc8(s_DDR_dpll_clk_get_begin_0000139c); \| uVar2 = FUN_00001a7c(); \| if (uVar2 != param_1) { \| FUN_00002fc8(s_DDR_dpll_clk_get_end_0` |
| img_90000024.c | 11756 | ` \| bVar1 = false; \| if (DAT_0000df28 < param_1 - 1U) { \| FUN_000006e4(s__ahb_clk_>_0______ahb_clk<_10000_0000df2c,DAT_0000d000,0x76d); \| } \|` |
| kernel.c | 46675 | `FUN_006fb8b0(s_freq_type_index_<_FREQ_INDEX_MAX_000558d8,s_freq_phy_c_0005588c,0xc3); \| } \| if (iVar4 == 0) { \| FUN_006fb8b0(s_app_clk_lvl_t` |
| kernel.c | 46690 | `} \| iVar3 = FUN_00055726(uVar5); \| if (iVar3 == 0) { \| uVar2 = FUN_006fd49c(s_FREQ_PHY_DetectClkValidity_Inval_0005591c,uVar5); \| thunk_FUN_` |
| kernel.c | 46691 | `iVar3 = FUN_00055726(uVar5); \| if (iVar3 == 0) { \| uVar2 = FUN_006fd49c(s_FREQ_PHY_DetectClkValidity_Inval_0005591c,uVar5); \| thunk_FUN_006f` |
| kernel.c | 46723 | `local_24 = param_4; \| iVar1 = FUN_00055726(param_2); \| if (iVar1 == 0) { \| uVar2 = FUN_006fd49c(s_Invalid_clock_level_value___d___00055988,p` |
| kernel.c | 46724 | `iVar1 = FUN_00055726(param_2); \| if (iVar1 == 0) { \| uVar2 = FUN_006fd49c(s_Invalid_clock_level_value___d___00055988,param_2); \| thunk_FUN_0` |
| kernel.c | 46728 | `; \| } \| if (iVar5 == 0) { \| FUN_006fb8b0(s_app_clk_lvl_table_ptr____PNULL_000558fc + 4,s_freq_phy_c_0005588c,0xfa); \| } \| iVar1 = DAT_000558` |
| kernel.c | 71609 | `if (*(char *)(iVar4 + 0x4a) == '\0') { \| _DAT_20c00000 = 0x19; \| iVar5 = FUN_000853ee(&DAT_20c00000,0x80,0x80,DAT_0007f6d0, \| s_DCAM_CFG__po` |
| kernel.c | 71623 | `} while (uVar6 < 0x40); \| } \| _DAT_20c00000 = 9; \| iVar4 = FUN_000853ee(&DAT_20c00000,0,0,uVar3,s_DCAM_CFG__polling_dcam_clock_sta_0007f6ab ` |
| kernel.c | 80173 | `*(int *)(iVar2 + 0xc0) = DAT_00080fc4 + iVar3 * 0x40; \| uVar1 = DAT_00080fec; \| _DAT_20c00000 = 0x19; \| FUN_000853ee(&DAT_20c00000,0x80,0x80` |
| kernel.c | 80192 | `uVar9 = uVar9 + 1 & 0xff; \| } while (uVar9 < 2); \| _DAT_20c00000 = 9; \| FUN_000853ee(&DAT_20c00000,0,0,uVar1,s_DCAM_CFG__polling_dcam_clock_` |
| kernel.c | 216370 | `*(undefined4 *)(iVar7 + uVar5 * 4) = 0x69; \| if (*(int *)(iVar6 + uVar5 * 4) == 0) { \| uVar8 = 0; \| uVar2 = FUN_006f7df8(s_clk_stop_Timer_00` |
| kernel.c | 298367 | ` \| bVar1 = false; \| if (DAT_00211548 < param_1 - 1U) { \| FUN_006fb8b0(s__ahb_clk_>_0______ahb_clk_<__100_0021154c,s_lcd_c_002106ec,0x7fd); \|` |
| kernel.c | 494054 | `uStack_10 = DAT_0034bf90[2]; \| iVar1 = FUN_0039fce0(&local_18,iVar3 + param_1 * 4); \| if (iVar1 != 0) { \| uVar2 = FUN_006fd49c(s__s___d__TFT` |
| kernel.c | 494055 | `iVar1 = FUN_0039fce0(&local_18,iVar3 + param_1 * 4); \| if (iVar1 != 0) { \| uVar2 = FUN_006fd49c(s__s___d__TFT_clock_device_not_fou_0034bf9c,` |
| kernel.c | 494059 | `} \| iVar1 = FUN_003a0278(*(undefined4 *)(iVar3 + param_1 * 4)); \| if (iVar1 != 0) { \| uVar2 = FUN_006fd49c(s__s___d__TFT_clock_device_cannot` |
| kernel.c | 494060 | `iVar1 = FUN_003a0278(*(undefined4 *)(iVar3 + param_1 * 4)); \| if (iVar1 != 0) { \| uVar2 = FUN_006fd49c(s__s___d__TFT_clock_device_cannot_o_0` |
| kernel.c | 514977 | `} \| iVar2 = FUN_00055726(uVar4); \| if (iVar2 == 0) { \| uVar3 = FUN_006fd49c(s_Invalid_clock_level_value___d___003746b0,uVar4); \| thunk_FUN_0` |
| kernel.c | 514978 | `iVar2 = FUN_00055726(uVar4); \| if (iVar2 == 0) { \| uVar3 = FUN_006fd49c(s_Invalid_clock_level_value___d___003746b0,uVar4); \| thunk_FUN_006fb` |
| kernel.c | 535028 | `int iVar2; \|  \| if (param_2 == (int *)0x0) { \| FUN_006fb8b0(s_pClkObj____0x0_0039ff94,s_clock_c_0039ff80,0xf6); \| } \| piVar1 = DAT_0039ff90;` |
| kernel.c | 535054 | `int iVar1; \|  \| if (param_1 == 0) { \| FUN_006fb8b0(s_Name____0x0_0039ffdc,s_clock_c_0039ff80,0xc1); \| } \| if (param_2 == (int *)0x0) { \| FUN` |
| kernel.c | 535057 | `FUN_006fb8b0(s_Name____0x0_0039ffdc,s_clock_c_0039ff80,0xc1); \| } \| if (param_2 == (int *)0x0) { \| FUN_006fb8b0(s_pDevObj____0x0_0039ffe8,s_` |
| kernel.c | 535077 | `int iVar4; \|  \| if (param_1 == 0) { \| FUN_006fb8b0(s_Name____0x0_0039ffdc,s_clock_c_0039ff80,0xd9); \| } \| if (param_2 == (int *)0x0) { \| FUN` |
| kernel.c | 535080 | `FUN_006fb8b0(s_Name____0x0_0039ffdc,s_clock_c_0039ff80,0xd9); \| } \| if (param_2 == (int *)0x0) { \| FUN_006fb8b0(s_pClkObj____0x0_0039ff94,s_` |
| kernel.c | 535106 | ` \| { \| if (param_1 == (int *)0x0) { \| FUN_006fb8b0(s___0x0____thiz_003a03f6 + 2,s_clock_c_0039ff80,0x15c); \| } \| FUN_006fe074(0x10,DAT_003a0` |
| kernel.c | 535123 | ` \| { \| if (param_1 == (int *)0x0) { \| FUN_006fb8b0(s_0x0____ClkObj_003a0404,s_clock_c_0039ff80,0x2fe); \| } \| FUN_006fe074(0x10,DAT_003a03cc ` |
| kernel.c | 535149 | ` \| { \| if (param_1 == (int *)0x0) { \| FUN_006fb8b0(s___0x0____thiz_003a03f6 + 2,s_clock_c_0039ff80,0x173); \| } \| FUN_006fe074(0x10,DAT_003a0` |
| kernel.c | 713434 | `FUN_0046f466(); \| FUN_0046f4f0(); \| if ('\x02' < *DAT_0049109c) { \| FUN_006fdf4a(s_CHAN_UPDATE_PHY_CHannels_clk__en_004910c8,0); \| } \| } \| r` |
| kernel.c | 1165955 | ` \| iVar1 = DAT_0074c750; \| if (*(int *)(*(int *)(DAT_0074c750 + 0x188) + 0x40) == 0) { \| uVar2 = FUN_006fd49c(s_Function_ponit_of_rfic_set_c` |
| kernel.c | 1165956 | `iVar1 = DAT_0074c750; \| if (*(int *)(*(int *)(DAT_0074c750 + 0x188) + 0x40) == 0) { \| uVar2 = FUN_006fd49c(s_Function_ponit_of_rfic_set_clk_` |
| kernel.c | 1213348 | `} \| if (3 < bVar5) { \| uVar7 = FUN_006fd49c(DAT_0078d064,bVar5); \| thunk_FUN_006fb59e(s_dfe_pll_sel<DFE_CLK_CFG_MAX_0078d068,s_drv_rf_ic_com` |
| user.c | 202453 | `iVar5 = *(int *)(param_1 + 100); \| _DAT_20c00000 = 0x19; \| thunk_EXT_FUN_80a8b3ee \| (&DAT_20c00000,0x80,0x80,DAT_001b8ef8,s_DCAM_CFG__pollin` |
| user.c | 202496 | `} while (uVar3 < 0x3f); \| } \| _DAT_20c00000 = 9; \| thunk_EXT_FUN_80a8b3ee(&DAT_20c00000,0,0,uVar1,s_DCAM_CFG__polling_dcam_clock_sta_001b8ed` |
| user.c | 219025 | `local_28[1] = 2; \| if (param_2[4] == 0) { \| thunk_EXT_FUN_811018b0 \| (s_PNULL____ptPara_>writedataClkFun_001d7314,s_dspdata_codec_adp_c_001d` |
| user.c | 693475 | `int iVar5; \| int iVar6; \|  \| thunk_EXT_FUN_81103f4a(s_SetWorldClockToLocal_text_id___d_0084ac74,param_1); \| piVar3 = DAT_0084ac64; \| iVar2 =` |
