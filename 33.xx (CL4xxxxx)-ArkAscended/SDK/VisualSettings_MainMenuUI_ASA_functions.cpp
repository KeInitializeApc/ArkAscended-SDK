#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C
// (None)

class UClass* UVisualSettings_MainMenuUI_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VisualSettings_MainMenuUI_ASA_C");

	return Clss;
}


// VisualSettings_MainMenuUI_ASA_C VisualSettings_MainMenuUI_ASA.Default__VisualSettings_MainMenuUI_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVisualSettings_MainMenuUI_ASA_C* UVisualSettings_MainMenuUI_ASA_C::GetDefaultObj()
{
	static class UVisualSettings_MainMenuUI_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVisualSettings_MainMenuUI_ASA_C*>(UVisualSettings_MainMenuUI_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.SetupGettHdrValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// double                             MinValue                                                         (Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             MaxValue                                                         (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             RealValue                                                        (Edit, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

double UVisualSettings_MainMenuUI_ASA_C::SetupGettHdrValue(float Value, double CallFunc_Lerp_ReturnValue, double* CallFunc_Lerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "SetupGettHdrValue");

	Params::UVisualSettings_MainMenuUI_ASA_C_SetupGettHdrValue_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Lerp_Alpha_ImplicitCast != nullptr)
		*CallFunc_Lerp_Alpha_ImplicitCast = Parms.CallFunc_Lerp_Alpha_ImplicitCast;

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.SetupSetHdrValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataListValueGeneric*       Self2                                                            (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// double                             MinValue                                                         (Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             MaxValue                                                         (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_A_ImplicitCast                     (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
// float                              CallFunc_SetFloatValue_Value_ImplicitCast                        (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UVisualSettings_MainMenuUI_ASA_C::SetupSetHdrValue(float Value, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "SetupSetHdrValue");

	Params::UVisualSettings_MainMenuUI_ASA_C_SetupSetHdrValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.Get HDRMid Luminence B Is Enabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetBoolValue_ReturnValue_1                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ConstParm, BlueprintVisible, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

bool UVisualSettings_MainMenuUI_ASA_C::Get_HDRMid_Luminence_B_Is_Enabled(bool* CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "Get HDRMid Luminence B Is Enabled");

	Params::UVisualSettings_MainMenuUI_ASA_C_Get_HDRMid_Luminence_B_Is_Enabled_Params Parms{};

	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.UpdateHDR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetFloatValue_ReturnValue                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue                                      (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UVisualSettings_MainMenuUI_ASA_C::UpdateHDR(float* CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, double* CallFunc_Lerp_A_ImplicitCast, double* CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "UpdateHDR");

	Params::UVisualSettings_MainMenuUI_ASA_C_UpdateHDR_Params Parms{};

	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetFloatValue_ReturnValue != nullptr)
		*CallFunc_GetFloatValue_ReturnValue = Parms.CallFunc_GetFloatValue_ReturnValue;

	if (CallFunc_Lerp_A_ImplicitCast != nullptr)
		*CallFunc_Lerp_A_ImplicitCast = Parms.CallFunc_Lerp_A_ImplicitCast;

	if (CallFunc_Lerp_Alpha_ImplicitCast != nullptr)
		*CallFunc_Lerp_Alpha_ImplicitCast = Parms.CallFunc_Lerp_Alpha_ImplicitCast;

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_CustomPreset_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_CustomPreset_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_CustomPreset_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.AddedToViewport
// (Event, Public, BlueprintEvent)
// Parameters:

void UVisualSettings_MainMenuUI_ASA_C::AddedToViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "AddedToViewport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.RemovedFromViewport
// (Event, Public, BlueprintEvent)
// Parameters:

void UVisualSettings_MainMenuUI_ASA_C::RemovedFromViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "RemovedFromViewport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_RestoreButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_RestoreButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_RestoreButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.RefreshHDRValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVisualSettings_MainMenuUI_ASA_C::RefreshHDRValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "RefreshHDRValues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.ExecuteUbergraph_VisualSettings_MainMenuUI_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_3                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_4                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_GetCurrentHDRDisplayNits_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue                                (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue_1                              (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue_1                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue_1                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_1                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_2                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetFloatValue_ReturnValue                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_3                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_2                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue                           (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_4                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_5                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_6                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_7                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_SetupGettHdrValue_RealValue                             (Edit, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_8                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_SetupGettHdrValue_RealValue_1                           (Edit, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_9                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_SetupGettHdrValue_RealValue_2                           (Edit, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_10               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_11               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, NonTransactional)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, RepNotify, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_12               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, Interp, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_13               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_14               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_SetupGettHdrValue_RealValue_3                           (Edit, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_RealValue_4                           (Edit, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_15               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
// double                             CallFunc_SetupGettHdrValue_RealValue_5                           (Edit, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SetFloatValue_Value_ImplicitCast                        (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast                  (Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast                  (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_1                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_1                (Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_2                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_2                (Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast                 (ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast           (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_1               (ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_2               (ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_3                (Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_3                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_4                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_4                (Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_5                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_5                (Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_3               (ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_4               (ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// float                              K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast_1         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast_1         (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_5               (ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// float                              K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast_1         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)

float UVisualSettings_MainMenuUI_ASA_C::ExecuteUbergraph_VisualSettings_MainMenuUI_ASA(class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UWorld** CallFunc_GetGameWorld_ReturnValue, bool CallFunc_TriggerLevelCustomEvents_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UWorld** CallFunc_GetGameWorld_ReturnValue_1, bool CallFunc_TriggerLevelCustomEvents_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_2, float* CallFunc_GetFloatValue_ReturnValue, float* CallFunc_GetFloatValue_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_3, float* CallFunc_GetFloatValue_ReturnValue_2, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_4, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_5, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_6, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_7, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_8, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_9, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_10, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_11, float* CallFunc_GetFloatValue_ReturnValue_3, float* CallFunc_GetFloatValue_ReturnValue_4, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_12, float* CallFunc_GetFloatValue_ReturnValue_5, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_13, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_14, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "ExecuteUbergraph_VisualSettings_MainMenuUI_ASA");

	Params::UVisualSettings_MainMenuUI_ASA_C_ExecuteUbergraph_VisualSettings_MainMenuUI_ASA_Params Parms{};

	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_TriggerLevelCustomEvents_ReturnValue = CallFunc_TriggerLevelCustomEvents_ReturnValue;
	Parms.CallFunc_TriggerLevelCustomEvents_ReturnValue_1 = CallFunc_TriggerLevelCustomEvents_ReturnValue_1;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_1 = CallFunc_GetShooterGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_2 = CallFunc_GetShooterGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_3 = CallFunc_GetShooterGameUserSettings_ReturnValue_3;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_4 = CallFunc_GetShooterGameUserSettings_ReturnValue_4;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_5 = CallFunc_GetShooterGameUserSettings_ReturnValue_5;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_6 = CallFunc_GetShooterGameUserSettings_ReturnValue_6;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_7 = CallFunc_GetShooterGameUserSettings_ReturnValue_7;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_8 = CallFunc_GetShooterGameUserSettings_ReturnValue_8;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_9 = CallFunc_GetShooterGameUserSettings_ReturnValue_9;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_10 = CallFunc_GetShooterGameUserSettings_ReturnValue_10;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_11 = CallFunc_GetShooterGameUserSettings_ReturnValue_11;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_12 = CallFunc_GetShooterGameUserSettings_ReturnValue_12;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_13 = CallFunc_GetShooterGameUserSettings_ReturnValue_13;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_14 = CallFunc_GetShooterGameUserSettings_ReturnValue_14;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_15 = CallFunc_GetShooterGameUserSettings_ReturnValue_15;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetGameWorld_ReturnValue != nullptr)
		*CallFunc_GetGameWorld_ReturnValue = Parms.CallFunc_GetGameWorld_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetGameWorld_ReturnValue_1 != nullptr)
		*CallFunc_GetGameWorld_ReturnValue_1 = Parms.CallFunc_GetGameWorld_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_GetFloatValue_ReturnValue != nullptr)
		*CallFunc_GetFloatValue_ReturnValue = Parms.CallFunc_GetFloatValue_ReturnValue;

	if (CallFunc_GetFloatValue_ReturnValue_1 != nullptr)
		*CallFunc_GetFloatValue_ReturnValue_1 = Parms.CallFunc_GetFloatValue_ReturnValue_1;

	if (CallFunc_GetFloatValue_ReturnValue_2 != nullptr)
		*CallFunc_GetFloatValue_ReturnValue_2 = Parms.CallFunc_GetFloatValue_ReturnValue_2;

	if (CallFunc_GetFloatValue_ReturnValue_3 != nullptr)
		*CallFunc_GetFloatValue_ReturnValue_3 = Parms.CallFunc_GetFloatValue_ReturnValue_3;

	if (CallFunc_GetFloatValue_ReturnValue_4 != nullptr)
		*CallFunc_GetFloatValue_ReturnValue_4 = Parms.CallFunc_GetFloatValue_ReturnValue_4;

	if (CallFunc_GetFloatValue_ReturnValue_5 != nullptr)
		*CallFunc_GetFloatValue_ReturnValue_5 = Parms.CallFunc_GetFloatValue_ReturnValue_5;

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.ClosedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVisualSettings_MainMenuUI_ASA_C::ClosedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "ClosedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


