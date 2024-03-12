#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xB40 - 0xB08)
// Class Foliage.FoliageInstancedStaticMeshComponent
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	FMulticastInlineDelegateProperty_            OnInstanceTakePointDamage;                         // 0xB08(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnInstanceTakeRadialDamage;                        // 0xB18(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableDiscardOnLoad;                              // 0xB28(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2446[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 GenerationGuid;                                    // 0xB2C(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2447[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFoliageInstancedStaticMeshComponent* GetDefaultObj();

};

// 0x4E0 (0x538 - 0x58)
// Class Foliage.FoliageType
class UFoliageType : public UFoliageBaseType
{
public:
	struct FGuid                                 UpdateGuid;                                        // 0x58(0x10)(ConstParm, EditFixedSize, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Density;                                           // 0x68(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DensityAdjustmentFactor;                           // 0x6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bSingleInstanceModeOverrideRadius;                 // 0x74(0x1)(Edit, ConstParm, Net, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2455[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SingleInstanceModeRadius;                          // 0x78(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EFoliageScaling                   Scaling;                                           // 0x7C(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2458[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFloatInterval                        ScaleX;                                            // 0x80(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFloatInterval                        ScaleY;                                            // 0x88(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFloatInterval                        ScaleZ;                                            // 0x90(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFoliageVertexColorChannelMask        VertexColorMaskByChannel[0x4];                     // 0x98(0x30)(Edit, ExportObject, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EFoliageVertexColorMask           VertexColorMask;                                   // 0xC8(0x1)(DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2459[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        VertexColorMaskThreshold;                          // 0xCC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        VertexColorMaskInvert : 1;                         // Mask: 0x1, PropSize: 0x10xD0(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_147 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_245B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFloatInterval                        ZOffset;                                           // 0xD4(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        AlignToNormal : 1;                                 // Mask: 0x1, PropSize: 0x10xDC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        AverageNormal : 1;                                 // Mask: 0x2, PropSize: 0x10xDC(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        AverageNormalSingleComponent : 1;                  // Mask: 0x4, PropSize: 0x10xDC(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_148 : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_245C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        AlignMaxAngle;                                     // 0xE0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        RandomYaw : 1;                                     // Mask: 0x1, PropSize: 0x10xE4(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_149 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_245E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RandomPitchAngle;                                  // 0xE8(0x4)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFloatInterval                        GroundSlopeAngle;                                  // 0xEC(0x8)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFloatInterval                        Height;                                            // 0xF4(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	uint8                                        Pad_245F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          LandscapeLayers;                                   // 0x100(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinimumLayerWeight;                                // 0x110(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2461[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          ExclusionLandscapeLayers;                          // 0x118(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MinimumExclusionLayerWeight;                       // 0x128(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  LandscapeLayer;                                    // 0x12C(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst)
	uint8                                        CollisionWithWorld : 1;                            // Mask: 0x1, PropSize: 0x10x134(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_14A : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2462[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CollisionScale;                                    // 0x138(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        AverageNormalSampleCount;                          // 0x150(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2463[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBoxSphereBounds                      MeshBounds;                                        // 0x158(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               LowBoundOriginRadius;                              // 0x190(0x18)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EComponentMobility                Mobility;                                          // 0x1A8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	uint8                                        Pad_2465[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInt32Interval                        CullDistance;                                      // 0x1AC(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEnableStaticLighting : 1;                         // Mask: 0x1, PropSize: 0x10x1B4(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        CastShadow : 1;                                    // Mask: 0x2, PropSize: 0x10x1B4(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        bAffectDynamicIndirectLighting : 1;                // Mask: 0x4, PropSize: 0x10x1B4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bAffectDistanceFieldLighting : 1;                  // Mask: 0x8, PropSize: 0x10x1B4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bAutoEnableDistanceFieldLighting : 1;              // Mask: 0x10, PropSize: 0x10x1B4(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bCastDynamicShadow : 1;                            // Mask: 0x20, PropSize: 0x10x1B4(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bCastStaticShadow : 1;                             // Mask: 0x40, PropSize: 0x10x1B4(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_14B : 1;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2468[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bCastContactShadow : 1;                            // Mask: 0x1, PropSize: 0x10x1B8(0x1)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_14C : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2469[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bCastShadowAsTwoSided : 1;                         // Mask: 0x1, PropSize: 0x10x1BC(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bReceivesDecals : 1;                               // Mask: 0x2, PropSize: 0x10x1BC(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bOverrideLightMapRes : 1;                          // Mask: 0x4, PropSize: 0x10x1BC(0x1)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_14D : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_246A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EShadowCacheInvalidationBehavior  ShadowCacheInvalidationBehavior;                   // 0x1C0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_246B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        OverriddenLightMapRes;                             // 0x1C4(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ELightmapType                     LightmapType;                                      // 0x1C8(0x1)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_246D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bUseAsOccluder : 1;                                // Mask: 0x1, PropSize: 0x10x1CC(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_14E : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_246E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bVisibleInRayTracing : 1;                          // Mask: 0x1, PropSize: 0x10x1D0(0x1)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bEvaluateWorldPositionOffset : 1;                  // Mask: 0x2, PropSize: 0x10x1D0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIgnoreAutomaticBoundsWPODisableDistance : 1;      // Mask: 0x4, PropSize: 0x10x1D0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_14F : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2470[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        WorldPositionOffsetDisableDistance;                // 0x1D4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CustomDataOutDisableDistance;                      // 0x1D8(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2472[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBodyInstance                         BodyInstance;                                      // 0x1E0(0x150)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, EditConst)
	enum class EHasCustomNavigableGeometry       CustomNavigableGeometry;                           // 0x330(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLightingChannels                     LightingChannels;                                  // 0x331(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_2475[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bRenderCustomDepth : 1;                            // Mask: 0x1, PropSize: 0x10x334(0x1)(Edit, ConstParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_150 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2477[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ERendererStencilMask              CustomDepthStencilWriteMask;                       // 0x338(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2479[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CustomDepthStencilValue;                           // 0x33C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        TranslucencySortPriority;                          // 0x340(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        CollisionRadius;                                   // 0x344(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ShadeRadius;                                       // 0x348(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        NumSteps;                                          // 0x34C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        InitialSeedDensity;                                // 0x350(0x4)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AverageSpreadDistance;                             // 0x354(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SpreadVariance;                                    // 0x358(0x4)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SeedsPerStep;                                      // 0x35C(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        DistributionSeed;                                  // 0x360(0x4)(Edit, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxInitialSeedOffset;                              // 0x364(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bCanGrowInShade;                                   // 0x368(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bSpawnsInShade;                                    // 0x369(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_247C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxInitialAge;                                     // 0x36C(0x4)(Edit, BlueprintVisible, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	float                                        MaxAge;                                            // 0x370(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        OverlapPriority;                                   // 0x374(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FFloatInterval                        ProceduralScale;                                   // 0x378(0x8)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FRuntimeFloatCurve                    ScaleCurve;                                        // 0x380(0x88)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	struct FFoliageDensityFalloff                DensityFalloff;                                    // 0x408(0x90)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ChangeCount;                                       // 0x498(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyDensity : 1;                                // Mask: 0x1, PropSize: 0x10x49C(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyRadius : 1;                                 // Mask: 0x2, PropSize: 0x10x49C(0x1)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyAlignToNormal : 1;                          // Mask: 0x4, PropSize: 0x10x49C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyRandomYaw : 1;                              // Mask: 0x8, PropSize: 0x10x49C(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyScaling : 1;                                // Mask: 0x10, PropSize: 0x10x49C(0x1)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyScaleX : 1;                                 // Mask: 0x20, PropSize: 0x10x49C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyScaleY : 1;                                 // Mask: 0x40, PropSize: 0x10x49C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyScaleZ : 1;                                 // Mask: 0x80, PropSize: 0x10x49C(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyRandomPitchAngle : 1;                       // Mask: 0x1, PropSize: 0x10x49D(0x1)(Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyGroundSlope : 1;                            // Mask: 0x2, PropSize: 0x10x49D(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyHeight : 1;                                 // Mask: 0x4, PropSize: 0x10x49D(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyLandscapeLayers : 1;                        // Mask: 0x8, PropSize: 0x10x49D(0x1)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyZOffset : 1;                                // Mask: 0x10, PropSize: 0x10x49D(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyCollisionWithWorld : 1;                     // Mask: 0x20, PropSize: 0x10x49D(0x1)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyVertexColorMask : 1;                        // Mask: 0x40, PropSize: 0x10x49D(0x1)(EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bEnableDensityScaling : 1;                         // Mask: 0x80, PropSize: 0x10x49D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEnableDiscardOnLoad : 1;                          // Mask: 0x1, PropSize: 0x10x49E(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEnableCullDistanceScaling : 1;                    // Mask: 0x2, PropSize: 0x10x49E(0x1)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_153 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_248B[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class URuntimeVirtualTexture*>        RuntimeVirtualTextures;                            // 0x4A0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        VirtualTextureCullMips;                            // 0x4B0(0x4)(Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                      // 0x4B4(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_248D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        StartCullDistance;                                 // 0x4B8(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        EndCullDistance;                                   // 0x4BC(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                AttachedComponentClass;                            // 0x4C0(0x8)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                DestroyedMeshActorClass;                           // 0x4C8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UStaticMesh*                           TreeStumpMesh;                                     // 0x4D0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class USoundBase*                            OverrideTreeHarvestSound;                          // 0x4D8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class USoundBase*                            OverrideTreeGroundImpactSound;                     // 0x4E0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DistanceAlongTreeToSpawnImpactSound;               // 0x4E8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        OverrideWalkableFloorZ;                            // 0x4EC(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PlayerOverrideWalkableFloorZ;                      // 0x4F0(0x4)(BlueprintVisible, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsFallingTree : 1;                                // Mask: 0x1, PropSize: 0x10x4F4(0x1)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bInstanceRequiresPhysXCollision : 1;               // Mask: 0x2, PropSize: 0x10x4F4(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bReplicateThisComponent : 1;                       // Mask: 0x4, PropSize: 0x10x4F4(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDontScaleAttachedComponent : 1;                   // Mask: 0x8, PropSize: 0x10x4F4(0x1)(Edit, ConstParm, EditFixedSize, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_154 : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2497[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            OverrideDestructionMaterials;                      // 0x4F8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                DamageFXActorToSpawn;                              // 0x508(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        AttachedComponentScaleFactor;                      // 0x510(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MinScaleForAttachedComponent;                      // 0x514(0x4)(ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxScaleForAttachedComponent;                      // 0x518(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ObjectLayer;                                       // 0x51C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        DisplayOrder;                                      // 0x520(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        LowEnd_StartCullDistance;                          // 0x524(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        LowEnd_EndCullDistance;                            // 0x528(0x4)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxClusterRadius;                                  // 0x52C(0x4)(Edit, ExportObject, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MaxInstancesPerCluster;                            // 0x530(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bMapCheckIgnoreLargeCullDistance : 1;              // Mask: 0x1, PropSize: 0x10x534(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24A0[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFoliageType* GetDefaultObj();

	enum class ECollisionResponse GetResponseToChannel();
};

// 0x18 (0x550 - 0x538)
// Class Foliage.FoliageType_Actor
class UFoliageType_Actor : public UFoliageType
{
public:
	class UClass*                                ActorClass;                                        // 0x538(0x8)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         bShouldAttachToBaseComponent;                      // 0x540(0x1)(Net, EditFixedSize, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bStaticMeshOnly;                                   // 0x541(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24A6[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                StaticMeshOnlyComponentClass;                      // 0x548(0x8)(ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UFoliageType_Actor* GetDefaultObj();

};

// 0x30 (0x568 - 0x538)
// Class Foliage.FoliageType_InstancedStaticMesh
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	class UStaticMesh*                           Mesh;                                              // 0x538(0x8)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x540(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class UMaterialInterface*>            NaniteOverrideMaterials;                           // 0x550(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                ComponentClass;                                    // 0x560(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UFoliageType_InstancedStaticMesh* GetDefaultObj();

};

// 0x60 (0x530 - 0x4D0)
// Class Foliage.InstancedFoliageActor
class AInstancedFoliageActor : public AISMPartitionActor
{
public:
	uint8                                        Pad_24BD[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        BaseMeshLookup;                                    // 0x520(0x10)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AInstancedFoliageActor* GetDefaultObj();

	class AInstancedFoliageActor* BPGetInstancedFoliageActorForCurrentLevel();
	TArray<class AStaticMeshActor*> BPConvertStaticMeshActorsToFoliage(const TArray<class AStaticMeshActor*>& ConvertedActors);
};

// 0x10 (0x770 - 0x760)
// Class Foliage.InteractiveFoliageComponent
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	uint8                                        Pad_24BF[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInteractiveFoliageComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Foliage.FoliageStatistics
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFoliageStatistics* GetDefaultObj();

	int32 FoliageOverlappingSphereCount(class UObject** WorldContextObject, class UStaticMesh** StaticMesh, const struct FVector& CenterPosition, float Radius);
	void FoliageOverlappingBoxTransforms(class UObject** WorldContextObject, class UStaticMesh** StaticMesh, struct FBox* Box, const TArray<struct FTransform>& OutTransforms);
	int32 FoliageOverlappingBoxCount(class UObject** WorldContextObject, class UStaticMesh** StaticMesh, struct FBox* Box);
};

// 0x8 (0xB10 - 0xB08)
// Class Foliage.GrassInstancedStaticMeshComponent
class UGrassInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	uint8                                        Pad_24D6[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGrassInstancedStaticMeshComponent* GetDefaultObj();

};

// 0x90 (0x560 - 0x4D0)
// Class Foliage.InteractiveFoliageActor
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                     CapsuleComponent;                                  // 0x4D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, GlobalConfig)
	struct FVector                               TouchingActorEntryPosition;                        // 0x4D8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               FoliageVelocity;                                   // 0x4F0(0x18)(ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               FoliageForce;                                      // 0x508(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               FoliagePosition;                                   // 0x520(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FoliageDamageImpulseScale;                         // 0x538(0x4)(ExportObject, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FoliageTouchImpulseScale;                          // 0x53C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FoliageStiffness;                                  // 0x540(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FoliageStiffnessQuadratic;                         // 0x544(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FoliageDamping;                                    // 0x548(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxDamageImpulse;                                  // 0x54C(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxTouchImpulse;                                   // 0x550(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxForce;                                          // 0x554(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Mass;                                              // 0x558(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_24ED[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AInteractiveFoliageActor* GetDefaultObj();

	bool CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, const struct FHitResult& OverlapInfo);
};

// 0x98 (0x5A8 - 0x510)
// Class Foliage.ProceduralFoliageBlockingVolume
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*              ProceduralFoliageVolume;                           // 0x510(0x8)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig)
	struct FFoliageDensityFalloff                DensityFalloff;                                    // 0x518(0x90)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AProceduralFoliageBlockingVolume* GetDefaultObj();

};

// 0x28 (0xE0 - 0xB8)
// Class Foliage.ProceduralFoliageComponent
class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*             FoliageSpawner;                                    // 0xB8(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	float                                        TileOverlap;                                       // 0xC0(0x4)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_24F0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AVolume*                               SpawningVolume;                                    // 0xC8(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 ProceduralGuid;                                    // 0xD0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UProceduralFoliageComponent* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class Foliage.ProceduralFoliageSpawner
class UProceduralFoliageSpawner : public UObject
{
public:
	int32                                        RandomSeed;                                        // 0x28(0x4)(Edit, BlueprintReadOnly, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        TileSize;                                          // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference)
	int32                                        NumUniqueTiles;                                    // 0x30(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MinimumQuadTreeSize;                               // 0x34(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24F5[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FFoliageTypeObject>            FoliageTypes;                                      // 0x40(0x10)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_24F7[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProceduralFoliageSpawner* GetDefaultObj();

	void Simulate(int32 NumSteps);
};

// 0x148 (0x170 - 0x28)
// Class Foliage.ProceduralFoliageTile
class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*             FoliageSpawner;                                    // 0x28(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_24F9[0xA0];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<struct FProceduralFoliageInstance>    InstancesArray;                                    // 0xD0(0x10)(Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24FA[0x90];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProceduralFoliageTile* GetDefaultObj();

};

// 0x10 (0x520 - 0x510)
// Class Foliage.ProceduralFoliageVolume
class AProceduralFoliageVolume : public AVolume
{
public:
	uint8                                        Pad_24FC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UProceduralFoliageComponent*           ProceduralComponent;                               // 0x518(0x8)(ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AProceduralFoliageVolume* GetDefaultObj();

};

}


