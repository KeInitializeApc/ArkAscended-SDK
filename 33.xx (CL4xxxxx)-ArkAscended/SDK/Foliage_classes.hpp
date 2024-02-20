#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xB50 - 0xB10)
// Class Foliage.FoliageInstancedStaticMeshComponent
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	FMulticastInlineDelegateProperty_            OnInstanceTakePointDamage;                         // 0xB10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnInstanceTakeRadialDamage;                        // 0xB20(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableDiscardOnLoad;                              // 0xB30(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E37[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 GenerationGuid;                                    // 0xB34(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E38[0xC];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFoliageInstancedStaticMeshComponent* GetDefaultObj();

};

// 0x4E0 (0x538 - 0x58)
// Class Foliage.FoliageType
class UFoliageType : public UFoliageBaseType
{
public:
	struct FGuid                                 UpdateGuid;                                        // 0x58(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        Density;                                           // 0x68(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DensityAdjustmentFactor;                           // 0x6C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0x70(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bSingleInstanceModeOverrideRadius;                 // 0x74(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E3F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SingleInstanceModeRadius;                          // 0x78(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EFoliageScaling                   Scaling;                                           // 0x7C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E40[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFloatInterval                        ScaleX;                                            // 0x80(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFloatInterval                        ScaleY;                                            // 0x88(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFloatInterval                        ScaleZ;                                            // 0x90(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFoliageVertexColorChannelMask        VertexColorMaskByChannel[0x4];                     // 0x98(0x30)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EFoliageVertexColorMask           VertexColorMask;                                   // 0xC8(0x1)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E43[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        VertexColorMaskThreshold;                          // 0xCC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        VertexColorMaskInvert : 1;                         // Mask: 0x1, PropSize: 0x10xD0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_FB : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E44[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFloatInterval                        ZOffset;                                           // 0xD4(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        AlignToNormal : 1;                                 // Mask: 0x1, PropSize: 0x10xDC(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        AverageNormal : 1;                                 // Mask: 0x2, PropSize: 0x10xDC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        AverageNormalSingleComponent : 1;                  // Mask: 0x4, PropSize: 0x10xDC(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_FC : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E45[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        AlignMaxAngle;                                     // 0xE0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        RandomYaw : 1;                                     // Mask: 0x1, PropSize: 0x10xE4(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_FD : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E46[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RandomPitchAngle;                                  // 0xE8(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FFloatInterval                        GroundSlopeAngle;                                  // 0xEC(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FFloatInterval                        Height;                                            // 0xF4(0x8)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	uint8                                        Pad_1E48[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          LandscapeLayers;                                   // 0x100(0x10)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinimumLayerWeight;                                // 0x110(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E49[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          ExclusionLandscapeLayers;                          // 0x118(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        MinimumExclusionLayerWeight;                       // 0x128(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FName                                  LandscapeLayer;                                    // 0x12C(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        CollisionWithWorld : 1;                            // Mask: 0x1, PropSize: 0x10x134(0x1)(Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_FE : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E4A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CollisionScale;                                    // 0x138(0x18)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        AverageNormalSampleCount;                          // 0x150(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E4B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBoxSphereBounds                      MeshBounds;                                        // 0x158(0x38)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               LowBoundOriginRadius;                              // 0x190(0x18)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EComponentMobility                Mobility;                                          // 0x1A8(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst)
	uint8                                        Pad_1E4C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInt32Interval                        CullDistance;                                      // 0x1AC(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEnableStaticLighting : 1;                         // Mask: 0x1, PropSize: 0x10x1B4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        CastShadow : 1;                                    // Mask: 0x2, PropSize: 0x10x1B4(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        bAffectDynamicIndirectLighting : 1;                // Mask: 0x4, PropSize: 0x10x1B4(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        bAffectDistanceFieldLighting : 1;                  // Mask: 0x8, PropSize: 0x10x1B4(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        bAutoEnableDistanceFieldLighting : 1;              // Mask: 0x10, PropSize: 0x10x1B4(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bCastDynamicShadow : 1;                            // Mask: 0x20, PropSize: 0x10x1B4(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        bCastStaticShadow : 1;                             // Mask: 0x40, PropSize: 0x10x1B4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_100 : 1;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E50[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bCastContactShadow : 1;                            // Mask: 0x1, PropSize: 0x10x1B8(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_101 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E51[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bCastShadowAsTwoSided : 1;                         // Mask: 0x1, PropSize: 0x10x1BC(0x1)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        bReceivesDecals : 1;                               // Mask: 0x2, PropSize: 0x10x1BC(0x1)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        bOverrideLightMapRes : 1;                          // Mask: 0x4, PropSize: 0x10x1BC(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_102 : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E54[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EShadowCacheInvalidationBehavior  ShadowCacheInvalidationBehavior;                   // 0x1C0(0x1)(ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E55[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        OverriddenLightMapRes;                             // 0x1C4(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ELightmapType                     LightmapType;                                      // 0x1C8(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E56[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bUseAsOccluder : 1;                                // Mask: 0x1, PropSize: 0x10x1CC(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_104 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E59[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bVisibleInRayTracing : 1;                          // Mask: 0x1, PropSize: 0x10x1D0(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        bEvaluateWorldPositionOffset : 1;                  // Mask: 0x2, PropSize: 0x10x1D0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIgnoreAutomaticBoundsWPODisableDistance : 1;      // Mask: 0x4, PropSize: 0x10x1D0(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_106 : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E5C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        WorldPositionOffsetDisableDistance;                // 0x1D4(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CustomDataOutDisableDistance;                      // 0x1D8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E5D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBodyInstance                         BodyInstance;                                      // 0x1E0(0x150)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	enum class EHasCustomNavigableGeometry       CustomNavigableGeometry;                           // 0x330(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FLightingChannels                     LightingChannels;                                  // 0x331(0x1)(Net, Parm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_1E60[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bRenderCustomDepth : 1;                            // Mask: 0x1, PropSize: 0x10x334(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_108 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E63[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ERendererStencilMask              CustomDepthStencilWriteMask;                       // 0x338(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E64[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CustomDepthStencilValue;                           // 0x33C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	int32                                        TranslucencySortPriority;                          // 0x340(0x4)(Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	float                                        CollisionRadius;                                   // 0x344(0x4)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ShadeRadius;                                       // 0x348(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        NumSteps;                                          // 0x34C(0x4)(BlueprintVisible, ExportObject, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        InitialSeedDensity;                                // 0x350(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        AverageSpreadDistance;                             // 0x354(0x4)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        SpreadVariance;                                    // 0x358(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        SeedsPerStep;                                      // 0x35C(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        DistributionSeed;                                  // 0x360(0x4)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxInitialSeedOffset;                              // 0x364(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCanGrowInShade;                                   // 0x368(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSpawnsInShade;                                    // 0x369(0x1)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1E67[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxInitialAge;                                     // 0x36C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        MaxAge;                                            // 0x370(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        OverlapPriority;                                   // 0x374(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FFloatInterval                        ProceduralScale;                                   // 0x378(0x8)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FRuntimeFloatCurve                    ScaleCurve;                                        // 0x380(0x88)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FFoliageDensityFalloff                DensityFalloff;                                    // 0x408(0x90)(OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        ChangeCount;                                       // 0x498(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ReapplyDensity : 1;                                // Mask: 0x1, PropSize: 0x10x49C(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ReapplyRadius : 1;                                 // Mask: 0x2, PropSize: 0x10x49C(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ReapplyAlignToNormal : 1;                          // Mask: 0x4, PropSize: 0x10x49C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ReapplyRandomYaw : 1;                              // Mask: 0x8, PropSize: 0x10x49C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ReapplyScaling : 1;                                // Mask: 0x10, PropSize: 0x10x49C(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ReapplyScaleX : 1;                                 // Mask: 0x20, PropSize: 0x10x49C(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ReapplyScaleY : 1;                                 // Mask: 0x40, PropSize: 0x10x49C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ReapplyScaleZ : 1;                                 // Mask: 0x80, PropSize: 0x10x49C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ReapplyRandomPitchAngle : 1;                       // Mask: 0x1, PropSize: 0x10x49D(0x1)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ReapplyGroundSlope : 1;                            // Mask: 0x2, PropSize: 0x10x49D(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ReapplyHeight : 1;                                 // Mask: 0x4, PropSize: 0x10x49D(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ReapplyLandscapeLayers : 1;                        // Mask: 0x8, PropSize: 0x10x49D(0x1)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ReapplyZOffset : 1;                                // Mask: 0x10, PropSize: 0x10x49D(0x1)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ReapplyCollisionWithWorld : 1;                     // Mask: 0x20, PropSize: 0x10x49D(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ReapplyVertexColorMask : 1;                        // Mask: 0x40, PropSize: 0x10x49D(0x1)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bEnableDensityScaling : 1;                         // Mask: 0x80, PropSize: 0x10x49D(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEnableDiscardOnLoad : 1;                          // Mask: 0x1, PropSize: 0x10x49E(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEnableCullDistanceScaling : 1;                    // Mask: 0x2, PropSize: 0x10x49E(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_109 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E75[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class URuntimeVirtualTexture*>        RuntimeVirtualTextures;                            // 0x4A0(0x10)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	int32                                        VirtualTextureCullMips;                            // 0x4B0(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                      // 0x4B4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E76[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        StartCullDistance;                                 // 0x4B8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        EndCullDistance;                                   // 0x4BC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                AttachedComponentClass;                            // 0x4C0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                DestroyedMeshActorClass;                           // 0x4C8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UStaticMesh*                           TreeStumpMesh;                                     // 0x4D0(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class USoundBase*                            OverrideTreeHarvestSound;                          // 0x4D8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class USoundBase*                            OverrideTreeGroundImpactSound;                     // 0x4E0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        DistanceAlongTreeToSpawnImpactSound;               // 0x4E8(0x4)(Edit, ConstParm, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        OverrideWalkableFloorZ;                            // 0x4EC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        PlayerOverrideWalkableFloorZ;                      // 0x4F0(0x4)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bIsFallingTree : 1;                                // Mask: 0x1, PropSize: 0x10x4F4(0x1)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bInstanceRequiresPhysXCollision : 1;               // Mask: 0x2, PropSize: 0x10x4F4(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bReplicateThisComponent : 1;                       // Mask: 0x4, PropSize: 0x10x4F4(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bDontScaleAttachedComponent : 1;                   // Mask: 0x8, PropSize: 0x10x4F4(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_10D : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E7F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            OverrideDestructionMaterials;                      // 0x4F8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                DamageFXActorToSpawn;                              // 0x508(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        AttachedComponentScaleFactor;                      // 0x510(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        MinScaleForAttachedComponent;                      // 0x514(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxScaleForAttachedComponent;                      // 0x518(0x4)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        ObjectLayer;                                       // 0x51C(0x4)(Edit, Parm, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	int32                                        DisplayOrder;                                      // 0x520(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        LowEnd_StartCullDistance;                          // 0x524(0x4)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        LowEnd_EndCullDistance;                            // 0x528(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxClusterRadius;                                  // 0x52C(0x4)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        MaxInstancesPerCluster;                            // 0x530(0x4)(Edit, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bMapCheckIgnoreLargeCullDistance : 1;              // Mask: 0x1, PropSize: 0x10x534(0x1)(BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E86[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFoliageType* GetDefaultObj();

	enum class ECollisionChannel GetResponseToChannel(enum class ECollisionResponse ReturnValue);
};

// 0x18 (0x550 - 0x538)
// Class Foliage.FoliageType_Actor
class UFoliageType_Actor : public UFoliageType
{
public:
	class UClass*                                ActorClass;                                        // 0x538(0x8)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShouldAttachToBaseComponent;                      // 0x540(0x1)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bStaticMeshOnly;                                   // 0x541(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E96[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                StaticMeshOnlyComponentClass;                      // 0x548(0x8)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UFoliageType_Actor* GetDefaultObj();

};

// 0x30 (0x568 - 0x538)
// Class Foliage.FoliageType_InstancedStaticMesh
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	class UStaticMesh*                           Mesh;                                              // 0x538(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x540(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<class UMaterialInterface*>            NaniteOverrideMaterials;                           // 0x550(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                ComponentClass;                                    // 0x560(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UFoliageType_InstancedStaticMesh* GetDefaultObj();

};

// 0x60 (0x538 - 0x4D8)
// Class Foliage.InstancedFoliageActor
class AInstancedFoliageActor : public AISMPartitionActor
{
public:
	uint8                                        Pad_1EAC[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        BaseMeshLookup;                                    // 0x528(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AInstancedFoliageActor* GetDefaultObj();

	void BPGetInstancedFoliageActorForCurrentLevel(class UWorld* World, class AInstancedFoliageActor* ReturnValue);
	TArray<class AStaticMeshActor*> BPConvertStaticMeshActorsToFoliage();
};

// 0x8 (0x770 - 0x768)
// Class Foliage.InteractiveFoliageComponent
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	uint8                                        Pad_1EB0[0x8];                                     // Fixing Size Of Struct > TateDumper <

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

	struct FVector FoliageOverlappingSphereCount(float* Radius, int32 ReturnValue);
	TArray<struct FTransform> FoliageOverlappingBoxTransforms(struct FBox* Box);
	class UStaticMesh* FoliageOverlappingBoxCount(struct FBox* Box, int32 ReturnValue);
};

// 0x0 (0xB10 - 0xB10)
// Class Foliage.GrassInstancedStaticMeshComponent
class UGrassInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:

	static class UClass* StaticClass();
	static class UGrassInstancedStaticMeshComponent* GetDefaultObj();

};

// 0x90 (0x568 - 0x4D8)
// Class Foliage.InteractiveFoliageActor
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                     CapsuleComponent;                                  // 0x4D8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, SubobjectReference)
	struct FVector                               TouchingActorEntryPosition;                        // 0x4E0(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               FoliageVelocity;                                   // 0x4F8(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               FoliageForce;                                      // 0x510(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               FoliagePosition;                                   // 0x528(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        FoliageDamageImpulseScale;                         // 0x540(0x4)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        FoliageTouchImpulseScale;                          // 0x544(0x4)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        FoliageStiffness;                                  // 0x548(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        FoliageStiffnessQuadratic;                         // 0x54C(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        FoliageDamping;                                    // 0x550(0x4)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxDamageImpulse;                                  // 0x554(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxTouchImpulse;                                   // 0x558(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxForce;                                          // 0x55C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Mass;                                              // 0x560(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1ED9[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AInteractiveFoliageActor* GetDefaultObj();

	struct FHitResult CapsuleTouched(class UPrimitiveComponent* OverlappedComp);
};

// 0x98 (0x5B0 - 0x518)
// Class Foliage.ProceduralFoliageBlockingVolume
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*              ProceduralFoliageVolume;                           // 0x518(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FFoliageDensityFalloff                DensityFalloff;                                    // 0x520(0x90)(OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AProceduralFoliageBlockingVolume* GetDefaultObj();

};

// 0x28 (0xE0 - 0xB8)
// Class Foliage.ProceduralFoliageComponent
class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*             FoliageSpawner;                                    // 0xB8(0x8)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        TileOverlap;                                       // 0xC0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1EDF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AVolume*                               SpawningVolume;                                    // 0xC8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FGuid                                 ProceduralGuid;                                    // 0xD0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UProceduralFoliageComponent* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class Foliage.ProceduralFoliageSpawner
class UProceduralFoliageSpawner : public UObject
{
public:
	int32                                        RandomSeed;                                        // 0x28(0x4)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        TileSize;                                          // 0x2C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig)
	int32                                        NumUniqueTiles;                                    // 0x30(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        MinimumQuadTreeSize;                               // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EE8[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FFoliageTypeObject>            FoliageTypes;                                      // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1EE9[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProceduralFoliageSpawner* GetDefaultObj();

	int32 Simulate();
};

// 0x148 (0x170 - 0x28)
// Class Foliage.ProceduralFoliageTile
class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*             FoliageSpawner;                                    // 0x28(0x8)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1EEB[0xA0];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<struct FProceduralFoliageInstance>    InstancesArray;                                    // 0xD0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EEC[0x90];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProceduralFoliageTile* GetDefaultObj();

};

// 0x10 (0x528 - 0x518)
// Class Foliage.ProceduralFoliageVolume
class AProceduralFoliageVolume : public AVolume
{
public:
	uint8                                        Pad_1EEF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UProceduralFoliageComponent*           ProceduralComponent;                               // 0x520(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AProceduralFoliageVolume* GetDefaultObj();

};

}


