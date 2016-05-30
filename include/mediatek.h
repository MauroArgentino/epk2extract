#ifndef __MEDIATEK_H
#define __MEDIATEK_H
#include <stdint.h>
#include <elf.h>

#include "mfile.h"

#define MTK_PBL_MAGIC "MTK/DTV/ROMCODE/MSDCBOOT"
#define MTK_LOADER_OFF 0xA040
#define MTK_UBOOT_OFF 0x80000
#define MTK_PBL_SIZE 0x9FFF
#define MTK_LOADER_OFF 0xA040
#define MTK_UBOOT_OFF 0x80000
#define MTK_ENV_SIZE 0x20000
#define MTK_TZ_OFF 0x200 //512

void extract_mtk_1bl(MFILE *in, const char *outname);
void split_mtk_tz(MFILE *tz, const char *destdir);
MFILE *is_mtk_boot(const char *filename);
int is_elf_mem(Elf32_Ehdr * header);
MFILE *is_elf(const char *filename);

#endif