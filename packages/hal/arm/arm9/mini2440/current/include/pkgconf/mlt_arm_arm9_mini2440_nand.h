// eCos memory layout - Fri Oct 20 05:43:59 2000

// This is a generated file - do not edit

#ifndef __ASSEMBLER__
#include <cyg/infra/cyg_type.h>
#include <stddef.h>
#include <cyg/hal/s3c2440x.h>


#endif
#define CYGMEM_REGION_ram (MINI2440_SDRAM_PHYS_BASE)
#define CYGMEM_REGION_ram_SIZE (MINI2440_SDRAM_SIZE)
#define CYGMEM_REGION_ram_ATTR (CYGMEM_REGION_ATTR_R | CYGMEM_REGION_ATTR_W)

#ifndef __ASSEMBLER__
extern char CYG_LABEL_NAME (__heap1) [];
#endif
#define CYGMEM_SECTION_heap1 (CYG_LABEL_NAME (__heap1))
#define CYGMEM_SECTION_heap1_SIZE (MINI2440_SDRAM_SIZE)
