#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EChaosDeformableSimSpace : uint8
{
	World                          = 0,
	ComponentXf                    = 1,
	bone                           = 2,
	ChaosDeformableSimSpace_MAX    = 3,
};

enum class ESetMaskConditionType : uint8
{
	Field_Set_Always               = 0,
	Field_Set_IFF_NOT_Interior     = 1,
	Field_Set_IFF_NOT_Exterior     = 2,
	Field_MaskCondition_Max        = 3,
	Field_MAX                      = 4,
};

enum class EWaveFunctionType : uint8
{
	Field_Wave_Cosine              = 0,
	Field_Wave_Gaussian            = 1,
	Field_Wave_Falloff             = 2,
	Field_Wave_Decay               = 3,
	Field_Wave_Max                 = 4,
};

enum class EFieldOperationType : uint8
{
	Field_Multiply                 = 0,
	Field_Divide                   = 1,
	Field_Add                      = 2,
	Field_Substract                = 3,
	Field_Operation_Max            = 4,
};

enum class EFieldCullingOperationType : uint8
{
	Field_Culling_Inside           = 0,
	Field_Culling_Outside          = 1,
	Field_Culling_Operation_Max    = 2,
	Field_Culling_MAX              = 3,
};

enum class EFieldResolutionType : uint8
{
	Field_Resolution_Minimal       = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum       = 2,
	Field_Resolution_Max           = 3,
};

enum class EFieldFilterType : uint8
{
	Field_Filter_Dynamic           = 0,
	Field_Filter_Kinematic         = 1,
	Field_Filter_Static            = 2,
	Field_Filter_All               = 3,
	Field_Filter_Sleeping          = 4,
	Field_Filter_Disabled          = 5,
	Field_Filter_Max               = 6,
};

enum class EFieldObjectType : uint8
{
	Field_Object_Rigid             = 0,
	Field_Object_Cloth             = 1,
	Field_Object_Destruction       = 2,
	Field_Object_Character         = 3,
	Field_Object_All               = 4,
	Field_Object_Max               = 5,
};

enum class EFieldPositionType : uint8
{
	Field_Position_CenterOfMass    = 0,
	Field_Position_PivotPoint      = 1,
	Field_Position_Max             = 2,
};

enum class EFieldFalloffType : uint8
{
	Field_FallOff_None             = 0,
	Field_Falloff_Linear           = 1,
	Field_Falloff_Inverse          = 2,
	Field_Falloff_Squared          = 3,
	Field_Falloff_Logarithmic      = 4,
	Field_Falloff_Max              = 5,
};

enum class EFieldPhysicsType : uint8
{
	Field_None                     = 0,
	Field_DynamicState             = 1,
	Field_LinearForce              = 2,
	Field_ExternalClusterStrain    = 3,
	Field_Kill                     = 4,
	Field_LinearVelocity           = 5,
	Field_AngularVelociy           = 6,
	Field_AngularTorque            = 7,
	Field_InternalClusterStrain    = 8,
	Field_DisableThreshold         = 9,
	Field_SleepingThreshold        = 10,
	Field_PositionStatic           = 11,
	Field_PositionAnimated         = 12,
	Field_PositionTarget           = 13,
	Field_DynamicConstraint        = 14,
	Field_CollisionGroup           = 15,
	Field_ActivateDisabled         = 16,
	Field_InitialLinearVelocity    = 17,
	Field_InitialAngularVelocity   = 18,
	Field_LinearImpulse            = 19,
	Field_PhysicsType_Max          = 20,
};

enum class EFieldVectorType : uint8
{
	Vector_LinearForce             = 0,
	Vector_LinearVelocity          = 1,
	Vector_AngularVelocity         = 2,
	Vector_AngularTorque           = 3,
	Vector_PositionTarget          = 4,
	Vector_InitialLinearVelocity   = 5,
	Vector_InitialAngularVelocity  = 6,
	Vector_LinearImpulse           = 7,
	Vector_TargetMax               = 8,
	Vector_MAX                     = 9,
};

enum class EFieldScalarType : uint8
{
	Scalar_ExternalClusterStrain   = 0,
	Scalar_Kill                    = 1,
	Scalar_DisableThreshold        = 2,
	Scalar_SleepingThreshold       = 3,
	Scalar_InternalClusterStrain   = 4,
	Scalar_DynamicConstraint       = 5,
	Scalar_TargetMax               = 6,
	Scalar_MAX                     = 7,
};

enum class EFieldIntegerType : uint8
{
	Integer_DynamicState           = 0,
	Integer_ActivateDisabled       = 1,
	Integer_CollisionGroup         = 2,
	Integer_PositionAnimated       = 3,
	Integer_PositionStatic         = 4,
	Integer_TargetMax              = 5,
	Integer_MAX                    = 6,
};

enum class EFieldOutputType : uint8
{
	Field_Output_Vector            = 0,
	Field_Output_Scalar            = 1,
	Field_Output_Integer           = 2,
	Field_Output_Max               = 3,
};

enum class EFieldPhysicsDefaultFields : uint8
{
	Field_RadialIntMask            = 0,
	Field_RadialFalloff            = 1,
	Field_UniformVector            = 2,
	Field_RadialVector             = 3,
	Field_RadialVectorFalloff      = 4,
	Field_EFieldPhysicsDefaultFields_Max = 5,
};

enum class EConvexOverlapRemoval : uint8
{
	None                           = 0,
	All                            = 1,
	OnlyClusters                   = 2,
	OnlyClustersVsClusters         = 3,
	EConvexOverlapRemoval_MAX      = 4,
};

enum class EProximityMethod : uint8
{
	Precise                        = 0,
	ConvexHull                     = 1,
	EProximityMethod_MAX           = 2,
};

enum class EProximityContactMethod : uint8
{
	MinOverlapInProjectionToMajorAxes = 0,
	EProximityContactMethod_MAX    = 1,
};

enum class ECollisionTypeEnum : uint8
{
	Chaos_Volumetric               = 0,
	Chaos_Surface_Volumetric       = 1,
	Chaos_Max                      = 2,
};

enum class EImplicitTypeEnum : uint8
{
	Chaos_Implicit_Box             = 0,
	Chaos_Implicit_Sphere          = 1,
	Chaos_Implicit_Capsule         = 2,
	Chaos_Implicit_LevelSet        = 3,
	Chaos_Implicit_None            = 4,
	Chaos_Implicit_Convex          = 5,
	Chaos_Max                      = 6,
};

enum class EObjectStateTypeEnum : uint8
{
	Chaos_NONE                     = 0,
	Chaos_Object_Sleeping          = 1,
	Chaos_Object_Kinematic         = 2,
	Chaos_Object_Static            = 3,
	Chaos_Object_Dynamic           = 4,
	Chaos_Object_UserDefined       = 100,
	Chaos_Max                      = 101,
};

enum class EGeometryCollectionPhysicsTypeEnum : uint8
{
	Chaos_AngularVelocity          = 0,
	Chaos_DynamicState             = 1,
	Chaos_LinearVelocity           = 2,
	Chaos_InitialAngularVelocity   = 3,
	Chaos_InitialLinearVelocity    = 4,
	Chaos_CollisionGroup           = 5,
	Chaos_LinearForce              = 6,
	Chaos_AngularTorque            = 7,
	Chaos_DisableThreshold         = 8,
	Chaos_SleepingThreshold        = 9,
	Chaos_ExternalClusterStrain    = 10,
	Chaos_InternalClusterStrain    = 11,
	Chaos_LinearImpulse            = 12,
	Chaos_Max                      = 13,
};

enum class EInitialVelocityTypeEnum : uint8
{
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None    = 1,
	Chaos_Max                      = 2,
};

enum class EEmissionPatternTypeEnum : uint8
{
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max                      = 2,
};

enum class EChaosSolverTickMode : uint8
{
	Fixed                          = 0,
	Variable                       = 1,
	VariableCapped                 = 2,
	VariableCappedWithTarget       = 3,
	EChaosSolverTickMode_MAX       = 4,
};

enum class EChaosThreadingMode : uint8
{
	DedicatedThread                = 0,
	TaskGraph                      = 1,
	SingleThread                   = 2,
	Num                            = 3,
	Invalid                        = 4,
	EChaosThreadingMode_MAX        = 5,
};

enum class EChaosBufferMode : uint8
{
	Double                         = 0,
	Triple                         = 1,
	Num                            = 2,
	Invalid                        = 3,
	EChaosBufferMode_MAX           = 4,
};

enum class EClusterUnionMethod : uint8
{
	PointImplicit                  = 0,
	DelaunayTriangulation          = 1,
	MinimalSpanningSubsetDelaunayTriangulation = 2,
	PointImplicitAugmentedWithMinimalDelaunay = 3,
	BoundsOverlapFilteredDelaunayTriangulation = 4,
	None                           = 5,
	EClusterUnionMethod_MAX        = 6,
};

enum class EGeometryCollectionCacheType : uint8
{
	None                           = 0,
	Record                         = 1,
	Play                           = 2,
	RecordAndPlay                  = 3,
	EGeometryCollectionCacheType_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Chaos.ManagedArrayCollection
struct FManagedArrayCollection
{
public:
	uint8                                        Pad_2602[0xB0];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Chaos.ClosestPhysicsObjectResult
struct FClosestPhysicsObjectResult
{
public:
	uint8                                        Pad_2603[0x28];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Chaos.SolverCollisionFilterSettings
struct FSolverCollisionFilterSettings
{
public:
	bool                                         FilterEnabled;                                     // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2605[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinMass;                                           // 0x4(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MinSpeed;                                          // 0x8(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MinImpulse;                                        // 0xC(0x4)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Chaos.SolverBreakingFilterSettings
struct FSolverBreakingFilterSettings
{
public:
	bool                                         FilterEnabled;                                     // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2609[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinMass;                                           // 0x4(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MinSpeed;                                          // 0x8(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MinVolume;                                         // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Chaos.SolverTrailingFilterSettings
struct FSolverTrailingFilterSettings
{
public:
	bool                                         FilterEnabled;                                     // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_260C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinMass;                                           // 0x4(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MinSpeed;                                          // 0x8(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MinVolume;                                         // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Chaos.ChaosSolverConfiguration
struct FChaosSolverConfiguration
{
public:
	int32                                        PositionIterations;                                // 0x0(0x4)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        VelocityIterations;                                // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        ProjectionIterations;                              // 0x8(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        CollisionMarginFraction;                           // 0xC(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        CollisionMarginMax;                                // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        CollisionCullDistance;                             // 0x14(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        CollisionMaxPushOutVelocity;                       // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        ClusterConnectionFactor;                           // 0x1C(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EClusterUnionMethod               ClusterUnionConnectionType;                        // 0x20(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bGenerateCollisionData;                            // 0x21(0x1)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2615[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSolverCollisionFilterSettings        CollisionFilterSettings;                           // 0x24(0x10)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bGenerateBreakData;                                // 0x34(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2617[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSolverBreakingFilterSettings         BreakingFilterSettings;                            // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bGenerateTrailingData;                             // 0x48(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2618[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSolverTrailingFilterSettings         TrailingFilterSettings;                            // 0x4C(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        Iterations;                                        // 0x5C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        PushOutIterations;                                 // 0x60(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bGenerateContactGraph;                             // 0x64(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_261A[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Chaos.SolverCollisionData
struct FSolverCollisionData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               AccumulatedImpulse;                                // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Normal;                                            // 0x30(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	struct FVector                               Velocity1;                                         // 0x48(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Velocity2;                                         // 0x60(0x18)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               AngularVelocity1;                                  // 0x78(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               AngularVelocity2;                                  // 0x90(0x18)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        Mass1;                                             // 0xA8(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Mass2;                                             // 0xAC(0x4)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ParticleIndex;                                     // 0xB0(0x4)(Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        LevelsetIndex;                                     // 0xB4(0x4)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        ParticleIndexMesh;                                 // 0xB8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        LevelsetIndexMesh;                                 // 0xBC(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Chaos.SolverBreakingData
struct FSolverBreakingData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Velocity;                                          // 0x18(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference)
	struct FVector                               AngularVelocity;                                   // 0x30(0x18)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Mass;                                              // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ParticleIndex;                                     // 0x4C(0x4)(Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ParticleIndexMesh;                                 // 0x50(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2625[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Chaos.SolverTrailingData
struct FSolverTrailingData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Velocity;                                          // 0x18(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference)
	struct FVector                               AngularVelocity;                                   // 0x30(0x18)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Mass;                                              // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ParticleIndex;                                     // 0x4C(0x4)(Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ParticleIndexMesh;                                 // 0x50(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2626[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Chaos.RecordedFrame
struct FRecordedFrame
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	TArray<int32>                                TransformIndices;                                  // 0x10(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                PreviousTransformIndices;                          // 0x20(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<bool>                                 DisabledFlags;                                     // 0x30(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FSolverCollisionData>          Collisions;                                        // 0x40(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FSolverBreakingData>           Breakings;                                         // 0x50(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TSet<struct FSolverTrailingData>             Trailings;                                         // 0x60(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        Timestamp;                                         // 0xB0(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2628[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Chaos.RecordedTransformTrack
struct FRecordedTransformTrack
{
public:
	TArray<struct FRecordedFrame>                Records;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct Chaos.SolverRemovalFilterSettings
struct FSolverRemovalFilterSettings
{
public:
	bool                                         FilterEnabled;                                     // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_262B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinMass;                                           // 0x4(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MinVolume;                                         // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


