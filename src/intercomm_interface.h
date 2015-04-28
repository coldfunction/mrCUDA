#ifndef __MRUCDA_INTERCOMM_INTERFACE__HEADER__
#define __MRCUDA_INTERCOMM_INTERFACE__HEADER__

#include <cuda_runtime.h>

#include "datatypes.h"

/**
 * Initialize a handler with a helper process.
 * @param handler output of initialized handler.
 * @param process a ptr to a helper process.
 * @return 0 on success; -1 otherwise.
 */
int mhelper_int_init(MRCUDASym_t **handler, MHelperProcess_t *process);


/* Interfaces */

void **mhelper_init_cudaRegisterFatBinary(void *fatCubin);
void **mhelper_init_cudaRegisterFatBinary_internal(MRCUDAGPU_t *mrcudaGPU, void *fatCubin);

#endif /* __MRCUDA_INTERCOMM_INTERFACE__HEADER__ */
