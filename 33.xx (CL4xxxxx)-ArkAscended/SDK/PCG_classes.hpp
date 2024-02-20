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
	double                                       DoubleValue;                                       // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

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

	void SetPointProperty(struct FPCGAttributePropertySelector* Selector, enum class EPCGPointProperties* InPointProperty, bool ReturnValue);
	void SetAttributeName(struct FPCGAttributePropertySelector* Selector, class FName* InAttributeName, bool ReturnValue);
	void GetName(struct FPCGAttributePropertySelector* Selector, class FName ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class PCG.PCGData
class UPCGData : public UObject
{
public:
	uint64                                       UID;                                               // 0x28(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_49C[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGData* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class PCG.PCGSpatialData
class UPCGSpatialData : public UPCGData
{
public:
	TWeakObjectPtr<class AActor>                 TargetActor;                                       // 0x38(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPCGMetadata*                          MetaData;                                          // 0x40(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPCGSpatialData* GetDefaultObj();

	void UnionWith(class UPCGSpatialData* InOther, class UPCGUnionData* ReturnValue);
	void ToPointDataWithContext(struct FPCGContext* Context, class UPCGPointData* ReturnValue);
	void ToPointData(class UPCGPointData* ReturnValue);
	void Subtract(class UPCGSpatialData* InOther, class UPCGDifferenceData* ReturnValue);
	struct FBox SamplePoint(struct FTransform* Transform, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, bool ReturnValue);
	void ProjectPoint(const struct FTransform& InTransform, const struct FBox& InBounds, const struct FPCGProjectionParams& InParams, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, bool ReturnValue);
	void ProjectOn(class UPCGSpatialData* InOther, const struct FPCGProjectionParams& InParams, class UPCGSpatialData* ReturnValue);
	void MutableMetadata(class UPCGMetadata* ReturnValue);
	void IntersectWith(class UPCGSpatialData* InOther, class UPCGIntersectionData* ReturnValue);
	void InitializeFromData(class UPCGSpatialData* InSource, class UPCGMetadata** InMetadataParentOverride, bool* bInheritMetadata, bool* bInheritAttributes);
	void HasNonTrivialTransform(bool ReturnValue);
	void GetStrictBounds(const struct FBox& ReturnValue);
	void GetNormal(const struct FVector& ReturnValue);
	void GetDimension(int32 ReturnValue);
	void GetDensityAtPosition(struct FVector* InPosition, float ReturnValue);
	void GetBounds(const struct FBox& ReturnValue);
	void CreateEmptyMetadata(class UPCGMetadata* ReturnValue);
	void ConstMetadata(class UPCGMetadata* ReturnValue);
};

// 0x50 (0x98 - 0x48)
// Class PCG.PCGSpatialDataWithPointCache
class UPCGSpatialDataWithPointCache : public UPCGSpatialData
{
public:
	class UPCGPointData*                         CachedPointData;                                   // 0x48(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<struct FBox>                          CachedBoundedPointDataBoxes;                       // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<class UPCGPointData*>                 CachedBoundedPointData;                            // 0x60(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_506[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSpatialDataWithPointCache* GetDefaultObj();

};

// 0xF8 (0x190 - 0x98)
// Class PCG.PCGCollisionShapeData
class UPCGCollisionShapeData : public UPCGSpatialDataWithPointCache
{
public:
	uint8                                        Pad_507[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0xA0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	uint8                                        Pad_509[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  CachedBounds;                                      // 0x118(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FBox                                  CachedStrictBounds;                                // 0x150(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_50A[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGCollisionShapeData* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class PCG.PCGSettingsInterface
class UPCGSettingsInterface : public UPCGData
{
public:
	bool                                         bEnabled;                                          // 0x38(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         bDebug;                                            // 0x39(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50F[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSettingsInterface* GetDefaultObj();

};

// 0x108 (0x148 - 0x40)
// Class PCG.PCGSettings
class UPCGSettings : public UPCGSettingsInterface
{
public:
	int32                                        Seed;                                              // 0x40(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_512[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TSet<class FString>                          FilterOnTags;                                      // 0x48(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	bool                                         bPassThroughFilteredOutInputs;                     // 0x98(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_514[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TSet<class FString>                          TagsAppliedOnOutput;                               // 0xA0(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	bool                                         bUseSeed;                                          // 0xF0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_515[0x3F];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPCGSettingsOverridableParam>  CachedOverridableParams;                           // 0x130(0x10)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_517[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSettings* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGDistanceSettings
class UPCGDistanceSettings : public UPCGSettings
{
public:
	class FName                                  AttributeName;                                     // 0x148(0x8)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOutputDistanceVector;                             // 0x150(0x1)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	bool                                         bSetDensity;                                       // 0x151(0x1)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_51F[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       MaximumDistance;                                   // 0x158(0x8)(Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	enum class EPCGDistanceShape                 SourceShape;                                       // 0x160(0x4)(BlueprintVisible, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	enum class EPCGDistanceShape                 TargetShape;                                       // 0x164(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGDistanceSettings* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class PCG.PCGEngineSettings
class UPCGEngineSettings : public UObject
{
public:
	struct FVector                               VolumeScale;                                       // 0x28(0x18)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bGenerateOnDrop;                                   // 0x40(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_523[0x7];                                      // Fixing Size Of Struct > TateDumper <

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
	struct FVector                               Normal;                                            // 0x148(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	double                                       Offset;                                            // 0x160(0x8)(Edit, ExportObject, Parm, Transient, Config, DisableEditOnInstance, EditConst)
	double                                       Strength;                                          // 0x168(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	enum class EPCGNormalToDensityMode           DensityMode;                                       // 0x170(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_52B[0x7];                                      // Fixing Size Of Struct > TateDumper <

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
	struct FGuid                                 PropertyGuid;                                      // 0x148(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class FName                                  PropertyName;                                      // 0x158(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGUserParameterGetSettings* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class PCG.PCGUserParametersData
class UPCGUserParametersData : public UPCGData
{
public:
	class UPCGGraphInterface*                    OriginalGraph;                                     // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FInstancedStruct                      UserParameters;                                    // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGUserParametersData* GetDefaultObj();

};

// 0x28 (0xC0 - 0x98)
// Class PCG.PCGDifferenceData
class UPCGDifferenceData : public UPCGSpatialDataWithPointCache
{
public:
	bool                                         bDiffMetadata;                                     // 0x98(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_53B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UPCGSpatialData*                       Source;                                            // 0xA0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	class UPCGSpatialData*                       Difference;                                        // 0xA8(0x8)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UPCGUnionData*                         DifferencesUnion;                                  // 0xB0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	enum class EPCGDifferenceDensityFunction     DensityFunction;                                   // 0xB8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_54B[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGDifferenceData* GetDefaultObj();

	void SetDensityFunction(enum class EPCGDifferenceDensityFunction InDensityFunction);
	class UPCGSpatialData* Initialize();
	void AddDifference(class UPCGSpatialData* InDifference);
};

// 0x88 (0x120 - 0x98)
// Class PCG.PCGIntersectionData
class UPCGIntersectionData : public UPCGSpatialDataWithPointCache
{
public:
	enum class EPCGIntersectionDensityFunction   DensityFunction;                                   // 0x98(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_553[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UPCGSpatialData*                       A;                                                 // 0xA0(0x8)(Edit, Parm, OutParm, ReturnParm, Transient, Config)
	class UPCGSpatialData*                       B;                                                 // 0xA8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config)
	struct FBox                                  CachedBounds;                                      // 0xB0(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FBox                                  CachedStrictBounds;                                // 0xE8(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGIntersectionData* GetDefaultObj();

	void Initialize(class UPCGSpatialData** InA, class UPCGSpatialData** InB);
};

// 0x68 (0x100 - 0x98)
// Class PCG.PCGSurfaceData
class UPCGSurfaceData : public UPCGSpatialDataWithPointCache
{
public:
	uint8                                        Pad_554[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0xA0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)

	static class UClass* StaticClass();
	static class UPCGSurfaceData* GetDefaultObj();

};

// 0x70 (0x170 - 0x100)
// Class PCG.PCGLandscapeData
class UPCGLandscapeData : public UPCGSurfaceData
{
public:
	TArray<TSoftObjectPtr<class ALandscapeProxy>> Landscapes;                                        // 0x100(0x10)(BlueprintVisible, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FBox                                  Bounds;                                            // 0x110(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHeightOnly;                                       // 0x148(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	bool                                         bUseMetadata;                                      // 0x149(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_557[0x26];                                     // Fixing Size Of Struct > TateDumper <

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
	TWeakObjectPtr<class ULandscapeSplinesComponent> Spline;                                            // 0x98(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config)

	static class UClass* StaticClass();
	static class UPCGLandscapeSplineData* GetDefaultObj();

};

// 0x128 (0x170 - 0x48)
// Class PCG.PCGPointData
class UPCGPointData : public UPCGSpatialData
{
public:
	TArray<struct FPCGPoint>                     Points;                                            // 0x48(0x10)(Edit, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_566[0x118];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGPointData* GetDefaultObj();

	void SetPoints(TArray<struct FPCGPoint>* InPoints);
	void GetPoints(const TArray<struct FPCGPoint>& ReturnValue);
	void GetPoint(int32* Index, const struct FPCGPoint& ReturnValue);
	class UPCGPointData* CopyPointsFrom(TArray<int32>* InDataIndices);
};

// 0x90 (0x128 - 0x98)
// Class PCG.PCGPrimitiveData
class UPCGPrimitiveData : public UPCGSpatialDataWithPointCache
{
public:
	struct FVector                               VoxelSize;                                         // 0x98(0x18)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TWeakObjectPtr<class UPrimitiveComponent>    Primitive;                                         // 0xB0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst)
	struct FBox                                  CachedBounds;                                      // 0xB8(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FBox                                  CachedStrictBounds;                                // 0xF0(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGPrimitiveData* GetDefaultObj();

};

// 0xA0 (0x138 - 0x98)
// Class PCG.PCGProjectionData
class UPCGProjectionData : public UPCGSpatialDataWithPointCache
{
public:
	class UPCGSpatialData*                       Source;                                            // 0x98(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	class UPCGSpatialData*                       Target;                                            // 0xA0(0x8)(Edit, ConstParm, ReturnParm, Transient, Config)
	struct FBox                                  CachedBounds;                                      // 0xA8(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FBox                                  CachedStrictBounds;                                // 0xE0(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGProjectionParams                  ProjectionParams;                                  // 0x118(0x20)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGProjectionData* GetDefaultObj();

};

// 0xB0 (0x1B0 - 0x100)
// Class PCG.PCGBaseTextureData
class UPCGBaseTextureData : public UPCGSurfaceData
{
public:
	enum class EPCGTextureDensityFunction        DensityFunction;                                   // 0x100(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	enum class EPCGTextureColorChannel           ColorChannel;                                      // 0x101(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_579[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        TexelSize;                                         // 0x104(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	bool                                         bUseAdvancedTiling;                                // 0x108(0x1)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_57B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Tiling;                                            // 0x110(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector2D                             CenterOffset;                                      // 0x120(0x10)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	float                                        Rotation;                                          // 0x130(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         bUseTileBounds;                                    // 0x134(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_57E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FBox2D                                TileBounds;                                        // 0x138(0x28)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<struct FLinearColor>                  ColorData;                                         // 0x160(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FBox                                  Bounds;                                            // 0x170(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Height;                                            // 0x1A8(0x4)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	int32                                        Width;                                             // 0x1AC(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)

	static class UClass* StaticClass();
	static class UPCGBaseTextureData* GetDefaultObj();

};

// 0x10 (0x1C0 - 0x1B0)
// Class PCG.PCGRenderTargetData
class UPCGRenderTargetData : public UPCGBaseTextureData
{
public:
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x1B0(0x8)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, InstancedReference)
	uint8                                        Pad_58A[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGRenderTargetData* GetDefaultObj();

	void Initialize(class UTextureRenderTarget2D** InRenderTarget, const struct FTransform& InTransform);
};

// 0x1A8 (0x240 - 0x98)
// Class PCG.PCGSplineData
class UPCGSplineData : public UPCGPolyLineData
{
public:
	uint8                                        Pad_58B[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FPCGSplineStruct                      SplineStruct;                                      // 0xA0(0x160)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FBox                                  CachedBounds;                                      // 0x200(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_58D[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSplineData* GetDefaultObj();

};

// 0x18 (0x150 - 0x138)
// Class PCG.PCGSplineProjectionData
class UPCGSplineProjectionData : public UPCGProjectionData
{
public:
	struct FInterpCurveVector2D                  ProjectedPosition;                                 // 0x138(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGSplineProjectionData* GetDefaultObj();

};

// 0x10 (0x1C0 - 0x1B0)
// Class PCG.PCGTextureData
class UPCGTextureData : public UPCGBaseTextureData
{
public:
	TWeakObjectPtr<class UTexture2D>             Texture;                                           // 0x1B0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_598[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGTextureData* GetDefaultObj();

	void Initialize(class UTexture2D** InTexture, const struct FTransform& InTransform);
};

// 0x98 (0x130 - 0x98)
// Class PCG.PCGUnionData
class UPCGUnionData : public UPCGSpatialDataWithPointCache
{
public:
	TArray<class UPCGSpatialData*>               Data;                                              // 0x98(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UPCGSpatialData*                       FirstNonTrivialTransformData;                      // 0xA8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	enum class EPCGUnionType                     UnionType;                                         // 0xB0(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	enum class EPCGUnionDensityFunction          DensityFunction;                                   // 0xB1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_5A6[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  CachedBounds;                                      // 0xB8(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FBox                                  CachedStrictBounds;                                // 0xF0(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	int32                                        CachedDimension;                                   // 0x128(0x4)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_5A8[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGUnionData* GetDefaultObj();

	void Initialize(class UPCGSpatialData** InA, class UPCGSpatialData** InB);
	class UPCGSpatialData* AddData();
};

// 0x90 (0x128 - 0x98)
// Class PCG.PCGVolumeData
class UPCGVolumeData : public UPCGSpatialDataWithPointCache
{
public:
	struct FVector                               VoxelSize;                                         // 0x98(0x18)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TWeakObjectPtr<class AVolume>                Volume;                                            // 0xB0(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config)
	struct FBox                                  Bounds;                                            // 0xB8(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FBox                                  StrictBounds;                                      // 0xF0(0x38)(Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGVolumeData* GetDefaultObj();

};

// 0x88 (0x1B0 - 0x128)
// Class PCG.PCGWorldVolumetricData
class UPCGWorldVolumetricData : public UPCGVolumeData
{
public:
	TWeakObjectPtr<class UWorld>                 World;                                             // 0x128(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance)
	TWeakObjectPtr<class UPCGComponent>          OriginatingComponent;                              // 0x130(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGWorldVolumetricQueryParams        QueryParams;                                       // 0x138(0x78)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGWorldVolumetricData* GetDefaultObj();

};

// 0x100 (0x200 - 0x100)
// Class PCG.PCGWorldRayHitData
class UPCGWorldRayHitData : public UPCGSurfaceData
{
public:
	TWeakObjectPtr<class UWorld>                 World;                                             // 0x100(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance)
	TWeakObjectPtr<class UPCGComponent>          OriginatingComponent;                              // 0x108(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FBox                                  Bounds;                                            // 0x110(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FPCGWorldRayHitQueryParams            QueryParams;                                       // 0x148(0xB8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGWorldRayHitData* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGMetadataSettingsBase
class UPCGMetadataSettingsBase : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         OutputTarget;                                      // 0x148(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataSettingsBase* GetDefaultObj();

};

// 0x48 (0x1B0 - 0x168)
// Class PCG.PCGMetadataBitwiseSettings
class UPCGMetadataBitwiseSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataBitwiseOperation      Operation;                                         // 0x168(0x2)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5BD[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataBitwiseSettings* GetDefaultObj();

};

// 0x48 (0x1B0 - 0x168)
// Class PCG.PCGMetadataBooleanSettings
class UPCGMetadataBooleanSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataBooleanOperation      Operation;                                         // 0x168(0x2)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5C7[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataBooleanSettings* GetDefaultObj();

};

// 0x20 (0x188 - 0x168)
// Class PCG.PCGMetadataBreakTransformSettings
class UPCGMetadataBreakTransformSettings : public UPCGMetadataSettingsBase
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x168(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataBreakTransformSettings* GetDefaultObj();

};

// 0x20 (0x188 - 0x168)
// Class PCG.PCGMetadataBreakVectorSettings
class UPCGMetadataBreakVectorSettings : public UPCGMetadataSettingsBase
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x168(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataBreakVectorSettings* GetDefaultObj();

};

// 0x50 (0x1B8 - 0x168)
// Class PCG.PCGMetadataCompareSettings
class UPCGMetadataCompareSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataCompareOperation      Operation;                                         // 0x168(0x2)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5D9[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	double                                       Tolerance;                                         // 0x1B0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataCompareSettings* GetDefaultObj();

};

// 0x40 (0x188 - 0x148)
// Class PCG.PCGMetadataOperationSettings
class UPCGMetadataOperationSettings : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x148(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FPCGAttributePropertySelector         OutputTarget;                                      // 0x168(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataOperationSettings* GetDefaultObj();

};

// 0x60 (0x1C8 - 0x168)
// Class PCG.PCGMetadataMakeTransformSettings
class UPCGMetadataMakeTransformSettings : public UPCGMetadataSettingsBase
{
public:
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x168(0x20)(Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x188(0x20)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1A8(0x20)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataMakeTransformSettings* GetDefaultObj();

};

// 0x88 (0x1F0 - 0x168)
// Class PCG.PCGMetadataMakeVectorSettings
class UPCGMetadataMakeVectorSettings : public UPCGMetadataSettingsBase
{
public:
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x168(0x20)(Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x188(0x20)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1A8(0x20)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource4;                                      // 0x1C8(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	enum class EPCGMetadataTypes                 OutputType;                                        // 0x1E8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPCGMetadataMakeVector3           MakeVector3Op;                                     // 0x1E9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	enum class EPCGMetadataMakeVector4           MakeVector4Op;                                     // 0x1EA(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_5ED[0x5];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGMetadataMakeVectorSettings* GetDefaultObj();

};

// 0x68 (0x1D0 - 0x168)
// Class PCG.PCGMetadataMathsSettings
class UPCGMetadataMathsSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataMathsOperation        Operation;                                         // 0x168(0x2)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5F2[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1B0(0x20)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataMathsSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGMetadataPartitionSettings
class UPCGMetadataPartitionSettings : public UPCGSettings
{
public:
	class FName                                  PartitionAttribute;                                // 0x148(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataPartitionSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGMetadataRenameSettings
class UPCGMetadataRenameSettings : public UPCGSettings
{
public:
	class FName                                  AttributeToRename;                                 // 0x148(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class FName                                  NewAttributeName;                                  // 0x150(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataRenameSettings* GetDefaultObj();

};

// 0x68 (0x1D0 - 0x168)
// Class PCG.PCGMetadataRotatorSettings
class UPCGMetadataRotatorSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataRotatorOperation      Operation;                                         // 0x168(0x2)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5FA[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1B0(0x20)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataRotatorSettings* GetDefaultObj();

};

// 0x68 (0x1D0 - 0x168)
// Class PCG.PCGMetadataTransformSettings
class UPCGMetadataTransformSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataTransformOperation    Operation;                                         // 0x168(0x2)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	enum class EPCGTransformLerpMode             TransformLerpMode;                                 // 0x16A(0x2)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_603[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1B0(0x20)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataTransformSettings* GetDefaultObj();

};

// 0x48 (0x1B0 - 0x168)
// Class PCG.PCGMetadataTrigSettings
class UPCGMetadataTrigSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataTrigOperation         Operation;                                         // 0x168(0x2)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	uint8                                        Pad_608[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataTrigSettings* GetDefaultObj();

};

// 0x68 (0x1D0 - 0x168)
// Class PCG.PCGMetadataVectorSettings
class UPCGMetadataVectorSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataVectorOperation       Operation;                                         // 0x168(0x2)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	uint8                                        Pad_60D[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1B0(0x20)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataVectorSettings* GetDefaultObj();

};

// 0x18 (0x160 - 0x148)
// Class PCG.PCGAttributeFilterSettings
class UPCGAttributeFilterSettings : public UPCGSettings
{
public:
	enum class EPCGAttributeFilterOperation      Operation;                                         // 0x148(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	uint8                                        Pad_611[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                SelectedAttributes;                                // 0x150(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGAttributeFilterSettings* GetDefaultObj();

};

// 0x30 (0x178 - 0x148)
// Class PCG.PCGAttributeGetFromPointIndexSettings
class UPCGAttributeGetFromPointIndexSettings : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x148(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Index;                                             // 0x168(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class FName                                  OutputAttributeName;                               // 0x16C(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_614[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGAttributeGetFromPointIndexSettings* GetDefaultObj();

};

// 0x30 (0x178 - 0x148)
// Class PCG.PCGAttributeReduceSettings
class UPCGAttributeReduceSettings : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x148(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  OutputAttributeName;                               // 0x168(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	enum class EPCGAttributeReduceOperation      Operation;                                         // 0x170(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	uint8                                        Pad_618[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGAttributeReduceSettings* GetDefaultObj();

};

// 0x58 (0x1A0 - 0x148)
// Class PCG.PCGAttributeSelectSettings
class UPCGAttributeSelectSettings : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x148(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  OutputAttributeName;                               // 0x168(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	enum class EPCGAttributeSelectOperation      Operation;                                         // 0x170(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	enum class EPCGAttributeSelectAxis           Axis;                                              // 0x174(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_61B[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              CustomAxis;                                        // 0x180(0x20)(Edit, ReturnParm, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGAttributeSelectSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGAttributeTransferSettings
class UPCGAttributeTransferSettings : public UPCGSettings
{
public:
	class FName                                  SourceAttributeName;                               // 0x148(0x8)(ConstParm, BlueprintReadOnly, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class FName                                  TargetAttributeName;                               // 0x150(0x8)(Edit, ConstParm, BlueprintVisible, ReturnParm, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGAttributeTransferSettings* GetDefaultObj();

};

// 0x40 (0x188 - 0x148)
// Class PCG.PCGBoundsModifierSettings
class UPCGBoundsModifierSettings : public UPCGSettings
{
public:
	enum class EPCGBoundsModifierMode            Mode;                                              // 0x148(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_621[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               BoundsMin;                                         // 0x150(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               BoundsMax;                                         // 0x168(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAffectSteepness;                                  // 0x180(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_623[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Steepness;                                         // 0x184(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

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
	enum class EPCGCopyPointsInheritanceMode     RotationInheritance;                               // 0x148(0x1)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	enum class EPCGCopyPointsInheritanceMode     ScaleInheritance;                                  // 0x149(0x1)(Edit, ConstParm, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	enum class EPCGCopyPointsInheritanceMode     ColorInheritance;                                  // 0x14A(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, InstancedReference, SubobjectReference)
	enum class EPCGCopyPointsInheritanceMode     SeedInheritance;                                   // 0x14B(0x1)(Edit, BlueprintReadOnly, Net, ReturnParm, Transient, InstancedReference, SubobjectReference)
	enum class EPCGCopyPointsMetadataInheritanceMode AttributeInheritance;                              // 0x14C(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_633[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGCopyPointsSettings* GetDefaultObj();

};

// 0x188 (0x2D0 - 0x148)
// Class PCG.PCGCreateAttributeSettings
class UPCGCreateAttributeSettings : public UPCGSettings
{
public:
	class FName                                  OutputAttributeName;                               // 0x148(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	bool                                         bFromSourceParam;                                  // 0x150(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bDisplayFromSourceParamSetting;                    // 0x151(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_63D[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  SourceParamAttributeName;                          // 0x154(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_63F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FPCGMetadataTypesConstantStruct       AttributeTypes;                                    // 0x160(0x170)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)

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
	enum class EPCGCreateSplineMode              Mode;                                              // 0x148(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	bool                                         bClosedLoop;                                       // 0x149(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLinear;                                           // 0x14A(0x1)(ExportObject, Net, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bApplyCustomTangents;                              // 0x14B(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class FName                                  ArriveTangentAttribute;                            // 0x14C(0x8)(Edit, BlueprintReadOnly, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class FName                                  LeaveTangentAttribute;                             // 0x154(0x8)(Edit, BlueprintVisible, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_650[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGCreateSplineSettings* GetDefaultObj();

};

// 0x40 (0x188 - 0x148)
// Class PCG.PCGDataFromActorSettings
class UPCGDataFromActorSettings : public UPCGSettings
{
public:
	struct FPCGActorSelectorSettings             ActorSelector;                                     // 0x148(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	enum class EPCGGetDataFromActorMode          Mode;                                              // 0x168(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	bool                                         bDisplayModeSettings;                              // 0x169(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_653[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          ExpectedPins;                                      // 0x170(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class FName                                  PropertyName;                                      // 0x180(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGDataFromActorSettings* GetDefaultObj();

};

// 0x48 (0x190 - 0x148)
// Class PCG.PCGDataTableRowToParamDataSettings
class UPCGDataTableRowToParamDataSettings : public UPCGSettings
{
public:
	class FName                                  RowName;                                           // 0x148(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PathOverride;                                      // 0x150(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UDataTable>             DataTable;                                         // 0x160(0x30)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)

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
	float                                        LowerBound;                                        // 0x148(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	float                                        UpperBound;                                        // 0x14C(0x4)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         bInvertFilter;                                     // 0x150(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_65F[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGDensityFilterSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGDensityNoiseSettings
class UPCGDensityNoiseSettings : public UPCGSettings
{
public:
	enum class EPCGDensityNoiseMode              DensityMode;                                       // 0x148(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_66B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        DensityNoiseMin;                                   // 0x14C(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        DensityNoiseMax;                                   // 0x150(0x4)(Edit, Net, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bInvertSourceDensity;                              // 0x154(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_66E[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGDensityNoiseSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGLinearDensityRemapSettings
class UPCGLinearDensityRemapSettings : public UPCGSettings
{
public:
	float                                        RemapMin;                                          // 0x148(0x4)(Edit, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        RemapMax;                                          // 0x14C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bMultiplyDensity;                                  // 0x150(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_67A[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGLinearDensityRemapSettings* GetDefaultObj();

};

// 0x18 (0x160 - 0x148)
// Class PCG.PCGDensityRemapSettings
class UPCGDensityRemapSettings : public UPCGSettings
{
public:
	float                                        InRangeMin;                                        // 0x148(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        InRangeMax;                                        // 0x14C(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        OutRangeMin;                                       // 0x150(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        OutRangeMax;                                       // 0x154(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bExcludeValuesOutsideInputRange;                   // 0x158(0x1)(ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_67F[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGDensityRemapSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGDifferenceSettings
class UPCGDifferenceSettings : public UPCGSettings
{
public:
	enum class EPCGDifferenceDensityFunction     DensityFunction;                                   // 0x148(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	enum class EPCGDifferenceMode                Mode;                                              // 0x149(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	bool                                         bDiffMetadata;                                     // 0x14A(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_682[0x5];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGDifferenceSettings* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class PCG.PCGBlueprintElement
class UPCGBlueprintElement : public UObject
{
public:
	bool                                         bCreatesArtifacts;                                 // 0x28(0x1)(Edit, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bCacheable;                                        // 0x29(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bCanBeMultithreaded;                               // 0x2A(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_72B[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPCGPinProperties>             CustomInputPins;                                   // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	TArray<struct FPCGPinProperties>             CustomOutputPins;                                  // 0x40(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bHasDefaultInPin;                                  // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bHasDefaultOutPin;                                 // 0x51(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_72E[0xE];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGBlueprintElement* GetDefaultObj();

	struct FPCGPoint VariableLoopBody(class UPCGMetadata* OutMetadata, const TArray<struct FPCGPoint>& ReturnValue);
	class UPCGPointData* VariableLoop();
	struct FPCGPoint PointLoopBody(const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, bool ReturnValue);
	class UPCGPointData* PointLoop();
	void OutputLabels(TSet<class FName> ReturnValue);
	void NodeTypeOverride(enum class EPCGSettingsType ReturnValue);
	void NodeTitleOverride(class FName ReturnValue);
	void NodeColorOverride(const struct FLinearColor& ReturnValue);
	struct FPCGPoint NestedLoopBody(const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, bool ReturnValue);
	class UPCGPointData* NestedLoop();
	int64 IterationLoopBody(class UPCGSpatialData** InA, class UPCGSpatialData** InB, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, bool ReturnValue);
	class UPCGPointData* IterationLoop();
	void InputLabels(TSet<class FName> ReturnValue);
	struct FPCGContext GetSeed(int32 ReturnValue);
	struct FPCGContext GetRandomStream(const struct FRandomStream& ReturnValue);
	struct FPCGContext ExecuteWithContext(const struct FPCGDataCollection& Input, struct FPCGDataCollection* Output);
	void Execute(const struct FPCGDataCollection& Input, struct FPCGDataCollection* Output);
};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGBlueprintSettings
class UPCGBlueprintSettings : public UPCGSettings
{
public:
	class UClass*                                BlueprintElementType;                              // 0x148(0x8)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UPCGBlueprintElement*                  BlueprintElementInstance;                          // 0x150(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGBlueprintSettings* GetDefaultObj();

	class UPCGBlueprintElement* SetElementType();
	void GetElementType(class UClass* ReturnValue);
};

// 0x18 (0x160 - 0x148)
// Class PCG.PCGFilterByTagSettings
class UPCGFilterByTagSettings : public UPCGSettings
{
public:
	enum class EPCGFilterByTagOperation          Operation;                                         // 0x148(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	uint8                                        Pad_77B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                SelectedTags;                                      // 0x150(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGFilterByTagSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGIntersectionSettings
class UPCGIntersectionSettings : public UPCGSettings
{
public:
	enum class EPCGIntersectionDensityFunction   DensityFunction;                                   // 0x148(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_782[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGIntersectionSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGMergeSettings
class UPCGMergeSettings : public UPCGSettings
{
public:
	bool                                         bMergeMetadata;                                    // 0x148(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_786[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGMergeSettings* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGPointExtentsModifierSettings
class UPCGPointExtentsModifierSettings : public UPCGSettings
{
public:
	struct FVector                               Extents;                                           // 0x148(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config)
	enum class EPCGPointExtentsModifierMode      Mode;                                              // 0x160(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_788[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGPointExtentsModifierSettings* GetDefaultObj();

};

// 0x1C8 (0x310 - 0x148)
// Class PCG.PCGPointFilterSettings
class UPCGPointFilterSettings : public UPCGSettings
{
public:
	enum class EPCGPointFilterOperator           Operator;                                          // 0x148(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_78A[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         TargetAttribute;                                   // 0x150(0x20)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bUseConstantThreshold;                             // 0x170(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_78C[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         ThresholdAttribute;                                // 0x178(0x20)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bUseSpatialQuery;                                  // 0x198(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_78F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FPCGMetadataTypesConstantStruct       AttributeTypes;                                    // 0x1A0(0x170)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGPointFilterSettings* GetDefaultObj();

};

// 0x38 (0x180 - 0x148)
// Class PCG.PCGPointMatchAndSetSettings
class UPCGPointMatchAndSetSettings : public UPCGSettings
{
public:
	class UClass*                                MatchAndSetType;                                   // 0x148(0x8)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UPCGMatchAndSetBase*                   MatchAndSetInstance;                               // 0x150(0x8)(ExportObject, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         SetTarget;                                         // 0x158(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	enum class EPCGMetadataTypes                 SetTargetType;                                     // 0x178(0x1)(ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_797[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EPCGMetadataTypesConstantStructStringMode SetTargetStringMode;                               // 0x17C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGPointMatchAndSetSettings* GetDefaultObj();

	class UClass* SetMatchAndSetType();
};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGPointSamplerSettings
class UPCGPointSamplerSettings : public UPCGSettings
{
public:
	float                                        Ratio;                                             // 0x148(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_7A0[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGPointSamplerSettings* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGProjectionSettings
class UPCGProjectionSettings : public UPCGSettings
{
public:
	struct FPCGProjectionParams                  ProjectionParams;                                  // 0x148(0x20)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGProjectionSettings* GetDefaultObj();

};

// 0x68 (0x1B0 - 0x148)
// Class PCG.PCGPropertyToParamDataSettings
class UPCGPropertyToParamDataSettings : public UPCGSettings
{
public:
	struct FPCGActorSelectorSettings             ActorSelector;                                     // 0x148(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bSelectComponent;                                  // 0x168(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_7A4[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UClass*                                ComponentClass;                                    // 0x170(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Config, GlobalConfig, SubobjectReference)
	class FName                                  PropertyName;                                      // 0x178(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         bExtractObjectAndStruct;                           // 0x180(0x1)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_7A5[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  OutputAttributeName;                               // 0x184(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	bool                                         bAlwaysRequeryActors;                              // 0x18C(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	enum class EPCGActorSelection                ActorSelection;                                    // 0x18D(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_7A9[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  ActorSelectionTag;                                 // 0x190(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  ActorSelectionName;                                // 0x198(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UClass*                                ActorSelectionClass;                               // 0x1A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPCGActorFilter                   ActorFilter;                                       // 0x1A8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIncludeChildren;                                  // 0x1A9(0x1)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_7AD[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGPropertyToParamDataSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGSelfPruningSettings
class UPCGSelfPruningSettings : public UPCGSettings
{
public:
	enum class EPCGSelfPruningType               PruningType;                                       // 0x148(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_7AF[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        RadiusSimilarityFactor;                            // 0x14C(0x4)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bRandomizedPruning;                                // 0x150(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_7B1[0x7];                                      // Fixing Size Of Struct > TateDumper <

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
	class UClass*                                TemplateActorClass;                                // 0x148(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	TArray<class FName>                          PostSpawnFunctionNames;                            // 0x150(0x10)(Net, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	enum class EPCGSpawnActorOption              Option;                                            // 0x160(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	bool                                         bForceDisableActorParsing;                         // 0x161(0x1)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	enum class EPCGSpawnActorGenerationTrigger   bGenerationTrigger;                                // 0x162(0x1)(ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bInheritActorTags;                                 // 0x163(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_7C3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          TagsToAddOnActors;                                 // 0x168(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class AActor*                                TemplateActor;                                     // 0x178(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	TArray<struct FPCGActorPropertyOverride>     ActorOverrides;                                    // 0x180(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGSpawnActorSettings* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class PCG.PCGNode
class UPCGNode : public UObject
{
public:
	class FName                                  NodeTitle;                                         // 0x28(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPCGSettingsInterface*                 SettingsInterface;                                 // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	TArray<class UPCGNode*>                      OutboundNodes;                                     // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	TArray<class UPCGEdge*>                      InboundEdges;                                      // 0x48(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	TArray<class UPCGEdge*>                      OutboundEdges;                                     // 0x58(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	TArray<class UPCGPin*>                       InputPins;                                         // 0x68(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	TArray<class UPCGPin*>                       OutputPins;                                        // 0x78(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGNode* GetDefaultObj();

	class FName RemoveEdgeTo(bool ReturnValue);
	void GetSettings(class UPCGSettings* ReturnValue);
	void GetGraph(class UPCGGraph* ReturnValue);
	class FName AddEdgeTo(class UPCGNode* ReturnValue);
};

// 0x8 (0x90 - 0x88)
// Class PCG.PCGBaseSubgraphNode
class UPCGBaseSubgraphNode : public UPCGNode
{
public:
	bool                                         bDynamicGraph;                                     // 0x88(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_7EC[0x7];                                      // Fixing Size Of Struct > TateDumper <

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
	struct FPCGSplineSamplerParams               SamplerParams;                                     // 0x148(0xC8)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGSplineSamplerSettings* GetDefaultObj();

};

// 0x38 (0x180 - 0x148)
// Class PCG.PCGStaticMeshSpawnerSettings
class UPCGStaticMeshSpawnerSettings : public UPCGSettings
{
public:
	class UClass*                                MeshSelectorType;                                  // 0x148(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UPCGMeshSelectorBase*                  MeshSelectorInstance;                              // 0x150(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UClass*                                InstancePackerType;                                // 0x158(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UPCGInstancePackerBase*                InstancePackerInstance;                            // 0x160(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class FName                                  OutAttributeName;                                  // 0x168(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	TArray<struct FPCGStaticMeshSpawnerEntry>    Meshes;                                            // 0x170(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

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
	float                                        PointsPerSquaredMeter;                             // 0x148(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_806[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PointExtents;                                      // 0x150(0x18)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        Looseness;                                         // 0x168(0x4)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bUnbounded;                                        // 0x16C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bApplyDensityToPoints;                             // 0x16D(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_809[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        PointSteepness;                                    // 0x170(0x4)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_80A[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSurfaceSamplerSettings* GetDefaultObj();

};

// 0xF8 (0x240 - 0x148)
// Class PCG.PCGTextureSamplerSettings
class UPCGTextureSamplerSettings : public UPCGSettings
{
public:
	uint8                                        Pad_80E[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x150(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	bool                                         bUseAbsoluteTransform;                             // 0x1B0(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_811[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x1B8(0x30)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	enum class EPCGTextureDensityFunction        DensityFunction;                                   // 0x1E8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	enum class EPCGTextureColorChannel           ColorChannel;                                      // 0x1E9(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_812[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        TexelSize;                                         // 0x1EC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	bool                                         bUseAdvancedTiling;                                // 0x1F0(0x1)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_816[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Tiling;                                            // 0x1F8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector2D                             CenterOffset;                                      // 0x208(0x10)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	float                                        Rotation;                                          // 0x218(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         bUseTileBounds;                                    // 0x21C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_818[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             TileBoundsMin;                                     // 0x220(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FVector2D                             TileBoundsMax;                                     // 0x230(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGTextureSamplerSettings* GetDefaultObj();

};

// 0xB8 (0x200 - 0x148)
// Class PCG.PCGTransformPointsSettings
class UPCGTransformPointsSettings : public UPCGSettings
{
public:
	bool                                         bApplyToAttribute;                                 // 0x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_81D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  AttributeName;                                     // 0x14C(0x8)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_81E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OffsetMin;                                         // 0x158(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FVector                               OffsetMax;                                         // 0x170(0x18)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bAbsoluteOffset;                                   // 0x188(0x1)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_828[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              RotationMin;                                       // 0x190(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FRotator                              RotationMax;                                       // 0x1A8(0x18)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bAbsoluteRotation;                                 // 0x1C0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_82C[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ScaleMin;                                          // 0x1C8(0x18)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FVector                               ScaleMax;                                          // 0x1E0(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bAbsoluteScale;                                    // 0x1F8(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	bool                                         bUniformScale;                                     // 0x1F9(0x1)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bRecomputeSeed;                                    // 0x1FA(0x1)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_82E[0x5];                                      // Fixing Size Of Struct > TateDumper <

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
	enum class EPCGUnionType                     Type;                                              // 0x148(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	enum class EPCGUnionDensityFunction          DensityFunction;                                   // 0x149(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_841[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGUnionSettings* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGVolumeSamplerSettings
class UPCGVolumeSamplerSettings : public UPCGSettings
{
public:
	struct FVector                               VoxelSize;                                         // 0x148(0x18)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUnbounded;                                        // 0x160(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_844[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGVolumeSamplerSettings* GetDefaultObj();

};

// 0x78 (0x1C0 - 0x148)
// Class PCG.PCGWorldQuerySettings
class UPCGWorldQuerySettings : public UPCGSettings
{
public:
	struct FPCGWorldVolumetricQueryParams        QueryParams;                                       // 0x148(0x78)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGWorldQuerySettings* GetDefaultObj();

};

// 0xB8 (0x200 - 0x148)
// Class PCG.PCGWorldRayHitSettings
class UPCGWorldRayHitSettings : public UPCGSettings
{
public:
	struct FPCGWorldRayHitQueryParams            QueryParams;                                       // 0x148(0xB8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGWorldRayHitSettings* GetDefaultObj();

};

// 0xB0 (0xD8 - 0x28)
// Class PCG.PCGLandscapeCache
class UPCGLandscapeCache : public UObject
{
public:
	uint8                                        Pad_848[0x50];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class FName>                            CachedLayerNames;                                  // 0x78(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_849[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGLandscapeCache* GetDefaultObj();

};

// 0xB8 (0x580 - 0x4C8)
// Class PCG.PCGPartitionActor
class APCGPartitionActor : public APartitionActor
{
public:
	struct FGuid                                 PCGGuid;                                           // 0x4C8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_852[0x50];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<class UPCGComponent*, TSoftObjectPtr<class UPCGComponent>> LocalToOriginal;                                   // 0x528(0x50)(Edit, ConstParm, BlueprintVisible, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint32                                       PCGGridSize;                                       // 0x578(0x4)(DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bUse2DGrid;                                        // 0x57C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_855[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APCGPartitionActor* GetDefaultObj();

	class UPCGComponent* GetOriginalComponent(class UPCGComponent* ReturnValue);
	class UPCGComponent* GetLocalComponent(class UPCGComponent* ReturnValue);
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
	struct FPCGPoint GetTransformedBounds(const struct FBox& ReturnValue);
	void GetTaskId(struct FPCGContext* Context, int64 ReturnValue);
	void GetSettings(struct FPCGContext* Context, class UPCGSettings* ReturnValue);
	struct FPCGPoint GetRandomStream(class UPCGSettings* OptionalSettings, class UPCGComponent* OptionalComponent, const struct FRandomStream& ReturnValue);
	void GetOriginalComponent(struct FPCGContext* Context, class UPCGComponent* ReturnValue);
	struct FPCGPoint GetLocalCenter(const struct FVector& ReturnValue);
	class UObject* GetInterpolatedPCGLandscapeLayerWeights(struct FVector* Location, const TArray<struct FPCGLandscapeLayerWeight>& ReturnValue);
	void GetInputData(struct FPCGContext* Context, class UPCGData* ReturnValue);
	struct FPCGPoint GetExtents(const struct FVector& ReturnValue);
	void GetComponent(struct FPCGContext* Context, class UPCGComponent* ReturnValue);
	class AActor* GetActorLocalBoundsPCG(bool bIgnorePCGCreatedComponents, const struct FBox& ReturnValue);
	void GetActorData(struct FPCGContext* Context, class UPCGData* ReturnValue);
	class AActor* GetActorBoundsPCG(bool bIgnorePCGCreatedComponents, const struct FBox& ReturnValue);
	class AActor* CreatePCGDataFromActor(bool bParseActor, class UPCGData* ReturnValue);
	void ComputeSeedFromPosition(struct FVector* InPosition, int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGInstancePackerBase
class UPCGInstancePackerBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPCGInstancePackerBase* GetDefaultObj();

	void PackInstances(struct FPCGContext* Context, class UPCGSpatialData* InSpatialData, const struct FPCGMeshInstanceList& InstanceList, const struct FPCGPackedCustomData& OutPackedCustomData);
	class UPCGMetadata* PackCustomDataFromAttributes(const struct FPCGMeshInstanceList& InstanceList, const TArray<class FName>& AttributeNames, const struct FPCGPackedCustomData& OutPackedCustomData);
	void AddTypeToPacking(int32 TypeId, const struct FPCGPackedCustomData& OutPackedCustomData, bool ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class PCG.PCGInstancePackerByAttribute
class UPCGInstancePackerByAttribute : public UPCGInstancePackerBase
{
public:
	TArray<class FName>                          AttributeNames;                                    // 0x28(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGInstancePackerByAttribute* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class PCG.PCGInstancePackerByRegex
class UPCGInstancePackerByRegex : public UPCGInstancePackerBase
{
public:
	TArray<class FString>                        RegexPatterns;                                     // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGInstancePackerByRegex* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class PCG.PCGMatchAndSetBase
class UPCGMatchAndSetBase : public UObject
{
public:
	enum class EPCGMetadataTypes                 Type;                                              // 0x28(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	uint8                                        Pad_900[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EPCGMetadataTypesConstantStructStringMode StringMode;                                        // 0x2C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMatchAndSetBase* GetDefaultObj();

	void ValidatePreconditions(class UPCGPointData* InPointData, bool ReturnValue);
	class UPCGPointMatchAndSetSettings* MatchAndSet(struct FPCGContext* Context, class UPCGPointData* InPointData, class UPCGPointData* OutPointData);
};

// 0x20 (0x50 - 0x30)
// Class PCG.PCGMatchAndSetByAttribute
class UPCGMatchAndSetByAttribute : public UPCGMatchAndSetBase
{
public:
	class FName                                  MatchSourceAttribute;                              // 0x30(0x8)(ExportObject, Net, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EPCGMetadataTypes                 MatchSourceType;                                   // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_904[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EPCGMetadataTypesConstantStructStringMode MatchSourceStringMode;                             // 0x3C(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FPCGMatchAndSetByAttributeEntry> Entries;                                           // 0x40(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMatchAndSetByAttribute* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class PCG.PCGMatchAndSetWeighted
class UPCGMatchAndSetWeighted : public UPCGMatchAndSetBase
{
public:
	TArray<struct FPCGMatchAndSetWeightedEntry>  Entries;                                           // 0x30(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bShouldMutateSeed;                                 // 0x40(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_905[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGMatchAndSetWeighted* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class PCG.PCGMatchAndSetWeightedByCategory
class UPCGMatchAndSetWeightedByCategory : public UPCGMatchAndSetBase
{
public:
	class FName                                  CategoryAttribute;                                 // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EPCGMetadataTypes                 CategoryType;                                      // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_907[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EPCGMetadataTypesConstantStructStringMode CategoryStringMode;                                // 0x3C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FPCGMatchAndSetWeightedByCategoryEntryList> Categories;                                        // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	bool                                         bShouldMutateSeed;                                 // 0x50(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_90A[0x7];                                      // Fixing Size Of Struct > TateDumper <

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
	class FName                                  AttributeName;                                     // 0x28(0x8)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSoftISMComponentDescriptor           TemplateDescriptor;                                // 0x30(0x1E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bUseAttributeMaterialOverrides;                    // 0x218(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_910[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          MaterialOverrideAttributes;                        // 0x220(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMeshSelectorByAttribute* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class PCG.PCGMeshSelectorWeighted
class UPCGMeshSelectorWeighted : public UPCGMeshSelectorBase
{
public:
	TArray<struct FPCGMeshSelectorWeightedEntry> MeshEntries;                                       // 0x28(0x10)(OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bUseAttributeMaterialOverrides;                    // 0x38(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_912[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          MaterialOverrideAttributes;                        // 0x40(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMeshSelectorWeighted* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class PCG.PCGMeshSelectorWeightedByCategory
class UPCGMeshSelectorWeightedByCategory : public UPCGMeshSelectorBase
{
public:
	class FName                                  CategoryAttribute;                                 // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FPCGWeightedByCategoryEntryList> Entries;                                           // 0x30(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bUseAttributeMaterialOverrides;                    // 0x40(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_915[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          MaterialOverrideAttributes;                        // 0x48(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMeshSelectorWeightedByCategory* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class PCG.PCGMetadata
class UPCGMetadata : public UObject
{
public:
	class UPCGMetadata*                          Parent;                                            // 0x28(0x8)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TSet<TWeakObjectPtr<class UPCGMetadata>>     OtherParents;                                      // 0x30(0x50)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_A55[0x88];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGMetadata* GetDefaultObj();

	class UPCGMetadata* SetPointAttributes(const struct FPCGPoint& OutPoint);
	int64 SetAttributesByKey(class UPCGMetadata** InMetaData, int64* TargetKey, int64* OutKey);
	void ResetWeightedAttributesByKey(int64* TargetKey, int64* OutKey);
	void ResetPointWeightedAttributes(const struct FPCGPoint& OutPoint);
	void RenameAttribute(class FName* AttributeToRename, class FName* NewAttributeName, bool ReturnValue);
	enum class EPCGMetadataOp MergePointAttributes(struct FPCGPoint* PointA, class UPCGMetadata** MetadataA, struct FPCGPoint* PointB, class UPCGMetadata** MetadataB, struct FPCGPoint* TargetPoint);
	enum class EPCGMetadataOp MergeAttributesByKey(int64* KeyA, class UPCGMetadata** MetadataA, int64* KeyB, class UPCGMetadata** MetadataB, int64* TargetKey, int64* OutKey);
	void InitializeWithAttributeFilter(class UPCGMetadata** InParent, TSet<class FName>* InFilteredAttributes, enum class EPCGMetadataFilterMode* InFilterMode);
	void InitializeAsCopyWithAttributeFilter(class UPCGMetadata** InMetadataToCopy, TSet<class FName>* InFilteredAttributes, enum class EPCGMetadataFilterMode* InFilterMode);
	void InitializeAsCopy(class UPCGMetadata** InMetadataToCopy);
	void Initialize(class UPCGMetadata** InParent);
	void HasCommonAttributes(class UPCGMetadata** InMetaData, bool ReturnValue);
	class FName HasAttribute(bool ReturnValue);
	TArray<enum class EPCGMetadataTypes> GetAttributes(const TArray<class FName>& AttributeNames);
	class FName DeleteAttribute();
	class FName CreateVectorAttribute(struct FVector* DefaultValue, bool* bAllowsInterpolation, bool* bOverrideParent);
	class FName CreateVector4Attribute(struct FVector4* DefaultValue, bool* bAllowsInterpolation, bool* bOverrideParent);
	class FName CreateVector2Attribute(struct FVector2D* DefaultValue, bool* bAllowsInterpolation, bool* bOverrideParent);
	class FName CreateTransformAttribute(struct FTransform* DefaultValue, bool* bAllowsInterpolation, bool* bOverrideParent);
	class FName CreateStringAttribute(class FString* DefaultValue, bool* bAllowsInterpolation, bool* bOverrideParent);
	class FName CreateRotatorAttribute(struct FRotator* DefaultValue, bool* bAllowsInterpolation, bool* bOverrideParent);
	class FName CreateQuatAttribute(struct FQuat* DefaultValue, bool* bAllowsInterpolation, bool* bOverrideParent);
	class FName CreateInteger64Attribute(int64* DefaultValue, bool* bAllowsInterpolation, bool* bOverrideParent);
	class FName CreateInteger32Attribute(int32* DefaultValue, bool* bAllowsInterpolation, bool* bOverrideParent);
	class FName CreateFloatAttribute(float* DefaultValue, bool* bAllowsInterpolation, bool* bOverrideParent);
	class FName CreateDoubleAttribute(double* DefaultValue, bool* bAllowsInterpolation, bool* bOverrideParent);
	class FName CreateBoolAttribute(bool* DefaultValue, bool* bAllowsInterpolation, bool* bOverrideParent);
	void CopyExistingAttribute(class FName* AttributeToCopy, class FName* NewAttributeName, bool* bKeepParent, bool ReturnValue);
	void CopyAttributes(class UPCGMetadata* InOther);
	void CopyAttribute(class UPCGMetadata* InOther, class FName* AttributeToCopy, class FName* NewAttributeName);
	void ClearAttribute(class FName* AttributeToClear);
	void AddEntry(int64* ParentEntryKey, int64 ReturnValue);
	void AddAttributesFiltered(class UPCGMetadata* InOther, TSet<class FName>* InFilteredAttributes, enum class EPCGMetadataFilterMode* InFilterMode);
	void AddAttributes(class UPCGMetadata* InOther);
	class FName AddAttribute(class UPCGMetadata* InOther);
	class UPCGMetadata* AccumulateWeightedAttributesByKey(float* Weight, bool* bSetNonInterpolableAttributes, int64* TargetKey, int64* OutKey);
	struct FPCGPoint AccumulatePointWeightedAttributes(class UPCGMetadata** InMetaData, float* Weight, bool* bSetNonInterpolableAttributes, const struct FPCGPoint& OutPoint);
};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGMetadataAccessorHelpers
class UPCGMetadataAccessorHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPCGMetadataAccessorHelpers* GetDefaultObj();

	class FName SetVectorAttributeByMetadataKey(struct FVector* Value);
	class FName SetVectorAttribute(struct FVector* Value);
	class FName SetVector4AttributeByMetadataKey(struct FVector4* Value);
	class FName SetVector4Attribute(struct FVector4* Value);
	class FName SetVector2AttributeByMetadataKey(struct FVector2D* Value);
	class FName SetVector2Attribute(struct FVector2D* Value);
	class FName SetTransformAttributeByMetadataKey(struct FTransform* Value);
	class FName SetTransformAttribute(struct FTransform* Value);
	class FName SetStringAttributeByMetadataKey(class FString* Value);
	class FName SetStringAttribute(class FString* Value);
	class FName SetRotatorAttributeByMetadataKey(struct FRotator* Value);
	class FName SetRotatorAttribute(struct FRotator* Value);
	class FName SetQuatAttributeByMetadataKey(struct FQuat* Value);
	class FName SetQuatAttribute(struct FQuat* Value);
	class FName SetInteger64AttributeByMetadataKey(int64* Value);
	class FName SetInteger64Attribute(int64* Value);
	class FName SetInteger32AttributeByMetadataKey(int32* Value);
	class FName SetInteger32Attribute(int32* Value);
	class FName SetFloatAttributeByMetadataKey(float* Value);
	class FName SetFloatAttribute(float* Value);
	class FName SetDoubleAttributeByMetadataKey(double* Value);
	class FName SetDoubleAttribute(double* Value);
	class FName SetBoolAttributeByMetadataKey(bool* Value);
	class FName SetBoolAttribute(bool* Value);
	class FName SetAttributeFromPropertyByMetadataKey(class UObject** Object, class FName PropertyName, bool ReturnValue);
	class UPCGMetadata* InitializeMetadata(struct FPCGPoint* ParentPoint, class UPCGMetadata** ParentMetadata);
	class FName HasAttributeSetByMetadataKey(bool ReturnValue);
	class FName HasAttributeSet(bool ReturnValue);
	class FName GetVectorAttributeByMetadataKey(const struct FVector& ReturnValue);
	class FName GetVectorAttribute(const struct FVector& ReturnValue);
	class FName GetVector4AttributeByMetadataKey(const struct FVector4& ReturnValue);
	class FName GetVector4Attribute(const struct FVector4& ReturnValue);
	class FName GetVector2AttributeByMetadataKey(const struct FVector2D& ReturnValue);
	class FName GetVector2Attribute(const struct FVector2D& ReturnValue);
	class FName GetTransformAttributeByMetadataKey(const struct FTransform& ReturnValue);
	class FName GetTransformAttribute(const struct FTransform& ReturnValue);
	class FName GetStringAttributeByMetadataKey(const class FString& ReturnValue);
	class FName GetStringAttribute(const class FString& ReturnValue);
	class FName GetRotatorAttributeByMetadataKey(const struct FRotator& ReturnValue);
	class FName GetRotatorAttribute(const struct FRotator& ReturnValue);
	class FName GetQuatAttributeByMetadataKey(const struct FQuat& ReturnValue);
	class FName GetQuatAttribute(const struct FQuat& ReturnValue);
	class FName GetInteger64AttributeByMetadataKey(int64 ReturnValue);
	class FName GetInteger64Attribute(int64 ReturnValue);
	class FName GetInteger32AttributeByMetadataKey(int32 ReturnValue);
	class FName GetInteger32Attribute(int32 ReturnValue);
	class FName GetFloatAttributeByMetadataKey(float ReturnValue);
	class FName GetFloatAttribute(float ReturnValue);
	class FName GetDoubleAttributeByMetadataKey(double ReturnValue);
	class FName GetDoubleAttribute(double ReturnValue);
	class FName GetBoolAttributeByMetadataKey(bool ReturnValue);
	class FName GetBoolAttribute(bool ReturnValue);
	struct FPCGPoint CopyPoint(const struct FPCGPoint& OutPoint, bool* bCopyMetadata, class UPCGMetadata** InMetaData, class UPCGMetadata* OutMetadata);
};

// 0x100 (0x1B8 - 0xB8)
// Class PCG.PCGComponent
class UPCGComponent : public UActorComponent
{
public:
	enum class EPCGComponentInput                InputType;                                         // 0xB8(0x1)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         bParseActorComponents;                             // 0xB9(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_C24[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        Seed;                                              // 0xBC(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         bActivated;                                        // 0xC0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsComponentPartitioned;                           // 0xC1(0x1)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EPCGComponentGenerationTrigger    GenerationTrigger;                                 // 0xC2(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bGenerated;                                        // 0xC3(0x1)(BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bRuntimeGenerated;                                 // 0xC4(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_C26[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          PostGenerateFunctionNames;                         // 0xC8(0x10)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UPCGGraphInstance*                     GraphInstance;                                     // 0xD8(0x8)(BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UPCGData*                              CachedPCGData;                                     // 0xE0(0x8)(ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UPCGData*                              CachedInputData;                                   // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UPCGData*                              CachedActorData;                                   // 0xF0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UPCGData*                              CachedLandscapeData;                               // 0xF8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UPCGData*                              CachedLandscapeHeightData;                         // 0x100(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<class UPCGManagedResource*>           GeneratedResources;                                // 0x108(0x10)(BlueprintVisible, ExportObject, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C27[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  LastGeneratedBounds;                               // 0x120(0x38)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FPCGDataCollection                    GeneratedGraphOutput;                              // 0x158(0x20)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_C29[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bIsComponentLocal;                                 // 0x188(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_C2A[0x2F];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGComponent* GetDefaultObj();

	void SetGraph(class UPCGGraphInterface* InGraph);
	void NotifyPropertiesChangedFromBlueprint();
	void GetGeneratedGraphOutput(const struct FPCGDataCollection& ReturnValue);
	void GenerateLocal(bool bForce);
	void Generate(bool bForce);
	class UClass* ClearPCGLink(class AActor* ReturnValue);
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

	void GetTaggedParams(const struct FPCGDataCollection& InCollection, class FString* InTag, const TArray<struct FPCGTaggedData>& ReturnValue);
	void GetTaggedInputs(const struct FPCGDataCollection& InCollection, class FString* InTag, const TArray<struct FPCGTaggedData>& ReturnValue);
	void GetParamsByPin(const struct FPCGDataCollection& InCollection, class FName InPinLabel, const TArray<struct FPCGTaggedData>& ReturnValue);
	void GetParams(const struct FPCGDataCollection& InCollection, const TArray<struct FPCGTaggedData>& ReturnValue);
	void GetInputsByPin(const struct FPCGDataCollection& InCollection, class FName InPinLabel, const TArray<struct FPCGTaggedData>& ReturnValue);
	void GetInputs(const struct FPCGDataCollection& InCollection, const TArray<struct FPCGTaggedData>& ReturnValue);
	void GetAllSettings(const struct FPCGDataCollection& InCollection, const TArray<struct FPCGTaggedData>& ReturnValue);
};

// 0x30 (0x58 - 0x28)
// Class PCG.PCGEdge
class UPCGEdge : public UObject
{
public:
	class FName                                  InboundLabel;                                      // 0x28(0x8)(ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UPCGNode*                              InboundNode;                                       // 0x30(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class FName                                  OutboundLabel;                                     // 0x38(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UPCGNode*                              OutboundNode;                                      // 0x40(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
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

	void GetMutablePCGGraph(class UPCGGraph* ReturnValue);
	void GetConstPCGGraph(class UPCGGraph* ReturnValue);
};

// 0x38 (0x60 - 0x28)
// Class PCG.PCGGraph
class UPCGGraph : public UPCGGraphInterface
{
public:
	bool                                         bLandscapeUsesMetadata;                            // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_CDE[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UPCGNode*>                      Nodes;                                             // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UPCGNode*                              InputNode;                                         // 0x40(0x8)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UPCGNode*                              OutputNode;                                        // 0x48(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FInstancedPropertyBag                 UserParameters;                                    // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGGraph* GetDefaultObj();

	void RemoveNode(class UPCGNode* InNode);
	class UPCGNode* RemoveEdge(class UPCGNode* From, class FName FromLabel, class FName ToLabel, bool ReturnValue);
	void GetOutputNode(class UPCGNode* ReturnValue);
	void GetInputNode(class UPCGNode* ReturnValue);
	void AddNodeOfType(class UClass* InSettingsClass, class UPCGSettings* DefaultNodeSettings, class UPCGNode* ReturnValue);
	class UPCGSettings* AddNodeInstance(class UPCGNode* ReturnValue);
	class UPCGSettings* AddNodeCopy(class UPCGSettings* DefaultNodeSettings, class UPCGNode* ReturnValue);
	class FName AddEdge(class UPCGNode* From, class UPCGNode* ReturnValue);
};

// 0x68 (0x90 - 0x28)
// Class PCG.PCGGraphInstance
class UPCGGraphInstance : public UPCGGraphInterface
{
public:
	class UPCGGraphInterface*                    Graph;                                             // 0x28(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FPCGOverrideInstancedPropertyBag      ParametersOverrides;                               // 0x30(0x60)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGGraphInstance* GetDefaultObj();

};

// 0xA8 (0x1F0 - 0x148)
// Class PCG.PCGGraphInputOutputSettings
class UPCGGraphInputOutputSettings : public UPCGSettings
{
public:
	TSet<class FName>                            PinLabels;                                         // 0x148(0x50)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FPCGPinProperties>             CustomPins;                                        // 0x198(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_CE9[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGGraphInputOutputSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class PCG.PCGManagedResource
class UPCGManagedResource : public UObject
{
public:
	struct FPCGCrc                               Crc;                                               // 0x28(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bIsMarkedUnused;                                   // 0x30(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_CEC[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGManagedResource* GetDefaultObj();

};

// 0x50 (0x88 - 0x38)
// Class PCG.PCGManagedActors
class UPCGManagedActors : public UPCGManagedResource
{
public:
	TSet<TSoftObjectPtr<class AActor>>           GeneratedActors;                                   // 0x38(0x50)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGManagedActors* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class PCG.PCGManagedComponent
class UPCGManagedComponent : public UPCGManagedResource
{
public:
	TSoftObjectPtr<class UActorComponent>        GeneratedComponent;                                // 0x38(0x30)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGManagedComponent* GetDefaultObj();

};

// 0x1D8 (0x240 - 0x68)
// Class PCG.PCGManagedISMComponent
class UPCGManagedISMComponent : public UPCGManagedComponent
{
public:
	bool                                         bHasDescriptor;                                    // 0x68(0x1)(OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_D01[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FISMComponentDescriptor               Descriptor;                                        // 0x70(0x1C0)(Edit, BlueprintVisible, ExportObject, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint64                                       SettingsUID;                                       // 0x230(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_D08[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGManagedISMComponent* GetDefaultObj();

};

// 0x58 (0x90 - 0x38)
// Class PCG.PCGParamData
class UPCGParamData : public UPCGData
{
public:
	class UPCGMetadata*                          MetaData;                                          // 0x38(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TMap<class FName, int64>                     NameMap;                                           // 0x40(0x50)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGParamData* GetDefaultObj();

	void MutableMetadata(class UPCGMetadata* ReturnValue);
	class FName FindOrAddMetadataKey(int64 ReturnValue);
	class FName FindMetadataKey(int64 ReturnValue);
	class FName FilterParamsByName(class UPCGParamData* ReturnValue);
	void FilterParamsByKey(int64* InKey, class UPCGParamData* ReturnValue);
	void ConstMetadata(class UPCGMetadata* ReturnValue);
};

// 0x30 (0x58 - 0x28)
// Class PCG.PCGPin
class UPCGPin : public UObject
{
public:
	class UPCGNode*                              Node;                                              // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
	class FName                                  Label;                                             // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UPCGEdge*>                      Edges;                                             // 0x38(0x10)(Edit, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FPCGPinProperties                     Properties;                                        // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGPin* GetDefaultObj();

	void SetToolTip(class FText* InTooltip);
	void GetTooltip(class FText ReturnValue);
};

// 0x8 (0x48 - 0x40)
// Class PCG.PCGSettingsInstance
class UPCGSettingsInstance : public UPCGSettingsInterface
{
public:
	class UPCGSettings*                          Settings;                                          // 0x40(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

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
	class UPCGGraphInstance*                     SubgraphInstance;                                  // 0x148(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_D64[0x480];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSubsystem* GetDefaultObj();

};

// 0x8 (0x520 - 0x518)
// Class PCG.PCGVolume
class APCGVolume : public AVolume
{
public:
	class UPCGComponent*                         PCGComponent;                                      // 0x518(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class APCGVolume* GetDefaultObj();

};

// 0x18 (0x4E0 - 0x4C8)
// Class PCG.PCGWorldActor
class APCGWorldActor : public AActor
{
public:
	uint32                                       PartitionGridSize;                                 // 0x4C8(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_D6D[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UPCGLandscapeCache*                    LandscapeCacheObject;                              // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bUse2DGrid;                                        // 0x4D8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_D6F[0x7];                                      // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_D7F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  NameProperty;                                      // 0x4E4(0x8)(ExportObject, Net)
	uint8                                        Pad_D80[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                StringProperty;                                    // 0x4F0(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EPCGUnitTestDummyEnum             EnumProperty;                                      // 0x500(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm)
	struct FVector                               VectorProperty;                                    // 0x508(0x18)(BlueprintReadOnly, EditFixedSize)
	struct FVector4                              Vector4Property;                                   // 0x520(0x20)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FTransform                            TransformProperty;                                 // 0x540(0x60)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FRotator                              RotatorProperty;                                   // 0x5A0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize)
	uint8                                        Pad_D86[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 QuatProperty;                                      // 0x5C0(0x20)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       SoftObjectPathProperty;                            // 0x5E0(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FSoftClassPath                        SoftClassPathProperty;                             // 0x600(0x20)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UClass*                                ClassProperty;                                     // 0x620(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UObject*                               ObjectProperty;                                    // 0x628(0x8)(Net)
	struct FVector2D                             Vector2Property;                                   // 0x630(0x10)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FColor                                ColorProperty;                                     // 0x640(0x4)(Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_D8F[0xC];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APCGUnitTestDummyActor* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class PCG.PCGUnitTestDummyComponent
class UPCGUnitTestDummyComponent : public UActorComponent
{
public:
	int32                                        IntProperty;                                       // 0xB8(0x4)(ConstParm, ExportObject)
	uint8                                        Pad_D96[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGUnitTestDummyComponent* GetDefaultObj();

};

}


