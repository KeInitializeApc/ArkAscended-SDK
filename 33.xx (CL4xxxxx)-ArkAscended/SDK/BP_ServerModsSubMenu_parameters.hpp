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

// 0xA4 (0xA4 - 0x0)
// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.ModListToCombinedString
struct UBP_ServerModsSubMenu_C_ModListToCombinedString_Params
{
public:
	TArray<int64>                                Array;                                             // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<class FString>                        AllStrings;                                        // 0x20(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_25C6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_Array_Get_Item;                           // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0x48(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_25C8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x68(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x88(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_25C9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_JoinStringArray_ReturnValue;              // 0x90(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xA0(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.CustomEvent_3
struct UBP_ServerModsSubMenu_C_CustomEvent_3_Params
{
public:
	class FString                                Temp_user_token;                                   // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.CustomEvent_4
struct UBP_ServerModsSubMenu_C_CustomEvent_4_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x161 (0x161 - 0x0)
// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.ExecuteUbergraph_BP_ServerModsSubMenu
struct UBP_ServerModsSubMenu_C_ExecuteUbergraph_BP_ServerModsSubMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_25D3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x18(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class FString                                K2Node_CustomEvent_temp_user_token;                // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x68(0x38)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xA0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xB0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC0(0x10)(BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0xD0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xD8(0x10)(BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0xE8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_ModListToCombinedString_ReturnValue;      // 0x100(0x10)(ConstParm, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x110(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x120(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x130(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x140(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_9;              // 0x150(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
	bool                                         CallFunc_CanLaunchURL_ReturnValue;                 // 0x160(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}
}


