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
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_276C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector                               Direction;                                         // 0x20(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	float                                        Radius;                                            // 0x38(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        Magnitude;                                         // 0x3C(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
struct UFieldSystemComponent_ApplyStrainField_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_276F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        Radius;                                            // 0x20(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        Magnitude;                                         // 0x24(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        Iterations;                                        // 0x28(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2770[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
struct UFieldSystemComponent_ApplyStayDynamicField_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2771[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        Radius;                                            // 0x20(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2772[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
struct UFieldSystemComponent_ApplyRadialVectorFalloffForce_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2773[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        Radius;                                            // 0x20(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        Magnitude;                                         // 0x24(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
struct UFieldSystemComponent_ApplyRadialForce_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2776[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        Magnitude;                                         // 0x20(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2777[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
struct UFieldSystemComponent_ApplyPhysicsField_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	enum class EFieldPhysicsType                 Target;                                            // 0x1(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_2779[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldSystemMetaData*                  MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class UFieldNodeBase*                        Field;                                             // 0x10(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
struct UFieldSystemComponent_ApplyLinearForce_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_277C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Direction;                                         // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	float                                        Magnitude;                                         // 0x20(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_277D[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.AddPersistentField
struct UFieldSystemComponent_AddPersistentField_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	enum class EFieldPhysicsType                 Target;                                            // 0x1(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_2781[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldSystemMetaData*                  MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class UFieldNodeBase*                        Field;                                             // 0x10(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
struct UFieldSystemComponent_AddFieldCommand_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	enum class EFieldPhysicsType                 Target;                                            // 0x1(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_2783[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldSystemMetaData*                  MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class UFieldNodeBase*                        Field;                                             // 0x10(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
struct UFieldSystemMetaDataIteration_SetMetaDataIteration_Params
{
public:
	int32                                        Iterations;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_278A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldSystemMetaDataIteration*         ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
struct UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Params
{
public:
	enum class EFieldResolutionType              ResolutionType;                                    // 0x0(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_278F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldSystemMetaDataProcessingResolution* ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
struct UFieldSystemMetaDataFilter_SetMetaDataFilterType_Params
{
public:
	enum class EFieldFilterType                  FilterType;                                        // 0x0(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EFieldObjectType                  ObjectType;                                        // 0x1(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	enum class EFieldPositionType                PositionType;                                      // 0x2(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_27B6[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldSystemMetaDataFilter*            ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.UniformInteger.SetUniformInteger
struct UUniformInteger_SetUniformInteger_Params
{
public:
	int32                                        Magnitude;                                         // 0x0(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27BF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUniformInteger*                       ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
struct URadialIntMask_SetRadialIntMask_Params
{
public:
	float                                        Radius;                                            // 0x0(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_27C6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	int32                                        InteriorValue;                                     // 0x20(0x4)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ExteriorValue;                                     // 0x24(0x4)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ESetMaskConditionType             SetMaskConditionIn;                                // 0x28(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_27C8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class URadialIntMask*                        ReturnValue;                                       // 0x30(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.UniformScalar.SetUniformScalar
struct UUniformScalar_SetUniformScalar_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27D3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUniformScalar*                        ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function FieldSystemEngine.WaveScalar.SetWaveScalar
struct UWaveScalar_SetWaveScalar_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27DA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        Wavelength;                                        // 0x20(0x4)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Period;                                            // 0x24(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	float                                        Time;                                              // 0x28(0x4)(Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	enum class EWaveFunctionType                 Function;                                          // 0x2C(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor)
	enum class EFieldFalloffType                 Falloff;                                           // 0x2D(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_27DD[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UWaveScalar*                           ReturnValue;                                       // 0x30(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
struct URadialFalloff_SetRadialFalloff_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Default;                                           // 0xC(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	float                                        Radius;                                            // 0x10(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_27E9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x18(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	enum class EFieldFalloffType                 Falloff;                                           // 0x30(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_27EA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class URadialFalloff*                        ReturnValue;                                       // 0x38(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
struct UPlaneFalloff_SetPlaneFalloff_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Default;                                           // 0xC(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	float                                        Distance;                                          // 0x10(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27FB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x18(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector                               Normal;                                            // 0x30(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	enum class EFieldFalloffType                 Falloff;                                           // 0x48(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_27FD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPlaneFalloff*                         ReturnValue;                                       // 0x50(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
struct UBoxFalloff_SetBoxFalloff_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinRange;                                          // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Default;                                           // 0xC(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	enum class EFieldFalloffType                 Falloff;                                           // 0x70(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_2804[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UBoxFalloff*                           ReturnValue;                                       // 0x78(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function FieldSystemEngine.NoiseField.SetNoiseField
struct UNoiseField_SetNoiseField_Params
{
public:
	float                                        MinRange;                                          // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRange;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_280A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	class UNoiseField*                           ReturnValue;                                       // 0x70(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_280B[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.UniformVector.SetUniformVector
struct UUniformVector_SetUniformVector_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2812[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Direction;                                         // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	class UUniformVector*                        ReturnValue;                                       // 0x20(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.RadialVector.SetRadialVector
struct URadialVector_SetRadialVector_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_281F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	class URadialVector*                         ReturnValue;                                       // 0x20(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.RandomVector.SetRandomVector
struct URandomVector_SetRandomVector_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2825[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class URandomVector*                         ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.OperatorField.SetOperatorField
struct UOperatorField_SetOperatorField_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2829[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UFieldNodeBase*                        LeftField;                                         // 0x8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UFieldNodeBase*                        RightField;                                        // 0x10(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EFieldOperationType               Operation;                                         // 0x18(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_282A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UOperatorField*                        ReturnValue;                                       // 0x20(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.ToIntegerField.SetToIntegerField
struct UToIntegerField_SetToIntegerField_Params
{
public:
	class UFieldNodeFloat*                       FloatField;                                        // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UToIntegerField*                       ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.ToFloatField.SetToFloatField
struct UToFloatField_SetToFloatField_Params
{
public:
	class UFieldNodeInt*                         IntegerField;                                      // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UToFloatField*                         ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function FieldSystemEngine.CullingField.SetCullingField
struct UCullingField_SetCullingField_Params
{
public:
	class UFieldNodeBase*                        Culling;                                           // 0x0(0x8)(BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UFieldNodeBase*                        Field;                                             // 0x8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)
	enum class EFieldCullingOperationType        Operation;                                         // 0x10(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2845[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCullingField*                         ReturnValue;                                       // 0x18(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
struct UReturnResultsTerminal_SetReturnResultsTerminal_Params
{
public:
	class UReturnResultsTerminal*                ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


