#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBakeTextureResolution : int32
{
	Resolution16                   = 16,
	Resolution32                   = 32,
	Resolution64                   = 64,
	Resolution128                  = 128,
	Resolution256                  = 256,
	Resolution512                  = 512,
	Resolution1024                 = 1024,
	Resolution2048                 = 2048,
	Resolution4096                 = 4096,
	Resolution8192                 = 8192,
	EBakeTextureResolution_MAX     = 8193,
};

enum class EBakeTextureBitDepth : int32
{
	ChannelBits8                   = 0,
	ChannelBits16                  = 1,
	EBakeTextureBitDepth_MAX       = 2,
};

enum class EBakeTextureSamplesPerPixel : int32
{
	Sample1                        = 1,
	Sample4                        = 4,
	Sample16                       = 16,
	Sample64                       = 64,
	Sample256                      = 256,
	EBakeTextureSamplesPerPixel_MAX = 257,
};

enum class EBaseCreateFromSelectedTargetType : int32
{
	NewObject                      = 0,
	FirstInputObject               = 1,
	LastInputObject                = 2,
	EBaseCreateFromSelectedTargetType_MAX = 3,
};

enum class EUVLayoutPreviewSide : int32
{
	Left                           = 0,
	Right                          = 1,
	EUVLayoutPreviewSide_MAX       = 2,
};

enum class ESpaceCurveControlPointTransformMode : int32
{
	Shared                         = 0,
	PerVertex                      = 1,
	ESpaceCurveControlPointTransformMode_MAX = 2,
};

enum class ESpaceCurveControlPointOriginMode : int32
{
	Shared                         = 0,
	First                          = 1,
	Last                           = 2,
	ESpaceCurveControlPointOriginMode_MAX = 3,
};

enum class ESpaceCurveControlPointFalloffType : int32
{
	Linear                         = 0,
	Smooth                         = 1,
	ESpaceCurveControlPointFalloffType_MAX = 2,
};

enum class EModelingComponentsPlaneVisualizationMode : uint8
{
	SimpleGrid                     = 0,
	HierarchicalGrid               = 1,
	FixedScreenAreaGrid            = 2,
	EModelingComponentsPlaneVisualizationMode_MAX = 3,
};

enum class ECreateModelingObjectResult : uint8
{
	Ok                             = 0,
	Cancelled                      = 1,
	Failed_Unknown                 = 2,
	Failed_NoAPIFound              = 3,
	Failed_InvalidWorld            = 4,
	Failed_InvalidMesh             = 5,
	Failed_InvalidTexture          = 6,
	Failed_AssetCreationFailed     = 7,
	Failed_ActorCreationFailed     = 8,
	ECreateModelingObjectResult_MAX = 9,
};

enum class ECreateMeshObjectSourceMeshType : uint8
{
	MeshDescription                = 0,
	DynamicMesh                    = 1,
	ECreateMeshObjectSourceMeshType_MAX = 2,
};

enum class ECreateObjectTypeHint : uint8
{
	Undefined                      = 0,
	StaticMesh                     = 1,
	Volume                         = 2,
	DynamicMeshActor               = 3,
	ECreateObjectTypeHint_MAX      = 4,
};

enum class EHandleSourcesMethod : uint8
{
	DeleteSources                  = 0,
	HideSources                    = 1,
	KeepSources                    = 2,
	KeepFirstSource                = 3,
	KeepLastSource                 = 4,
	EHandleSourcesMethod_MAX       = 5,
};

enum class EMultiTransformerMode : uint8
{
	DefaultGizmo                   = 1,
	QuickAxisTranslation           = 2,
	EMultiTransformerMode_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x3 (0x3 - 0x0)
// ScriptStruct ModelingComponents.ModelingToolsAxisFilter
struct FModelingToolsAxisFilter
{
public:
	bool                                         bAxisX;                                            // 0x0(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAxisY;                                            // 0x1(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAxisZ;                                            // 0x2(0x1)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ModelingComponents.RenderableTriangleVertex
struct FRenderableTriangleVertex
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector2D                             UV;                                                // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance)
	struct FVector                               Normal;                                            // 0x28(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	struct FColor                                Color;                                             // 0x40(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_B8D[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct ModelingComponents.RenderableTriangle
struct FRenderableTriangle
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FRenderableTriangleVertex             Vertex0;                                           // 0x8(0x48)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRenderableTriangleVertex             Vertex1;                                           // 0x50(0x48)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRenderableTriangleVertex             Vertex2;                                           // 0x98(0x48)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x600 (0x600 - 0x0)
// ScriptStruct ModelingComponents.CreateMeshObjectParams
struct FCreateMeshObjectParams
{
public:
	class UPrimitiveComponent*                   SourceComponent;                                   // 0x0(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ECreateObjectTypeHint             TypeHint;                                          // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B91[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UClass*                                TypeHintClass;                                     // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TypeHintExtended;                                  // 0x18(0x4)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B92[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UWorld*                                TargetWorld;                                       // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B93[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x30(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	class FString                                BaseName;                                          // 0x90(0x10)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UMaterialInterface*>            Materials;                                         // 0xA0(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TArray<class UMaterialInterface*>            AssetMaterials;                                    // 0xB0(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableCollision;                                  // 0xC0(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ECollisionTraceFlag               CollisionMode;                                     // 0xC1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableRaytracingSupport;                          // 0xC2(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableRecomputeNormals;                           // 0xC3(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableRecomputeTangents;                          // 0xC4(0x1)(Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableNanite;                                     // 0xC5(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B99[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        NaniteProxyTrianglePercent;                        // 0xC8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B9B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMeshNaniteSettings                   NaniteSettings;                                    // 0xD0(0x38)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B9C[0x4F8];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ModelingComponents.CreateMeshObjectResult
struct FCreateMeshObjectResult
{
public:
	enum class ECreateModelingObjectResult       ResultCode;                                        // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BA0[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class AActor*                                NewActor;                                          // 0x8(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPrimitiveComponent*                   NewComponent;                                      // 0x10(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               NewAsset;                                          // 0x18(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ModelingComponents.CreateTextureObjectParams
struct FCreateTextureObjectParams
{
public:
	int32                                        TypeHintExtended;                                  // 0x0(0x4)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BA4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UWorld*                                TargetWorld;                                       // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               StoreRelativeToObject;                             // 0x10(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                BaseName;                                          // 0x18(0x10)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            GeneratedTransientTexture;                         // 0x28(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ModelingComponents.CreateTextureObjectResult
struct FCreateTextureObjectResult
{
public:
	enum class ECreateModelingObjectResult       ResultCode;                                        // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BAD[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UObject*                               NewAsset;                                          // 0x8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


