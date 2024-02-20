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

// 0x38 (0x38 - 0x0)
// Function CheatMenuFolderButton.CheatMenuFolderButton_C.SetFolder
struct UCheatMenuFolderButton_C_SetFolder_Params
{
public:
	class FText                                  FolderName;                                        // 0x0(0x18)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ScreenNumber;                                      // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_F5D[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Image;                                             // 0x20(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CheatMenuFolderButton.CheatMenuFolderButton_C.ExecuteUbergraph_CheatMenuFolderButton
struct UCheatMenuFolderButton_C_ExecuteUbergraph_CheatMenuFolderButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
};

}
}


