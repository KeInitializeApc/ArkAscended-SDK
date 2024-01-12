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
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_CloseSpawnMenu_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UCheatMenu_C::BPEscapeClosed(class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue, bool CallFunc_CloseSpawnMenu_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BPEscapeClosed");

	Params::UCheatMenu_C_BPEscapeClosed_Params Parms{};

	Parms.CallFunc_CloseSpawnMenu_ReturnValue = CallFunc_CloseSpawnMenu_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetShooterHUD_ReturnValue != nullptr)
		*CallFunc_GetShooterHUD_ReturnValue = Parms.CallFunc_GetShooterHUD_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.ClearFilter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldRefresh                                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)

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
// TArray<class FString>              BossNames                                                        (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class FString>              BossCheats                                                       (BlueprintVisible, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue                                (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

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
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_CloseSpawnMenu_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCheatMenu_C::CloseMenu(class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue, bool CallFunc_CloseSpawnMenu_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CloseMenu");

	Params::UCheatMenu_C_CloseMenu_Params Parms{};

	Parms.CallFunc_CloseSpawnMenu_ReturnValue = CallFunc_CloseSpawnMenu_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetShooterHUD_ReturnValue != nullptr)
		*CallFunc_GetShooterHUD_ReturnValue = Parms.CallFunc_GetShooterHUD_ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetMapOpenListsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<class FString>              CheatStrings                                                     (ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               Success                                                          (EditFixedSize, DisableEditOnTemplate, Config)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UCheatMenu_C::GetMapOpenListsForEntry(const TArray<class FString>& CheatStrings, bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetMapOpenListsForEntry");

	Params::UCheatMenu_C_GetMapOpenListsForEntry_Params Parms{};

	Parms.CheatStrings = CheatStrings;
	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateMapOpenButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FName                        MapName                                                          (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UCheatMenuMapOpenButton_C*   CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

class UCheatMenuMapOpenButton_C* UCheatMenu_C::CreateMapOpenButton(class FString* Name, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapOpenButton");

	Params::UCheatMenu_C_CreateMapOpenButton_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateMapOpenEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              ArrayIndex                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<class FString>              Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// class FString                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateMapOpenButton_CreatedWidget                       (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UUI_DebugSpawnMenuEntry* UCheatMenu_C::CreateMapOpenEntry(class FString* Name, int32 ArrayIndex, TArray<class FString>* Array, class FString* CallFunc_Array_Get_Item, int32* CallFunc_Array_Add_ReturnValue)
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

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetMapJumpArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              EmptyStringArray                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              Temp_wildcard_Variable                                           (Edit, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<struct FCheatMapJumpInfo>   CallFunc_GetMapJumpListForEntry_MapJumps                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_GetMapJumpListForEntry_Success                          (ConstParm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// class FString                      Temp_string_Variable                                             (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UCheatMenu_C::GetMapJumpArray(int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_GetMapJumpListForEntry_Success, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetMapJumpArray");

	Params::UCheatMenu_C_GetMapJumpArray_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_GetMapJumpListForEntry_Success != nullptr)
		*CallFunc_GetMapJumpListForEntry_Success = Parms.CallFunc_GetMapJumpListForEntry_Success;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateMapJumpButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCheatMapJumpInfo           Cheat                                                            (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UCheatMapJumpButton_C*       CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

class UCheatMapJumpButton_C* UCheatMenu_C::CreateMapJumpButton(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapJumpButton");

	Params::UCheatMenu_C_CreateMapJumpButton_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateMapJumpEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ArrayIndex                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FCheatMapJumpInfo>   MapJumps                                                         (Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FCheatMapJumpInfo           CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateMapJumpButton_CreatedWidget                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FCheatMapJumpInfo> UCheatMenu_C::CreateMapJumpEntry(int32 ArrayIndex, struct FCheatMapJumpInfo* CallFunc_Array_Get_Item, class UUI_DebugSpawnMenuEntry** CallFunc_CreateMapJumpButton_CreatedWidget, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateMapJumpEntry");

	Params::UCheatMenu_C_CreateMapJumpEntry_Params Parms{};

	Parms.ArrayIndex = ArrayIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_CreateMapJumpButton_CreatedWidget != nullptr)
		*CallFunc_CreateMapJumpButton_CreatedWidget = Parms.CallFunc_CreateMapJumpButton_CreatedWidget;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetMapJumpListForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<struct FCheatMapJumpInfo>   MapJumps                                                         (Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               Success                                                          (EditFixedSize, DisableEditOnTemplate, Config)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue                                (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

bool UCheatMenu_C::GetMapJumpListForEntry(bool Success, class UWorld** CallFunc_GetGameWorld_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetMapJumpListForEntry");

	Params::UCheatMenu_C_GetMapJumpListForEntry_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetGameWorld_ReturnValue != nullptr)
		*CallFunc_GetGameWorld_ReturnValue = Parms.CallFunc_GetGameWorld_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.AddAllEntriesButtonForItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftClassPtr<class UPrimalItem>>Items                                                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCheatMenuItemAllButton_C*   CallFunc_CreateButtonFromAllEntries_ReturnValue                  (Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class ECheatMenuOptionTypes   CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool UCheatMenu_C::AddAllEntriesButtonForItems(enum class ECheatMenuOptionTypes* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "AddAllEntriesButtonForItems");

	Params::UCheatMenu_C_AddAllEntriesButtonForItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateButtonFromAllEntries
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftClassPtr<class UPrimalItem>>Items                                                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCheatMenuItemAllButton_C*   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UCheatMenuItemAllButton_C*   CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

class UCheatMenuItemAllButton_C* UCheatMenu_C::CreateButtonFromAllEntries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateButtonFromAllEntries");

	Params::UCheatMenu_C_CreateButtonFromAllEntries_Params Parms{};


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
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_2                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               Temp_bool_Variable_3                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               Temp_bool_Variable_4                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// enum class ECheatMenuOptionTypes   CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)

bool UCheatMenu_C::SetupOptionsBarForFolder(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ECheatMenuOptionTypes* CallFunc_Array_Get_Item, enum class ESlateVisibility* K2Node_Select_Default, enum class ESlateVisibility* K2Node_Select_Default_1, enum class ESlateVisibility* K2Node_Select_Default_2, enum class ESlateVisibility* K2Node_Select_Default_3, enum class ESlateVisibility* K2Node_Select_Default_4)
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

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

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
// int32                              ScreenTracker                                                    (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<struct FCheatMenuCharacterLevelPreset>CharacterPresetLevel                                             (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<struct FCheatMenuCharacterPresetItems>CharacterPresetItem                                              (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               Success                                                          (EditFixedSize, DisableEditOnTemplate, Config)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UCheatMenu_C::GetCharacterPresetsForEntry(TArray<struct FCheatMenuCharacterPresetItems>* CharacterPresetItem, bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetCharacterPresetsForEntry");

	Params::UCheatMenu_C_GetCharacterPresetsForEntry_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterPresetItem != nullptr)
		*CharacterPresetItem = std::move(Parms.CharacterPresetItem);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetCheatListsForEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<class FString>              CheatStrings                                                     (ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<bool>                       RequireConfirm                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, EditConst, SubobjectReference)
// bool                               AllowAdditionalString                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               Success                                                          (EditFixedSize, DisableEditOnTemplate, Config)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossNames                             (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossCheats                            (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)

bool UCheatMenu_C::GetCheatListsForEntry(const TArray<class FString>& CheatStrings, TArray<bool>* RequireConfirm, bool* AllowAdditionalString, bool Success, const TArray<class FString>& CallFunc_GetBossSpawnArray_BossCheats)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetCheatListsForEntry");

	Params::UCheatMenu_C_GetCheatListsForEntry_Params Parms{};

	Parms.CheatStrings = CheatStrings;
	Parms.Success = Success;
	Parms.CallFunc_GetBossSpawnArray_BossCheats = CallFunc_GetBossSpawnArray_BossCheats;

	UObject::ProcessEvent(Func, &Parms);

	if (RequireConfirm != nullptr)
		*RequireConfirm = std::move(Parms.RequireConfirm);

	if (AllowAdditionalString != nullptr)
		*AllowAdditionalString = Parms.AllowAdditionalString;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetEggListsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>DinoEggBlueprintIDs                                              (Edit, BlueprintVisible, Net, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>DinoFertEggBlueprintIDs                                          (ExportObject, BlueprintReadOnly, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Success                                                          (EditFixedSize, DisableEditOnTemplate, Config)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

bool UCheatMenu_C::GetEggListsForEntry(TArray<TSoftClassPtr<class UPrimalItem>>* DinoEggBlueprintIDs, TArray<TSoftClassPtr<class UPrimalItem>>* DinoFertEggBlueprintIDs, bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetEggListsForEntry");

	Params::UCheatMenu_C_GetEggListsForEntry_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

	if (DinoEggBlueprintIDs != nullptr)
		*DinoEggBlueprintIDs = std::move(Parms.DinoEggBlueprintIDs);

	if (DinoFertEggBlueprintIDs != nullptr)
		*DinoFertEggBlueprintIDs = std::move(Parms.DinoFertEggBlueprintIDs);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.GetDinoListsForEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScreenTracker                                                    (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<TSoftClassPtr<class APrimalDinoCharacter>>Dinos                                                            (Edit, ConstParm, BlueprintVisible, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>Saddles                                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Success                                                          (EditFixedSize, DisableEditOnTemplate, Config)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_6                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_7                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)

bool UCheatMenu_C::GetDinoListsForEntry(const TArray<TSoftClassPtr<class APrimalDinoCharacter>>& Dinos, const TArray<TSoftClassPtr<class UPrimalItem>>& Saddles, bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "GetDinoListsForEntry");

	Params::UCheatMenu_C_GetDinoListsForEntry_Params Parms{};

	Parms.Dinos = Dinos;
	Parms.Saddles = Saddles;
	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateCharacterPresetEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              ArrayIndex                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FCheatMenuCharacterLevelPreset>LevelLists                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<struct FCheatMenuCharacterPresetItems>ItemLists                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FCheatMenuCharacterPresetItemsCallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FCheatMenuCharacterLevelPresetCallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateButtonFromCharacterPresets_CreatedWidget          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UUI_DebugSpawnMenuEntry* UCheatMenu_C::CreateCharacterPresetEntry(int32 ArrayIndex, struct FCheatMenuCharacterPresetItems* CallFunc_Array_Get_Item, struct FCheatMenuCharacterLevelPreset* CallFunc_Array_Get_Item_1, class FText CallFunc_Conv_StringToText_ReturnValue, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateCharacterPresetEntry");

	Params::UCheatMenu_C_CreateCharacterPresetEntry_Params Parms{};

	Parms.ArrayIndex = ArrayIndex;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = std::move(Parms.CallFunc_Array_Get_Item_1);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateCheatEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              ArrayIndex                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<class FString>              Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// TArray<bool>                       ArrayConfirm                                                     (Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               AllowAdditionalString                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateCheatButtonFromBlueprintID_CreatedWidget          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UUI_DebugSpawnMenuEntry* UCheatMenu_C::CreateCheatEntry(class FString* Name, int32 ArrayIndex, TArray<class FString>* Array, TArray<bool>* ArrayConfirm, bool* AllowAdditionalString, bool Temp_bool_Variable, bool* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class FString* CallFunc_Array_Get_Item_1, bool Temp_bool_Variable_1, bool* K2Node_Select_Default, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateCheatEntry");

	Params::UCheatMenu_C_CreateCheatEntry_Params Parms{};

	Parms.ArrayIndex = ArrayIndex;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

	if (ArrayConfirm != nullptr)
		*ArrayConfirm = std::move(Parms.ArrayConfirm);

	if (AllowAdditionalString != nullptr)
		*AllowAdditionalString = Parms.AllowAdditionalString;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = std::move(Parms.CallFunc_Array_Get_Item_1);

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
// int32                              ArrayIndex                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>UnFertEggs                                                       (ConstParm, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>FertEggs                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      Temp_string_Variable                                             (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_1                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue_1                 (ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_BooleanXOR_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget       (ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UUI_DebugSpawnMenuEntry* UCheatMenu_C::CreateEggEntry(class FString* Name, int32 ArrayIndex, TSoftClassPtr<class UPrimalItem>* CallFunc_Array_Get_Item, bool CallFunc_IsValidSoftClassReference_ReturnValue, TSoftClassPtr<class UPrimalItem>* CallFunc_Array_Get_Item_1, bool CallFunc_IsValidSoftClassReference_ReturnValue_1, bool Temp_bool_Variable, class FString* K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateEggEntry");

	Params::UCheatMenu_C_CreateEggEntry_Params Parms{};

	Parms.ArrayIndex = ArrayIndex;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue_1 = CallFunc_IsValidSoftClassReference_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = Parms.CallFunc_Array_Get_Item_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateDinoEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// int32                              ArrayIndex                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<TSoftClassPtr<class APrimalDinoCharacter>>DinoBPList                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>DinoSaddleList                                                   (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TSoftClassPtr<class APrimalDinoCharacter>CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UCheatMenuButton_C*          CallFunc_CreateDinoButtonAndSetText_CreatedButton                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UCheatMenuButton_C* UCheatMenu_C::CreateDinoEntry(int32 ArrayIndex, TSoftClassPtr<class UPrimalItem>* CallFunc_Array_Get_Item, TSoftClassPtr<class APrimalDinoCharacter>* CallFunc_Array_Get_Item_1, bool CallFunc_IsValidSoftClassReference_ReturnValue, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateDinoEntry");

	Params::UCheatMenu_C_CreateDinoEntry_Params Parms{};

	Parms.ArrayIndex = ArrayIndex;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = Parms.CallFunc_Array_Get_Item_1;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.SetupOptionBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

void UCheatMenu_C::SetupOptionBar(int32* CallFunc_Array_Get_Item, bool* CallFunc_Array_Get_Item_1, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "SetupOptionBar");

	Params::UCheatMenu_C_SetupOptionBar_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = Parms.CallFunc_Array_Get_Item_1;

}


// Function CheatMenu.CheatMenu_C.CreateButtonFromCharacterPresets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (ConstParm, Net, OutParm)
// struct FCheatMenuCharacterLevelPresetLevels                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCheatMenuCharacterPresetItemsItems                                                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UCheatMenuCharacterPresetsButton_C*CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class UCheatMenuCharacterPresetsButton_C* UCheatMenu_C::CreateButtonFromCharacterPresets(class FText* Name, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateButtonFromCharacterPresets");

	Params::UCheatMenu_C_CreateButtonFromCharacterPresets_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateFolderButtons
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (ConstParm, Net, OutParm)
// int32                              ScreenNumber                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UTexture2D*                  Image                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
// class UUI_DebugSpawnMenuEntry*     OutWidget                                                        (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UCheatMenuFolderButton_C*    CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

class UCheatMenuFolderButton_C* UCheatMenu_C::CreateFolderButtons(class FText* Name, int32 ScreenNumber, class UTexture2D** Image, class UUI_DebugSpawnMenuEntry** OutWidget, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateFolderButtons");

	Params::UCheatMenu_C_CreateFolderButtons_Params Parms{};

	Parms.ScreenNumber = ScreenNumber;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

	if (Image != nullptr)
		*Image = Parms.Image;

	if (OutWidget != nullptr)
		*OutWidget = Parms.OutWidget;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateCheatButtonFromBlueprintID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FString                      Cheat                                                            (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig)
// bool                               RequireConfirm                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, EditConst, SubobjectReference)
// bool                               Allow_Additional_String                                          (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UCheatMenuCheatButton_C*     CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

class UCheatMenuCheatButton_C* UCheatMenu_C::CreateCheatButtonFromBlueprintID(class FString* Name, bool* RequireConfirm, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateCheatButtonFromBlueprintID");

	Params::UCheatMenu_C_CreateCheatButtonFromBlueprintID_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (RequireConfirm != nullptr)
		*RequireConfirm = Parms.RequireConfirm;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateEggItemButtonFromBlueprintIDs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// TSoftClassPtr<class UPrimalItem>   UnFertilizedEgg                                                  (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   FertilizedEgg                                                    (Edit, ConstParm, BlueprintVisible, OutParm, Config, EditConst, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue_1                         (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (Edit, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
// class UClass*                      K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// class UCheatMenuEggButton_C*       CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

class UPrimalItem* UCheatMenu_C::CreateEggItemButtonFromBlueprintIDs(class FString* Name, TSoftClassPtr<class UPrimalItem>* FertilizedEgg, bool Temp_bool_Variable, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UClass** K2Node_Select_Default, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateEggItemButtonFromBlueprintIDs");

	Params::UCheatMenu_C_CreateEggItemButtonFromBlueprintIDs_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.CallFunc_ClassAssetResolve_ReturnValue_1 = CallFunc_ClassAssetResolve_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Item = K2Node_ClassDynamicCast_AsPrimal_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (FertilizedEgg != nullptr)
		*FertilizedEgg = Parms.FertilizedEgg;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateItemButtonFromBlueprintID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UPrimalItem>   Blueprint                                                        (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
// class UUI_DebugSpawnMenuEntry*     CreatedWidget                                                    (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UCheatMenuItemButton_C*      CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

class UCheatMenuItemButton_C* UCheatMenu_C::CreateItemButtonFromBlueprintID(TSoftClassPtr<class UPrimalItem>* Blueprint, bool CallFunc_IsValidSoftClassReference_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateItemButtonFromBlueprintID");

	Params::UCheatMenu_C_CreateItemButtonFromBlueprintID_Params Parms{};

	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Item = K2Node_ClassDynamicCast_AsPrimal_Item;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Blueprint != nullptr)
		*Blueprint = Parms.Blueprint;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateItemButtonAndSetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ItemName                                                         (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// class FString                      ItemSpawnString                                                  (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UCheatMenuButton_C*          CreatedButton                                                    (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UCheatMenuItemButton_C*      CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

class UCheatMenuItemButton_C* UCheatMenu_C::CreateItemButtonAndSetText(const class FString& ItemSpawnString, class UCheatMenuButton_C** CreatedButton, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateItemButtonAndSetText");

	Params::UCheatMenu_C_CreateItemButtonAndSetText_Params Parms{};

	Parms.ItemSpawnString = ItemSpawnString;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedButton != nullptr)
		*CreatedButton = Parms.CreatedButton;

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.CreateDinoButtonAndSetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// TSoftClassPtr<class APrimalDinoCharacter>DinoBP                                                           (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   Saddle                                                           (Edit, ExportObject, OutParm, InstancedReference, SubobjectReference)
// class UCheatMenuButton_C*          CreatedButton                                                    (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UCheatMenuButton_C*          CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

class UCheatMenuButton_C* UCheatMenu_C::CreateDinoButtonAndSetText(TSoftClassPtr<class APrimalDinoCharacter>* DinoBP, TSoftClassPtr<class UPrimalItem>* Saddle, class UCheatMenuButton_C** CreatedButton, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "CreateDinoButtonAndSetText");

	Params::UCheatMenu_C_CreateDinoButtonAndSetText_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DinoBP != nullptr)
		*DinoBP = Parms.DinoBP;

	if (Saddle != nullptr)
		*Saddle = Parms.Saddle;

	if (CreatedButton != nullptr)
		*CreatedButton = Parms.CreatedButton;

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
// enum class ETextCommit             CommitMethod                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextCommit UCheatMenu_C::BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// enum class ETextCommit             CommitMethod                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextCommit UCheatMenu_C::BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

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
// enum class ETextCommit             CommitMethod                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextCommit UCheatMenu_C::BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UCheatMenu_C_BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMenu.CheatMenu_C.Screen Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ToScreen                                                         (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, SubobjectReference)

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
// bool                               bIsChecked                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
// bool                               bIsChecked                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class FString>              Temp_string_Variable                                             (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_1                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// TArray<class FString>              Temp_string_Variable_2                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// TArray<class FString>              Temp_string_Variable_3                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional)
// TArray<class FString>              Temp_string_Variable_4                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional)
// TArray<class FString>              Temp_string_Variable_5                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional)
// TArray<class FString>              Temp_string_Variable_6                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
// TArray<class FString>              Temp_string_Variable_7                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, EditorOnly)
// TArray<class FString>              Temp_string_Variable_8                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, EditorOnly)
// TArray<class FString>              Temp_string_Variable_9                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, EditorOnly)
// TArray<class FString>              Temp_string_Variable_10                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly)
// TArray<class FString>              Temp_string_Variable_11                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional, EditorOnly)
// TArray<class FString>              Temp_string_Variable_12                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// TArray<class FString>              Temp_string_Variable_13                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional, EditorOnly)
// TArray<class FString>              Temp_string_Variable_14                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// TArray<class FString>              Temp_string_Variable_15                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NoDestructor)
// TArray<class FString>              Temp_string_Variable_16                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NoDestructor)
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable                                          (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_1                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_2                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_3                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_4                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_5                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, NonTransactional)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_6                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_7                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_8                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_9                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_10                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_11                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_12                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_13                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, NonTransactional, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_14                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// TArray<TSoftClassPtr<class UPrimalItem>>Temp_softclass_Variable_15                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NoDestructor)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ECheckBoxState          Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ECheckBoxState          Temp_byte_Variable_1                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_17                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NoDestructor)
// TArray<class FString>              Temp_string_Variable_18                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// TArray<class FString>              Temp_string_Variable_19                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_3                                  (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// TArray<class FString>              Temp_string_Variable_20                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// TArray<class FString>              Temp_string_Variable_21                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text_3                                (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_2                        (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_Text_2                                (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_1                        (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_2                          (Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable_4                                  (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UUI_DebugSpawnMenuEntry*     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              K2Node_CustomEvent_ToScreen                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateFolderButtons_outWidget                           (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class UUI_DebugSpawnMenuEntry*     CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// TArray<class FString>              Temp_string_Variable_22                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class ECheckBoxState          K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class FString>              Temp_string_Variable_23                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, EditorOnly, NoDestructor)
// enum class ECheatMenuOptionTypes   CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// TArray<TSoftClassPtr<class APrimalDinoCharacter>>CallFunc_GetDinoListsForEntry_Dinos                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>CallFunc_GetDinoListsForEntry_Saddles                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_GetDinoListsForEntry_Success                            (Edit, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<TSoftClassPtr<class UPrimalItem>>CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs             (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_GetEggListsForEntry_Success                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// TArray<class FString>              CallFunc_GetCheatListsForEntry_CheatStrings                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<bool>                       CallFunc_GetCheatListsForEntry_RequireConfirm                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_GetCheatListsForEntry_AllowAdditionalString             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_GetCheatListsForEntry_Success                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// TArray<struct FCheatMenuCharacterLevelPreset>CallFunc_GetCharacterPresetsForEntry_CharacterPresetLevel        (ConstParm, ExportObject, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<struct FCheatMenuCharacterPresetItems>CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem         (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_GetCharacterPresetsForEntry_Success                     (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_24                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// TArray<struct FCheatMapJumpInfo>   CallFunc_GetMapJumpListForEntry_MapJumps                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_GetMapJumpListForEntry_Success                          (ConstParm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class FString>              CallFunc_GetMapJumpArray_EmptyStringArray                        (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, EditConst, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_25                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, EditorOnly, NoDestructor)
// TArray<class FString>              CallFunc_GetMapOpenListsForEntry_CheatStrings                    (Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_GetMapOpenListsForEntry_Success                         (ConstParm, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// class UTexture2D*                  CallFunc_Array_Get_Item_4                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateFolderButtons_outWidget_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class FString>              Temp_string_Variable_26                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// class FString                      CallFunc_Array_Get_Item_5                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossNames                             (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<class FString>              CallFunc_GetBossSpawnArray_BossCheats                            (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// TArray<TSoftClassPtr<class UPrimalItem>>K2Node_Select_Default_2                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item_6                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// class UUI_DebugSpawnMenuEntry*     CallFunc_CreateItemButtonFromBlueprintID_CreatedWidget           (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// int32                              Temp_int_Variable_1                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class FString>              K2Node_Select_Default_3                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Contains_ReturnValue                                    (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_7                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Len_ReturnValue                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)

bool UCheatMenu_C::ExecuteUbergraph_CheatMenu(int32* Temp_int_Variable, bool Temp_bool_Variable, enum class ECheckBoxState Temp_byte_Variable, enum class ECheckBoxState Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_1, int32 CallFunc_Conv_StringToInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Conv_StringToInt_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_2, class UUI_DebugSpawnMenuEntry** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, int32* K2Node_CustomEvent_ToScreen, class FText* CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, class UUI_DebugSpawnMenuEntry** CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue_2, enum class ECheckBoxState* K2Node_Select_Default, enum class ESlateVisibility* K2Node_Select_Default_1, enum class ECheatMenuOptionTypes* CallFunc_Array_Get_Item_3, bool* CallFunc_GetEggListsForEntry_Success, TArray<class FString>* CallFunc_GetCheatListsForEntry_CheatStrings, TArray<bool>* CallFunc_GetCheatListsForEntry_RequireConfirm, const TArray<struct FCheatMenuCharacterLevelPreset>& CallFunc_GetCharacterPresetsForEntry_CharacterPresetLevel, bool CallFunc_GetCharacterPresetsForEntry_Success, bool* CallFunc_GetMapJumpListForEntry_Success, const TArray<class FString>& CallFunc_GetMapJumpArray_EmptyStringArray, const TArray<class FString>& CallFunc_GetMapOpenListsForEntry_CheatStrings, class UTexture2D** CallFunc_Array_Get_Item_4, int32* CallFunc_Array_Add_ReturnValue, class FString* CallFunc_Array_Get_Item_5, class FText CallFunc_Conv_StringToText_ReturnValue, const TArray<class FString>& CallFunc_GetBossSpawnArray_BossCheats, TArray<TSoftClassPtr<class UPrimalItem>>* K2Node_Select_Default_2, TSoftClassPtr<class UPrimalItem>* CallFunc_Array_Get_Item_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue_3, int32* Temp_int_Variable_1, TArray<class FString>* K2Node_Select_Default_3, bool CallFunc_Contains_ReturnValue, class FString* CallFunc_Array_Get_Item_7, int32* CallFunc_Array_Length_ReturnValue_4, int32* CallFunc_Len_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenu_C", "ExecuteUbergraph_CheatMenu");

	Params::UCheatMenu_C_ExecuteUbergraph_CheatMenu_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_2 = K2Node_ComponentBoundEvent_CommitMethod_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_1 = K2Node_ComponentBoundEvent_CommitMethod_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_2 = CallFunc_Conv_StringToInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_GetCharacterPresetsForEntry_CharacterPresetLevel = CallFunc_GetCharacterPresetsForEntry_CharacterPresetLevel;
	Parms.CallFunc_GetCharacterPresetsForEntry_Success = CallFunc_GetCharacterPresetsForEntry_Success;
	Parms.CallFunc_GetMapJumpArray_EmptyStringArray = CallFunc_GetMapJumpArray_EmptyStringArray;
	Parms.CallFunc_GetMapOpenListsForEntry_CheatStrings = CallFunc_GetMapOpenListsForEntry_CheatStrings;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetBossSpawnArray_BossCheats = CallFunc_GetBossSpawnArray_BossCheats;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (K2Node_CustomEvent_ToScreen != nullptr)
		*K2Node_CustomEvent_ToScreen = Parms.K2Node_CustomEvent_ToScreen;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = Parms.CallFunc_Array_Get_Item_1;

	if (CallFunc_Array_Length_ReturnValue_1 != nullptr)
		*CallFunc_Array_Length_ReturnValue_1 = Parms.CallFunc_Array_Length_ReturnValue_1;

	if (CallFunc_Array_Get_Item_2 != nullptr)
		*CallFunc_Array_Get_Item_2 = Parms.CallFunc_Array_Get_Item_2;

	if (CallFunc_Array_Length_ReturnValue_2 != nullptr)
		*CallFunc_Array_Length_ReturnValue_2 = Parms.CallFunc_Array_Length_ReturnValue_2;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (CallFunc_Array_Get_Item_3 != nullptr)
		*CallFunc_Array_Get_Item_3 = Parms.CallFunc_Array_Get_Item_3;

	if (CallFunc_GetEggListsForEntry_Success != nullptr)
		*CallFunc_GetEggListsForEntry_Success = Parms.CallFunc_GetEggListsForEntry_Success;

	if (CallFunc_GetCheatListsForEntry_CheatStrings != nullptr)
		*CallFunc_GetCheatListsForEntry_CheatStrings = std::move(Parms.CallFunc_GetCheatListsForEntry_CheatStrings);

	if (CallFunc_GetCheatListsForEntry_RequireConfirm != nullptr)
		*CallFunc_GetCheatListsForEntry_RequireConfirm = std::move(Parms.CallFunc_GetCheatListsForEntry_RequireConfirm);

	if (CallFunc_GetMapJumpListForEntry_Success != nullptr)
		*CallFunc_GetMapJumpListForEntry_Success = Parms.CallFunc_GetMapJumpListForEntry_Success;

	if (CallFunc_Array_Get_Item_4 != nullptr)
		*CallFunc_Array_Get_Item_4 = Parms.CallFunc_Array_Get_Item_4;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	if (CallFunc_Array_Get_Item_5 != nullptr)
		*CallFunc_Array_Get_Item_5 = std::move(Parms.CallFunc_Array_Get_Item_5);

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = std::move(Parms.K2Node_Select_Default_2);

	if (CallFunc_Array_Get_Item_6 != nullptr)
		*CallFunc_Array_Get_Item_6 = Parms.CallFunc_Array_Get_Item_6;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue_1 != nullptr)
		*CallFunc_Array_Add_ReturnValue_1 = Parms.CallFunc_Array_Add_ReturnValue_1;

	if (CallFunc_Array_Length_ReturnValue_3 != nullptr)
		*CallFunc_Array_Length_ReturnValue_3 = Parms.CallFunc_Array_Length_ReturnValue_3;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (K2Node_Select_Default_3 != nullptr)
		*K2Node_Select_Default_3 = std::move(Parms.K2Node_Select_Default_3);

	if (CallFunc_Array_Get_Item_7 != nullptr)
		*CallFunc_Array_Get_Item_7 = std::move(Parms.CallFunc_Array_Get_Item_7);

	if (CallFunc_Array_Length_ReturnValue_4 != nullptr)
		*CallFunc_Array_Length_ReturnValue_4 = Parms.CallFunc_Array_Length_ReturnValue_4;

	if (CallFunc_Len_ReturnValue != nullptr)
		*CallFunc_Len_ReturnValue = Parms.CallFunc_Len_ReturnValue;

	return Parms.ReturnValue;

}

}


