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
// double                             MinValue                                                         (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             MaxValue                                                         (ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             RealValue                                                        (BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

double UVisualSettings_MainMenuUI_ASA_C::SetupGettHdrValue(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "SetupGettHdrValue");

	Params::UVisualSettings_MainMenuUI_ASA_C_SetupGettHdrValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.SetupSetHdrValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataListValueGeneric*       Self2                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// double                             MinValue                                                         (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             MaxValue                                                         (ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_A_ImplicitCast                     (Edit, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetFloatValue_Value_ImplicitCast                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UVisualSettings_MainMenuUI_ASA_C::SetupSetHdrValue(float Value, double* CallFunc_Divide_DoubleFloat_ReturnValue, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* CallFunc_SetFloatValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "SetupSetHdrValue");

	Params::UVisualSettings_MainMenuUI_ASA_C_SetupSetHdrValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Divide_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Divide_DoubleFloat_ReturnValue = Parms.CallFunc_Divide_DoubleFloat_ReturnValue;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	if (CallFunc_SetFloatValue_Value_ImplicitCast != nullptr)
		*CallFunc_SetFloatValue_Value_ImplicitCast = Parms.CallFunc_SetFloatValue_Value_ImplicitCast;

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.Get HDRMid Luminence B Is Enabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetBoolValue_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

bool UVisualSettings_MainMenuUI_ASA_C::Get_HDRMid_Luminence_B_Is_Enabled(bool ReturnValue, bool* CallFunc_GetBoolValue_ReturnValue, bool* CallFunc_GetBoolValue_ReturnValue_1, bool CallFunc_GetIsEnabled_ReturnValue, class FString* CallFunc_GetPlatformName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "Get HDRMid Luminence B Is Enabled");

	Params::UVisualSettings_MainMenuUI_ASA_C_Get_HDRMid_Luminence_B_Is_Enabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetBoolValue_ReturnValue != nullptr)
		*CallFunc_GetBoolValue_ReturnValue = Parms.CallFunc_GetBoolValue_ReturnValue;

	if (CallFunc_GetBoolValue_ReturnValue_1 != nullptr)
		*CallFunc_GetBoolValue_ReturnValue_1 = Parms.CallFunc_GetBoolValue_ReturnValue_1;

	if (CallFunc_GetPlatformName_ReturnValue != nullptr)
		*CallFunc_GetPlatformName_ReturnValue = std::move(Parms.CallFunc_GetPlatformName_ReturnValue);

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.UpdateHDR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetFloatValue_ReturnValue                               (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue                                      (Edit, ConstParm, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

double UVisualSettings_MainMenuUI_ASA_C::UpdateHDR(float* CallFunc_GetFloatValue_ReturnValue, bool* CallFunc_GetBoolValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "UpdateHDR");

	Params::UVisualSettings_MainMenuUI_ASA_C_UpdateHDR_Params Parms{};

	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetFloatValue_ReturnValue != nullptr)
		*CallFunc_GetFloatValue_ReturnValue = Parms.CallFunc_GetFloatValue_ReturnValue;

	if (CallFunc_GetBoolValue_ReturnValue != nullptr)
		*CallFunc_GetBoolValue_ReturnValue = Parms.CallFunc_GetBoolValue_ReturnValue;

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
// class FText                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// class FText                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_3                         (ConstParm, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_4                         (ConstParm, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_GetCurrentHDRDisplayNits_ReturnValue                    (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue                                       (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue_1                              (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue_1                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue_1                                     (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_1                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_2                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_3                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_2                         (ConstParm, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_1                         (ConstParm, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue                           (ConstParm, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              K2Node_ComponentBoundEvent_Index                                 (Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_4                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_5                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_6                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_7                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_SetupGettHdrValue_RealValue                             (BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_8                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_SetupGettHdrValue_RealValue_1                           (BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_9                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_SetupGettHdrValue_RealValue_2                           (BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_10               (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_11               (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_12               (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_13               (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_14               (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_SetupGettHdrValue_RealValue_3                           (BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_RealValue_4                           (BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_15               (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NoDestructor)
// double                             CallFunc_SetupGettHdrValue_RealValue_5                           (BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SetFloatValue_Value_ImplicitCast                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast                  (BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_1                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_1                (BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_2                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_2                (BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast                 (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast                 (Edit, ConstParm, ExportObject, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_1               (Edit, ConstParm, ExportObject, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast           (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_2               (Edit, ConstParm, ExportObject, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_3                (BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_3                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_4                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_4                (BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_5                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_5                (BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_3               (Edit, ConstParm, ExportObject, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_4               (Edit, ConstParm, ExportObject, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// float                              K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast_1         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast_1         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_5               (Edit, ConstParm, ExportObject, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// float                              K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast_1         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)

float UVisualSettings_MainMenuUI_ASA_C::ExecuteUbergraph_VisualSettings_MainMenuUI_ASA(int32 EntryPoint, int32* CallFunc_GetCurrentHDRDisplayNits_ReturnValue, double* CallFunc_Divide_DoubleFloat_ReturnValue, float* CallFunc_GetFloatValue_ReturnValue, float* CallFunc_GetFloatValue_ReturnValue_1, float* CallFunc_GetFloatValue_ReturnValue_2, float* CallFunc_GetFloatValue_ReturnValue_3, float* CallFunc_GetFloatValue_ReturnValue_4, float* CallFunc_GetFloatValue_ReturnValue_5, float* CallFunc_SetFloatValue_Value_ImplicitCast, double* CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast, double* CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1, double* CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2, double* CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3, double* CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4, double* CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "ExecuteUbergraph_VisualSettings_MainMenuUI_ASA");

	Params::UVisualSettings_MainMenuUI_ASA_C_ExecuteUbergraph_VisualSettings_MainMenuUI_ASA_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetCurrentHDRDisplayNits_ReturnValue != nullptr)
		*CallFunc_GetCurrentHDRDisplayNits_ReturnValue = Parms.CallFunc_GetCurrentHDRDisplayNits_ReturnValue;

	if (CallFunc_Divide_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Divide_DoubleFloat_ReturnValue = Parms.CallFunc_Divide_DoubleFloat_ReturnValue;

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

	if (CallFunc_SetFloatValue_Value_ImplicitCast != nullptr)
		*CallFunc_SetFloatValue_Value_ImplicitCast = Parms.CallFunc_SetFloatValue_Value_ImplicitCast;

	if (CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast != nullptr)
		*CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast = Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast;

	if (CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1 != nullptr)
		*CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1 = Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1;

	if (CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2 != nullptr)
		*CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2 = Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2;

	if (CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3 != nullptr)
		*CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3 = Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3;

	if (CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4 != nullptr)
		*CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4 = Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4;

	if (CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5 != nullptr)
		*CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5 = Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5;

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


