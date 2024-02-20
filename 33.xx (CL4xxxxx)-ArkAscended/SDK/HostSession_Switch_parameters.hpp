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

// 0x10 (0x10 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.BPPopulateMods
struct UHostSession_Switch_C_BPPopulateMods_Params
{
public:
	TArray<struct FInstalledMod>                 ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.DoSettingsMatchAnyDefaults
struct UHostSession_Switch_C_DoSettingsMatchAnyDefaults_Params
{
public:
	bool                                         Matches;                                           // 0x0(0x1)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue; // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1; // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2; // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
};

// 0x8 (0x8 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.GetSelectedMapIndex
struct UHostSession_Switch_C_GetSelectedMapIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_GetSelectedMapIndex_index;                // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.IsInMapSelectView
struct UHostSession_Switch_C_IsInMapSelectView_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.GetMapSelectScrollBox
struct UHostSession_Switch_C_GetMapSelectScrollBox_Params
{
public:
	class UScrollBox*                            ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.SetMainMapSelectEntry
struct UHostSession_Switch_C_SetMainMapSelectEntry_Params
{
public:
	int32                                        MapIndex;                                          // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        SelectedIndex;                                     // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_HasDLCforMapIndex_ReturnValue;            // 0xC(0x1)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A17[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMapSelect_Entry_C*>            CallFunc_GetMapSelectEntries_MapSelectEntries;     // 0x18(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    CallFunc_Array_Get_Item;                           // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x35(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_3A18[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_GetMapInfo_OutMapName;                    // 0x38(0x18)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FMapDescription                       CallFunc_GetMapInfo_OutDescription;                // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x78(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x2D (0x2D - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.SetupMapSelectEntries
struct UHostSession_Switch_C_SetupMapSelectEntries_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_3A1C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMapSelect_Entry_C*>            CallFunc_GetMapSelectEntries_MapSelectEntries;     // 0x10(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    CallFunc_Array_Get_Item;                           // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.Tick
struct UHostSession_Switch_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.PreConstruct
struct UHostSession_Switch_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.SetSelectedMapIndex
struct UHostSession_Switch_C_SetSelectedMapIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.OnGetInstalledMods
struct UHostSession_Switch_C_OnGetInstalledMods_Params
{
public:
	TArray<struct FInstalledMod>                 Installed_mods;                                    // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.OnIsAuthenticated
struct UHostSession_Switch_C_OnIsAuthenticated_Params
{
public:
	bool                                         Is_authenticated;                                  // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
};

// 0xE1 (0xE1 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.ExecuteUbergraph_HostSession_Switch
struct UHostSession_Switch_C_ExecuteUbergraph_HostSession_Switch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x28(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x38(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x40(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x78(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3A3C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterGame_Menu*                     K2Node_DynamicCast_AsShooter_Game_Menu;            // 0x80(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x89(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A3F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMapSelect_Entry_C*>            CallFunc_GetMapSelectEntries_MapSelectEntries;     // 0x90(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UMapSelect_Entry_C*                    CallFunc_Array_Get_Item;                           // 0xA0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_HasDLCforMapIndex_ReturnValue;            // 0xAC(0x1)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A40[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        K2Node_Event_index;                                // 0xB0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xB4(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_DoSettingsMatchAnyDefaults_Matches;       // 0xB5(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_DoSettingsMatchAnyDefaults_Matches_1;     // 0xB6(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_DoSettingsMatchAnyDefaults_Matches_2;     // 0xB7(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue; // 0xB8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1; // 0xB9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2; // 0xBA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3A42[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xBC(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A43[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0xC8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstalledMod>                 K2Node_CustomEvent_installed_mods;                 // 0xD0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_CustomEvent_is_authenticated;               // 0xE0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
};

}
}


