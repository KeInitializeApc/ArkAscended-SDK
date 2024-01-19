#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMenu.CheatMenu_C
// (None)

class UClass* UCheatMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMenu_C");

	return Clss;
}


// CheatMenu_C CheatMenu.Default__CheatMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMenu_C* UCheatMenu_C::GetDefaultObj()
{
	static class UCheatMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMenu_C*>(UCheatMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMenu.CheatMenu_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_CloseSpawnMenu_ReturnValue                              (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

bool UCheatMenu_C::BPEscapeClosed(bool ReturnValue, class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BPEscapeClosed");

	Params::UCheatMenu_C_BPEscapeClosed_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetShooterHUD_ReturnValue != nullptr)
		*CallFunc_GetShooterHUD_ReturnValue = Parms.CallFunc_GetShooterHUD_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.ClearFilter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldRefresh                                                    (Edit, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

bool UCheatMenu_C::ClearFilter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "ClearFilter");

	Params::UCheatMenu_C_ClearFilter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetBossSpawnArray
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              BossNames                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              BossCheats                                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

class FString UCheatMenu_C::GetBossSpawnArray(bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetBossSpawnArray");

	Params::UCheatMenu_C_GetBossSpawnArray_Params Parms{};

	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_CloseSpawnMenu_ReturnValue                              (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

bool UCheatMenu_C::CloseMenu(class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CloseMenu");

	Params::UCheatMenu_C_CloseMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetShooterHUD_ReturnValue != nullptr)
		*CallFunc_GetShooterHUD_ReturnValue = Parms.CallFunc_GetShooterHUD_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetMapOpenListsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CheatStrings                                                     (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Success                                                          (EditFixedSize, DisableEditOnTemplate, Config)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

TArray<class FString> UCheatMenu_C::GetMapOpenListsForEntry(int32 ScreenTracker, bool Success, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetMapOpenListsForEntry");

	Params::UCheatMenu_C_GetMapOpenListsForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;
	Parms.Success = Success;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateMapOpenButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FName                        MapName                                                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Config, InstancedReference, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuMapOpenButton_C*   CallFunc_Create_ReturnValue                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

class FText UCheatMenu_C::CreateMapOpenButton(class FString* Name, class FName MapName, class UUI_DebugSpawnMenuEntry** CreatedWidget, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCheatMenuMapOpenButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapOpenButton");

	Params::UCheatMenu_C_CreateMapOpenButton_Params Parms{};

	Parms.MapName = MapName;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateMapOpenEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              ArrayIndex                                                       (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<class FString>              Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// class FString                      CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateMapOpenButton_CreatedWidget                       (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

int32 UCheatMenu_C::CreateMapOpenEntry(class FString* Name, TArray<class FString>* Array, const class FString& CallFunc_Array_Get_Item, class FName* CallFunc_Conv_StringToName_ReturnValue, class UUI_DebugSpawnMenuEntry** CallFunc_CreateMapOpenButton_CreatedWidget, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapOpenEntry");

	Params::UCheatMenu_C_CreateMapOpenEntry_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

	if (CallFunc_Conv_StringToName_ReturnValue != nullptr)
		*CallFunc_Conv_StringToName_ReturnValue = Parms.CallFunc_Conv_StringToName_ReturnValue;

	if (CallFunc_CreateMapOpenButton_CreatedWidget != nullptr)
		*CallFunc_CreateMapOpenButton_CreatedWidget = Parms.CallFunc_CreateMapOpenButton_CreatedWidget;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetMapJumpArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              EmptyStringArray                                                 (BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              Temp_wildcard_Variable                                           (Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMapJumpInfo>   CallFunc_GetMapJumpListForEntry_MapJumps                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetMapJumpListForEntry_Success                          (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      Temp_string_Variable                                             (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

class FString UCheatMenu_C::GetMapJumpArray(const TArray<class FString>& EmptyStringArray, const TArray<class FString>& Temp_wildcard_Variable, TArray<struct FCheatMapJumpInfo>* CallFunc_GetMapJumpListForEntry_MapJumps, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetMapJumpArray");

	Params::UCheatMenu_C_GetMapJumpArray_Params Parms{};

	Parms.EmptyStringArray = EmptyStringArray;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetMapJumpListForEntry_MapJumps != nullptr)
		*CallFunc_GetMapJumpListForEntry_MapJumps = std::move(Parms.CallFunc_GetMapJumpListForEntry_MapJumps);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateMapJumpButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCheatMapJumpInfo           Cheat                                                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UCheatMapJumpButton_C*       CallFunc_Create_ReturnValue                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

class FText UCheatMenu_C::CreateMapJumpButton(class UUI_DebugSpawnMenuEntry** CreatedWidget, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCheatMapJumpButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapJumpButton");

	Params::UCheatMenu_C_CreateMapJumpButton_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateMapJumpEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ArrayIndex                                                       (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FCheatMapJumpInfo>   MapJumps                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FCheatMapJumpInfo           CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateMapJumpButton_CreatedWidget                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

class UUI_DebugSpawnMenuEntry* UCheatMenu_C::CreateMapJumpEntry(const TArray<struct FCheatMapJumpInfo>& MapJumps, const struct FCheatMapJumpInfo& CallFunc_Array_Get_Item, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapJumpEntry");

	Params::UCheatMenu_C_CreateMapJumpEntry_Params Parms{};

	Parms.MapJumps = MapJumps;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetMapJumpListForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMapJumpInfo>   MapJumps                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Success                                                          (EditFixedSize, DisableEditOnTemplate, Config)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

class FString UCheatMenu_C::GetMapJumpListForEntry(int32 ScreenTracker, const TArray<struct FCheatMapJumpInfo>& MapJumps, bool Success, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetMapJumpListForEntry");

	Params::UCheatMenu_C_GetMapJumpListForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;
	Parms.MapJumps = MapJumps;
	Parms.Success = Success;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.AddAllEntriesButtonForItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftClassPtr<class UPrimalItem>>Items                                                            (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCheatMenuItemAllButton_C*   CallFunc_CreateButtonFromAllEntries_ReturnValue                  (ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// enum class ECheatMenuOptionTypes   CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)

void UCheatMenu_C::AddAllEntriesButtonForItems(const TArray<TSoftClassPtr<class UPrimalItem>>& Items, class UCheatMenuItemAllButton_C* CallFunc_CreateButtonFromAllEntries_ReturnValue, enum class ECheatMenuOptionTypes CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "AddAllEntriesButtonForItems");

	Params::UCheatMenu_C_AddAllEntriesButtonForItems_Params Parms{};

	Parms.Items = Items;
	Parms.CallFunc_CreateButtonFromAllEntries_ReturnValue = CallFunc_CreateButtonFromAllEntries_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.CreateButtonFromAllEntries
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftClassPtr<class UPrimalItem>>Items                                                            (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCheatMenuItemAllButton_C*   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuItemAllButton_C*   CallFunc_Create_ReturnValue                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

void UCheatMenu_C::CreateButtonFromAllEntries(const TArray<TSoftClassPtr<class UPrimalItem>>& Items, class UCheatMenuItemAllButton_C* ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCheatMenuItemAllButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateButtonFromAllEntries");

	Params::UCheatMenu_C_CreateButtonFromAllEntries_Params Parms{};

	Parms.Items = Items;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.HideAllOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCheatMenu_C::HideAllOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "HideAllOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenu.CheatMenu_C.SetupOptionsBarForFolder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_2                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               Temp_bool_Variable_3                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               Temp_bool_Variable_4                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// enum class ECheatMenuOptionTypes   CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, NonTransactional)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)

enum class ESlateVisibility UCheatMenu_C::SetupOptionsBarForFolder(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, enum class ECheatMenuOptionTypes CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, enum class ESlateVisibility K2Node_Select_Default_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "SetupOptionsBarForFolder");

	Params::UCheatMenu_C_SetupOptionsBarForFolder_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetCharacterPresetsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMenuCharacterLevelPreset>CharacterPresetLevel                                             (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMenuCharacterPresetItems>CharacterPresetItem                                              (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Success                                                          (EditFixedSize, DisableEditOnTemplate, Config)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

TArray<struct FCheatMenuCharacterPresetItems> UCheatMenu_C::GetCharacterPresetsForEntry(int32 ScreenTracker, const TArray<struct FCheatMenuCharacterLevelPreset>& CharacterPresetLevel, bool Success, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetCharacterPresetsForEntry");

	Params::UCheatMenu_C_GetCharacterPresetsForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;
	Parms.CharacterPresetLevel = CharacterPresetLevel;
	Parms.Success = Success;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetCheatListsForEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CheatStrings                                                     (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<bool>                       RequireConfirm                                                   (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               AllowAdditionalString                                            (BlueprintVisible, ExportObject, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Success                                                          (EditFixedSize, DisableEditOnTemplate, Config)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossNames                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossCheats                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)

TArray<class FString> UCheatMenu_C::GetCheatListsForEntry(int32 ScreenTracker, bool AllowAdditionalString, bool Success, const TArray<class FString>& CallFunc_GetBossSpawnArray_BossNames, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetCheatListsForEntry");

	Params::UCheatMenu_C_GetCheatListsForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;
	Parms.AllowAdditionalString = AllowAdditionalString;
	Parms.Success = Success;
	Parms.CallFunc_GetBossSpawnArray_BossNames = CallFunc_GetBossSpawnArray_BossNames;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetEggListsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>DinoEggBlueprintIDs                                              (ConstParm, Net, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>DinoFertEggBlueprintIDs                                          (Edit, BlueprintVisible, BlueprintReadOnly, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Success                                                          (EditFixedSize, DisableEditOnTemplate, Config)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

void UCheatMenu_C::GetEggListsForEntry(int32 ScreenTracker, const TArray<TSoftClassPtr<class UPrimalItem>>& DinoEggBlueprintIDs, const TArray<TSoftClassPtr<class UPrimalItem>>& DinoFertEggBlueprintIDs, bool Success, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetEggListsForEntry");

	Params::UCheatMenu_C_GetEggListsForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;
	Parms.DinoEggBlueprintIDs = DinoEggBlueprintIDs;
	Parms.DinoFertEggBlueprintIDs = DinoFertEggBlueprintIDs;
	Parms.Success = Success;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.GetDinoListsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class APrimalDinoCharacter>>Dinos                                                            (BlueprintVisible, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>Saddles                                                          (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Success                                                          (EditFixedSize, DisableEditOnTemplate, Config)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_6                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_7                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, EditorOnly)

TArray<TSoftClassPtr<class UPrimalItem>> UCheatMenu_C::GetDinoListsForEntry(int32 ScreenTracker, TArray<TSoftClassPtr<class APrimalDinoCharacter>>* Dinos, bool Success, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetDinoListsForEntry");

	Params::UCheatMenu_C_GetDinoListsForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;
	Parms.Success = Success;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_6 = CallFunc_EqualEqual_IntInt_ReturnValue_6;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_7 = CallFunc_EqualEqual_IntInt_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

	if (Dinos != nullptr)
		*Dinos = std::move(Parms.Dinos);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateCharacterPresetEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              ArrayIndex                                                       (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FCheatMenuCharacterLevelPreset>LevelLists                                                       (ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMenuCharacterPresetItems>ItemLists                                                        (BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FCheatMenuCharacterPresetItemsCallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// struct FCheatMenuCharacterLevelPresetCallFunc_Array_Get_Item_1                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateButtonFromCharacterPresets_CreatedWidget          (ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

class FText UCheatMenu_C::CreateCharacterPresetEntry(TArray<struct FCheatMenuCharacterLevelPreset>* LevelLists, const TArray<struct FCheatMenuCharacterPresetItems>& ItemLists, const struct FCheatMenuCharacterPresetItems& CallFunc_Array_Get_Item, const struct FCheatMenuCharacterLevelPreset& CallFunc_Array_Get_Item_1, class UUI_DebugSpawnMenuEntry* CallFunc_CreateButtonFromCharacterPresets_CreatedWidget, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateCharacterPresetEntry");

	Params::UCheatMenu_C_CreateCharacterPresetEntry_Params Parms{};

	Parms.ItemLists = ItemLists;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_CreateButtonFromCharacterPresets_CreatedWidget = CallFunc_CreateButtonFromCharacterPresets_CreatedWidget;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelLists != nullptr)
		*LevelLists = std::move(Parms.LevelLists);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateCheatEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              ArrayIndex                                                       (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<class FString>              Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// TArray<bool>                       ArrayConfirm                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               AllowAdditionalString                                            (BlueprintVisible, ExportObject, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (Edit, ExportObject, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateCheatButtonFromBlueprintID_CreatedWidget          (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool UCheatMenu_C::CreateCheatEntry(class FString* Name, TArray<class FString>* Array, bool AllowAdditionalString, bool Temp_bool_Variable, bool CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, bool Temp_bool_Variable_1, bool K2Node_Select_Default, class UUI_DebugSpawnMenuEntry* CallFunc_CreateCheatButtonFromBlueprintID_CreatedWidget, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateCheatEntry");

	Params::UCheatMenu_C_CreateCheatEntry_Params Parms{};

	Parms.AllowAdditionalString = AllowAdditionalString;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateCheatButtonFromBlueprintID_CreatedWidget = CallFunc_CreateCheatButtonFromBlueprintID_CreatedWidget;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateEggEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              ArrayIndex                                                       (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>UnFertEggs                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>FertEggs                                                         (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      Temp_string_Variable                                             (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (Net, ReturnParm, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item_1                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_1                                           (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue_1                 (Net, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanXOR_ReturnValue                                  (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class FString                      K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget       (Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

class FString UCheatMenu_C::CreateEggEntry(class FString* Name, const TArray<TSoftClassPtr<class UPrimalItem>>& UnFertEggs, TArray<TSoftClassPtr<class UPrimalItem>>* FertEggs, TSoftClassPtr<class UPrimalItem> CallFunc_Array_Get_Item, TSoftClassPtr<class UPrimalItem> CallFunc_Array_Get_Item_1, bool* CallFunc_BooleanXOR_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, const class FString& K2Node_Select_Default, class UUI_DebugSpawnMenuEntry* CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateEggEntry");

	Params::UCheatMenu_C_CreateEggEntry_Params Parms{};

	Parms.UnFertEggs = UnFertEggs;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget = CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (FertEggs != nullptr)
		*FertEggs = std::move(Parms.FertEggs);

	if (CallFunc_BooleanXOR_ReturnValue != nullptr)
		*CallFunc_BooleanXOR_ReturnValue = Parms.CallFunc_BooleanXOR_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateDinoEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// int32                              ArrayIndex                                                       (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<TSoftClassPtr<class APrimalDinoCharacter>>DinoBPList                                                       (Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>DinoSaddleList                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class APrimalDinoCharacter>CallFunc_Array_Get_Item_1                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// class UCheatMenuButton_C*          CallFunc_CreateDinoButtonAndSetText_CreatedButton                (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (Net, ReturnParm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool UCheatMenu_C::CreateDinoEntry(const TArray<TSoftClassPtr<class APrimalDinoCharacter>>& DinoBPList, TArray<TSoftClassPtr<class UPrimalItem>>* DinoSaddleList, TSoftClassPtr<class UPrimalItem> CallFunc_Array_Get_Item, TSoftClassPtr<class APrimalDinoCharacter> CallFunc_Array_Get_Item_1, class UCheatMenuButton_C* CallFunc_CreateDinoButtonAndSetText_CreatedButton, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateDinoEntry");

	Params::UCheatMenu_C_CreateDinoEntry_Params Parms{};

	Parms.DinoBPList = DinoBPList;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_CreateDinoButtonAndSetText_CreatedButton = CallFunc_CreateDinoButtonAndSetText_CreatedButton;

	UObject::ProcessEvent(Func, &Parms);

	if (DinoSaddleList != nullptr)
		*DinoSaddleList = std::move(Parms.DinoSaddleList);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.SetupOptionBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Array_Get_Item_1                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

class FText UCheatMenu_C::SetupOptionBar(int32 CallFunc_Array_Get_Item, bool CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "SetupOptionBar");

	Params::UCheatMenu_C_SetupOptionBar_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateButtonFromCharacterPresets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (ConstParm, Net, OutParm)
// struct FCheatMenuCharacterLevelPresetLevels                                                           (ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCheatMenuCharacterPresetItemsItems                                                            (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuCharacterPresetsButton_C*CallFunc_Create_ReturnValue                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UCheatMenu_C::CreateButtonFromCharacterPresets(class FText* Name, struct FCheatMenuCharacterLevelPreset* Levels, const struct FCheatMenuCharacterPresetItems& Items, class UUI_DebugSpawnMenuEntry** CreatedWidget, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCheatMenuCharacterPresetsButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateButtonFromCharacterPresets");

	Params::UCheatMenu_C_CreateButtonFromCharacterPresets_Params Parms{};

	Parms.Items = Items;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

	if (Levels != nullptr)
		*Levels = std::move(Parms.Levels);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateFolderButtons
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (ConstParm, Net, OutParm)
// int32                              ScreenNumber                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UTexture2D*                  Image                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
// class UUI_DebugSpawnMenuEntry*     OutWidget                                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuFolderButton_C*    CallFunc_Create_ReturnValue                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

class UUI_DebugSpawnMenuEntry* UCheatMenu_C::CreateFolderButtons(class FText* Name, class UTexture2D** Image, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCheatMenuFolderButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateFolderButtons");

	Params::UCheatMenu_C_CreateFolderButtons_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

	if (Image != nullptr)
		*Image = Parms.Image;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateCheatButtonFromBlueprintID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FString                      Cheat                                                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               RequireConfirm                                                   (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Allow_Additional_String                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuCheatButton_C*     CallFunc_Create_ReturnValue                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

class FText UCheatMenu_C::CreateCheatButtonFromBlueprintID(class FString* Name, bool* Allow_Additional_String, class UUI_DebugSpawnMenuEntry** CreatedWidget, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCheatMenuCheatButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateCheatButtonFromBlueprintID");

	Params::UCheatMenu_C_CreateCheatButtonFromBlueprintID_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Allow_Additional_String != nullptr)
		*Allow_Additional_String = Parms.Allow_Additional_String;

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateEggItemButtonFromBlueprintIDs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// TSoftClassPtr<class UPrimalItem>   UnFertilizedEgg                                                  (Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   FertilizedEgg                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UClass*                      K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuEggButton_C*       CallFunc_Create_ReturnValue                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool UCheatMenu_C::CreateEggItemButtonFromBlueprintIDs(class FString* Name, TSoftClassPtr<class UPrimalItem>* UnFertilizedEgg, class UUI_DebugSpawnMenuEntry** CreatedWidget, bool Temp_bool_Variable, class UClass* K2Node_Select_Default, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsPrimal_Item, class UCheatMenuEggButton_C* CallFunc_Create_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateEggItemButtonFromBlueprintIDs");

	Params::UCheatMenu_C_CreateEggItemButtonFromBlueprintIDs_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (UnFertilizedEgg != nullptr)
		*UnFertilizedEgg = Parms.UnFertilizedEgg;

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

	if (K2Node_ClassDynamicCast_AsPrimal_Item != nullptr)
		*K2Node_ClassDynamicCast_AsPrimal_Item = Parms.K2Node_ClassDynamicCast_AsPrimal_Item;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateItemButtonFromBlueprintID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UPrimalItem>   Blueprint                                                        (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (Net, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuItemButton_C*      CallFunc_Create_ReturnValue                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool UCheatMenu_C::CreateItemButtonFromBlueprintID(class UUI_DebugSpawnMenuEntry** CreatedWidget, class UClass** K2Node_ClassDynamicCast_AsPrimal_Item, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCheatMenuItemButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateItemButtonFromBlueprintID");

	Params::UCheatMenu_C_CreateItemButtonFromBlueprintID_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

	if (K2Node_ClassDynamicCast_AsPrimal_Item != nullptr)
		*K2Node_ClassDynamicCast_AsPrimal_Item = Parms.K2Node_ClassDynamicCast_AsPrimal_Item;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateItemButtonAndSetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ItemName                                                         (Edit, ExportObject, Net, EditFixedSize, ReturnParm, Transient, GlobalConfig, SubobjectReference)
// class FString                      ItemSpawnString                                                  (ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuButton_C*          CreatedButton                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuItemButton_C*      CallFunc_Create_ReturnValue                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

class FText UCheatMenu_C::CreateItemButtonAndSetText(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCheatMenuItemButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateItemButtonAndSetText");

	Params::UCheatMenu_C_CreateItemButtonAndSetText_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateDinoButtonAndSetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// TSoftClassPtr<class APrimalDinoCharacter>DinoBP                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   Saddle                                                           (ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
// class UCheatMenuButton_C*          CreatedButton                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuButton_C*          CallFunc_Create_ReturnValue                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

class FText UCheatMenu_C::CreateDinoButtonAndSetText(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCheatMenuButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateDinoButtonAndSetText");

	Params::UCheatMenu_C_CreateDinoButtonAndSetText_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCheatMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenu.CheatMenu_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_126_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenu_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_126_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_126_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenu.CheatMenu_C.BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// enum class ETextCommit             CommitMethod                                                     (Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class FText UCheatMenu_C::BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// enum class ETextCommit             CommitMethod                                                     (Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class FText UCheatMenu_C::BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.BndEvt__ToDinosButton_K2Node_ComponentBoundEvent_319_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenu_C::BndEvt__ToDinosButton_K2Node_ComponentBoundEvent_319_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__ToDinosButton_K2Node_ComponentBoundEvent_319_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenu.CheatMenu_C.BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// enum class ETextCommit             CommitMethod                                                     (Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class FText UCheatMenu_C::BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.Screen Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ToScreen                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)

void UCheatMenu_C::Screen_Changed(int32 ToScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "Screen Changed");

	Params::UCheatMenu_C_Screen_Changed_Params Parms{};

	Parms.ToScreen = ToScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.OnHome
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCheatMenu_C::OnHome()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "OnHome");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenu.CheatMenu_C.BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UCheatMenu_C::BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsChecked != nullptr)
		*bIsChecked = Parms.bIsChecked;

}


// Function CheatMenu.CheatMenu_C.BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UCheatMenu_C::BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsChecked != nullptr)
		*bIsChecked = Parms.bIsChecked;

}


// Function CheatMenu.CheatMenu_C.BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)

class FText UCheatMenu_C::BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.BndEvt__CheatMenu_Button_131_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenu_C::BndEvt__CheatMenu_Button_131_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__CheatMenu_Button_131_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenu.CheatMenu_C.ExecuteUbergraph_CheatMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class FString>              Temp_string_Variable                                             (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_1                                           (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class FString>              Temp_string_Variable_2                                           (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// TArray<class FString>              Temp_string_Variable_3                                           (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// TArray<class FString>              Temp_string_Variable_4                                           (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// TArray<class FString>              Temp_string_Variable_5                                           (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// TArray<class FString>              Temp_string_Variable_6                                           (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// TArray<class FString>              Temp_string_Variable_7                                           (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// TArray<class FString>              Temp_string_Variable_8                                           (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// TArray<class FString>              Temp_string_Variable_9                                           (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// TArray<class FString>              Temp_string_Variable_10                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// TArray<class FString>              Temp_string_Variable_11                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// TArray<class FString>              Temp_string_Variable_12                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// TArray<class FString>              Temp_string_Variable_13                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// TArray<class FString>              Temp_string_Variable_14                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// TArray<class FString>              Temp_string_Variable_15                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NoDestructor)
// TArray<class FString>              Temp_string_Variable_16                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// int32                              Temp_int_Variable                                                (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_3                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, NonTransactional)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_4                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_5                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_6                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_7                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_8                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_9                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_10                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_11                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_12                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_13                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_14                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_15                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, NoDestructor)
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ECheckBoxState          Temp_byte_Variable                                               (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// enum class ECheckBoxState          Temp_byte_Variable_1                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_17                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// TArray<class FString>              Temp_string_Variable_18                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// TArray<class FString>              Temp_string_Variable_19                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_3                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// TArray<class FString>              Temp_string_Variable_20                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// TArray<class FString>              Temp_string_Variable_21                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text_3                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_2                        (ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_Text_2                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_1                        (ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_2                          (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable_4                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UUI_DebugSpawnMenuEntry*     CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// int32                              K2Node_CustomEvent_ToScreen                                      (Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Array_Get_Item_1                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateFolderButtons_outWidget                           (Edit, ConstParm, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_Array_Get_Item_2                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// TArray<class FString>              Temp_string_Variable_22                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// enum class ECheckBoxState          K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class FString>              Temp_string_Variable_23                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
// enum class ECheatMenuOptionTypes   CallFunc_Array_Get_Item_3                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class APrimalDinoCharacter>>CallFunc_GetDinoListsForEntry_Dinos                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>CallFunc_GetDinoListsForEntry_Saddles                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetDinoListsForEntry_Success                            (BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs                 (Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs             (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetEggListsForEntry_Success                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CallFunc_GetCheatListsForEntry_CheatStrings                      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// TArray<bool>                       CallFunc_GetCheatListsForEntry_RequireConfirm                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetCheatListsForEntry_AllowAdditionalString             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetCheatListsForEntry_Success                           (ExportObject, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMenuCharacterLevelPreset>CallFunc_GetCharacterPresetsForEntry_CharacterPresetLevel        (Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMenuCharacterPresetItems>CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem         (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetCharacterPresetsForEntry_Success                     (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_24                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// TArray<struct FCheatMapJumpInfo>   CallFunc_GetMapJumpListForEntry_MapJumps                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetMapJumpListForEntry_Success                          (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class FString>              CallFunc_GetMapJumpArray_EmptyStringArray                        (Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_25                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly, NoDestructor)
// TArray<class FString>              CallFunc_GetMapOpenListsForEntry_CheatStrings                    (ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetMapOpenListsForEntry_Success                         (Edit, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// class UTexture2D*                  CallFunc_Array_Get_Item_4                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateFolderButtons_outWidget_1                         (Edit, ConstParm, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_26                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// class FString                      CallFunc_Array_Get_Item_5                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossNames                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossCheats                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// TArray<TSoftClassPtr<class UPrimalItem>>K2Node_Select_Default_2                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item_6                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateItemButtonFromBlueprintID_CreatedWidget           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Variable_1                                              (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class FString>              K2Node_Select_Default_3                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Contains_ReturnValue                                    (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_7                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, EditorOnly)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Len_ReturnValue                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)

int32 UCheatMenu_C::ExecuteUbergraph_CheatMenu(int32 EntryPoint, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_1, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_2, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_3, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_4, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_5, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_6, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_7, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_8, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_9, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_10, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_11, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_12, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_13, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_14, const TArray<TSoftClassPtr<class UPrimalItem>>& Temp_softclass_Variable_15, bool Temp_bool_Variable, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool Temp_bool_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, class FText K2Node_ComponentBoundEvent_Text_3, class FText K2Node_ComponentBoundEvent_Text_2, class FText K2Node_ComponentBoundEvent_Text_1, class UUI_DebugSpawnMenuEntry* CallFunc_Array_Get_Item, class UPanelSlot** CallFunc_AddChild_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UUI_DebugSpawnMenuEntry* CallFunc_CreateFolderButtons_outWidget, class UUI_DebugSpawnMenuEntry* CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue_2, class UPanelSlot** CallFunc_AddChild_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool K2Node_ComponentBoundEvent_bIsChecked_1, bool K2Node_ComponentBoundEvent_bIsChecked, enum class ECheckBoxState K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ECheatMenuOptionTypes CallFunc_Array_Get_Item_3, bool* K2Node_SwitchEnum_CmpSuccess, const TArray<TSoftClassPtr<class APrimalDinoCharacter>>& CallFunc_GetDinoListsForEntry_Dinos, TArray<TSoftClassPtr<class UPrimalItem>>* CallFunc_GetDinoListsForEntry_Saddles, bool* CallFunc_GetDinoListsForEntry_Success, const TArray<TSoftClassPtr<class UPrimalItem>>& CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs, TArray<TSoftClassPtr<class UPrimalItem>>* CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs, bool CallFunc_GetEggListsForEntry_Success, bool* CallFunc_GetCheatListsForEntry_AllowAdditionalString, bool CallFunc_GetCheatListsForEntry_Success, const TArray<struct FCheatMenuCharacterPresetItems>& CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem, TArray<struct FCheatMapJumpInfo>* CallFunc_GetMapJumpListForEntry_MapJumps, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_GetMapOpenListsForEntry_Success, class UTexture2D* CallFunc_Array_Get_Item_4, class UUI_DebugSpawnMenuEntry* CallFunc_CreateFolderButtons_outWidget_1, int32* CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_Array_Get_Item_5, const TArray<class FString>& CallFunc_GetBossSpawnArray_BossNames, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, const TArray<TSoftClassPtr<class UPrimalItem>>& K2Node_Select_Default_2, class FText K2Node_ComponentBoundEvent_Text, TSoftClassPtr<class UPrimalItem> CallFunc_Array_Get_Item_6, class UUI_DebugSpawnMenuEntry* CallFunc_CreateItemButtonFromBlueprintID_CreatedWidget, int32* CallFunc_Array_Add_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, const TArray<class FString>& K2Node_Select_Default_3, bool* CallFunc_Contains_ReturnValue, const class FString& CallFunc_Array_Get_Item_7, int32* CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "ExecuteUbergraph_CheatMenu");

	Params::UCheatMenu_C_ExecuteUbergraph_CheatMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_softclass_Variable = Temp_softclass_Variable;
	Parms.Temp_softclass_Variable_1 = Temp_softclass_Variable_1;
	Parms.Temp_softclass_Variable_2 = Temp_softclass_Variable_2;
	Parms.Temp_softclass_Variable_3 = Temp_softclass_Variable_3;
	Parms.Temp_softclass_Variable_4 = Temp_softclass_Variable_4;
	Parms.Temp_softclass_Variable_5 = Temp_softclass_Variable_5;
	Parms.Temp_softclass_Variable_6 = Temp_softclass_Variable_6;
	Parms.Temp_softclass_Variable_7 = Temp_softclass_Variable_7;
	Parms.Temp_softclass_Variable_8 = Temp_softclass_Variable_8;
	Parms.Temp_softclass_Variable_9 = Temp_softclass_Variable_9;
	Parms.Temp_softclass_Variable_10 = Temp_softclass_Variable_10;
	Parms.Temp_softclass_Variable_11 = Temp_softclass_Variable_11;
	Parms.Temp_softclass_Variable_12 = Temp_softclass_Variable_12;
	Parms.Temp_softclass_Variable_13 = Temp_softclass_Variable_13;
	Parms.Temp_softclass_Variable_14 = Temp_softclass_Variable_14;
	Parms.Temp_softclass_Variable_15 = Temp_softclass_Variable_15;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.K2Node_ComponentBoundEvent_Text_3 = K2Node_ComponentBoundEvent_Text_3;
	Parms.K2Node_ComponentBoundEvent_Text_2 = K2Node_ComponentBoundEvent_Text_2;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_CreateFolderButtons_outWidget = CallFunc_CreateFolderButtons_outWidget;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_1 = K2Node_ComponentBoundEvent_bIsChecked_1;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetDinoListsForEntry_Dinos = CallFunc_GetDinoListsForEntry_Dinos;
	Parms.CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs = CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs;
	Parms.CallFunc_GetEggListsForEntry_Success = CallFunc_GetEggListsForEntry_Success;
	Parms.CallFunc_GetCheatListsForEntry_Success = CallFunc_GetCheatListsForEntry_Success;
	Parms.CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem = CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_CreateFolderButtons_outWidget_1 = CallFunc_CreateFolderButtons_outWidget_1;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetBossSpawnArray_BossNames = CallFunc_GetBossSpawnArray_BossNames;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_CreateItemButtonFromBlueprintID_CreatedWidget = CallFunc_CreateItemButtonFromBlueprintID_CreatedWidget;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_AddChild_ReturnValue != nullptr)
		*CallFunc_AddChild_ReturnValue = Parms.CallFunc_AddChild_ReturnValue;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Length_ReturnValue_1 != nullptr)
		*CallFunc_Array_Length_ReturnValue_1 = Parms.CallFunc_Array_Length_ReturnValue_1;

	if (CallFunc_Array_Length_ReturnValue_2 != nullptr)
		*CallFunc_Array_Length_ReturnValue_2 = Parms.CallFunc_Array_Length_ReturnValue_2;

	if (CallFunc_AddChild_ReturnValue_1 != nullptr)
		*CallFunc_AddChild_ReturnValue_1 = Parms.CallFunc_AddChild_ReturnValue_1;

	if (K2Node_SwitchEnum_CmpSuccess != nullptr)
		*K2Node_SwitchEnum_CmpSuccess = Parms.K2Node_SwitchEnum_CmpSuccess;

	if (CallFunc_GetDinoListsForEntry_Saddles != nullptr)
		*CallFunc_GetDinoListsForEntry_Saddles = std::move(Parms.CallFunc_GetDinoListsForEntry_Saddles);

	if (CallFunc_GetDinoListsForEntry_Success != nullptr)
		*CallFunc_GetDinoListsForEntry_Success = Parms.CallFunc_GetDinoListsForEntry_Success;

	if (CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs != nullptr)
		*CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs = std::move(Parms.CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs);

	if (CallFunc_GetCheatListsForEntry_AllowAdditionalString != nullptr)
		*CallFunc_GetCheatListsForEntry_AllowAdditionalString = Parms.CallFunc_GetCheatListsForEntry_AllowAdditionalString;

	if (CallFunc_GetMapJumpListForEntry_MapJumps != nullptr)
		*CallFunc_GetMapJumpListForEntry_MapJumps = std::move(Parms.CallFunc_GetMapJumpListForEntry_MapJumps);

	if (CallFunc_GetMapOpenListsForEntry_Success != nullptr)
		*CallFunc_GetMapOpenListsForEntry_Success = Parms.CallFunc_GetMapOpenListsForEntry_Success;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue_1 != nullptr)
		*CallFunc_Array_Add_ReturnValue_1 = Parms.CallFunc_Array_Add_ReturnValue_1;

	if (CallFunc_Array_Length_ReturnValue_3 != nullptr)
		*CallFunc_Array_Length_ReturnValue_3 = Parms.CallFunc_Array_Length_ReturnValue_3;

	if (CallFunc_Contains_ReturnValue != nullptr)
		*CallFunc_Contains_ReturnValue = Parms.CallFunc_Contains_ReturnValue;

	if (CallFunc_Array_Length_ReturnValue_4 != nullptr)
		*CallFunc_Array_Length_ReturnValue_4 = Parms.CallFunc_Array_Length_ReturnValue_4;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue_1 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_1 = Parms.CallFunc_BooleanOR_ReturnValue_1;

	if (CallFunc_BooleanOR_ReturnValue_2 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_2 = Parms.CallFunc_BooleanOR_ReturnValue_2;

	return Parms.ReturnValue;

}

}


