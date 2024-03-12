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

// 0x10 (0x10 - 0x0)
// Function Female_Hair_Default_Long_AnimBP.Female_Hair_Default_Long_AnimBP_C.AnimGraph
struct UFemale_Hair_Default_Long_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Edit, Net, Transient, EditConst)
};

// 0x78 (0x78 - 0x0)
// Function Female_Hair_Default_Long_AnimBP.Female_Hair_Default_Long_AnimBP_C.NoiseGenerator
struct UFemale_Hair_Default_Long_AnimBP_C_NoiseGenerator_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_56D8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector                               CallFunc_K2_MakePerlinNoiseVectorAndRemap_ReturnValue; // 0x10(0x18)(Edit, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x28(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0x40(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        CallFunc_K2_MakePerlinNoiseVectorAndRemap_X_ImplicitCast; // 0x68(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CallFunc_K2_MakePerlinNoiseVectorAndRemap_Y_ImplicitCast; // 0x6C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CallFunc_K2_MakePerlinNoiseVectorAndRemap_Z_ImplicitCast; // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x74(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function Female_Hair_Default_Long_AnimBP.Female_Hair_Default_Long_AnimBP_C.BlueprintThreadSafeUpdateAnimation
struct UFemale_Hair_Default_Long_AnimBP_C_BlueprintThreadSafeUpdateAnimation_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_56E0[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_VSize_ReturnValue;                        // 0x8(0x8)(Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_CalculateWind_Wind;                       // 0x10(0x18)(BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x28(0x18)(Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_SelectVector_ReturnValue_1;               // 0x40(0x18)(Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_CalculateWind_GlobalWindIntensity_ImplicitCast; // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Female_Hair_Default_Long_AnimBP.Female_Hair_Default_Long_AnimBP_C.BlueprintUpdateAnimation
struct UFemale_Hair_Default_Long_AnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function Female_Hair_Default_Long_AnimBP.Female_Hair_Default_Long_AnimBP_C.ExecuteUbergraph_Female_Hair_Default_Long_AnimBP
struct UFemale_Hair_Default_Long_AnimBP_C_ExecuteUbergraph_Female_Hair_Default_Long_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x8)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        K2Node_Event_DeltaTimeX;                           // 0xC(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	class AActor*                                CallFunc_GetOwningActor_ReturnValue;               // 0x18(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x20(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_56E8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_1;            // 0x2C(0x8)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	struct FLinearColor                          CallFunc_GetVectorParameterValue_ReturnValue;      // 0x34(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CallFunc_GetScalarParameterValue_ReturnValue;      // 0x44(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x48(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x60(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_MakeVector_X_ImplicitCast;                // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MakeVector_Y_ImplicitCast;                // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, SubobjectReference)
};

}
}


