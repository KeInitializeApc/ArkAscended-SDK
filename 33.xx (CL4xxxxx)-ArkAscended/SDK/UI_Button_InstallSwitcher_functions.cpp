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
// enum class EInstallStatus          Selection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

void UUI_Button_InstallSwitcher_C::UpdateButtonSwitcherStatus(enum class EInstallStatus* Selection, bool* K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "UpdateButtonSwitcherStatus");

	Params::UUI_Button_InstallSwitcher_C_UpdateButtonSwitcherStatus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Selection != nullptr)
		*Selection = Parms.Selection;

	if (K2Node_SwitchEnum_CmpSuccess != nullptr)
		*K2Node_SwitchEnum_CmpSuccess = Parms.K2Node_SwitchEnum_CmpSuccess;

}


// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.UpdateButtonCollor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENUM_Install            ButtonStatus                                                     (ConstParm, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

enum class ENUM_Install UUI_Button_InstallSwitcher_C::UpdateButtonCollor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "UpdateButtonCollor");

	Params::UUI_Button_InstallSwitcher_C_UpdateButtonCollor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// int32                              Amount                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// enum class ELibraryProgressState   InstalationState                                                 (EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

enum class ELibraryProgressState UUI_Button_InstallSwitcher_C::SetProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "SetProgress");

	Params::UUI_Button_InstallSwitcher_C_SetProgress_Params Parms{};


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
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              K2Node_CustomEvent_Amount                                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ELibraryProgressState   K2Node_CustomEvent_InstalationState                              (Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetProcessedBarProgress_ReturnValue                     (Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetProcessedBarProgress_MaintainPreviousValue           (Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_1                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)

float UUI_Button_InstallSwitcher_C::ExecuteUbergraph_UI_Button_InstallSwitcher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_InstallSwitcher_C", "ExecuteUbergraph_UI_Button_InstallSwitcher");

	Params::UUI_Button_InstallSwitcher_C_ExecuteUbergraph_UI_Button_InstallSwitcher_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

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


