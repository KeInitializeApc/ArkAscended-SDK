#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDataflowFieldFalloffType : uint8
{
	Dataflow_FieldFalloffType_None = 0,
	Dataflow_FieldFalloffType_Linear = 1,
	Dataflow_FieldFalloffType_Inverse = 2,
	Dataflow_FieldFalloffType_Squared = 3,
	Dataflow_FieldFalloffType_Logarithmic = 4,
	Dataflow_Max                   = 5,
};

enum class EDataflowSetMaskConditionType : uint8
{
	Dataflow_SetMaskConditionType_Always = 0,
	Dataflow_SetMaskConditionType_IFF_NOT_Interior = 1,
	Dataflow_SetMaskConditionType_IFF_NOT_Exterior = 2,
	Dataflow_Max                   = 3,
};

enum class EDataflowWaveFunctionType : uint8
{
	Dataflow_WaveFunctionType_Cosine = 0,
	Dataflow_WaveFunctionType_Gaussian = 1,
	Dataflow_WaveFunctionType_Falloff = 2,
	Dataflow_WaveFunctionType_Decay = 3,
	Dataflow_Max                   = 4,
};

enum class EDataflowFloatFieldOperationType : uint8
{
	Dataflow_FloatFieldOperationType_Multiply = 0,
	Dataflow_FloatFieldFalloffType_Divide = 1,
	Dataflow_FloatFieldFalloffType_Add = 2,
	Dataflow_FloatFieldFalloffType_Substract = 3,
	Dataflow_FloatFieldFalloffType_Min = 4,
	Dataflow_FloatFieldFalloffType_Max = 5,
	Dataflow_Max                   = 6,
};

enum class EDataflowVectorFieldOperationType : uint8
{
	Dataflow_VectorFieldOperationType_Multiply = 0,
	Dataflow_VectorFieldFalloffType_Divide = 1,
	Dataflow_VectorFieldFalloffType_Add = 2,
	Dataflow_VectorFieldFalloffType_Substract = 3,
	Dataflow_VectorFieldFalloffType_CrossProduct = 4,
	Dataflow_Max                   = 5,
};

enum class ESetMaterialOperationTypeEnum : uint8
{
	Dataflow_SetMaterialOperationType_Add = 0,
	Dataflow_SetMaterialOperationType_Insert = 1,
	Dataflow_Max                   = 2,
};

enum class EConvexOverlapRemovalMethodEnum : uint8
{
	Dataflow_EConvexOverlapRemovalMethod_None = 0,
	Dataflow_EConvexOverlapRemovalMethod_All = 1,
	Dataflow_EConvexOverlapRemovalMethod_OnlyClusters = 2,
	Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters = 3,
	Dataflow_Max                   = 4,
};

enum class EClusterSizeMethodEnum : uint8
{
	Dataflow_ClusterSizeMethod_ByNumber = 0,
	Dataflow_ClusterSizeMethod_ByFractionOfInput = 1,
	Dataflow_ClusterSizeMethod_BySize = 2,
	Dataflow_Max                   = 3,
};

enum class EVisibiltyOptionsEnum : uint8
{
	Dataflow_VisibilityOptions_Visible = 0,
	Dataflow_VisibilityOptions_Invisible = 1,
	Dataflow_Max                   = 2,
};

enum class EMeshBooleanOperationEnum : uint8
{
	Dataflow_MeshBoolean_Union     = 0,
	Dataflow_MeshBoolean_Intersect = 1,
	Dataflow_MeshBoolean_Difference = 2,
	Dataflow_Max                   = 3,
};

enum class EMakeBoxDataTypeEnum : uint8
{
	Dataflow_MakeBox_DataType_MinMax = 0,
	Dataflow_MakeBox_DataType_CenterSize = 1,
	Dataflow_Max                   = 2,
};

enum class EFloatToIntFunctionEnum : uint8
{
	Dataflow_FloatToInt_Function_Floor = 0,
	Dataflow_FloatToInt_Function_Ceil = 1,
	Dataflow_FloatToInt_Function_Round = 2,
	Dataflow_FloatToInt_Function_Truncate = 3,
	Dataflow_Max                   = 4,
};

enum class EFloatArrayToIntArrayFunctionEnum : uint8
{
	Dataflow_FloatToInt_Function_Floor = 0,
	Dataflow_FloatToInt_Function_Ceil = 1,
	Dataflow_FloatToInt_Function_Round = 2,
	Dataflow_FloatToInt_Function_Truncate = 3,
	Dataflow_FloatToInt_NonZeroToIndex = 4,
	Dataflow_FloatToInt_ZeroToIndex = 5,
	Dataflow_Max                   = 6,
};

enum class EMathConstantsEnum : uint8
{
	Dataflow_MathConstants_Pi      = 0,
	Dataflow_MathConstants_HalfPi  = 1,
	Dataflow_MathConstants_TwoPi   = 2,
	Dataflow_MathConstants_FourPi  = 3,
	Dataflow_MathConstants_InvPi   = 4,
	Dataflow_MathConstants_InvTwoPi = 5,
	Dataflow_MathConstants_Sqrt2   = 6,
	Dataflow_MathConstants_InvSqrt2 = 7,
	Dataflow_MathConstants_Sqrt3   = 8,
	Dataflow_MathConstants_InvSqrt3 = 9,
	Dataflow_FloatToInt_Function_E = 10,
	Dataflow_FloatToInt_Function_Gamma = 11,
	Dataflow_FloatToInt_Function_GoldenRatio = 12,
	Dataflow_FloatToInt_Function_ZeroTolerance = 13,
	Dataflow_Max                   = 14,
};

enum class ERotationOrderEnum : uint8
{
	Dataflow_RotationOrder_XYZ     = 0,
	Dataflow_RotationOrder_YZX     = 1,
	Dataflow_RotationOrder_ZXY     = 2,
	Dataflow_RotationOrder_XZY     = 3,
	Dataflow_RotationOrder_YXZ     = 4,
	Dataflow_RotationOrder_ZYX     = 5,
	Dataflow_Max                   = 6,
};

enum class ECompareOperationEnum : uint8
{
	Dataflow_Compare_Equal         = 0,
	Dataflow_Compare_Smaller       = 1,
	Dataflow_Compare_SmallerOrEqual = 2,
	Dataflow_Compare_Greater       = 3,
	Dataflow_Compare_GreaterOrEqual = 4,
	Dataflow_Max                   = 5,
};

enum class EAnchorStateEnum : uint8
{
	Dataflow_AnchorState_Anchored  = 0,
	Dataflow_AnchorState_NotAnchored = 1,
	Dataflow_Max                   = 2,
};

enum class EProximityMethodEnum : uint8
{
	Dataflow_ProximityMethod_Precise = 0,
	Dataflow_ProximityMethod_ConvexHull = 1,
	Dataflow_Max                   = 2,
};

enum class EStandardGroupNameEnum : uint8
{
	Dataflow_EStandardGroupNameEnum_Transform = 0,
	Dataflow_EStandardGroupNameEnum_Geometry = 1,
	Dataflow_EStandardGroupNameEnum_Faces = 2,
	Dataflow_EStandardGroupNameEnum_Vertices = 3,
	Dataflow_EStandardGroupNameEnum_Material = 4,
	Dataflow_EStandardGroupNameEnum_Breaking = 5,
	Dataflow_EStandardGroupNameEnum_Custom = 6,
	Dataflow_Max                   = 7,
};

enum class ECustomAttributeTypeEnum : uint8
{
	Dataflow_CustomAttributeType_UInt8 = 0,
	Dataflow_CustomAttributeType_Int32 = 1,
	Dataflow_CustomAttributeType_Float = 2,
	Dataflow_CustomAttributeType_Double = 3,
	Dataflow_CustomAttributeType_Bool = 4,
	Dataflow_CustomAttributeType_String = 5,
	Dataflow_CustomAttributeType_Vector2f = 6,
	Dataflow_CustomAttributeType_Vector3f = 7,
	Dataflow_CustomAttributeType_Vector3d = 8,
	Dataflow_CustomAttributeType_Vector4f = 9,
	Dataflow_CustomAttributeType_LinearColor = 10,
	Dataflow_CustomAttributeType_Transform = 11,
	Dataflow_CustomAttributeType_Quat4f = 12,
	Dataflow_CustomAttributeType_Box = 13,
	Dataflow_CustomAttributeType_Guid = 14,
	Dataflow_CustomAttributeType_Int32Set = 15,
	Dataflow_CustomAttributeType_Int32Array = 16,
	Dataflow_CustomAttributeType_IntVector = 17,
	Dataflow_CustomAttributeType_IntVector2 = 18,
	Dataflow_CustomAttributeType_IntVector4 = 19,
	Dataflow_CustomAttributeType_IntVector2Array = 20,
	Dataflow_CustomAttributeType_FloatArray = 21,
	Dataflow_CustomAttributeType_Vector2fArray = 22,
	Dataflow_CustomAttributeType_FVector3fArray = 23,
	Dataflow_Max                   = 24,
};

enum class ESetOperationEnum : uint8
{
	Dataflow_SetOperation_AND      = 0,
	Dataflow_SetOperation_OR       = 1,
	Dataflow_SetOperation_XOR      = 2,
	Dataflow_Max                   = 3,
};

enum class ERangeSettingEnum : uint8
{
	Dataflow_RangeSetting_InsideRange = 0,
	Dataflow_RangeSetting_OutsideRange = 1,
	Dataflow_Max                   = 2,
};

enum class ESelectSubjectTypeEnum : uint8
{
	Dataflow_SelectSubjectType_Vertices = 0,
	Dataflow_SelectSubjectType_BoundingBox = 1,
	Dataflow_SelectSubjectType_Centroid = 2,
	Dataflow_Max                   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GeometryCollectionTerminalDataflowNode
struct FGeometryCollectionTerminalDataflowNode : public FDataflowTerminalNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	TArray<class UMaterial*>                     Materials;                                         // 0x198(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TArray<struct FGeometryCollectionAutoInstanceMesh> InstancedMeshes;                                   // 0x1A8(0x10)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetGeometryCollectionAssetDataflowNode
struct FGetGeometryCollectionAssetDataflowNode : public FDataflowNode
{
public:
	class UGeometryCollection*                   Asset;                                             // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetGeometryCollectionSourcesDataflowNode
struct FGetGeometryCollectionSourcesDataflowNode : public FDataflowNode
{
public:
	class UGeometryCollection*                   Asset;                                             // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FGeometryCollectionSource>     Sources;                                           // 0xF0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CreateGeometryCollectionFromSourcesDataflowNode
struct FCreateGeometryCollectionFromSourcesDataflowNode : public FDataflowNode
{
public:
	TArray<struct FGeometryCollectionSource>     Sources;                                           // 0xE8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FManagedArrayCollection               Collection;                                        // 0xF8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	TArray<class UMaterial*>                     Materials;                                         // 0x1A8(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TArray<struct FGeometryCollectionAutoInstanceMesh> InstancedMeshes;                                   // 0x1B8(0x10)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadialFalloffFieldDataflowNode
struct FRadialFalloffFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FSphere                               Sphere;                                            // 0x118(0x20)(Edit, ConstParm, BlueprintVisible, OutParm)
	struct FVector                               Translation;                                       // 0x138(0x18)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	float                                        Magnitude;                                         // 0x150(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0x154(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0x158(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Default;                                           // 0x15C(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	enum class EDataflowFieldFalloffType         FalloffType;                                       // 0x160(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_300D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                FieldFloatResult;                                  // 0x168(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemap;                                        // 0x178(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              FieldSelectionMask;                                // 0x188(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSamplePositions;                                // 0x1A8(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_300E[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x128 (0x210 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoxFalloffFieldDataflowNode
struct FBoxFalloffFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FBox                                  Box;                                               // 0x118(0x38)(Edit, ConstParm, ExportObject, OutParm)
	struct FTransform                            Transform;                                         // 0x150(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        Magnitude;                                         // 0x1B0(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0x1B4(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0x1B8(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Default;                                           // 0x1BC(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	enum class EDataflowFieldFalloffType         FalloffType;                                       // 0x1C0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3010[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                FieldFloatResult;                                  // 0x1C8(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemap;                                        // 0x1D8(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              FieldSelectionMask;                                // 0x1E8(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSamplePositions;                                // 0x208(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3011[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PlaneFalloffFieldDataflowNode
struct FPlaneFalloffFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               Position;                                          // 0x118(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector                               Normal;                                            // 0x130(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	float                                        Distance;                                          // 0x148(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3014[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Translation;                                       // 0x150(0x18)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	float                                        Magnitude;                                         // 0x168(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0x16C(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0x170(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Default;                                           // 0x174(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	enum class EDataflowFieldFalloffType         FalloffType;                                       // 0x178(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3023[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                FieldFloatResult;                                  // 0x180(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemap;                                        // 0x190(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              FieldSelectionMask;                                // 0x1A0(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSamplePositions;                                // 0x1C0(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3027[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0x188 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadialIntMaskFieldDataflowNode
struct FRadialIntMaskFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FSphere                               Sphere;                                            // 0x118(0x20)(Edit, ConstParm, BlueprintVisible, OutParm)
	struct FVector                               Translation;                                       // 0x138(0x18)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	int32                                        InteriorValue;                                     // 0x150(0x4)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ExteriorValue;                                     // 0x154(0x4)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EDataflowSetMaskConditionType     SetMaskConditionType;                              // 0x158(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_302E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                FieldIntResult;                                    // 0x160(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemap;                                        // 0x170(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSamplePositions;                                // 0x180(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3030[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x148 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UniformScalarFieldDataflowNode
struct FUniformScalarFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Magnitude;                                         // 0x118(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3032[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                FieldFloatResult;                                  // 0x120(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemap;                                        // 0x130(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSamplePositions;                                // 0x140(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3036[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x160 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UniformVectorFieldDataflowNode
struct FUniformVectorFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Magnitude;                                         // 0x118(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3039[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Direction;                                         // 0x120(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	TArray<struct FVector>                       FieldVectorResult;                                 // 0x138(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemap;                                        // 0x148(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSamplePositions;                                // 0x158(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_303C[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x160 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadialVectorFieldDataflowNode
struct FRadialVectorFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Magnitude;                                         // 0x118(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_303D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x120(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	TArray<struct FVector>                       FieldVectorResult;                                 // 0x138(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemap;                                        // 0x148(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSamplePositions;                                // 0x158(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_303E[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x148 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomVectorFieldDataflowNode
struct FRandomVectorFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Magnitude;                                         // 0x118(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_303F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       FieldVectorResult;                                 // 0x120(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemap;                                        // 0x130(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSamplePositions;                                // 0x140(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3040[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.NoiseFieldDataflowNode
struct FNoiseFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MinRange;                                          // 0x118(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0x11C(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FTransform                            Transform;                                         // 0x120(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	TArray<float>                                FieldFloatResult;                                  // 0x180(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemap;                                        // 0x190(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSamplePositions;                                // 0x1A0(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3043[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x148 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UniformIntegerFieldDataflowNode
struct FUniformIntegerFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        Magnitude;                                         // 0x118(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3046[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                FieldIntResult;                                    // 0x120(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemap;                                        // 0x130(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSamplePositions;                                // 0x140(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3047[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0x188 - 0xE8)
// ScriptStruct GeometryCollectionNodes.WaveScalarFieldDataflowNode
struct FWaveScalarFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Magnitude;                                         // 0x118(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3050[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x120(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector                               Translation;                                       // 0x138(0x18)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	float                                        Wavelength;                                        // 0x150(0x4)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Period;                                            // 0x154(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	enum class EDataflowWaveFunctionType         FunctionType;                                      // 0x158(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EDataflowFieldFalloffType         FalloffType;                                       // 0x159(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3067[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                FieldFloatResult;                                  // 0x160(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemap;                                        // 0x170(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSamplePositions;                                // 0x180(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3068[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x150 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SumScalarFieldDataflowNode
struct FSumScalarFieldDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                FieldFloatLeft;                                    // 0xE8(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemapLeft;                                    // 0xF8(0x10)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                FieldFloatRight;                                   // 0x108(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemapRight;                                   // 0x118(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Magnitude;                                         // 0x128(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EDataflowFloatFieldOperationType  Operation;                                         // 0x12C(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bSwapInputs;                                       // 0x12D(0x1)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3069[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                FieldFloatResult;                                  // 0x130(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemap;                                        // 0x140(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x88 (0x170 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SumVectorFieldDataflowNode
struct FSumVectorFieldDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                FieldFloat;                                        // 0xE8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldFloatRemap;                                   // 0xF8(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       FieldVectorLeft;                                   // 0x108(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemapLeft;                                    // 0x118(0x10)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       FieldVectorRight;                                  // 0x128(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemapRight;                                   // 0x138(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Magnitude;                                         // 0x148(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EDataflowVectorFieldOperationType Operation;                                         // 0x14C(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bSwapVectorInputs;                                 // 0x14D(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_306B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       FieldVectorResult;                                 // 0x150(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemap;                                        // 0x160(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FieldMakeDenseFloatArrayDataflowNode
struct FFieldMakeDenseFloatArrayDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                FieldFloatInput;                                   // 0xE8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                FieldRemap;                                        // 0xF8(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSamplePositions;                                // 0x108(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Default;                                           // 0x10C(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	TArray<float>                                FieldFloatResult;                                  // 0x110(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xF8 (0x1E0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AddMaterialToCollectionDataflowNode
struct FAddMaterialToCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0x198(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UMaterial*>                     Materials;                                         // 0x1B8(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UMaterial*                             OutsideMaterial;                                   // 0x1C8(0x8)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UMaterial*                             InsideMaterial;                                    // 0x1D0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAssignOutsideMaterial;                            // 0x1D8(0x1)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAssignInsideMaterial;                             // 0x1D9(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_306C[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0x1D8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ReAssignMaterialInCollectionDataflowNode
struct FReAssignMaterialInCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0x198(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UMaterial*>                     Materials;                                         // 0x1B8(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        OutsideMaterialIdx;                                // 0x1C8(0x4)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        InsideMaterialIdx;                                 // 0x1CC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAssignOutsideMaterial;                            // 0x1D0(0x1)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAssignInsideMaterial;                             // 0x1D1(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_306D[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MaterialsInfoDataflowNode
struct FMaterialsInfoDataflowNode : public FDataflowNode
{
public:
	TArray<class UMaterial*>                     Materials;                                         // 0xE8(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                String;                                            // 0xF8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetMaterialFromMaterialsArrayDataflowNode
struct FGetMaterialFromMaterialsArrayDataflowNode : public FDataflowNode
{
public:
	TArray<class UMaterial*>                     Materials;                                         // 0xE8(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UMaterial*                             Material;                                          // 0xF8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	int32                                        MaterialIdx;                                       // 0x100(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_306F[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetMaterialInMaterialsArrayDataflowNode
struct FSetMaterialInMaterialsArrayDataflowNode : public FDataflowNode
{
public:
	TArray<class UMaterial*>                     Materials;                                         // 0xE8(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UMaterial*                             Material;                                          // 0xF8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class ESetMaterialOperationTypeEnum     Operation;                                         // 0x100(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3070[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaterialIdx;                                       // 0x104(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeMaterialDataflowNode
struct FMakeMaterialDataflowNode : public FDataflowNode
{
public:
	class UMaterial*                             InMaterial;                                        // 0xE8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UMaterial*                             Material;                                          // 0xF0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeMaterialsArrayDataflowNode
struct FMakeMaterialsArrayDataflowNode : public FDataflowNode
{
public:
	TArray<class UMaterial*>                     Materials;                                         // 0xE8(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0xB0 (0x198 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CloseGeometryOnCollectionDataflowNode
struct FCloseGeometryOnCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
};

// 0xB8 (0x1A0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SkeletonToCollectionDataflowNode
struct FSkeletonToCollectionDataflowNode : public FDataflowNode
{
public:
	class USkeleton*                             Skeleton;                                          // 0xE8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
	struct FManagedArrayCollection               Collection;                                        // 0xF0(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CreateNonOverlappingConvexHullsDataflowNode
struct FCreateNonOverlappingConvexHullsDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	float                                        CanRemoveFraction;                                 // 0x198(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SimplificationDistanceThreshold;                   // 0x19C(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        CanExceedFraction;                                 // 0x1A0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	enum class EConvexOverlapRemovalMethodEnum   OverlapRemovalMethod;                              // 0x1A4(0x1)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3073[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        OverlapRemovalShrinkPercent;                       // 0x1A8(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3074[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xE8 (0x1D0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AutoClusterDataflowNode
struct FAutoClusterDataflowNode : public FDataflowNode
{
public:
	enum class EClusterSizeMethodEnum            ClusterSizeMethod;                                 // 0xE8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3076[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ClusterSites;                                      // 0xEC(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ClusterFraction;                                   // 0xF0(0x4)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SiteSize;                                          // 0xF4(0x4)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         AutoCluster;                                       // 0xF8(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         AvoidIsolated;                                     // 0xF9(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3077[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FManagedArrayCollection               Collection;                                        // 0x100(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1B0(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xB0 (0x198 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ClusterFlattenDataflowNode
struct FClusterFlattenDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PruneInCollectionDataflowNode
struct FPruneInCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xF8 (0x1E0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetVisibilityInCollectionDataflowNode
struct FSetVisibilityInCollectionDataflowNode : public FDataflowNode
{
public:
	enum class EVisibiltyOptionsEnum             Visibility;                                        // 0xE8(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	uint8                                        Pad_3079[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FManagedArrayCollection               Collection;                                        // 0xF0(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A0(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0x1C0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MergeInCollectionDataflowNode
struct FMergeInCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x58 (0x140 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UniformScatterPointsDataflowNode
struct FUniformScatterPointsDataflowNode : public FDataflowNode
{
public:
	int32                                        MinNumberOfPoints;                                 // 0xE8(0x4)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        MaxNumberOfPoints;                                 // 0xEC(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RandomSeed;                                        // 0xF0(0x4)(Edit, ConstParm, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_307A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  BoundingBox;                                       // 0xF8(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       Points;                                            // 0x130(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x58 (0x140 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadialScatterPointsDataflowNode
struct FRadialScatterPointsDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Center;                                            // 0xE8(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector                               Normal;                                            // 0x100(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	float                                        Radius;                                            // 0x118(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        AngularSteps;                                      // 0x11C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        RadialSteps;                                       // 0x120(0x4)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        AngleOffset;                                       // 0x124(0x4)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Variability;                                       // 0x128(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RandomSeed;                                        // 0x12C(0x4)(Edit, ConstParm, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       Points;                                            // 0x130(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x110 (0x1F8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.VoronoiFractureDataflowNode
struct FVoronoiFractureDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	TArray<struct FVector>                       Points;                                            // 0x198(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A8(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RandomSeed;                                        // 0x1C8(0x4)(Edit, ConstParm, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ChanceToFracture;                                  // 0x1CC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         GroupFracture;                                     // 0x1D0(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_307D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Grout;                                             // 0x1D4(0x4)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Amplitude;                                         // 0x1D8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Frequency;                                         // 0x1DC(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Persistence;                                       // 0x1E0(0x4)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Lacunarity;                                        // 0x1E4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        OctaveNumber;                                      // 0x1E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PointSpacing;                                      // 0x1EC(0x4)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         AddSamplesForCollision;                            // 0x1F0(0x1)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_307E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CollisionSampleSpacing;                            // 0x1F4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x138 (0x220 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PlaneCutterDataflowNode
struct FPlaneCutterDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FBox                                  BoundingBox;                                       // 0x198(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1D0(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumPlanes;                                         // 0x1F0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RandomSeed;                                        // 0x1F4(0x4)(Edit, ConstParm, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Grout;                                             // 0x1F8(0x4)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Amplitude;                                         // 0x1FC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Frequency;                                         // 0x200(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Persistence;                                       // 0x204(0x4)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Lacunarity;                                        // 0x208(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        OctaveNumber;                                      // 0x20C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PointSpacing;                                      // 0x210(0x4)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         AddSamplesForCollision;                            // 0x214(0x1)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_307F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CollisionSampleSpacing;                            // 0x218(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3080[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ExplodedViewDataflowNode
struct FExplodedViewDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	float                                        UniformScale;                                      // 0x198(0x4)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3081[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Scale;                                             // 0x1A0(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PointsToMeshDataflowNode
struct FPointsToMeshDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector>                       Points;                                            // 0xE8(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UDynamicMesh*                          Mesh;                                              // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TriangleCount;                                     // 0x100(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3083[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoxToMeshDataflowNode
struct FBoxToMeshDataflowNode : public FDataflowNode
{
public:
	struct FBox                                  Box;                                               // 0xE8(0x38)(Edit, ConstParm, ExportObject, OutParm)
	class UDynamicMesh*                          Mesh;                                              // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TriangleCount;                                     // 0x128(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3084[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshInfoDataflowNode
struct FMeshInfoDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                InfoString;                                        // 0xF0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xB8 (0x1A0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshToCollectionDataflowNode
struct FMeshToCollectionDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FManagedArrayCollection               Collection;                                        // 0xF0(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
};

// 0xC0 (0x1A8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionToMeshDataflowNode
struct FCollectionToMeshDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	bool                                         bCenterPivot;                                      // 0x198(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3087[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          Mesh;                                              // 0x1A0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.StaticMeshToMeshDataflowNode
struct FStaticMeshToMeshDataflowNode : public FDataflowNode
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0xE8(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	bool                                         bUseHiRes;                                         // 0xF0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_308B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LODLevel;                                          // 0xF4(0x4)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          Mesh;                                              // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshAppendDataflowNode
struct FMeshAppendDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          Mesh1;                                             // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          Mesh2;                                             // 0xF0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          Mesh;                                              // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshBooleanDataflowNode
struct FMeshBooleanDataflowNode : public FDataflowNode
{
public:
	enum class EMeshBooleanOperationEnum         Operation;                                         // 0xE8(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_308D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          Mesh1;                                             // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          Mesh2;                                             // 0xF8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          Mesh;                                              // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshCopyToPointsDataflowNode
struct FMeshCopyToPointsDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector>                       Points;                                            // 0xE8(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UDynamicMesh*                          MeshToCopy;                                        // 0xF8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Scale;                                             // 0x100(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_308E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          Mesh;                                              // 0x108(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetMeshDataDataflowNode
struct FGetMeshDataDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Vertexcount;                                       // 0xF0(0x4)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Transient, Config)
	int32                                        EdgeCount;                                         // 0xF4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        TriangleCount;                                     // 0xF8(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_308F[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xB8 (0x1A0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetCollectionFromAssetDataflowNode
struct FGetCollectionFromAssetDataflowNode : public FDataflowNode
{
public:
	class UGeometryCollection*                   CollectionAsset;                                   // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FManagedArrayCollection               Collection;                                        // 0xF0(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
};

// 0x180 (0x268 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AppendCollectionAssetsDataflowNode
struct FAppendCollectionAssetsDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection1;                                       // 0xE8(0xB0)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FManagedArrayCollection               Collection2;                                       // 0x198(0xB0)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        GeometryGroupGuidsOut1;                            // 0x248(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        GeometryGroupGuidsOut2;                            // 0x258(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PrintStringDataflowNode
struct FPrintStringDataflowNode : public FDataflowNode
{
public:
	bool                                         bPrintToScreen;                                    // 0xE8(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bPrintToLog;                                       // 0xE9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3090[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FColor                                Color;                                             // 0xEC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        Duration;                                          // 0xF0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_3091[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                String;                                            // 0xF8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.LogStringDataflowNode
struct FLogStringDataflowNode : public FDataflowNode
{
public:
	bool                                         bPrintToLog;                                       // 0xE8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3092[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                String;                                            // 0xF0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralStringDataflowNode
struct FMakeLiteralStringDataflowNode : public FDataflowNode
{
public:
	class FString                                Value;                                             // 0xE8(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	class FString                                String;                                            // 0xF8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0xE8 (0x1D0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoundingBoxDataflowNode
struct FBoundingBoxDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FBox                                  BoundingBox;                                       // 0x198(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xA0 (0x188 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ExpandBoundingBoxDataflowNode
struct FExpandBoundingBoxDataflowNode : public FDataflowNode
{
public:
	struct FBox                                  BoundingBox;                                       // 0xE8(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               Min;                                               // 0x120(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector                               Max;                                               // 0x138(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector                               Center;                                            // 0x150(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector                               HalfExtents;                                       // 0x168(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Volume;                                            // 0x180(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_3093[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.VectorToStringDataflowNode
struct FVectorToStringDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Vector;                                            // 0xE8(0x18)(Edit, BlueprintVisible, Net, OutParm)
	class FString                                String;                                            // 0x100(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatToStringDataflowNode
struct FFloatToStringDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
	uint8                                        Pad_3094[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                String;                                            // 0xF0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakePointsDataflowNode
struct FMakePointsDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector>                       Point;                                             // 0xE8(0x10)(ConstParm, Parm, ReturnParm)
	TArray<struct FVector>                       Points;                                            // 0xF8(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0x188 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeBoxDataflowNode
struct FMakeBoxDataflowNode : public FDataflowNode
{
public:
	enum class EMakeBoxDataTypeEnum              DataType;                                          // 0xE8(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3095[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Min;                                               // 0xF0(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector                               Max;                                               // 0x108(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector                               Center;                                            // 0x120(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector                               Size;                                              // 0x138(0x18)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FBox                                  Box;                                               // 0x150(0x38)(Edit, ConstParm, ExportObject, OutParm)
};

// 0x40 (0x128 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeSphereDataflowNode
struct FMakeSphereDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Center;                                            // 0xE8(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	float                                        Radius;                                            // 0x100(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3096[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSphere                               Sphere;                                            // 0x108(0x20)(Edit, ConstParm, BlueprintVisible, OutParm)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralFloatDataflowNode
struct FMakeLiteralFloatDataflowNode : public FDataflowNode
{
public:
	float                                        Value;                                             // 0xE8(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	float                                        Float;                                             // 0xEC(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralIntDataflowNode
struct FMakeLiteralIntDataflowNode : public FDataflowNode
{
public:
	int32                                        Value;                                             // 0xE8(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	int32                                        Int;                                               // 0xEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralBoolDataflowNode
struct FMakeLiteralBoolDataflowNode : public FDataflowNode
{
public:
	bool                                         Value;                                             // 0xE8(0x1)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	bool                                         Bool;                                              // 0xE9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config)
	uint8                                        Pad_3097[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralVectorDataflowNode
struct FMakeLiteralVectorDataflowNode : public FDataflowNode
{
public:
	float                                        X;                                                 // 0xE8(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Y;                                                 // 0xEC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Z;                                                 // 0xF0(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_3098[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Vector;                                            // 0xF8(0x18)(Edit, BlueprintVisible, Net, OutParm)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.IntToStringDataflowNode
struct FIntToStringDataflowNode : public FDataflowNode
{
public:
	int32                                        Int;                                               // 0xE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_309A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                String;                                            // 0xF0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoolToStringDataflowNode
struct FBoolToStringDataflowNode : public FDataflowNode
{
public:
	bool                                         Bool;                                              // 0xE8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config)
	uint8                                        Pad_309B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                String;                                            // 0xF0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ExpandVectorDataflowNode
struct FExpandVectorDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Vector;                                            // 0xE8(0x18)(Edit, BlueprintVisible, Net, OutParm)
	float                                        X;                                                 // 0x100(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Y;                                                 // 0x104(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Z;                                                 // 0x108(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_309C[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.IntToFloatDataflowNode
struct FIntToFloatDataflowNode : public FDataflowNode
{
public:
	int32                                        Int;                                               // 0xE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Float;                                             // 0xEC(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.StringAppendDataflowNode
struct FStringAppendDataflowNode : public FDataflowNode
{
public:
	class FString                                String1;                                           // 0xE8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                String2;                                           // 0xF8(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                String;                                            // 0x108(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomFloatDataflowNode
struct FRandomFloatDataflowNode : public FDataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_309F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RandomSeed;                                        // 0xEC(0x4)(Edit, ConstParm, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Float;                                             // 0xF0(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
	uint8                                        Pad_30A0[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomFloatInRangeDataflowNode
struct FRandomFloatInRangeDataflowNode : public FDataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30A1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RandomSeed;                                        // 0xEC(0x4)(Edit, ConstParm, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Min;                                               // 0xF0(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        Max;                                               // 0xF4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        Float;                                             // 0xF8(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
	uint8                                        Pad_30A2[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomUnitVectorDataflowNode
struct FRandomUnitVectorDataflowNode : public FDataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30A3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RandomSeed;                                        // 0xEC(0x4)(Edit, ConstParm, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Vector;                                            // 0xF0(0x18)(Edit, BlueprintVisible, Net, OutParm)
};

// 0x40 (0x128 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomUnitVectorInConeDataflowNode
struct FRandomUnitVectorInConeDataflowNode : public FDataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30A4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RandomSeed;                                        // 0xEC(0x4)(Edit, ConstParm, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               ConeDirection;                                     // 0xF0(0x18)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ConeHalfAngle;                                     // 0x108(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_30A5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Vector;                                            // 0x110(0x18)(Edit, BlueprintVisible, Net, OutParm)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadiansToDegreesDataflowNode
struct FRadiansToDegreesDataflowNode : public FDataflowNode
{
public:
	float                                        Radians;                                           // 0xE8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Degrees;                                           // 0xEC(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.DegreesToRadiansDataflowNode
struct FDegreesToRadiansDataflowNode : public FDataflowNode
{
public:
	float                                        Degrees;                                           // 0xE8(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Radians;                                           // 0xEC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.HashStringDataflowNode
struct FHashStringDataflowNode : public FDataflowNode
{
public:
	class FString                                String;                                            // 0xE8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        Hash;                                              // 0xF8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	uint8                                        Pad_30A7[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.HashVectorDataflowNode
struct FHashVectorDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Vector;                                            // 0xE8(0x18)(Edit, BlueprintVisible, Net, OutParm)
	int32                                        Hash;                                              // 0x100(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	uint8                                        Pad_30A8[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatToIntDataflowNode
struct FFloatToIntDataflowNode : public FDataflowNode
{
public:
	enum class EFloatToIntFunctionEnum           Function;                                          // 0xE8(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor)
	uint8                                        Pad_30A9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Float;                                             // 0xEC(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
	int32                                        Int;                                               // 0xF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30AA[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatArrayToIntArrayDataflowNode
struct FFloatArrayToIntArrayDataflowNode : public FDataflowNode
{
public:
	enum class EFloatArrayToIntArrayFunctionEnum Function;                                          // 0xE8(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor)
	uint8                                        Pad_30AB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                FloatArray;                                        // 0xF0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                IntArray;                                          // 0x100(0x10)(Edit, BlueprintReadOnly, DisableEditOnTemplate)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MathConstantsDataflowNode
struct FMathConstantsDataflowNode : public FDataflowNode
{
public:
	enum class EMathConstantsEnum                Constant;                                          // 0xE8(0x1)(OutParm, Transient, Config, EditConst)
	uint8                                        Pad_30AC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Float;                                             // 0xEC(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetArrayElementDataflowNode
struct FGetArrayElementDataflowNode : public FDataflowNode
{
public:
	int32                                        Index;                                             // 0xE8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_30AD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       Points;                                            // 0xF0(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Point;                                             // 0x100(0x18)(ConstParm, Parm, ReturnParm)
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetNumArrayElementsDataflowNode
struct FGetNumArrayElementsDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector>                       Points;                                            // 0xE8(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FVector3f>                     Vector3fArray;                                     // 0xF8(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumElements;                                       // 0x108(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30B0[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetBoundingBoxesFromCollectionDataflowNode
struct FGetBoundingBoxesFromCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FBox>                          BoundingBoxes;                                     // 0x1B8(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetCentroidsFromCollectionDataflowNode
struct FGetCentroidsFromCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       Centroids;                                         // 0x1B8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x140 (0x228 - 0xE8)
// ScriptStruct GeometryCollectionNodes.TransformCollectionDataflowNode
struct FTransformCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FVector                               Translate;                                         // 0x198(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERotationOrderEnum                RotationOrder;                                     // 0x1B0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_30B2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Rotate;                                            // 0x1B8(0x18)(ExportObject, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               Scale;                                             // 0x1D0(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        UniformScale;                                      // 0x1E8(0x4)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30B3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               RotatePivot;                                       // 0x1F0(0x18)(Edit, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               ScalePivot;                                        // 0x208(0x18)(Edit, ConstParm, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInvertTransformation;                             // 0x220(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30B4[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xB0 (0x198 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BakeTransformsInCollectionDataflowNode
struct FBakeTransformsInCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
};

// 0x98 (0x180 - 0xE8)
// ScriptStruct GeometryCollectionNodes.TransformMeshDataflowNode
struct FTransformMeshDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Translate;                                         // 0xF0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERotationOrderEnum                RotationOrder;                                     // 0x108(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_30B5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Rotate;                                            // 0x110(0x18)(ExportObject, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               Scale;                                             // 0x128(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        UniformScale;                                      // 0x140(0x4)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30B7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               RotatePivot;                                       // 0x148(0x18)(Edit, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               ScalePivot;                                        // 0x160(0x18)(Edit, ConstParm, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInvertTransformation;                             // 0x178(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30B8[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CompareIntDataflowNode
struct FCompareIntDataflowNode : public FDataflowNode
{
public:
	enum class ECompareOperationEnum             Operation;                                         // 0xE8(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_30B9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        IntA;                                              // 0xEC(0x4)(Edit, BlueprintVisible, Net, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        IntB;                                              // 0xF0(0x4)(ConstParm, Net, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0xF4(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_30BA[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BranchDataflowNode
struct FBranchDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          MeshA;                                             // 0xE8(0x8)(ConstParm, BlueprintReadOnly, Net, Transient, Config, InstancedReference, SubobjectReference)
	class UDynamicMesh*                          MeshB;                                             // 0xF0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCondition;                                        // 0xF8(0x1)(ExportObject, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30BC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          Mesh;                                              // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC0 (0x1A8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetSchemaDataflowNode
struct FGetSchemaDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	class FString                                String;                                            // 0x198(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0xE8 (0x1D0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RemoveOnBreakDataflowNode
struct FRemoveOnBreakDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnabledRemoval;                                   // 0x1B8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30BE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2f                             PostBreakTimer;                                    // 0x1BC(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector2f                             RemovalTimer;                                      // 0x1C4(0x8)(EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bClusterCrumbling;                                 // 0x1CC(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30BF[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xD8 (0x1C0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetAnchorStateDataflowNode
struct FSetAnchorStateDataflowNode : public FDataflowNode
{
public:
	enum class EAnchorStateEnum                  AnchorState;                                       // 0xE8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSetNotSelectedBonesToOppositeState;               // 0xE9(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30C0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FManagedArrayCollection               Collection;                                        // 0xF0(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A0(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xC0 (0x1A8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ProximityDataflowNode
struct FProximityDataflowNode : public FDataflowNode
{
public:
	enum class EProximityMethodEnum              ProximityMethod;                                   // 0xE8(0x1)(Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30C1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DistanceThreshold;                                 // 0xEC(0x4)(Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        ContactThreshold;                                  // 0xF0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseAsConnectionGraph;                             // 0xF4(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30C3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FManagedArrayCollection               Collection;                                        // 0xF8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
};

// 0x118 (0x200 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionSetPivotDataflowNode
struct FCollectionSetPivotDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	uint8                                        Pad_30C4[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x1A0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AddCustomCollectionAttributeDataflowNode
struct FAddCustomCollectionAttributeDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	enum class EStandardGroupNameEnum            GroupName;                                         // 0x198(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30C5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CustomGroupName;                                   // 0x1A0(0x10)(Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                AttrName;                                          // 0x1B0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	enum class ECustomAttributeTypeEnum          CustomAttributeType;                               // 0x1C0(0x1)(BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30C6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        NumElements;                                       // 0x1C4(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetNumElementsInCollectionGroupDataflowNode
struct FGetNumElementsInCollectionGroupDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	enum class EStandardGroupNameEnum            GroupName;                                         // 0x198(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30C7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CustomGroupName;                                   // 0x1A0(0x10)(Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumElements;                                       // 0x1B0(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30C8[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x148 (0x230 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetCollectionAttributeDataTypedDataflowNode
struct FGetCollectionAttributeDataTypedDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	enum class EStandardGroupNameEnum            GroupName;                                         // 0x198(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30C9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CustomGroupName;                                   // 0x1A0(0x10)(Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                AttrName;                                          // 0x1B0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<bool>                                 BoolAttributeData;                                 // 0x1C0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                FloatAttributeData;                                // 0x1D0(0x10)(Edit, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<double>                               DoubleAttributeData;                               // 0x1E0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                Int32AttributeData;                                // 0x1F0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        StringAttributeData;                               // 0x200(0x10)(Edit, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector3f>                     Vector3fAttributeData;                             // 0x210(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector3d>                     Vector3dAttributeData;                             // 0x220(0x10)(Edit, ExportObject, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x148 (0x230 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetCollectionAttributeDataTypedDataflowNode
struct FSetCollectionAttributeDataTypedDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	enum class EStandardGroupNameEnum            GroupName;                                         // 0x198(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30CA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CustomGroupName;                                   // 0x1A0(0x10)(Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                AttrName;                                          // 0x1B0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<bool>                                 BoolAttributeData;                                 // 0x1C0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                FloatAttributeData;                                // 0x1D0(0x10)(Edit, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<double>                               DoubleAttributeData;                               // 0x1E0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                Int32AttributeData;                                // 0x1F0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        StringAttributeData;                               // 0x200(0x10)(Edit, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector3f>                     Vector3fAttributeData;                             // 0x210(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector3d>                     Vector3dAttributeData;                             // 0x220(0x10)(Edit, ExportObject, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoolArrayToFaceSelectionDataflowNode
struct FBoolArrayToFaceSelectionDataflowNode : public FDataflowNode
{
public:
	TArray<bool>                                 BoolAttributeData;                                 // 0xE8(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0xF8(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatArrayToVertexSelectionDataflowNode
struct FFloatArrayToVertexSelectionDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                FloatArray;                                        // 0xE8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ECompareOperationEnum             Operation;                                         // 0xF8(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_30CB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Threshold;                                         // 0xFC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              VertexSelection;                                   // 0x100(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xF0 (0x1D8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetVertexColorInCollectionFromVertexSelectionDataflowNode
struct FSetVertexColorInCollectionFromVertexSelectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowVertexSelection              VertexSelection;                                   // 0x198(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          SelectedColor;                                     // 0x1B8(0x10)(ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          NonSelectedColor;                                  // 0x1C8(0x10)(BlueprintVisible, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SelectionToVertexListDataflowNode
struct FSelectionToVertexListDataflowNode : public FDataflowNode
{
public:
	struct FDataflowVertexSelection              VertexSelection;                                   // 0xE8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                VertexList;                                        // 0x108(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xA8 (0x190 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeTransformDataflowNode
struct FMakeTransformDataflowNode : public FDataflowNode
{
public:
	struct FVector                               InTranslation;                                     // 0xE8(0x18)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               InRotation;                                        // 0x100(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               InScale;                                           // 0x118(0x18)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FTransform                            OutTransform;                                      // 0x130(0x60)(Edit, ConstParm, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetVertexColorInCollectionFromFloatArrayDataflowNode
struct FSetVertexColorInCollectionFromFloatArrayDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	TArray<float>                                FloatArray;                                        // 0x198(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Scale;                                             // 0x1A8(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_30CC[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatArrayNormalizeDataflowNode
struct FFloatArrayNormalizeDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                InFloatArray;                                      // 0xE8(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              Selection;                                         // 0xF8(0x20)(ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MinRange;                                          // 0x118(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0x11C(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                OutFloatArray;                                     // 0x120(0x10)(Edit, BlueprintVisible, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.VectorArrayNormalizeDataflowNode
struct FVectorArrayNormalizeDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector>                       InVectorArray;                                     // 0xE8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              Selection;                                         // 0xF8(0x20)(ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        Magnitude;                                         // 0x118(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_30CD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       OutVectorArray;                                    // 0x120(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x128 (0x210 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MultiplyTransformDataflowNode
struct FMultiplyTransformDataflowNode : public FDataflowNode
{
public:
	uint8                                        Pad_30CE[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InLeftTransform;                                   // 0xF0(0x60)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FTransform                            InRightTransform;                                  // 0x150(0x60)(BlueprintVisible, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FTransform                            OutTransform;                                      // 0x1B0(0x60)(Edit, ConstParm, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.InvertTransformDataflowNode
struct FInvertTransformDataflowNode : public FDataflowNode
{
public:
	uint8                                        Pad_30CF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InTransform;                                       // 0xF0(0x60)(Edit, BlueprintVisible, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FTransform                            OutTransform;                                      // 0x150(0x60)(Edit, ConstParm, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UnionIntArraysDataflowNode
struct FUnionIntArraysDataflowNode : public FDataflowNode
{
public:
	TArray<int32>                                InArray1;                                          // 0xE8(0x10)(Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                InArray2;                                          // 0xF8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                OutArray;                                          // 0x108(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeQuaternionDataflowNode
struct FMakeQuaternionDataflowNode : public FDataflowNode
{
public:
	float                                        X;                                                 // 0xE8(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Y;                                                 // 0xEC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Z;                                                 // 0xF0(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	float                                        W;                                                 // 0xF4(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_30D1[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Quaternion;                                        // 0x100(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionAllDataflowNode
struct FCollectionTransformSelectionAllDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x68 (0x150 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionSetOperationDataflowNode
struct FCollectionTransformSelectionSetOperationDataflowNode : public FDataflowNode
{
public:
	enum class ESetOperationEnum                 Operation;                                         // 0xE8(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_30D4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDataflowTransformSelection           TransformSelectionA;                               // 0xF0(0x20)(BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowTransformSelection           TransformSelectionB;                               // 0x110(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x130(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInfoDataflowNode
struct FCollectionTransformSelectionInfoDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	class FString                                String;                                            // 0x1B8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionNoneDataflowNode
struct FCollectionTransformSelectionNoneDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInvertDataflowNode
struct FCollectionTransformSelectionInvertDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionRandomDataflowNode
struct FCollectionTransformSelectionRandomDataflowNode : public FDataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30D5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RandomSeed;                                        // 0xEC(0x4)(Edit, ConstParm, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RandomThreshold;                                   // 0xF0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30D6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FManagedArrayCollection               Collection;                                        // 0xF8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A8(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionRootDataflowNode
struct FCollectionTransformSelectionRootDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionCustomDataflowNode
struct FCollectionTransformSelectionCustomDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	class FString                                BoneIndicies;                                      // 0x198(0x10)(BlueprintVisible, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A8(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionParentDataflowNode
struct FCollectionTransformSelectionParentDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByPercentageDataflowNode
struct FCollectionTransformSelectionByPercentageDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        Percentage;                                        // 0x108(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bDeterministic;                                    // 0x10C(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30D7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RandomSeed;                                        // 0x110(0x4)(Edit, ConstParm, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_30D8[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionChildrenDataflowNode
struct FCollectionTransformSelectionChildrenDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionSiblingsDataflowNode
struct FCollectionTransformSelectionSiblingsDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionLevelDataflowNode
struct FCollectionTransformSelectionLevelDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionContactDataflowNode
struct FCollectionTransformSelectionContactDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionLeafDataflowNode
struct FCollectionTransformSelectionLeafDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionClusterDataflowNode
struct FCollectionTransformSelectionClusterDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionBySizeDataflowNode
struct FCollectionTransformSelectionBySizeDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	float                                        SizeMin;                                           // 0x198(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SizeMax;                                           // 0x19C(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x1A0(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInclusive;                                        // 0x1A1(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30D9[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A8(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByVolumeDataflowNode
struct FCollectionTransformSelectionByVolumeDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	float                                        VolumeMin;                                         // 0x198(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        VolumeMax;                                         // 0x19C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x1A0(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInclusive;                                        // 0x1A1(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30DA[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A8(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x178 (0x260 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInBoxDataflowNode
struct FCollectionTransformSelectionInBoxDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FBox                                  Box;                                               // 0x198(0x38)(Edit, ConstParm, ExportObject, OutParm)
	struct FTransform                            Transform;                                         // 0x1D0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class ESelectSubjectTypeEnum            Type;                                              // 0x230(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	bool                                         bAllVerticesMustContainedInBox;                    // 0x231(0x1)(ConstParm, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30DB[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDataflowTransformSelection           TransformSelection;                                // 0x238(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30DC[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x168 (0x250 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInSphereDataflowNode
struct FCollectionTransformSelectionInSphereDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FSphere                               Sphere;                                            // 0x198(0x20)(Edit, ConstParm, BlueprintVisible, OutParm)
	uint8                                        Pad_30DD[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x1C0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class ESelectSubjectTypeEnum            Type;                                              // 0x220(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	bool                                         bAllVerticesMustContainedInSphere;                 // 0x221(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30DE[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDataflowTransformSelection           TransformSelection;                                // 0x228(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30DF[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x100 (0x1E8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByFloatAttrDataflowNode
struct FCollectionTransformSelectionByFloatAttrDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	class FString                                GroupName;                                         // 0x198(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                AttrName;                                          // 0x1A8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Min;                                               // 0x1B8(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        Max;                                               // 0x1BC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x1C0(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInclusive;                                        // 0x1C1(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30E0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1C8(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x100 (0x1E8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByIntAttrDataflowNode
struct FCollectionTransformSelectionByIntAttrDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	class FString                                GroupName;                                         // 0x198(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                AttrName;                                          // 0x1A8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        Min;                                               // 0x1B8(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	int32                                        Max;                                               // 0x1BC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x1C0(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInclusive;                                        // 0x1C1(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30E1[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1C8(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionCustomDataflowNode
struct FCollectionVertexSelectionCustomDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	class FString                                VertexIndicies;                                    // 0x198(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              VertexSelection;                                   // 0x1A8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionFaceSelectionCustomDataflowNode
struct FCollectionFaceSelectionCustomDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	class FString                                FaceIndicies;                                      // 0x198(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0x1A8(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x118 (0x200 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionSelectionConvertDataflowNode
struct FCollectionSelectionConvertDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0x1B8(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              VertexSelection;                                   // 0x1D8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAllElementsMustBeSelected;                        // 0x1F8(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30E3[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionFaceSelectionInvertDataflowNode
struct FCollectionFaceSelectionInvertDataflowNode : public FDataflowNode
{
public:
	struct FDataflowFaceSelection                FaceSelection;                                     // 0xE8(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionByPercentageDataflowNode
struct FCollectionVertexSelectionByPercentageDataflowNode : public FDataflowNode
{
public:
	struct FDataflowVertexSelection              VertexSelection;                                   // 0xE8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        Percentage;                                        // 0x108(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bDeterministic;                                    // 0x10C(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_30E4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RandomSeed;                                        // 0x110(0x4)(Edit, ConstParm, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_30E5[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x150 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionSetOperationDataflowNode
struct FCollectionVertexSelectionSetOperationDataflowNode : public FDataflowNode
{
public:
	enum class ESetOperationEnum                 Operation;                                         // 0xE8(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_30E6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDataflowVertexSelection              VertexSelectionA;                                  // 0xF0(0x20)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              VertexSelectionB;                                  // 0x110(0x20)(Edit, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FDataflowVertexSelection              VertexSelection;                                   // 0x130(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x198 (0x280 - 0xE8)
// ScriptStruct GeometryCollectionNodes.TransformCollectionAttributeDataflowNode
struct FTransformCollectionAttributeDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	uint8                                        Pad_30E7[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            TransformIn;                                       // 0x1A0(0x60)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FTransform                            LocalTransform;                                    // 0x200(0x60)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FString                                GroupName;                                         // 0x260(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                AttributeName;                                     // 0x270(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


