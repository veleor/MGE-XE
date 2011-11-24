#pragma once
#ifndef _CONFIGURATION_H_
#define _CONFIGURATION_H_

#include <basetyps.h>
#define MASK(x) (1 << x)

// MGE Generic flags
#define MGE_DISABLED_BIT		 0
#define MGE_DISABLED				MASK(MGE_DISABLED_BIT)
#define FOG_ENABLED_BIT			 1
#define FOG_ENABLED				MASK(FOG_ENABLED_BIT)
#define FPS_COUNTER_BIT			 2
#define FPS_COUNTER				MASK(FPS_COUNTER_BIT)
#define DISPLAY_MESSAGES_BIT	 3
#define DISPLAY_MESSAGES		MASK(DISPLAY_MESSAGES_BIT)
#define USE_HW_SHADER_BIT		 4
#define USE_HW_SHADER			MASK(USE_HW_SHADER_BIT)
#define NO_MW_SUNGLARE_BIT		 5
#define NO_MW_SUNGLARE			MASK(NO_MW_SUNGLARE_BIT)
#define INPUT_LAG_FIX_BIT		 6
#define INPUT_LAG_FIX			MASK(INPUT_LAG_FIX_BIT)
#define USE_MENU_CACHING_BIT		 7
#define USE_MENU_CACHING			MASK(USE_MENU_CACHING_BIT)
#define ZOOM_ASPECT_BIT			 8
#define ZOOM_ASPECT				MASK(ZOOM_ASPECT_BIT)
#define MWSE_DISABLED_BIT		 9
#define MWSE_DISABLED			MASK(MWSE_DISABLED_BIT)
#define USE_TEX_HOOKS_BIT		10
#define USE_TEX_HOOKS			MASK(USE_TEX_HOOKS_BIT)
#define SET_SHADER_VARS_BIT		11
#define SET_SHADER_VARS			MASK(SET_SHADER_VARS_BIT)
#define USE_HDR_BIT				12
#define USE_HDR					MASK(USE_HDR_BIT)
#define FPS_HOLD_BIT			13
#define FPS_HOLD				MASK(FPS_HOLD_BIT)
#define BIND_AI_TO_VIEW_BIT		14
#define BIND_AI_TO_VIEW			MASK(BIND_AI_TO_VIEW_BIT)
#define CPU_IDLE_BIT			15
#define CPU_IDLE				MASK(CPU_IDLE_BIT)
#define SHADER_DEPTH_BIT		16
#define SHADER_DEPTH			MASK(SHADER_DEPTH_BIT)
// Distant Land flags
#define USE_DISTANT_LAND_BIT	17
#define USE_DISTANT_LAND		MASK(USE_DISTANT_LAND_BIT)
#define USE_DISTANT_STATICS_BIT	18
#define USE_DISTANT_STATICS		MASK(USE_DISTANT_STATICS_BIT)
#define NO_INTERIOR_DL_BIT		19
#define NO_INTERIOR_DL			MASK(NO_INTERIOR_DL_BIT)
#define REFLECTIVE_WATER_BIT	20
#define REFLECTIVE_WATER		MASK(REFLECTIVE_WATER_BIT)
#define REFLECT_NEAR_BIT		21
#define REFLECT_NEAR			MASK(REFLECT_NEAR_BIT)
#define REFLECT_FAR_BIT			22
#define REFLECT_FAR				MASK(REFLECT_FAR_BIT)
#define NOT_USING_DL_BIT		23
#define NOT_USING_DL			MASK(NOT_USING_DL_BIT)
#define NO_MW_MGE_BLEND_BIT		24
#define NO_MW_MGE_BLEND			MASK(NO_MW_MGE_BLEND_BIT)
#define REFLECT_SKY_BIT			25
#define REFLECT_SKY				MASK(REFLECT_SKY_BIT)
#define DYNAMIC_RIPPLES_BIT		26
#define DYNAMIC_RIPPLES			MASK(DYNAMIC_RIPPLES_BIT)
#define BLUR_REFLECTIONS_BIT	27
#define BLUR_REFLECTIONS		MASK(BLUR_REFLECTIONS_BIT)
#define EXP_FOG_BIT				28
#define EXP_FOG					MASK(EXP_FOG_BIT)

#define USE_ATM_SCATTER_BIT      29
#define USE_ATM_SCATTER       MASK(USE_ATM_SCATTER_BIT)
#define USE_GRASS_BIT           30
#define USE_GRASS                  MASK(USE_GRASS_BIT)
#define USE_SHADOWS_BIT         31
#define USE_SHADOWS             MASK(USE_SHADOWS_BIT)



typedef unsigned long DWORD;
typedef unsigned char BYTE;

struct ConfigurationStruct
{
    DWORD MGEFlags;
    BYTE AALevel;
    BYTE ZBufFormat;
    BYTE VWait;
    BYTE RefreshRate;
    BYTE ScaleFilter;
    BYTE AnisoLevel;
    BYTE MipFilter;
    float LODBias;
    float ScreenFOV;
    BYTE FogMode;
    BYTE SSFormat;
    char SSDir[208];
    char SSName[32];
    BYTE SSMinNumChars;
    float ReactionSpeed;
    int StatusTimeout;
    bool Force3rdPerson;
    struct { float x, y, z; } Offset3rdPerson;
    bool CrosshairAutohide;

    struct
    {
        float zoom, rate, rateTarget;
    } Zoom;

    struct
    {
        float DrawDist;
        float ShaderModel;
        float NearStaticEnd;
        float FarStaticEnd;
        float VeryFarStaticEnd;
        float FarStaticMinSize;
        float VeryFarStaticMinSize;
        float AboveWaterFogStart;
        float AboveWaterFogEnd;
        float BelowWaterFogStart;
        float BelowWaterFogEnd;
        float InteriorFogStart;
        float InteriorFogEnd;
        float ExpFogDistMult;
        BYTE WaterWaveHeight;
        BYTE WaterCaustics;
        BYTE WaterReflect;
        float Wind[10];
        float FogD[10];
        float FgOD[10];
    } DL;

    char ShaderChain[512];

    bool LoadSettings();
};

extern ConfigurationStruct Configuration;

#endif /* _CONFIGURATION_H_ */