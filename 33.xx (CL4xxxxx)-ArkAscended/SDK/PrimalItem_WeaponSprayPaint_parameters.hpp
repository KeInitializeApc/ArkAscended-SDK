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

// 0x300 (0x300 - 0x0)
// Function PrimalItem_WeaponSprayPaint.PrimalItem_WeaponSprayPaint_C.BPGetItemDescription
struct UPrimalItem_WeaponSprayPaint_C_BPGetItemDescription_Params
{
public:
	class FString                                InDescription;                                     // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGetLongDescription;                               // 0x10(0x1)(Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_595E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              ForPC;                                             // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x30(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_595F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x38(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	class AShooterHUD*                           CallFunc_GetShooterHUD_ReturnValue;                // 0x40(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0x48(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_1;          // 0x50(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	class FString                                CallFunc_FormatTextureAsRichText_ReturnValue;      // 0x58(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FString                                CallFunc_FormatTextureAsRichText_ReturnValue_1;    // 0x68(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x78(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x90(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xA8(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xF8(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_2;          // 0x148(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_3;          // 0x150(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
	class FString                                CallFunc_FormatTextureAsRichText_ReturnValue_2;    // 0x158(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_FormatTextureAsRichText_ReturnValue_3;    // 0x168(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x178(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x190(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1A8(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x1F8(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_4;          // 0x248(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_FormatTextureAsRichText_ReturnValue_4;    // 0x250(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0x260(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x278(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x2C8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x2D8(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x2F0(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

}
}


