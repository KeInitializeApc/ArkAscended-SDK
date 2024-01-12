#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C
// (None)

class UClass* UUI_Button_InstallSwitcher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Button_InstallSwitcher_C");

	return Clss;
}


// UI_Button_InstallSwitcher_C UI_Button_InstallSwitcher.Default__UI_Button_InstallSwitcher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Button_InstallSwitcher_C* UUI_Button_InstallSwitcher_C::GetDefaultObj()
{
	static class UUI_Button_InstallSwitcher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Button_InstallSwitcher_C*>(UUI_Button_InstallSwitcher_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.UpdateButtonSwitcherStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInstallStatus          Selection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)

bool UUI_Button_InstallSwitcher_C::UpdateButtonSwitcherStatus(enum class EInstallStatus Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "UpdateButtonSwitcherStatus");

	Params::UUI_Button_InstallSwitcher_C_UpdateButtonSwitcherStatus_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.UpdateButtonCollor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENUM_Install            ButtonStatus                                                     (Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UUI_Button_InstallSwitcher_C::UpdateButtonCollor(enum class ENUM_Install ButtonStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "UpdateButtonCollor");

	Params::UUI_Button_InstallSwitcher_C_UpdateButtonCollor_Params Parms{};

	Parms.ButtonStatus = ButtonStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.Update All Theme Settings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_InstallSwitcher_C::Update_All_Theme_Settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "Update All Theme Settings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// enum class ELibraryProgressState   InstalationState                                                 (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UUI_Button_InstallSwitcher_C::SetProgress(int32* Amount, enum class ELibraryProgressState InstalationState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "SetProgress");

	Params::UUI_Button_InstallSwitcher_C_SetProgress_Params Parms{};

	Parms.InstalationState = InstalationState;

	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;

}


// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.BndEvt__UI_Button_InstallSwitcher_UI_Button_Ark_Global_Install_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_InstallSwitcher_C::BndEvt__UI_Button_InstallSwitcher_UI_Button_Ark_Global_Install_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "BndEvt__UI_Button_InstallSwitcher_UI_Button_Ark_Global_Install_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.BndEvt__UI_Button_InstallSwitcher_UI_Button_Ark_Global_Update_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_InstallSwitcher_C::BndEvt__UI_Button_InstallSwitcher_UI_Button_Ark_Global_Update_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "BndEvt__UI_Button_InstallSwitcher_UI_Button_Ark_Global_Update_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.ExecuteUbergraph_UI_Button_InstallSwitcher
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              K2Node_CustomEvent_Amount                                        (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ELibraryProgressState   K2Node_CustomEvent_InstalationState                              (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetProcessedBarProgress_ReturnValue                     (Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetProcessedBarProgress_MaintainPreviousValue           (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_1                     (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)

float UUI_Button_InstallSwitcher_C::ExecuteUbergraph_UI_Button_InstallSwitcher(bool* CallFunc_IsValid_ReturnValue, int32 K2Node_CustomEvent_Amount, enum class ELibraryProgressState K2Node_CustomEvent_InstalationState, double CallFunc_GetProcessedBarProgress_ReturnValue, bool CallFunc_GetProcessedBarProgress_MaintainPreviousValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "ExecuteUbergraph_UI_Button_InstallSwitcher");

	Params::UUI_Button_InstallSwitcher_C_ExecuteUbergraph_UI_Button_InstallSwitcher_Params Parms{};

	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.K2Node_CustomEvent_InstalationState = K2Node_CustomEvent_InstalationState;
	Parms.CallFunc_GetProcessedBarProgress_ReturnValue = CallFunc_GetProcessedBarProgress_ReturnValue;
	Parms.CallFunc_GetProcessedBarProgress_MaintainPreviousValue = CallFunc_GetProcessedBarProgress_MaintainPreviousValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.OnClickUpdate_B__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_InstallSwitcher_C::OnClickUpdate_B__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "OnClickUpdate_B__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.OnClickInstall_B__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_InstallSwitcher_C::OnClickInstall_B__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "OnClickInstall_B__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


