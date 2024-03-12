#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Hub.Hub_C
// (None)

class UClass* UHub_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hub_C");

	return Clss;
}


// Hub_C Hub.Default__Hub_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHub_C* UHub_C::GetDefaultObj()
{
	static class UHub_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHub_C*>(UHub_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Hub.Hub_C.OnButtonHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHub_C::OnButtonHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_C", "OnButtonHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Hub.Hub_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHub_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Hub.Hub_C.OnGamepadActiveChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsGamepadActive                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UHub_C::OnGamepadActiveChangedBP(bool* bIsGamepadActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_C", "OnGamepadActiveChangedBP");

	Params::UHub_C_OnGamepadActiveChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsGamepadActive != nullptr)
		*bIsGamepadActive = Parms.bIsGamepadActive;

}


// Function Hub.Hub_C.BndEvt__Hub_CloseHubButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHub_C::BndEvt__Hub_CloseHubButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_C", "BndEvt__Hub_CloseHubButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Hub.Hub_C.BndEvt__Hub_EngramsMenuButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHub_C::BndEvt__Hub_EngramsMenuButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_C", "BndEvt__Hub_EngramsMenuButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Hub.Hub_C.BndEvt__Hub_InventoryMenuButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHub_C::BndEvt__Hub_InventoryMenuButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_C", "BndEvt__Hub_InventoryMenuButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Hub.Hub_C.BndEvt__Hub_MinimapMenuButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHub_C::BndEvt__Hub_MinimapMenuButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_C", "BndEvt__Hub_MinimapMenuButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Hub.Hub_C.BndEvt__Hub_MissionListMenuButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHub_C::BndEvt__Hub_MissionListMenuButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_C", "BndEvt__Hub_MissionListMenuButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Hub.Hub_C.BndEvt__Hub_OpenPauseMenu_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHub_C::BndEvt__Hub_OpenPauseMenu_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_C", "BndEvt__Hub_OpenPauseMenu_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Hub.Hub_C.BndEvt__Hub_SurvivorProfileMenuButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHub_C::BndEvt__Hub_SurvivorProfileMenuButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_C", "BndEvt__Hub_SurvivorProfileMenuButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Hub.Hub_C.BndEvt__Hub_TameGroupsMenuButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHub_C::BndEvt__Hub_TameGroupsMenuButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_C", "BndEvt__Hub_TameGroupsMenuButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Hub.Hub_C.BndEvt__Hub_TamingListMenuButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHub_C::BndEvt__Hub_TamingListMenuButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_C", "BndEvt__Hub_TamingListMenuButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Hub.Hub_C.BndEvt__Hub_TrackDinoListMenuButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHub_C::BndEvt__Hub_TrackDinoListMenuButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_C", "BndEvt__Hub_TrackDinoListMenuButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Hub.Hub_C.BndEvt__Hub_TribeManagerMenuButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHub_C::BndEvt__Hub_TribeManagerMenuButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_C", "BndEvt__Hub_TribeManagerMenuButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Hub.Hub_C.ExecuteUbergraph_Hub
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               K2Node_Event_bIsGamepadActive                                    (Edit, ConstParm, ExportObject, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)

void UHub_C::ExecuteUbergraph_Hub(int32* EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_Event_bIsGamepadActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hub_C", "ExecuteUbergraph_Hub");

	Params::UHub_C_ExecuteUbergraph_Hub_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_Event_bIsGamepadActive != nullptr)
		*K2Node_Event_bIsGamepadActive = Parms.K2Node_Event_bIsGamepadActive;

}

}


