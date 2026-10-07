# מפת חומרה ממוקדת – UNISOC UMS9117 (MVP Port)

## 1. כתובת בסיס UART לקונסולה
*וודאות:* בינונית*
| קובץ | שורה | קטע קוד |
|---|---|---|
| kernel.c | 75760 | `iVar3 = FUN_0007c744(param_1 & 0xff); \| if (iVar3 == -1) { \| FUN_006fb8b0(s_0xFFFFFFFF____uart_base_addr_0007ab20,s_sio_c_0007a1ac,0x67b); \| } \| iVar1` |
| kernel.c | 75896 | `if (uVar7 < 0xd) { \| if (iVar8 == 0) { \| FUN_006fb8b0(s_0xFFFFFFFF____uart_base_addr_0007ab20 + 0x18,s_sio_c_0007a1ac,0xb0e); \| } \| if (iVar4 == 0) {` |

## 1b. בלוק רגיסטרי בכתובת 0x20C00000
*וודאות:* בינונית*
| קובץ | שורה | קטע קוד |
|---|---|---|
| kernel.c | 50285 | `puVar1[3] = &DAT_20c00000; \| puVar7 = DAT_0005b7c4; \| _DAT_20c00000 = param_1 & 1; \| puVar1[2] = param_1; \| FUN_006fe9dc(puVar7 + 4,0x78);` |
| kernel.c | 71607 | `} \| if (*(char *)(iVar4 + 0x4a) == '\0') { \| _DAT_20c00000 = 0x19; \| iVar5 = FUN_000853ee(&DAT_20c00000,0x80,0x80,DAT_0007f6d0, \| s_DCAM_CFG__polling_` |
| kernel.c | 71622 | `} while (uVar6 < 0x40); \| } \| _DAT_20c00000 = 9; \| iVar4 = FUN_000853ee(&DAT_20c00000,0,0,uVar3,s_DCAM_CFG__polling_dcam_clock_sta_0007f6ab + 1 \| ,una` |
| kernel.c | 72088 | `*(undefined4 *)(DAT_0007f2fc + 4) = 0x100; \| *(undefined4 *)(DAT_0007f300 + 4) = 0x100; \| _DAT_20c00000 = _DAT_20c00000 \| 0x19; \| return; \| }` |
| kernel.c | 78123 | `*(undefined4 *)(DAT_0007f2fc + 4) = 0x100; \| *(undefined4 *)(DAT_0007f300 + 4) = 0x100; \| _DAT_20c00000 = _DAT_20c00000 \| 0x19; \| return; \| }` |
| kernel.c | 78196 | `} while (iVar3 < param_2); \| } \| _DAT_20c00000 = 9; \| return; \| }` |
| kernel.c | 80172 | `*(int *)(iVar2 + 0xc0) = DAT_00080fc4 + iVar3 * 0x40; \| uVar1 = DAT_00080fec; \| _DAT_20c00000 = 0x19; \| FUN_000853ee(&DAT_20c00000,0x80,0x80,DAT_00080` |
| kernel.c | 80191 | `uVar9 = uVar9 + 1 & 0xff; \| } while (uVar9 < 2); \| _DAT_20c00000 = 9; \| FUN_000853ee(&DAT_20c00000,0,0,uVar1,s_DCAM_CFG__polling_dcam_clock_sta_00080f` |

## 4. בסיס בקר הפסיקות (INTC/GIC)
*וודאות:* בינונית*
| קובץ | שורה | קטע קוד |
|---|---|---|
| boot1.c | 2691 | `((iVar2 = FUN_000057a2(local_1c,0,1,DAT_0000290c), piVar1 = DAT_0000290c, iVar2 == 0 \|\| \| (iVar2 == 4)))) { \| if ((*DAT_0000290c == s_DHTBinvalid_kern` |
| boot1.c | 2702 | `} \| else { \| pcVar3 = s_DHTBinvalid_kernel_img_magic_00002910 + 4; \| } \| FUN_00002aa8(pcVar3);` |
| cm4_a.c | 1521 | ` \| if (1 < param_1) { \| FUN_0000019c(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_00001ae8,s_sio_c_00001ac4,0x1d1); \| } \| if ((param_2 != 0xff) && (10 < param_2)` |
| cm4_a.c | 1855 | ` \| if (1 < param_1) { \| FUN_0000019c(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_00002a2c,s_sio_sync_ops_c_00002a1c,0x92); \| } \| iVar1 = DAT_00002a14;` |
| cm4_b.c | 91023 | ` \| if (1 < param_1) { \| FUN_00067ed8(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_0006bbfc,s_sio_c_0006bbd8,0x1d1); \| } \| if ((param_2 != 0xff) && (10 < param_2)` |
| cm4_b.c | 92240 | ` \| if (1 < param_1) { \| FUN_00067ed8(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_0006d73c,s_sio_sync_ops_c_0006d72c,0x92); \| } \| iVar1 = DAT_0006d724;` |
| img_90000024.c | 9618 | ` \| if (2 < param_1) { \| FUN_000006e4(s_SPI_ID_MAX_>_logic_id_0000a908,s_spi_hal_c_0000a8b0,0x11a); \| } \| iVar1 = DAT_0000a8e0;` |
| img_90000024.c | 9655 | ` \| if (2 < param_1) { \| FUN_000006e4(s_SPI_ID_MAX_>_logic_id_0000a908,s_spi_hal_c_0000a8b0,0x18c); \| } \| if (param_2 == 0) {` |
| img_90000024.c | 9664 | `} \| if (*(int *)(DAT_0000a8e0 + param_1 * 0x1c + 0xc) == 0) { \| FUN_000006e4(s_0______spi_dev_logic_id__freq_0000ad14,s_spi_hal_c_0000a8b0,400); \| } \|` |
| img_90000024.c | 9719 | `piStack_28 = param_3; \| if (2 < param_1) { \| FUN_000006e4(s_SPI_ID_MAX_>_logic_id_0000a908,s_spi_hal_c_0000a8b0,0x1ec); \| } \| if (param_3 == (int *)0x` |
| img_90000024.c | 9930 | `} \| if (*(int *)(DAT_0000a8e0 + param_1 * 0x1c + 0xc) == 0) { \| FUN_000006e4(s_0______spi_dev_logic_id__freq_0000ad14,DAT_0000b1f8,0x2e3); \| } \| iVar4` |
| img_90000024.c | 13420 | `if (((!bVar7 \|\| sVar1 == 0) \|\| (uVar3 = FUN_00012ae8(), uVar3 < *(ushort *)(iVar2 + 0x40))) \|\| \| (uVar3 = FUN_00012af0(), uVar3 < *(ushort *)(iVar2 + ` |
| kernel.c | 34844 | `iVar1 = iVar1 + 1; \| } while (iVar1 < 0x80); \| uVar2 = FUN_006fd49c(s_logicNum__d_0003f4ac,param_1); \| thunk_FUN_006fb59e(s__i_<_MAX_ISR_NUM)_0003f4c8` |
| kernel.c | 34845 | `} while (iVar1 < 0x80); \| uVar2 = FUN_006fd49c(s_logicNum__d_0003f4ac,param_1); \| thunk_FUN_006fb59e(s__i_<_MAX_ISR_NUM)_0003f4c8,s_gic_phy_c_0003f4bc` |
| kernel.c | 34873 | `iVar1 = iVar1 + 1; \| } while (iVar1 < 0x80); \| uVar2 = FUN_006fd49c(s_logicNum__d_0003f4ac,param_1); \| thunk_FUN_006fb59e(s__i_<_MAX_ISR_NUM)_0003f4c8` |
| kernel.c | 34874 | `} while (iVar1 < 0x80); \| uVar2 = FUN_006fd49c(s_logicNum__d_0003f4ac,param_1); \| thunk_FUN_006fb59e(s__i_<_MAX_ISR_NUM)_0003f4c8,s_gic_phy_c_0003f4bc` |
| kernel.c | 42954 | `if (((bVar12 \|\| sVar1 == 0) \|\| (uVar5 = FUN_0004006c(), uVar5 < *(ushort *)(iVar4 + 0x140))) \|\| \| (uVar5 = FUN_00040072(), uVar5 < *(ushort *)(iVar4 +` |
| kernel.c | 43410 | `iVar19 = local_74 - uVar8; \| } \| FUN_006fe074(0x10,DAT_0004f058,s_LCDC_lcdc_logic_size_err_width___0004e8f8 + 0x2c, \| *(undefined4 *)(iVar5 + 0x120));` |
| kernel.c | 43429 | `FUN_0003ffd6(*(undefined4 *)(iVar5 + 0x11c)); \| FUN_00040018(*(undefined4 *)(iVar5 + 0x124)); \| FUN_006fe074(0x10,DAT_0004f490,s_LCDC_lcdc_logic_size_` |
| kernel.c | 43571 | `break; \| default: \| FUN_006fe074(0x10,DAT_0004f4ac,s_LCDC_lcdc_logic_size_err_width___0004e8f8 + 0x2c,param_1); \| return 0; \| }` |
| kernel.c | 43955 | `break; \| default: \| FUN_006fe074(0x10,DAT_0004f978,s_LCDC_lcdc_logic_size_err_width___0004e8f8 + 0x2c,param_1); \| } \| *param_2 = uVar1;` |
| kernel.c | 43991 | `break; \| default: \| FUN_006fe074(0x10,DAT_0004f97c,s_LCDC_lcdc_logic_size_err_width___0004e8f8 + 0x2c,param_1); \| } \| *param_2 = uVar1;` |
| kernel.c | 46788 | `piStack_28 = param_3; \| if (2 < param_1) { \| FUN_006fb8b0(s_SPI_ID_MAX_>_logic_id_00055d3c,s_spi_hal_c_00055d30,0x1ec); \| } \| if (param_3 == (int *)0x` |
| kernel.c | 75561 | ` \| if (9 < param_1) { \| FUN_006fb8b0(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_0007a1b8,s_sio_c_0007a1ac,0x489); \| } \| iVar2 = DAT_0007a1d8 + param_1 * 0x94;` |
| kernel.c | 75586 | `uVar1 = 0; \| if (9 < param_1) { \| FUN_006fb8b0(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_0007a1b8,s_sio_c_0007a1ac,0x4c6); \| } \| iVar2 = DAT_0007a1d8 + param_` |
| kernel.c | 75975 | `uVar9 = 0; \| if (9 < param_1) { \| FUN_006fb8b0(s_port_<_MAX_LOGICAL_SIO_PORT_NUM_0007a1b8,s_sio_c_0007a1ac,0x83d); \| } \| if ((param_2 != 0xff) && (0xb` |
| kernel.c | 233903 | `if (local_a0 < local_9c) { \| uVar4 = FUN_006fd49c(s_dst_memory_is_small__001952fc); \| thunk_FUN_006fb59e(s__dst_mem_size_>__logic_size__00195314,s_lcd` |
| kernel.c | 412386 | `puVar2[0xd] = (ushort)iVar3; \| if (iVar3 != 0x2c84) { \| uVar4 = FUN_006fd49c(s_Get_RfCommon_CC0_logic_NV_len_er_002c9144,iVar3); \| thunk_FUN_006fb59e(` |
| kernel.c | 412410 | `puVar2[0xf] = (ushort)iVar3; \| if (iVar3 != 0x2338) { \| uVar4 = FUN_006fd49c(s_Get_RfCommon_dlCC1_logic_NV_len_e_002c91bc,iVar3); \| thunk_FUN_006fb59e` |
| kernel.c | 412422 | `puVar2[0x10] = (ushort)iVar3; \| if (iVar3 != 0x29a4) { \| uVar4 = FUN_006fd49c(s_Get_RfCommon_ulCC1_logic_NV_len_e_002c91f8,iVar3); \| thunk_FUN_006fb59` |
| kernel.c | 506029 | `iVar1 = iVar1 + 1; \| } while (iVar1 < 0x80); \| uVar2 = FUN_006fd49c(s_logicNum__d_0003f4ac,param_1); \| thunk_FUN_006fb59e(s__i_<_MAX_ISR_NUM)_0003f4c8` |
| kernel.c | 506030 | `} while (iVar1 < 0x80); \| uVar2 = FUN_006fd49c(s_logicNum__d_0003f4ac,param_1); \| thunk_FUN_006fb59e(s__i_<_MAX_ISR_NUM)_0003f4c8,s_gic_phy_c_0003f4bc` |
| kernel.c | 506058 | `iVar1 = iVar1 + 1; \| } while (iVar1 < 0x80); \| uVar2 = FUN_006fd49c(s_logicNum__d_0003f4ac,param_1); \| thunk_FUN_006fb59e(s__i_<_MAX_ISR_NUM)_0003f4c8` |
| kernel.c | 506059 | `} while (iVar1 < 0x80); \| uVar2 = FUN_006fd49c(s_logicNum__d_0003f4ac,param_1); \| thunk_FUN_006fb59e(s__i_<_MAX_ISR_NUM)_0003f4c8,s_gic_phy_c_0003f4bc` |
| kernel.c | 1257037 | `if (*DAT_007d9d4c == 0) { \| uVar1 = FUN_006fd49c(s_g_rf_download_params__d__W_downl_007d9d78); \| thunk_FUN_006fb59e(s_g_rf_download_params_logic_has_l` |
| kernel.c | 1266918 | `*puVar2 = (short)iVar1; \| if (iVar1 != 0x578) { \| FUN_006fb8b0(s__sizeof_GSM_MIPI_CONFIG_LOGIC_T__007e8458,DAT_007e8354,0x616); \| } \| }` |
| kernel.c | 1423715 | `if ((((param_4 == Reset) \|\| (0xff < param_1)) \|\| (FIQ < param_2)) \|\| (FIQ < param_3)) { \| FUN_006f2e88(s_PS_stack_las_rrc_as_ue_src_datab_008e1f58,0x6` |
| kernel.c | 1423722 | `if ('\x02' < *DAT_008e2f3c) { \| FUN_006f2e88(s_PS_stack_las_rrc_as_ue_src_datab_008e1f58,0x65c, \| s_EMBMS__call_CBD_GetLogicalChanne_008e2f9c,param_4,` |
| kernel.c | 1464620 | `return; \| } \| pcVar1 = s_ber_AsnIntContent_unpack__ERROR___0092ce80; \| } \| else {` |
| kernel.c | 1464623 | `} \| else { \| pcVar1 = s_ber_AsnIntContent_unpack__ERROR___0092ce40; \| } \| FUN_0093b264(pcVar1);` |
| kernel.c | 1464706 | `local_48 = uVar9; \| uVar9 = FUN_0002b3c6(&local_48, \| s_ber_AsnIntContent_unpack__ERROR___0092ce80 + iVar6 * 0xc + iVar4, \| param_3); \| uStack_40 = ex` |
| kernel.c | 1580209 | `if ((int)local_90 < 1) { \| FUN_006f2c00(0,DAT_009c2fb0 + -0x74,0xcf2,DAT_009c2fb0, \| s_logicalChannelAvailableResources_009c2f74); \| } \| uVar3 = uVar3` |
| kernel.c | 1720002 | `} \| uVar9 = *(undefined4 *)(iVar7 + 0x72c); \| FUN_006f3840(uVar9,s_LOGICAL_CHAN_SR_PROHIBIT_TIMER_00a8760c,uVar9,DAT_00a875bc,uVar4,uVar3, \| uVar2,uVa` |
| user.c | 69148 | `return; \| } \| pcVar1 = s_FAT_logic_total_sector_is_greate_00075f48; \| *param_3 = 8; \| LAB_00075da0:` |
| user.c | 69200 | `param_3[7] = iVar2; \| param_3[10] = iVar2 + iVar4; \| thunk_EXT_FUN_80a72382(s_FAT__now_logic_of_bpb_has_passed_00075e70); \| local_204 = uVar3; \| goto ` |
| user.c | 520357 | `acStack_48 = (char  [4])s_APPLICATION_00447dc4._4_4_; \| acStack_44 = (char  [4])s_APPLICATION_00447dc4._8_4_; \| local_40 = (char  [4])s_PXLOGICAL_0044` |
| user.c | 520358 | `acStack_44 = (char  [4])s_APPLICATION_00447dc4._8_4_; \| local_40 = (char  [4])s_PXLOGICAL_00447dd0._0_4_; \| acStack_3c = (char  [4])s_PXLOGICAL_00447d` |
| user.c | 520714 | `acStack_6c = (char  [4])s_APPLICATION_00447dc4._4_4_; \| acStack_68 = (char  [4])s_APPLICATION_00447dc4._8_4_; \| local_64 = (char  [4])s_PXLOGICAL_0044` |
| user.c | 520715 | `acStack_68 = (char  [4])s_APPLICATION_00447dc4._8_4_; \| local_64 = (char  [4])s_PXLOGICAL_00447dd0._0_4_; \| acStack_60 = (char  [4])s_PXLOGICAL_00447d` |
| user.c | 549938 | `if (param_1 != -0x388) { \| if (param_1 != -0x387) goto switchD_00762948_default; \| pcVar1 = s_Received_bad_client_magic_byte_s_00762f68; \| } \| }` |
| user.c | 652107 | `do { \| if (7 < iVar10) { \| thunk_EXT_FUN_81103f4a(s_____inet_pton__logic_error__00800fac); \| pcVar6 = s_internal_00800fcc; \| goto LAB_00800cdc;` |

## 5. בסיס ופרטי DRAM/LPDDR3
*וודאות:* גבוהה*
| קובץ | שורה | קטע קוד |
|---|---|---|
| boot0.c | 5012 | `} \| else { \| pcVar3 = s_dmc_lpddr3_rde_training_neg_fail_0000463c; \| } \| }` |
| boot0.c | 5016 | `} \| else { \| pcVar3 = s_dmc_lpddr3_rde_training_pos_fail_00004614; \| } \| }` |
| boot0.c | 5020 | `} \| else { \| pcVar3 = s_dmc_lpddr3_wde_training_Failed_000045f0; \| } \| FUN_000034f8(pcVar3);` |
| fdl1.c | 2810 | `} \| else { \| pcVar3 = s_dmc_lpddr3_rde_training_neg_fail_0000410c; \| } \| }` |
| fdl1.c | 2814 | `} \| else { \| pcVar3 = s_dmc_lpddr3_rde_training_pos_fail_000040e4; \| } \| }` |
| fdl1.c | 2818 | `} \| else { \| pcVar3 = s_dmc_lpddr3_wde_training_Failed_000040c0; \| } \| FUN_00002fc8(pcVar3);` |

## 6. תצוגה GC9106 ו‑LCDC
*וודאות:* גבוהה*
| קובץ | שורה | קטע קוד |
|---|---|---|
| img_90000024.c | 14663 | `if (1 < uVar2) { \| uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1); \| FUN_000006e8(s__uint32__LCDC_IRQ_NUM_>_irq_num_000` |
| img_90000024.c | 14688 | `if (1 < uVar2) { \| uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1); \| FUN_000006e8(s__uint32__LCDC_IRQ_NUM_>_irq_num_000` |
| img_90000024.c | 14736 | `if (1 < uVar2) { \| uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1); \| FUN_000006e8(s__uint32__LCDC_IRQ_NUM_>_irq_num_000` |
| img_90000024.c | 14825 | `if (1 < uVar2) { \| uVar3 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1); \| FUN_000006e8(s__uint32__LCDC_IRQ_NUM_>_irq_num_000` |
| img_90000024.c | 14851 | `if (1 < uVar3) { \| uVar4 = FUN_000006ec(s_ISP_VSP_DRV__The_interrupt_irq_t_00011e5b + 1,param_1); \| FUN_000006e8(s__uint32__LCDC_IRQ_NUM_>_irq_num_000` |
| img_90000024.c | 14907 | `if (iVar2 != 0) { \| uVar3 = FUN_000006ec(s_Register_Interrupt_of_the_LCDC_f_000123dc); \| FUN_000006e8(&DAT_00012404,s_lcdc_drv_ums9117_c_00011e20,0x18` |
| img_90000024.c | 17053 | ` \| { \| FUN_000006c8(s_GC9106_Init_00015034); \| FUN_00014a64(); \| return 0;` |
| img_90000024.c | 17065 | ` \| { \| FUN_000006c8(s_qinss_LCD__in_GC9106_EnterSleep__00015040,param_1); \| if (param_1 == 0) { \| FUN_000006c8(s_qinss_LCD__GC9106_mainlcd_id_____0001` |
| img_90000024.c | 17067 | `FUN_000006c8(s_qinss_LCD__in_GC9106_EnterSleep__00015040,param_1); \| if (param_1 == 0) { \| FUN_000006c8(s_qinss_LCD__GC9106_mainlcd_id_____00015070,*(` |

## 7. אוטובוס SPI מול המסך
*וודאות:* בינונית*
| קובץ | שורה | קטע קוד |
|---|---|---|
| img_90000024.c | 8075 | `uVar6 = FUN_000006ec(s_ctl0_0x_x_ctl1_0x_x_ctl4_0x_x_st_00008344,puVar9[2],puVar9[3], \| puVar9[6],puVar9[0xc],puVar9[0xd]); \| uVar7 = FUN_000006e8(&DA` |
| img_90000024.c | 8129 | `else { \| LAB_00008158: \| uVar7 = FUN_000006e4(&DAT_00008388,s_spi_phy_v5_c_00008378); \| } \| }` |
| img_90000024.c | 8211 | `uVar4 = FUN_000006ec(s_ctl0_0x_x_ctl1_0x_x_ctl4_0x_x_st_00008344,puVar8[2],puVar8[3], \| puVar8[6],puVar8[0xc],puVar8[0xd]); \| pcVar5 = (code *)FUN_000` |
| img_90000024.c | 8263 | `else { \| LAB_00008438: \| pcVar5 = (code *)FUN_000006e4(&DAT_00008388,s_spi_phy_v5_c_00008378); \| } \| }` |
| img_90000024.c | 8375 | `iVar1 = (uVar3 >> 3) * 0x10; \| if (piVar2[1] == 0) { \| FUN_000006e4(s_s_spi_irq_ctx_spi_rw_remain_size_000089f8,s_spi_phy_v5_c_00008378,0x33a); \| } \| ` |
| img_90000024.c | 13159 | ` \| if (1 < param_1) { \| uVar1 = FUN_000006ec(s_LCDC_AppSetCSPin_lcd_id_is_error_00010068); \| FUN_000006e8(DAT_0001008c,s_lcdc_app_c_0000fd48,0x573,uVa` |

## 8. בקר NAND, ID קריאה ECC
*וודאות:* בינונית*
| קובץ | שורה | קטע קוד |
|---|---|---|
| fdl2.c | 3346 | `iVar2 = FUN_00000c48(*(undefined4 *)(iVar4 + 0x18),&local_28); \| if (iVar2 != 0) { \| FUN_00005c74(s_fdl2_NANDCTL_ReadID_failed__0000380c); \| FUN_00003` |
| fdl2.c | 3351 | `} \| uVar1 = CONCAT11((undefined1)local_28,local_28._1_1_); \| FUN_00005c74(s_fdl2_nand_flash_ID___0x_0x__0000382c); \| iVar2 = FUN_00000218(uVar1,0); \| ` |
| fdl2.c | 3356 | `if (iVar2 == 0) { \| FUN_0000344c(*(undefined4 *)(iVar4 + 0x18)); \| FUN_00005c74(s_fdl2_not_fand_NandFlash_ID_in_Na_0000384c,local_28 & 0xff,local_28._` |
| boot0.c | 2573 | `if (iVar5 == 0) { \| uVar2 = CONCAT11((undefined1)local_3c,local_3c._1_1_); \| FUN_00001e28(s_boot0_nand_flash_ID___0x_0x__00001bbc); \| iVar5 = FUN_0000` |
| boot0.c | 2654 | `goto LAB_00001a8c; \| } \| FUN_00001e28(s_fdl2_not_fand_NandFlash_ID_in_Na_00001bf8,local_3c & 0xff,local_3c._1_1_); \| } \| else {` |
| boot0.c | 2657 | `} \| else { \| FUN_00001e28(s_boot0_read_Nand_ID_fail__00001ba0); \| } \| uVar4 = *puVar3;` |

## 9. פין מיקס ו‑ADI/PMIC
*וודאות:* בינונית*
| קובץ | שורה | קטע קוד |
|---|---|---|
| cm4_a.c | 5487 | ` \| if (0x1000 < param_1 + 0x5e9f0000) { \| func_0x0002c344(s_ADI_IS_Analogdie_reg_addr__000085b4,s_adi_phy_c_000085a8,0x67); \| } \| FUN_0000b552();` |
| cm4_a.c | 5504 | `if ((param_1 & 0x1ffff) >> 2 != uVar5 >> 0x10) { \| uVar4 = func_0x0002c334(s_ANA_Read__addr___0x_x__val___0x__000085d8,param_1,uVar5); \| func_0x0002c3` |
| cm4_a.c | 5526 | `uVar6 = 0; \| if ((undefined4 *)0x1000 < param_1 + 0x17a7c000) { \| func_0x0002c344(s_ADI_IS_Analogdie_reg_addr__000085b4,s_adi_phy_c_000085a8,0x7a); \| ` |
| cm4_b.c | 3002 | `uVar3 = 0x1576; \| LAB_00063aac: \| (*(code *)0x36f1)(0x5080,s_hw_radio_c_00005074,uVar3); \| return; \| }` |
| cm4_b.c | 90435 | ` \| if (0x1000 < param_1 + 0x5e9f0000) { \| FUN_00067ed8(s_ADI_IS_Analogdie_reg_addr__0006ab7c,s_adi_phy_c_0006ab70,0x67); \| } \| FUN_0006f6ee();` |
| cm4_b.c | 90452 | `if ((param_1 & 0x1ffff) >> 2 != uVar5 >> 0x10) { \| uVar4 = FUN_00067eac(s_ANA_Read__addr___0x_x__val___0x__0006aba0,param_1,uVar5); \| FUN_00067f26(DAT` |
| cm4_b.c | 90474 | `uVar6 = 0; \| if (&DAT_00001000 < param_1 + 0x17a7c000) { \| FUN_00067ed8(s_ADI_IS_Analogdie_reg_addr__0006ab7c,s_adi_phy_c_0006ab70,0x7a); \| } \| FUN_00` |
| boot0.c | 3059 | `uVar4 = *(uint *)(iVar1 + 0x2c); \| if (3 < (uint)(iVar3 - iVar2)) { \| FUN_00001e28(s___adi_reg_read_timeout__000022d6 + 2); \| } \| iVar3 = FUN_0000232c` |
| boot0.c | 3093 | `} \| if (3 < (uint)(iVar3 - iVar2)) { \| FUN_00001e28(s_adi_reg_write_timeout__000022f0); \| } \| iVar3 = FUN_0000232c();` |
