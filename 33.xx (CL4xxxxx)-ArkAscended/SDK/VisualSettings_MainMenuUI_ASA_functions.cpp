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
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// double                             MinValue                                                         (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             MaxValue                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             RealValue                                                        (Edit, ConstParm, Net, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

double UVisualSettings_MainMenuUI_ASA_C::SetupGettHdrValue(float* Value, double* CallFunc_Lerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "SetupGettHdrValue");

	Params::UVisualSettings_MainMenuUI_ASA_C_SetupGettHdrValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

	if (CallFunc_Lerp_ReturnValue != nullptr)
		*CallFunc_Lerp_ReturnValue = Parms.CallFunc_Lerp_ReturnValue;

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.SetupSetHdrValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataListValueGeneric*       Self2                                                            (ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// double                             MinValue                                                         (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             MaxValue                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1                   (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_SetFloatValue_Value_ImplicitCast                        (ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

double UVisualSettings_MainMenuUI_ASA_C::SetupSetHdrValue(float* Value, double* CallFunc_Subtract_DoubleFloat_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_SetFloatValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "SetupSetHdrValue");

	Params::UVisualSettings_MainMenuUI_ASA_C_SetupSetHdrValue_Params Parms{};

	Parms.CallFunc_Subtract_DoubleFloat_A_ImplicitCast = CallFunc_Subtract_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_SetFloatValue_Value_ImplicitCast = CallFunc_SetFloatValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.Get HDRMid Luminence B Is Enabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetBoolValue_ReturnValue_1                              (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)

bool UVisualSettings_MainMenuUI_ASA_C::Get_HDRMid_Luminence_B_Is_Enabled(bool ReturnValue, bool CallFunc_GetBoolValue_ReturnValue, bool CallFunc_GetBoolValue_ReturnValue_1, bool* CallFunc_GetIsEnabled_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "Get HDRMid Luminence B Is Enabled");

	Params::UVisualSettings_MainMenuUI_ASA_C_Get_HDRMid_Luminence_B_Is_Enabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue = CallFunc_GetBoolValue_ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue_1 = CallFunc_GetBoolValue_ReturnValue_1;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

	return Parms.ReturnValue;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.UpdateHDR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetFloatValue_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

double UVisualSettings_MainMenuUI_ASA_C::UpdateHDR(float CallFunc_GetFloatValue_ReturnValue, double* CallFunc_Lerp_ReturnValue, bool CallFunc_GetBoolValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "UpdateHDR");

	Params::UVisualSettings_MainMenuUI_ASA_C_UpdateHDR_Params Parms{};

	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue = CallFunc_GetBoolValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Lerp_ReturnValue != nullptr)
		*CallFunc_Lerp_ReturnValue = Parms.CallFunc_Lerp_ReturnValue;

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
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

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
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_3                         (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_4                         (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_GetCurrentHDRDisplayNits_ReturnValue                    (ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue_1                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue_1                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_1                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_2                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetFloatValue_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_3                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, NonTransactional)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_2                         (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_1                         (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue                           (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_4                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, RepNotify, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_5                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, Interp, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_6                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_7                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, EditorOnly)
// double                             CallFunc_SetupGettHdrValue_RealValue                             (ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_8                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_SetupGettHdrValue_RealValue_1                           (ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_9                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_SetupGettHdrValue_RealValue_2                           (ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_10               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp, EditorOnly)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_11               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, NonTransactional, EditorOnly)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_12               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_13               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_14               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_SetupGettHdrValue_RealValue_3                           (ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_RealValue_4                           (ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_15               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, NoDestructor)
// double                             CallFunc_SetupGettHdrValue_RealValue_5                           (ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SetFloatValue_Value_ImplicitCast                        (ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_1                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_1                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_2                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_2                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast                 (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// float                              K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast           (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_1               (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_2               (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_3                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_3                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_4                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_4                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_5                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_5                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_3               (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_4               (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// float                              K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast_1         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast_1         (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_5               (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// float                              K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast_1         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)

class UShooterGameUserSettings* UVisualSettings_MainMenuUI_ASA_C::ExecuteUbergraph_VisualSettings_MainMenuUI_ASA(class FText* K2Node_ComponentBoundEvent_ReturnValue_3, int32* K2Node_ComponentBoundEvent_Index_3, class FText* K2Node_ComponentBoundEvent_ReturnValue_4, int32* K2Node_ComponentBoundEvent_Index_4, int32 CallFunc_GetCurrentHDRDisplayNits_ReturnValue, class UWorld** CallFunc_GetGameWorld_ReturnValue, bool* CallFunc_TriggerLevelCustomEvents_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UWorld** CallFunc_GetGameWorld_ReturnValue_1, bool* CallFunc_TriggerLevelCustomEvents_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_2, class FText* K2Node_ComponentBoundEvent_ReturnValue_2, int32* K2Node_ComponentBoundEvent_Index_2, class FText* K2Node_ComponentBoundEvent_ReturnValue_1, int32* K2Node_ComponentBoundEvent_Index_1, class FText* K2Node_ComponentBoundEvent_ReturnValue, int32* K2Node_ComponentBoundEvent_Index, double CallFunc_SetupGettHdrValue_RealValue, double CallFunc_SetupGettHdrValue_RealValue_1, double CallFunc_SetupGettHdrValue_RealValue_2, float CallFunc_GetFloatValue_ReturnValue_3, float CallFunc_GetFloatValue_ReturnValue_4, float CallFunc_GetFloatValue_ReturnValue_5, double CallFunc_SetupGettHdrValue_RealValue_3, double CallFunc_SetupGettHdrValue_RealValue_4, double CallFunc_SetupGettHdrValue_RealValue_5, float CallFunc_SetFloatValue_Value_ImplicitCast, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_1, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_1, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_2, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_2, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast, float* K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_1, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1, float* K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_2, float* K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_3, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_3, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_4, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_4, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_5, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_5, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_3, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_4, float* K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast_1, float* K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast_1, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_5, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5, float* K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "ExecuteUbergraph_VisualSettings_MainMenuUI_ASA");

	Params::UVisualSettings_MainMenuUI_ASA_C_ExecuteUbergraph_VisualSettings_MainMenuUI_ASA_Params Parms{};

	Parms.CallFunc_GetCurrentHDRDisplayNits_ReturnValue = CallFunc_GetCurrentHDRDisplayNits_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.CallFunc_SetupGettHdrValue_RealValue = CallFunc_SetupGettHdrValue_RealValue;
	Parms.CallFunc_SetupGettHdrValue_RealValue_1 = CallFunc_SetupGettHdrValue_RealValue_1;
	Parms.CallFunc_SetupGettHdrValue_RealValue_2 = CallFunc_SetupGettHdrValue_RealValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_GetFloatValue_ReturnValue_4 = CallFunc_GetFloatValue_ReturnValue_4;
	Parms.CallFunc_GetFloatValue_ReturnValue_5 = CallFunc_GetFloatValue_ReturnValue_5;
	Parms.CallFunc_SetupGettHdrValue_RealValue_3 = CallFunc_SetupGettHdrValue_RealValue_3;
	Parms.CallFunc_SetupGettHdrValue_RealValue_4 = CallFunc_SetupGettHdrValue_RealValue_4;
	Parms.CallFunc_SetupGettHdrValue_RealValue_5 = CallFunc_SetupGettHdrValue_RealValue_5;
	Parms.CallFunc_SetFloatValue_Value_ImplicitCast = CallFunc_SetFloatValue_Value_ImplicitCast;
	Parms.CallFunc_SetupSetHdrValue_MinValue_ImplicitCast = CallFunc_SetupSetHdrValue_MinValue_ImplicitCast;
	Parms.CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast = CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast;
	Parms.CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_1 = CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_1;
	Parms.CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_1 = CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_1;
	Parms.CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_2 = CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_2;
	Parms.CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_2 = CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_2;
	Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast = CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast;
	Parms.CallFunc_SetupGettHdrValue_MinValue_ImplicitCast = CallFunc_SetupGettHdrValue_MinValue_ImplicitCast;
	Parms.CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_1 = CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_1;
	Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1 = CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1;
	Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2 = CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2;
	Parms.CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_2 = CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_2;
	Parms.CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_3 = CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_3;
	Parms.CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_3 = CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_3;
	Parms.CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_4 = CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_4;
	Parms.CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_4 = CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_4;
	Parms.CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_5 = CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_5;
	Parms.CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_5 = CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_5;
	Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3 = CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3;
	Parms.CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_3 = CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_3;
	Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4 = CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4;
	Parms.CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_4 = CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_4;
	Parms.CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_5 = CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_5;
	Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5 = CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_ComponentBoundEvent_ReturnValue_3 != nullptr)
		*K2Node_ComponentBoundEvent_ReturnValue_3 = Parms.K2Node_ComponentBoundEvent_ReturnValue_3;

	if (K2Node_ComponentBoundEvent_Index_3 != nullptr)
		*K2Node_ComponentBoundEvent_Index_3 = Parms.K2Node_ComponentBoundEvent_Index_3;

	if (K2Node_ComponentBoundEvent_ReturnValue_4 != nullptr)
		*K2Node_ComponentBoundEvent_ReturnValue_4 = Parms.K2Node_ComponentBoundEvent_ReturnValue_4;

	if (K2Node_ComponentBoundEvent_Index_4 != nullptr)
		*K2Node_ComponentBoundEvent_Index_4 = Parms.K2Node_ComponentBoundEvent_Index_4;

	if (CallFunc_GetGameWorld_ReturnValue != nullptr)
		*CallFunc_GetGameWorld_ReturnValue = Parms.CallFunc_GetGameWorld_ReturnValue;

	if (CallFunc_TriggerLevelCustomEvents_ReturnValue != nullptr)
		*CallFunc_TriggerLevelCustomEvents_ReturnValue = Parms.CallFunc_TriggerLevelCustomEvents_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetGameWorld_ReturnValue_1 != nullptr)
		*CallFunc_GetGameWorld_ReturnValue_1 = Parms.CallFunc_GetGameWorld_ReturnValue_1;

	if (CallFunc_TriggerLevelCustomEvents_ReturnValue_1 != nullptr)
		*CallFunc_TriggerLevelCustomEvents_ReturnValue_1 = Parms.CallFunc_TriggerLevelCustomEvents_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (K2Node_ComponentBoundEvent_ReturnValue_2 != nullptr)
		*K2Node_ComponentBoundEvent_ReturnValue_2 = Parms.K2Node_ComponentBoundEvent_ReturnValue_2;

	if (K2Node_ComponentBoundEvent_Index_2 != nullptr)
		*K2Node_ComponentBoundEvent_Index_2 = Parms.K2Node_ComponentBoundEvent_Index_2;

	if (K2Node_ComponentBoundEvent_ReturnValue_1 != nullptr)
		*K2Node_ComponentBoundEvent_ReturnValue_1 = Parms.K2Node_ComponentBoundEvent_ReturnValue_1;

	if (K2Node_ComponentBoundEvent_Index_1 != nullptr)
		*K2Node_ComponentBoundEvent_Index_1 = Parms.K2Node_ComponentBoundEvent_Index_1;

	if (K2Node_ComponentBoundEvent_ReturnValue != nullptr)
		*K2Node_ComponentBoundEvent_ReturnValue = Parms.K2Node_ComponentBoundEvent_ReturnValue;

	if (K2Node_ComponentBoundEvent_Index != nullptr)
		*K2Node_ComponentBoundEvent_Index = Parms.K2Node_ComponentBoundEvent_Index;

	if (K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast != nullptr)
		*K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast = Parms.K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast;

	if (K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast != nullptr)
		*K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast = Parms.K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast;

	if (K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast != nullptr)
		*K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast = Parms.K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast;

	if (K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast_1 != nullptr)
		*K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast_1 = Parms.K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast_1;

	if (K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast_1 != nullptr)
		*K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast_1 = Parms.K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast_1;

	if (K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast_1 != nullptr)
		*K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast_1 = Parms.K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast_1;

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


