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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ExportObject, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_CloseSpawnMenu_ReturnValue                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

void UCheatMenu_C::BPEscapeClosed(bool ReturnValue, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_CloseSpawnMenu_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BPEscapeClosed");

	Params::UCheatMenu_C_BPEscapeClosed_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetShooterHUD_ReturnValue = CallFunc_GetShooterHUD_ReturnValue;
	Parms.CallFunc_CloseSpawnMenu_ReturnValue = CallFunc_CloseSpawnMenu_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

}


// Function CheatMenu.CheatMenu_C.ClearFilter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldRefresh                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

void UCheatMenu_C::ClearFilter(bool* ShouldRefresh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "ClearFilter");

	Params::UCheatMenu_C_ClearFilter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShouldRefresh != nullptr)
		*ShouldRefresh = Parms.ShouldRefresh;

}


// Function CheatMenu.CheatMenu_C.GetBossSpawnArray
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              BossNames                                                        (BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              BossCheats                                                       (ConstParm, BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

bool UCheatMenu_C::GetBossSpawnArray(const TArray<class FString>& BossNames, const TArray<class FString>& BossCheats, class UWorld** CallFunc_GetGameWorld_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetBossSpawnArray");

	Params::UCheatMenu_C_GetBossSpawnArray_Params Parms{};

	Parms.BossNames = BossNames;
	Parms.BossCheats = BossCheats;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetGameWorld_ReturnValue != nullptr)
		*CallFunc_GetGameWorld_ReturnValue = Parms.CallFunc_GetGameWorld_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ExportObject, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_CloseSpawnMenu_ReturnValue                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

void UCheatMenu_C::CloseMenu(class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue, bool CallFunc_CloseSpawnMenu_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CloseMenu");

	Params::UCheatMenu_C_CloseMenu_Params Parms{};

	Parms.CallFunc_GetShooterHUD_ReturnValue = CallFunc_GetShooterHUD_ReturnValue;
	Parms.CallFunc_CloseSpawnMenu_ReturnValue = CallFunc_CloseSpawnMenu_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenu.CheatMenu_C.GetMapOpenListsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CheatStrings                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Success                                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)

void UCheatMenu_C::GetMapOpenListsForEntry(int32* ScreenTracker, const TArray<class FString>& CheatStrings, bool* Success, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetMapOpenListsForEntry");

	Params::UCheatMenu_C_GetMapOpenListsForEntry_Params Parms{};

	Parms.CheatStrings = CheatStrings;

	UObject::ProcessEvent(Func, &Parms);

	if (ScreenTracker != nullptr)
		*ScreenTracker = Parms.ScreenTracker;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateMapOpenButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FName                        MapName                                                          (BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UCheatMenuMapOpenButton_C*   CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

class UCheatMenuMapOpenButton_C* UCheatMenu_C::CreateMapOpenButton(class FString* Name, class FName* MapName, class FText* CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapOpenButton");

	Params::UCheatMenu_C_CreateMapOpenButton_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (MapName != nullptr)
		*MapName = Parms.MapName;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateMapOpenEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              ArrayIndex                                                       (Edit, BlueprintVisible, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// class FString                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateMapOpenButton_CreatedWidget                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

class UUI_DebugSpawnMenuEntry* UCheatMenu_C::CreateMapOpenEntry(class FString* Name, int32 ArrayIndex, TArray<class FString>* Array, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapOpenEntry");

	Params::UCheatMenu_C_CreateMapOpenEntry_Params Parms{};

	Parms.ArrayIndex = ArrayIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetMapJumpArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              EmptyStringArray                                                 (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// TArray<class FString>              Temp_wildcard_Variable                                           (Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FCheatMapJumpInfo>   CallFunc_GetMapJumpListForEntry_MapJumps                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetMapJumpListForEntry_Success                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      Temp_string_Variable                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

int32 UCheatMenu_C::GetMapJumpArray(bool CallFunc_GetMapJumpListForEntry_Success, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetMapJumpArray");

	Params::UCheatMenu_C_GetMapJumpArray_Params Parms{};

	Parms.CallFunc_GetMapJumpListForEntry_Success = CallFunc_GetMapJumpListForEntry_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateMapJumpButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCheatMapJumpInfo           Cheat                                                            (ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UCheatMapJumpButton_C*       CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

class UCheatMapJumpButton_C* UCheatMenu_C::CreateMapJumpButton(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapJumpButton");

	Params::UCheatMenu_C_CreateMapJumpButton_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateMapJumpEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ArrayIndex                                                       (Edit, BlueprintVisible, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FCheatMapJumpInfo>   MapJumps                                                         (Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FCheatMapJumpInfo           CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateMapJumpButton_CreatedWidget                       (ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

struct FCheatMapJumpInfo UCheatMenu_C::CreateMapJumpEntry(int32 ArrayIndex, class UUI_DebugSpawnMenuEntry** CallFunc_CreateMapJumpButton_CreatedWidget, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapJumpEntry");

	Params::UCheatMenu_C_CreateMapJumpEntry_Params Parms{};

	Parms.ArrayIndex = ArrayIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CreateMapJumpButton_CreatedWidget != nullptr)
		*CallFunc_CreateMapJumpButton_CreatedWidget = Parms.CallFunc_CreateMapJumpButton_CreatedWidget;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetMapJumpListForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMapJumpInfo>   MapJumps                                                         (Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Success                                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

bool UCheatMenu_C::GetMapJumpListForEntry(int32* ScreenTracker, bool* Success, class UWorld** CallFunc_GetGameWorld_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetMapJumpListForEntry");

	Params::UCheatMenu_C_GetMapJumpListForEntry_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ScreenTracker != nullptr)
		*ScreenTracker = Parms.ScreenTracker;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (CallFunc_GetGameWorld_ReturnValue != nullptr)
		*CallFunc_GetGameWorld_ReturnValue = Parms.CallFunc_GetGameWorld_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.AddAllEntriesButtonForItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftClassPtr<class UPrimalItem>>Items                                                            (ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
// class UCheatMenuItemAllButton_C*   CallFunc_CreateButtonFromAllEntries_ReturnValue                  (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// enum class ECheatMenuOptionTypes   CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UCheatMenu_C::AddAllEntriesButtonForItems(TArray<TSoftClassPtr<class UPrimalItem>>* Items)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "AddAllEntriesButtonForItems");

	Params::UCheatMenu_C_AddAllEntriesButtonForItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Items != nullptr)
		*Items = std::move(Parms.Items);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateButtonFromAllEntries
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftClassPtr<class UPrimalItem>>Items                                                            (ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
// class UCheatMenuItemAllButton_C*   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UCheatMenuItemAllButton_C*   CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

class UCheatMenuItemAllButton_C* UCheatMenu_C::CreateButtonFromAllEntries(TArray<TSoftClassPtr<class UPrimalItem>>* Items, class UCheatMenuItemAllButton_C* ReturnValue, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateButtonFromAllEntries");

	Params::UCheatMenu_C_CreateButtonFromAllEntries_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Items != nullptr)
		*Items = std::move(Parms.Items);

	if (CallFunc_GetOwningPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue = Parms.CallFunc_GetOwningPlayer_ReturnValue;

	return Parms.ReturnValue;

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
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_2                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               Temp_bool_Variable_3                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, EditorOnly)
// bool                               Temp_bool_Variable_4                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp, EditorOnly)
// enum class ECheatMenuOptionTypes   CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, NonTransactional)

bool UCheatMenu_C::SetupOptionsBarForFolder(bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* Temp_bool_Variable_1, enum class ESlateVisibility* Temp_byte_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_3, bool* Temp_bool_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_4, enum class ESlateVisibility* Temp_byte_Variable_5, bool* Temp_bool_Variable_3, enum class ESlateVisibility* Temp_byte_Variable_6, enum class ESlateVisibility* Temp_byte_Variable_7, bool* Temp_bool_Variable_4, enum class ESlateVisibility* Temp_byte_Variable_8, enum class ESlateVisibility* Temp_byte_Variable_9, enum class ESlateVisibility* K2Node_Select_Default, enum class ESlateVisibility* K2Node_Select_Default_1, enum class ESlateVisibility* K2Node_Select_Default_2, enum class ESlateVisibility* K2Node_Select_Default_3, enum class ESlateVisibility* K2Node_Select_Default_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "SetupOptionsBarForFolder");

	Params::UCheatMenu_C_SetupOptionsBarForFolder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (Temp_byte_Variable_2 != nullptr)
		*Temp_byte_Variable_2 = Parms.Temp_byte_Variable_2;

	if (Temp_byte_Variable_3 != nullptr)
		*Temp_byte_Variable_3 = Parms.Temp_byte_Variable_3;

	if (Temp_bool_Variable_2 != nullptr)
		*Temp_bool_Variable_2 = Parms.Temp_bool_Variable_2;

	if (Temp_byte_Variable_4 != nullptr)
		*Temp_byte_Variable_4 = Parms.Temp_byte_Variable_4;

	if (Temp_byte_Variable_5 != nullptr)
		*Temp_byte_Variable_5 = Parms.Temp_byte_Variable_5;

	if (Temp_bool_Variable_3 != nullptr)
		*Temp_bool_Variable_3 = Parms.Temp_bool_Variable_3;

	if (Temp_byte_Variable_6 != nullptr)
		*Temp_byte_Variable_6 = Parms.Temp_byte_Variable_6;

	if (Temp_byte_Variable_7 != nullptr)
		*Temp_byte_Variable_7 = Parms.Temp_byte_Variable_7;

	if (Temp_bool_Variable_4 != nullptr)
		*Temp_bool_Variable_4 = Parms.Temp_bool_Variable_4;

	if (Temp_byte_Variable_8 != nullptr)
		*Temp_byte_Variable_8 = Parms.Temp_byte_Variable_8;

	if (Temp_byte_Variable_9 != nullptr)
		*Temp_byte_Variable_9 = Parms.Temp_byte_Variable_9;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = Parms.K2Node_Select_Default_2;

	if (K2Node_Select_Default_3 != nullptr)
		*K2Node_Select_Default_3 = Parms.K2Node_Select_Default_3;

	if (K2Node_Select_Default_4 != nullptr)
		*K2Node_Select_Default_4 = Parms.K2Node_Select_Default_4;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetCharacterPresetsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMenuCharacterLevelPreset>CharacterPresetLevel                                             (ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMenuCharacterPresetItems>CharacterPresetItem                                              (Edit, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Success                                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)

TArray<struct FCheatMenuCharacterLevelPreset> UCheatMenu_C::GetCharacterPresetsForEntry(int32* ScreenTracker, const TArray<struct FCheatMenuCharacterPresetItems>& CharacterPresetItem, bool* Success, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetCharacterPresetsForEntry");

	Params::UCheatMenu_C_GetCharacterPresetsForEntry_Params Parms{};

	Parms.CharacterPresetItem = CharacterPresetItem;

	UObject::ProcessEvent(Func, &Parms);

	if (ScreenTracker != nullptr)
		*ScreenTracker = Parms.ScreenTracker;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetCheatListsForEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CheatStrings                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<bool>                       RequireConfirm                                                   (OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               AllowAdditionalString                                            (ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Success                                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossNames                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossCheats                            (ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)

TArray<class FString> UCheatMenu_C::GetCheatListsForEntry(int32* ScreenTracker, const TArray<class FString>& CheatStrings, TArray<bool>* RequireConfirm, bool* Success, const TArray<class FString>& CallFunc_GetBossSpawnArray_BossCheats, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetCheatListsForEntry");

	Params::UCheatMenu_C_GetCheatListsForEntry_Params Parms{};

	Parms.CheatStrings = CheatStrings;
	Parms.CallFunc_GetBossSpawnArray_BossCheats = CallFunc_GetBossSpawnArray_BossCheats;

	UObject::ProcessEvent(Func, &Parms);

	if (ScreenTracker != nullptr)
		*ScreenTracker = Parms.ScreenTracker;

	if (RequireConfirm != nullptr)
		*RequireConfirm = std::move(Parms.RequireConfirm);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetEggListsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>DinoEggBlueprintIDs                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>DinoFertEggBlueprintIDs                                          (ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Success                                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)

void UCheatMenu_C::GetEggListsForEntry(int32* ScreenTracker, TArray<TSoftClassPtr<class UPrimalItem>>* DinoEggBlueprintIDs, TArray<TSoftClassPtr<class UPrimalItem>>* DinoFertEggBlueprintIDs, bool* Success, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetEggListsForEntry");

	Params::UCheatMenu_C_GetEggListsForEntry_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ScreenTracker != nullptr)
		*ScreenTracker = Parms.ScreenTracker;

	if (DinoEggBlueprintIDs != nullptr)
		*DinoEggBlueprintIDs = std::move(Parms.DinoEggBlueprintIDs);

	if (DinoFertEggBlueprintIDs != nullptr)
		*DinoFertEggBlueprintIDs = std::move(Parms.DinoFertEggBlueprintIDs);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_2 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2;

}


// Function CheatMenu.CheatMenu_C.GetDinoListsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class APrimalDinoCharacter>>Dinos                                                            (Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>Saddles                                                          (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Success                                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_6                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_7                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, EditorOnly)

void UCheatMenu_C::GetDinoListsForEntry(int32* ScreenTracker, const TArray<TSoftClassPtr<class APrimalDinoCharacter>>& Dinos, const TArray<TSoftClassPtr<class UPrimalItem>>& Saddles, bool* Success, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue_3, bool* CallFunc_EqualEqual_IntInt_ReturnValue_4, bool* CallFunc_EqualEqual_IntInt_ReturnValue_5, bool* CallFunc_EqualEqual_IntInt_ReturnValue_6, bool* CallFunc_EqualEqual_IntInt_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetDinoListsForEntry");

	Params::UCheatMenu_C_GetDinoListsForEntry_Params Parms{};

	Parms.Dinos = Dinos;
	Parms.Saddles = Saddles;

	UObject::ProcessEvent(Func, &Parms);

	if (ScreenTracker != nullptr)
		*ScreenTracker = Parms.ScreenTracker;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_2 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_3 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_3 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_4 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_4 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_5 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_5 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_6 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_6 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_6;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_7 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_7 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_7;

}


// Function CheatMenu.CheatMenu_C.CreateCharacterPresetEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// int32                              ArrayIndex                                                       (Edit, BlueprintVisible, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FCheatMenuCharacterLevelPreset>LevelLists                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMenuCharacterPresetItems>ItemLists                                                        (BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FCheatMenuCharacterPresetItemsCallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FCheatMenuCharacterLevelPresetCallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateButtonFromCharacterPresets_CreatedWidget          (Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

class UUI_DebugSpawnMenuEntry* UCheatMenu_C::CreateCharacterPresetEntry(const class FString& InString, int32 ArrayIndex, class FText* CallFunc_Conv_StringToText_ReturnValue, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateCharacterPresetEntry");

	Params::UCheatMenu_C_CreateCharacterPresetEntry_Params Parms{};

	Parms.InString = InString;
	Parms.ArrayIndex = ArrayIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateCheatEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              ArrayIndex                                                       (Edit, BlueprintVisible, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// TArray<bool>                       ArrayConfirm                                                     (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               AllowAdditionalString                                            (ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateCheatButtonFromBlueprintID_CreatedWidget          (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

class UUI_DebugSpawnMenuEntry* UCheatMenu_C::CreateCheatEntry(class FString* Name, int32 ArrayIndex, TArray<class FString>* Array, TArray<bool>* ArrayConfirm, bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, bool* K2Node_Select_Default, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateCheatEntry");

	Params::UCheatMenu_C_CreateCheatEntry_Params Parms{};

	Parms.ArrayIndex = ArrayIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

	if (ArrayConfirm != nullptr)
		*ArrayConfirm = std::move(Parms.ArrayConfirm);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateEggEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              ArrayIndex                                                       (Edit, BlueprintVisible, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>UnFertEggs                                                       (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>FertEggs                                                         (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      Temp_string_Variable                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue_1                 (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
// bool                               CallFunc_BooleanXOR_ReturnValue                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// class FString                      K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

class FString UCheatMenu_C::CreateEggEntry(class FString* Name, int32 ArrayIndex, bool CallFunc_BooleanXOR_ReturnValue, bool* Temp_bool_Variable, class FString* K2Node_Select_Default, class UUI_DebugSpawnMenuEntry** CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateEggEntry");

	Params::UCheatMenu_C_CreateEggEntry_Params Parms{};

	Parms.ArrayIndex = ArrayIndex;
	Parms.CallFunc_BooleanXOR_ReturnValue = CallFunc_BooleanXOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget != nullptr)
		*CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget = Parms.CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateDinoEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// int32                              ArrayIndex                                                       (Edit, BlueprintVisible, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<TSoftClassPtr<class APrimalDinoCharacter>>DinoBPList                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>DinoSaddleList                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TSoftClassPtr<class APrimalDinoCharacter>CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UCheatMenuButton_C*          CallFunc_CreateDinoButtonAndSetText_CreatedButton                (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

bool UCheatMenu_C::CreateDinoEntry(class FString* Text, int32 ArrayIndex, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateDinoEntry");

	Params::UCheatMenu_C_CreateDinoEntry_Params Parms{};

	Parms.ArrayIndex = ArrayIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.SetupOptionBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UCheatMenu_C::SetupOptionBar(class FText* CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "SetupOptionBar");

	Params::UCheatMenu_C_SetupOptionBar_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_IntToText_ReturnValue != nullptr)
		*CallFunc_Conv_IntToText_ReturnValue = Parms.CallFunc_Conv_IntToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateButtonFromCharacterPresets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (ConstParm, Net, OutParm)
// struct FCheatMenuCharacterLevelPresetLevels                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FCheatMenuCharacterPresetItemsItems                                                            (ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UCheatMenuCharacterPresetsButton_C*CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

class UCheatMenuCharacterPresetsButton_C* UCheatMenu_C::CreateButtonFromCharacterPresets(class FText* Name, struct FCheatMenuCharacterPresetItems* Items, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateButtonFromCharacterPresets");

	Params::UCheatMenu_C_CreateButtonFromCharacterPresets_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

	if (Items != nullptr)
		*Items = std::move(Parms.Items);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateFolderButtons
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (ConstParm, Net, OutParm)
// int32                              ScreenNumber                                                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UTexture2D*                  Image                                                            (Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// class UUI_DebugSpawnMenuEntry*     OutWidget                                                        (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UCheatMenuFolderButton_C*    CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

class UCheatMenuFolderButton_C* UCheatMenu_C::CreateFolderButtons(class FText* Name, int32* ScreenNumber, class UUI_DebugSpawnMenuEntry** OutWidget, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateFolderButtons");

	Params::UCheatMenu_C_CreateFolderButtons_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

	if (ScreenNumber != nullptr)
		*ScreenNumber = Parms.ScreenNumber;

	if (OutWidget != nullptr)
		*OutWidget = Parms.OutWidget;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateCheatButtonFromBlueprintID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FString                      Cheat                                                            (ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// bool                               RequireConfirm                                                   (OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Allow_Additional_String                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UCheatMenuCheatButton_C*     CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

class UCheatMenuCheatButton_C* UCheatMenu_C::CreateCheatButtonFromBlueprintID(class FString* Name, bool* RequireConfirm, class FText* CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateCheatButtonFromBlueprintID");

	Params::UCheatMenu_C_CreateCheatButtonFromBlueprintID_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (RequireConfirm != nullptr)
		*RequireConfirm = Parms.RequireConfirm;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateEggItemButtonFromBlueprintIDs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// TSoftClassPtr<class UPrimalItem>   UnFertilizedEgg                                                  (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   FertilizedEgg                                                    (Edit, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// class UClass*                      K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UCheatMenuEggButton_C*       CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UCheatMenu_C::CreateEggItemButtonFromBlueprintIDs(class FString* Name, TSoftClassPtr<class UPrimalItem> FertilizedEgg, bool* Temp_bool_Variable, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue, class UClass** K2Node_Select_Default, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool K2Node_ClassDynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateEggItemButtonFromBlueprintIDs");

	Params::UCheatMenu_C_CreateEggItemButtonFromBlueprintIDs_Params Parms{};

	Parms.FertilizedEgg = FertilizedEgg;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.CallFunc_ClassAssetResolve_ReturnValue_1 = CallFunc_ClassAssetResolve_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Item = K2Node_ClassDynamicCast_AsPrimal_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateItemButtonFromBlueprintID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UPrimalItem>   Blueprint                                                        (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, GlobalConfig, InstancedReference, DuplicateTransient)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UCheatMenuItemButton_C*      CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

class UCheatMenuItemButton_C* UCheatMenu_C::CreateItemButtonFromBlueprintID(TSoftClassPtr<class UPrimalItem> Blueprint, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool K2Node_ClassDynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateItemButtonFromBlueprintID");

	Params::UCheatMenu_C_CreateItemButtonFromBlueprintID_Params Parms{};

	Parms.Blueprint = Blueprint;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Item = K2Node_ClassDynamicCast_AsPrimal_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateItemButtonAndSetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ItemName                                                         (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      ItemSpawnString                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuButton_C*          CreatedButton                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UCheatMenuItemButton_C*      CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

class UCheatMenuItemButton_C* UCheatMenu_C::CreateItemButtonAndSetText(class FString* ItemSpawnString, class UCheatMenuButton_C* CreatedButton, class FText* CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateItemButtonAndSetText");

	Params::UCheatMenu_C_CreateItemButtonAndSetText_Params Parms{};

	Parms.CreatedButton = CreatedButton;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemSpawnString != nullptr)
		*ItemSpawnString = std::move(Parms.ItemSpawnString);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateDinoButtonAndSetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// TSoftClassPtr<class APrimalDinoCharacter>DinoBP                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   Saddle                                                           (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UCheatMenuButton_C*          CreatedButton                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UCheatMenuButton_C*          CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

class UCheatMenuButton_C* UCheatMenu_C::CreateDinoButtonAndSetText(class FString* Text, TSoftClassPtr<class APrimalDinoCharacter> DinoBP, class UCheatMenuButton_C* CreatedButton, class FText* CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateDinoButtonAndSetText");

	Params::UCheatMenu_C_CreateDinoButtonAndSetText_Params Parms{};

	Parms.DinoBP = DinoBP;
	Parms.CreatedButton = CreatedButton;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

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
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

enum class ETextCommit UCheatMenu_C::BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

enum class ETextCommit UCheatMenu_C::BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

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
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

enum class ETextCommit UCheatMenu_C::BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.Screen Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ToScreen                                                         (ConstParm, Net, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

int32 UCheatMenu_C::Screen_Changed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "Screen Changed");

	Params::UCheatMenu_C_Screen_Changed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// bool                               bIsChecked                                                       (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

bool UCheatMenu_C::BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

bool UCheatMenu_C::BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)

void UCheatMenu_C::BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// TArray<class FString>              Temp_string_Variable                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_1                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp)
// TArray<class FString>              Temp_string_Variable_2                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// TArray<class FString>              Temp_string_Variable_3                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// TArray<class FString>              Temp_string_Variable_4                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// TArray<class FString>              Temp_string_Variable_5                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// TArray<class FString>              Temp_string_Variable_6                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// TArray<class FString>              Temp_string_Variable_7                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, EditorOnly)
// TArray<class FString>              Temp_string_Variable_8                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// TArray<class FString>              Temp_string_Variable_9                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, EditorOnly)
// TArray<class FString>              Temp_string_Variable_10                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// TArray<class FString>              Temp_string_Variable_11                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
// TArray<class FString>              Temp_string_Variable_12                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// TArray<class FString>              Temp_string_Variable_13                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// TArray<class FString>              Temp_string_Variable_14                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// TArray<class FString>              Temp_string_Variable_15                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, NoDestructor)
// TArray<class FString>              Temp_string_Variable_16                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NoDestructor)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable                                          (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_1                                        (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_2                                        (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_3                                        (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_4                                        (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_5                                        (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_6                                        (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_7                                        (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_8                                        (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_9                                        (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_10                                       (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_11                                       (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_12                                       (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_13                                       (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_14                                       (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_15                                       (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NoDestructor)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ECheckBoxState          Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ECheckBoxState          Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_17                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, NoDestructor)
// TArray<class FString>              Temp_string_Variable_18                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// TArray<class FString>              Temp_string_Variable_19                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, NonTransactional, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_3                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// TArray<class FString>              Temp_string_Variable_20                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// TArray<class FString>              Temp_string_Variable_21                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text_3                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_2                        (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_Text_2                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_1                        (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_2                          (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable_4                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class UUI_DebugSpawnMenuEntry*     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              K2Node_CustomEvent_ToScreen                                      (ExportObject, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class FText                        CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateFolderButtons_outWidget                           (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// TArray<class FString>              Temp_string_Variable_22                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// enum class ECheckBoxState          K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// TArray<class FString>              Temp_string_Variable_23                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, EditorOnly, NoDestructor)
// enum class ECheatMenuOptionTypes   CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// TArray<TSoftClassPtr<class APrimalDinoCharacter>>CallFunc_GetDinoListsForEntry_Dinos                              (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>CallFunc_GetDinoListsForEntry_Saddles                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetDinoListsForEntry_Success                            (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs                 (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetEggListsForEntry_Success                             (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CallFunc_GetCheatListsForEntry_CheatStrings                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<bool>                       CallFunc_GetCheatListsForEntry_RequireConfirm                    (Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetCheatListsForEntry_AllowAdditionalString             (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetCheatListsForEntry_Success                           (Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMenuCharacterLevelPreset>CallFunc_GetCharacterPresetsForEntry_CharacterPresetLevel        (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMenuCharacterPresetItems>CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem         (BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetCharacterPresetsForEntry_Success                     (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_24                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// TArray<struct FCheatMapJumpInfo>   CallFunc_GetMapJumpListForEntry_MapJumps                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetMapJumpListForEntry_Success                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// TArray<class FString>              CallFunc_GetMapJumpArray_EmptyStringArray                        (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_25                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, EditorOnly, NoDestructor)
// TArray<class FString>              CallFunc_GetMapOpenListsForEntry_CheatStrings                    (Edit, ConstParm, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetMapOpenListsForEntry_Success                         (BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UTexture2D*                  CallFunc_Array_Get_Item_4                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateFolderButtons_outWidget_1                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_26                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// class FString                      CallFunc_Array_Get_Item_5                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossNames                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossCheats                            (ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
// TArray<TSoftClassPtr<class UPrimalItem>>K2Node_Select_Default_2                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item_6                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateItemButtonFromBlueprintID_CreatedWidget           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// int32                              Temp_int_Variable_1                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
// TArray<class FString>              K2Node_Select_Default_3                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Contains_ReturnValue                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_7                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Len_ReturnValue                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)

bool UCheatMenu_C::ExecuteUbergraph_CheatMenu(bool* Temp_bool_Variable, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, enum class ECheckBoxState* Temp_byte_Variable, enum class ECheckBoxState* Temp_byte_Variable_1, bool* Temp_bool_Variable_1, enum class ESlateVisibility* Temp_byte_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_3, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_2, class FString* CallFunc_Conv_TextToString_ReturnValue, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_1, int32 CallFunc_Conv_StringToInt_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FText* CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, class FText* CallFunc_Conv_IntToText_ReturnValue_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FString* CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Conv_StringToInt_ReturnValue_2, class FText* CallFunc_Conv_IntToText_ReturnValue_2, int32* K2Node_CustomEvent_ToScreen, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* K2Node_ComponentBoundEvent_bIsChecked_1, bool* K2Node_ComponentBoundEvent_bIsChecked, enum class ECheckBoxState* K2Node_Select_Default, enum class ESlateVisibility* K2Node_Select_Default_1, bool* CallFunc_GetEggListsForEntry_Success, TArray<class FString>* CallFunc_GetCheatListsForEntry_CheatStrings, TArray<bool>* CallFunc_GetCheatListsForEntry_RequireConfirm, bool CallFunc_GetCharacterPresetsForEntry_Success, bool CallFunc_GetMapJumpListForEntry_Success, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, TArray<class FString>* CallFunc_GetMapJumpArray_EmptyStringArray, const TArray<class FString>& CallFunc_GetMapOpenListsForEntry_CheatStrings, int32* CallFunc_Array_Add_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, const TArray<class FString>& CallFunc_GetBossSpawnArray_BossCheats, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2, TArray<TSoftClassPtr<class UPrimalItem>>* K2Node_Select_Default_2, class FString* CallFunc_Conv_TextToString_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_1, TArray<class FString>* K2Node_Select_Default_3, bool CallFunc_Contains_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "ExecuteUbergraph_CheatMenu");

	Params::UCheatMenu_C_ExecuteUbergraph_CheatMenu_Params Parms{};

	Parms.K2Node_ComponentBoundEvent_CommitMethod_2 = K2Node_ComponentBoundEvent_CommitMethod_2;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_1 = K2Node_ComponentBoundEvent_CommitMethod_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_2 = CallFunc_Conv_StringToInt_ReturnValue_2;
	Parms.CallFunc_GetCharacterPresetsForEntry_Success = CallFunc_GetCharacterPresetsForEntry_Success;
	Parms.CallFunc_GetMapJumpListForEntry_Success = CallFunc_GetMapJumpListForEntry_Success;
	Parms.CallFunc_GetMapOpenListsForEntry_CheatStrings = CallFunc_GetMapOpenListsForEntry_CheatStrings;
	Parms.CallFunc_GetBossSpawnArray_BossCheats = CallFunc_GetBossSpawnArray_BossCheats;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (Temp_byte_Variable_2 != nullptr)
		*Temp_byte_Variable_2 = Parms.Temp_byte_Variable_2;

	if (Temp_byte_Variable_3 != nullptr)
		*Temp_byte_Variable_3 = Parms.Temp_byte_Variable_3;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	if (CallFunc_Conv_IntToText_ReturnValue != nullptr)
		*CallFunc_Conv_IntToText_ReturnValue = Parms.CallFunc_Conv_IntToText_ReturnValue;

	if (CallFunc_Conv_IntToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_IntToText_ReturnValue_1 = Parms.CallFunc_Conv_IntToText_ReturnValue_1;

	if (CallFunc_Conv_TextToString_ReturnValue_2 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_2 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_2);

	if (CallFunc_Conv_IntToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_IntToText_ReturnValue_2 = Parms.CallFunc_Conv_IntToText_ReturnValue_2;

	if (K2Node_CustomEvent_ToScreen != nullptr)
		*K2Node_CustomEvent_ToScreen = Parms.K2Node_CustomEvent_ToScreen;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (K2Node_ComponentBoundEvent_bIsChecked_1 != nullptr)
		*K2Node_ComponentBoundEvent_bIsChecked_1 = Parms.K2Node_ComponentBoundEvent_bIsChecked_1;

	if (K2Node_ComponentBoundEvent_bIsChecked != nullptr)
		*K2Node_ComponentBoundEvent_bIsChecked = Parms.K2Node_ComponentBoundEvent_bIsChecked;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (CallFunc_GetEggListsForEntry_Success != nullptr)
		*CallFunc_GetEggListsForEntry_Success = Parms.CallFunc_GetEggListsForEntry_Success;

	if (CallFunc_GetCheatListsForEntry_CheatStrings != nullptr)
		*CallFunc_GetCheatListsForEntry_CheatStrings = std::move(Parms.CallFunc_GetCheatListsForEntry_CheatStrings);

	if (CallFunc_GetCheatListsForEntry_RequireConfirm != nullptr)
		*CallFunc_GetCheatListsForEntry_RequireConfirm = std::move(Parms.CallFunc_GetCheatListsForEntry_RequireConfirm);

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_GetMapJumpArray_EmptyStringArray != nullptr)
		*CallFunc_GetMapJumpArray_EmptyStringArray = std::move(Parms.CallFunc_GetMapJumpArray_EmptyStringArray);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_2 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = std::move(Parms.K2Node_Select_Default_2);

	if (CallFunc_Conv_TextToString_ReturnValue_3 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_3 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_3);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue_1 != nullptr)
		*CallFunc_Array_Add_ReturnValue_1 = Parms.CallFunc_Array_Add_ReturnValue_1;

	if (K2Node_Select_Default_3 != nullptr)
		*K2Node_Select_Default_3 = std::move(Parms.K2Node_Select_Default_3);

	if (CallFunc_EqualEqual_IntInt_ReturnValue_3 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_3 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3;

	return Parms.ReturnValue;

}

}


