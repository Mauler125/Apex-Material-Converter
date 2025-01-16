//=============================================================================//
// 
// Purpose: convert material uber files to version V15 to be used for R5Reloaded
// 
//=============================================================================//
#include "binstream.h"
#include "uber.h"

template <class CBufUberStatic>
static void UberConv_ConvertToV15(CIOStream& inFile, CIOStream& outFile)
{
    CBufUberStatic newStruct;
    inFile.Read(newStruct);

    outFile.Write(newStruct.c_uv1RotScaleX);
    outFile.Write(newStruct.c_uv1RotScaleY);
    outFile.Write(newStruct.c_uv1Translate);
    outFile.Write(newStruct.c_uv2RotScaleX);
    outFile.Write(newStruct.c_uv2RotScaleY);
    outFile.Write(newStruct.c_uv2Translate);
    outFile.Write(newStruct.c_uv3RotScaleX);
    outFile.Write(newStruct.c_uv3RotScaleY);
    outFile.Write(newStruct.c_uv3Translate);
    outFile.Write(newStruct.c_uv4RotScaleX);
    outFile.Write(newStruct.c_uv4RotScaleY);
    outFile.Write(newStruct.c_uv4Translate);
    outFile.Write(newStruct.c_uv5RotScaleX);
    outFile.Write(newStruct.c_uv5RotScaleY);
    outFile.Write(newStruct.c_uv5Translate);
    outFile.Write(newStruct.c_uvDistortionIntensity);
    outFile.Write(newStruct.c_uvDistortion2Intensity);
    outFile.Write(newStruct.c_L0_scatterDistanceScale);
    outFile.Write(newStruct.c_layerBlendRamp);
    outFile.Write(newStruct.c_opacity);
    outFile.Write(newStruct.c_useAlphaModulateSpecular);
    outFile.Write(newStruct.c_alphaEdgeFadeExponent);
    outFile.Write(newStruct.c_alphaEdgeFadeInner);
    outFile.Write(newStruct.c_alphaEdgeFadeOuter);
    outFile.Write(newStruct.c_useAlphaModulateEmissive);
    outFile.Write(newStruct.c_emissiveEdgeFadeExponent);
    outFile.Write(newStruct.c_emissiveEdgeFadeInner);
    outFile.Write(newStruct.c_emissiveEdgeFadeOuter);
    outFile.Write(newStruct.c_alphaDistanceFadeScale);
    outFile.Write(newStruct.c_alphaDistanceFadeBias);
    outFile.Write(newStruct.c_alphaTestReference);
    outFile.Write(newStruct.c_aspectRatioMulV);
    outFile.Write(newStruct.c_shadowBias);
    outFile.Write(newStruct.c_shadowBiasStatic);
    outFile.Write(newStruct.c_dofOpacityLuminanceScale);
    outFile.Write(newStruct.c_tsaaDepthAlphaThreshold);
    outFile.Write(newStruct.c_tsaaMotionAlphaThreshold);
    outFile.Write(newStruct.c_tsaaMotionAlphaRamp);
    outFile.Write(newStruct.c_tsaaResponsiveFlag);
    outFile.Write(newStruct.c_outlineColorAndWidthSDF);
    outFile.Write(newStruct.c_shadowColorAndWidthSDF);
    outFile.Write(newStruct.c_insideColorAndOutsideAlphaScalarSDF);
    outFile.Write(newStruct.c_glitchStrength);
    outFile.Write(newStruct.c_vertexDisplacementScale);
    outFile.Write(newStruct.c_innerFalloffWidthSDF);
    outFile.Write(newStruct.c_innerEdgeOffsetSDF);
    outFile.Write(newStruct.c_dropShadowOffsetSDF);
    outFile.Write(newStruct.c_normalMapEdgeWidthSDF);
    outFile.Write(newStruct.c_shadowFalloffSDF);
    outFile.Write(newStruct.c_L0_scatterAmountAndRatio);
    outFile.Write(newStruct.c_L0_transmittanceIntensityScaleAndVertexDisplacementDirection);
    outFile.Write(newStruct.c_L0_transmittanceAmount);
    outFile.Write(newStruct.c_L0_transmittanceDistortionAmount);
    outFile.Write(newStruct.c_zUpBlendingMinAngleCos);
    outFile.Write(newStruct.c_zUpBlendingMaxAngleCos);
    outFile.Write(newStruct.c_zUpBlendingVertexAlphaAndL0_albedoTint);
    outFile.Write(newStruct.c_depthBlendScalarAndL0_emissiveTint);
    outFile.Write(newStruct.c_subsurfaceMaterialID);
    outFile.Write(newStruct.c_L0_perfSpecColorX);
    outFile.Write(newStruct.c_L0_perfSpecColorY);
    outFile.Write(newStruct.c_L0_perfSpecColorZ);
    outFile.Write(newStruct.c_L0_perfGlossAndL1_albedoTint);
    outFile.Write(newStruct.c_L1_perfGlossAndL1_emissiveTint);
    outFile.Write(newStruct.c_L1_perfSpecColorAndSplineMinPixelPercent);
    outFile.Write(newStruct.c_L0_anisoSpecCosSinTheta);
    outFile.Write(newStruct.c_L1_anisoSpecCosSinTheta);
    outFile.Write(newStruct.c_L0_anisoSpecStretchAmount);
    outFile.Write(newStruct.c_L1_anisoSpecStretchAmount);
    outFile.Write(newStruct.c_L0_emissiveHeightFalloff);
    outFile.Write(newStruct.c_L1_emissiveHeightFalloff);
    outFile.Write(newStruct.c_L1_transmittanceIntensityScale);
    outFile.Write(newStruct.c_L1_transmittanceAmount);
    outFile.Write(newStruct.c_L1_transmittanceDistortionAmount);
    outFile.Write(newStruct.c_L1_scatterDistanceScale);
    outFile.Write(newStruct.c_L1_scatterAmountAndRatio);
    outFile.Write(newStruct.c_characterBoostTintAndFogScale);
    outFile.Write(newStruct.c_characterBoostScale);
    outFile.Write(newStruct.c_characterBoostBias);

    // The last float2 is c_uberStaticPadding0 (always marked as 0xffffffff).
    outFile.Write(-1ll);
}

template <class CBufSpriteCard>
static void UberConv_ConvertToV15_Sprite(CIOStream& inFile, CIOStream& outFile)
{
    CBufSpriteCard newStruct;
    inFile.Read(newStruct);

    outFile.Write(newStruct.c_sizeFactorMin);
    outFile.Write(newStruct.c_sizeFactorMax);
    outFile.Write(newStruct.c_sizeFactorFadeStart);
    outFile.Write(newStruct.c_sizeFactorFadeEnd);
    outFile.Write(newStruct.c_farFadeStart);
    outFile.Write(newStruct.c_farFadeFactor);
    outFile.Write(newStruct.c_fogScaleFactor);
    outFile.Write(newStruct.c_fogColorFactor);
    outFile.Write(newStruct.c_depthFeatherScale);
    outFile.Write(newStruct.c_overbrightFactor);
    outFile.Write(newStruct.c_additiveBlendWeight);
    outFile.Write(newStruct.c_staticBufPadding0);
    outFile.Write(newStruct.c_dof_opacity_scale);
    outFile.Write(newStruct.c_dof_opacity_scale_threshold);
    outFile.Write(newStruct.c_alphaDistanceFadeScale);
    outFile.Write(newStruct.c_alphaDistanceFadeBias);
    outFile.Write(newStruct.c_alphaTestRef);
    outFile.Write(newStruct.c_tsaaMotionAlphaThreshold);
    outFile.Write(newStruct.c_tsaaMotionAlphaRamp);
    outFile.Write(newStruct.c_tsaaResponsiveFlag);
}

enum UberBufferTypeAndVersion_e
{
    kInvalid = -1,

    kV16,
    kV16_Sprite,

    kV17,
};

static UberBufferTypeAndVersion_e UberConv_GetUberTypeBySize(const int64_t size)
{
    switch (size)
    {
        case sizeof(CBufUberStatic_V16) : return kV16;
        case sizeof(CBufSpriteCard_V16) : return kV16_Sprite; // v17 and v16 are the same.
        case sizeof(CBufUberStatic_V17) : return kV17;
    }

    return kInvalid;
}

static bool UberConv_HandleInput(const char* const arg)
{
    CIOStream inFile;

    if (!inFile.Open(arg, CIOStream::Mode_e::Read))
    {
        printf("Unable to open uber file \"%s\" for read!\n", arg);
        return false;
    }

    std::string outFileName(arg);
    outFileName.append("_conv");

    CIOStream outFile;

    if (!outFile.Open(outFileName.c_str(), CIOStream::Mode_e::Write))
    {
        printf("Unable to open uber file \"%s\" for write!\n", outFileName.c_str());
        return false;
    }

    printf("Converting uber file \"%s\".\n", arg);

    const int64_t size = inFile.GetSize();
    const UberBufferTypeAndVersion_e type = UberConv_GetUberTypeBySize(inFile.GetSize());

    switch (type)
    {
    case kV16:
        UberConv_ConvertToV15<CBufUberStatic_V16>(inFile, outFile);
        break;
    case kV16_Sprite:
        UberConv_ConvertToV15_Sprite<CBufSpriteCard_V16>(inFile, outFile);
        break;
    case kV17:
        UberConv_ConvertToV15<CBufUberStatic_V17>(inFile, outFile);
        break;
    default:
        printf("Received unsupported uber file with size %lld.\n", size);
        return false;
    }

    return true;
}

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        printf("invalid usage\n");
        return EXIT_FAILURE;
    }

    return UberConv_HandleInput(argv[1]) ? EXIT_SUCCESS : EXIT_FAILURE;
}
