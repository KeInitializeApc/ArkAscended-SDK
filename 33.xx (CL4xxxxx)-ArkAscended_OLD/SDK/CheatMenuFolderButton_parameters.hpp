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
	class FText                                  FolderName;                                        // 0x0(0x18)(Net, Parm, Transient, InstancedReference, SubobjectReference)
	int32                                        ScreenNumber;                                      // 0x18(0x4)(Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2C28[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Image;                                             // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CheatMenuFolderButton.CheatMenuFolderButton_C.ExecuteUbergraph_CheatMenuFolderButton
struct UCheatMenuFolderButton_C_ExecuteUbergraph_CheatMenuFolderButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


