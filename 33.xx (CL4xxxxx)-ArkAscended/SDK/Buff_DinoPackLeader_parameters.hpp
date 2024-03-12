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

// 0x12 (0x12 - 0x0)
// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.BuffTickServer
struct ABuff_DinoPackLeader_C_BuffTickServer_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_44FA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class ADino_Character_BP_Pack_C*             K2Node_DynamicCast_AsDino_Character_BP_Pack;       // 0x8(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ReceiveTick
struct ABuff_DinoPackLeader_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x74 (0x74 - 0x0)
// Function Buff_DinoPackLeader.Buff_DinoPackLeader_C.ExecuteUbergraph_Buff_DinoPackLeader
struct ABuff_DinoPackLeader_C_ExecuteUbergraph_Buff_DinoPackLeader_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x8(0x4)(BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x10(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x18(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_44FC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	class ADino_Character_BP_Pack_C*             K2Node_DynamicCast_AsDino_Character_BP_Pack;       // 0x30(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_44FD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x40(0x8)(BlueprintVisible, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x48(0x8)(BlueprintVisible, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x54(0x10)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x64(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_44FE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        K2Node_MakeStruct_R_ImplicitCast;                  // 0x6C(0x4)(ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        K2Node_MakeStruct_G_ImplicitCast;                  // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
};

}
}


