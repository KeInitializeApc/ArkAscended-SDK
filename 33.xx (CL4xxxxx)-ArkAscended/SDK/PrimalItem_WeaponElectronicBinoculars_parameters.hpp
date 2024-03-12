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

// 0x4A0 (0x4A0 - 0x0)
// Function PrimalItem_WeaponElectronicBinoculars.PrimalItem_WeaponElectronicBinoculars_C.BPGetItemDescription
struct UPrimalItem_WeaponElectronicBinoculars_C_BPGetItemDescription_Params
{
public:
	class FString                                InDescription;                                     // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGetLongDescription;                               // 0x10(0x1)(Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5960[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              ForPC;                                             // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x30(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_5961[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x38(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	class AShooterHUD*                           CallFunc_GetShooterHUD_ReturnValue;                // 0x40(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0x48(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	class FString                                CallFunc_FormatTextureAsRichText_ReturnValue;      // 0x50(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x60(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x78(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1;          // 0xC8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_5962[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue_1;          // 0xD0(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2;          // 0xD8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5963[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue_2;          // 0xE0(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_1;          // 0xE8(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_2;          // 0xF0(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_FormatTextureAsRichText_ReturnValue_1;    // 0xF8(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_FormatTextureAsRichText_ReturnValue_2;    // 0x108(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x118(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x130(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x148(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x198(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_3;          // 0x1E8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_5964[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue_3;          // 0x1F0(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_3;          // 0x1F8(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x200(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5965[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_FormatTextureAsRichText_ReturnValue_3;    // 0x208(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x218(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	class FText                                  CallFunc_GetKeybindDisplayName_ReturnValue;        // 0x230(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x248(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x298(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x2E8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_GetKeybindDisplayName_ReturnValue_1;      // 0x2F8(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x310(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_5;            // 0x328(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x378(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_GetKeybindDisplayName_ReturnValue_2;      // 0x388(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_6;            // 0x3A0(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FText                                  CallFunc_GetKeybindDisplayName_ReturnValue_3;      // 0x3F0(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_7;            // 0x408(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x458(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x468(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x480(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x490(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
};

}
}


