#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
struct UFieldSystemComponent_ApplyUniformVectorFalloffForce_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1AAE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FVector                               Direction;                                         // 0x20(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        Radius;                                            // 0x38(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        Magnitude;                                         // 0x3C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
struct UFieldSystemComponent_ApplyStrainField_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1AB2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        Radius;                                            // 0x20(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        Magnitude;                                         // 0x24(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	int32                                        Iterations;                                        // 0x28(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AB3[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
struct UFieldSystemComponent_ApplyStayDynamicField_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1AB8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        Radius;                                            // 0x20(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1ABA[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
struct UFieldSystemComponent_ApplyRadialVectorFalloffForce_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1AC2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        Radius;                                            // 0x20(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        Magnitude;                                         // 0x24(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
struct UFieldSystemComponent_ApplyRadialForce_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1AC9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        Magnitude;                                         // 0x20(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1ACB[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
struct UFieldSystemComponent_ApplyPhysicsField_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	enum class EFieldPhysicsType                 Target;                                            // 0x1(0x1)(Edit, ConstParm, ReturnParm, Transient, Config)
	uint8                                        Pad_1AD4[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldSystemMetaData*                  MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UFieldNodeBase*                        Field;                                             // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
struct UFieldSystemComponent_ApplyLinearForce_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1ADE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Direction;                                         // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        Magnitude;                                         // 0x20(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1AE0[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.AddPersistentField
struct UFieldSystemComponent_AddPersistentField_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	enum class EFieldPhysicsType                 Target;                                            // 0x1(0x1)(Edit, ConstParm, ReturnParm, Transient, Config)
	uint8                                        Pad_1AE8[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldSystemMetaData*                  MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UFieldNodeBase*                        Field;                                             // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
struct UFieldSystemComponent_AddFieldCommand_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	enum class EFieldPhysicsType                 Target;                                            // 0x1(0x1)(Edit, ConstParm, ReturnParm, Transient, Config)
	uint8                                        Pad_1AF2[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldSystemMetaData*                  MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UFieldNodeBase*                        Field;                                             // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
struct UFieldSystemMetaDataIteration_SetMetaDataIteration_Params
{
public:
	int32                                        Iterations;                                        // 0x0(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B04[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldSystemMetaDataIteration*         ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
struct UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Params
{
public:
	enum class EFieldResolutionType              ResolutionType;                                    // 0x0(0x1)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B0C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldSystemMetaDataProcessingResolution* ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
struct UFieldSystemMetaDataFilter_SetMetaDataFilterType_Params
{
public:
	enum class EFieldFilterType                  FilterType;                                        // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EFieldObjectType                  ObjectType;                                        // 0x1(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	enum class EFieldPositionType                PositionType;                                      // 0x2(0x1)(Edit, ExportObject, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B16[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldSystemMetaDataFilter*            ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.UniformInteger.SetUniformInteger
struct UUniformInteger_SetUniformInteger_Params
{
public:
	int32                                        Magnitude;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1B32[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUniformInteger*                       ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
struct URadialIntMask_SetRadialIntMask_Params
{
public:
	float                                        Radius;                                            // 0x0(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1B44[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	int32                                        InteriorValue;                                     // 0x20(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ExteriorValue;                                     // 0x24(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESetMaskConditionType             SetMaskConditionIn;                                // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B48[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class URadialIntMask*                        ReturnValue;                                       // 0x30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.UniformScalar.SetUniformScalar
struct UUniformScalar_SetUniformScalar_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1B6C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUniformScalar*                        ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function FieldSystemEngine.WaveScalar.SetWaveScalar
struct UWaveScalar_SetWaveScalar_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1B85[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        Wavelength;                                        // 0x20(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Period;                                            // 0x24(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
	float                                        Time;                                              // 0x28(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	enum class EWaveFunctionType                 Function;                                          // 0x2C(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor)
	enum class EFieldFalloffType                 Falloff;                                           // 0x2D(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, DuplicateTransient)
	uint8                                        Pad_1B8C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UWaveScalar*                           ReturnValue;                                       // 0x30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
struct URadialFalloff_SetRadialFalloff_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRange;                                          // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Default;                                           // 0xC(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	float                                        Radius;                                            // 0x10(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1BC1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	enum class EFieldFalloffType                 Falloff;                                           // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, DuplicateTransient)
	uint8                                        Pad_1BC3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class URadialFalloff*                        ReturnValue;                                       // 0x38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
struct UPlaneFalloff_SetPlaneFalloff_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRange;                                          // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Default;                                           // 0xC(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	float                                        Distance;                                          // 0x10(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1BEF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FVector                               Normal;                                            // 0x30(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	enum class EFieldFalloffType                 Falloff;                                           // 0x48(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, DuplicateTransient)
	uint8                                        Pad_1BF4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPlaneFalloff*                         ReturnValue;                                       // 0x50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
struct UBoxFalloff_SetBoxFalloff_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRange;                                          // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Default;                                           // 0xC(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class EFieldFalloffType                 Falloff;                                           // 0x70(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, DuplicateTransient)
	uint8                                        Pad_1C0E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UBoxFalloff*                           ReturnValue;                                       // 0x78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function FieldSystemEngine.NoiseField.SetNoiseField
struct UNoiseField_SetNoiseField_Params
{
public:
	float                                        MinRange;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRange;                                          // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C1F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	class UNoiseField*                           ReturnValue;                                       // 0x70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C20[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.UniformVector.SetUniformVector
struct UUniformVector_SetUniformVector_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1C2B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Direction;                                         // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UUniformVector*                        ReturnValue;                                       // 0x20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.RadialVector.SetRadialVector
struct URadialVector_SetRadialVector_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1C3D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	class URadialVector*                         ReturnValue;                                       // 0x20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.RandomVector.SetRandomVector
struct URandomVector_SetRandomVector_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1C4D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class URandomVector*                         ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.OperatorField.SetOperatorField
struct UOperatorField_SetOperatorField_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1C62[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldNodeBase*                        LeftField;                                         // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UFieldNodeBase*                        RightField;                                        // 0x10(0x8)(Edit, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EFieldOperationType               Operation;                                         // 0x18(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C67[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UOperatorField*                        ReturnValue;                                       // 0x20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.ToIntegerField.SetToIntegerField
struct UToIntegerField_SetToIntegerField_Params
{
public:
	class UFieldNodeFloat*                       FloatField;                                        // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UToIntegerField*                       ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.ToFloatField.SetToFloatField
struct UToFloatField_SetToFloatField_Params
{
public:
	class UFieldNodeInt*                         IntegerField;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UToFloatField*                         ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function FieldSystemEngine.CullingField.SetCullingField
struct UCullingField_SetCullingField_Params
{
public:
	class UFieldNodeBase*                        Culling;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UFieldNodeBase*                        Field;                                             // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	enum class EFieldCullingOperationType        Operation;                                         // 0x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C8A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCullingField*                         ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
struct UReturnResultsTerminal_SetReturnResultsTerminal_Params
{
public:
	class UReturnResultsTerminal*                ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


