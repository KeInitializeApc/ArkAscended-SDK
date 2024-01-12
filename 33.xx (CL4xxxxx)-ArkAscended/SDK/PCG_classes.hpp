#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class PCG.PCGAttributeExtractorTestObject
class UPCGAttributeExtractorTestObject : public UObject
{
public:
	double                                       DoubleValue;                                       // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGAttributeExtractorTestObject* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGAttributePropertySelectorBlueprintHelpers
class UPCGAttributePropertySelectorBlueprintHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPCGAttributePropertySelectorBlueprintHelpers* GetDefaultObj();

	bool SetPointProperty(const struct FPCGAttributePropertySelector& Selector, enum class EPCGPointProperties InPointProperty);
	bool SetAttributeName(const struct FPCGAttributePropertySelector& Selector, class FName InAttributeName);
	class FName GetName(const struct FPCGAttributePropertySelector& Selector);
};

// 0x10 (0x38 - 0x28)
// Class PCG.PCGData
class UPCGData : public UObject
{
public:
	uint64                                       UID;                                               // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BCD[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGData* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class PCG.PCGSpatialData
class UPCGSpatialData : public UPCGData
{
public:
	TWeakObjectPtr<class AActor>                 TargetActor;                                       // 0x38(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          MetaData;                                          // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)

	static class UClass* StaticClass();
	static class UPCGSpatialData* GetDefaultObj();

	class UPCGUnionData* UnionWith(class UPCGSpatialData* InOther);
	class UPCGPointData* ToPointDataWithContext();
	class UPCGPointData* ToPointData();
	class UPCGDifferenceData* Subtract(class UPCGSpatialData* InOther);
	bool SamplePoint(struct FTransform* Transform, struct FBox* Bounds, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata);
	bool ProjectPoint(const struct FBox& InBounds, const struct FPCGProjectionParams& InParams, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata);
	class UPCGSpatialData* ProjectOn(class UPCGSpatialData* InOther, const struct FPCGProjectionParams& InParams);
	class UPCGMetadata* MutableMetadata();
	class UPCGIntersectionData* IntersectWith(class UPCGSpatialData* InOther);
	class UPCGSpatialData* InitializeFromData(class UPCGMetadata* InMetadataParentOverride, bool bInheritMetadata, bool bInheritAttributes);
	bool HasNonTrivialTransform();
	struct FBox GetStrictBounds();
	struct FVector GetNormal();
	int32 GetDimension();
	float GetDensityAtPosition();
	struct FBox GetBounds();
	class UPCGMetadata* CreateEmptyMetadata();
	class UPCGMetadata* ConstMetadata();
};

// 0x50 (0x98 - 0x48)
// Class PCG.PCGSpatialDataWithPointCache
class UPCGSpatialDataWithPointCache : public UPCGSpatialData
{
public:
	class UPCGPointData*                         CachedPointData;                                   // 0x48(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FBox>                          CachedBoundedPointDataBoxes;                       // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<class UPCGPointData*>                 CachedBoundedPointData;                            // 0x60(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BFB[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSpatialDataWithPointCache* GetDefaultObj();

};

// 0xF8 (0x190 - 0x98)
// Class PCG.PCGCollisionShapeData
class UPCGCollisionShapeData : public UPCGSpatialDataWithPointCache
{
public:
	uint8                                        Pad_1BFC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0xA0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	uint8                                        Pad_1BFD[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  CachedBounds;                                      // 0x118(0x38)(BlueprintVisible, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  CachedStrictBounds;                                // 0x150(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BFF[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGCollisionShapeData* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class PCG.PCGSettingsInterface
class UPCGSettingsInterface : public UPCGData
{
public:
	bool                                         bEnabled;                                          // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	bool                                         bDebug;                                            // 0x39(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C04[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSettingsInterface* GetDefaultObj();

};

// 0x108 (0x148 - 0x40)
// Class PCG.PCGSettings
class UPCGSettings : public UPCGSettingsInterface
{
public:
	int32                                        Seed;                                              // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1C08[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class FString>                          FilterOnTags;                                      // 0x48(0x50)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bPassThroughFilteredOutInputs;                     // 0x98(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C09[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class FString>                          TagsAppliedOnOutput;                               // 0xA0(0x50)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseSeed;                                          // 0xF0(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C0A[0x3F];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPCGSettingsOverridableParam>  CachedOverridableParams;                           // 0x130(0x10)(Edit, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C0B[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSettings* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGDistanceSettings
class UPCGDistanceSettings : public UPCGSettings
{
public:
	class FName                                  AttributeName;                                     // 0x148(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOutputDistanceVector;                             // 0x150(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSetDensity;                                       // 0x151(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C0F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MaximumDistance;                                   // 0x158(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPCGDistanceShape                 SourceShape;                                       // 0x160(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGDistanceShape                 TargetShape;                                       // 0x164(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGDistanceSettings* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class PCG.PCGEngineSettings
class UPCGEngineSettings : public UObject
{
public:
	struct FVector                               VolumeScale;                                       // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bGenerateOnDrop;                                   // 0x40(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C16[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGEngineSettings* GetDefaultObj();

};

// 0x0 (0x148 - 0x148)
// Class PCG.PCGGatherSettings
class UPCGGatherSettings : public UPCGSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGGatherSettings* GetDefaultObj();

};

// 0x30 (0x178 - 0x148)
// Class PCG.PCGNormalToDensitySettings
class UPCGNormalToDensitySettings : public UPCGSettings
{
public:
	struct FVector                               Normal;                                            // 0x148(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	double                                       Offset;                                            // 0x160(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	double                                       Strength;                                          // 0x168(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPCGNormalToDensityMode           DensityMode;                                       // 0x170(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C18[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGNormalToDensitySettings* GetDefaultObj();

};

// 0x0 (0x148 - 0x148)
// Class PCG.PCGRerouteSettings
class UPCGRerouteSettings : public UPCGSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGRerouteSettings* GetDefaultObj();

};

// 0x18 (0x160 - 0x148)
// Class PCG.PCGUserParameterGetSettings
class UPCGUserParameterGetSettings : public UPCGSettings
{
public:
	struct FGuid                                 PropertyGuid;                                      // 0x148(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FName                                  PropertyName;                                      // 0x158(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGUserParameterGetSettings* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class PCG.PCGUserParametersData
class UPCGUserParametersData : public UPCGData
{
public:
	class UPCGGraphInterface*                    OriginalGraph;                                     // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FInstancedStruct                      UserParameters;                                    // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGUserParametersData* GetDefaultObj();

};

// 0x28 (0xC0 - 0x98)
// Class PCG.PCGDifferenceData
class UPCGDifferenceData : public UPCGSpatialDataWithPointCache
{
public:
	bool                                         bDiffMetadata;                                     // 0x98(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C20[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPCGSpatialData*                       Source;                                            // 0xA0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	class UPCGSpatialData*                       Difference;                                        // 0xA8(0x8)(Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UPCGUnionData*                         DifferencesUnion;                                  // 0xB0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGDifferenceDensityFunction     DensityFunction;                                   // 0xB8(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C21[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGDifferenceData* GetDefaultObj();

	void SetDensityFunction(enum class EPCGDifferenceDensityFunction* InDensityFunction);
	void Initialize(class UPCGSpatialData** InData);
	void AddDifference(class UPCGSpatialData* InDifference);
};

// 0x88 (0x120 - 0x98)
// Class PCG.PCGIntersectionData
class UPCGIntersectionData : public UPCGSpatialDataWithPointCache
{
public:
	enum class EPCGIntersectionDensityFunction   DensityFunction;                                   // 0x98(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C23[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPCGSpatialData*                       A;                                                 // 0xA0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	class UPCGSpatialData*                       B;                                                 // 0xA8(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FBox                                  CachedBounds;                                      // 0xB0(0x38)(BlueprintVisible, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  CachedStrictBounds;                                // 0xE8(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGIntersectionData* GetDefaultObj();

	void Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB);
};

// 0x68 (0x100 - 0x98)
// Class PCG.PCGSurfaceData
class UPCGSurfaceData : public UPCGSpatialDataWithPointCache
{
public:
	uint8                                        Pad_1C25[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0xA0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)

	static class UClass* StaticClass();
	static class UPCGSurfaceData* GetDefaultObj();

};

// 0x70 (0x170 - 0x100)
// Class PCG.PCGLandscapeData
class UPCGLandscapeData : public UPCGSurfaceData
{
public:
	TArray<TSoftObjectPtr<class ALandscapeProxy>> Landscapes;                                        // 0x100(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FBox                                  Bounds;                                            // 0x110(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHeightOnly;                                       // 0x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseMetadata;                                      // 0x149(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C26[0x26];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGLandscapeData* GetDefaultObj();

};

// 0x0 (0x98 - 0x98)
// Class PCG.PCGPolyLineData
class UPCGPolyLineData : public UPCGSpatialDataWithPointCache
{
public:

	static class UClass* StaticClass();
	static class UPCGPolyLineData* GetDefaultObj();

};

// 0x8 (0xA0 - 0x98)
// Class PCG.PCGLandscapeSplineData
class UPCGLandscapeSplineData : public UPCGPolyLineData
{
public:
	TWeakObjectPtr<class ULandscapeSplinesComponent> Spline;                                            // 0x98(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class UPCGLandscapeSplineData* GetDefaultObj();

};

// 0x128 (0x170 - 0x48)
// Class PCG.PCGPointData
class UPCGPointData : public UPCGSpatialData
{
public:
	TArray<struct FPCGPoint>                     Points;                                            // 0x48(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1C29[0x118];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGPointData* GetDefaultObj();

	void SetPoints(TArray<struct FPCGPoint>* InPoints);
	TArray<struct FPCGPoint> GetPoints();
	struct FPCGPoint GetPoint();
	void CopyPointsFrom(class UPCGPointData** InData, TArray<int32>* InDataIndices);
};

// 0x90 (0x128 - 0x98)
// Class PCG.PCGPrimitiveData
class UPCGPrimitiveData : public UPCGSpatialDataWithPointCache
{
public:
	struct FVector                               VoxelSize;                                         // 0x98(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UPrimitiveComponent>    Primitive;                                         // 0xB0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, Config, EditConst)
	struct FBox                                  CachedBounds;                                      // 0xB8(0x38)(BlueprintVisible, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  CachedStrictBounds;                                // 0xF0(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGPrimitiveData* GetDefaultObj();

};

// 0xA0 (0x138 - 0x98)
// Class PCG.PCGProjectionData
class UPCGProjectionData : public UPCGSpatialDataWithPointCache
{
public:
	class UPCGSpatialData*                       Source;                                            // 0x98(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	class UPCGSpatialData*                       Target;                                            // 0xA0(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	struct FBox                                  CachedBounds;                                      // 0xA8(0x38)(BlueprintVisible, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  CachedStrictBounds;                                // 0xE0(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGProjectionParams                  ProjectionParams;                                  // 0x118(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGProjectionData* GetDefaultObj();

};

// 0xB0 (0x1B0 - 0x100)
// Class PCG.PCGBaseTextureData
class UPCGBaseTextureData : public UPCGSurfaceData
{
public:
	enum class EPCGTextureDensityFunction        DensityFunction;                                   // 0x100(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGTextureColorChannel           ColorChannel;                                      // 0x101(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C2B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TexelSize;                                         // 0x104(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseAdvancedTiling;                                // 0x108(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C2C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Tiling;                                            // 0x110(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector2D                             CenterOffset;                                      // 0x120(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        Rotation;                                          // 0x130(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         bUseTileBounds;                                    // 0x134(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C2E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBox2D                                TileBounds;                                        // 0x138(0x28)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FLinearColor>                  ColorData;                                         // 0x160(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  Bounds;                                            // 0x170(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Height;                                            // 0x1A8(0x4)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	int32                                        Width;                                             // 0x1AC(0x4)(ExportObject, Net, DisableEditOnTemplate, Config, EditConst)

	static class UClass* StaticClass();
	static class UPCGBaseTextureData* GetDefaultObj();

};

// 0x10 (0x1C0 - 0x1B0)
// Class PCG.PCGRenderTargetData
class UPCGRenderTargetData : public UPCGBaseTextureData
{
public:
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x1B0(0x8)(Edit, BlueprintVisible, Parm, Config, DisableEditOnInstance)
	uint8                                        Pad_1C31[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGRenderTargetData* GetDefaultObj();

	struct FTransform Initialize(class UTextureRenderTarget2D** InRenderTarget);
};

// 0x1A8 (0x240 - 0x98)
// Class PCG.PCGSplineData
class UPCGSplineData : public UPCGPolyLineData
{
public:
	uint8                                        Pad_1C32[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGSplineStruct                      SplineStruct;                                      // 0xA0(0x160)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FBox                                  CachedBounds;                                      // 0x200(0x38)(BlueprintVisible, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C33[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSplineData* GetDefaultObj();

};

// 0x18 (0x150 - 0x138)
// Class PCG.PCGSplineProjectionData
class UPCGSplineProjectionData : public UPCGProjectionData
{
public:
	struct FInterpCurveVector2D                  ProjectedPosition;                                 // 0x138(0x18)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGSplineProjectionData* GetDefaultObj();

};

// 0x10 (0x1C0 - 0x1B0)
// Class PCG.PCGTextureData
class UPCGTextureData : public UPCGBaseTextureData
{
public:
	TWeakObjectPtr<class UTexture2D>             Texture;                                           // 0x1B0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	uint8                                        Pad_1C35[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGTextureData* GetDefaultObj();

	struct FTransform Initialize(class UTexture2D** InTexture);
};

// 0x98 (0x130 - 0x98)
// Class PCG.PCGUnionData
class UPCGUnionData : public UPCGSpatialDataWithPointCache
{
public:
	TArray<class UPCGSpatialData*>               Data;                                              // 0x98(0x10)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPCGSpatialData*                       FirstNonTrivialTransformData;                      // 0xA8(0x8)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGUnionType                     UnionType;                                         // 0xB0(0x1)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGUnionDensityFunction          DensityFunction;                                   // 0xB1(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C37[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  CachedBounds;                                      // 0xB8(0x38)(BlueprintVisible, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  CachedStrictBounds;                                // 0xF0(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        CachedDimension;                                   // 0x128(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C39[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGUnionData* GetDefaultObj();

	void Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB);
	void AddData(class UPCGSpatialData** InData);
};

// 0x90 (0x128 - 0x98)
// Class PCG.PCGVolumeData
class UPCGVolumeData : public UPCGSpatialDataWithPointCache
{
public:
	struct FVector                               VoxelSize;                                         // 0x98(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class AVolume>                Volume;                                            // 0xB0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FBox                                  Bounds;                                            // 0xB8(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBox                                  StrictBounds;                                      // 0xF0(0x38)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGVolumeData* GetDefaultObj();

};

// 0x88 (0x1B0 - 0x128)
// Class PCG.PCGWorldVolumetricData
class UPCGWorldVolumetricData : public UPCGVolumeData
{
public:
	TWeakObjectPtr<class UWorld>                 World;                                             // 0x128(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TWeakObjectPtr<class UPCGComponent>          OriginatingComponent;                              // 0x130(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGWorldVolumetricQueryParams        QueryParams;                                       // 0x138(0x78)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGWorldVolumetricData* GetDefaultObj();

};

// 0x100 (0x200 - 0x100)
// Class PCG.PCGWorldRayHitData
class UPCGWorldRayHitData : public UPCGSurfaceData
{
public:
	TWeakObjectPtr<class UWorld>                 World;                                             // 0x100(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TWeakObjectPtr<class UPCGComponent>          OriginatingComponent;                              // 0x108(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FBox                                  Bounds;                                            // 0x110(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPCGWorldRayHitQueryParams            QueryParams;                                       // 0x148(0xB8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGWorldRayHitData* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGMetadataSettingsBase
class UPCGMetadataSettingsBase : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         OutputTarget;                                      // 0x148(0x20)(Edit, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataSettingsBase* GetDefaultObj();

};

// 0x48 (0x1B0 - 0x168)
// Class PCG.PCGMetadataBitwiseSettings
class UPCGMetadataBitwiseSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataBitwiseOperation      Operation;                                         // 0x168(0x2)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C3C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataBitwiseSettings* GetDefaultObj();

};

// 0x48 (0x1B0 - 0x168)
// Class PCG.PCGMetadataBooleanSettings
class UPCGMetadataBooleanSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataBooleanOperation      Operation;                                         // 0x168(0x2)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C3D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataBooleanSettings* GetDefaultObj();

};

// 0x20 (0x188 - 0x168)
// Class PCG.PCGMetadataBreakTransformSettings
class UPCGMetadataBreakTransformSettings : public UPCGMetadataSettingsBase
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x168(0x20)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataBreakTransformSettings* GetDefaultObj();

};

// 0x20 (0x188 - 0x168)
// Class PCG.PCGMetadataBreakVectorSettings
class UPCGMetadataBreakVectorSettings : public UPCGMetadataSettingsBase
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x168(0x20)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataBreakVectorSettings* GetDefaultObj();

};

// 0x50 (0x1B8 - 0x168)
// Class PCG.PCGMetadataCompareSettings
class UPCGMetadataCompareSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataCompareOperation      Operation;                                         // 0x168(0x2)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C40[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	double                                       Tolerance;                                         // 0x1B0(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataCompareSettings* GetDefaultObj();

};

// 0x40 (0x188 - 0x148)
// Class PCG.PCGMetadataOperationSettings
class UPCGMetadataOperationSettings : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x148(0x20)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         OutputTarget;                                      // 0x168(0x20)(Edit, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataOperationSettings* GetDefaultObj();

};

// 0x60 (0x1C8 - 0x168)
// Class PCG.PCGMetadataMakeTransformSettings
class UPCGMetadataMakeTransformSettings : public UPCGMetadataSettingsBase
{
public:
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x168(0x20)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x188(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1A8(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataMakeTransformSettings* GetDefaultObj();

};

// 0x88 (0x1F0 - 0x168)
// Class PCG.PCGMetadataMakeVectorSettings
class UPCGMetadataMakeVectorSettings : public UPCGMetadataSettingsBase
{
public:
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x168(0x20)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x188(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1A8(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource4;                                      // 0x1C8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGMetadataTypes                 OutputType;                                        // 0x1E8(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EPCGMetadataMakeVector3           MakeVector3Op;                                     // 0x1E9(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGMetadataMakeVector4           MakeVector4Op;                                     // 0x1EA(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C43[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGMetadataMakeVectorSettings* GetDefaultObj();

};

// 0x68 (0x1D0 - 0x168)
// Class PCG.PCGMetadataMathsSettings
class UPCGMetadataMathsSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataMathsOperation        Operation;                                         // 0x168(0x2)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C45[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1B0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataMathsSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGMetadataPartitionSettings
class UPCGMetadataPartitionSettings : public UPCGSettings
{
public:
	class FName                                  PartitionAttribute;                                // 0x148(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataPartitionSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGMetadataRenameSettings
class UPCGMetadataRenameSettings : public UPCGSettings
{
public:
	class FName                                  AttributeToRename;                                 // 0x148(0x8)(BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FName                                  NewAttributeName;                                  // 0x150(0x8)(Edit, ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataRenameSettings* GetDefaultObj();

};

// 0x68 (0x1D0 - 0x168)
// Class PCG.PCGMetadataRotatorSettings
class UPCGMetadataRotatorSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataRotatorOperation      Operation;                                         // 0x168(0x2)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C9F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1B0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataRotatorSettings* GetDefaultObj();

};

// 0x68 (0x1D0 - 0x168)
// Class PCG.PCGMetadataTransformSettings
class UPCGMetadataTransformSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataTransformOperation    Operation;                                         // 0x168(0x2)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EPCGTransformLerpMode             TransformLerpMode;                                 // 0x16A(0x2)(ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CA0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1B0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataTransformSettings* GetDefaultObj();

};

// 0x48 (0x1B0 - 0x168)
// Class PCG.PCGMetadataTrigSettings
class UPCGMetadataTrigSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataTrigOperation         Operation;                                         // 0x168(0x2)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CA2[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataTrigSettings* GetDefaultObj();

};

// 0x68 (0x1D0 - 0x168)
// Class PCG.PCGMetadataVectorSettings
class UPCGMetadataVectorSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataVectorOperation       Operation;                                         // 0x168(0x2)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CA5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1B0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataVectorSettings* GetDefaultObj();

};

// 0x18 (0x160 - 0x148)
// Class PCG.PCGAttributeFilterSettings
class UPCGAttributeFilterSettings : public UPCGSettings
{
public:
	enum class EPCGAttributeFilterOperation      Operation;                                         // 0x148(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CAA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                SelectedAttributes;                                // 0x150(0x10)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGAttributeFilterSettings* GetDefaultObj();

};

// 0x30 (0x178 - 0x148)
// Class PCG.PCGAttributeGetFromPointIndexSettings
class UPCGAttributeGetFromPointIndexSettings : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x148(0x20)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x168(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class FName                                  OutputAttributeName;                               // 0x16C(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CAC[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGAttributeGetFromPointIndexSettings* GetDefaultObj();

};

// 0x30 (0x178 - 0x148)
// Class PCG.PCGAttributeReduceSettings
class UPCGAttributeReduceSettings : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x148(0x20)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  OutputAttributeName;                               // 0x168(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGAttributeReduceOperation      Operation;                                         // 0x170(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CAE[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGAttributeReduceSettings* GetDefaultObj();

};

// 0x58 (0x1A0 - 0x148)
// Class PCG.PCGAttributeSelectSettings
class UPCGAttributeSelectSettings : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x148(0x20)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  OutputAttributeName;                               // 0x168(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGAttributeSelectOperation      Operation;                                         // 0x170(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EPCGAttributeSelectAxis           Axis;                                              // 0x174(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_1CAF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              CustomAxis;                                        // 0x180(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGAttributeSelectSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGAttributeTransferSettings
class UPCGAttributeTransferSettings : public UPCGSettings
{
public:
	class FName                                  SourceAttributeName;                               // 0x148(0x8)(ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FName                                  TargetAttributeName;                               // 0x150(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGAttributeTransferSettings* GetDefaultObj();

};

// 0x40 (0x188 - 0x148)
// Class PCG.PCGBoundsModifierSettings
class UPCGBoundsModifierSettings : public UPCGSettings
{
public:
	enum class EPCGBoundsModifierMode            Mode;                                              // 0x148(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1CB3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               BoundsMin;                                         // 0x150(0x18)(ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               BoundsMax;                                         // 0x168(0x18)(BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bAffectSteepness;                                  // 0x180(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CB4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Steepness;                                         // 0x184(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGBoundsModifierSettings* GetDefaultObj();

};

// 0x0 (0x148 - 0x148)
// Class PCG.PCGCollapseSettings
class UPCGCollapseSettings : public UPCGSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGCollapseSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGCopyPointsSettings
class UPCGCopyPointsSettings : public UPCGSettings
{
public:
	enum class EPCGCopyPointsInheritanceMode     RotationInheritance;                               // 0x148(0x1)(BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGCopyPointsInheritanceMode     ScaleInheritance;                                  // 0x149(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGCopyPointsInheritanceMode     ColorInheritance;                                  // 0x14A(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGCopyPointsInheritanceMode     SeedInheritance;                                   // 0x14B(0x1)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGCopyPointsMetadataInheritanceMode AttributeInheritance;                              // 0x14C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CB9[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGCopyPointsSettings* GetDefaultObj();

};

// 0x188 (0x2D0 - 0x148)
// Class PCG.PCGCreateAttributeSettings
class UPCGCreateAttributeSettings : public UPCGSettings
{
public:
	class FName                                  OutputAttributeName;                               // 0x148(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFromSourceParam;                                  // 0x150(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDisplayFromSourceParamSetting;                    // 0x151(0x1)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CBC[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SourceParamAttributeName;                          // 0x154(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CBE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGMetadataTypesConstantStruct       AttributeTypes;                                    // 0x160(0x170)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGCreateAttributeSettings* GetDefaultObj();

};

// 0x0 (0x2D0 - 0x2D0)
// Class PCG.PCGCreateAttributeSetSettings
class UPCGCreateAttributeSetSettings : public UPCGCreateAttributeSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGCreateAttributeSetSettings* GetDefaultObj();

};

// 0x18 (0x160 - 0x148)
// Class PCG.PCGCreateSplineSettings
class UPCGCreateSplineSettings : public UPCGSettings
{
public:
	enum class EPCGCreateSplineMode              Mode;                                              // 0x148(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bClosedLoop;                                       // 0x149(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLinear;                                           // 0x14A(0x1)(Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bApplyCustomTangents;                              // 0x14B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FName                                  ArriveTangentAttribute;                            // 0x14C(0x8)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FName                                  LeaveTangentAttribute;                             // 0x154(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CC4[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGCreateSplineSettings* GetDefaultObj();

};

// 0x40 (0x188 - 0x148)
// Class PCG.PCGDataFromActorSettings
class UPCGDataFromActorSettings : public UPCGSettings
{
public:
	struct FPCGActorSelectorSettings             ActorSelector;                                     // 0x148(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGGetDataFromActorMode          Mode;                                              // 0x168(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bDisplayModeSettings;                              // 0x169(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CC8[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          ExpectedPins;                                      // 0x170(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FName                                  PropertyName;                                      // 0x180(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGDataFromActorSettings* GetDefaultObj();

};

// 0x48 (0x190 - 0x148)
// Class PCG.PCGDataTableRowToParamDataSettings
class UPCGDataTableRowToParamDataSettings : public UPCGSettings
{
public:
	class FName                                  RowName;                                           // 0x148(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                PathOverride;                                      // 0x150(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UDataTable>             DataTable;                                         // 0x160(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class UPCGDataTableRowToParamDataSettings* GetDefaultObj();

};

// 0x0 (0x148 - 0x148)
// Class PCG.PCGDebugSettings
class UPCGDebugSettings : public UPCGSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGDebugSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGDensityFilterSettings
class UPCGDensityFilterSettings : public UPCGSettings
{
public:
	float                                        LowerBound;                                        // 0x148(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        UpperBound;                                        // 0x14C(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bInvertFilter;                                     // 0x150(0x1)(ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CCC[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGDensityFilterSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGDensityNoiseSettings
class UPCGDensityNoiseSettings : public UPCGSettings
{
public:
	enum class EPCGDensityNoiseMode              DensityMode;                                       // 0x148(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CCD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DensityNoiseMin;                                   // 0x14C(0x4)(ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        DensityNoiseMax;                                   // 0x150(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bInvertSourceDensity;                              // 0x154(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CCE[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGDensityNoiseSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGLinearDensityRemapSettings
class UPCGLinearDensityRemapSettings : public UPCGSettings
{
public:
	float                                        RemapMin;                                          // 0x148(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        RemapMax;                                          // 0x14C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bMultiplyDensity;                                  // 0x150(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CD0[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGLinearDensityRemapSettings* GetDefaultObj();

};

// 0x18 (0x160 - 0x148)
// Class PCG.PCGDensityRemapSettings
class UPCGDensityRemapSettings : public UPCGSettings
{
public:
	float                                        InRangeMin;                                        // 0x148(0x4)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        InRangeMax;                                        // 0x14C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        OutRangeMin;                                       // 0x150(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        OutRangeMax;                                       // 0x154(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bExcludeValuesOutsideInputRange;                   // 0x158(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CD1[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGDensityRemapSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGDifferenceSettings
class UPCGDifferenceSettings : public UPCGSettings
{
public:
	enum class EPCGDifferenceDensityFunction     DensityFunction;                                   // 0x148(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGDifferenceMode                Mode;                                              // 0x149(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bDiffMetadata;                                     // 0x14A(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CD4[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGDifferenceSettings* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class PCG.PCGBlueprintElement
class UPCGBlueprintElement : public UObject
{
public:
	bool                                         bCreatesArtifacts;                                 // 0x28(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCacheable;                                        // 0x29(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCanBeMultithreaded;                               // 0x2A(0x1)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D03[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPCGPinProperties>             CustomInputPins;                                   // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGPinProperties>             CustomOutputPins;                                  // 0x40(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bHasDefaultInPin;                                  // 0x50(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bHasDefaultOutPin;                                 // 0x51(0x1)(Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D04[0xE];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGBlueprintElement* GetDefaultObj();

	TArray<struct FPCGPoint> VariableLoopBody(class UPCGPointData** InData, class UPCGMetadata* OutMetadata);
	class UPCGPointData* VariableLoop(class UPCGPointData** InData, class UPCGPointData** OutData);
	bool PointLoopBody(class UPCGPointData** InData, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata);
	class UPCGPointData* PointLoop(class UPCGPointData** InData, class UPCGPointData** OutData);
	TSet<class FName> OutputLabels();
	enum class EPCGSettingsType NodeTypeOverride();
	class FName NodeTitleOverride();
	struct FLinearColor NodeColorOverride();
	bool NestedLoopBody(class UPCGPointData* InOuterData, class UPCGPointData* InInnerData, const struct FPCGPoint& InOuterPoint, const struct FPCGPoint& InInnerPoint, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata);
	class UPCGPointData* NestedLoop(class UPCGPointData* InOuterData, class UPCGPointData* InInnerData, class UPCGPointData** OutData);
	bool IterationLoopBody(class UPCGSpatialData* InA, class UPCGSpatialData* InB, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata);
	class UPCGPointData* IterationLoop(int64* NumIterations, class UPCGPointData** OutData, class UPCGSpatialData* OptionalA, class UPCGSpatialData* OptionalB);
	TSet<class FName> InputLabels();
	int32 GetSeed();
	struct FRandomStream GetRandomStream();
	struct FPCGContext ExecuteWithContext(const struct FPCGDataCollection& Input, struct FPCGDataCollection* Output);
	void Execute(const struct FPCGDataCollection& Input, struct FPCGDataCollection* Output);
};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGBlueprintSettings
class UPCGBlueprintSettings : public UPCGSettings
{
public:
	class UClass*                                BlueprintElementType;                              // 0x148(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UPCGBlueprintElement*                  BlueprintElementInstance;                          // 0x150(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGBlueprintSettings* GetDefaultObj();

	class UPCGBlueprintElement* SetElementType();
	class UClass* GetElementType();
};

// 0x18 (0x160 - 0x148)
// Class PCG.PCGFilterByTagSettings
class UPCGFilterByTagSettings : public UPCGSettings
{
public:
	enum class EPCGFilterByTagOperation          Operation;                                         // 0x148(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D0A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                SelectedTags;                                      // 0x150(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGFilterByTagSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGIntersectionSettings
class UPCGIntersectionSettings : public UPCGSettings
{
public:
	enum class EPCGIntersectionDensityFunction   DensityFunction;                                   // 0x148(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D0C[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGIntersectionSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGMergeSettings
class UPCGMergeSettings : public UPCGSettings
{
public:
	bool                                         bMergeMetadata;                                    // 0x148(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D0E[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGMergeSettings* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGPointExtentsModifierSettings
class UPCGPointExtentsModifierSettings : public UPCGSettings
{
public:
	struct FVector                               Extents;                                           // 0x148(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	enum class EPCGPointExtentsModifierMode      Mode;                                              // 0x160(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1D11[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGPointExtentsModifierSettings* GetDefaultObj();

};

// 0x1C8 (0x310 - 0x148)
// Class PCG.PCGPointFilterSettings
class UPCGPointFilterSettings : public UPCGSettings
{
public:
	enum class EPCGPointFilterOperator           Operator;                                          // 0x148(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D13[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         TargetAttribute;                                   // 0x150(0x20)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseConstantThreshold;                             // 0x170(0x1)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D14[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         ThresholdAttribute;                                // 0x178(0x20)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseSpatialQuery;                                  // 0x198(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D15[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGMetadataTypesConstantStruct       AttributeTypes;                                    // 0x1A0(0x170)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGPointFilterSettings* GetDefaultObj();

};

// 0x38 (0x180 - 0x148)
// Class PCG.PCGPointMatchAndSetSettings
class UPCGPointMatchAndSetSettings : public UPCGSettings
{
public:
	class UClass*                                MatchAndSetType;                                   // 0x148(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UPCGMatchAndSetBase*                   MatchAndSetInstance;                               // 0x150(0x8)(EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         SetTarget;                                         // 0x158(0x20)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	enum class EPCGMetadataTypes                 SetTargetType;                                     // 0x178(0x1)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D17[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EPCGMetadataTypesConstantStructStringMode SetTargetStringMode;                               // 0x17C(0x4)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGPointMatchAndSetSettings* GetDefaultObj();

	class UClass* SetMatchAndSetType();
};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGPointSamplerSettings
class UPCGPointSamplerSettings : public UPCGSettings
{
public:
	float                                        Ratio;                                             // 0x148(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	uint8                                        Pad_1D18[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGPointSamplerSettings* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGProjectionSettings
class UPCGProjectionSettings : public UPCGSettings
{
public:
	struct FPCGProjectionParams                  ProjectionParams;                                  // 0x148(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGProjectionSettings* GetDefaultObj();

};

// 0x68 (0x1B0 - 0x148)
// Class PCG.PCGPropertyToParamDataSettings
class UPCGPropertyToParamDataSettings : public UPCGSettings
{
public:
	struct FPCGActorSelectorSettings             ActorSelector;                                     // 0x148(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSelectComponent;                                  // 0x168(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D1A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                ComponentClass;                                    // 0x170(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  PropertyName;                                      // 0x178(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bExtractObjectAndStruct;                           // 0x180(0x1)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D1C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  OutputAttributeName;                               // 0x184(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAlwaysRequeryActors;                              // 0x18C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGActorSelection                ActorSelection;                                    // 0x18D(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D1E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  ActorSelectionTag;                                 // 0x190(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  ActorSelectionName;                                // 0x198(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                ActorSelectionClass;                               // 0x1A0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPCGActorFilter                   ActorFilter;                                       // 0x1A8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIncludeChildren;                                  // 0x1A9(0x1)(Edit, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D20[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGPropertyToParamDataSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGSelfPruningSettings
class UPCGSelfPruningSettings : public UPCGSettings
{
public:
	enum class EPCGSelfPruningType               PruningType;                                       // 0x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D21[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RadiusSimilarityFactor;                            // 0x14C(0x4)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRandomizedPruning;                                // 0x150(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D22[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSelfPruningSettings* GetDefaultObj();

};

// 0x0 (0x148 - 0x148)
// Class PCG.PCGBaseSubgraphSettings
class UPCGBaseSubgraphSettings : public UPCGSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGBaseSubgraphSettings* GetDefaultObj();

};

// 0x48 (0x190 - 0x148)
// Class PCG.PCGSpawnActorSettings
class UPCGSpawnActorSettings : public UPCGBaseSubgraphSettings
{
public:
	class UClass*                                TemplateActorClass;                                // 0x148(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<class FName>                          PostSpawnFunctionNames;                            // 0x150(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGSpawnActorOption              Option;                                            // 0x160(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bForceDisableActorParsing;                         // 0x161(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGSpawnActorGenerationTrigger   bGenerationTrigger;                                // 0x162(0x1)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bInheritActorTags;                                 // 0x163(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D24[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          TagsToAddOnActors;                                 // 0x168(0x10)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                TemplateActor;                                     // 0x178(0x8)(BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGActorPropertyOverride>     ActorOverrides;                                    // 0x180(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGSpawnActorSettings* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class PCG.PCGNode
class UPCGNode : public UObject
{
public:
	class FName                                  NodeTitle;                                         // 0x28(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPCGSettingsInterface*                 SettingsInterface;                                 // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<class UPCGNode*>                      OutboundNodes;                                     // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<class UPCGEdge*>                      InboundEdges;                                      // 0x48(0x10)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<class UPCGEdge*>                      OutboundEdges;                                     // 0x58(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<class UPCGPin*>                       InputPins;                                         // 0x68(0x10)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<class UPCGPin*>                       OutputPins;                                        // 0x78(0x10)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGNode* GetDefaultObj();

	bool RemoveEdgeTo();
	class UPCGSettings* GetSettings();
	class UPCGGraph* GetGraph();
	class UPCGNode* AddEdgeTo();
};

// 0x8 (0x90 - 0x88)
// Class PCG.PCGBaseSubgraphNode
class UPCGBaseSubgraphNode : public UPCGNode
{
public:
	bool                                         bDynamicGraph;                                     // 0x88(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D2A[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGBaseSubgraphNode* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class PCG.PCGSpawnActorNode
class UPCGSpawnActorNode : public UPCGBaseSubgraphNode
{
public:

	static class UClass* StaticClass();
	static class UPCGSpawnActorNode* GetDefaultObj();

};

// 0xC8 (0x210 - 0x148)
// Class PCG.PCGSplineSamplerSettings
class UPCGSplineSamplerSettings : public UPCGSettings
{
public:
	struct FPCGSplineSamplerParams               SamplerParams;                                     // 0x148(0xC8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGSplineSamplerSettings* GetDefaultObj();

};

// 0x38 (0x180 - 0x148)
// Class PCG.PCGStaticMeshSpawnerSettings
class UPCGStaticMeshSpawnerSettings : public UPCGSettings
{
public:
	class UClass*                                MeshSelectorType;                                  // 0x148(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UPCGMeshSelectorBase*                  MeshSelectorInstance;                              // 0x150(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                InstancePackerType;                                // 0x158(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UPCGInstancePackerBase*                InstancePackerInstance;                            // 0x160(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FName                                  OutAttributeName;                                  // 0x168(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGStaticMeshSpawnerEntry>    Meshes;                                            // 0x170(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGStaticMeshSpawnerSettings* GetDefaultObj();

	class UClass* SetMeshSelectorType();
	class UClass* SetInstancePackerType();
};

// 0x30 (0x178 - 0x148)
// Class PCG.PCGSurfaceSamplerSettings
class UPCGSurfaceSamplerSettings : public UPCGSettings
{
public:
	float                                        PointsPerSquaredMeter;                             // 0x148(0x4)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D2F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PointExtents;                                      // 0x150(0x18)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        Looseness;                                         // 0x168(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUnbounded;                                        // 0x16C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bApplyDensityToPoints;                             // 0x16D(0x1)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D30[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PointSteepness;                                    // 0x170(0x4)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D32[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSurfaceSamplerSettings* GetDefaultObj();

};

// 0xF8 (0x240 - 0x148)
// Class PCG.PCGTextureSamplerSettings
class UPCGTextureSamplerSettings : public UPCGSettings
{
public:
	uint8                                        Pad_1D33[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x150(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	bool                                         bUseAbsoluteTransform;                             // 0x1B0(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D34[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x1B8(0x30)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	enum class EPCGTextureDensityFunction        DensityFunction;                                   // 0x1E8(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGTextureColorChannel           ColorChannel;                                      // 0x1E9(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D35[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TexelSize;                                         // 0x1EC(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseAdvancedTiling;                                // 0x1F0(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D36[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Tiling;                                            // 0x1F8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector2D                             CenterOffset;                                      // 0x208(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        Rotation;                                          // 0x218(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         bUseTileBounds;                                    // 0x21C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D38[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             TileBoundsMin;                                     // 0x220(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             TileBoundsMax;                                     // 0x230(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGTextureSamplerSettings* GetDefaultObj();

};

// 0xB8 (0x200 - 0x148)
// Class PCG.PCGTransformPointsSettings
class UPCGTransformPointsSettings : public UPCGSettings
{
public:
	bool                                         bApplyToAttribute;                                 // 0x148(0x1)(Edit, BlueprintVisible, ExportObject, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D39[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  AttributeName;                                     // 0x14C(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D3A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OffsetMin;                                         // 0x158(0x18)(Edit, ConstParm, BlueprintVisible, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               OffsetMax;                                         // 0x170(0x18)(Edit, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAbsoluteOffset;                                   // 0x188(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D3C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              RotationMin;                                       // 0x190(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FRotator                              RotationMax;                                       // 0x1A8(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAbsoluteRotation;                                 // 0x1C0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D3D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ScaleMin;                                          // 0x1C8(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               ScaleMax;                                          // 0x1E0(0x18)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAbsoluteScale;                                    // 0x1F8(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUniformScale;                                     // 0x1F9(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRecomputeSeed;                                    // 0x1FA(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D3F[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGTransformPointsSettings* GetDefaultObj();

};

// 0x0 (0x188 - 0x188)
// Class PCG.PCGGetLandscapeSettings
class UPCGGetLandscapeSettings : public UPCGDataFromActorSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGGetLandscapeSettings* GetDefaultObj();

};

// 0x0 (0x188 - 0x188)
// Class PCG.PCGGetSplineSettings
class UPCGGetSplineSettings : public UPCGDataFromActorSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGGetSplineSettings* GetDefaultObj();

};

// 0x0 (0x188 - 0x188)
// Class PCG.PCGGetVolumeSettings
class UPCGGetVolumeSettings : public UPCGDataFromActorSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGGetVolumeSettings* GetDefaultObj();

};

// 0x0 (0x188 - 0x188)
// Class PCG.PCGGetPrimitiveSettings
class UPCGGetPrimitiveSettings : public UPCGDataFromActorSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGGetPrimitiveSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGUnionSettings
class UPCGUnionSettings : public UPCGSettings
{
public:
	enum class EPCGUnionType                     Type;                                              // 0x148(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	enum class EPCGUnionDensityFunction          DensityFunction;                                   // 0x149(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D42[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGUnionSettings* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGVolumeSamplerSettings
class UPCGVolumeSamplerSettings : public UPCGSettings
{
public:
	struct FVector                               VoxelSize;                                         // 0x148(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUnbounded;                                        // 0x160(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D43[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGVolumeSamplerSettings* GetDefaultObj();

};

// 0x78 (0x1C0 - 0x148)
// Class PCG.PCGWorldQuerySettings
class UPCGWorldQuerySettings : public UPCGSettings
{
public:
	struct FPCGWorldVolumetricQueryParams        QueryParams;                                       // 0x148(0x78)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGWorldQuerySettings* GetDefaultObj();

};

// 0xB8 (0x200 - 0x148)
// Class PCG.PCGWorldRayHitSettings
class UPCGWorldRayHitSettings : public UPCGSettings
{
public:
	struct FPCGWorldRayHitQueryParams            QueryParams;                                       // 0x148(0xB8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGWorldRayHitSettings* GetDefaultObj();

};

// 0xB0 (0xD8 - 0x28)
// Class PCG.PCGLandscapeCache
class UPCGLandscapeCache : public UObject
{
public:
	uint8                                        Pad_1D46[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	TSet<class FName>                            CachedLayerNames;                                  // 0x78(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D48[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGLandscapeCache* GetDefaultObj();

};

// 0xB8 (0x580 - 0x4C8)
// Class PCG.PCGPartitionActor
class APCGPartitionActor : public APartitionActor
{
public:
	struct FGuid                                 PCGGuid;                                           // 0x4C8(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D4C[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	TMap<class UPCGComponent*, TSoftObjectPtr<class UPCGComponent>> LocalToOriginal;                                   // 0x528(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, EditConst, InstancedReference, SubobjectReference)
	uint32                                       PCGGridSize;                                       // 0x578(0x4)(ExportObject, BlueprintReadOnly, Net, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUse2DGrid;                                        // 0x57C(0x1)(ConstParm, BlueprintReadOnly, Net, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D4E[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APCGPartitionActor* GetDefaultObj();

	class UPCGComponent* GetOriginalComponent(class UPCGComponent* LocalComponent);
	class UPCGComponent* GetLocalComponent(class UPCGComponent* OriginalComponent);
};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGActorHelpers
class UPCGActorHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPCGActorHelpers* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGBlueprintHelpers
class UPCGBlueprintHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPCGBlueprintHelpers* GetDefaultObj();

	struct FPCGPoint SetSeedFromPosition();
	struct FPCGPoint SetLocalCenter(const struct FVector& InLocalCenter);
	struct FPCGPoint SetExtents(const struct FVector& InExtents);
	struct FBox GetTransformedBounds();
	int64 GetTaskId();
	class UPCGSettings* GetSettings();
	struct FRandomStream GetRandomStream(class UPCGSettings* OptionalSettings, class UPCGComponent* OptionalComponent);
	class UPCGComponent* GetOriginalComponent();
	struct FVector GetLocalCenter();
	TArray<struct FPCGLandscapeLayerWeight> GetInterpolatedPCGLandscapeLayerWeights(struct FVector* Location);
	class UPCGData* GetInputData();
	struct FVector GetExtents();
	class UPCGComponent* GetComponent();
	struct FBox GetActorLocalBoundsPCG(bool bIgnorePCGCreatedComponents);
	class UPCGData* GetActorData();
	struct FBox GetActorBoundsPCG(bool bIgnorePCGCreatedComponents);
	class UPCGData* CreatePCGDataFromActor(bool bParseActor);
	int32 ComputeSeedFromPosition();
};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGInstancePackerBase
class UPCGInstancePackerBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPCGInstancePackerBase* GetDefaultObj();

	struct FPCGContext PackInstances(class UPCGSpatialData* InSpatialData, const struct FPCGMeshInstanceList& InstanceList, const struct FPCGPackedCustomData& OutPackedCustomData);
	void PackCustomDataFromAttributes(const struct FPCGMeshInstanceList& InstanceList, class UPCGMetadata** MetaData, const TArray<class FName>& AttributeNames, const struct FPCGPackedCustomData& OutPackedCustomData);
	bool AddTypeToPacking(int32 TypeId, const struct FPCGPackedCustomData& OutPackedCustomData);
};

// 0x10 (0x38 - 0x28)
// Class PCG.PCGInstancePackerByAttribute
class UPCGInstancePackerByAttribute : public UPCGInstancePackerBase
{
public:
	TArray<class FName>                          AttributeNames;                                    // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGInstancePackerByAttribute* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class PCG.PCGInstancePackerByRegex
class UPCGInstancePackerByRegex : public UPCGInstancePackerBase
{
public:
	TArray<class FString>                        RegexPatterns;                                     // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGInstancePackerByRegex* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class PCG.PCGMatchAndSetBase
class UPCGMatchAndSetBase : public UObject
{
public:
	enum class EPCGMetadataTypes                 Type;                                              // 0x28(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_1D7D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EPCGMetadataTypesConstantStructStringMode StringMode;                                        // 0x2C(0x4)(Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMatchAndSetBase* GetDefaultObj();

	bool ValidatePreconditions(class UPCGPointData* InPointData);
	class UPCGPointMatchAndSetSettings* MatchAndSet(class UPCGPointData* InPointData, class UPCGPointData* OutPointData);
};

// 0x20 (0x50 - 0x30)
// Class PCG.PCGMatchAndSetByAttribute
class UPCGMatchAndSetByAttribute : public UPCGMatchAndSetBase
{
public:
	class FName                                  MatchSourceAttribute;                              // 0x30(0x8)(Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGMetadataTypes                 MatchSourceType;                                   // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D7E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EPCGMetadataTypesConstantStructStringMode MatchSourceStringMode;                             // 0x3C(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGMatchAndSetByAttributeEntry> Entries;                                           // 0x40(0x10)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMatchAndSetByAttribute* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class PCG.PCGMatchAndSetWeighted
class UPCGMatchAndSetWeighted : public UPCGMatchAndSetBase
{
public:
	TArray<struct FPCGMatchAndSetWeightedEntry>  Entries;                                           // 0x30(0x10)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bShouldMutateSeed;                                 // 0x40(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D7F[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGMatchAndSetWeighted* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class PCG.PCGMatchAndSetWeightedByCategory
class UPCGMatchAndSetWeightedByCategory : public UPCGMatchAndSetBase
{
public:
	class FName                                  CategoryAttribute;                                 // 0x30(0x8)(ConstParm, BlueprintVisible, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGMetadataTypes                 CategoryType;                                      // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D82[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EPCGMetadataTypesConstantStructStringMode CategoryStringMode;                                // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGMatchAndSetWeightedByCategoryEntryList> Categories;                                        // 0x40(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst)
	bool                                         bShouldMutateSeed;                                 // 0x50(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D84[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGMatchAndSetWeightedByCategory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGMeshSelectorBase
class UPCGMeshSelectorBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPCGMeshSelectorBase* GetDefaultObj();

};

// 0x208 (0x230 - 0x28)
// Class PCG.PCGMeshSelectorByAttribute
class UPCGMeshSelectorByAttribute : public UPCGMeshSelectorBase
{
public:
	class FName                                  AttributeName;                                     // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSoftISMComponentDescriptor           TemplateDescriptor;                                // 0x30(0x1E8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseAttributeMaterialOverrides;                    // 0x218(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D86[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          MaterialOverrideAttributes;                        // 0x220(0x10)(BlueprintReadOnly, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMeshSelectorByAttribute* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class PCG.PCGMeshSelectorWeighted
class UPCGMeshSelectorWeighted : public UPCGMeshSelectorBase
{
public:
	TArray<struct FPCGMeshSelectorWeightedEntry> MeshEntries;                                       // 0x28(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseAttributeMaterialOverrides;                    // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D8A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          MaterialOverrideAttributes;                        // 0x40(0x10)(BlueprintReadOnly, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMeshSelectorWeighted* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class PCG.PCGMeshSelectorWeightedByCategory
class UPCGMeshSelectorWeightedByCategory : public UPCGMeshSelectorBase
{
public:
	class FName                                  CategoryAttribute;                                 // 0x28(0x8)(ConstParm, BlueprintVisible, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGWeightedByCategoryEntryList> Entries;                                           // 0x30(0x10)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bUseAttributeMaterialOverrides;                    // 0x40(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D8B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          MaterialOverrideAttributes;                        // 0x48(0x10)(BlueprintReadOnly, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMeshSelectorWeightedByCategory* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class PCG.PCGMetadata
class UPCGMetadata : public UObject
{
public:
	class UPCGMetadata*                          Parent;                                            // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TSet<TWeakObjectPtr<class UPCGMetadata>>     OtherParents;                                      // 0x30(0x50)(Edit, ConstParm, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E18[0x88];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGMetadata* GetDefaultObj();

	struct FPCGPoint SetPointAttributes(class UPCGMetadata** MetaData, const struct FPCGPoint& OutPoint);
	void SetAttributesByKey(int64 Key, class UPCGMetadata* InMetaData, int64* TargetKey, int64* OutKey);
	void ResetWeightedAttributesByKey(int64* TargetKey, int64* OutKey);
	void ResetPointWeightedAttributes(const struct FPCGPoint& OutPoint);
	bool RenameAttribute();
	enum class EPCGMetadataOp MergePointAttributes(struct FPCGPoint* PointA, class UPCGMetadata** MetadataA, struct FPCGPoint* PointB, class UPCGMetadata** MetadataB, struct FPCGPoint* TargetPoint);
	enum class EPCGMetadataOp MergeAttributesByKey(int64* KeyA, class UPCGMetadata** MetadataA, int64* KeyB, class UPCGMetadata** MetadataB, int64* TargetKey, int64* OutKey);
	void InitializeWithAttributeFilter(class UPCGMetadata* InParent, TSet<class FName>* InFilteredAttributes, enum class EPCGMetadataFilterMode* InFilterMode);
	void InitializeAsCopyWithAttributeFilter(class UPCGMetadata** InMetadataToCopy, TSet<class FName>* InFilteredAttributes, enum class EPCGMetadataFilterMode* InFilterMode);
	void InitializeAsCopy(class UPCGMetadata** InMetadataToCopy);
	void Initialize(class UPCGMetadata* InParent);
	bool HasCommonAttributes(class UPCGMetadata* InMetaData);
	bool HasAttribute(class FName* AttributeName);
	TArray<enum class EPCGMetadataTypes> GetAttributes(const TArray<class FName>& AttributeNames);
	void DeleteAttribute(class FName* AttributeName);
	struct FVector CreateVectorAttribute(class FName* AttributeName, bool* bAllowsInterpolation, bool* bOverrideParent);
	struct FVector4 CreateVector4Attribute(class FName* AttributeName, bool* bAllowsInterpolation, bool* bOverrideParent);
	struct FVector2D CreateVector2Attribute(class FName* AttributeName, bool* bAllowsInterpolation, bool* bOverrideParent);
	struct FTransform CreateTransformAttribute(class FName* AttributeName, bool* bAllowsInterpolation, bool* bOverrideParent);
	class FString CreateStringAttribute(class FName* AttributeName, bool* bAllowsInterpolation, bool* bOverrideParent);
	struct FRotator CreateRotatorAttribute(class FName* AttributeName, bool* bAllowsInterpolation, bool* bOverrideParent);
	struct FQuat CreateQuatAttribute(class FName* AttributeName, bool* bAllowsInterpolation, bool* bOverrideParent);
	int64 CreateInteger64Attribute(class FName* AttributeName, bool* bAllowsInterpolation, bool* bOverrideParent);
	int32 CreateInteger32Attribute(class FName* AttributeName, bool* bAllowsInterpolation, bool* bOverrideParent);
	float CreateFloatAttribute(class FName* AttributeName, bool* bAllowsInterpolation, bool* bOverrideParent);
	double CreateDoubleAttribute(class FName* AttributeName, bool* bAllowsInterpolation, bool* bOverrideParent);
	bool CreateBoolAttribute(class FName* AttributeName, bool* bAllowsInterpolation, bool* bOverrideParent);
	bool CopyExistingAttribute(class FName* AttributeToCopy, bool* bKeepParent);
	void CopyAttributes(class UPCGMetadata* InOther);
	class FName CopyAttribute(class UPCGMetadata* InOther, class FName* AttributeToCopy);
	void ClearAttribute(class FName* AttributeToClear);
	int64 AddEntry(int64* ParentEntryKey);
	void AddAttributesFiltered(class UPCGMetadata* InOther, TSet<class FName>* InFilteredAttributes, enum class EPCGMetadataFilterMode* InFilterMode);
	void AddAttributes(class UPCGMetadata* InOther);
	void AddAttribute(class UPCGMetadata* InOther, class FName* AttributeName);
	float AccumulateWeightedAttributesByKey(int64 Key, class UPCGMetadata** MetaData, bool* bSetNonInterpolableAttributes, int64* TargetKey, int64* OutKey);
	float AccumulatePointWeightedAttributes(class UPCGMetadata* InMetaData, bool* bSetNonInterpolableAttributes, const struct FPCGPoint& OutPoint);
};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGMetadataAccessorHelpers
class UPCGMetadataAccessorHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPCGMetadataAccessorHelpers* GetDefaultObj();

	void SetVectorAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName, const struct FVector& Value);
	struct FPCGPoint SetVectorAttribute(class UPCGMetadata** MetaData, class FName* AttributeName, const struct FVector& Value);
	void SetVector4AttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName, const struct FVector4& Value);
	struct FPCGPoint SetVector4Attribute(class UPCGMetadata** MetaData, class FName* AttributeName, const struct FVector4& Value);
	void SetVector2AttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName, const struct FVector2D& Value);
	struct FPCGPoint SetVector2Attribute(class UPCGMetadata** MetaData, class FName* AttributeName, const struct FVector2D& Value);
	void SetTransformAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName, const struct FTransform& Value);
	struct FPCGPoint SetTransformAttribute(class UPCGMetadata** MetaData, class FName* AttributeName, const struct FTransform& Value);
	void SetStringAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName, const class FString& Value);
	struct FPCGPoint SetStringAttribute(class UPCGMetadata** MetaData, class FName* AttributeName, const class FString& Value);
	void SetRotatorAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName, const struct FRotator& Value);
	struct FPCGPoint SetRotatorAttribute(class UPCGMetadata** MetaData, class FName* AttributeName, const struct FRotator& Value);
	void SetQuatAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName, const struct FQuat& Value);
	struct FPCGPoint SetQuatAttribute(class UPCGMetadata** MetaData, class FName* AttributeName, const struct FQuat& Value);
	void SetInteger64AttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName, int64 Value);
	struct FPCGPoint SetInteger64Attribute(class UPCGMetadata** MetaData, class FName* AttributeName, int64 Value);
	void SetInteger32AttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName, int32 Value);
	struct FPCGPoint SetInteger32Attribute(class UPCGMetadata** MetaData, class FName* AttributeName, int32 Value);
	void SetFloatAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName, float Value);
	struct FPCGPoint SetFloatAttribute(class UPCGMetadata** MetaData, class FName* AttributeName, float Value);
	void SetDoubleAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName, double Value);
	struct FPCGPoint SetDoubleAttribute(class UPCGMetadata** MetaData, class FName* AttributeName, double Value);
	void SetBoolAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName, bool Value);
	struct FPCGPoint SetBoolAttribute(class UPCGMetadata** MetaData, class FName* AttributeName, bool Value);
	bool SetAttributeFromPropertyByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName, class UObject** Object);
	struct FPCGPoint InitializeMetadata(class UPCGMetadata** MetaData, struct FPCGPoint* ParentPoint, class UPCGMetadata** ParentMetadata);
	bool HasAttributeSetByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName);
	bool HasAttributeSet(class UPCGMetadata** MetaData, class FName* AttributeName);
	struct FVector GetVectorAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName);
	struct FVector GetVectorAttribute(class UPCGMetadata** MetaData, class FName* AttributeName);
	struct FVector4 GetVector4AttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName);
	struct FVector4 GetVector4Attribute(class UPCGMetadata** MetaData, class FName* AttributeName);
	struct FVector2D GetVector2AttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName);
	struct FVector2D GetVector2Attribute(class UPCGMetadata** MetaData, class FName* AttributeName);
	struct FTransform GetTransformAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName);
	struct FTransform GetTransformAttribute(class UPCGMetadata** MetaData, class FName* AttributeName);
	class FString GetStringAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName);
	class FString GetStringAttribute(class UPCGMetadata** MetaData, class FName* AttributeName);
	struct FRotator GetRotatorAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName);
	struct FRotator GetRotatorAttribute(class UPCGMetadata** MetaData, class FName* AttributeName);
	struct FQuat GetQuatAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName);
	struct FQuat GetQuatAttribute(class UPCGMetadata** MetaData, class FName* AttributeName);
	int64 GetInteger64AttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName);
	int64 GetInteger64Attribute(class UPCGMetadata** MetaData, class FName* AttributeName);
	int32 GetInteger32AttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName);
	int32 GetInteger32Attribute(class UPCGMetadata** MetaData, class FName* AttributeName);
	float GetFloatAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName);
	float GetFloatAttribute(class UPCGMetadata** MetaData, class FName* AttributeName);
	double GetDoubleAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName);
	double GetDoubleAttribute(class UPCGMetadata** MetaData, class FName* AttributeName);
	bool GetBoolAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FName* AttributeName);
	bool GetBoolAttribute(class UPCGMetadata** MetaData, class FName* AttributeName);
	struct FPCGPoint CopyPoint(const struct FPCGPoint& OutPoint, bool* bCopyMetadata, class UPCGMetadata* InMetaData, class UPCGMetadata* OutMetadata);
};

// 0x100 (0x1B8 - 0xB8)
// Class PCG.PCGComponent
class UPCGComponent : public UActorComponent
{
public:
	enum class EPCGComponentInput                InputType;                                         // 0xB8(0x1)(Edit, ConstParm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bParseActorComponents;                             // 0xB9(0x1)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F41[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Seed;                                              // 0xBC(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bActivated;                                        // 0xC0(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsComponentPartitioned;                           // 0xC1(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGComponentGenerationTrigger    GenerationTrigger;                                 // 0xC2(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGenerated;                                        // 0xC3(0x1)(ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRuntimeGenerated;                                 // 0xC4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F44[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          PostGenerateFunctionNames;                         // 0xC8(0x10)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGGraphInstance*                     GraphInstance;                                     // 0xD8(0x8)(ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGData*                              CachedPCGData;                                     // 0xE0(0x8)(EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGData*                              CachedInputData;                                   // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGData*                              CachedActorData;                                   // 0xF0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGData*                              CachedLandscapeData;                               // 0xF8(0x8)(Edit, ConstParm, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGData*                              CachedLandscapeHeightData;                         // 0x100(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class UPCGManagedResource*>           GeneratedResources;                                // 0x108(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F4A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  LastGeneratedBounds;                               // 0x120(0x38)(ConstParm, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FPCGDataCollection                    GeneratedGraphOutput;                              // 0x158(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F4D[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bIsComponentLocal;                                 // 0x188(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F4E[0x2F];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGComponent* GetDefaultObj();

	void SetGraph(class UPCGGraphInterface** InGraph);
	void NotifyPropertiesChangedFromBlueprint();
	struct FPCGDataCollection GetGeneratedGraphOutput();
	void GenerateLocal(bool* bForce);
	void Generate(bool* bForce);
	class AActor* ClearPCGLink();
	void CleanupLocal(bool* bRemoveComponents, bool* bSave);
	void Cleanup(bool* bRemoveComponents, bool* bSave);
	void AddToManagedResources(class UPCGManagedResource** InResource);
};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGDataFunctionLibrary
class UPCGDataFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPCGDataFunctionLibrary* GetDefaultObj();

	TArray<struct FPCGTaggedData> GetTaggedParams(const struct FPCGDataCollection& InCollection);
	TArray<struct FPCGTaggedData> GetTaggedInputs(const struct FPCGDataCollection& InCollection);
	TArray<struct FPCGTaggedData> GetParamsByPin(const struct FPCGDataCollection& InCollection, class FName InPinLabel);
	TArray<struct FPCGTaggedData> GetParams(const struct FPCGDataCollection& InCollection);
	TArray<struct FPCGTaggedData> GetInputsByPin(const struct FPCGDataCollection& InCollection, class FName InPinLabel);
	TArray<struct FPCGTaggedData> GetInputs(const struct FPCGDataCollection& InCollection);
	TArray<struct FPCGTaggedData> GetAllSettings(const struct FPCGDataCollection& InCollection);
};

// 0x30 (0x58 - 0x28)
// Class PCG.PCGEdge
class UPCGEdge : public UObject
{
public:
	class FName                                  InboundLabel;                                      // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGNode*                              InboundNode;                                       // 0x30(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  OutboundLabel;                                     // 0x38(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGNode*                              OutboundNode;                                      // 0x40(0x8)(BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGPin*                               InputPin;                                          // 0x48(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor)
	class UPCGPin*                               OutputPin;                                         // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor)

	static class UClass* StaticClass();
	static class UPCGEdge* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGGraphInterface
class UPCGGraphInterface : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPCGGraphInterface* GetDefaultObj();

	class UPCGGraph* GetMutablePCGGraph();
	class UPCGGraph* GetConstPCGGraph();
};

// 0x38 (0x60 - 0x28)
// Class PCG.PCGGraph
class UPCGGraph : public UPCGGraphInterface
{
public:
	bool                                         bLandscapeUsesMetadata;                            // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F85[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPCGNode*>                      Nodes;                                             // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPCGNode*                              InputNode;                                         // 0x40(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGNode*                              OutputNode;                                        // 0x48(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FInstancedPropertyBag                 UserParameters;                                    // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGGraph* GetDefaultObj();

	void RemoveNode(class UPCGNode** InNode);
	bool RemoveEdge(class UPCGNode* From, class FName FromLabel, class FName ToLabel);
	class UPCGNode* GetOutputNode();
	class UPCGNode* GetInputNode();
	class UPCGNode* AddNodeOfType(class UClass* InSettingsClass, class UPCGSettings* DefaultNodeSettings);
	class UPCGNode* AddNodeInstance();
	class UPCGNode* AddNodeCopy(class UPCGSettings* DefaultNodeSettings);
	class UPCGNode* AddEdge(class UPCGNode* From);
};

// 0x68 (0x90 - 0x28)
// Class PCG.PCGGraphInstance
class UPCGGraphInstance : public UPCGGraphInterface
{
public:
	class UPCGGraphInterface*                    Graph;                                             // 0x28(0x8)(Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FPCGOverrideInstancedPropertyBag      ParametersOverrides;                               // 0x30(0x60)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGGraphInstance* GetDefaultObj();

};

// 0xA8 (0x1F0 - 0x148)
// Class PCG.PCGGraphInputOutputSettings
class UPCGGraphInputOutputSettings : public UPCGSettings
{
public:
	TSet<class FName>                            PinLabels;                                         // 0x148(0x50)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGPinProperties>             CustomPins;                                        // 0x198(0x10)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F8B[0x48];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGGraphInputOutputSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class PCG.PCGManagedResource
class UPCGManagedResource : public UObject
{
public:
	struct FPCGCrc                               Crc;                                               // 0x28(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsMarkedUnused;                                   // 0x30(0x1)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F8D[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGManagedResource* GetDefaultObj();

};

// 0x50 (0x88 - 0x38)
// Class PCG.PCGManagedActors
class UPCGManagedActors : public UPCGManagedResource
{
public:
	TSet<TSoftObjectPtr<class AActor>>           GeneratedActors;                                   // 0x38(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGManagedActors* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class PCG.PCGManagedComponent
class UPCGManagedComponent : public UPCGManagedResource
{
public:
	TSoftObjectPtr<class UActorComponent>        GeneratedComponent;                                // 0x38(0x30)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGManagedComponent* GetDefaultObj();

};

// 0x1D8 (0x240 - 0x68)
// Class PCG.PCGManagedISMComponent
class UPCGManagedISMComponent : public UPCGManagedComponent
{
public:
	bool                                         bHasDescriptor;                                    // 0x68(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F90[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FISMComponentDescriptor               Descriptor;                                        // 0x70(0x1C0)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint64                                       SettingsUID;                                       // 0x230(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F92[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGManagedISMComponent* GetDefaultObj();

};

// 0x58 (0x90 - 0x38)
// Class PCG.PCGParamData
class UPCGParamData : public UPCGData
{
public:
	class UPCGMetadata*                          MetaData;                                          // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	TMap<class FName, int64>                     NameMap;                                           // 0x40(0x50)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGParamData* GetDefaultObj();

	class UPCGMetadata* MutableMetadata();
	int64 FindOrAddMetadataKey();
	int64 FindMetadataKey();
	class UPCGParamData* FilterParamsByName();
	class UPCGParamData* FilterParamsByKey(int64* InKey);
	class UPCGMetadata* ConstMetadata();
};

// 0x30 (0x58 - 0x28)
// Class PCG.PCGPin
class UPCGPin : public UObject
{
public:
	class UPCGNode*                              Node;                                              // 0x28(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	class FName                                  Label;                                             // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class UPCGEdge*>                      Edges;                                             // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	struct FPCGPinProperties                     Properties;                                        // 0x48(0x10)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGPin* GetDefaultObj();

	void SetToolTip(class FText* InTooltip);
	class FText GetTooltip();
};

// 0x8 (0x48 - 0x40)
// Class PCG.PCGSettingsInstance
class UPCGSettingsInstance : public UPCGSettingsInterface
{
public:
	class UPCGSettings*                          Settings;                                          // 0x40(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGSettingsInstance* GetDefaultObj();

};

// 0x0 (0x148 - 0x148)
// Class PCG.PCGTrivialSettings
class UPCGTrivialSettings : public UPCGSettings
{
public:

	static class UClass* StaticClass();
	static class UPCGTrivialSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGSubgraphSettings
class UPCGSubgraphSettings : public UPCGBaseSubgraphSettings
{
public:
	class UPCGGraphInstance*                     SubgraphInstance;                                  // 0x148(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGSubgraphSettings* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class PCG.PCGSubgraphNode
class UPCGSubgraphNode : public UPCGBaseSubgraphNode
{
public:

	static class UClass* StaticClass();
	static class UPCGSubgraphNode* GetDefaultObj();

};

// 0x480 (0x4C0 - 0x40)
// Class PCG.PCGSubsystem
class UPCGSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_1FAB[0x480];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSubsystem* GetDefaultObj();

};

// 0x8 (0x520 - 0x518)
// Class PCG.PCGVolume
class APCGVolume : public AVolume
{
public:
	class UPCGComponent*                         PCGComponent;                                      // 0x518(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class APCGVolume* GetDefaultObj();

};

// 0x18 (0x4E0 - 0x4C8)
// Class PCG.PCGWorldActor
class APCGWorldActor : public AActor
{
public:
	uint32                                       PartitionGridSize;                                 // 0x4C8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FB8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPCGLandscapeCache*                    LandscapeCacheObject;                              // 0x4D0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUse2DGrid;                                        // 0x4D8(0x1)(ConstParm, BlueprintReadOnly, Net, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FB9[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APCGWorldActor* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGDeterminismTestBlueprintBase
class UPCGDeterminismTestBlueprintBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPCGDeterminismTestBlueprintBase* GetDefaultObj();

	void ExecuteTest(class UPCGNode** InPCGNode, struct FDeterminismTestResult* InOutTestResult);
};

// 0x188 (0x650 - 0x4C8)
// Class PCG.PCGUnitTestDummyActor
class APCGUnitTestDummyActor : public AActor
{
public:
	int32                                        IntProperty;                                       // 0x4C8(0x4)(ConstParm, ExportObject)
	float                                        FloatProperty;                                     // 0x4CC(0x4)(ExportObject, BlueprintReadOnly)
	int64                                        Int64Property;                                     // 0x4D0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm)
	double                                       DoubleProperty;                                    // 0x4D8(0x8)(ExportObject, BlueprintReadOnly, Net)
	bool                                         BoolProperty;                                      // 0x4E0(0x1)(Edit, BlueprintReadOnly)
	uint8                                        Pad_1FC1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  NameProperty;                                      // 0x4E4(0x8)(ExportObject, Net)
	uint8                                        Pad_1FC2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                StringProperty;                                    // 0x4F0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGUnitTestDummyEnum             EnumProperty;                                      // 0x500(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm)
	struct FVector                               VectorProperty;                                    // 0x508(0x18)(BlueprintReadOnly, EditFixedSize)
	struct FVector4                              Vector4Property;                                   // 0x520(0x20)(ConstParm, BlueprintReadOnly, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FTransform                            TransformProperty;                                 // 0x540(0x60)(ExportObject, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FRotator                              RotatorProperty;                                   // 0x5A0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize)
	uint8                                        Pad_1FC5[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 QuatProperty;                                      // 0x5C0(0x20)(Edit, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       SoftObjectPathProperty;                            // 0x5E0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FSoftClassPath                        SoftClassPathProperty;                             // 0x600(0x20)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                ClassProperty;                                     // 0x620(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, GlobalConfig)
	class UObject*                               ObjectProperty;                                    // 0x628(0x8)(Net)
	struct FVector2D                             Vector2Property;                                   // 0x630(0x10)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                ColorProperty;                                     // 0x640(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FC7[0xC];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APCGUnitTestDummyActor* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class PCG.PCGUnitTestDummyComponent
class UPCGUnitTestDummyComponent : public UActorComponent
{
public:
	int32                                        IntProperty;                                       // 0xB8(0x4)(ConstParm, ExportObject)
	uint8                                        Pad_1FC9[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGUnitTestDummyComponent* GetDefaultObj();

};

}


