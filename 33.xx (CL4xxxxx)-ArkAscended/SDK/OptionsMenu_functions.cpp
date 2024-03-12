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
// class FString                      SelectedItem                                                     (ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

enum class ESelectInfo UOptionsMenu_C::BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

enum class ESelectInfo UOptionsMenu_C::BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

enum class ESelectInfo UOptionsMenu_C::BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__TerrainShadowComboBox_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

enum class ESelectInfo UOptionsMenu_C::BndEvt__TerrainShadowComboBox_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__TerrainShadowComboBox_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__TerrainShadowComboBox_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

enum class ESelectInfo UOptionsMenu_C::BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

enum class ESelectInfo UOptionsMenu_C::BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__TrueSkyQualitySlider_K2Node_ComponentBoundEvent_67_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

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
// float                              Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

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
// bool                               bIsChecked                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__FilmGrainCheckbox_K2Node_ComponentBoundEvent_193_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__FilmGrainCheckbox_K2Node_ComponentBoundEvent_193_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__FilmGrainCheckbox_K2Node_ComponentBoundEvent_193_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsChecked != nullptr)
		*bIsChecked = Parms.bIsChecked;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__UseDFAOCheckbox_K2Node_ComponentBoundEvent_206_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__UseDFAOCheckbox_K2Node_ComponentBoundEvent_206_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__UseDFAOCheckbox_K2Node_ComponentBoundEvent_206_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__UseDFAOCheckbox_K2Node_ComponentBoundEvent_206_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsChecked != nullptr)
		*bIsChecked = Parms.bIsChecked;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__SSAOCheckbox_K2Node_ComponentBoundEvent_220_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__SSAOCheckbox_K2Node_ComponentBoundEvent_220_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__SSAOCheckbox_K2Node_ComponentBoundEvent_220_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__SSAOCheckbox_K2Node_ComponentBoundEvent_220_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsChecked != nullptr)
		*bIsChecked = Parms.bIsChecked;

}


// Function OptionsMenu.OptionsMenu_C.BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

enum class ESelectInfo UOptionsMenu_C::BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu.OptionsMenu_C.OptionsGraphTick
// (BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UOptionsMenu_C::OptionsGraphTick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "OptionsGraphTick");

	Params::UOptionsMenu_C_OptionsGraphTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_6                        (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_6                       (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_5                        (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_5                       (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_4                        (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_4                       (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_3                        (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_3                       (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_2                        (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_2                       (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_1                        (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_1                       (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_ComponentBoundEvent_Value_1                               (ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_ComponentBoundEvent_Value                                 (ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_2                          (Edit, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (Edit, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (Edit, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsHovered_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool UOptionsMenu_C::ExecuteUbergraph_OptionsMenu(int32* EntryPoint, const class FString& K2Node_ComponentBoundEvent_SelectedItem_6, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType_6, const class FString& K2Node_ComponentBoundEvent_SelectedItem_5, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType_5, const class FString& K2Node_ComponentBoundEvent_SelectedItem_4, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType_4, const class FString& K2Node_ComponentBoundEvent_SelectedItem_3, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType_3, const class FString& K2Node_ComponentBoundEvent_SelectedItem_2, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType_2, const class FString& K2Node_ComponentBoundEvent_SelectedItem_1, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType_1, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, bool K2Node_ComponentBoundEvent_bIsChecked_2, bool K2Node_ComponentBoundEvent_bIsChecked_1, bool K2Node_ComponentBoundEvent_bIsChecked, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsHovered_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "ExecuteUbergraph_OptionsMenu");

	Params::UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params Parms{};

	Parms.K2Node_ComponentBoundEvent_SelectedItem_6 = K2Node_ComponentBoundEvent_SelectedItem_6;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_5 = K2Node_ComponentBoundEvent_SelectedItem_5;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_4 = K2Node_ComponentBoundEvent_SelectedItem_4;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_3 = K2Node_ComponentBoundEvent_SelectedItem_3;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_2 = K2Node_ComponentBoundEvent_SelectedItem_2;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_1 = K2Node_ComponentBoundEvent_SelectedItem_1;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_2 = K2Node_ComponentBoundEvent_bIsChecked_2;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_1 = K2Node_ComponentBoundEvent_bIsChecked_1;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_ComponentBoundEvent_SelectionType_6 != nullptr)
		*K2Node_ComponentBoundEvent_SelectionType_6 = Parms.K2Node_ComponentBoundEvent_SelectionType_6;

	if (K2Node_ComponentBoundEvent_SelectionType_5 != nullptr)
		*K2Node_ComponentBoundEvent_SelectionType_5 = Parms.K2Node_ComponentBoundEvent_SelectionType_5;

	if (K2Node_ComponentBoundEvent_SelectionType_4 != nullptr)
		*K2Node_ComponentBoundEvent_SelectionType_4 = Parms.K2Node_ComponentBoundEvent_SelectionType_4;

	if (K2Node_ComponentBoundEvent_SelectionType_3 != nullptr)
		*K2Node_ComponentBoundEvent_SelectionType_3 = Parms.K2Node_ComponentBoundEvent_SelectionType_3;

	if (K2Node_ComponentBoundEvent_SelectionType_2 != nullptr)
		*K2Node_ComponentBoundEvent_SelectionType_2 = Parms.K2Node_ComponentBoundEvent_SelectionType_2;

	if (K2Node_ComponentBoundEvent_SelectionType_1 != nullptr)
		*K2Node_ComponentBoundEvent_SelectionType_1 = Parms.K2Node_ComponentBoundEvent_SelectionType_1;

	if (K2Node_ComponentBoundEvent_SelectionType != nullptr)
		*K2Node_ComponentBoundEvent_SelectionType = Parms.K2Node_ComponentBoundEvent_SelectionType;

	return Parms.ReturnValue;

}

}


