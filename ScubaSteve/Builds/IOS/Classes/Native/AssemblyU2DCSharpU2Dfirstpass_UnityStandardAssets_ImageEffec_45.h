﻿#pragma once
// UnityEngine.Texture
struct Texture_t244;
// UnityEngine.Shader
struct Shader_t210;
// UnityEngine.Material
struct Material_t211;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityStandardAssets.ImageEffects.NoiseAndScratches
struct NoiseAndScratches_t268  : public MonoBehaviour_t39
{
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndScratches::monochrome
	bool ___monochrome_2;
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndScratches::rgbFallback
	bool ___rgbFallback_3;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::grainIntensityMin
	float ___grainIntensityMin_4;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::grainIntensityMax
	float ___grainIntensityMax_5;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::grainSize
	float ___grainSize_6;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchIntensityMin
	float ___scratchIntensityMin_7;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchIntensityMax
	float ___scratchIntensityMax_8;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchFPS
	float ___scratchFPS_9;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchJitter
	float ___scratchJitter_10;
	// UnityEngine.Texture UnityStandardAssets.ImageEffects.NoiseAndScratches::grainTexture
	Texture_t244 * ___grainTexture_11;
	// UnityEngine.Texture UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchTexture
	Texture_t244 * ___scratchTexture_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndScratches::shaderRGB
	Shader_t210 * ___shaderRGB_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndScratches::shaderYUV
	Shader_t210 * ___shaderYUV_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndScratches::m_MaterialRGB
	Material_t211 * ___m_MaterialRGB_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndScratches::m_MaterialYUV
	Material_t211 * ___m_MaterialYUV_16;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchTimeLeft
	float ___scratchTimeLeft_17;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchX
	float ___scratchX_18;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchY
	float ___scratchY_19;
};
