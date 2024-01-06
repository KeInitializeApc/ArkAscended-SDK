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
// enum class EInstallStatus          Selection                                                        (Edit, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

enum class EInstallStatus UUI_Button_InstallSwitcher_C::UpdateButtonSwitcherStatus(bool* K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "UpdateButtonSwitcherStatus");

	Params::UUI_Button_InstallSwitcher_C_UpdateButtonSwitcherStatus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_SwitchEnum_CmpSuccess != nullptr)
		*K2Node_SwitchEnum_CmpSuccess = Parms.K2Node_SwitchEnum_CmpSuccess;

	return Parms.ReturnValue;

}


// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.UpdateButtonCollor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENUM_Install            ButtonStatus                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)

void UUI_Button_InstallSwitcher_C::UpdateButtonCollor(enum class ENUM_Install* ButtonStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "UpdateButtonCollor");

	Params::UUI_Button_InstallSwitcher_C_UpdateButtonCollor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonStatus != nullptr)
		*ButtonStatus = Parms.ButtonStatus;

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
// int32                              Amount                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// enum class ELibraryProgressState   InstalationState                                                 (Edit, ConstParm, ZeroConstructor, InstancedReference, SubobjectReference)

int32 UUI_Button_InstallSwitcher_C::SetProgress(enum class ELibraryProgressState InstalationState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "SetProgress");

	Params::UUI_Button_InstallSwitcher_C_SetProgress_Params Parms{};

	Parms.InstalationState = InstalationState;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              K2Node_CustomEvent_Amount                                        (ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, SubobjectReference)
// enum class ELibraryProgressState   K2Node_CustomEvent_InstalationState                              (ConstParm, BlueprintVisible, Net, ZeroConstructor, InstancedReference, SubobjectReference)
// double                             CallFunc_GetProcessedBarProgress_ReturnValue                     (ConstParm, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetProcessedBarProgress_MaintainPreviousValue           (ConstParm, BlueprintVisible, Net, Parm, OutParm, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_1                     (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)

bool UUI_Button_InstallSwitcher_C::ExecuteUbergraph_UI_Button_InstallSwitcher(int32 EntryPoint, int32 K2Node_CustomEvent_Amount, enum class ELibraryProgressState K2Node_CustomEvent_InstalationState, double* CallFunc_GetProcessedBarProgress_ReturnValue, bool* CallFunc_GetProcessedBarProgress_MaintainPreviousValue, float* CallFunc_SetPercent_InPercent_ImplicitCast, float* CallFunc_SetPercent_InPercent_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "ExecuteUbergraph_UI_Button_InstallSwitcher");

	Params::UUI_Button_InstallSwitcher_C_ExecuteUbergraph_UI_Button_InstallSwitcher_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.K2Node_CustomEvent_InstalationState = K2Node_CustomEvent_InstalationState;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetProcessedBarProgress_ReturnValue != nullptr)
		*CallFunc_GetProcessedBarProgress_ReturnValue = Parms.CallFunc_GetProcessedBarProgress_ReturnValue;

	if (CallFunc_GetProcessedBarProgress_MaintainPreviousValue != nullptr)
		*CallFunc_GetProcessedBarProgress_MaintainPreviousValue = Parms.CallFunc_GetProcessedBarProgress_MaintainPreviousValue;

	if (CallFunc_SetPercent_InPercent_ImplicitCast != nullptr)
		*CallFunc_SetPercent_InPercent_ImplicitCast = Parms.CallFunc_SetPercent_InPercent_ImplicitCast;

	if (CallFunc_SetPercent_InPercent_ImplicitCast_1 != nullptr)
		*CallFunc_SetPercent_InPercent_ImplicitCast_1 = Parms.CallFunc_SetPercent_InPercent_ImplicitCast_1;

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


