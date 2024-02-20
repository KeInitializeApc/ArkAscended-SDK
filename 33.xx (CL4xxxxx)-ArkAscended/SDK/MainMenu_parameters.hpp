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

// 0x28 (0x28 - 0x0)
// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
struct AMainMenu_C_ExecuteUbergraph_MainMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_31E4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UShooterGameInstance*                  K2Node_DynamicCast_AsShooter_Game_Instance;        // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_31E8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UReMainMenuUI_ASA_C*                   CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

}
}


