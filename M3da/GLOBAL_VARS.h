#pragma once
extern int gBACKGRD_COL;
extern bool gDOUBLEBUFF;
extern double gZOOM_SCL;
extern double gPT_SIZE;
extern double gND_SIZE;
extern double gLM_SIZE;
extern double gEL_SIZE;
extern double gED_SIZE;
extern double gFC_SIZE;
extern double gWP_SIZE;
extern double gBM_SIZE;
extern double gTXT_SIZE;
extern double gDIM_SCALE;
extern double gDIM_FILSZ;
extern double gDIM_OFFSZ;
extern double gTXT_HEIGHT;
extern double gDIM_RADSZ;
extern double gDIM_CVORD;
extern BOOL gDSP_CPTS;
extern BOOL gDSP_CIRS;
extern BOOL gDSP_BACK;
extern BOOL gORTHO;
extern DSP_Triad tOrient;
extern int iNoSymbols;
extern double dAveW;
extern double dAveH;
extern Symbol* pSymTable[10000];
extern int gDIM_PREC;
extern double gDIM_SIZE;
extern int gCUR_RES;
extern double gDRILL_KS; // K value for shell drilling
extern double gRIGID_MULTIPLIER; // multiplier to factor psuedo rigid elemenys K values
extern double gVSTIFF_KS;
extern double gDEF_E;
extern double gDEF_V;
extern double gDEF_DEN;
extern double gDEF_COND;
extern double gSTIFF_BDIA;
extern double gDEF_CTE;
extern double gDEF_THERM_LNK;
extern double gDEF_SOL_TOL;
extern PropTable* PropsT;
extern MatTable* MatT;
// Esp_Mod_Labels_4_27_2025_Start: Added global var for label display
extern bool gLBL_DSP_TRG;
// Esp_Mod_Labels_4_27_2025_End
