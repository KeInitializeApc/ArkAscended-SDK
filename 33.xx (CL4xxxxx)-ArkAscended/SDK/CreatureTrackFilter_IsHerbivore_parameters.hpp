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

// 0xAB (0xAB - 0x0)
// Function CreatureTrackFilter_IsHerbivore.CreatureTrackFilter_IsHerbivore_C.ShouldActorBeTracked
struct UCreatureTrackFilter_IsHerbivore_C_ShouldActorBeTracked_Params
{
public:
	class AActor*                                InvestigatedActor;                                 // 0x0(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        CustomTameSelectionType;                           // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        DinoGroup;                                         // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                CustomTameSearchText;                              // 0x10(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class AShooterGameMode*                      GameMode;                                          // 0x20(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
	class APlayerState*                          PlayerState;                                       // 0x28(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig)
	class AShooterCharacter*                     Requesting_player_Shooter_Character;               // 0x30(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Debug_Enabled;                                     // 0x38(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Handled;                                           // 0x39(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	bool                                         ReturnValue;                                       // 0x3A(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Ret_should_show;                                   // 0x3B(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_ShouldActorBeTracked_Handled;             // 0x3C(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_ShouldActorBeTracked_ReturnValue;         // 0x3D(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_4ABF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x40(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_4AC0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x50(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x58(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x59(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x5A(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_4AC1[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x5C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	TSoftClassPtr<class APrimalDinoCharacter>    CallFunc_Array_Get_Item;                           // 0x68(0x30)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_4AC2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0xA0(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0xA9(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xAA(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

}
}


