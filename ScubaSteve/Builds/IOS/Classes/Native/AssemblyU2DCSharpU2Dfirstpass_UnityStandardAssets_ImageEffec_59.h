﻿#pragma once
// UnityEngine.Shader
struct Shader_t210;
// UnityEngine.Material
struct Material_t211;
// UnityStandardAssets.ImageEffects.PostEffectsBase
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_1.h"
// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_57.h"
// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_ImageEffec_58.h"
// UnityStandardAssets.ImageEffects.TiltShift
struct TiltShift_t284  : public PostEffectsBase_t213
{
	// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode UnityStandardAssets.ImageEffects.TiltShift::mode
	int32_t ___mode_5;
	// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality UnityStandardAssets.ImageEffects.TiltShift::quality
	int32_t ___quality_6;
	// System.Single UnityStandardAssets.ImageEffects.TiltShift::blurArea
	float ___blurArea_7;
	// System.Single UnityStandardAssets.ImageEffects.TiltShift::maxBlurSize
	float ___maxBlurSize_8;
	// System.Int32 UnityStandardAssets.ImageEffects.TiltShift::downsample
	int32_t ___downsample_9;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.TiltShift::tiltShiftShader
	Shader_t210 * ___tiltShiftShader_10;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.TiltShift::tiltShiftMaterial
	Material_t211 * ___tiltShiftMaterial_11;
};
