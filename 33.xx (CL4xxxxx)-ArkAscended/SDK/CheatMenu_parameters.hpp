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
// Function CheatMenu.CheatMenu_C.BPEscapeClosed
struct UCheatMenu_C_BPEscapeClosed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3B3B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterHUD*                           CallFunc_GetShooterHUD_ReturnValue;                // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_CloseSpawnMenu_ReturnValue;               // 0x11(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function CheatMenu.CheatMenu_C.ClearFilter
struct UCheatMenu_C_ClearFilter_Params
{
public:
	bool                                         ShouldRefresh;                                     // 0x0(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
};

// 0x39 (0x39 - 0x0)
// Function CheatMenu.CheatMenu_C.GetBossSpawnArray
struct UCheatMenu_C_GetBossSpawnArray_Params
{
public:
	TArray<class FString>                        BossNames;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class FString>                        BossCheats;                                        // 0x10(0x10)(BlueprintVisible, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	class UWorld*                                CallFunc_GetGameWorld_ReturnValue;                 // 0x20(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x38(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function CheatMenu.CheatMenu_C.CloseMenu
struct UCheatMenu_C_CloseMenu_Params
{
public:
	class AShooterHUD*                           CallFunc_GetShooterHUD_ReturnValue;                // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_CloseSpawnMenu_ReturnValue;               // 0x8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1A (0x1A - 0x0)
// Function CheatMenu.CheatMenu_C.GetMapOpenListsForEntry
struct UCheatMenu_C_GetMapOpenListsForEntry_Params
{
public:
	int32                                        ScreenTracker;                                     // 0x0(0x4)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3B40[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        CheatStrings;                                      // 0x8(0x10)(ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         Success;                                           // 0x18(0x1)(EditFixedSize, DisableEditOnTemplate, Config)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x19(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateMapOpenButton
struct UCheatMenu_C_CreateMapOpenButton_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	class FName                                  MapName;                                           // 0x10(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UUI_DebugSpawnMenuEntry*               CreatedWidget;                                     // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x38(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UCheatMenuMapOpenButton_C*             CallFunc_Create_ReturnValue;                       // 0x40(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x4C (0x4C - 0x0)
// Function CheatMenu.CheatMenu_C.CreateMapOpenEntry
struct UCheatMenu_C_CreateMapOpenEntry_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	int32                                        ArrayIndex;                                        // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B42[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        Array;                                             // 0x18(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
	class FString                                CallFunc_Array_Get_Item;                           // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x38(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UUI_DebugSpawnMenuEntry*               CallFunc_CreateMapOpenButton_CreatedWidget;        // 0x40(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x48(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function CheatMenu.CheatMenu_C.GetMapJumpArray
struct UCheatMenu_C_GetMapJumpArray_Params
{
public:
	TArray<class FString>                        EmptyStringArray;                                  // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3B46[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        Temp_wildcard_Variable;                            // 0x18(0x10)(Edit, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3B47[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<struct FCheatMapJumpInfo>             CallFunc_GetMapJumpListForEntry_MapJumps;          // 0x30(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_GetMapJumpListForEntry_Success;           // 0x40(0x1)(ConstParm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3B48[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable;                              // 0x48(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x5C(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateMapJumpButton
struct UCheatMenu_C_CreateMapJumpButton_Params
{
public:
	struct FCheatMapJumpInfo                     Cheat;                                             // 0x0(0x40)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	class UUI_DebugSpawnMenuEntry*               CreatedWidget;                                     // 0x40(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x48(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UCheatMapJumpButton_C*                 CallFunc_Create_ReturnValue;                       // 0x68(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x64 (0x64 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateMapJumpEntry
struct UCheatMenu_C_CreateMapJumpEntry_Params
{
public:
	int32                                        ArrayIndex;                                        // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B4A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCheatMapJumpInfo>             MapJumps;                                          // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FCheatMapJumpInfo                     CallFunc_Array_Get_Item;                           // 0x18(0x40)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UUI_DebugSpawnMenuEntry*               CallFunc_CreateMapJumpButton_CreatedWidget;        // 0x58(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x60(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x39 (0x39 - 0x0)
// Function CheatMenu.CheatMenu_C.GetMapJumpListForEntry
struct UCheatMenu_C_GetMapJumpListForEntry_Params
{
public:
	int32                                        ScreenTracker;                                     // 0x0(0x4)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3B4C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCheatMapJumpInfo>             MapJumps;                                          // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         Success;                                           // 0x18(0x1)(EditFixedSize, DisableEditOnTemplate, Config)
	uint8                                        Pad_3B4D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWorld*                                CallFunc_GetGameWorld_ReturnValue;                 // 0x20(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x38(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x1A (0x1A - 0x0)
// Function CheatMenu.CheatMenu_C.AddAllEntriesButtonForItems
struct UCheatMenu_C_AddAllEntriesButtonForItems_Params
{
public:
	TArray<TSoftClassPtr<class UPrimalItem>>     Items;                                             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UCheatMenuItemAllButton_C*             CallFunc_CreateButtonFromAllEntries_ReturnValue;   // 0x10(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	enum class ECheatMenuOptionTypes             CallFunc_Array_Get_Item;                           // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateButtonFromAllEntries
struct UCheatMenu_C_CreateButtonFromAllEntries_Params
{
public:
	TArray<TSoftClassPtr<class UPrimalItem>>     Items;                                             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UCheatMenuItemAllButton_C*             ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UCheatMenuItemAllButton_C*             CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x1A (0x1A - 0x0)
// Function CheatMenu.CheatMenu_C.SetupOptionsBarForFolder
struct UCheatMenu_C_SetupOptionsBarForFolder_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_1;                              // 0x3(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x5(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         Temp_bool_Variable_2;                              // 0x6(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x7(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	bool                                         Temp_bool_Variable_3;                              // 0x9(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0xA(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0xB(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
	bool                                         Temp_bool_Variable_4;                              // 0xC(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	enum class ESlateVisibility                  Temp_byte_Variable_8;                              // 0xD(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	enum class ESlateVisibility                  Temp_byte_Variable_9;                              // 0xE(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	enum class ECheatMenuOptionTypes             CallFunc_Array_Get_Item;                           // 0xF(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x10(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x11(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x12(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x13(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x14(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x15(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x16(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0x17(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x18(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	enum class ESlateVisibility                  K2Node_Select_Default_4;                           // 0x19(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
};

// 0x2A (0x2A - 0x0)
// Function CheatMenu.CheatMenu_C.GetCharacterPresetsForEntry
struct UCheatMenu_C_GetCharacterPresetsForEntry_Params
{
public:
	int32                                        ScreenTracker;                                     // 0x0(0x4)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3B5C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCheatMenuCharacterLevelPreset> CharacterPresetLevel;                              // 0x8(0x10)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<struct FCheatMenuCharacterPresetItems> CharacterPresetItem;                               // 0x18(0x10)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         Success;                                           // 0x28(0x1)(EditFixedSize, DisableEditOnTemplate, Config)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x29(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x52 (0x52 - 0x0)
// Function CheatMenu.CheatMenu_C.GetCheatListsForEntry
struct UCheatMenu_C_GetCheatListsForEntry_Params
{
public:
	int32                                        ScreenTracker;                                     // 0x0(0x4)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3B60[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        CheatStrings;                                      // 0x8(0x10)(ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<bool>                                 RequireConfirm;                                    // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, EditConst, SubobjectReference)
	bool                                         AllowAdditionalString;                             // 0x28(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         Success;                                           // 0x29(0x1)(EditFixedSize, DisableEditOnTemplate, Config)
	uint8                                        Pad_3B61[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        CallFunc_GetBossSpawnArray_BossNames;              // 0x30(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        CallFunc_GetBossSpawnArray_BossCheats;             // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x50(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x51(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x2C (0x2C - 0x0)
// Function CheatMenu.CheatMenu_C.GetEggListsForEntry
struct UCheatMenu_C_GetEggListsForEntry_Params
{
public:
	int32                                        ScreenTracker;                                     // 0x0(0x4)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3B63[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftClassPtr<class UPrimalItem>>     DinoEggBlueprintIDs;                               // 0x8(0x10)(Edit, BlueprintVisible, Net, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<TSoftClassPtr<class UPrimalItem>>     DinoFertEggBlueprintIDs;                           // 0x18(0x10)(ExportObject, BlueprintReadOnly, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Success;                                           // 0x28(0x1)(EditFixedSize, DisableEditOnTemplate, Config)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x29(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x2A(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x2B(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
};

// 0x31 (0x31 - 0x0)
// Function CheatMenu.CheatMenu_C.GetDinoListsForEntry
struct UCheatMenu_C_GetDinoListsForEntry_Params
{
public:
	int32                                        ScreenTracker;                                     // 0x0(0x4)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3B6B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftClassPtr<class APrimalDinoCharacter>> Dinos;                                             // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<TSoftClassPtr<class UPrimalItem>>     Saddles;                                           // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Success;                                           // 0x28(0x1)(EditFixedSize, DisableEditOnTemplate, Config)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x29(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x2A(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x2B(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x2C(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x2D(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x2E(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x2F(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_7;          // 0x30(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
};

// 0x94 (0x94 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateCharacterPresetEntry
struct UCheatMenu_C_CreateCharacterPresetEntry_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        ArrayIndex;                                        // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B74[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCheatMenuCharacterLevelPreset> LevelLists;                                        // 0x18(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<struct FCheatMenuCharacterPresetItems> ItemLists;                                         // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FCheatMenuCharacterPresetItems        CallFunc_Array_Get_Item;                           // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FCheatMenuCharacterLevelPreset        CallFunc_Array_Get_Item_1;                         // 0x48(0x28)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x70(0x18)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UUI_DebugSpawnMenuEntry*               CallFunc_CreateButtonFromCharacterPresets_CreatedWidget; // 0x88(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x90(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x64 (0x64 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateCheatEntry
struct UCheatMenu_C_CreateCheatEntry_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	int32                                        ArrayIndex;                                        // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B75[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        Array;                                             // 0x18(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
	TArray<bool>                                 ArrayConfirm;                                      // 0x28(0x10)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         AllowAdditionalString;                             // 0x38(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x39(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Array_Get_Item;                           // 0x3A(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x3B(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3B76[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_1;                              // 0x50(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_Select_Default;                             // 0x51(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3B77[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_DebugSpawnMenuEntry*               CallFunc_CreateCheatButtonFromBlueprintID_CreatedWidget; // 0x58(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x60(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xF4 (0xF4 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateEggEntry
struct UCheatMenu_C_CreateEggEntry_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	int32                                        ArrayIndex;                                        // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B78[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftClassPtr<class UPrimalItem>>     UnFertEggs;                                        // 0x18(0x10)(ConstParm, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	TArray<TSoftClassPtr<class UPrimalItem>>     FertEggs;                                          // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                Temp_string_Variable;                              // 0x38(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             CallFunc_Array_Get_Item;                           // 0x48(0x30)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x78(0x1)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3B79[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class UPrimalItem>             CallFunc_Array_Get_Item_1;                         // 0x80(0x30)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FString                                Temp_string_Variable_1;                            // 0xB0(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue_1;  // 0xC0(0x1)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanXOR_ReturnValue;                   // 0xC1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xC2(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0xC3(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3B7A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_Select_Default;                             // 0xC8(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xD8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UUI_DebugSpawnMenuEntry*               CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget; // 0xE8(0x8)(ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xF0(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateDinoEntry
struct UCheatMenu_C_CreateDinoEntry_Params
{
public:
	class FString                                Text;                                              // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	int32                                        ArrayIndex;                                        // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B7D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftClassPtr<class APrimalDinoCharacter>> DinoBPList;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<TSoftClassPtr<class UPrimalItem>>     DinoSaddleList;                                    // 0x28(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             CallFunc_Array_Get_Item;                           // 0x38(0x30)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TSoftClassPtr<class APrimalDinoCharacter>    CallFunc_Array_Get_Item_1;                         // 0x68(0x30)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class UCheatMenuButton_C*                    CallFunc_CreateDinoButtonAndSetText_CreatedButton; // 0x98(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0xA0(0x1)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3B7E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xA4(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function CheatMenu.CheatMenu_C.SetupOptionBar
struct UCheatMenu_C_SetupOptionBar_Params
{
public:
	int32                                        CallFunc_Array_Get_Item;                           // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Array_Get_Item_1;                         // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_3B82[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x69 (0x69 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateButtonFromCharacterPresets
struct UCheatMenu_C_CreateButtonFromCharacterPresets_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(ConstParm, Net, OutParm)
	struct FCheatMenuCharacterLevelPreset        Levels;                                            // 0x18(0x28)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FCheatMenuCharacterPresetItems        Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UUI_DebugSpawnMenuEntry*               CreatedWidget;                                     // 0x50(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x58(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UCheatMenuCharacterPresetsButton_C*    CallFunc_Create_ReturnValue;                       // 0x60(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateFolderButtons
struct UCheatMenu_C_CreateFolderButtons_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(ConstParm, Net, OutParm)
	int32                                        ScreenNumber;                                      // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3B86[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Image;                                             // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	class UUI_DebugSpawnMenuEntry*               OutWidget;                                         // 0x28(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x30(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UCheatMenuFolderButton_C*              CallFunc_Create_ReturnValue;                       // 0x38(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateCheatButtonFromBlueprintID
struct UCheatMenu_C_CreateCheatButtonFromBlueprintID_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	class FString                                Cheat;                                             // 0x10(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	bool                                         RequireConfirm;                                    // 0x20(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, EditConst, SubobjectReference)
	bool                                         Allow_Additional_String;                           // 0x21(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3B8C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_DebugSpawnMenuEntry*               CreatedWidget;                                     // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x48(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UCheatMenuCheatButton_C*               CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0xEB (0xEB - 0x0)
// Function CheatMenu.CheatMenu_C.CreateEggItemButtonFromBlueprintIDs
struct UCheatMenu_C_CreateEggItemButtonFromBlueprintIDs_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	TSoftClassPtr<class UPrimalItem>             UnFertilizedEgg;                                   // 0x10(0x30)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             FertilizedEgg;                                     // 0x40(0x30)(Edit, ConstParm, BlueprintVisible, OutParm, Config, EditConst, SubobjectReference)
	class UUI_DebugSpawnMenuEntry*               CreatedWidget;                                     // 0x70(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x78(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3B8D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0x80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue_1;          // 0x88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x90(0x18)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0xA8(0x1)(Edit, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
	uint8                                        Pad_3B8E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                K2Node_Select_Default;                             // 0xB0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xB8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Item;             // 0xC0(0x8)(Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0xC8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_3B8F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCheatMenuEggButton_C*                 CallFunc_Create_ReturnValue;                       // 0xD0(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0xD8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UPrimalItem*                           K2Node_DynamicCast_AsPrimal_Item;                  // 0xE0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE9(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xEA(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
};

// 0x68 (0x68 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateItemButtonFromBlueprintID
struct UCheatMenu_C_CreateItemButtonFromBlueprintID_Params
{
public:
	TSoftClassPtr<class UPrimalItem>             Blueprint;                                         // 0x0(0x30)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	class UUI_DebugSpawnMenuEntry*               CreatedWidget;                                     // 0x30(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x38(0x1)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3B93[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0x40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Item;             // 0x48(0x8)(Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x50(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_3B94[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x58(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UCheatMenuItemButton_C*                CallFunc_Create_ReturnValue;                       // 0x60(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateItemButtonAndSetText
struct UCheatMenu_C_CreateItemButtonAndSetText_Params
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	class FString                                ItemSpawnString;                                   // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UCheatMenuButton_C*                    CreatedButton;                                     // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x40(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UCheatMenuItemButton_C*                CallFunc_Create_ReturnValue;                       // 0x48(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateDinoButtonAndSetText
struct UCheatMenu_C_CreateDinoButtonAndSetText_Params
{
public:
	class FString                                Text;                                              // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	TSoftClassPtr<class APrimalDinoCharacter>    DinoBP;                                            // 0x10(0x30)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             Saddle;                                            // 0x40(0x30)(Edit, ExportObject, OutParm, InstancedReference, SubobjectReference)
	class UCheatMenuButton_C*                    CreatedButton;                                     // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x78(0x18)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x90(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UCheatMenuButton_C*                    CallFunc_Create_ReturnValue;                       // 0x98(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function CheatMenu.CheatMenu_C.BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCheatMenu_C_BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function CheatMenu.CheatMenu_C.BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCheatMenu_C_BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function CheatMenu.CheatMenu_C.BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCheatMenu_C_BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CheatMenu.CheatMenu_C.Screen Changed
struct UCheatMenu_C_Screen_Changed_Params
{
public:
	int32                                        ToScreen;                                          // 0x0(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function CheatMenu.CheatMenu_C.BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature
struct UCheatMenu_C_BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function CheatMenu.CheatMenu_C.BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct UCheatMenu_C_BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function CheatMenu.CheatMenu_C.BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
struct UCheatMenu_C_BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
};

// 0x678 (0x678 - 0x0)
// Function CheatMenu.CheatMenu_C.ExecuteUbergraph_CheatMenu
struct UCheatMenu_C_ExecuteUbergraph_CheatMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_3BA7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        Temp_string_Variable;                              // 0x8(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class FString>                        Temp_string_Variable_1;                            // 0x18(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	TArray<class FString>                        Temp_string_Variable_2;                            // 0x28(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	TArray<class FString>                        Temp_string_Variable_3;                            // 0x38(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional)
	TArray<class FString>                        Temp_string_Variable_4;                            // 0x48(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional)
	TArray<class FString>                        Temp_string_Variable_5;                            // 0x58(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional)
	TArray<class FString>                        Temp_string_Variable_6;                            // 0x68(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
	TArray<class FString>                        Temp_string_Variable_7;                            // 0x78(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, EditorOnly)
	TArray<class FString>                        Temp_string_Variable_8;                            // 0x88(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, EditorOnly)
	TArray<class FString>                        Temp_string_Variable_9;                            // 0x98(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, EditorOnly)
	TArray<class FString>                        Temp_string_Variable_10;                           // 0xA8(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly)
	TArray<class FString>                        Temp_string_Variable_11;                           // 0xB8(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional, EditorOnly)
	TArray<class FString>                        Temp_string_Variable_12;                           // 0xC8(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	TArray<class FString>                        Temp_string_Variable_13;                           // 0xD8(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional, EditorOnly)
	TArray<class FString>                        Temp_string_Variable_14;                           // 0xE8(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	TArray<class FString>                        Temp_string_Variable_15;                           // 0xF8(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NoDestructor)
	TArray<class FString>                        Temp_string_Variable_16;                           // 0x108(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NoDestructor)
	int32                                        Temp_int_Variable;                                 // 0x118(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3BA8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable;                           // 0x120(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_1;                         // 0x130(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_2;                         // 0x140(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_3;                         // 0x150(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_4;                         // 0x160(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_5;                         // 0x170(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, NonTransactional)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_6;                         // 0x180(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_7;                         // 0x190(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, EditorOnly)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_8;                         // 0x1A0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, EditorOnly)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_9;                         // 0x1B0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, EditorOnly)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_10;                        // 0x1C0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_11;                        // 0x1D0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional, EditorOnly)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_12;                        // 0x1E0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_13;                        // 0x1F0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, NonTransactional, EditorOnly)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_14;                        // 0x200(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_15;                        // 0x210(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x220(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x221(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ECheckBoxState                    Temp_byte_Variable;                                // 0x222(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	enum class ECheckBoxState                    Temp_byte_Variable_1;                              // 0x223(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_1;                              // 0x224(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x225(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x226(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	uint8                                        Pad_3BA9[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x228(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x22C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x230(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3BAB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        Temp_string_Variable_17;                           // 0x238(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NoDestructor)
	TArray<class FString>                        Temp_string_Variable_18;                           // 0x248(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x258(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x25C(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x260(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x264(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	TArray<class FString>                        Temp_string_Variable_19;                           // 0x268(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x278(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x27C(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x280(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x284(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x288(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
	uint8                                        Pad_3BAC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        Temp_string_Variable_20;                           // 0x290(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x2A0(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x2A4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	TArray<class FString>                        Temp_string_Variable_21;                           // 0x2A8(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional, NoDestructor)
	class FText                                  K2Node_ComponentBoundEvent_Text_3;                 // 0x2B8(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_2;         // 0x2D0(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3BAD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x2D8(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FText                                  K2Node_ComponentBoundEvent_Text_2;                 // 0x2E8(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_1;         // 0x300(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_3BAE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x304(0x4)(Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x308(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x318(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x330(0x4)(Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_3BAF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x338(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x350(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x368(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3BB0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x370(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_2;           // 0x380(0x4)(Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3BB1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_2;             // 0x388(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x3A0(0x4)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3BB2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_DebugSpawnMenuEntry*               CallFunc_Array_Get_Item;                           // 0x3A8(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x3B0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x3B8(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_3BB3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3BC(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        K2Node_CustomEvent_ToScreen;                       // 0x3C0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3C4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x3C5(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3BB4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Array_Get_Item_1;                         // 0x3C8(0x18)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x3E0(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x3E4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3BB5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_DebugSpawnMenuEntry*               CallFunc_CreateFolderButtons_outWidget;            // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	class UUI_DebugSpawnMenuEntry*               CallFunc_Array_Get_Item_2;                         // 0x3F0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x3F8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3BB6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0x400(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x408(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3BB7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        Temp_string_Variable_22;                           // 0x410(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x420(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked;             // 0x421(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	enum class ECheckBoxState                    K2Node_Select_Default;                             // 0x422(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x423(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3BB8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        Temp_string_Variable_23;                           // 0x428(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, EditorOnly, NoDestructor)
	enum class ECheatMenuOptionTypes             CallFunc_Array_Get_Item_3;                         // 0x438(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x439(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_3BB9[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftClassPtr<class APrimalDinoCharacter>> CallFunc_GetDinoListsForEntry_Dinos;               // 0x440(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	TArray<TSoftClassPtr<class UPrimalItem>>     CallFunc_GetDinoListsForEntry_Saddles;             // 0x450(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_GetDinoListsForEntry_Success;             // 0x460(0x1)(Edit, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3BBA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftClassPtr<class UPrimalItem>>     CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs;  // 0x468(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<TSoftClassPtr<class UPrimalItem>>     CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs; // 0x478(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_GetEggListsForEntry_Success;              // 0x488(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3BBB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        CallFunc_GetCheatListsForEntry_CheatStrings;       // 0x490(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<bool>                                 CallFunc_GetCheatListsForEntry_RequireConfirm;     // 0x4A0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_GetCheatListsForEntry_AllowAdditionalString; // 0x4B0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_GetCheatListsForEntry_Success;            // 0x4B1(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3BBC[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCheatMenuCharacterLevelPreset> CallFunc_GetCharacterPresetsForEntry_CharacterPresetLevel; // 0x4B8(0x10)(ConstParm, ExportObject, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FCheatMenuCharacterPresetItems> CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem; // 0x4C8(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_GetCharacterPresetsForEntry_Success;      // 0x4D8(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3BBE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        Temp_string_Variable_24;                           // 0x4E0(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
	TArray<struct FCheatMapJumpInfo>             CallFunc_GetMapJumpListForEntry_MapJumps;          // 0x4F0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_GetMapJumpListForEntry_Success;           // 0x500(0x1)(ConstParm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x501(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3BC0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        CallFunc_GetMapJumpArray_EmptyStringArray;         // 0x508(0x10)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, EditConst, SubobjectReference)
	TArray<class FString>                        Temp_string_Variable_25;                           // 0x518(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, EditorOnly, NoDestructor)
	TArray<class FString>                        CallFunc_GetMapOpenListsForEntry_CheatStrings;     // 0x528(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_GetMapOpenListsForEntry_Success;          // 0x538(0x1)(ConstParm, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_3BC3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            CallFunc_Array_Get_Item_4;                         // 0x540(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	class UUI_DebugSpawnMenuEntry*               CallFunc_CreateFolderButtons_outWidget_1;          // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x550(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3BC4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        Temp_string_Variable_26;                           // 0x558(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
	class FString                                CallFunc_Array_Get_Item_5;                         // 0x568(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x578(0x18)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        CallFunc_GetBossSpawnArray_BossNames;              // 0x590(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FString>                        CallFunc_GetBossSpawnArray_BossCheats;             // 0x5A0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x5B0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3BC5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftClassPtr<class UPrimalItem>>     K2Node_Select_Default_2;                           // 0x5B8(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x5C8(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             CallFunc_Array_Get_Item_6;                         // 0x5E0(0x30)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x610(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
	class UUI_DebugSpawnMenuEntry*               CallFunc_CreateItemButtonFromBlueprintID_CreatedWidget; // 0x620(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x628(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_3BC6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x62C(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x630(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x634(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x635(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
	uint8                                        Pad_3BC7[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable_1;                               // 0x638(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3BC8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        K2Node_Select_Default_3;                           // 0x640(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x650(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3BCA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item_7;                         // 0x658(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x668(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x66C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x66D(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3BCB[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Len_ReturnValue;                          // 0x670(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x674(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x675(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x676(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x677(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
};

}
}


