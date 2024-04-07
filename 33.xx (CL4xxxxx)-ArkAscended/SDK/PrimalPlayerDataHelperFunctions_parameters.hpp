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

// 0x9C (0x9C - 0x0)
// Function PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C.Apply To Player Pawn Character
struct UPrimalPlayerDataHelperFunctions_C_Apply_To_Player_Pawn_Character_Params
{
public:
	class AShooterPlayerState*                   For_Player_State;                                  // 0x0(0x8)(Edit, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class AShooterCharacter*                     New_Player_Character;                              // 0x8(0x8)(ConstParm, ExportObject, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<double>                               Ascension_Data;                                    // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        HexagonCount;                                      // 0x20(0x4)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        ChibiLevelUpsCount;                                // 0x24(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUnlockedAllExplorerNotes;                         // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_40D7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          GeneralizedUnlockedAchievementTags;                // 0x30(0x10)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x40(0x8)(ConstParm, BlueprintVisible, Net, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_40D8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Array_Get_Item;                           // 0x50(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x58(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_40DA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Array_Get_Item_1;                         // 0x60(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	double                                       CallFunc_Array_Get_Item_2;                         // 0x68(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_FFloor_ReturnValue_1;                     // 0x70(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_FFloor_ReturnValue_2;                     // 0x74(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Array_Get_Item_3;                         // 0x78(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
	double                                       CallFunc_Array_Get_Item_4;                         // 0x80(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_FFloor_ReturnValue_3;                     // 0x88(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	int32                                        CallFunc_FFloor_ReturnValue_4;                     // 0x8C(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_Array_Get_Item_5;                         // 0x90(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
	int32                                        CallFunc_FFloor_ReturnValue_5;                     // 0x98(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
};

}
}


