#include "LastWorkingModel_capi_host.h"
static LastWorkingModel_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        LastWorkingModel_host_InitializeDataMapInfo(&(root), "LastWorkingModel");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
