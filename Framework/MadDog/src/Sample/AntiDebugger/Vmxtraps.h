#pragma once

#include <ntddk.h>
#include "HvCore.h"

//+++++++++++++++++++++Definitions+++++++++++++++++++++++++++
// BPKNOCK backdoor
	#define FN_ENTERKDE			0x1000
	#define FN_EXITKDE			0x2000

	//#define BP_EXIT_EAX		200

#define INTR_ID_MASK		0xff
#define INTR_TYPE_MASK		( 0x7 << 8 )

#define     GET_PDE_VADDRESS(va) ((((ULONG)(va) >> 22) << 2) + PDE_BASE)
#define     GET_PTE_VADDRESS(va) ((((ULONG)(va) >> 12) << 2) + PTE_BASE)
#define     PTE_BASE        0xC0000000
#define     PDE_BASE        0xc0300000

//+++++++++++++++++++++Public Functions++++++++++++++++++++++++

/**
 * effects: Register traps in this function
 * requires: <Cpu> is valid
 */
NTSTATUS NTAPI VmxRegisterTraps (
  PCPU Cpu
);

