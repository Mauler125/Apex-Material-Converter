#pragma once

typedef unsigned int uint;

struct float2
{
	float x;
	float y;
};

struct float3
{
	float x;
	float y;
	float z;
};

struct float4
{
	float x;
	float y;
	float z;
	float w;
};

struct CBufUberStatic_V15
{
	float2 c_uv1RotScaleX;
	float2 c_uv1RotScaleY;
	float2 c_uv1Translate;
	float2 c_uv2RotScaleX;
	float2 c_uv2RotScaleY;
	float2 c_uv2Translate;
	float2 c_uv3RotScaleX;
	float2 c_uv3RotScaleY;
	float2 c_uv3Translate;
	float2 c_uv4RotScaleX;
	float2 c_uv4RotScaleY;
	float2 c_uv4Translate;
	float2 c_uv5RotScaleX;
	float2 c_uv5RotScaleY;
	float2 c_uv5Translate;
	float2 c_uvDistortionIntensity;
	float2 c_uvDistortion2Intensity;
	float c_L0_scatterDistanceScale;
	float c_layerBlendRamp;
	float c_opacity;
	float c_useAlphaModulateSpecular;
	float c_alphaEdgeFadeExponent;
	float c_alphaEdgeFadeInner;
	float c_alphaEdgeFadeOuter;
	float c_useAlphaModulateEmissive;
	float c_emissiveEdgeFadeExponent;
	float c_emissiveEdgeFadeInner;
	float c_emissiveEdgeFadeOuter;
	float c_alphaDistanceFadeScale;
	float c_alphaDistanceFadeBias;
	float c_alphaTestReference;
	float c_aspectRatioMulV;
	float c_shadowBias;
	float c_shadowBiasStatic;
	float c_dofOpacityLuminanceScale;
	float c_tsaaDepthAlphaThreshold;
	float c_tsaaMotionAlphaThreshold;
	float c_tsaaMotionAlphaRamp;
	uint c_tsaaResponsiveFlag;
	float3 c_outlineColorSDF;
	float c_outlineWidthSDF;
	float3 c_shadowColorSDF;
	float c_shadowWidthSDF;
	float3 c_insideColorSDF;
	float c_outsideAlphaScalarSDF;
	float c_glitchStrength;
	float c_vertexDisplacementScale;
	float c_innerFalloffWidthSDF;
	float c_innerEdgeOffsetSDF;
	float2 c_dropShadowOffsetSDF;
	float c_normalMapEdgeWidthSDF;
	float c_shadowFalloffSDF;
	float3 c_L0_scatterAmount;
	float c_L0_scatterRatio;
	float c_L0_transmittanceIntensityScale;
	float3 c_vertexDisplacementDirection;
	float c_L0_transmittanceAmount;
	float c_L0_transmittanceDistortionAmount;
	float c_zUpBlendingMinAngleCos;
	float c_zUpBlendingMaxAngleCos;
	float c_zUpBlendingVertexAlpha;
	float3 c_L0_albedoTint;
	float c_depthBlendScalar;
	float3 c_L0_emissiveTint;
	uint c_subsurfaceMaterialID;
	float3 c_L0_perfSpecColor;
	float c_L0_perfGloss;
	float3 c_L1_albedoTint;
	float c_L1_perfGloss;
	float3 c_L1_emissiveTint;
	float3 c_L1_perfSpecColor;
	float c_splineMinPixelPercent;
	float2 c_L0_anisoSpecCosSinTheta;
	float2 c_L1_anisoSpecCosSinTheta;
	float c_L0_anisoSpecStretchAmount;
	float c_L1_anisoSpecStretchAmount;
	float c_L0_emissiveHeightFalloff;
	float c_L1_emissiveHeightFalloff;
	float c_L1_transmittanceIntensityScale;
	float c_L1_transmittanceAmount;
	float c_L1_transmittanceDistortionAmount;
	float c_L1_scatterDistanceScale;

	// This is combined into float4 c_L1_scatterAmountAndRatio in v16.
	// since the offsets are identical, we don't have to do anything
	// with these in the uber file. We can also leave them in the same
	// place in the shader itself once we get around converting those.
	float3 c_L1_scatterAmount;
	float c_L1_scatterRatio;

	// This is combined into float4 c_characterBoostTintAndFogScale in v16.
	// since the offsets are identical, we don't have to do anything
	// with these in the uber file. We can also leave them in the same
	// place in the shader itself once we get around converting those.
	float3 c_characterBoostTint;
	float c_characterBoostFogScale;

	// This is the data we should be shifting back in newer material uber data.
	// In V16 and V17, the following fields are in between c_characterBoostFogScale
	// and c_characterBoostScale:
	// 
	// - float4 c_edgeDetectOutlineColorAndAlpha
	// - float c_edgeDetectOutlineWidth
	// - float c_edgeDetectOutlineFalloffExp
	// 
	// When we do shader conversions, these either need to be removed, or moved
	// under c_characterBoostScale so that c_characterBoostScale and
	// c_characterBoostBias will be in the correct location in memory.
	float c_characterBoostScale;
	float c_characterBoostBias;

	// Both floats are always 0xffffffff, because this is padding.
	float2 c_uberStaticPadding0;
};

static_assert(sizeof(CBufUberStatic_V15) == 544, "Uber static struct V15 size mismatch!");


struct CBufUberStatic_V16
{
	float2 c_uv1RotScaleX;
	float2 c_uv1RotScaleY;
	float2 c_uv1Translate;
	float2 c_uv2RotScaleX;
	float2 c_uv2RotScaleY;
	float2 c_uv2Translate;
	float2 c_uv3RotScaleX;
	float2 c_uv3RotScaleY;
	float2 c_uv3Translate;
	float2 c_uv4RotScaleX;
	float2 c_uv4RotScaleY;
	float2 c_uv4Translate;
	float2 c_uv5RotScaleX;
	float2 c_uv5RotScaleY;
	float2 c_uv5Translate;
	float2 c_uvDistortionIntensity;
	float2 c_uvDistortion2Intensity;
	float c_L0_scatterDistanceScale;
	float c_layerBlendRamp;
	float c_opacity;
	float c_useAlphaModulateSpecular;
	float c_alphaEdgeFadeExponent;
	float c_alphaEdgeFadeInner;
	float c_alphaEdgeFadeOuter;
	float c_useAlphaModulateEmissive;
	float c_emissiveEdgeFadeExponent;
	float c_emissiveEdgeFadeInner;
	float c_emissiveEdgeFadeOuter;
	float c_alphaDistanceFadeScale;
	float c_alphaDistanceFadeBias;
	float c_alphaTestReference;
	float c_aspectRatioMulV;
	float c_shadowBias;
	float c_shadowBiasStatic;
	float c_dofOpacityLuminanceScale;
	float c_tsaaDepthAlphaThreshold;
	float c_tsaaMotionAlphaThreshold;
	float c_tsaaMotionAlphaRamp;
	uint c_tsaaResponsiveFlag;
	float4 c_outlineColorAndWidthSDF;
	float4 c_shadowColorAndWidthSDF;
	float4 c_insideColorAndOutsideAlphaScalarSDF;
	float c_glitchStrength;
	float c_vertexDisplacementScale;
	float c_innerFalloffWidthSDF;
	float c_innerEdgeOffsetSDF;
	float2 c_dropShadowOffsetSDF;
	float c_normalMapEdgeWidthSDF;
	float c_shadowFalloffSDF;
	float4 c_L0_scatterAmountAndRatio;
	float4 c_L0_transmittanceIntensityScaleAndVertexDisplacementDirection;
	float c_L0_transmittanceAmount;
	float c_L0_transmittanceDistortionAmount;
	float c_zUpBlendingMinAngleCos;
	float c_zUpBlendingMaxAngleCos;
	float4 c_zUpBlendingVertexAlphaAndL0_albedoTint;
	float4 c_depthBlendScalarAndL0_emissiveTint;
	uint c_subsurfaceMaterialID;
	float c_L0_perfSpecColorX;
	float c_L0_perfSpecColorY;
	float c_L0_perfSpecColorZ;
	float4 c_L0_perfGlossAndL1_albedoTint;
	float4 c_L1_perfGlossAndL1_emissiveTint;
	float4 c_L1_perfSpecColorAndSplineMinPixelPercent;
	float2 c_L0_anisoSpecCosSinTheta;
	float2 c_L1_anisoSpecCosSinTheta;
	float c_L0_anisoSpecStretchAmount;
	float c_L1_anisoSpecStretchAmount;
	float c_L0_emissiveHeightFalloff;
	float c_L1_emissiveHeightFalloff;
	float c_L1_transmittanceIntensityScale;
	float c_L1_transmittanceAmount;
	float c_L1_transmittanceDistortionAmount;
	float c_L1_scatterDistanceScale;
	float4 c_L1_scatterAmountAndRatio;
	float4 c_characterBoostTintAndFogScale;
	float4 c_edgeDetectOutlineColorAndAlpha;
	float c_edgeDetectOutlineWidth;
	float c_edgeDetectOutlineFalloffExp;
	float c_characterBoostScale;
	float c_characterBoostBias;
	float c_alphaErosionHardness;
	float c_thinFilmDinc;
	float c_thinFilmEta;
	float c_thinFilmFresnel0;
};

static_assert(sizeof(CBufUberStatic_V16) == 576, "Uber static struct V16 size mismatch!");


struct CBufUberStatic_V17
{
	float2 c_uv1RotScaleX;
	float2 c_uv1RotScaleY;
	float2 c_uv1Translate;
	float2 c_uv2RotScaleX;
	float2 c_uv2RotScaleY;
	float2 c_uv2Translate;
	float2 c_uv3RotScaleX;
	float2 c_uv3RotScaleY;
	float2 c_uv3Translate;
	float2 c_uv4RotScaleX;
	float2 c_uv4RotScaleY;
	float2 c_uv4Translate;
	float2 c_uv5RotScaleX;
	float2 c_uv5RotScaleY;
	float2 c_uv5Translate;
	float2 c_uvDistortionIntensity;
	float2 c_uvDistortion2Intensity;
	float c_L0_scatterDistanceScale;
	float c_layerBlendRamp;
	float c_opacity;
	float c_useAlphaModulateSpecular;
	float c_alphaEdgeFadeExponent;
	float c_alphaEdgeFadeInner;
	float c_alphaEdgeFadeOuter;
	float c_useAlphaModulateEmissive;
	float c_emissiveEdgeFadeExponent;
	float c_emissiveEdgeFadeInner;
	float c_emissiveEdgeFadeOuter;
	float c_alphaDistanceFadeScale;
	float c_alphaDistanceFadeBias;
	float c_alphaTestReference;
	float c_aspectRatioMulV;
	float c_shadowBias;
	float c_shadowBiasStatic;
	float c_dofOpacityLuminanceScale;
	float c_tsaaDepthAlphaThreshold;
	float c_tsaaMotionAlphaThreshold;
	float c_tsaaMotionAlphaRamp;
	uint c_tsaaResponsiveFlag;
	float4 c_outlineColorAndWidthSDF;
	float4 c_shadowColorAndWidthSDF;
	float4 c_insideColorAndOutsideAlphaScalarSDF;
	float c_glitchStrength;
	float c_vertexDisplacementScale;
	float c_innerFalloffWidthSDF;
	float c_innerEdgeOffsetSDF;
	float2 c_dropShadowOffsetSDF;
	float c_normalMapEdgeWidthSDF;
	float c_shadowFalloffSDF;
	float4 c_L0_scatterAmountAndRatio;
	float4 c_L0_transmittanceIntensityScaleAndVertexDisplacementDirection;
	float c_L0_transmittanceAmount;
	float c_L0_transmittanceDistortionAmount;
	float c_zUpBlendingMinAngleCos;
	float c_zUpBlendingMaxAngleCos;
	float4 c_zUpBlendingVertexAlphaAndL0_albedoTint;
	float4 c_depthBlendScalarAndL0_emissiveTint;
	uint c_subsurfaceMaterialID;
	float c_L0_perfSpecColorX;
	float c_L0_perfSpecColorY;
	float c_L0_perfSpecColorZ;
	float4 c_L0_perfGlossAndL1_albedoTint;
	float4 c_L1_perfGlossAndL1_emissiveTint;
	float4 c_L1_perfSpecColorAndSplineMinPixelPercent;
	float2 c_L0_anisoSpecCosSinTheta;
	float2 c_L1_anisoSpecCosSinTheta;
	float c_L0_anisoSpecStretchAmount;
	float c_L1_anisoSpecStretchAmount;
	float c_L0_emissiveHeightFalloff;
	float c_L1_emissiveHeightFalloff;
	float c_L1_transmittanceIntensityScale;
	float c_L1_transmittanceAmount;
	float c_L1_transmittanceDistortionAmount;
	float c_L1_scatterDistanceScale;
	float4 c_L1_scatterAmountAndRatio;
	float4 c_characterBoostTintAndFogScale;
	float4 c_edgeDetectOutlineColorAndAlpha;
	float c_edgeDetectOutlineWidth;
	float c_edgeDetectOutlineFalloffExp;
	float c_characterBoostScale;
	float c_characterBoostBias;
	float4 c_alphaErosionHardnessAndc_iridescentViewFacingColor;
	float4 c_iridescentViewFacingFalloffAndBufferPadding;
};

static_assert(sizeof(CBufUberStatic_V17) == 592, "Uber static struct V17 size mismatch!");

struct CBufSpriteCard_V15
{
	float c_sizeFactorMin;
	float c_sizeFactorMax;
	float c_sizeFactorFadeStart;
	float c_sizeFactorFadeEnd;
	float c_farFadeStart;
	float c_farFadeFactor;
	float c_fogScaleFactor;
	float c_fogColorFactor;
	float c_depthFeatherScale;
	float c_overbrightFactor;
	float c_additiveBlendWeight;
	float c_staticBufPadding0;
	float c_dof_opacity_scale;
	float c_dof_opacity_scale_threshold;
	float c_alphaDistanceFadeScale;
	float c_alphaDistanceFadeBias;
	float c_alphaTestRef;
	float c_tsaaMotionAlphaThreshold;
	float c_tsaaMotionAlphaRamp;
	uint c_tsaaResponsiveFlag;
};

static_assert(sizeof(CBufSpriteCard_V15) == 80, "Static sprite buf struct V15 size mismatch!");

struct CBufSpriteCard_V16
{
	float c_sizeFactorMin;
	float c_sizeFactorMax;
	float c_sizeFactorFadeStart;
	float c_sizeFactorFadeEnd;
	float c_farFadeStart;
	float c_farFadeFactor;
	float c_fogScaleFactor;
	float c_fogColorFactor;
	float c_depthFeatherScale;
	float c_overbrightFactor;
	float c_additiveBlendWeight;
	float c_staticBufPadding0;
	float c_dof_opacity_scale;
	float c_dof_opacity_scale_threshold;
	float c_alphaDistanceFadeScale;
	float c_alphaDistanceFadeBias;
	float c_alphaTestRef;
	float c_tsaaMotionAlphaThreshold;
	float c_tsaaMotionAlphaRamp;
	uint c_tsaaResponsiveFlag;

	// This is the new data that needs to be removed for V15.
	float2 c_uv1RotScaleX;
	float2 c_uv1RotScaleY;
	float2 c_uv1Translate;
	float2 c_uv2RotScaleX;
	float2 c_uv2RotScaleY;
	float2 c_uv2Translate;
};

static_assert(sizeof(CBufSpriteCard_V16) == 128, "Static sprite buf struct V16 size mismatch!");
