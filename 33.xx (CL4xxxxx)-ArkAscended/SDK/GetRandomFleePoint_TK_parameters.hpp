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

// 0x8 (0x8 - 0x0)
// Function GetRandomFleePoint_TK.GetRandomFleePoint_TK_C.ReceiveExecute
struct UGetRandomFleePoint_TK_C_ReceiveExecute_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x229 (0x229 - 0x0)
// Function GetRandomFleePoint_TK.GetRandomFleePoint_TK_C.ExecuteUbergraph_GetRandomFleePoint_TK
struct UGetRandomFleePoint_TK_C_ExecuteUbergraph_GetRandomFleePoint_TK_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_RandomFloat_ReturnValue;                  // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x10(0x8)(Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C9[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x30(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                CallFunc_GetTarget_ReturnValue;                    // 0x38(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x40(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x48(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x60(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_X;                            // 0x78(0x8)(ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x88(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_X_1;                          // 0x90(0x8)(ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0xA0(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xA8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xC0(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0xD8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_X_2;                          // 0xF0(0x8)(ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector_Y_2;                          // 0xF8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector_Z_2;                          // 0x100(0x8)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x108(0x18)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x120(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x138(0x18)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	struct FVector                               CallFunc_Normal_ReturnValue_1;                     // 0x150(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x168(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x180(0x18)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x198(0x18)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue_1;       // 0x1B0(0x18)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x1C8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetRandomWanderDestination_ReturnValue;   // 0x1E0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	struct FVector                               CallFunc_GetRandomWanderDestination_ReturnValue_1; // 0x1F8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x210(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x218(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CF[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_VSize_ReturnValue_1;                      // 0x220(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x228(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

}
}


