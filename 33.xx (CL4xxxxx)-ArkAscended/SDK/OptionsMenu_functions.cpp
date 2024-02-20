#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C
// (None)

class UClass* UOptionsMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptionsMenu_C");

	return Clss;
}


// OptionsMenu_C OptionsMenu.Default__OptionsMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOptionsMenu_C* UOptionsMenu_C::GetDefaultObj()
{
	static class UOptionsMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptionsMenu_C*>(UOptionsMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OptionsMenu.OptionsMenu_C.BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__TerrainShadowComboBox_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__TerrainShadowComboBox_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__TerrainShadowComboBox_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__TerrainShadowComboBox_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__TrueSkyQualitySlider_K2Node_ComponentBoundEvent_67_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void UOptionsMenu_C::BndEvt__TrueSkyQualitySlider_K2Node_ComponentBoundEvent_67_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__TrueSkyQualitySlider_K2Node_ComponentBoundEvent_67_OnFloatValueChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__TrueSkyQualitySlider_K2Node_ComponentBoundEvent_67_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__GroundClutterDensitySlider_K2Node_ComponentBoundEvent_81_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void UOptionsMenu_C::BndEvt__GroundClutterDensitySlider_K2Node_ComponentBoundEvent_81_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__GroundClutterDensitySlider_K2Node_ComponentBoundEvent_81_OnFloatValueChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__GroundClutterDensitySlider_K2Node_ComponentBoundEvent_81_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__FilmGrainCheckbox_K2Node_ComponentBoundEvent_193_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

bool UOptionsMenu_C::BndEvt__FilmGrainCheckbox_K2Node_ComponentBoundEvent_193_OnCheckBoxComponentStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__FilmGrainCheckbox_K2Node_ComponentBoundEvent_193_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__FilmGrainCheckbox_K2Node_ComponentBoundEvent_193_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__UseDFAOCheckbox_K2Node_ComponentBoundEvent_206_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

bool UOptionsMenu_C::BndEvt__UseDFAOCheckbox_K2Node_ComponentBoundEvent_206_OnCheckBoxComponentStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__UseDFAOCheckbox_K2Node_ComponentBoundEvent_206_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__UseDFAOCheckbox_K2Node_ComponentBoundEvent_206_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__SSAOCheckbox_K2Node_ComponentBoundEvent_220_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

bool UOptionsMenu_C::BndEvt__SSAOCheckbox_K2Node_ComponentBoundEvent_220_OnCheckBoxComponentStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__SSAOCheckbox_K2Node_ComponentBoundEvent_220_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__SSAOCheckbox_K2Node_ComponentBoundEvent_220_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu.OptionsMenu_C.OptionsGraphTick
// (BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UOptionsMenu_C::OptionsGraphTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "OptionsGraphTick");

	Params::UOptionsMenu_C_OptionsGraphTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__OptionsMenu_OpenModShopButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_OpenModShopButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_OpenModShopButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_6                        (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_6                       (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_5                        (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_5                       (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_4                        (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_4                       (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_3                        (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_3                       (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_2                        (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_2                       (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_1                        (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_1                       (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_ComponentBoundEvent_Value_1                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_ComponentBoundEvent_Value                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_2                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_IsHovered_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UOptionsMenu_C::ExecuteUbergraph_OptionsMenu(float* K2Node_ComponentBoundEvent_Value_1, float* K2Node_ComponentBoundEvent_Value, bool* K2Node_ComponentBoundEvent_bIsChecked_2, bool* K2Node_ComponentBoundEvent_bIsChecked_1, bool* K2Node_ComponentBoundEvent_bIsChecked, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* CallFunc_IsHovered_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "ExecuteUbergraph_OptionsMenu");

	Params::UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params Parms{};

	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_ComponentBoundEvent_Value_1 != nullptr)
		*K2Node_ComponentBoundEvent_Value_1 = Parms.K2Node_ComponentBoundEvent_Value_1;

	if (K2Node_ComponentBoundEvent_Value != nullptr)
		*K2Node_ComponentBoundEvent_Value = Parms.K2Node_ComponentBoundEvent_Value;

	if (K2Node_ComponentBoundEvent_bIsChecked_2 != nullptr)
		*K2Node_ComponentBoundEvent_bIsChecked_2 = Parms.K2Node_ComponentBoundEvent_bIsChecked_2;

	if (K2Node_ComponentBoundEvent_bIsChecked_1 != nullptr)
		*K2Node_ComponentBoundEvent_bIsChecked_1 = Parms.K2Node_ComponentBoundEvent_bIsChecked_1;

	if (K2Node_ComponentBoundEvent_bIsChecked != nullptr)
		*K2Node_ComponentBoundEvent_bIsChecked = Parms.K2Node_ComponentBoundEvent_bIsChecked;

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_IsHovered_ReturnValue != nullptr)
		*CallFunc_IsHovered_ReturnValue = Parms.CallFunc_IsHovered_ReturnValue;

	return Parms.ReturnValue;

}

}


