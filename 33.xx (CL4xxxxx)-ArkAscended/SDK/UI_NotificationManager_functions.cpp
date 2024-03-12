#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_NotificationManager.UI_NotificationManager_C
// (None)

class UClass* UUI_NotificationManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_NotificationManager_C");

	return Clss;
}


// UI_NotificationManager_C UI_NotificationManager.Default__UI_NotificationManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_NotificationManager_C* UUI_NotificationManager_C::GetDefaultObj()
{
	static class UUI_NotificationManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_NotificationManager_C*>(UUI_NotificationManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_NotificationManager.UI_NotificationManager_C.CreateNotify
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Notification_C*          ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UUI_Notification_C*          CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UOverlaySlot* UUI_NotificationManager_C::CreateNotify(class UUI_Notification_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NotificationManager_C", "CreateNotify");

	Params::UUI_NotificationManager_C_CreateNotify_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_NotificationManager.UI_NotificationManager_C.PlayInstalledNotification
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstallProgressMod         InstallProgressMod                                               (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config)

void UUI_NotificationManager_C::PlayInstalledNotification(struct FInstallProgressMod* InstallProgressMod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NotificationManager_C", "PlayInstalledNotification");

	Params::UUI_NotificationManager_C_PlayInstalledNotification_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InstallProgressMod != nullptr)
		*InstallProgressMod = std::move(Parms.InstallProgressMod);

}


// Function UI_NotificationManager.UI_NotificationManager_C.PlayErrorNotEnoughSpace
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_NotificationManager_C::PlayErrorNotEnoughSpace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NotificationManager_C", "PlayErrorNotEnoughSpace");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_NotificationManager.UI_NotificationManager_C.PlayUnknownError
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_NotificationManager_C::PlayUnknownError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NotificationManager_C", "PlayUnknownError");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_NotificationManager.UI_NotificationManager_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_NotificationManager_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NotificationManager_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_NotificationManager.UI_NotificationManager_C.PlayCantJoinServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_NotificationManager_C::PlayCantJoinServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NotificationManager_C", "PlayCantJoinServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_NotificationManager.UI_NotificationManager_C.ExecuteUbergraph_UI_NotificationManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UUI_Notification_C*          CallFunc_CreateNotify_ReturnValue                                (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FInstallProgressMod         K2Node_CustomEvent_InstallProgressMod                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetModName_Name                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UUI_Notification_C*          CallFunc_CreateNotify_ReturnValue_1                              (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UUI_Notification_C*          CallFunc_CreateNotify_ReturnValue_2                              (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UUI_Notification_C*          CallFunc_CreateNotify_ReturnValue_3                              (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)

class UUI_Notification_C* UUI_NotificationManager_C::ExecuteUbergraph_UI_NotificationManager(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NotificationManager_C", "ExecuteUbergraph_UI_NotificationManager");

	Params::UUI_NotificationManager_C_ExecuteUbergraph_UI_NotificationManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


