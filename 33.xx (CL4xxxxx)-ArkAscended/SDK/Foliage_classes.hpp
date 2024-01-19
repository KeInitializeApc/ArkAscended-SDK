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
	FMulticastInlineDelegateProperty_            OnInstanceTakePointDamage;                         // 0xB10(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnInstanceTakeRadialDamage;                        // 0xB20(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableDiscardOnLoad;                              // 0xB30(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_22E7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 GenerationGuid;                                    // 0xB34(0x10)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_22E8[0xC];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFoliageInstancedStaticMeshComponent* GetDefaultObj();

};

// 0x4E0 (0x538 - 0x58)
// Class Foliage.FoliageType
class UFoliageType : public UFoliageBaseType
{
public:
	struct FGuid                                 UpdateGuid;                                        // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Density;                                           // 0x68(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        DensityAdjustmentFactor;                           // 0x6C(0x4)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bSingleInstanceModeOverrideRadius;                 // 0x74(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_22EE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SingleInstanceModeRadius;                          // 0x78(0x4)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EFoliageScaling                   Scaling;                                           // 0x7C(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_22EF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFloatInterval                        ScaleX;                                            // 0x80(0x8)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FFloatInterval                        ScaleY;                                            // 0x88(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FFloatInterval                        ScaleZ;                                            // 0x90(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FFoliageVertexColorChannelMask        VertexColorMaskByChannel[0x4];                     // 0x98(0x30)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EFoliageVertexColorMask           VertexColorMask;                                   // 0xC8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_22F1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        VertexColorMaskThreshold;                          // 0xCC(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        VertexColorMaskInvert : 1;                         // Mask: 0x1, PropSize: 0x10xD0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1B4 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_22F3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFloatInterval                        ZOffset;                                           // 0xD4(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        AlignToNormal : 1;                                 // Mask: 0x1, PropSize: 0x10xDC(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        AverageNormal : 1;                                 // Mask: 0x2, PropSize: 0x10xDC(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        AverageNormalSingleComponent : 1;                  // Mask: 0x4, PropSize: 0x10xDC(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1B5 : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_22F5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        AlignMaxAngle;                                     // 0xE0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        RandomYaw : 1;                                     // Mask: 0x1, PropSize: 0x10xE4(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1B6 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_22F7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RandomPitchAngle;                                  // 0xE8(0x4)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFloatInterval                        GroundSlopeAngle;                                  // 0xEC(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFloatInterval                        Height;                                            // 0xF4(0x8)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	uint8                                        Pad_22F8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          LandscapeLayers;                                   // 0x100(0x10)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinimumLayerWeight;                                // 0x110(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_22FB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          ExclusionLandscapeLayers;                          // 0x118(0x10)(BlueprintVisible, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MinimumExclusionLayerWeight;                       // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  LandscapeLayer;                                    // 0x12C(0x8)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        CollisionWithWorld : 1;                            // Mask: 0x1, PropSize: 0x10x134(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1B7 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_22FE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CollisionScale;                                    // 0x138(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int32                                        AverageNormalSampleCount;                          // 0x150(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2300[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBoxSphereBounds                      MeshBounds;                                        // 0x158(0x38)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               LowBoundOriginRadius;                              // 0x190(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EComponentMobility                Mobility;                                          // 0x1A8(0x1)(Parm, OutParm, ZeroConstructor, Transient, EditConst)
	uint8                                        Pad_2301[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInt32Interval                        CullDistance;                                      // 0x1AC(0x8)(ConstParm, ExportObject, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEnableStaticLighting : 1;                         // Mask: 0x1, PropSize: 0x10x1B4(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        CastShadow : 1;                                    // Mask: 0x2, PropSize: 0x10x1B4(0x1)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	uint8                                        bAffectDynamicIndirectLighting : 1;                // Mask: 0x4, PropSize: 0x10x1B4(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAffectDistanceFieldLighting : 1;                  // Mask: 0x8, PropSize: 0x10x1B4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAutoEnableDistanceFieldLighting : 1;              // Mask: 0x10, PropSize: 0x10x1B4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bCastDynamicShadow : 1;                            // Mask: 0x20, PropSize: 0x10x1B4(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCastStaticShadow : 1;                             // Mask: 0x40, PropSize: 0x10x1B4(0x1)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_1B8 : 1;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2303[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bCastContactShadow : 1;                            // Mask: 0x1, PropSize: 0x10x1B8(0x1)(Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_1B9 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2304[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bCastShadowAsTwoSided : 1;                         // Mask: 0x1, PropSize: 0x10x1BC(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bReceivesDecals : 1;                               // Mask: 0x2, PropSize: 0x10x1BC(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverrideLightMapRes : 1;                          // Mask: 0x4, PropSize: 0x10x1BC(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1BA : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2305[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EShadowCacheInvalidationBehavior  ShadowCacheInvalidationBehavior;                   // 0x1C0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2307[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        OverriddenLightMapRes;                             // 0x1C4(0x4)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class ELightmapType                     LightmapType;                                      // 0x1C8(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2309[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bUseAsOccluder : 1;                                // Mask: 0x1, PropSize: 0x10x1CC(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_1BB : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_230A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bVisibleInRayTracing : 1;                          // Mask: 0x1, PropSize: 0x10x1D0(0x1)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEvaluateWorldPositionOffset : 1;                  // Mask: 0x2, PropSize: 0x10x1D0(0x1)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        bIgnoreAutomaticBoundsWPODisableDistance : 1;      // Mask: 0x4, PropSize: 0x10x1D0(0x1)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1BC : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_230B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        WorldPositionOffsetDisableDistance;                // 0x1D4(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        CustomDataOutDisableDistance;                      // 0x1D8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_230C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBodyInstance                         BodyInstance;                                      // 0x1E0(0x150)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst)
	enum class EHasCustomNavigableGeometry       CustomNavigableGeometry;                           // 0x330(0x1)(Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLightingChannels                     LightingChannels;                                  // 0x331(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst)
	uint8                                        Pad_230E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bRenderCustomDepth : 1;                            // Mask: 0x1, PropSize: 0x10x334(0x1)(Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_1BD : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_230F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ERendererStencilMask              CustomDepthStencilWriteMask;                       // 0x338(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2310[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CustomDepthStencilValue;                           // 0x33C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TranslucencySortPriority;                          // 0x340(0x4)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        CollisionRadius;                                   // 0x344(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        ShadeRadius;                                       // 0x348(0x4)(ConstParm, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        NumSteps;                                          // 0x34C(0x4)(Edit, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        InitialSeedDensity;                                // 0x350(0x4)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AverageSpreadDistance;                             // 0x354(0x4)(BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SpreadVariance;                                    // 0x358(0x4)(BlueprintVisible, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SeedsPerStep;                                      // 0x35C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        DistributionSeed;                                  // 0x360(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxInitialSeedOffset;                              // 0x364(0x4)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bCanGrowInShade;                                   // 0x368(0x1)(Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bSpawnsInShade;                                    // 0x369(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2312[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxInitialAge;                                     // 0x36C(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        MaxAge;                                            // 0x370(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        OverlapPriority;                                   // 0x374(0x4)(OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FFloatInterval                        ProceduralScale;                                   // 0x378(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FRuntimeFloatCurve                    ScaleCurve;                                        // 0x380(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FFoliageDensityFalloff                DensityFalloff;                                    // 0x408(0x90)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ChangeCount;                                       // 0x498(0x4)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyDensity : 1;                                // Mask: 0x1, PropSize: 0x10x49C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyRadius : 1;                                 // Mask: 0x2, PropSize: 0x10x49C(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyAlignToNormal : 1;                          // Mask: 0x4, PropSize: 0x10x49C(0x1)(Edit, ExportObject, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyRandomYaw : 1;                              // Mask: 0x8, PropSize: 0x10x49C(0x1)(Net, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyScaling : 1;                                // Mask: 0x10, PropSize: 0x10x49C(0x1)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyScaleX : 1;                                 // Mask: 0x20, PropSize: 0x10x49C(0x1)(BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyScaleY : 1;                                 // Mask: 0x40, PropSize: 0x10x49C(0x1)(ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyScaleZ : 1;                                 // Mask: 0x80, PropSize: 0x10x49C(0x1)(ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyRandomPitchAngle : 1;                       // Mask: 0x1, PropSize: 0x10x49D(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyGroundSlope : 1;                            // Mask: 0x2, PropSize: 0x10x49D(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyHeight : 1;                                 // Mask: 0x4, PropSize: 0x10x49D(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyLandscapeLayers : 1;                        // Mask: 0x8, PropSize: 0x10x49D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyZOffset : 1;                                // Mask: 0x10, PropSize: 0x10x49D(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyCollisionWithWorld : 1;                     // Mask: 0x20, PropSize: 0x10x49D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        ReapplyVertexColorMask : 1;                        // Mask: 0x40, PropSize: 0x10x49D(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bEnableDensityScaling : 1;                         // Mask: 0x80, PropSize: 0x10x49D(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        bEnableDiscardOnLoad : 1;                          // Mask: 0x1, PropSize: 0x10x49E(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        bEnableCullDistanceScaling : 1;                    // Mask: 0x2, PropSize: 0x10x49E(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1BE : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_231B[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class URuntimeVirtualTexture*>        RuntimeVirtualTextures;                            // 0x4A0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        VirtualTextureCullMips;                            // 0x4B0(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                      // 0x4B4(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_231F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        StartCullDistance;                                 // 0x4B8(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        EndCullDistance;                                   // 0x4BC(0x4)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UClass*                                AttachedComponentClass;                            // 0x4C0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                DestroyedMeshActorClass;                           // 0x4C8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UStaticMesh*                           TreeStumpMesh;                                     // 0x4D0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USoundBase*                            OverrideTreeHarvestSound;                          // 0x4D8(0x8)(Edit, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USoundBase*                            OverrideTreeGroundImpactSound;                     // 0x4E0(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        DistanceAlongTreeToSpawnImpactSound;               // 0x4E8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        OverrideWalkableFloorZ;                            // 0x4EC(0x4)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PlayerOverrideWalkableFloorZ;                      // 0x4F0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsFallingTree : 1;                                // Mask: 0x1, PropSize: 0x10x4F4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bInstanceRequiresPhysXCollision : 1;               // Mask: 0x2, PropSize: 0x10x4F4(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bReplicateThisComponent : 1;                       // Mask: 0x4, PropSize: 0x10x4F4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDontScaleAttachedComponent : 1;                   // Mask: 0x8, PropSize: 0x10x4F4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1C0 : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2322[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            OverrideDestructionMaterials;                      // 0x4F8(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UClass*                                DamageFXActorToSpawn;                              // 0x508(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttachedComponentScaleFactor;                      // 0x510(0x4)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MinScaleForAttachedComponent;                      // 0x514(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxScaleForAttachedComponent;                      // 0x518(0x4)(BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ObjectLayer;                                       // 0x51C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DisplayOrder;                                      // 0x520(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        LowEnd_StartCullDistance;                          // 0x524(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        LowEnd_EndCullDistance;                            // 0x528(0x4)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxClusterRadius;                                  // 0x52C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MaxInstancesPerCluster;                            // 0x530(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bMapCheckIgnoreLargeCullDistance : 1;              // Mask: 0x1, PropSize: 0x10x534(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2325[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFoliageType* GetDefaultObj();

	enum class ECollisionChannel GetResponseToChannel(enum class ECollisionResponse ReturnValue);
};

// 0x18 (0x550 - 0x538)
// Class Foliage.FoliageType_Actor
class UFoliageType_Actor : public UFoliageType
{
public:
	class UClass*                                ActorClass;                                        // 0x538(0x8)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShouldAttachToBaseComponent;                      // 0x540(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bStaticMeshOnly;                                   // 0x541(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2329[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                StaticMeshOnlyComponentClass;                      // 0x548(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UFoliageType_Actor* GetDefaultObj();

};

// 0x30 (0x568 - 0x538)
// Class Foliage.FoliageType_InstancedStaticMesh
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	class UStaticMesh*                           Mesh;                                              // 0x538(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x540(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	TArray<class UMaterialInterface*>            NaniteOverrideMaterials;                           // 0x550(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                ComponentClass;                                    // 0x560(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UFoliageType_InstancedStaticMesh* GetDefaultObj();

};

// 0x60 (0x538 - 0x4D8)
// Class Foliage.InstancedFoliageActor
class AInstancedFoliageActor : public AISMPartitionActor
{
public:
	uint8                                        Pad_232F[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        BaseMeshLookup;                                    // 0x528(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AInstancedFoliageActor* GetDefaultObj();

	class UWorld* BPGetInstancedFoliageActorForCurrentLevel(class AInstancedFoliageActor* ReturnValue);
	TArray<class AStaticMeshActor*> BPConvertStaticMeshActorsToFoliage(const TArray<class AStaticMeshActor*>& Actors);
};

// 0x8 (0x770 - 0x768)
// Class Foliage.InteractiveFoliageComponent
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	uint8                                        Pad_2330[0x8];                                     // Fixing Size Of Struct > TateDumper <

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

	struct FVector FoliageOverlappingSphereCount(class UObject* WorldContextObject, float Radius, int32 ReturnValue);
	TArray<struct FTransform> FoliageOverlappingBoxTransforms(class UObject* WorldContextObject, struct FBox* Box);
	class UStaticMesh* FoliageOverlappingBoxCount(class UObject* WorldContextObject, struct FBox* Box, int32 ReturnValue);
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
	class UCapsuleComponent*                     CapsuleComponent;                                  // 0x4D8(0x8)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               TouchingActorEntryPosition;                        // 0x4E0(0x18)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               FoliageVelocity;                                   // 0x4F8(0x18)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               FoliageForce;                                      // 0x510(0x18)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               FoliagePosition;                                   // 0x528(0x18)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FoliageDamageImpulseScale;                         // 0x540(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FoliageTouchImpulseScale;                          // 0x544(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FoliageStiffness;                                  // 0x548(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FoliageStiffnessQuadratic;                         // 0x54C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FoliageDamping;                                    // 0x550(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxDamageImpulse;                                  // 0x554(0x4)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxTouchImpulse;                                   // 0x558(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxForce;                                          // 0x55C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Mass;                                              // 0x560(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2336[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AInteractiveFoliageActor* GetDefaultObj();

	struct FHitResult CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor** Other, class UPrimitiveComponent** OtherComp, int32* OtherBodyIndex, bool* bFromSweep);
};

// 0x98 (0x5B0 - 0x518)
// Class Foliage.ProceduralFoliageBlockingVolume
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*              ProceduralFoliageVolume;                           // 0x518(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FFoliageDensityFalloff                DensityFalloff;                                    // 0x520(0x90)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AProceduralFoliageBlockingVolume* GetDefaultObj();

};

// 0x28 (0xE0 - 0xB8)
// Class Foliage.ProceduralFoliageComponent
class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*             FoliageSpawner;                                    // 0xB8(0x8)(BlueprintVisible, ExportObject, Net, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        TileOverlap;                                       // 0xC0(0x4)(Edit, BlueprintVisible, Net, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2337[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AVolume*                               SpawningVolume;                                    // 0xC8(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 ProceduralGuid;                                    // 0xD0(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UProceduralFoliageComponent* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class Foliage.ProceduralFoliageSpawner
class UProceduralFoliageSpawner : public UObject
{
public:
	int32                                        RandomSeed;                                        // 0x28(0x4)(Edit, BlueprintVisible, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TileSize;                                          // 0x2C(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig)
	int32                                        NumUniqueTiles;                                    // 0x30(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MinimumQuadTreeSize;                               // 0x34(0x4)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2338[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FFoliageTypeObject>            FoliageTypes;                                      // 0x40(0x10)(ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2339[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProceduralFoliageSpawner* GetDefaultObj();

	void Simulate(int32* NumSteps);
};

// 0x148 (0x170 - 0x28)
// Class Foliage.ProceduralFoliageTile
class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*             FoliageSpawner;                                    // 0x28(0x8)(BlueprintVisible, ExportObject, Net, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_233A[0xA0];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<struct FProceduralFoliageInstance>    InstancesArray;                                    // 0xD0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_233B[0x90];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProceduralFoliageTile* GetDefaultObj();

};

// 0x10 (0x528 - 0x518)
// Class Foliage.ProceduralFoliageVolume
class AProceduralFoliageVolume : public AVolume
{
public:
	uint8                                        Pad_233C[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UProceduralFoliageComponent*           ProceduralComponent;                               // 0x520(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AProceduralFoliageVolume* GetDefaultObj();

};

}


