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
	double                                       DoubleValue;                                       // 0x28(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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

	enum class EPCGPointProperties SetPointProperty(bool ReturnValue);
	class FName SetAttributeName(bool ReturnValue);
	struct FPCGAttributePropertySelector GetName(class FName ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class PCG.PCGData
class UPCGData : public UObject
{
public:
	uint64                                       UID;                                               // 0x28(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_157D[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGData* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class PCG.PCGSpatialData
class UPCGSpatialData : public UPCGData
{
public:
	TWeakObjectPtr<class AActor>                 TargetActor;                                       // 0x38(0x8)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          MetaData;                                          // 0x40(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGSpatialData* GetDefaultObj();

	class UPCGSpatialData* UnionWith(class UPCGUnionData* ReturnValue);
	struct FPCGContext ToPointDataWithContext(class UPCGPointData* ReturnValue);
	void ToPointData(class UPCGPointData* ReturnValue);
	class UPCGSpatialData* Subtract(class UPCGDifferenceData* ReturnValue);
	class UPCGMetadata* SamplePoint(struct FTransform* Transform, bool ReturnValue);
	class UPCGMetadata* ProjectPoint(const struct FTransform& InTransform, bool ReturnValue);
	struct FPCGProjectionParams ProjectOn(class UPCGSpatialData* ReturnValue);
	void MutableMetadata(class UPCGMetadata* ReturnValue);
	class UPCGSpatialData* IntersectWith(class UPCGIntersectionData* ReturnValue);
	bool InitializeFromData(class UPCGSpatialData* InSource);
	void HasNonTrivialTransform(bool ReturnValue);
	void GetStrictBounds(const struct FBox& ReturnValue);
	void GetNormal(const struct FVector& ReturnValue);
	void GetDimension(int32 ReturnValue);
	struct FVector GetDensityAtPosition(float ReturnValue);
	void GetBounds(const struct FBox& ReturnValue);
	void CreateEmptyMetadata(class UPCGMetadata* ReturnValue);
	void ConstMetadata(class UPCGMetadata* ReturnValue);
};

// 0x50 (0x98 - 0x48)
// Class PCG.PCGSpatialDataWithPointCache
class UPCGSpatialDataWithPointCache : public UPCGSpatialData
{
public:
	class UPCGPointData*                         CachedPointData;                                   // 0x48(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FBox>                          CachedBoundedPointDataBoxes;                       // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<class UPCGPointData*>                 CachedBoundedPointData;                            // 0x60(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15EC[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSpatialDataWithPointCache* GetDefaultObj();

};

// 0xF8 (0x190 - 0x98)
// Class PCG.PCGCollisionShapeData
class UPCGCollisionShapeData : public UPCGSpatialDataWithPointCache
{
public:
	uint8                                        Pad_15EE[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0xA0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	uint8                                        Pad_15F2[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  CachedBounds;                                      // 0x118(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  CachedStrictBounds;                                // 0x150(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15F4[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGCollisionShapeData* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class PCG.PCGSettingsInterface
class UPCGSettingsInterface : public UPCGData
{
public:
	bool                                         bEnabled;                                          // 0x38(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         bDebug;                                            // 0x39(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_15FE[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSettingsInterface* GetDefaultObj();

};

// 0x108 (0x148 - 0x40)
// Class PCG.PCGSettings
class UPCGSettings : public UPCGSettingsInterface
{
public:
	int32                                        Seed;                                              // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1603[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class FString>                          FilterOnTags;                                      // 0x48(0x50)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bPassThroughFilteredOutInputs;                     // 0x98(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1607[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class FString>                          TagsAppliedOnOutput;                               // 0xA0(0x50)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseSeed;                                          // 0xF0(0x1)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_160B[0x3F];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPCGSettingsOverridableParam>  CachedOverridableParams;                           // 0x130(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_160D[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSettings* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGDistanceSettings
class UPCGDistanceSettings : public UPCGSettings
{
public:
	class FName                                  AttributeName;                                     // 0x148(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOutputDistanceVector;                             // 0x150(0x1)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSetDensity;                                       // 0x151(0x1)(Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1613[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MaximumDistance;                                   // 0x158(0x8)(ConstParm, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPCGDistanceShape                 SourceShape;                                       // 0x160(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGDistanceShape                 TargetShape;                                       // 0x164(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGDistanceSettings* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class PCG.PCGEngineSettings
class UPCGEngineSettings : public UObject
{
public:
	struct FVector                               VolumeScale;                                       // 0x28(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bGenerateOnDrop;                                   // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1618[0x7];                                     // Fixing Size Of Struct > TateDumper <

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
	double                                       Strength;                                          // 0x168(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPCGNormalToDensityMode           DensityMode;                                       // 0x170(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1624[0x7];                                     // Fixing Size Of Struct > TateDumper <

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
	struct FGuid                                 PropertyGuid;                                      // 0x148(0x10)(BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FName                                  PropertyName;                                      // 0x158(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGUserParameterGetSettings* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class PCG.PCGUserParametersData
class UPCGUserParametersData : public UPCGData
{
public:
	class UPCGGraphInterface*                    OriginalGraph;                                     // 0x38(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FInstancedStruct                      UserParameters;                                    // 0x40(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGUserParametersData* GetDefaultObj();

};

// 0x28 (0xC0 - 0x98)
// Class PCG.PCGDifferenceData
class UPCGDifferenceData : public UPCGSpatialDataWithPointCache
{
public:
	bool                                         bDiffMetadata;                                     // 0x98(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1633[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPCGSpatialData*                       Source;                                            // 0xA0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	class UPCGSpatialData*                       Difference;                                        // 0xA8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UPCGUnionData*                         DifferencesUnion;                                  // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGDifferenceDensityFunction     DensityFunction;                                   // 0xB8(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1637[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGDifferenceData* GetDefaultObj();

	enum class EPCGDifferenceDensityFunction SetDensityFunction();
	class UPCGSpatialData* Initialize();
	class UPCGSpatialData* AddDifference();
};

// 0x88 (0x120 - 0x98)
// Class PCG.PCGIntersectionData
class UPCGIntersectionData : public UPCGSpatialDataWithPointCache
{
public:
	enum class EPCGIntersectionDensityFunction   DensityFunction;                                   // 0x98(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1644[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPCGSpatialData*                       A;                                                 // 0xA0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	class UPCGSpatialData*                       B;                                                 // 0xA8(0x8)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FBox                                  CachedBounds;                                      // 0xB0(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  CachedStrictBounds;                                // 0xE8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGIntersectionData* GetDefaultObj();

	void Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB);
};

// 0x68 (0x100 - 0x98)
// Class PCG.PCGSurfaceData
class UPCGSurfaceData : public UPCGSpatialDataWithPointCache
{
public:
	uint8                                        Pad_1648[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0xA0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)

	static class UClass* StaticClass();
	static class UPCGSurfaceData* GetDefaultObj();

};

// 0x70 (0x170 - 0x100)
// Class PCG.PCGLandscapeData
class UPCGLandscapeData : public UPCGSurfaceData
{
public:
	TArray<TSoftObjectPtr<class ALandscapeProxy>> Landscapes;                                        // 0x100(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FBox                                  Bounds;                                            // 0x110(0x38)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHeightOnly;                                       // 0x148(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseMetadata;                                      // 0x149(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_164D[0x26];                                    // Fixing Size Of Struct > TateDumper <

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
	TArray<struct FPCGPoint>                     Points;                                            // 0x48(0x10)(ConstParm, BlueprintVisible, Parm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1671[0x118];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGPointData* GetDefaultObj();

	TArray<struct FPCGPoint> SetPoints();
	void GetPoints(const TArray<struct FPCGPoint>& ReturnValue);
	int32 GetPoint(const struct FPCGPoint& ReturnValue);
	TArray<int32> CopyPointsFrom();
};

// 0x90 (0x128 - 0x98)
// Class PCG.PCGPrimitiveData
class UPCGPrimitiveData : public UPCGSpatialDataWithPointCache
{
public:
	struct FVector                               VoxelSize;                                         // 0x98(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UPrimitiveComponent>    Primitive;                                         // 0xB0(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, Config, EditConst)
	struct FBox                                  CachedBounds;                                      // 0xB8(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  CachedStrictBounds;                                // 0xF0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

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
	struct FBox                                  CachedBounds;                                      // 0xA8(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  CachedStrictBounds;                                // 0xE0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGProjectionParams                  ProjectionParams;                                  // 0x118(0x20)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGProjectionData* GetDefaultObj();

};

// 0xB0 (0x1B0 - 0x100)
// Class PCG.PCGBaseTextureData
class UPCGBaseTextureData : public UPCGSurfaceData
{
public:
	enum class EPCGTextureDensityFunction        DensityFunction;                                   // 0x100(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGTextureColorChannel           ColorChannel;                                      // 0x101(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_167D[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TexelSize;                                         // 0x104(0x4)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseAdvancedTiling;                                // 0x108(0x1)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1682[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Tiling;                                            // 0x110(0x10)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector2D                             CenterOffset;                                      // 0x120(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        Rotation;                                          // 0x130(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         bUseTileBounds;                                    // 0x134(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1684[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBox2D                                TileBounds;                                        // 0x138(0x28)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FLinearColor>                  ColorData;                                         // 0x160(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  Bounds;                                            // 0x170(0x38)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
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
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x1B0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference)
	uint8                                        Pad_1694[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGRenderTargetData* GetDefaultObj();

	class UTextureRenderTarget2D* Initialize(const struct FTransform& InTransform);
};

// 0x1A8 (0x240 - 0x98)
// Class PCG.PCGSplineData
class UPCGSplineData : public UPCGPolyLineData
{
public:
	uint8                                        Pad_1696[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGSplineStruct                      SplineStruct;                                      // 0xA0(0x160)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FBox                                  CachedBounds;                                      // 0x200(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1697[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSplineData* GetDefaultObj();

};

// 0x18 (0x150 - 0x138)
// Class PCG.PCGSplineProjectionData
class UPCGSplineProjectionData : public UPCGProjectionData
{
public:
	struct FInterpCurveVector2D                  ProjectedPosition;                                 // 0x138(0x18)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGSplineProjectionData* GetDefaultObj();

};

// 0x10 (0x1C0 - 0x1B0)
// Class PCG.PCGTextureData
class UPCGTextureData : public UPCGBaseTextureData
{
public:
	TWeakObjectPtr<class UTexture2D>             Texture;                                           // 0x1B0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	uint8                                        Pad_16A2[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGTextureData* GetDefaultObj();

	class UTexture2D* Initialize(const struct FTransform& InTransform);
};

// 0x98 (0x130 - 0x98)
// Class PCG.PCGUnionData
class UPCGUnionData : public UPCGSpatialDataWithPointCache
{
public:
	TArray<class UPCGSpatialData*>               Data;                                              // 0x98(0x10)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPCGSpatialData*                       FirstNonTrivialTransformData;                      // 0xA8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGUnionType                     UnionType;                                         // 0xB0(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGUnionDensityFunction          DensityFunction;                                   // 0xB1(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16B3[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  CachedBounds;                                      // 0xB8(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBox                                  CachedStrictBounds;                                // 0xF0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        CachedDimension;                                   // 0x128(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16B7[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGUnionData* GetDefaultObj();

	void Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB);
	class UPCGSpatialData* AddData();
};

// 0x90 (0x128 - 0x98)
// Class PCG.PCGVolumeData
class UPCGVolumeData : public UPCGSpatialDataWithPointCache
{
public:
	struct FVector                               VoxelSize;                                         // 0x98(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class AVolume>                Volume;                                            // 0xB0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FBox                                  Bounds;                                            // 0xB8(0x38)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBox                                  StrictBounds;                                      // 0xF0(0x38)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGVolumeData* GetDefaultObj();

};

// 0x88 (0x1B0 - 0x128)
// Class PCG.PCGWorldVolumetricData
class UPCGWorldVolumetricData : public UPCGVolumeData
{
public:
	TWeakObjectPtr<class UWorld>                 World;                                             // 0x128(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TWeakObjectPtr<class UPCGComponent>          OriginatingComponent;                              // 0x130(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGWorldVolumetricQueryParams        QueryParams;                                       // 0x138(0x78)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGWorldVolumetricData* GetDefaultObj();

};

// 0x100 (0x200 - 0x100)
// Class PCG.PCGWorldRayHitData
class UPCGWorldRayHitData : public UPCGSurfaceData
{
public:
	TWeakObjectPtr<class UWorld>                 World;                                             // 0x100(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TWeakObjectPtr<class UPCGComponent>          OriginatingComponent;                              // 0x108(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FBox                                  Bounds;                                            // 0x110(0x38)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPCGWorldRayHitQueryParams            QueryParams;                                       // 0x148(0xB8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGWorldRayHitData* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGMetadataSettingsBase
class UPCGMetadataSettingsBase : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         OutputTarget;                                      // 0x148(0x20)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataSettingsBase* GetDefaultObj();

};

// 0x48 (0x1B0 - 0x168)
// Class PCG.PCGMetadataBitwiseSettings
class UPCGMetadataBitwiseSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataBitwiseOperation      Operation;                                         // 0x168(0x2)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_16CE[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataBitwiseSettings* GetDefaultObj();

};

// 0x48 (0x1B0 - 0x168)
// Class PCG.PCGMetadataBooleanSettings
class UPCGMetadataBooleanSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataBooleanOperation      Operation;                                         // 0x168(0x2)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_16D5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataBooleanSettings* GetDefaultObj();

};

// 0x20 (0x188 - 0x168)
// Class PCG.PCGMetadataBreakTransformSettings
class UPCGMetadataBreakTransformSettings : public UPCGMetadataSettingsBase
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x168(0x20)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataBreakTransformSettings* GetDefaultObj();

};

// 0x20 (0x188 - 0x168)
// Class PCG.PCGMetadataBreakVectorSettings
class UPCGMetadataBreakVectorSettings : public UPCGMetadataSettingsBase
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x168(0x20)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataBreakVectorSettings* GetDefaultObj();

};

// 0x50 (0x1B8 - 0x168)
// Class PCG.PCGMetadataCompareSettings
class UPCGMetadataCompareSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataCompareOperation      Operation;                                         // 0x168(0x2)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_16E2[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	double                                       Tolerance;                                         // 0x1B0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataCompareSettings* GetDefaultObj();

};

// 0x40 (0x188 - 0x148)
// Class PCG.PCGMetadataOperationSettings
class UPCGMetadataOperationSettings : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x148(0x20)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         OutputTarget;                                      // 0x168(0x20)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataOperationSettings* GetDefaultObj();

};

// 0x60 (0x1C8 - 0x168)
// Class PCG.PCGMetadataMakeTransformSettings
class UPCGMetadataMakeTransformSettings : public UPCGMetadataSettingsBase
{
public:
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x168(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x188(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1A8(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataMakeTransformSettings* GetDefaultObj();

};

// 0x88 (0x1F0 - 0x168)
// Class PCG.PCGMetadataMakeVectorSettings
class UPCGMetadataMakeVectorSettings : public UPCGMetadataSettingsBase
{
public:
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x168(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x188(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1A8(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource4;                                      // 0x1C8(0x20)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGMetadataTypes                 OutputType;                                        // 0x1E8(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EPCGMetadataMakeVector3           MakeVector3Op;                                     // 0x1E9(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGMetadataMakeVector4           MakeVector4Op;                                     // 0x1EA(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16FE[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGMetadataMakeVectorSettings* GetDefaultObj();

};

// 0x68 (0x1D0 - 0x168)
// Class PCG.PCGMetadataMathsSettings
class UPCGMetadataMathsSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataMathsOperation        Operation;                                         // 0x168(0x2)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1705[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1B0(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataMathsSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGMetadataPartitionSettings
class UPCGMetadataPartitionSettings : public UPCGSettings
{
public:
	class FName                                  PartitionAttribute;                                // 0x148(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataPartitionSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGMetadataRenameSettings
class UPCGMetadataRenameSettings : public UPCGSettings
{
public:
	class FName                                  AttributeToRename;                                 // 0x148(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FName                                  NewAttributeName;                                  // 0x150(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataRenameSettings* GetDefaultObj();

};

// 0x68 (0x1D0 - 0x168)
// Class PCG.PCGMetadataRotatorSettings
class UPCGMetadataRotatorSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataRotatorOperation      Operation;                                         // 0x168(0x2)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1716[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1B0(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataRotatorSettings* GetDefaultObj();

};

// 0x68 (0x1D0 - 0x168)
// Class PCG.PCGMetadataTransformSettings
class UPCGMetadataTransformSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataTransformOperation    Operation;                                         // 0x168(0x2)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EPCGTransformLerpMode             TransformLerpMode;                                 // 0x16A(0x2)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_171F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1B0(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataTransformSettings* GetDefaultObj();

};

// 0x48 (0x1B0 - 0x168)
// Class PCG.PCGMetadataTrigSettings
class UPCGMetadataTrigSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataTrigOperation         Operation;                                         // 0x168(0x2)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1727[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataTrigSettings* GetDefaultObj();

};

// 0x68 (0x1D0 - 0x168)
// Class PCG.PCGMetadataVectorSettings
class UPCGMetadataVectorSettings : public UPCGMetadataSettingsBase
{
public:
	enum class EPCGMedadataVectorOperation       Operation;                                         // 0x168(0x2)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_172D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         InputSource1;                                      // 0x170(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource2;                                      // 0x190(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         InputSource3;                                      // 0x1B0(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMetadataVectorSettings* GetDefaultObj();

};

// 0x18 (0x160 - 0x148)
// Class PCG.PCGAttributeFilterSettings
class UPCGAttributeFilterSettings : public UPCGSettings
{
public:
	enum class EPCGAttributeFilterOperation      Operation;                                         // 0x148(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1732[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                SelectedAttributes;                                // 0x150(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGAttributeFilterSettings* GetDefaultObj();

};

// 0x30 (0x178 - 0x148)
// Class PCG.PCGAttributeGetFromPointIndexSettings
class UPCGAttributeGetFromPointIndexSettings : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x148(0x20)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x168(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class FName                                  OutputAttributeName;                               // 0x16C(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1739[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGAttributeGetFromPointIndexSettings* GetDefaultObj();

};

// 0x30 (0x178 - 0x148)
// Class PCG.PCGAttributeReduceSettings
class UPCGAttributeReduceSettings : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x148(0x20)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  OutputAttributeName;                               // 0x168(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGAttributeReduceOperation      Operation;                                         // 0x170(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_173C[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGAttributeReduceSettings* GetDefaultObj();

};

// 0x58 (0x1A0 - 0x148)
// Class PCG.PCGAttributeSelectSettings
class UPCGAttributeSelectSettings : public UPCGSettings
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x148(0x20)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  OutputAttributeName;                               // 0x168(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGAttributeSelectOperation      Operation;                                         // 0x170(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EPCGAttributeSelectAxis           Axis;                                              // 0x174(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_1745[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              CustomAxis;                                        // 0x180(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGAttributeSelectSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGAttributeTransferSettings
class UPCGAttributeTransferSettings : public UPCGSettings
{
public:
	class FName                                  SourceAttributeName;                               // 0x148(0x8)(ExportObject, EditConst, InstancedReference, SubobjectReference)
	class FName                                  TargetAttributeName;                               // 0x150(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGAttributeTransferSettings* GetDefaultObj();

};

// 0x40 (0x188 - 0x148)
// Class PCG.PCGBoundsModifierSettings
class UPCGBoundsModifierSettings : public UPCGSettings
{
public:
	enum class EPCGBoundsModifierMode            Mode;                                              // 0x148(0x1)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1754[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               BoundsMin;                                         // 0x150(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               BoundsMax;                                         // 0x168(0x18)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bAffectSteepness;                                  // 0x180(0x1)(Edit, ConstParm, BlueprintReadOnly, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1757[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Steepness;                                         // 0x184(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
	enum class EPCGCopyPointsInheritanceMode     RotationInheritance;                               // 0x148(0x1)(ConstParm, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGCopyPointsInheritanceMode     ScaleInheritance;                                  // 0x149(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGCopyPointsInheritanceMode     ColorInheritance;                                  // 0x14A(0x1)(BlueprintReadOnly, Net, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGCopyPointsInheritanceMode     SeedInheritance;                                   // 0x14B(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGCopyPointsMetadataInheritanceMode AttributeInheritance;                              // 0x14C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1762[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGCopyPointsSettings* GetDefaultObj();

};

// 0x188 (0x2D0 - 0x148)
// Class PCG.PCGCreateAttributeSettings
class UPCGCreateAttributeSettings : public UPCGSettings
{
public:
	class FName                                  OutputAttributeName;                               // 0x148(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFromSourceParam;                                  // 0x150(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDisplayFromSourceParamSetting;                    // 0x151(0x1)(ConstParm, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1765[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SourceParamAttributeName;                          // 0x154(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1766[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGMetadataTypesConstantStruct       AttributeTypes;                                    // 0x160(0x170)(Edit, BlueprintVisible, ExportObject, EditFixedSize, EditConst, InstancedReference, SubobjectReference)

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
	enum class EPCGCreateSplineMode              Mode;                                              // 0x148(0x1)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	bool                                         bClosedLoop;                                       // 0x149(0x1)(Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLinear;                                           // 0x14A(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bApplyCustomTangents;                              // 0x14B(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, EditConst, InstancedReference, SubobjectReference)
	class FName                                  ArriveTangentAttribute;                            // 0x14C(0x8)(Edit, ConstParm, BlueprintVisible, Parm, EditConst, InstancedReference, SubobjectReference)
	class FName                                  LeaveTangentAttribute;                             // 0x154(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_176D[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGCreateSplineSettings* GetDefaultObj();

};

// 0x40 (0x188 - 0x148)
// Class PCG.PCGDataFromActorSettings
class UPCGDataFromActorSettings : public UPCGSettings
{
public:
	struct FPCGActorSelectorSettings             ActorSelector;                                     // 0x148(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGGetDataFromActorMode          Mode;                                              // 0x168(0x1)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	bool                                         bDisplayModeSettings;                              // 0x169(0x1)(ConstParm, ExportObject, Net, Parm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1774[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          ExpectedPins;                                      // 0x170(0x10)(Edit, ConstParm, Net, Parm, EditConst, InstancedReference, SubobjectReference)
	class FName                                  PropertyName;                                      // 0x180(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGDataFromActorSettings* GetDefaultObj();

};

// 0x48 (0x190 - 0x148)
// Class PCG.PCGDataTableRowToParamDataSettings
class UPCGDataTableRowToParamDataSettings : public UPCGSettings
{
public:
	class FName                                  RowName;                                           // 0x148(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                PathOverride;                                      // 0x150(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, EditConst, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UDataTable>             DataTable;                                         // 0x160(0x30)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, DuplicateTransient)

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
	float                                        LowerBound;                                        // 0x148(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        UpperBound;                                        // 0x14C(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bInvertFilter;                                     // 0x150(0x1)(BlueprintVisible, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1781[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGDensityFilterSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGDensityNoiseSettings
class UPCGDensityNoiseSettings : public UPCGSettings
{
public:
	enum class EPCGDensityNoiseMode              DensityMode;                                       // 0x148(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_178C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DensityNoiseMin;                                   // 0x14C(0x4)(Net, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
	float                                        DensityNoiseMax;                                   // 0x150(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bInvertSourceDensity;                              // 0x154(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_178F[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGDensityNoiseSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGLinearDensityRemapSettings
class UPCGLinearDensityRemapSettings : public UPCGSettings
{
public:
	float                                        RemapMin;                                          // 0x148(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
	float                                        RemapMax;                                          // 0x14C(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bMultiplyDensity;                                  // 0x150(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1792[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGLinearDensityRemapSettings* GetDefaultObj();

};

// 0x18 (0x160 - 0x148)
// Class PCG.PCGDensityRemapSettings
class UPCGDensityRemapSettings : public UPCGSettings
{
public:
	float                                        InRangeMin;                                        // 0x148(0x4)(Edit, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
	float                                        InRangeMax;                                        // 0x14C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, EditConst, InstancedReference, SubobjectReference)
	float                                        OutRangeMin;                                       // 0x150(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, EditConst, InstancedReference, SubobjectReference)
	float                                        OutRangeMax;                                       // 0x154(0x4)(Edit, BlueprintVisible, ExportObject, OutParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bExcludeValuesOutsideInputRange;                   // 0x158(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1796[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGDensityRemapSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGDifferenceSettings
class UPCGDifferenceSettings : public UPCGSettings
{
public:
	enum class EPCGDifferenceDensityFunction     DensityFunction;                                   // 0x148(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGDifferenceMode                Mode;                                              // 0x149(0x1)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	bool                                         bDiffMetadata;                                     // 0x14A(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_179B[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGDifferenceSettings* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class PCG.PCGBlueprintElement
class UPCGBlueprintElement : public UObject
{
public:
	bool                                         bCreatesArtifacts;                                 // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCacheable;                                        // 0x29(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCanBeMultithreaded;                               // 0x2A(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17E5[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPCGPinProperties>             CustomInputPins;                                   // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGPinProperties>             CustomOutputPins;                                  // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bHasDefaultInPin;                                  // 0x50(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bHasDefaultOutPin;                                 // 0x51(0x1)(Edit, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17E6[0xE];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGBlueprintElement* GetDefaultObj();

	class UPCGMetadata* VariableLoopBody(struct FPCGContext* InContext, struct FPCGPoint* InPoint, const TArray<struct FPCGPoint>& ReturnValue);
	class UPCGPointData* VariableLoop(struct FPCGContext* InContext, class UPCGPointData** OptionalOutData);
	class UPCGMetadata* PointLoopBody(struct FPCGContext* InContext, struct FPCGPoint* InPoint, bool ReturnValue);
	class UPCGPointData* PointLoop(struct FPCGContext* InContext, class UPCGPointData** OptionalOutData);
	void OutputLabels(TSet<class FName> ReturnValue);
	void NodeTypeOverride(enum class EPCGSettingsType ReturnValue);
	void NodeTitleOverride(class FName ReturnValue);
	void NodeColorOverride(const struct FLinearColor& ReturnValue);
	class UPCGMetadata* NestedLoopBody(struct FPCGContext* InContext, bool ReturnValue);
	class UPCGPointData* NestedLoop(struct FPCGContext* InContext, class UPCGPointData** OptionalOutData);
	class UPCGMetadata* IterationLoopBody(struct FPCGContext* InContext, int64* Iteration, class UPCGSpatialData* InA, class UPCGSpatialData* InB, bool ReturnValue);
	class UPCGSpatialData* IterationLoop(struct FPCGContext* InContext, class UPCGPointData** OptionalOutData);
	void InputLabels(TSet<class FName> ReturnValue);
	void GetSeed(struct FPCGContext* InContext, int32 ReturnValue);
	void GetRandomStream(struct FPCGContext* InContext, const struct FRandomStream& ReturnValue);
	void ExecuteWithContext(struct FPCGContext* InContext, const struct FPCGDataCollection& Input, struct FPCGDataCollection* Output);
	void Execute(const struct FPCGDataCollection& Input, struct FPCGDataCollection* Output);
};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGBlueprintSettings
class UPCGBlueprintSettings : public UPCGSettings
{
public:
	class UClass*                                BlueprintElementType;                              // 0x148(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	class UPCGBlueprintElement*                  BlueprintElementInstance;                          // 0x150(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGBlueprintSettings* GetDefaultObj();

	void SetElementType(class UClass** InElementType, class UPCGBlueprintElement** ElementInstance);
	void GetElementType(class UClass* ReturnValue);
};

// 0x18 (0x160 - 0x148)
// Class PCG.PCGFilterByTagSettings
class UPCGFilterByTagSettings : public UPCGSettings
{
public:
	enum class EPCGFilterByTagOperation          Operation;                                         // 0x148(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17EC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                SelectedTags;                                      // 0x150(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGFilterByTagSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGIntersectionSettings
class UPCGIntersectionSettings : public UPCGSettings
{
public:
	enum class EPCGIntersectionDensityFunction   DensityFunction;                                   // 0x148(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17ED[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGIntersectionSettings* GetDefaultObj();

};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGMergeSettings
class UPCGMergeSettings : public UPCGSettings
{
public:
	bool                                         bMergeMetadata;                                    // 0x148(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17EF[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGMergeSettings* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGPointExtentsModifierSettings
class UPCGPointExtentsModifierSettings : public UPCGSettings
{
public:
	struct FVector                               Extents;                                           // 0x148(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	enum class EPCGPointExtentsModifierMode      Mode;                                              // 0x160(0x1)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_17F0[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGPointExtentsModifierSettings* GetDefaultObj();

};

// 0x1C8 (0x310 - 0x148)
// Class PCG.PCGPointFilterSettings
class UPCGPointFilterSettings : public UPCGSettings
{
public:
	enum class EPCGPointFilterOperator           Operator;                                          // 0x148(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17F2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         TargetAttribute;                                   // 0x150(0x20)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseConstantThreshold;                             // 0x170(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17F3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGAttributePropertySelector         ThresholdAttribute;                                // 0x178(0x20)(ConstParm, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseSpatialQuery;                                  // 0x198(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17F4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGMetadataTypesConstantStruct       AttributeTypes;                                    // 0x1A0(0x170)(Edit, BlueprintVisible, ExportObject, EditFixedSize, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGPointFilterSettings* GetDefaultObj();

};

// 0x38 (0x180 - 0x148)
// Class PCG.PCGPointMatchAndSetSettings
class UPCGPointMatchAndSetSettings : public UPCGSettings
{
public:
	class UClass*                                MatchAndSetType;                                   // 0x148(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UPCGMatchAndSetBase*                   MatchAndSetInstance;                               // 0x150(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	struct FPCGAttributePropertySelector         SetTarget;                                         // 0x158(0x20)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	enum class EPCGMetadataTypes                 SetTargetType;                                     // 0x178(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17F6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EPCGMetadataTypesConstantStructStringMode SetTargetStringMode;                               // 0x17C(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGPointMatchAndSetSettings* GetDefaultObj();

	void SetMatchAndSetType(class UClass** InMatchAndSetType);
};

// 0x8 (0x150 - 0x148)
// Class PCG.PCGPointSamplerSettings
class UPCGPointSamplerSettings : public UPCGSettings
{
public:
	float                                        Ratio;                                             // 0x148(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	uint8                                        Pad_17F7[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGPointSamplerSettings* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGProjectionSettings
class UPCGProjectionSettings : public UPCGSettings
{
public:
	struct FPCGProjectionParams                  ProjectionParams;                                  // 0x148(0x20)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGProjectionSettings* GetDefaultObj();

};

// 0x68 (0x1B0 - 0x148)
// Class PCG.PCGPropertyToParamDataSettings
class UPCGPropertyToParamDataSettings : public UPCGSettings
{
public:
	struct FPCGActorSelectorSettings             ActorSelector;                                     // 0x148(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSelectComponent;                                  // 0x168(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17FA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                ComponentClass;                                    // 0x170(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  PropertyName;                                      // 0x178(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bExtractObjectAndStruct;                           // 0x180(0x1)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17FB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  OutputAttributeName;                               // 0x184(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAlwaysRequeryActors;                              // 0x18C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGActorSelection                ActorSelection;                                    // 0x18D(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_17FC[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  ActorSelectionTag;                                 // 0x190(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  ActorSelectionName;                                // 0x198(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                ActorSelectionClass;                               // 0x1A0(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPCGActorFilter                   ActorFilter;                                       // 0x1A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIncludeChildren;                                  // 0x1A9(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_17FF[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGPropertyToParamDataSettings* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class PCG.PCGSelfPruningSettings
class UPCGSelfPruningSettings : public UPCGSettings
{
public:
	enum class EPCGSelfPruningType               PruningType;                                       // 0x148(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1801[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RadiusSimilarityFactor;                            // 0x14C(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRandomizedPruning;                                // 0x150(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1802[0x7];                                     // Fixing Size Of Struct > TateDumper <

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
	class UClass*                                TemplateActorClass;                                // 0x148(0x8)(ConstParm, Net, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TArray<class FName>                          PostSpawnFunctionNames;                            // 0x150(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGSpawnActorOption              Option;                                            // 0x160(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bForceDisableActorParsing;                         // 0x161(0x1)(ExportObject, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGSpawnActorGenerationTrigger   bGenerationTrigger;                                // 0x162(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bInheritActorTags;                                 // 0x163(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1806[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          TagsToAddOnActors;                                 // 0x168(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                TemplateActor;                                     // 0x178(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGActorPropertyOverride>     ActorOverrides;                                    // 0x180(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGSpawnActorSettings* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class PCG.PCGNode
class UPCGNode : public UObject
{
public:
	class FName                                  NodeTitle;                                         // 0x28(0x8)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPCGSettingsInterface*                 SettingsInterface;                                 // 0x30(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TArray<class UPCGNode*>                      OutboundNodes;                                     // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TArray<class UPCGEdge*>                      InboundEdges;                                      // 0x48(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TArray<class UPCGEdge*>                      OutboundEdges;                                     // 0x58(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TArray<class UPCGPin*>                       InputPins;                                         // 0x68(0x10)(ExportObject, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TArray<class UPCGPin*>                       OutputPins;                                        // 0x78(0x10)(ConstParm, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGNode* GetDefaultObj();

	void RemoveEdgeTo(class FName FromPinLable, class UPCGNode* To, class FName ToPinLabel, bool ReturnValue);
	void GetSettings(class UPCGSettings* ReturnValue);
	void GetGraph(class UPCGGraph* ReturnValue);
	void AddEdgeTo(class FName FromPinLabel, class UPCGNode* To, class FName ToPinLabel, class UPCGNode* ReturnValue);
};

// 0x8 (0x90 - 0x88)
// Class PCG.PCGBaseSubgraphNode
class UPCGBaseSubgraphNode : public UPCGNode
{
public:
	bool                                         bDynamicGraph;                                     // 0x88(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_180C[0x7];                                     // Fixing Size Of Struct > TateDumper <

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
	struct FPCGSplineSamplerParams               SamplerParams;                                     // 0x148(0xC8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGSplineSamplerSettings* GetDefaultObj();

};

// 0x38 (0x180 - 0x148)
// Class PCG.PCGStaticMeshSpawnerSettings
class UPCGStaticMeshSpawnerSettings : public UPCGSettings
{
public:
	class UClass*                                MeshSelectorType;                                  // 0x148(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UPCGMeshSelectorBase*                  MeshSelectorInstance;                              // 0x150(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                InstancePackerType;                                // 0x158(0x8)(Edit, Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UPCGInstancePackerBase*                InstancePackerInstance;                            // 0x160(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class FName                                  OutAttributeName;                                  // 0x168(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGStaticMeshSpawnerEntry>    Meshes;                                            // 0x170(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGStaticMeshSpawnerSettings* GetDefaultObj();

	void SetMeshSelectorType(class UClass** InMeshSelectorType);
	void SetInstancePackerType(class UClass* InInstancePackerType);
};

// 0x30 (0x178 - 0x148)
// Class PCG.PCGSurfaceSamplerSettings
class UPCGSurfaceSamplerSettings : public UPCGSettings
{
public:
	float                                        PointsPerSquaredMeter;                             // 0x148(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1815[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PointExtents;                                      // 0x150(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	float                                        Looseness;                                         // 0x168(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUnbounded;                                        // 0x16C(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bApplyDensityToPoints;                             // 0x16D(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1816[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PointSteepness;                                    // 0x170(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1817[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSurfaceSamplerSettings* GetDefaultObj();

};

// 0xF8 (0x240 - 0x148)
// Class PCG.PCGTextureSamplerSettings
class UPCGTextureSamplerSettings : public UPCGSettings
{
public:
	uint8                                        Pad_1818[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x150(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	bool                                         bUseAbsoluteTransform;                             // 0x1B0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1819[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x1B8(0x30)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	enum class EPCGTextureDensityFunction        DensityFunction;                                   // 0x1E8(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGTextureColorChannel           ColorChannel;                                      // 0x1E9(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_181B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TexelSize;                                         // 0x1EC(0x4)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseAdvancedTiling;                                // 0x1F0(0x1)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_181C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Tiling;                                            // 0x1F8(0x10)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector2D                             CenterOffset;                                      // 0x208(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        Rotation;                                          // 0x218(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         bUseTileBounds;                                    // 0x21C(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_181D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             TileBoundsMin;                                     // 0x220(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             TileBoundsMax;                                     // 0x230(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGTextureSamplerSettings* GetDefaultObj();

};

// 0xB8 (0x200 - 0x148)
// Class PCG.PCGTransformPointsSettings
class UPCGTransformPointsSettings : public UPCGSettings
{
public:
	bool                                         bApplyToAttribute;                                 // 0x148(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1820[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  AttributeName;                                     // 0x14C(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1821[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OffsetMin;                                         // 0x158(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               OffsetMax;                                         // 0x170(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAbsoluteOffset;                                   // 0x188(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1823[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              RotationMin;                                       // 0x190(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FRotator                              RotationMax;                                       // 0x1A8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAbsoluteRotation;                                 // 0x1C0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1825[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ScaleMin;                                          // 0x1C8(0x18)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               ScaleMax;                                          // 0x1E0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAbsoluteScale;                                    // 0x1F8(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUniformScale;                                     // 0x1F9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRecomputeSeed;                                    // 0x1FA(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1826[0x5];                                     // Fixing Size Of Struct > TateDumper <

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
	enum class EPCGUnionDensityFunction          DensityFunction;                                   // 0x149(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_182D[0x6];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGUnionSettings* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class PCG.PCGVolumeSamplerSettings
class UPCGVolumeSamplerSettings : public UPCGSettings
{
public:
	struct FVector                               VoxelSize;                                         // 0x148(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUnbounded;                                        // 0x160(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1832[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGVolumeSamplerSettings* GetDefaultObj();

};

// 0x78 (0x1C0 - 0x148)
// Class PCG.PCGWorldQuerySettings
class UPCGWorldQuerySettings : public UPCGSettings
{
public:
	struct FPCGWorldVolumetricQueryParams        QueryParams;                                       // 0x148(0x78)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGWorldQuerySettings* GetDefaultObj();

};

// 0xB8 (0x200 - 0x148)
// Class PCG.PCGWorldRayHitSettings
class UPCGWorldRayHitSettings : public UPCGSettings
{
public:
	struct FPCGWorldRayHitQueryParams            QueryParams;                                       // 0x148(0xB8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGWorldRayHitSettings* GetDefaultObj();

};

// 0xB0 (0xD8 - 0x28)
// Class PCG.PCGLandscapeCache
class UPCGLandscapeCache : public UObject
{
public:
	uint8                                        Pad_1835[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	TSet<class FName>                            CachedLayerNames;                                  // 0x78(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1836[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGLandscapeCache* GetDefaultObj();

};

// 0xB8 (0x580 - 0x4C8)
// Class PCG.PCGPartitionActor
class APCGPartitionActor : public APartitionActor
{
public:
	struct FGuid                                 PCGGuid;                                           // 0x4C8(0x10)(Edit, BlueprintReadOnly, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_183D[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	TMap<class UPCGComponent*, TSoftObjectPtr<class UPCGComponent>> LocalToOriginal;                                   // 0x528(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint32                                       PCGGridSize;                                       // 0x578(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUse2DGrid;                                        // 0x57C(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1840[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APCGPartitionActor* GetDefaultObj();

	void GetOriginalComponent(class UPCGComponent** LocalComponent, class UPCGComponent* ReturnValue);
	void GetLocalComponent(class UPCGComponent** OriginalComponent, class UPCGComponent* ReturnValue);
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

	void SetSeedFromPosition(struct FPCGPoint* InPoint);
	struct FVector SetLocalCenter(struct FPCGPoint* InPoint);
	struct FVector SetExtents(struct FPCGPoint* InPoint);
	void GetTransformedBounds(struct FPCGPoint* InPoint, const struct FBox& ReturnValue);
	struct FPCGContext GetTaskId(int64 ReturnValue);
	struct FPCGContext GetSettings(class UPCGSettings* ReturnValue);
	class UPCGComponent* GetRandomStream(struct FPCGPoint* InPoint, const struct FRandomStream& ReturnValue);
	struct FPCGContext GetOriginalComponent(class UPCGComponent* ReturnValue);
	void GetLocalCenter(struct FPCGPoint* InPoint, const struct FVector& ReturnValue);
	void GetInterpolatedPCGLandscapeLayerWeights(class UObject* WorldContextObject, struct FVector* Location, const TArray<struct FPCGLandscapeLayerWeight>& ReturnValue);
	struct FPCGContext GetInputData(class UPCGData* ReturnValue);
	void GetExtents(struct FPCGPoint* InPoint, const struct FVector& ReturnValue);
	struct FPCGContext GetComponent(class UPCGComponent* ReturnValue);
	bool GetActorLocalBoundsPCG(class AActor** InActor, const struct FBox& ReturnValue);
	struct FPCGContext GetActorData(class UPCGData* ReturnValue);
	bool GetActorBoundsPCG(class AActor** InActor, const struct FBox& ReturnValue);
	bool CreatePCGDataFromActor(class AActor** InActor, class UPCGData* ReturnValue);
	struct FVector ComputeSeedFromPosition(int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGInstancePackerBase
class UPCGInstancePackerBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPCGInstancePackerBase* GetDefaultObj();

	struct FPCGPackedCustomData PackInstances();
	struct FPCGPackedCustomData PackCustomDataFromAttributes();
	struct FPCGPackedCustomData AddTypeToPacking(bool ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class PCG.PCGInstancePackerByAttribute
class UPCGInstancePackerByAttribute : public UPCGInstancePackerBase
{
public:
	TArray<class FName>                          AttributeNames;                                    // 0x28(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGInstancePackerByAttribute* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class PCG.PCGInstancePackerByRegex
class UPCGInstancePackerByRegex : public UPCGInstancePackerBase
{
public:
	TArray<class FString>                        RegexPatterns;                                     // 0x28(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGInstancePackerByRegex* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class PCG.PCGMatchAndSetBase
class UPCGMatchAndSetBase : public UObject
{
public:
	enum class EPCGMetadataTypes                 Type;                                              // 0x28(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_18C8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EPCGMetadataTypesConstantStructStringMode StringMode;                                        // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMatchAndSetBase* GetDefaultObj();

	class UPCGPointData* ValidatePreconditions(bool ReturnValue);
	class UPCGPointData* MatchAndSet(class UPCGPointMatchAndSetSettings* InSettings);
};

// 0x20 (0x50 - 0x30)
// Class PCG.PCGMatchAndSetByAttribute
class UPCGMatchAndSetByAttribute : public UPCGMatchAndSetBase
{
public:
	class FName                                  MatchSourceAttribute;                              // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGMetadataTypes                 MatchSourceType;                                   // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_18CB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EPCGMetadataTypesConstantStructStringMode MatchSourceStringMode;                             // 0x3C(0x4)(Edit, ExportObject, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGMatchAndSetByAttributeEntry> Entries;                                           // 0x40(0x10)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMatchAndSetByAttribute* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class PCG.PCGMatchAndSetWeighted
class UPCGMatchAndSetWeighted : public UPCGMatchAndSetBase
{
public:
	TArray<struct FPCGMatchAndSetWeightedEntry>  Entries;                                           // 0x30(0x10)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	bool                                         bShouldMutateSeed;                                 // 0x40(0x1)(Edit, ExportObject, Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_18CE[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGMatchAndSetWeighted* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class PCG.PCGMatchAndSetWeightedByCategory
class UPCGMatchAndSetWeightedByCategory : public UPCGMatchAndSetBase
{
public:
	class FName                                  CategoryAttribute;                                 // 0x30(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGMetadataTypes                 CategoryType;                                      // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_18D3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EPCGMetadataTypesConstantStructStringMode CategoryStringMode;                                // 0x3C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGMatchAndSetWeightedByCategoryEntryList> Categories;                                        // 0x40(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst)
	bool                                         bShouldMutateSeed;                                 // 0x50(0x1)(Edit, ExportObject, Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_18D4[0x7];                                     // Fixing Size Of Struct > TateDumper <

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
	class FName                                  AttributeName;                                     // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSoftISMComponentDescriptor           TemplateDescriptor;                                // 0x30(0x1E8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseAttributeMaterialOverrides;                    // 0x218(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_18D7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          MaterialOverrideAttributes;                        // 0x220(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMeshSelectorByAttribute* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class PCG.PCGMeshSelectorWeighted
class UPCGMeshSelectorWeighted : public UPCGMeshSelectorBase
{
public:
	TArray<struct FPCGMeshSelectorWeightedEntry> MeshEntries;                                       // 0x28(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseAttributeMaterialOverrides;                    // 0x38(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_18DD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          MaterialOverrideAttributes;                        // 0x40(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMeshSelectorWeighted* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class PCG.PCGMeshSelectorWeightedByCategory
class UPCGMeshSelectorWeightedByCategory : public UPCGMeshSelectorBase
{
public:
	class FName                                  CategoryAttribute;                                 // 0x28(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGWeightedByCategoryEntryList> Entries;                                           // 0x30(0x10)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	bool                                         bUseAttributeMaterialOverrides;                    // 0x40(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_18E3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          MaterialOverrideAttributes;                        // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMeshSelectorWeightedByCategory* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class PCG.PCGMetadata
class UPCGMetadata : public UObject
{
public:
	class UPCGMetadata*                          Parent;                                            // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TSet<TWeakObjectPtr<class UPCGMetadata>>     OtherParents;                                      // 0x30(0x50)(Edit, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1982[0x88];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGMetadata* GetDefaultObj();

	struct FPCGPoint SetPointAttributes();
	int64 SetAttributesByKey(int64 Key);
	int64 ResetWeightedAttributesByKey();
	struct FPCGPoint ResetPointWeightedAttributes();
	class FName RenameAttribute(bool ReturnValue);
	class UPCGMetadata* MergePointAttributes(const struct FPCGPoint& TargetPoint, enum class EPCGMetadataOp* Op);
	int64 MergeAttributesByKey(enum class EPCGMetadataOp* Op);
	enum class EPCGMetadataFilterMode InitializeWithAttributeFilter();
	enum class EPCGMetadataFilterMode InitializeAsCopyWithAttributeFilter();
	class UPCGMetadata* InitializeAsCopy();
	class UPCGMetadata* Initialize();
	class UPCGMetadata* HasCommonAttributes(bool ReturnValue);
	class FName HasAttribute(bool ReturnValue);
	TArray<class FName> GetAttributes(const TArray<enum class EPCGMetadataTypes>& AttributeTypes);
	class FName DeleteAttribute();
	bool CreateVectorAttribute(const struct FVector& DefaultValue);
	bool CreateVector4Attribute(const struct FVector4& DefaultValue);
	bool CreateVector2Attribute(const struct FVector2D& DefaultValue);
	bool CreateTransformAttribute(const struct FTransform& DefaultValue);
	bool CreateStringAttribute(const class FString& DefaultValue);
	bool CreateRotatorAttribute(const struct FRotator& DefaultValue);
	bool CreateQuatAttribute(const struct FQuat& DefaultValue);
	bool CreateInteger64Attribute(int64 DefaultValue);
	bool CreateInteger32Attribute(int32 DefaultValue);
	bool CreateFloatAttribute(float DefaultValue);
	bool CreateDoubleAttribute(double DefaultValue);
	bool CreateBoolAttribute(bool DefaultValue);
	bool CopyExistingAttribute(bool ReturnValue);
	class UPCGMetadata* CopyAttributes();
	class FName CopyAttribute();
	class FName ClearAttribute();
	int64 AddEntry(int64 ReturnValue);
	enum class EPCGMetadataFilterMode AddAttributesFiltered();
	class UPCGMetadata* AddAttributes();
	class FName AddAttribute();
	int64 AccumulateWeightedAttributesByKey(int64 Key);
	struct FPCGPoint AccumulatePointWeightedAttributes(struct FPCGPoint* InPoint);
};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGMetadataAccessorHelpers
class UPCGMetadataAccessorHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPCGMetadataAccessorHelpers* GetDefaultObj();

	class FName SetVectorAttributeByMetadataKey(int64 Key, const struct FVector& Value);
	class FName SetVectorAttribute(const struct FVector& Value);
	class FName SetVector4AttributeByMetadataKey(int64 Key, const struct FVector4& Value);
	class FName SetVector4Attribute(const struct FVector4& Value);
	class FName SetVector2AttributeByMetadataKey(int64 Key, const struct FVector2D& Value);
	class FName SetVector2Attribute(const struct FVector2D& Value);
	class FName SetTransformAttributeByMetadataKey(int64 Key, const struct FTransform& Value);
	class FName SetTransformAttribute(const struct FTransform& Value);
	class FName SetStringAttributeByMetadataKey(int64 Key, const class FString& Value);
	class FName SetStringAttribute(const class FString& Value);
	class FName SetRotatorAttributeByMetadataKey(int64 Key, const struct FRotator& Value);
	class FName SetRotatorAttribute(const struct FRotator& Value);
	class FName SetQuatAttributeByMetadataKey(int64 Key, const struct FQuat& Value);
	class FName SetQuatAttribute(const struct FQuat& Value);
	class FName SetInteger64AttributeByMetadataKey(int64 Key, int64 Value);
	class FName SetInteger64Attribute(int64 Value);
	class FName SetInteger32AttributeByMetadataKey(int64 Key, int32 Value);
	class FName SetInteger32Attribute(int32 Value);
	class FName SetFloatAttributeByMetadataKey(int64 Key, float Value);
	class FName SetFloatAttribute(float Value);
	class FName SetDoubleAttributeByMetadataKey(int64 Key, double Value);
	class FName SetDoubleAttribute(double Value);
	class FName SetBoolAttributeByMetadataKey(int64 Key, bool Value);
	class FName SetBoolAttribute(bool Value);
	class FName SetAttributeFromPropertyByMetadataKey(int64 Key, class UObject** Object, bool ReturnValue);
	class UPCGMetadata* InitializeMetadata();
	class FName HasAttributeSetByMetadataKey(int64 Key, bool ReturnValue);
	class FName HasAttributeSet(bool ReturnValue);
	class FName GetVectorAttributeByMetadataKey(int64 Key, const struct FVector& ReturnValue);
	class FName GetVectorAttribute(const struct FVector& ReturnValue);
	class FName GetVector4AttributeByMetadataKey(int64 Key, const struct FVector4& ReturnValue);
	class FName GetVector4Attribute(const struct FVector4& ReturnValue);
	class FName GetVector2AttributeByMetadataKey(int64 Key, const struct FVector2D& ReturnValue);
	class FName GetVector2Attribute(const struct FVector2D& ReturnValue);
	class FName GetTransformAttributeByMetadataKey(int64 Key, const struct FTransform& ReturnValue);
	class FName GetTransformAttribute(const struct FTransform& ReturnValue);
	class FName GetStringAttributeByMetadataKey(int64 Key, const class FString& ReturnValue);
	class FName GetStringAttribute(const class FString& ReturnValue);
	class FName GetRotatorAttributeByMetadataKey(int64 Key, const struct FRotator& ReturnValue);
	class FName GetRotatorAttribute(const struct FRotator& ReturnValue);
	class FName GetQuatAttributeByMetadataKey(int64 Key, const struct FQuat& ReturnValue);
	class FName GetQuatAttribute(const struct FQuat& ReturnValue);
	class FName GetInteger64AttributeByMetadataKey(int64 Key, int64 ReturnValue);
	class FName GetInteger64Attribute(int64 ReturnValue);
	class FName GetInteger32AttributeByMetadataKey(int64 Key, int32 ReturnValue);
	class FName GetInteger32Attribute(int32 ReturnValue);
	class FName GetFloatAttributeByMetadataKey(int64 Key, float ReturnValue);
	class FName GetFloatAttribute(float ReturnValue);
	class FName GetDoubleAttributeByMetadataKey(int64 Key, double ReturnValue);
	class FName GetDoubleAttribute(double ReturnValue);
	class FName GetBoolAttributeByMetadataKey(int64 Key, bool ReturnValue);
	class FName GetBoolAttribute(bool ReturnValue);
	class UPCGMetadata* CopyPoint(struct FPCGPoint* InPoint);
};

// 0x100 (0x1B8 - 0xB8)
// Class PCG.PCGComponent
class UPCGComponent : public UActorComponent
{
public:
	enum class EPCGComponentInput                InputType;                                         // 0xB8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bParseActorComponents;                             // 0xB9(0x1)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A5A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Seed;                                              // 0xBC(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bActivated;                                        // 0xC0(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsComponentPartitioned;                           // 0xC1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGComponentGenerationTrigger    GenerationTrigger;                                 // 0xC2(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGenerated;                                        // 0xC3(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRuntimeGenerated;                                 // 0xC4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A5C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          PostGenerateFunctionNames;                         // 0xC8(0x10)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UPCGGraphInstance*                     GraphInstance;                                     // 0xD8(0x8)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UPCGData*                              CachedPCGData;                                     // 0xE0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UPCGData*                              CachedInputData;                                   // 0xE8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UPCGData*                              CachedActorData;                                   // 0xF0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UPCGData*                              CachedLandscapeData;                               // 0xF8(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UPCGData*                              CachedLandscapeHeightData;                         // 0x100(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<class UPCGManagedResource*>           GeneratedResources;                                // 0x108(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A5D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  LastGeneratedBounds;                               // 0x120(0x38)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FPCGDataCollection                    GeneratedGraphOutput;                              // 0x158(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A5F[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bIsComponentLocal;                                 // 0x188(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A60[0x2F];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGComponent* GetDefaultObj();

	class UPCGGraphInterface* SetGraph();
	void NotifyPropertiesChangedFromBlueprint();
	void GetGeneratedGraphOutput(const struct FPCGDataCollection& ReturnValue);
	void GenerateLocal(bool bForce);
	void Generate(bool bForce);
	void ClearPCGLink(class UClass* TemplateActor, class AActor* ReturnValue);
	bool CleanupLocal();
	bool Cleanup();
	class UPCGManagedResource* AddToManagedResources();
};

// 0x0 (0x28 - 0x28)
// Class PCG.PCGDataFunctionLibrary
class UPCGDataFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPCGDataFunctionLibrary* GetDefaultObj();

	class FString GetTaggedParams(const TArray<struct FPCGTaggedData>& ReturnValue);
	class FString GetTaggedInputs(const TArray<struct FPCGTaggedData>& ReturnValue);
	class FName GetParamsByPin(const TArray<struct FPCGTaggedData>& ReturnValue);
	struct FPCGDataCollection GetParams(const TArray<struct FPCGTaggedData>& ReturnValue);
	class FName GetInputsByPin(const TArray<struct FPCGTaggedData>& ReturnValue);
	struct FPCGDataCollection GetInputs(const TArray<struct FPCGTaggedData>& ReturnValue);
	struct FPCGDataCollection GetAllSettings(const TArray<struct FPCGTaggedData>& ReturnValue);
};

// 0x30 (0x58 - 0x28)
// Class PCG.PCGEdge
class UPCGEdge : public UObject
{
public:
	class FName                                  InboundLabel;                                      // 0x28(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UPCGNode*                              InboundNode;                                       // 0x30(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FName                                  OutboundLabel;                                     // 0x38(0x8)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UPCGNode*                              OutboundNode;                                      // 0x40(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
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
	bool                                         bLandscapeUsesMetadata;                            // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A79[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPCGNode*>                      Nodes;                                             // 0x30(0x10)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPCGNode*                              InputNode;                                         // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UPCGNode*                              OutputNode;                                        // 0x48(0x8)(Edit, Net, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FInstancedPropertyBag                 UserParameters;                                    // 0x50(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGGraph* GetDefaultObj();

	class UPCGNode* RemoveNode();
	class FName RemoveEdge(class UPCGNode* To, bool ReturnValue);
	void GetOutputNode(class UPCGNode* ReturnValue);
	void GetInputNode(class UPCGNode* ReturnValue);
	class UPCGSettings* AddNodeOfType(class UPCGNode* ReturnValue);
	void AddNodeInstance(class UPCGSettings* InSettings, class UPCGNode* ReturnValue);
	class UPCGSettings* AddNodeCopy(class UPCGSettings* InSettings, class UPCGNode* ReturnValue);
	class UPCGNode* AddEdge(class FName FromPinLabel, class UPCGNode* To, class FName ToPinLabel, class UPCGNode* ReturnValue);
};

// 0x68 (0x90 - 0x28)
// Class PCG.PCGGraphInstance
class UPCGGraphInstance : public UPCGGraphInterface
{
public:
	class UPCGGraphInterface*                    Graph;                                             // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FPCGOverrideInstancedPropertyBag      ParametersOverrides;                               // 0x30(0x60)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGGraphInstance* GetDefaultObj();

};

// 0xA8 (0x1F0 - 0x148)
// Class PCG.PCGGraphInputOutputSettings
class UPCGGraphInputOutputSettings : public UPCGSettings
{
public:
	TSet<class FName>                            PinLabels;                                         // 0x148(0x50)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGPinProperties>             CustomPins;                                        // 0x198(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A7B[0x48];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGGraphInputOutputSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class PCG.PCGManagedResource
class UPCGManagedResource : public UObject
{
public:
	struct FPCGCrc                               Crc;                                               // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsMarkedUnused;                                   // 0x30(0x1)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A7E[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGManagedResource* GetDefaultObj();

};

// 0x50 (0x88 - 0x38)
// Class PCG.PCGManagedActors
class UPCGManagedActors : public UPCGManagedResource
{
public:
	TSet<TSoftObjectPtr<class AActor>>           GeneratedActors;                                   // 0x38(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGManagedActors* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class PCG.PCGManagedComponent
class UPCGManagedComponent : public UPCGManagedResource
{
public:
	TSoftObjectPtr<class UActorComponent>        GeneratedComponent;                                // 0x38(0x30)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGManagedComponent* GetDefaultObj();

};

// 0x1D8 (0x240 - 0x68)
// Class PCG.PCGManagedISMComponent
class UPCGManagedISMComponent : public UPCGManagedComponent
{
public:
	bool                                         bHasDescriptor;                                    // 0x68(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A80[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FISMComponentDescriptor               Descriptor;                                        // 0x70(0x1C0)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint64                                       SettingsUID;                                       // 0x230(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A81[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGManagedISMComponent* GetDefaultObj();

};

// 0x58 (0x90 - 0x38)
// Class PCG.PCGParamData
class UPCGParamData : public UPCGData
{
public:
	class UPCGMetadata*                          MetaData;                                          // 0x38(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	TMap<class FName, int64>                     NameMap;                                           // 0x40(0x50)(Edit, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGParamData* GetDefaultObj();

	void MutableMetadata(class UPCGMetadata* ReturnValue);
	void FindOrAddMetadataKey(class FName* InName, int64 ReturnValue);
	void FindMetadataKey(class FName* InName, int64 ReturnValue);
	void FilterParamsByName(class FName* InName, class UPCGParamData* ReturnValue);
	int64 FilterParamsByKey(class UPCGParamData* ReturnValue);
	void ConstMetadata(class UPCGMetadata* ReturnValue);
};

// 0x30 (0x58 - 0x28)
// Class PCG.PCGPin
class UPCGPin : public UObject
{
public:
	class UPCGNode*                              Node;                                              // 0x28(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	class FName                                  Label;                                             // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class UPCGEdge*>                      Edges;                                             // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	struct FPCGPinProperties                     Properties;                                        // 0x48(0x10)(Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGPin* GetDefaultObj();

	class FText SetToolTip();
	void GetTooltip(class FText ReturnValue);
};

// 0x8 (0x48 - 0x40)
// Class PCG.PCGSettingsInstance
class UPCGSettingsInstance : public UPCGSettingsInterface
{
public:
	class UPCGSettings*                          Settings;                                          // 0x40(0x8)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

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
	class UPCGGraphInstance*                     SubgraphInstance;                                  // 0x148(0x8)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_1A93[0x480];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGSubsystem* GetDefaultObj();

};

// 0x8 (0x520 - 0x518)
// Class PCG.PCGVolume
class APCGVolume : public AVolume
{
public:
	class UPCGComponent*                         PCGComponent;                                      // 0x518(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class APCGVolume* GetDefaultObj();

};

// 0x18 (0x4E0 - 0x4C8)
// Class PCG.PCGWorldActor
class APCGWorldActor : public AActor
{
public:
	uint32                                       PartitionGridSize;                                 // 0x4C8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AA3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPCGLandscapeCache*                    LandscapeCacheObject;                              // 0x4D0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUse2DGrid;                                        // 0x4D8(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AA5[0x7];                                     // Fixing Size Of Struct > TateDumper <

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

	struct FDeterminismTestResult ExecuteTest();
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
	uint8                                        Pad_1AAA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  NameProperty;                                      // 0x4E4(0x8)(ExportObject, Net)
	uint8                                        Pad_1AAB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                StringProperty;                                    // 0x4F0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGUnitTestDummyEnum             EnumProperty;                                      // 0x500(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm)
	struct FVector                               VectorProperty;                                    // 0x508(0x18)(BlueprintReadOnly, EditFixedSize)
	struct FVector4                              Vector4Property;                                   // 0x520(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FTransform                            TransformProperty;                                 // 0x540(0x60)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FRotator                              RotatorProperty;                                   // 0x5A0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize)
	uint8                                        Pad_1AAD[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 QuatProperty;                                      // 0x5C0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       SoftObjectPathProperty;                            // 0x5E0(0x20)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FSoftClassPath                        SoftClassPathProperty;                             // 0x600(0x20)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                ClassProperty;                                     // 0x620(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UObject*                               ObjectProperty;                                    // 0x628(0x8)(Net)
	struct FVector2D                             Vector2Property;                                   // 0x630(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FColor                                ColorProperty;                                     // 0x640(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AB0[0xC];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APCGUnitTestDummyActor* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class PCG.PCGUnitTestDummyComponent
class UPCGUnitTestDummyComponent : public UActorComponent
{
public:
	int32                                        IntProperty;                                       // 0xB8(0x4)(ConstParm, ExportObject)
	uint8                                        Pad_1AB4[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPCGUnitTestDummyComponent* GetDefaultObj();

};

}


