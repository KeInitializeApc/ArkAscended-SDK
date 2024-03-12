#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass OptionSelector_Widget.OptionSelector_Widget_C
// (None)

class UClass* UOptionSelector_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptionSelector_Widget_C");

	return Clss;
}


// OptionSelector_Widget_C OptionSelector_Widget.Default__OptionSelector_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOptionSelector_Widget_C* UOptionSelector_Widget_C::GetDefaultObj()
{
	static class UOptionSelector_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptionSelector_Widget_C*>(UOptionSelector_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OptionSelector_Widget.OptionSelector_Widget_C.BndEvt__OptionSelector_Widget_CustomButton_HUB_ASA_C_40_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionSelector_Widget_C::BndEvt__OptionSelector_Widget_CustomButton_HUB_ASA_C_40_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionSelector_Widget_C", "BndEvt__OptionSelector_Widget_CustomButton_HUB_ASA_C_40_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionSelector_Widget.OptionSelector_Widget_C.InitOption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               IsToggled                                                        (ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        InText                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)

bool UOptionSelector_Widget_C::InitOption(class UTexture2D* Icon, class FText* InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionSelector_Widget_C", "InitOption");

	Params::UOptionSelector_Widget_C_InitOption_Params Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

	if (InText != nullptr)
		*InText = Parms.InText;

	return Parms.ReturnValue;

}


// Function OptionSelector_Widget.OptionSelector_Widget_C.ExecuteUbergraph_OptionSelector_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UTexture2D*                  K2Node_CustomEvent_Icon                                          (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_CustomEvent_IsToggled                                     (Edit, ExportObject, EditFixedSize, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class FText                        K2Node_CustomEvent_InText                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_GetToggledState_ReturnValue                             (ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UOptionSelector_Widget_C::ExecuteUbergraph_OptionSelector_Widget(int32* EntryPoint, class UTexture2D* K2Node_CustomEvent_Icon, bool* K2Node_CustomEvent_IsToggled, class UObject** CallFunc_GetOuterObject_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue_1, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_GetToggledState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionSelector_Widget_C", "ExecuteUbergraph_OptionSelector_Widget");

	Params::UOptionSelector_Widget_C_ExecuteUbergraph_OptionSelector_Widget_Params Parms{};

	Parms.K2Node_CustomEvent_Icon = K2Node_CustomEvent_Icon;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_CustomEvent_IsToggled != nullptr)
		*K2Node_CustomEvent_IsToggled = Parms.K2Node_CustomEvent_IsToggled;

	if (CallFunc_GetOuterObject_ReturnValue != nullptr)
		*CallFunc_GetOuterObject_ReturnValue = Parms.CallFunc_GetOuterObject_ReturnValue;

	if (CallFunc_GetOuterObject_ReturnValue_1 != nullptr)
		*CallFunc_GetOuterObject_ReturnValue_1 = Parms.CallFunc_GetOuterObject_ReturnValue_1;

	if (K2Node_MakeStruct_BPNetExecParams != nullptr)
		*K2Node_MakeStruct_BPNetExecParams = std::move(Parms.K2Node_MakeStruct_BPNetExecParams);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetToggledState_ReturnValue != nullptr)
		*CallFunc_GetToggledState_ReturnValue = Parms.CallFunc_GetToggledState_ReturnValue;

	return Parms.ReturnValue;

}

}


