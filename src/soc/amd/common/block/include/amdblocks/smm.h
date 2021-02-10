/* SPDX-License-Identifier: GPL-2.0-only */

#include <cpu/x86/msr.h>
#include <types.h>

struct smm_relocation_params {
	msr_t tseg_base;
	msr_t tseg_mask;
};

void get_smm_info(uintptr_t *perm_smbase, size_t *perm_smsize, size_t *smm_save_state_size);
void smm_relocation_handler(int cpu, uintptr_t curr_smbase, uintptr_t staggered_smbase);
void *get_smi_source_handler(int source);
