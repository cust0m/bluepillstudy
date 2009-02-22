#pragma once
#include <ntddk.h>
#include "VTCore.h"

//+++++++++++++++++++++Public Functions++++++++++++++++++++++++
/**
 * effects:A Default Implementation of Initialize Segment Selector.
 */
NTSTATUS NTAPI MadDog_InitializeSegmentSelector (
    SEGMENT_SELECTOR *pSegmentSelector,
    USHORT Selector,
    PUCHAR GdtBase
);

VOID NTAPI MadDog_GetCpuIdInfo (
  ULONG32 fn,
  OUT PULONG32 ret_eax,
  OUT PULONG32 ret_ebx,
  OUT PULONG32 ret_ecx,
  OUT PULONG32 ret_edx
);

VOID NTAPI MadDog_CpuidWithEcxEdx (
  IN OUT PULONG32 ret_ecx,
  IN OUT PULONG32 ret_edx
);