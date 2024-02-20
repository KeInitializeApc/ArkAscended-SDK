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
// class UUI_Notification_C*          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_Notification_C*          CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

class UUI_Notification_C* UUI_NotificationManager_C::CreateNotify(class UUI_Notification_C* ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UOverlaySlot** CallFunc_AddChildToOverlay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NotificationManager_C", "CreateNotify");

	Params::UUI_NotificationManager_C_CreateNotify_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_AddChildToOverlay_ReturnValue != nullptr)
		*CallFunc_AddChildToOverlay_ReturnValue = Parms.CallFunc_AddChildToOverlay_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_NotificationManager.UI_NotificationManager_C.PlayInstalledNotification
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstallProgressMod         InstallProgressMod                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UUI_Notification_C*          CallFunc_CreateNotify_ReturnValue                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         K2Node_CustomEvent_InstallProgressMod                            (BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetModName_Name                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUI_Notification_C*          CallFunc_CreateNotify_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UUI_Notification_C*          CallFunc_CreateNotify_ReturnValue_2                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UUI_Notification_C*          CallFunc_CreateNotify_ReturnValue_3                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)

int32 UUI_NotificationManager_C::ExecuteUbergraph_UI_NotificationManager(class UUI_Notification_C** CallFunc_CreateNotify_ReturnValue, bool* CallFunc_IsValid_ReturnValue, struct FInstallProgressMod* K2Node_CustomEvent_InstallProgressMod, class FString* CallFunc_GetModName_Name, class FText* CallFunc_Conv_StringToText_ReturnValue, class UUI_Notification_C** CallFunc_CreateNotify_ReturnValue_1, class UUI_Notification_C** CallFunc_CreateNotify_ReturnValue_2, class UUI_Notification_C** CallFunc_CreateNotify_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_NotificationManager_C", "ExecuteUbergraph_UI_NotificationManager");

	Params::UUI_NotificationManager_C_ExecuteUbergraph_UI_NotificationManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CreateNotify_ReturnValue != nullptr)
		*CallFunc_CreateNotify_ReturnValue = Parms.CallFunc_CreateNotify_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_CustomEvent_InstallProgressMod != nullptr)
		*K2Node_CustomEvent_InstallProgressMod = std::move(Parms.K2Node_CustomEvent_InstallProgressMod);

	if (CallFunc_GetModName_Name != nullptr)
		*CallFunc_GetModName_Name = std::move(Parms.CallFunc_GetModName_Name);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_CreateNotify_ReturnValue_1 != nullptr)
		*CallFunc_CreateNotify_ReturnValue_1 = Parms.CallFunc_CreateNotify_ReturnValue_1;

	if (CallFunc_CreateNotify_ReturnValue_2 != nullptr)
		*CallFunc_CreateNotify_ReturnValue_2 = Parms.CallFunc_CreateNotify_ReturnValue_2;

	if (CallFunc_CreateNotify_ReturnValue_3 != nullptr)
		*CallFunc_CreateNotify_ReturnValue_3 = Parms.CallFunc_CreateNotify_ReturnValue_3;

	return Parms.ReturnValue;

}

}


