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
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_CloseSpawnMenu_ReturnValue                              (Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

bool UCheatMenu_C::BPEscapeClosed(bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BPEscapeClosed");

	Params::UCheatMenu_C_BPEscapeClosed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.ClearFilter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldRefresh                                                    (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

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
// TArray<class FString>              BossNames                                                        (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              BossCheats                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue                                (ExportObject, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

TArray<class FString> UCheatMenu_C::GetBossSpawnArray(class UWorld* CallFunc_GetGameWorld_ReturnValue, class FString* CallFunc_GetObjectName_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetBossSpawnArray");

	Params::UCheatMenu_C_GetBossSpawnArray_Params Parms{};

	Parms.CallFunc_GetGameWorld_ReturnValue = CallFunc_GetGameWorld_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetObjectName_ReturnValue != nullptr)
		*CallFunc_GetObjectName_ReturnValue = std::move(Parms.CallFunc_GetObjectName_ReturnValue);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_CloseSpawnMenu_ReturnValue                              (Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

bool UCheatMenu_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CloseMenu");

	Params::UCheatMenu_C_CloseMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetMapOpenListsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CheatStrings                                                     (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               Success                                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)

TArray<class FString> UCheatMenu_C::GetMapOpenListsForEntry(int32 ScreenTracker, bool* Success, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetMapOpenListsForEntry");

	Params::UCheatMenu_C_GetMapOpenListsForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateMapOpenButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FName                        MapName                                                          (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuMapOpenButton_C*   CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

class APlayerController* UCheatMenu_C::CreateMapOpenButton(class FString* Name, class UUI_DebugSpawnMenuEntry** CreatedWidget, class UCheatMenuMapOpenButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapOpenButton");

	Params::UCheatMenu_C_CreateMapOpenButton_Params Parms{};

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
// int32                              ArrayIndex                                                       (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// class FString                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateMapOpenButton_CreatedWidget                       (ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

int32 UCheatMenu_C::CreateMapOpenEntry(class FString* Name, TArray<class FString>* Array, const class FString& CallFunc_Array_Get_Item, class UUI_DebugSpawnMenuEntry** CallFunc_CreateMapOpenButton_CreatedWidget)
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

	if (CallFunc_CreateMapOpenButton_CreatedWidget != nullptr)
		*CallFunc_CreateMapOpenButton_CreatedWidget = Parms.CallFunc_CreateMapOpenButton_CreatedWidget;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetMapJumpArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              EmptyStringArray                                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class FString>              Temp_wildcard_Variable                                           (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<struct FCheatMapJumpInfo>   CallFunc_GetMapJumpListForEntry_MapJumps                         (Edit, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetMapJumpListForEntry_Success                          (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      Temp_string_Variable                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

int32 UCheatMenu_C::GetMapJumpArray(const TArray<class FString>& EmptyStringArray, int32* Temp_int_Variable, const TArray<class FString>& Temp_wildcard_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& Temp_string_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetMapJumpArray");

	Params::UCheatMenu_C_GetMapJumpArray_Params Parms{};

	Parms.EmptyStringArray = EmptyStringArray;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateMapJumpButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCheatMapJumpInfo           Cheat                                                            (ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UCheatMapJumpButton_C*       CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

class FText UCheatMenu_C::CreateMapJumpButton(class UUI_DebugSpawnMenuEntry** CreatedWidget, class UCheatMapJumpButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapJumpButton");

	Params::UCheatMenu_C_CreateMapJumpButton_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateMapJumpEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ArrayIndex                                                       (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FCheatMapJumpInfo>   MapJumps                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FCheatMapJumpInfo           CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateMapJumpButton_CreatedWidget                       (Edit, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

int32 UCheatMenu_C::CreateMapJumpEntry(const TArray<struct FCheatMapJumpInfo>& MapJumps, const struct FCheatMapJumpInfo& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapJumpEntry");

	Params::UCheatMenu_C_CreateMapJumpEntry_Params Parms{};

	Parms.MapJumps = MapJumps;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetMapJumpListForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMapJumpInfo>   MapJumps                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               Success                                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue                                (ExportObject, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

void UCheatMenu_C::GetMapJumpListForEntry(int32 ScreenTracker, const TArray<struct FCheatMapJumpInfo>& MapJumps, bool* Success, class UWorld* CallFunc_GetGameWorld_ReturnValue, class FString* CallFunc_GetObjectName_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetMapJumpListForEntry");

	Params::UCheatMenu_C_GetMapJumpListForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;
	Parms.MapJumps = MapJumps;
	Parms.CallFunc_GetGameWorld_ReturnValue = CallFunc_GetGameWorld_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (CallFunc_GetObjectName_ReturnValue != nullptr)
		*CallFunc_GetObjectName_ReturnValue = std::move(Parms.CallFunc_GetObjectName_ReturnValue);

}


// Function CheatMenu.CheatMenu_C.AddAllEntriesButtonForItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftClassPtr<class UPrimalItem>>Items                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class UCheatMenuItemAllButton_C*   CallFunc_CreateButtonFromAllEntries_ReturnValue                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// enum class ECheatMenuOptionTypes   CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UCheatMenu_C::AddAllEntriesButtonForItems(class UCheatMenuItemAllButton_C* CallFunc_CreateButtonFromAllEntries_ReturnValue, enum class ECheatMenuOptionTypes CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "AddAllEntriesButtonForItems");

	Params::UCheatMenu_C_AddAllEntriesButtonForItems_Params Parms{};

	Parms.CallFunc_CreateButtonFromAllEntries_ReturnValue = CallFunc_CreateButtonFromAllEntries_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateButtonFromAllEntries
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftClassPtr<class UPrimalItem>>Items                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class UCheatMenuItemAllButton_C*   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class UCheatMenuItemAllButton_C*   CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

class UCheatMenuItemAllButton_C* UCheatMenu_C::CreateButtonFromAllEntries(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCheatMenuItemAllButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateButtonFromAllEntries");

	Params::UCheatMenu_C_CreateButtonFromAllEntries_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

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
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_2                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               Temp_bool_Variable_3                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// bool                               Temp_bool_Variable_4                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
// enum class ECheatMenuOptionTypes   CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)

bool UCheatMenu_C::SetupOptionsBarForFolder(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ECheatMenuOptionTypes CallFunc_Array_Get_Item, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "SetupOptionsBarForFolder");

	Params::UCheatMenu_C_SetupOptionsBarForFolder_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetCharacterPresetsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMenuCharacterLevelPreset>CharacterPresetLevel                                             (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMenuCharacterPresetItems>CharacterPresetItem                                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
// bool                               Success                                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)

TArray<struct FCheatMenuCharacterPresetItems> UCheatMenu_C::GetCharacterPresetsForEntry(int32 ScreenTracker, const TArray<struct FCheatMenuCharacterLevelPreset>& CharacterPresetLevel, bool* Success, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetCharacterPresetsForEntry");

	Params::UCheatMenu_C_GetCharacterPresetsForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;
	Parms.CharacterPresetLevel = CharacterPresetLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetCheatListsForEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CheatStrings                                                     (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// TArray<bool>                       RequireConfirm                                                   (Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               AllowAdditionalString                                            (ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Success                                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossNames                             (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossCheats                            (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)

TArray<class FString> UCheatMenu_C::GetCheatListsForEntry(int32 ScreenTracker, bool AllowAdditionalString, bool* Success, const TArray<class FString>& CallFunc_GetBossSpawnArray_BossNames, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetCheatListsForEntry");

	Params::UCheatMenu_C_GetCheatListsForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;
	Parms.AllowAdditionalString = AllowAdditionalString;
	Parms.CallFunc_GetBossSpawnArray_BossNames = CallFunc_GetBossSpawnArray_BossNames;

	UObject::ProcessEvent(Func, &Parms);

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
// int32                              ScreenTracker                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>DinoEggBlueprintIDs                                              (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>DinoFertEggBlueprintIDs                                          (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Success                                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)

TArray<TSoftClassPtr<class UPrimalItem>> UCheatMenu_C::GetEggListsForEntry(int32 ScreenTracker, bool* Success, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetEggListsForEntry");

	Params::UCheatMenu_C_GetEggListsForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_2 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetDinoListsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class APrimalDinoCharacter>>Dinos                                                            (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>Saddles                                                          (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Success                                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_6                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_7                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, EditorOnly)

TArray<TSoftClassPtr<class UPrimalItem>> UCheatMenu_C::GetDinoListsForEntry(int32 ScreenTracker, bool* Success, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue_3, bool* CallFunc_EqualEqual_IntInt_ReturnValue_4, bool* CallFunc_EqualEqual_IntInt_ReturnValue_5, bool* CallFunc_EqualEqual_IntInt_ReturnValue_6, bool* CallFunc_EqualEqual_IntInt_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetDinoListsForEntry");

	Params::UCheatMenu_C_GetDinoListsForEntry_Params Parms{};

	Parms.ScreenTracker = ScreenTracker;

	UObject::ProcessEvent(Func, &Parms);

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

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateCharacterPresetEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (ExportObject, OutParm, Config, EditConst, SubobjectReference)
// int32                              ArrayIndex                                                       (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FCheatMenuCharacterLevelPreset>LevelLists                                                       (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMenuCharacterPresetItems>ItemLists                                                        (Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FCheatMenuCharacterPresetItemsCallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// struct FCheatMenuCharacterLevelPresetCallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateButtonFromCharacterPresets_CreatedWidget          (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

int32 UCheatMenu_C::CreateCharacterPresetEntry(class FString* InString, TArray<struct FCheatMenuCharacterLevelPreset>* LevelLists, TArray<struct FCheatMenuCharacterPresetItems>* ItemLists, const struct FCheatMenuCharacterPresetItems& CallFunc_Array_Get_Item, const struct FCheatMenuCharacterLevelPreset& CallFunc_Array_Get_Item_1, class UUI_DebugSpawnMenuEntry* CallFunc_CreateButtonFromCharacterPresets_CreatedWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateCharacterPresetEntry");

	Params::UCheatMenu_C_CreateCharacterPresetEntry_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_CreateButtonFromCharacterPresets_CreatedWidget = CallFunc_CreateButtonFromCharacterPresets_CreatedWidget;

	UObject::ProcessEvent(Func, &Parms);

	if (InString != nullptr)
		*InString = std::move(Parms.InString);

	if (LevelLists != nullptr)
		*LevelLists = std::move(Parms.LevelLists);

	if (ItemLists != nullptr)
		*ItemLists = std::move(Parms.ItemLists);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateCheatEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              ArrayIndex                                                       (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// TArray<bool>                       ArrayConfirm                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               AllowAdditionalString                                            (ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateCheatButtonFromBlueprintID_CreatedWidget          (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

int32 UCheatMenu_C::CreateCheatEntry(class FString* Name, TArray<class FString>* Array, bool AllowAdditionalString, bool Temp_bool_Variable, bool CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, bool Temp_bool_Variable_1, bool K2Node_Select_Default, class UUI_DebugSpawnMenuEntry* CallFunc_CreateCheatButtonFromBlueprintID_CreatedWidget)
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

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateEggEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              ArrayIndex                                                       (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>UnFertEggs                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>FertEggs                                                         (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      Temp_string_Variable                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_1                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue_1                 (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanXOR_ReturnValue                                  (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

int32 UCheatMenu_C::CreateEggEntry(class FString* Name, const TArray<TSoftClassPtr<class UPrimalItem>>& UnFertEggs, TArray<TSoftClassPtr<class UPrimalItem>>* FertEggs, const class FString& Temp_string_Variable, TSoftClassPtr<class UPrimalItem> CallFunc_Array_Get_Item, bool* CallFunc_IsValidSoftClassReference_ReturnValue, TSoftClassPtr<class UPrimalItem> CallFunc_Array_Get_Item_1, const class FString& Temp_string_Variable_1, bool* CallFunc_IsValidSoftClassReference_ReturnValue_1, bool* CallFunc_BooleanXOR_ReturnValue, bool Temp_bool_Variable, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UUI_DebugSpawnMenuEntry* CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateEggEntry");

	Params::UCheatMenu_C_CreateEggEntry_Params Parms{};

	Parms.UnFertEggs = UnFertEggs;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget = CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (FertEggs != nullptr)
		*FertEggs = std::move(Parms.FertEggs);

	if (CallFunc_IsValidSoftClassReference_ReturnValue != nullptr)
		*CallFunc_IsValidSoftClassReference_ReturnValue = Parms.CallFunc_IsValidSoftClassReference_ReturnValue;

	if (CallFunc_IsValidSoftClassReference_ReturnValue_1 != nullptr)
		*CallFunc_IsValidSoftClassReference_ReturnValue_1 = Parms.CallFunc_IsValidSoftClassReference_ReturnValue_1;

	if (CallFunc_BooleanXOR_ReturnValue != nullptr)
		*CallFunc_BooleanXOR_ReturnValue = Parms.CallFunc_BooleanXOR_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateDinoEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// int32                              ArrayIndex                                                       (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<TSoftClassPtr<class APrimalDinoCharacter>>DinoBPList                                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>DinoSaddleList                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// TSoftClassPtr<class APrimalDinoCharacter>CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class UCheatMenuButton_C*          CallFunc_CreateDinoButtonAndSetText_CreatedButton                (BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

int32 UCheatMenu_C::CreateDinoEntry(const TArray<TSoftClassPtr<class APrimalDinoCharacter>>& DinoBPList, TArray<TSoftClassPtr<class UPrimalItem>>* DinoSaddleList, TSoftClassPtr<class UPrimalItem> CallFunc_Array_Get_Item, TSoftClassPtr<class APrimalDinoCharacter> CallFunc_Array_Get_Item_1, class UCheatMenuButton_C* CallFunc_CreateDinoButtonAndSetText_CreatedButton, bool* CallFunc_IsValidSoftClassReference_ReturnValue)
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

	if (CallFunc_IsValidSoftClassReference_ReturnValue != nullptr)
		*CallFunc_IsValidSoftClassReference_ReturnValue = Parms.CallFunc_IsValidSoftClassReference_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.SetupOptionBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

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
// struct FCheatMenuCharacterLevelPresetLevels                                                           (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// struct FCheatMenuCharacterPresetItemsItems                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuCharacterPresetsButton_C*CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UCheatMenu_C::CreateButtonFromCharacterPresets(class FText* Name, struct FCheatMenuCharacterLevelPreset* Levels, class UUI_DebugSpawnMenuEntry** CreatedWidget, class UCheatMenuCharacterPresetsButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateButtonFromCharacterPresets");

	Params::UCheatMenu_C_CreateButtonFromCharacterPresets_Params Parms{};

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
// int32                              ScreenNumber                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UTexture2D*                  Image                                                            (Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class UUI_DebugSpawnMenuEntry*     OutWidget                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuFolderButton_C*    CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

class APlayerController* UCheatMenu_C::CreateFolderButtons(class FText* Name, int32 ScreenNumber, class UCheatMenuFolderButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateFolderButtons");

	Params::UCheatMenu_C_CreateFolderButtons_Params Parms{};

	Parms.ScreenNumber = ScreenNumber;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateCheatButtonFromBlueprintID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FString                      Cheat                                                            (ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)
// bool                               RequireConfirm                                                   (Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Allow_Additional_String                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuCheatButton_C*     CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

class APlayerController* UCheatMenu_C::CreateCheatButtonFromBlueprintID(class FString* Name, bool* Allow_Additional_String, class UUI_DebugSpawnMenuEntry** CreatedWidget, class UCheatMenuCheatButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateCheatButtonFromBlueprintID");

	Params::UCheatMenu_C_CreateCheatButtonFromBlueprintID_Params Parms{};

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
// TSoftClassPtr<class UPrimalItem>   UnFertilizedEgg                                                  (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   FertilizedEgg                                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue_1                         (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuEggButton_C*       CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool UCheatMenu_C::CreateEggItemButtonFromBlueprintIDs(class FString* Name, TSoftClassPtr<class UPrimalItem>* UnFertilizedEgg, class UUI_DebugSpawnMenuEntry** CreatedWidget, bool Temp_bool_Variable, class UClass* K2Node_Select_Default, class UCheatMenuEggButton_C* CallFunc_Create_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, class UPrimalItem** K2Node_DynamicCast_AsPrimal_Item, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateEggItemButtonFromBlueprintIDs");

	Params::UCheatMenu_C_CreateEggItemButtonFromBlueprintIDs_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (UnFertilizedEgg != nullptr)
		*UnFertilizedEgg = Parms.UnFertilizedEgg;

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

	if (CallFunc_GetClassDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetClassDefaultObject_ReturnValue = Parms.CallFunc_GetClassDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item = Parms.K2Node_DynamicCast_AsPrimal_Item;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateItemButtonFromBlueprintID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UPrimalItem>   Blueprint                                                        (ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuItemButton_C*      CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

class APlayerController* UCheatMenu_C::CreateItemButtonFromBlueprintID(class UUI_DebugSpawnMenuEntry** CreatedWidget, bool* CallFunc_IsValidSoftClassReference_ReturnValue, class UCheatMenuItemButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateItemButtonFromBlueprintID");

	Params::UCheatMenu_C_CreateItemButtonFromBlueprintID_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedWidget != nullptr)
		*CreatedWidget = Parms.CreatedWidget;

	if (CallFunc_IsValidSoftClassReference_ReturnValue != nullptr)
		*CallFunc_IsValidSoftClassReference_ReturnValue = Parms.CallFunc_IsValidSoftClassReference_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateItemButtonAndSetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ItemName                                                         (Edit, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      ItemSpawnString                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuButton_C*          CreatedButton                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuItemButton_C*      CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

class APlayerController* UCheatMenu_C::CreateItemButtonAndSetText(const class FString& ItemSpawnString, class UCheatMenuItemButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateItemButtonAndSetText");

	Params::UCheatMenu_C_CreateItemButtonAndSetText_Params Parms{};

	Parms.ItemSpawnString = ItemSpawnString;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateDinoButtonAndSetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// TSoftClassPtr<class APrimalDinoCharacter>DinoBP                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   Saddle                                                           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UCheatMenuButton_C*          CreatedButton                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuButton_C*          CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

class APlayerController* UCheatMenu_C::CreateDinoButtonAndSetText(TSoftClassPtr<class UPrimalItem>* Saddle, class UCheatMenuButton_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateDinoButtonAndSetText");

	Params::UCheatMenu_C_CreateDinoButtonAndSetText_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Saddle != nullptr)
		*Saddle = Parms.Saddle;

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
// class FText                        Text                                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

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
// class FText                        Text                                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

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
// class FText                        Text                                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

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
// int32                              ToScreen                                                         (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)

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
// bool                               bIsChecked                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// bool                               bIsChecked                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// class FText                        Text                                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// TArray<class FString>              Temp_string_Variable                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_1                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class FString>              Temp_string_Variable_2                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// TArray<class FString>              Temp_string_Variable_3                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// TArray<class FString>              Temp_string_Variable_4                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// TArray<class FString>              Temp_string_Variable_5                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// TArray<class FString>              Temp_string_Variable_6                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// TArray<class FString>              Temp_string_Variable_7                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// TArray<class FString>              Temp_string_Variable_8                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// TArray<class FString>              Temp_string_Variable_9                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// TArray<class FString>              Temp_string_Variable_10                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// TArray<class FString>              Temp_string_Variable_11                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// TArray<class FString>              Temp_string_Variable_12                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// TArray<class FString>              Temp_string_Variable_13                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// TArray<class FString>              Temp_string_Variable_14                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// TArray<class FString>              Temp_string_Variable_15                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
// TArray<class FString>              Temp_string_Variable_16                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable                                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_1                                        (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_2                                        (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_3                                        (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_4                                        (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_5                                        (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_6                                        (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_7                                        (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_8                                        (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_9                                        (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_10                                       (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_11                                       (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_12                                       (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_13                                       (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_14                                       (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_15                                       (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NoDestructor)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// enum class ECheckBoxState          Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ECheckBoxState          Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_17                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// TArray<class FString>              Temp_string_Variable_18                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// TArray<class FString>              Temp_string_Variable_19                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_3                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// TArray<class FString>              Temp_string_Variable_20                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// TArray<class FString>              Temp_string_Variable_21                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text_3                                (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_2                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_Text_2                                (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_1                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_2                          (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable_4                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// class UUI_DebugSpawnMenuEntry*     CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              K2Node_CustomEvent_ToScreen                                      (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateFolderButtons_outWidget                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// TArray<class FString>              Temp_string_Variable_22                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (Edit, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (Edit, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// enum class ECheckBoxState          K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// TArray<class FString>              Temp_string_Variable_23                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
// enum class ECheatMenuOptionTypes   CallFunc_Array_Get_Item_3                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class APrimalDinoCharacter>>CallFunc_GetDinoListsForEntry_Dinos                              (BlueprintVisible, BlueprintReadOnly, OutParm, EditConst, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>CallFunc_GetDinoListsForEntry_Saddles                            (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetDinoListsForEntry_Success                            (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs                 (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs             (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetEggListsForEntry_Success                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, SubobjectReference)
// TArray<class FString>              CallFunc_GetCheatListsForEntry_CheatStrings                      (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<bool>                       CallFunc_GetCheatListsForEntry_RequireConfirm                    (ConstParm, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetCheatListsForEntry_AllowAdditionalString             (BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetCheatListsForEntry_Success                           (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMenuCharacterLevelPreset>CallFunc_GetCharacterPresetsForEntry_CharacterPresetLevel        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FCheatMenuCharacterPresetItems>CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem         (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_GetCharacterPresetsForEntry_Success                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_24                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// TArray<struct FCheatMapJumpInfo>   CallFunc_GetMapJumpListForEntry_MapJumps                         (Edit, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetMapJumpListForEntry_Success                          (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// TArray<class FString>              CallFunc_GetMapJumpArray_EmptyStringArray                        (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_25                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly, NoDestructor)
// TArray<class FString>              CallFunc_GetMapOpenListsForEntry_CheatStrings                    (BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetMapOpenListsForEntry_Success                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UTexture2D*                  CallFunc_Array_Get_Item_4                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateFolderButtons_outWidget_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_26                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// class FString                      CallFunc_Array_Get_Item_5                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossNames                             (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossCheats                            (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// TArray<TSoftClassPtr<class UPrimalItem>>K2Node_Select_Default_2                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item_6                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateItemButtonFromBlueprintID_CreatedWidget           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// TArray<class FString>              K2Node_Select_Default_3                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Contains_ReturnValue                                    (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_7                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, EditorOnly)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Len_ReturnValue                                         (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)

bool UCheatMenu_C::ExecuteUbergraph_CheatMenu(int32* EntryPoint, const TArray<class FString>& Temp_string_Variable, const TArray<class FString>& Temp_string_Variable_1, const TArray<class FString>& Temp_string_Variable_2, const TArray<class FString>& Temp_string_Variable_3, const TArray<class FString>& Temp_string_Variable_4, const TArray<class FString>& Temp_string_Variable_5, const TArray<class FString>& Temp_string_Variable_6, const TArray<class FString>& Temp_string_Variable_7, const TArray<class FString>& Temp_string_Variable_8, const TArray<class FString>& Temp_string_Variable_9, const TArray<class FString>& Temp_string_Variable_10, const TArray<class FString>& Temp_string_Variable_11, const TArray<class FString>& Temp_string_Variable_12, const TArray<class FString>& Temp_string_Variable_13, const TArray<class FString>& Temp_string_Variable_14, const TArray<class FString>& Temp_string_Variable_15, const TArray<class FString>& Temp_string_Variable_16, int32* Temp_int_Variable, bool Temp_bool_Variable, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, enum class ECheckBoxState Temp_byte_Variable, enum class ECheckBoxState Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, const TArray<class FString>& Temp_string_Variable_17, const TArray<class FString>& Temp_string_Variable_18, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_2, const TArray<class FString>& Temp_string_Variable_19, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Array_Index_Variable_3, const TArray<class FString>& Temp_string_Variable_20, int32 Temp_int_Loop_Counter_Variable_4, const TArray<class FString>& Temp_string_Variable_21, class FText K2Node_ComponentBoundEvent_Text_3, class FText K2Node_ComponentBoundEvent_Text_2, class FText K2Node_ComponentBoundEvent_Text_1, int32 Temp_int_Array_Index_Variable_4, class UUI_DebugSpawnMenuEntry* CallFunc_Array_Get_Item, class UPanelSlot** CallFunc_AddChild_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item_1, class UUI_DebugSpawnMenuEntry* CallFunc_CreateFolderButtons_outWidget, class UUI_DebugSpawnMenuEntry* CallFunc_Array_Get_Item_2, class UPanelSlot** CallFunc_AddChild_ReturnValue_1, const TArray<class FString>& Temp_string_Variable_22, bool K2Node_ComponentBoundEvent_bIsChecked_1, bool K2Node_ComponentBoundEvent_bIsChecked, enum class ECheckBoxState K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, const TArray<class FString>& Temp_string_Variable_23, enum class ECheatMenuOptionTypes CallFunc_Array_Get_Item_3, bool K2Node_SwitchEnum_CmpSuccess, TArray<TSoftClassPtr<class APrimalDinoCharacter>>* CallFunc_GetDinoListsForEntry_Dinos, bool* CallFunc_GetDinoListsForEntry_Success, TArray<TSoftClassPtr<class UPrimalItem>>* CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs, TArray<TSoftClassPtr<class UPrimalItem>>* CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs, bool CallFunc_GetEggListsForEntry_Success, bool CallFunc_GetCheatListsForEntry_Success, const TArray<struct FCheatMenuCharacterPresetItems>& CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem, const TArray<class FString>& Temp_string_Variable_24, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, const TArray<class FString>& Temp_string_Variable_25, bool* CallFunc_GetMapOpenListsForEntry_Success, class UTexture2D* CallFunc_Array_Get_Item_4, class UUI_DebugSpawnMenuEntry* CallFunc_CreateFolderButtons_outWidget_1, const TArray<class FString>& Temp_string_Variable_26, const class FString& CallFunc_Array_Get_Item_5, const TArray<class FString>& CallFunc_GetBossSpawnArray_BossNames, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2, const TArray<TSoftClassPtr<class UPrimalItem>>& K2Node_Select_Default_2, class FText K2Node_ComponentBoundEvent_Text, TSoftClassPtr<class UPrimalItem> CallFunc_Array_Get_Item_6, class UUI_DebugSpawnMenuEntry* CallFunc_CreateItemButtonFromBlueprintID_CreatedWidget, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, int32* Temp_int_Variable_1, const TArray<class FString>& K2Node_Select_Default_3, const class FString& CallFunc_Array_Get_Item_7, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, int32 CallFunc_Len_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "ExecuteUbergraph_CheatMenu");

	Params::UCheatMenu_C_ExecuteUbergraph_CheatMenu_Params Parms{};

	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.Temp_string_Variable_6 = Temp_string_Variable_6;
	Parms.Temp_string_Variable_7 = Temp_string_Variable_7;
	Parms.Temp_string_Variable_8 = Temp_string_Variable_8;
	Parms.Temp_string_Variable_9 = Temp_string_Variable_9;
	Parms.Temp_string_Variable_10 = Temp_string_Variable_10;
	Parms.Temp_string_Variable_11 = Temp_string_Variable_11;
	Parms.Temp_string_Variable_12 = Temp_string_Variable_12;
	Parms.Temp_string_Variable_13 = Temp_string_Variable_13;
	Parms.Temp_string_Variable_14 = Temp_string_Variable_14;
	Parms.Temp_string_Variable_15 = Temp_string_Variable_15;
	Parms.Temp_string_Variable_16 = Temp_string_Variable_16;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_string_Variable_17 = Temp_string_Variable_17;
	Parms.Temp_string_Variable_18 = Temp_string_Variable_18;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_string_Variable_19 = Temp_string_Variable_19;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_string_Variable_20 = Temp_string_Variable_20;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.Temp_string_Variable_21 = Temp_string_Variable_21;
	Parms.K2Node_ComponentBoundEvent_Text_3 = K2Node_ComponentBoundEvent_Text_3;
	Parms.K2Node_ComponentBoundEvent_Text_2 = K2Node_ComponentBoundEvent_Text_2;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_CreateFolderButtons_outWidget = CallFunc_CreateFolderButtons_outWidget;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.Temp_string_Variable_22 = Temp_string_Variable_22;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_1 = K2Node_ComponentBoundEvent_bIsChecked_1;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_string_Variable_23 = Temp_string_Variable_23;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetEggListsForEntry_Success = CallFunc_GetEggListsForEntry_Success;
	Parms.CallFunc_GetCheatListsForEntry_Success = CallFunc_GetCheatListsForEntry_Success;
	Parms.CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem = CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem;
	Parms.Temp_string_Variable_24 = Temp_string_Variable_24;
	Parms.Temp_string_Variable_25 = Temp_string_Variable_25;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_CreateFolderButtons_outWidget_1 = CallFunc_CreateFolderButtons_outWidget_1;
	Parms.Temp_string_Variable_26 = Temp_string_Variable_26;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetBossSpawnArray_BossNames = CallFunc_GetBossSpawnArray_BossNames;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_CreateItemButtonFromBlueprintID_CreatedWidget = CallFunc_CreateItemButtonFromBlueprintID_CreatedWidget;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_AddChild_ReturnValue != nullptr)
		*CallFunc_AddChild_ReturnValue = Parms.CallFunc_AddChild_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_AddChild_ReturnValue_1 != nullptr)
		*CallFunc_AddChild_ReturnValue_1 = Parms.CallFunc_AddChild_ReturnValue_1;

	if (CallFunc_GetDinoListsForEntry_Dinos != nullptr)
		*CallFunc_GetDinoListsForEntry_Dinos = std::move(Parms.CallFunc_GetDinoListsForEntry_Dinos);

	if (CallFunc_GetDinoListsForEntry_Success != nullptr)
		*CallFunc_GetDinoListsForEntry_Success = Parms.CallFunc_GetDinoListsForEntry_Success;

	if (CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs != nullptr)
		*CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs = std::move(Parms.CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs);

	if (CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs != nullptr)
		*CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs = std::move(Parms.CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs);

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_GetMapOpenListsForEntry_Success != nullptr)
		*CallFunc_GetMapOpenListsForEntry_Success = Parms.CallFunc_GetMapOpenListsForEntry_Success;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_2 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_3 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_3 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3;

	return Parms.ReturnValue;

}

}


