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

// 0x11 (0x11 - 0x0)
// Function Buff_OverrideVelocity.Buff_OverrideVelocity_C.BPDeactivated
struct ABuff_OverrideVelocity_C_BPDeactivated_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1B8 (0x1B8 - 0x0)
// Function Buff_OverrideVelocity.Buff_OverrideVelocity_C.BPOverrideCharacterNewFallVelocity
struct ABuff_OverrideVelocity_C_BPOverrideCharacterNewFallVelocity_Params
{
public:
	struct FVector                               InitialVelocity;                                   // 0x0(0x18)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Gravity;                                           // 0x18(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	float                                        DeltaTime;                                         // 0x30(0x4)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2A0B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x38(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector                               Result;                                            // 0x50(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	double                                       CallFunc_BreakVector_X;                            // 0x68(0x8)(ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x78(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x80(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A0E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A0F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x98(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_NewFallVelocity_ReturnValue;              // 0xB0(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       CallFunc_BreakVector_X_1;                          // 0xC8(0x8)(ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0xD8(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0xE0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0xF8(0x18)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x110(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_BPPointPlaneProject_ReturnValue;          // 0x128(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x140(0x18)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x158(0x18)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x170(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
	double                                       CallFunc_Dot_VectorVector_ReturnValue;             // 0x188(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x190(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x1A8(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A14[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_VectorFloat_B_ImplicitCast;      // 0x1B0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
};

}
}


