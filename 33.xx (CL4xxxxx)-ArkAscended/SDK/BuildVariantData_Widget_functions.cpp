#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BuildVariantData_Widget.BuildVariantData_Widget_C
// (None)

class UClass* UBuildVariantData_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuildVariantData_Widget_C");

	return Clss;
}


// BuildVariantData_Widget_C BuildVariantData_Widget.Default__BuildVariantData_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuildVariantData_Widget_C* UBuildVariantData_Widget_C::GetDefaultObj()
{
	static class UBuildVariantData_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuildVariantData_Widget_C*>(UBuildVariantData_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuildVariantData_Widget.BuildVariantData_Widget_C.UpdateData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               Selected                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               Gamepad                                                          (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class UTexture2D*                  GamepadTexture                                                   (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      KBMKey                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBuildVariantData_Widget_C::UpdateData(class UTexture2D* Icon, bool* Selected, bool* Gamepad, class UTexture2D** GamepadTexture, const class FString& KBMKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildVariantData_Widget_C", "UpdateData");

	Params::UBuildVariantData_Widget_C_UpdateData_Params Parms{};

	Parms.Icon = Icon;
	Parms.KBMKey = KBMKey;

	UObject::ProcessEvent(Func, &Parms);

	if (Selected != nullptr)
		*Selected = Parms.Selected;

	if (Gamepad != nullptr)
		*Gamepad = Parms.Gamepad;

	if (GamepadTexture != nullptr)
		*GamepadTexture = Parms.GamepadTexture;

}


// Function BuildVariantData_Widget.BuildVariantData_Widget_C.ExecuteUbergraph_BuildVariantData_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UTexture2D*                  K2Node_CustomEvent_Icon                                          (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_CustomEvent_Selected                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_CustomEvent_Gamepad                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UTexture2D*                  K2Node_CustomEvent_GamepadTexture                                (Edit, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      K2Node_CustomEvent_KBMKey                                        (Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              CallFunc_Len_ReturnValue                                         (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

int32 UBuildVariantData_Widget_C::ExecuteUbergraph_BuildVariantData_Widget(int32* EntryPoint, class UTexture2D* K2Node_CustomEvent_Icon, bool K2Node_CustomEvent_Selected, bool* K2Node_CustomEvent_Gamepad, class UTexture2D* K2Node_CustomEvent_GamepadTexture, const class FString& K2Node_CustomEvent_KBMKey, int32 CallFunc_Len_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildVariantData_Widget_C", "ExecuteUbergraph_BuildVariantData_Widget");

	Params::UBuildVariantData_Widget_C_ExecuteUbergraph_BuildVariantData_Widget_Params Parms{};

	Parms.K2Node_CustomEvent_Icon = K2Node_CustomEvent_Icon;
	Parms.K2Node_CustomEvent_Selected = K2Node_CustomEvent_Selected;
	Parms.K2Node_CustomEvent_GamepadTexture = K2Node_CustomEvent_GamepadTexture;
	Parms.K2Node_CustomEvent_KBMKey = K2Node_CustomEvent_KBMKey;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_CustomEvent_Gamepad != nullptr)
		*K2Node_CustomEvent_Gamepad = Parms.K2Node_CustomEvent_Gamepad;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}

}


