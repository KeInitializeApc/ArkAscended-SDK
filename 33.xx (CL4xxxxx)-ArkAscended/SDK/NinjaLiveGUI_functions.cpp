#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NinjaLiveGUI.NinjaLiveGUI_C
// (None)

class UClass* UNinjaLiveGUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NinjaLiveGUI_C");

	return Clss;
}


// NinjaLiveGUI_C NinjaLiveGUI.Default__NinjaLiveGUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNinjaLiveGUI_C* UNinjaLiveGUI_C::GetDefaultObj()
{
	static class UNinjaLiveGUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNinjaLiveGUI_C*>(UNinjaLiveGUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NinjaLiveGUI.NinjaLiveGUI_C.GetSelectedActor
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedActorIndex                                               (Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class ANinjaLive_C*                NinjaLiveActor                                                   (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<class ANinjaLive_PresetManager_C*>CallFunc_GetAllActorsOfClass_OutActors                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class ANinjaLive_PresetManager_C*  CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class ANinjaLive_C*                K2Node_DynamicCast_AsNinja_Live                                  (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

class ANinjaLive_C* UNinjaLiveGUI_C::GetSelectedActor(class ANinjaLive_PresetManager_C* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "GetSelectedActor");

	Params::UNinjaLiveGUI_C_GetSelectedActor_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNinjaLiveGUI_C::BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

enum class ESelectInfo UNinjaLiveGUI_C::BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNinjaLiveGUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UNinjaLiveGUI_C::PreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "PreConstruct");

	Params::UNinjaLiveGUI_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_Presets_K2Node_ComponentBoundEvent_36_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

enum class ESelectInfo UNinjaLiveGUI_C::BndEvt__ComboBox_Presets_K2Node_ComponentBoundEvent_36_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__ComboBox_Presets_K2Node_ComponentBoundEvent_36_OnSelectionChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__ComboBox_Presets_K2Node_ComponentBoundEvent_36_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_SavePreset_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNinjaLiveGUI_C::BndEvt__Button_SavePreset_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__Button_SavePreset_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_DuplicatePreset_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNinjaLiveGUI_C::BndEvt__Button_DuplicatePreset_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__Button_DuplicatePreset_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.OnPresetDuplicationFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  DuplicatedPreset                                                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UNinjaLiveGUI_C::OnPresetDuplicationFinished(class UDataTable* DuplicatedPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "OnPresetDuplicationFinished");

	Params::UNinjaLiveGUI_C_OnPresetDuplicationFinished_Params Parms{};

	Parms.DuplicatedPreset = DuplicatedPreset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__CheckBox_21_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void UNinjaLiveGUI_C::BndEvt__CheckBox_21_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__CheckBox_21_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__CheckBox_21_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsChecked != nullptr)
		*bIsChecked = Parms.bIsChecked;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Main3_Button_Minimize_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNinjaLiveGUI_C::BndEvt__Main3_Button_Minimize_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__Main3_Button_Minimize_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNinjaLiveGUI_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "Tick");

	Params::UNinjaLiveGUI_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__BP_NinjaGUI_UE5SaveWarningImageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNinjaLiveGUI_C::BndEvt__BP_NinjaGUI_UE5SaveWarningImageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__BP_NinjaGUI_UE5SaveWarningImageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_152_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNinjaLiveGUI_C::BndEvt__Button_152_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__Button_152_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__025_SimareaMoOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__025_SimareaMoOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__025_SimareaMoOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__025_SimareaMoOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__50bSpinBox_BrushRnd_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__50bSpinBox_BrushRnd_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__50bSpinBox_BrushRnd_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__50bSpinBox_BrushRnd_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_ClearBuffers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNinjaLiveGUI_C::BndEvt__Button_ClearBuffers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__Button_ClearBuffers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Speed_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_Speed_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_Speed_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_Speed_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNinjaLiveGUI_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__50SpinBox_BrushNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__50SpinBox_BrushNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__50SpinBox_BrushNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__50SpinBox_BrushNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Density2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_Density2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_Density2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_Density2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Density3_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_Density3_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_Density3_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_Density3_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Density4_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_Density4_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_Density4_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_Density4_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__45SpinBox_VeloFromSimAreaMotion_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__45SpinBox_VeloFromSimAreaMotion_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__45SpinBox_VeloFromSimAreaMotion_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__45SpinBox_VeloFromSimAreaMotion_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__50ComboBox_NinjaOutputMaterial_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

enum class ESelectInfo UNinjaLiveGUI_C::BndEvt__50ComboBox_NinjaOutputMaterial_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__50ComboBox_NinjaOutputMaterial_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__50ComboBox_NinjaOutputMaterial_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__41SpinBox_BrushPuncture_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__41SpinBox_BrushPuncture_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__41SpinBox_BrushPuncture_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__41SpinBox_BrushPuncture_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__AddCheckBox1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void UNinjaLiveGUI_C::BndEvt__AddCheckBox1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__AddCheckBox1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__AddCheckBox1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsChecked != nullptr)
		*bIsChecked = Parms.bIsChecked;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__32SpinBox_DensSharpSize_K2Node_ComponentBoundEvent_41_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__32SpinBox_DensSharpSize_K2Node_ComponentBoundEvent_41_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__32SpinBox_DensSharpSize_K2Node_ComponentBoundEvent_41_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__32SpinBox_DensSharpSize_K2Node_ComponentBoundEvent_41_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__31SpinBox_DensSharpen_K2Node_ComponentBoundEvent_40_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__31SpinBox_DensSharpen_K2Node_ComponentBoundEvent_40_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__31SpinBox_DensSharpen_K2Node_ComponentBoundEvent_40_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__31SpinBox_DensSharpen_K2Node_ComponentBoundEvent_40_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__29SpinBox_DensHue_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__29SpinBox_DensHue_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__29SpinBox_DensHue_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__29SpinBox_DensHue_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__28SpinBox_DensContrast_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__28SpinBox_DensContrast_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__28SpinBox_DensContrast_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__28SpinBox_DensContrast_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__27SpinBox_DensShading_K2Node_ComponentBoundEvent_34_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__27SpinBox_DensShading_K2Node_ComponentBoundEvent_34_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__27SpinBox_DensShading_K2Node_ComponentBoundEvent_34_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__27SpinBox_DensShading_K2Node_ComponentBoundEvent_34_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__25SpinBox_DensInputWeight_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__25SpinBox_DensInputWeight_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__25SpinBox_DensInputWeight_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__25SpinBox_DensInputWeight_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__24SpinBox_VeloNoise_K2Node_ComponentBoundEvent_31_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__24SpinBox_VeloNoise_K2Node_ComponentBoundEvent_31_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__24SpinBox_VeloNoise_K2Node_ComponentBoundEvent_31_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__24SpinBox_VeloNoise_K2Node_ComponentBoundEvent_31_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__22SpinBox_VeloAmplify_K2Node_ComponentBoundEvent_15_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__22SpinBox_VeloAmplify_K2Node_ComponentBoundEvent_15_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__22SpinBox_VeloAmplify_K2Node_ComponentBoundEvent_15_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__22SpinBox_VeloAmplify_K2Node_ComponentBoundEvent_15_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__21SpinBox_VeloRotate_K2Node_ComponentBoundEvent_13_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__21SpinBox_VeloRotate_K2Node_ComponentBoundEvent_13_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__21SpinBox_VeloRotate_K2Node_ComponentBoundEvent_13_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__21SpinBox_VeloRotate_K2Node_ComponentBoundEvent_13_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__20SpinBox_VeloOffsetY_K2Node_ComponentBoundEvent_12_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__20SpinBox_VeloOffsetY_K2Node_ComponentBoundEvent_12_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__20SpinBox_VeloOffsetY_K2Node_ComponentBoundEvent_12_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__20SpinBox_VeloOffsetY_K2Node_ComponentBoundEvent_12_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__19SpinBox_VeloOffsetX_K2Node_ComponentBoundEvent_10_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__19SpinBox_VeloOffsetX_K2Node_ComponentBoundEvent_10_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__19SpinBox_VeloOffsetX_K2Node_ComponentBoundEvent_10_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__19SpinBox_VeloOffsetX_K2Node_ComponentBoundEvent_10_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_63_K2Node_ComponentBoundEvent_228_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_63_K2Node_ComponentBoundEvent_228_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_63_K2Node_ComponentBoundEvent_228_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_63_K2Node_ComponentBoundEvent_228_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_62_K2Node_ComponentBoundEvent_121_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_62_K2Node_ComponentBoundEvent_121_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_62_K2Node_ComponentBoundEvent_121_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_62_K2Node_ComponentBoundEvent_121_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__MultiLineEditableText_MetaData_K2Node_ComponentBoundEvent_26_OnMultiLineEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

class FText UNinjaLiveGUI_C::BndEvt__MultiLineEditableText_MetaData_K2Node_ComponentBoundEvent_26_OnMultiLineEditableTextCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__MultiLineEditableText_MetaData_K2Node_ComponentBoundEvent_26_OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__MultiLineEditableText_MetaData_K2Node_ComponentBoundEvent_26_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_60_K2Node_ComponentBoundEvent_225_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_60_K2Node_ComponentBoundEvent_225_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_60_K2Node_ComponentBoundEvent_225_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_60_K2Node_ComponentBoundEvent_225_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_224_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNinjaLiveGUI_C::BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_224_OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_224_OnOpeningEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_223_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

enum class ESelectInfo UNinjaLiveGUI_C::BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_223_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_223_OnSelectionChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_223_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_222_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNinjaLiveGUI_C::BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_222_OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_222_OnOpeningEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_120_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

enum class ESelectInfo UNinjaLiveGUI_C::BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_120_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_120_OnSelectionChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_120_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate1_K2Node_ComponentBoundEvent_220_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

enum class ESelectInfo UNinjaLiveGUI_C::BndEvt__ComboBox_NinjaTemplate1_K2Node_ComponentBoundEvent_220_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__ComboBox_NinjaTemplate1_K2Node_ComponentBoundEvent_220_OnSelectionChangedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__ComboBox_NinjaTemplate1_K2Node_ComponentBoundEvent_220_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_26_K2Node_ComponentBoundEvent_128_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_26_K2Node_ComponentBoundEvent_128_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_26_K2Node_ComponentBoundEvent_128_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_26_K2Node_ComponentBoundEvent_128_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNinjaLiveGUI_C::BndEvt__Button_14_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__Button_14_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_22_K2Node_ComponentBoundEvent_102_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_22_K2Node_ComponentBoundEvent_102_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_22_K2Node_ComponentBoundEvent_102_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_22_K2Node_ComponentBoundEvent_102_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_23_K2Node_ComponentBoundEvent_100_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_23_K2Node_ComponentBoundEvent_100_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_23_K2Node_ComponentBoundEvent_100_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_23_K2Node_ComponentBoundEvent_100_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_19_K2Node_ComponentBoundEvent_70_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_19_K2Node_ComponentBoundEvent_70_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_19_K2Node_ComponentBoundEvent_70_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_19_K2Node_ComponentBoundEvent_70_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_18_K2Node_ComponentBoundEvent_94_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_18_K2Node_ComponentBoundEvent_94_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_18_K2Node_ComponentBoundEvent_94_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_18_K2Node_ComponentBoundEvent_94_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_17_K2Node_ComponentBoundEvent_78_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_17_K2Node_ComponentBoundEvent_78_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_17_K2Node_ComponentBoundEvent_78_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_17_K2Node_ComponentBoundEvent_78_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_16_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_16_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_16_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_16_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_15_K2Node_ComponentBoundEvent_74_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_15_K2Node_ComponentBoundEvent_74_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_15_K2Node_ComponentBoundEvent_74_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_15_K2Node_ComponentBoundEvent_74_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_14_K2Node_ComponentBoundEvent_72_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_14_K2Node_ComponentBoundEvent_72_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_14_K2Node_ComponentBoundEvent_72_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_14_K2Node_ComponentBoundEvent_72_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_12_K2Node_ComponentBoundEvent_64_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_12_K2Node_ComponentBoundEvent_64_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_12_K2Node_ComponentBoundEvent_64_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_12_K2Node_ComponentBoundEvent_64_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_11_K2Node_ComponentBoundEvent_60_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_11_K2Node_ComponentBoundEvent_60_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_11_K2Node_ComponentBoundEvent_60_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_11_K2Node_ComponentBoundEvent_60_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_10_K2Node_ComponentBoundEvent_55_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UNinjaLiveGUI_C::BndEvt__SpinBox_10_K2Node_ComponentBoundEvent_55_OnSpinBoxValueCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "BndEvt__SpinBox_10_K2Node_ComponentBoundEvent_55_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UNinjaLiveGUI_C_BndEvt__SpinBox_10_K2Node_ComponentBoundEvent_55_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommitMethod != nullptr)
		*CommitMethod = Parms.CommitMethod;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.ExecuteUbergraph_NinjaLiveGUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_GetEngineVersion_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Mid_ReturnValue                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// TArray<struct FSoftObjectPath>     Temp_struct_Variable                                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<struct FTopLevelAssetPath>  Temp_struct_Variable_1                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_2                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// TSet<struct FTopLevelAssetPath>    Temp_struct_Variable_2                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_IsClosed_Variable                                      (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable_3                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable_3                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_4                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_4                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               Temp_bool_IsClosed_Variable_1                                    (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_5                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_5                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
// bool                               Temp_bool_Variable_6                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               Temp_bool_Variable_7                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_6                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_5                        (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_5                       (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable_8                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// bool                               Temp_bool_Variable_9                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
// TArray<class ANinjaLive_PresetManager_C*>CallFunc_GetAllActorsOfClass_OutActors                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<class ANinjaLive_PresetManager_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
// class ANinjaLive_PresetManager_C*  CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class ANinjaLive_PresetManager_C*  CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// TSet<struct FTopLevelAssetPath>    Temp_struct_Variable_3                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// TArray<class ANinjaLive_PresetManager_C*>CallFunc_GetAllActorsOfClass_OutActors_2                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_4                        (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_4                       (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class ANinjaLive_PresetManager_C*  CallFunc_Array_Get_Item_3                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item_4                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UNinjaLiveComponent_C*       CallFunc_GetComponentByClass_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable_10                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// TScriptInterface<class IAssetRegistry>CallFunc_GetAssetRegistry_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// TArray<class FName>                K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// TSet<class FName>                  K2Node_MakeSet_Set                                               (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTopLevelAssetPath>  Temp_struct_Variable_4                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               Temp_bool_Variable_11                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
// class UDataTable*                  K2Node_CustomEvent_DuplicatedPreset                              (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable_12                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// struct FAssetData                  CallFunc_CreateAssetData_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FSoftObjectPath>     Temp_struct_Variable_5                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (Edit, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_Variable_13                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Array_Get_Item_5                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_StartsWith_ReturnValue                                  (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_StartsWith_ReturnValue_1                                (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_StartsWith_ReturnValue_2                                (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_StartsWith_ReturnValue_3                                (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_StartsWith_ReturnValue_4                                (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_StartsWith_ReturnValue_5                                (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_StartsWith_ReturnValue_6                                (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_StartsWith_ReturnValue_7                                (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_StartsWith_ReturnValue_8                                (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_StartsWith_ReturnValue_9                                (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_StartsWith_ReturnValue_10                               (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_StartsWith_ReturnValue_11                               (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_StartsWith_ReturnValue_12                               (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_StartsWith_ReturnValue_13                               (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_StartsWith_ReturnValue_14                               (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_StartsWith_ReturnValue_15                               (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NoDestructor)
// bool                               CallFunc_StartsWith_ReturnValue_16                               (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_StartsWith_ReturnValue_17                               (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_StartsWith_ReturnValue_18                               (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
// bool                               CallFunc_StartsWith_ReturnValue_19                               (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
// bool                               CallFunc_StartsWith_ReturnValue_20                               (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// bool                               CallFunc_StartsWith_ReturnValue_21                               (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_StartsWith_ReturnValue_22                               (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_StartsWith_ReturnValue_23                               (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
// bool                               CallFunc_StartsWith_ReturnValue_24                               (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// bool                               CallFunc_StartsWith_ReturnValue_25                               (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// TSet<struct FTopLevelAssetPath>    Temp_struct_Variable_6                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// TArray<struct FTopLevelAssetPath>  Temp_struct_Variable_7                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               Temp_bool_Variable_14                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// TArray<struct FSoftObjectPath>     Temp_struct_Variable_8                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// class FString                      CallFunc_Array_Get_Item_6                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_15                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_3                           (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_16                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NoDestructor)
// bool                               Temp_bool_Variable_17                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NoDestructor)
// bool                               Temp_bool_Variable_18                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_Variable_19                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_GetDisplayName_ReturnValue_2                            (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_GetDisplayName_ReturnValue_3                            (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Len_ReturnValue                                         (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FARFilter                   CallFunc_MakeARFilter_ReturnValue                                (ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// TArray<struct FAssetData>          CallFunc_GetAssets_OutAssetData                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetAssets_ReturnValue                                   (DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
// class FString                      CallFunc_RightChop_ReturnValue                                   (ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_RightChop_ReturnValue_1                                 (ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_20                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_4                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_5                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class UNinjaLiveComponent_C*       CallFunc_GetComponentByClass_ReturnValue_1                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_6                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_7                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, EditorOnly)
// bool                               Temp_bool_Variable_21                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class FString                      Temp_string_Variable                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_22                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_8                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_9                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, EditorOnly)
// int32                              Temp_int_Array_Index_Variable_7                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, EditorOnly)
// bool                               Temp_bool_Variable_23                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly, NoDestructor)
// class FString                      CallFunc_Array_Get_Item_7                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, EditorOnly)
// bool                               Temp_bool_Variable_24                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// class FString                      Temp_string_Variable_1                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_25                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly, NoDestructor)
// bool                               Temp_bool_Variable_26                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// class FString                      Temp_string_Variable_2                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_Variable_27                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// bool                               Temp_bool_Variable_28                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_29                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_5                           (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_6                           (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_7                           (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_8                           (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_9                           (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_10                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_11                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_12                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_13                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_14                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_15                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_16                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_17                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_18                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_19                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_20                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_21                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_22                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_23                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_24                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_25                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_26                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_27                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_28                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_29                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_30                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_31                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_32                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_33                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_34                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_35                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_36                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_37                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_38                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_39                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_40                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_41                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_42                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_43                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_44                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_45                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_46                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_10                                  (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_47                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_48                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_49                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_50                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_51                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_52                          (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// class FString                      Temp_string_Variable_3                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      Temp_string_Variable_4                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_11                                  (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
// class FString                      Temp_string_Variable_5                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               Temp_bool_Variable_30                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// float                              K2Node_ComponentBoundEvent_InValue_52                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_33                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_31                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Replace_ReturnValue                                     (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_8                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, EditorOnly)
// class FString                      CallFunc_Array_Get_Item_8                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, EditorOnly)
// float                              K2Node_ComponentBoundEvent_InValue_51                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_32                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_ComponentBoundEvent_InValue_50                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_31                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_2                         (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_1                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Replace_ReturnValue_2                                   (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_2                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              K2Node_ComponentBoundEvent_InValue_49                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_48                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_30                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_47                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NoDestructor)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_29                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_3                         (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_4                         (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Replace_ReturnValue_3                                   (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Replace_ReturnValue_4                                   (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_3                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_4                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// float                              K2Node_ComponentBoundEvent_InValue_46                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               Temp_bool_Variable_32                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
// float                              K2Node_ComponentBoundEvent_InValue_45                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_28                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_44                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_5                         (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_5                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// float                              K2Node_ComponentBoundEvent_InValue_43                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_27                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue_5                                   (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_6                         (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_5                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_6                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Replace_ReturnValue_6                                   (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_6                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              K2Node_ComponentBoundEvent_InValue_42                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// float                              K2Node_ComponentBoundEvent_InValue_41                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_26                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_40                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_7                         (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, EditorOnly)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_7                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// class FString                      CallFunc_Replace_ReturnValue_7                                   (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, EditorOnly)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_7                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               Temp_bool_Variable_33                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              K2Node_ComponentBoundEvent_InValue_39                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// float                              K2Node_ComponentBoundEvent_InValue_38                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_25                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly, NoDestructor)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_8                         (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_8                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// class FString                      CallFunc_Replace_ReturnValue_8                                   (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// float                              K2Node_ComponentBoundEvent_InValue_37                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_8                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// float                              K2Node_ComponentBoundEvent_InValue_36                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_24                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// bool                               Temp_bool_Variable_34                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_9                         (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, EditorOnly)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_9                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// class FString                      CallFunc_Replace_ReturnValue_9                                   (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_9                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// float                              K2Node_ComponentBoundEvent_InValue_35                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_23                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_10                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_10                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      CallFunc_Replace_ReturnValue_10                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// float                              K2Node_ComponentBoundEvent_InValue_34                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_22                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_10                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_11                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_11                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// class FString                      CallFunc_Replace_ReturnValue_11                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// float                              K2Node_ComponentBoundEvent_InValue_33                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_21                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_11                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_12                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// float                              K2Node_ComponentBoundEvent_InValue_32                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_20                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_12                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_13                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Replace_ReturnValue_12                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_13                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_12                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FString                      CallFunc_Replace_ReturnValue_13                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_13                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// int32                              CallFunc_Array_Length_ReturnValue_10                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// float                              K2Node_ComponentBoundEvent_InValue_31                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_19                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_14                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_14                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Replace_ReturnValue_14                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_14                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class UObject*                     CallFunc_SelectObject_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMaterialInterface*          K2Node_DynamicCast_AsMaterial_Interface                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
// class UTextureRenderTarget2D*      CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UTextureRenderTarget2D*      CallFunc_Map_Find_Value_1                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UTextureRenderTarget2D*      CallFunc_Map_Find_Value_2                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UTextureRenderTarget2D*      CallFunc_Map_Find_Value_3                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_35                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_11                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_3                        (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_3                       (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_36                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// TArray<class FName>                K2Node_MakeArray_Array_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UMaterialInstanceDynamic*    K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// TArray<class FName>                K2Node_MakeArray_Array_3                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Array_Get_Item_9                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, EditorOnly)
// int32                              CallFunc_Array_Length_ReturnValue_12                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class UTextureRenderTarget2D*      CallFunc_Map_Find_Value_4                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Map_Find_ReturnValue_4                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue_1                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
// struct FSlateColor                 K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FSlateColor                 K2Node_Select_Default_2                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Abs_ReturnValue_2                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// struct FSlateColor                 K2Node_Select_Default_3                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Abs_ReturnValue_3                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_3                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_9                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp, EditorOnly)
// class UMaterialInterface*          CallFunc_Array_Get_Item_10                                       (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, EditorOnly)
// struct FSlateColor                 K2Node_Select_Default_4                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_GetDisplayName_ReturnValue_4                            (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UMaterialInterface*          CallFunc_Array_Get_Item_11                                       (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_8                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, EditorOnly)
// int32                              Temp_int_Loop_Counter_Variable_9                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
// bool                               Temp_bool_Variable_37                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue_4                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Abs_ReturnValue_5                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_4                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_5                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// struct FSlateColor                 K2Node_Select_Default_5                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// struct FSlateColor                 K2Node_Select_Default_6                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_10                                 (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      CallFunc_Array_Get_Item_12                                       (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// float                              K2Node_ComponentBoundEvent_InValue_30                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_29                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_18                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_15                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_15                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue_15                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_15                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_28                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_17                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_16                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_16                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_27                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue_16                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_16                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_26                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_16                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_17                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_11                                 (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional, EditorOnly)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_17                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// class UMaterialInterface*          CallFunc_Array_Get_Item_13                                       (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Replace_ReturnValue_17                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_5                            (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_17                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (Edit, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              K2Node_ComponentBoundEvent_InValue_25                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_24                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_23                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_22                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_21                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_20                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_19                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_18                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_17                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_16                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_15                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_10                                (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// int32                              Temp_int_Array_Index_Variable_12                                 (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// int32                              Temp_int_Array_Index_Variable_13                                 (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class AActor*                      CallFunc_Array_Get_Item_14                                       (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// struct FAssetData                  CallFunc_Array_Get_Item_15                                       (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_6                            (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_3                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FString                      CallFunc_RightChop_ReturnValue_2                                 (ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Contains_ReturnValue                                    (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class FString                      K2Node_Select_Default_7                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_ComponentBoundEvent_InValue_14                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_15                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_13                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_14                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_18                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NoDestructor)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_19                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_18                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_19                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue_18                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue_19                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_18                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_19                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_13                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_20                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_12                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_12                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_20                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_21                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue_20                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_20                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_11                                (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// int32                              CallFunc_Add_IntInt_ReturnValue_13                               (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FName                        CallFunc_Array_Get_Item_16                                       (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_13                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_3                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_GetSelectedOption_ReturnValue                           (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FName                        CallFunc_Array_Get_Item_17                                       (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_14                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_4                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_9                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// class FString                      CallFunc_GetSelectedOption_ReturnValue_1                         (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_38                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// TScriptInterface<class IAssetRegistry>CallFunc_GetAssetRegistry_ReturnValue_1                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
// TArray<struct FAssetData>          CallFunc_GetAssetsByPackageName_OutAssetData                     (BlueprintReadOnly, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetAssetsByPackageName_ReturnValue                      (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FAssetData                  CallFunc_Array_Get_Item_18                                       (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NoDestructor)
// class UObject*                     CallFunc_GetAsset_ReturnValue                                    (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_5                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_4                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ConstParm, ExportObject, Net, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_6                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               Temp_bool_Variable_39                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// TSet<class FName>                  K2Node_MakeSet_Set_1                                             (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// TArray<class FName>                K2Node_MakeArray_Array_4                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// TArray<class FName>                K2Node_MakeArray_Array_5                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_12                                (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// struct FARFilter                   CallFunc_MakeARFilter_ReturnValue_1                              (ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_10                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// int32                              CallFunc_Add_IntInt_ReturnValue_14                               (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// TScriptInterface<class IAssetRegistry>CallFunc_GetAssetRegistry_ReturnValue_2                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable_13                                (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// TArray<struct FAssetData>          CallFunc_GetAssets_OutAssetData_1                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_GetAssets_ReturnValue_1                                 (DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// struct FAssetData                  CallFunc_Array_Get_Item_19                                       (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_15                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_11                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_7                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_5                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_12                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// int32                              CallFunc_Add_IntInt_ReturnValue_15                               (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NoDestructor)
// TScriptInterface<class IAssetRegistry>CallFunc_GetAssetRegistry_ReturnValue_3                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// TSet<class FName>                  K2Node_MakeSet_Set_2                                             (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// TArray<struct FAssetData>          CallFunc_GetAssetsByPackageName_OutAssetData_1                   (BlueprintReadOnly, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_GetAssetsByPackageName_ReturnValue_1                    (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// TArray<class FName>                K2Node_MakeArray_Array_6                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FAssetData                  CallFunc_Array_Get_Item_20                                       (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array_7                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, EditorOnly)
// struct FARFilter                   CallFunc_MakeARFilter_ReturnValue_2                              (ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_8                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_9                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_6                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class UObject*                     CallFunc_GetAsset_ReturnValue_1                                  (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ConstParm, ExportObject, Net, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// TScriptInterface<class IAssetRegistry>CallFunc_GetAssetRegistry_ReturnValue_4                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// TArray<struct FAssetData>          CallFunc_GetAssets_OutAssetData_2                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GetAssets_ReturnValue_2                                 (DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FAssetData                  CallFunc_Array_Get_Item_21                                       (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_16                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_13                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_10                        (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_7                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_2                        (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_2                       (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_8                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_1                        (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_1                       (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_SelectString_ReturnValue_2                              (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, EditorOnly)
// bool                               CallFunc_Contains_ReturnValue_2                                  (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_9                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_10                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_11                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// float                              K2Node_ComponentBoundEvent_InValue_11                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_11                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_21                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_22                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_14                                 (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Replace_ReturnValue_21                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item_22                                       (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_21                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_7                            (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// float                              K2Node_ComponentBoundEvent_InValue_10                            (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_10                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// float                              K2Node_ComponentBoundEvent_InValue_9                             (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_9                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_22                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_23                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, EditorOnly, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_23                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_24                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue_22                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue_23                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_22                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_23                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_8                             (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_8                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// float                              K2Node_ComponentBoundEvent_InValue_7                             (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_7                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_24                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_25                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, EditorOnly, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_25                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_26                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue_24                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue_25                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_24                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_25                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_6                             (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_6                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              K2Node_ComponentBoundEvent_InValue_5                             (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_5                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_26                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_27                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_27                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_28                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue_26                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue_27                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_26                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_27                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_4                             (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_4                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// float                              K2Node_ComponentBoundEvent_InValue_3                             (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_3                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_28                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_29                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_29                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_30                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue_28                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue_29                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_28                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_29                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_2                             (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_2                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              K2Node_ComponentBoundEvent_InValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_1                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_30                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_31                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_31                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_32                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify)
// class FString                      CallFunc_Replace_ReturnValue_30                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue_31                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_30                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_31                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_ComponentBoundEvent_InValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_32                        (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify)
// class FName                        Temp_name_Variable                                               (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_33                        (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Replace_ReturnValue_32                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify)
// bool                               CallFunc_Array_Contains_ReturnValue                              (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_32                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify)
// bool                               Temp_bool_Variable_40                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// class FName                        Temp_name_Variable_1                                             (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FName                        Temp_name_Variable_2                                             (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FName                        Temp_name_Variable_3                                             (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_41                                            (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default_8                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_6                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      Temp_string_Variable_6                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      Temp_string_Variable_7                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// class UTextureRenderTarget2D*      CallFunc_Map_Find_Value_5                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Map_Find_ReturnValue_5                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UTextureRenderTarget2D*      CallFunc_Map_Find_Value_6                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Map_Find_ReturnValue_6                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// TArray<class ANinjaLive_PresetManager_C*>CallFunc_GetAllActorsOfClass_OutActors_3                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// class ANinjaLive_PresetManager_C*  CallFunc_Array_Get_Item_23                                       (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, EditorOnly, NoDestructor)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_12                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// int32                              Temp_int_Loop_Counter_Variable_14                                (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Less_IntInt_ReturnValue_14                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// int32                              CallFunc_Add_IntInt_ReturnValue_16                               (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NoDestructor)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast                    (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetValue_NewValue_ImplicitCast                          (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_1                  (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_2                  (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_1                        (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_2                        (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             K2Node_VariableSet_Divergence_ImplicitCast                       (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_3                  (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_4                  (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_3                        (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_4                        (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// double                             K2Node_VariableSet_FlowFeedback_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_5                  (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional)
// double                             K2Node_VariableSet_DensityInputNoiseTile_ImplicitCast            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_6                  (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_5                        (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_6                        (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             K2Node_VariableSet_DensityInputNoiseOffset_ImplicitCast          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_7                  (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, EditorOnly)
// double                             K2Node_VariableSet_DensityInputNoiseAmp_ImplicitCast             (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_7                        (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// double                             K2Node_VariableSet_VeloInputOffsetSpeed_ImplicitCast             (Edit, BlueprintVisible, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_8                  (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// double                             K2Node_VariableSet_VeloInputTile_ImplicitCast                    (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_8                        (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_9                  (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, EditorOnly)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_9                        (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_10                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_11                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_10                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_12                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_11                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_13                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_12                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_13                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_14                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_14                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_15                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_16                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_17                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_18                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_19                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_20                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_21                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_22                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_23                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_24                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_25                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_26                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_27                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_28                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_29                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_30                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_31                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_32                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_33                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_34                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_35                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_36                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_37                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_38                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_39                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_40                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_41                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_42                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_43                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_44                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_45                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_46                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_47                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NoDestructor)
// double                             K2Node_VariableSet_VeloDirNoise_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_15                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_48                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_16                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// double                             K2Node_VariableSet_DensityTxtMult_ImplicitCast                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_49                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NoDestructor)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_17                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_50                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
// double                             K2Node_VariableSet_VeloDirNoiseSpeed_ImplicitCast                (ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_VeloDirNoiseSize_ImplicitCast                 (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_EdgeMaskWidth_ImplicitCast                    (Edit, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_SimEdgeBouncyness_ImplicitCast                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_FadeDensityAtSimEdge_ImplicitCast             (ConstParm, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_InputFeedback_ImplicitCast                    (Edit, ConstParm, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_VeloAmpNoise_ImplicitCast                     (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_VeloStrength_ImplicitCast                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_VeloRotate_ImplicitCast                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_VeloOffsetY_ImplicitCast                      (Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_VeloOffsetX_ImplicitCast                      (Edit, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_18                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_19                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_51                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_52                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_20                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_53                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_21                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_54                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_22                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_23                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_55                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_56                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_24                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_25                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_57                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_58                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_26                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_27                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_59                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_60                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_28                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_29                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_61                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_62                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_30                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_31                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_63                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, AutoWeak)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_64                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, RepNotify, AutoWeak)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast_32                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_65                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference, Interp, AutoWeak)

double UNinjaLiveGUI_C::ExecuteUbergraph_NinjaLiveGUI(int32* EntryPoint, const class FString& CallFunc_Mid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_2, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_3, bool Temp_bool_Variable_4, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Array_Index_Variable_4, bool Temp_bool_Variable_5, int32 Temp_int_Array_Index_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, int32 Temp_int_Loop_Counter_Variable_4, int32 Temp_int_Array_Index_Variable_6, const class FString& K2Node_ComponentBoundEvent_SelectedItem_5, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType_5, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, class ANinjaLive_PresetManager_C* CallFunc_Array_Get_Item, class ANinjaLive_PresetManager_C* CallFunc_Array_Get_Item_1, class AActor* CallFunc_Array_Get_Item_2, const class FString& K2Node_ComponentBoundEvent_SelectedItem_4, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType_4, class ANinjaLive_PresetManager_C* CallFunc_Array_Get_Item_3, class AActor* CallFunc_Array_Get_Item_4, bool Temp_bool_Variable_10, int32 Temp_int_Loop_Counter_Variable_5, TArray<class FName>* K2Node_MakeArray_Array, TArray<class FName>* K2Node_MakeArray_Array_1, TSet<class FName> K2Node_MakeSet_Set, bool Temp_bool_Variable_11, class UDataTable* K2Node_CustomEvent_DuplicatedPreset, bool Temp_bool_Variable_12, bool K2Node_ComponentBoundEvent_bIsChecked_1, bool Temp_bool_Variable_13, const class FString& CallFunc_Array_Get_Item_5, bool* CallFunc_Greater_IntInt_ReturnValue, bool* CallFunc_StartsWith_ReturnValue, bool* CallFunc_StartsWith_ReturnValue_1, bool* CallFunc_StartsWith_ReturnValue_2, bool* CallFunc_StartsWith_ReturnValue_3, bool* CallFunc_StartsWith_ReturnValue_4, bool* CallFunc_StartsWith_ReturnValue_5, bool* CallFunc_StartsWith_ReturnValue_6, bool* CallFunc_StartsWith_ReturnValue_7, bool* CallFunc_StartsWith_ReturnValue_8, bool* CallFunc_StartsWith_ReturnValue_9, bool* CallFunc_StartsWith_ReturnValue_10, bool* CallFunc_StartsWith_ReturnValue_11, bool* CallFunc_StartsWith_ReturnValue_12, bool* CallFunc_StartsWith_ReturnValue_13, bool* CallFunc_StartsWith_ReturnValue_14, bool* CallFunc_StartsWith_ReturnValue_15, bool* CallFunc_StartsWith_ReturnValue_16, bool* CallFunc_StartsWith_ReturnValue_17, bool* CallFunc_StartsWith_ReturnValue_18, bool* CallFunc_StartsWith_ReturnValue_19, bool* CallFunc_StartsWith_ReturnValue_20, bool* CallFunc_StartsWith_ReturnValue_21, bool* CallFunc_StartsWith_ReturnValue_22, bool* CallFunc_StartsWith_ReturnValue_23, bool* CallFunc_StartsWith_ReturnValue_24, bool* CallFunc_StartsWith_ReturnValue_25, bool Temp_bool_Variable_14, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_6, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_6, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, bool Temp_bool_Variable_18, bool Temp_bool_Variable_19, int32 CallFunc_Len_ReturnValue, struct FARFilter* CallFunc_MakeARFilter_ReturnValue, bool CallFunc_GetAssets_ReturnValue, class FString* CallFunc_RightChop_ReturnValue, class FString* CallFunc_RightChop_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable_20, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, bool Temp_bool_Variable_21, const class FString& Temp_string_Variable, bool Temp_bool_Variable_22, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double* CallFunc_Add_DoubleDouble_ReturnValue, int32 Temp_int_Array_Index_Variable_7, bool Temp_bool_Variable_23, const class FString& CallFunc_Array_Get_Item_7, bool Temp_bool_Variable_24, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_25, bool Temp_bool_Variable_26, const class FString& Temp_string_Variable_2, bool Temp_bool_Variable_27, bool Temp_bool_Variable_28, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable_29, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_6, class FText CallFunc_MakeLiteralText_ReturnValue_7, class FText CallFunc_MakeLiteralText_ReturnValue_8, class FText CallFunc_MakeLiteralText_ReturnValue_9, class FText CallFunc_MakeLiteralText_ReturnValue_10, class FText CallFunc_MakeLiteralText_ReturnValue_11, class FText CallFunc_MakeLiteralText_ReturnValue_12, class FText CallFunc_MakeLiteralText_ReturnValue_13, class FText CallFunc_MakeLiteralText_ReturnValue_14, class FText CallFunc_MakeLiteralText_ReturnValue_15, class FText CallFunc_MakeLiteralText_ReturnValue_16, class FText CallFunc_MakeLiteralText_ReturnValue_17, class FText CallFunc_MakeLiteralText_ReturnValue_18, class FText CallFunc_MakeLiteralText_ReturnValue_19, class FText CallFunc_MakeLiteralText_ReturnValue_20, class FText CallFunc_MakeLiteralText_ReturnValue_21, class FText CallFunc_MakeLiteralText_ReturnValue_22, class FText CallFunc_MakeLiteralText_ReturnValue_23, class FText CallFunc_MakeLiteralText_ReturnValue_24, class FText CallFunc_MakeLiteralText_ReturnValue_25, class FText CallFunc_MakeLiteralText_ReturnValue_26, class FText CallFunc_MakeLiteralText_ReturnValue_27, class FText CallFunc_MakeLiteralText_ReturnValue_28, class FText CallFunc_MakeLiteralText_ReturnValue_29, class FText CallFunc_MakeLiteralText_ReturnValue_30, class FText CallFunc_MakeLiteralText_ReturnValue_31, class FText CallFunc_MakeLiteralText_ReturnValue_32, class FText CallFunc_MakeLiteralText_ReturnValue_33, class FText CallFunc_MakeLiteralText_ReturnValue_34, class FText CallFunc_MakeLiteralText_ReturnValue_35, class FText CallFunc_MakeLiteralText_ReturnValue_36, class FText CallFunc_MakeLiteralText_ReturnValue_37, class FText CallFunc_MakeLiteralText_ReturnValue_38, class FText CallFunc_MakeLiteralText_ReturnValue_39, class FText CallFunc_MakeLiteralText_ReturnValue_40, class FText CallFunc_MakeLiteralText_ReturnValue_41, class FText CallFunc_MakeLiteralText_ReturnValue_42, class FText CallFunc_MakeLiteralText_ReturnValue_43, class FText CallFunc_MakeLiteralText_ReturnValue_44, class FText CallFunc_MakeLiteralText_ReturnValue_45, class FText CallFunc_MakeLiteralText_ReturnValue_46, class FText CallFunc_MakeLiteralText_ReturnValue_47, class FText CallFunc_MakeLiteralText_ReturnValue_48, class FText CallFunc_MakeLiteralText_ReturnValue_49, class FText CallFunc_MakeLiteralText_ReturnValue_50, class FText CallFunc_MakeLiteralText_ReturnValue_51, class FText CallFunc_MakeLiteralText_ReturnValue_52, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, bool Temp_bool_Variable_30, bool Temp_bool_Variable_31, class FText* CallFunc_Conv_DoubleToText_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, int32 Temp_int_Array_Index_Variable_8, const class FString& CallFunc_Array_Get_Item_8, class FText* CallFunc_Conv_DoubleToText_ReturnValue_1, class FText* CallFunc_Conv_DoubleToText_ReturnValue_2, const class FString& CallFunc_Replace_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue_2, class FText* CallFunc_Conv_DoubleToText_ReturnValue_3, class FText* CallFunc_Conv_DoubleToText_ReturnValue_4, const class FString& CallFunc_Replace_ReturnValue_3, const class FString& CallFunc_Replace_ReturnValue_4, bool Temp_bool_Variable_32, int32 Temp_int_Loop_Counter_Variable_7, class FText* CallFunc_Conv_DoubleToText_ReturnValue_5, const class FString& CallFunc_Replace_ReturnValue_5, class FText* CallFunc_Conv_DoubleToText_ReturnValue_6, const class FString& CallFunc_Replace_ReturnValue_6, class FText* CallFunc_Conv_DoubleToText_ReturnValue_7, const class FString& CallFunc_Replace_ReturnValue_7, bool Temp_bool_Variable_33, class FText* CallFunc_Conv_DoubleToText_ReturnValue_8, const class FString& CallFunc_Replace_ReturnValue_8, bool Temp_bool_Variable_34, class FText* CallFunc_Conv_DoubleToText_ReturnValue_9, const class FString& CallFunc_Replace_ReturnValue_9, class FText* CallFunc_Conv_DoubleToText_ReturnValue_10, const class FString& CallFunc_Replace_ReturnValue_10, class FText* CallFunc_Conv_DoubleToText_ReturnValue_11, const class FString& CallFunc_Replace_ReturnValue_11, class FText* CallFunc_Conv_DoubleToText_ReturnValue_12, class FText* CallFunc_Conv_DoubleToText_ReturnValue_13, const class FString& CallFunc_Replace_ReturnValue_12, const class FString& CallFunc_Replace_ReturnValue_13, class FText* CallFunc_Conv_DoubleToText_ReturnValue_14, const class FString& CallFunc_Replace_ReturnValue_14, class UObject* CallFunc_SelectObject_ReturnValue, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool* K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool Temp_bool_Variable_35, const class FString& K2Node_ComponentBoundEvent_SelectedItem_3, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool Temp_bool_Variable_36, TArray<class FName>* K2Node_MakeArray_Array_2, class UMaterialInstanceDynamic* K2Node_Select_Default, TArray<class FName>* K2Node_MakeArray_Array_3, const class FString& CallFunc_Array_Get_Item_9, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_Select_Default_2, bool CallFunc_Less_DoubleDouble_ReturnValue_2, const struct FSlateColor& K2Node_Select_Default_3, bool CallFunc_Less_DoubleDouble_ReturnValue_3, int32 Temp_int_Array_Index_Variable_9, class UMaterialInterface* CallFunc_Array_Get_Item_10, const struct FSlateColor& K2Node_Select_Default_4, class UMaterialInterface* CallFunc_Array_Get_Item_11, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_8, int32 Temp_int_Loop_Counter_Variable_9, bool Temp_bool_Variable_37, bool CallFunc_Less_DoubleDouble_ReturnValue_4, bool CallFunc_Less_DoubleDouble_ReturnValue_5, const struct FSlateColor& K2Node_Select_Default_5, const struct FSlateColor& K2Node_Select_Default_6, int32 Temp_int_Array_Index_Variable_10, const class FString& CallFunc_Array_Get_Item_12, class FText* CallFunc_Conv_DoubleToText_ReturnValue_15, const class FString& CallFunc_Replace_ReturnValue_15, class FText* CallFunc_Conv_DoubleToText_ReturnValue_16, const class FString& CallFunc_Replace_ReturnValue_16, class FText* CallFunc_Conv_DoubleToText_ReturnValue_17, int32 Temp_int_Array_Index_Variable_11, class UMaterialInterface* CallFunc_Array_Get_Item_13, const class FString& CallFunc_Replace_ReturnValue_17, bool K2Node_ComponentBoundEvent_bIsChecked, int32 Temp_int_Loop_Counter_Variable_10, int32 Temp_int_Array_Index_Variable_12, int32 Temp_int_Array_Index_Variable_13, class AActor* CallFunc_Array_Get_Item_14, const struct FAssetData& CallFunc_Array_Get_Item_15, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, class FString* CallFunc_RightChop_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& K2Node_Select_Default_7, class FText* CallFunc_Conv_DoubleToText_ReturnValue_18, class FText* CallFunc_Conv_DoubleToText_ReturnValue_19, const class FString& CallFunc_Replace_ReturnValue_18, const class FString& CallFunc_Replace_ReturnValue_19, class FText K2Node_ComponentBoundEvent_Text, class FText* CallFunc_Conv_DoubleToText_ReturnValue_20, const class FString& CallFunc_Replace_ReturnValue_20, int32 Temp_int_Loop_Counter_Variable_11, class FName CallFunc_Array_Get_Item_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FName CallFunc_Array_Get_Item_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool Temp_bool_Variable_38, const TArray<struct FAssetData>& CallFunc_GetAssetsByPackageName_OutAssetData, bool CallFunc_GetAssetsByPackageName_ReturnValue, const struct FAssetData& CallFunc_Array_Get_Item_18, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool* K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable_39, TSet<class FName> K2Node_MakeSet_Set_1, TArray<class FName>* K2Node_MakeArray_Array_4, TArray<class FName>* K2Node_MakeArray_Array_5, int32 Temp_int_Loop_Counter_Variable_12, struct FARFilter* CallFunc_MakeARFilter_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_13, bool CallFunc_GetAssets_ReturnValue_1, const struct FAssetData& CallFunc_Array_Get_Item_19, bool CallFunc_EqualEqual_StrStr_ReturnValue_5, TSet<class FName> K2Node_MakeSet_Set_2, const TArray<struct FAssetData>& CallFunc_GetAssetsByPackageName_OutAssetData_1, bool CallFunc_GetAssetsByPackageName_ReturnValue_1, TArray<class FName>* K2Node_MakeArray_Array_6, const struct FAssetData& CallFunc_Array_Get_Item_20, TArray<class FName>* K2Node_MakeArray_Array_7, struct FARFilter* CallFunc_MakeARFilter_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_6, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool* K2Node_DynamicCast_bSuccess_2, bool CallFunc_GetAssets_ReturnValue_2, const struct FAssetData& CallFunc_Array_Get_Item_21, bool CallFunc_EqualEqual_StrStr_ReturnValue_7, const class FString& K2Node_ComponentBoundEvent_SelectedItem_2, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_EqualEqual_StrStr_ReturnValue_8, const class FString& K2Node_ComponentBoundEvent_SelectedItem_1, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, bool CallFunc_EqualEqual_StrStr_ReturnValue_9, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType, bool CallFunc_EqualEqual_StrStr_ReturnValue_10, bool CallFunc_EqualEqual_StrStr_ReturnValue_11, class FText* CallFunc_Conv_DoubleToText_ReturnValue_21, int32 Temp_int_Array_Index_Variable_14, const class FString& CallFunc_Replace_ReturnValue_21, class AActor* CallFunc_Array_Get_Item_22, class FText* CallFunc_Conv_DoubleToText_ReturnValue_22, class FText* CallFunc_Conv_DoubleToText_ReturnValue_23, const class FString& CallFunc_Replace_ReturnValue_22, const class FString& CallFunc_Replace_ReturnValue_23, class FText* CallFunc_Conv_DoubleToText_ReturnValue_24, class FText* CallFunc_Conv_DoubleToText_ReturnValue_25, const class FString& CallFunc_Replace_ReturnValue_24, const class FString& CallFunc_Replace_ReturnValue_25, class FText* CallFunc_Conv_DoubleToText_ReturnValue_26, class FText* CallFunc_Conv_DoubleToText_ReturnValue_27, const class FString& CallFunc_Replace_ReturnValue_26, const class FString& CallFunc_Replace_ReturnValue_27, class FText* CallFunc_Conv_DoubleToText_ReturnValue_28, class FText* CallFunc_Conv_DoubleToText_ReturnValue_29, const class FString& CallFunc_Replace_ReturnValue_28, const class FString& CallFunc_Replace_ReturnValue_29, class FText* CallFunc_Conv_DoubleToText_ReturnValue_30, class FText* CallFunc_Conv_DoubleToText_ReturnValue_31, const class FString& CallFunc_Replace_ReturnValue_30, const class FString& CallFunc_Replace_ReturnValue_31, class FText* CallFunc_Conv_DoubleToText_ReturnValue_32, const class FString& CallFunc_Replace_ReturnValue_32, bool Temp_bool_Variable_40, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_41, double* CallFunc_Add_DoubleDouble_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_8, bool CallFunc_Less_DoubleDouble_ReturnValue_6, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, class ANinjaLive_PresetManager_C* CallFunc_Array_Get_Item_23, bool CallFunc_EqualEqual_StrStr_ReturnValue_12, int32 Temp_int_Loop_Counter_Variable_14, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast, float* CallFunc_SetValue_NewValue_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_1, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_2, float* CallFunc_SetValue_NewValue_ImplicitCast_1, float* CallFunc_SetValue_NewValue_ImplicitCast_2, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_3, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_4, float* CallFunc_SetValue_NewValue_ImplicitCast_3, float* CallFunc_SetValue_NewValue_ImplicitCast_4, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_5, double* K2Node_VariableSet_DensityInputNoiseTile_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_6, float* CallFunc_SetValue_NewValue_ImplicitCast_5, float* CallFunc_SetValue_NewValue_ImplicitCast_6, double K2Node_VariableSet_DensityInputNoiseOffset_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_7, float* CallFunc_SetValue_NewValue_ImplicitCast_7, double K2Node_VariableSet_VeloInputOffsetSpeed_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_8, float* CallFunc_SetValue_NewValue_ImplicitCast_8, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_9, float* CallFunc_SetValue_NewValue_ImplicitCast_9, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_10, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_11, float* CallFunc_SetValue_NewValue_ImplicitCast_10, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_12, float* CallFunc_SetValue_NewValue_ImplicitCast_11, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_13, float* CallFunc_SetValue_NewValue_ImplicitCast_12, float* CallFunc_SetValue_NewValue_ImplicitCast_13, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_14, float* CallFunc_SetValue_NewValue_ImplicitCast_14, float* CallFunc_SetValue_NewValue_ImplicitCast_15, float* CallFunc_SetValue_NewValue_ImplicitCast_16, float* CallFunc_SetValue_NewValue_ImplicitCast_17, float* CallFunc_SetValue_NewValue_ImplicitCast_18, float* CallFunc_SetValue_NewValue_ImplicitCast_19, float* CallFunc_SetValue_NewValue_ImplicitCast_20, float* CallFunc_SetValue_NewValue_ImplicitCast_21, float* CallFunc_SetValue_NewValue_ImplicitCast_22, float* CallFunc_SetValue_NewValue_ImplicitCast_23, float* CallFunc_SetValue_NewValue_ImplicitCast_24, float* CallFunc_SetValue_NewValue_ImplicitCast_25, float* CallFunc_SetValue_NewValue_ImplicitCast_26, float* CallFunc_SetValue_NewValue_ImplicitCast_27, float* CallFunc_SetValue_NewValue_ImplicitCast_28, float* CallFunc_SetValue_NewValue_ImplicitCast_29, float* CallFunc_SetValue_NewValue_ImplicitCast_30, float* CallFunc_SetValue_NewValue_ImplicitCast_31, float* CallFunc_SetValue_NewValue_ImplicitCast_32, float* CallFunc_SetValue_NewValue_ImplicitCast_33, float* CallFunc_SetValue_NewValue_ImplicitCast_34, float* CallFunc_SetValue_NewValue_ImplicitCast_35, float* CallFunc_SetValue_NewValue_ImplicitCast_36, float* CallFunc_SetValue_NewValue_ImplicitCast_37, float* CallFunc_SetValue_NewValue_ImplicitCast_38, float* CallFunc_SetValue_NewValue_ImplicitCast_39, float* CallFunc_SetValue_NewValue_ImplicitCast_40, float* CallFunc_SetValue_NewValue_ImplicitCast_41, float* CallFunc_SetValue_NewValue_ImplicitCast_42, float* CallFunc_SetValue_NewValue_ImplicitCast_43, float* CallFunc_SetValue_NewValue_ImplicitCast_44, float* CallFunc_SetValue_NewValue_ImplicitCast_45, float* CallFunc_SetValue_NewValue_ImplicitCast_46, float* CallFunc_SetValue_NewValue_ImplicitCast_47, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_15, float* CallFunc_SetValue_NewValue_ImplicitCast_48, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_16, double* K2Node_VariableSet_DensityTxtMult_ImplicitCast, float* CallFunc_SetValue_NewValue_ImplicitCast_49, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_17, float* CallFunc_SetValue_NewValue_ImplicitCast_50, double K2Node_VariableSet_VeloDirNoiseSpeed_ImplicitCast, double* K2Node_VariableSet_EdgeMaskWidth_ImplicitCast, double K2Node_VariableSet_FadeDensityAtSimEdge_ImplicitCast, double K2Node_VariableSet_VeloStrength_ImplicitCast, double* K2Node_VariableSet_VeloOffsetY_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_18, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_19, float* CallFunc_SetValue_NewValue_ImplicitCast_51, float* CallFunc_SetValue_NewValue_ImplicitCast_52, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_20, float* CallFunc_SetValue_NewValue_ImplicitCast_53, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_21, float* CallFunc_SetValue_NewValue_ImplicitCast_54, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_22, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_23, float* CallFunc_SetValue_NewValue_ImplicitCast_55, float* CallFunc_SetValue_NewValue_ImplicitCast_56, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_24, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_25, float* CallFunc_SetValue_NewValue_ImplicitCast_57, float* CallFunc_SetValue_NewValue_ImplicitCast_58, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_26, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_27, float* CallFunc_SetValue_NewValue_ImplicitCast_59, float* CallFunc_SetValue_NewValue_ImplicitCast_60, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_28, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_29, float* CallFunc_SetValue_NewValue_ImplicitCast_61, float* CallFunc_SetValue_NewValue_ImplicitCast_62, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_30, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_31, float* CallFunc_SetValue_NewValue_ImplicitCast_63, float* CallFunc_SetValue_NewValue_ImplicitCast_64, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_32, float* CallFunc_SetValue_NewValue_ImplicitCast_65)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "ExecuteUbergraph_NinjaLiveGUI");

	Params::UNinjaLiveGUI_C_ExecuteUbergraph_NinjaLiveGUI_Params Parms{};

	Parms.CallFunc_Mid_ReturnValue = CallFunc_Mid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_5 = K2Node_ComponentBoundEvent_SelectedItem_5;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_4 = K2Node_ComponentBoundEvent_SelectedItem_4;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.K2Node_CustomEvent_DuplicatedPreset = K2Node_CustomEvent_DuplicatedPreset;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_1 = K2Node_ComponentBoundEvent_bIsChecked_1;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.Temp_bool_Variable_14 = Temp_bool_Variable_14;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.Temp_bool_Variable_15 = Temp_bool_Variable_15;
	Parms.Temp_bool_Variable_16 = Temp_bool_Variable_16;
	Parms.Temp_bool_Variable_17 = Temp_bool_Variable_17;
	Parms.Temp_bool_Variable_18 = Temp_bool_Variable_18;
	Parms.Temp_bool_Variable_19 = Temp_bool_Variable_19;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_GetAssets_ReturnValue = CallFunc_GetAssets_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_bool_Variable_20 = Temp_bool_Variable_20;
	Parms.Temp_bool_Variable_21 = Temp_bool_Variable_21;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_bool_Variable_22 = Temp_bool_Variable_22;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.Temp_bool_Variable_23 = Temp_bool_Variable_23;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.Temp_bool_Variable_24 = Temp_bool_Variable_24;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable_25 = Temp_bool_Variable_25;
	Parms.Temp_bool_Variable_26 = Temp_bool_Variable_26;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_bool_Variable_27 = Temp_bool_Variable_27;
	Parms.Temp_bool_Variable_28 = Temp_bool_Variable_28;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_bool_Variable_29 = Temp_bool_Variable_29;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue_5 = CallFunc_MakeLiteralText_ReturnValue_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_6 = CallFunc_MakeLiteralText_ReturnValue_6;
	Parms.CallFunc_MakeLiteralText_ReturnValue_7 = CallFunc_MakeLiteralText_ReturnValue_7;
	Parms.CallFunc_MakeLiteralText_ReturnValue_8 = CallFunc_MakeLiteralText_ReturnValue_8;
	Parms.CallFunc_MakeLiteralText_ReturnValue_9 = CallFunc_MakeLiteralText_ReturnValue_9;
	Parms.CallFunc_MakeLiteralText_ReturnValue_10 = CallFunc_MakeLiteralText_ReturnValue_10;
	Parms.CallFunc_MakeLiteralText_ReturnValue_11 = CallFunc_MakeLiteralText_ReturnValue_11;
	Parms.CallFunc_MakeLiteralText_ReturnValue_12 = CallFunc_MakeLiteralText_ReturnValue_12;
	Parms.CallFunc_MakeLiteralText_ReturnValue_13 = CallFunc_MakeLiteralText_ReturnValue_13;
	Parms.CallFunc_MakeLiteralText_ReturnValue_14 = CallFunc_MakeLiteralText_ReturnValue_14;
	Parms.CallFunc_MakeLiteralText_ReturnValue_15 = CallFunc_MakeLiteralText_ReturnValue_15;
	Parms.CallFunc_MakeLiteralText_ReturnValue_16 = CallFunc_MakeLiteralText_ReturnValue_16;
	Parms.CallFunc_MakeLiteralText_ReturnValue_17 = CallFunc_MakeLiteralText_ReturnValue_17;
	Parms.CallFunc_MakeLiteralText_ReturnValue_18 = CallFunc_MakeLiteralText_ReturnValue_18;
	Parms.CallFunc_MakeLiteralText_ReturnValue_19 = CallFunc_MakeLiteralText_ReturnValue_19;
	Parms.CallFunc_MakeLiteralText_ReturnValue_20 = CallFunc_MakeLiteralText_ReturnValue_20;
	Parms.CallFunc_MakeLiteralText_ReturnValue_21 = CallFunc_MakeLiteralText_ReturnValue_21;
	Parms.CallFunc_MakeLiteralText_ReturnValue_22 = CallFunc_MakeLiteralText_ReturnValue_22;
	Parms.CallFunc_MakeLiteralText_ReturnValue_23 = CallFunc_MakeLiteralText_ReturnValue_23;
	Parms.CallFunc_MakeLiteralText_ReturnValue_24 = CallFunc_MakeLiteralText_ReturnValue_24;
	Parms.CallFunc_MakeLiteralText_ReturnValue_25 = CallFunc_MakeLiteralText_ReturnValue_25;
	Parms.CallFunc_MakeLiteralText_ReturnValue_26 = CallFunc_MakeLiteralText_ReturnValue_26;
	Parms.CallFunc_MakeLiteralText_ReturnValue_27 = CallFunc_MakeLiteralText_ReturnValue_27;
	Parms.CallFunc_MakeLiteralText_ReturnValue_28 = CallFunc_MakeLiteralText_ReturnValue_28;
	Parms.CallFunc_MakeLiteralText_ReturnValue_29 = CallFunc_MakeLiteralText_ReturnValue_29;
	Parms.CallFunc_MakeLiteralText_ReturnValue_30 = CallFunc_MakeLiteralText_ReturnValue_30;
	Parms.CallFunc_MakeLiteralText_ReturnValue_31 = CallFunc_MakeLiteralText_ReturnValue_31;
	Parms.CallFunc_MakeLiteralText_ReturnValue_32 = CallFunc_MakeLiteralText_ReturnValue_32;
	Parms.CallFunc_MakeLiteralText_ReturnValue_33 = CallFunc_MakeLiteralText_ReturnValue_33;
	Parms.CallFunc_MakeLiteralText_ReturnValue_34 = CallFunc_MakeLiteralText_ReturnValue_34;
	Parms.CallFunc_MakeLiteralText_ReturnValue_35 = CallFunc_MakeLiteralText_ReturnValue_35;
	Parms.CallFunc_MakeLiteralText_ReturnValue_36 = CallFunc_MakeLiteralText_ReturnValue_36;
	Parms.CallFunc_MakeLiteralText_ReturnValue_37 = CallFunc_MakeLiteralText_ReturnValue_37;
	Parms.CallFunc_MakeLiteralText_ReturnValue_38 = CallFunc_MakeLiteralText_ReturnValue_38;
	Parms.CallFunc_MakeLiteralText_ReturnValue_39 = CallFunc_MakeLiteralText_ReturnValue_39;
	Parms.CallFunc_MakeLiteralText_ReturnValue_40 = CallFunc_MakeLiteralText_ReturnValue_40;
	Parms.CallFunc_MakeLiteralText_ReturnValue_41 = CallFunc_MakeLiteralText_ReturnValue_41;
	Parms.CallFunc_MakeLiteralText_ReturnValue_42 = CallFunc_MakeLiteralText_ReturnValue_42;
	Parms.CallFunc_MakeLiteralText_ReturnValue_43 = CallFunc_MakeLiteralText_ReturnValue_43;
	Parms.CallFunc_MakeLiteralText_ReturnValue_44 = CallFunc_MakeLiteralText_ReturnValue_44;
	Parms.CallFunc_MakeLiteralText_ReturnValue_45 = CallFunc_MakeLiteralText_ReturnValue_45;
	Parms.CallFunc_MakeLiteralText_ReturnValue_46 = CallFunc_MakeLiteralText_ReturnValue_46;
	Parms.CallFunc_MakeLiteralText_ReturnValue_47 = CallFunc_MakeLiteralText_ReturnValue_47;
	Parms.CallFunc_MakeLiteralText_ReturnValue_48 = CallFunc_MakeLiteralText_ReturnValue_48;
	Parms.CallFunc_MakeLiteralText_ReturnValue_49 = CallFunc_MakeLiteralText_ReturnValue_49;
	Parms.CallFunc_MakeLiteralText_ReturnValue_50 = CallFunc_MakeLiteralText_ReturnValue_50;
	Parms.CallFunc_MakeLiteralText_ReturnValue_51 = CallFunc_MakeLiteralText_ReturnValue_51;
	Parms.CallFunc_MakeLiteralText_ReturnValue_52 = CallFunc_MakeLiteralText_ReturnValue_52;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.Temp_bool_Variable_30 = Temp_bool_Variable_30;
	Parms.Temp_bool_Variable_31 = Temp_bool_Variable_31;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_8 = Temp_int_Array_Index_Variable_8;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.CallFunc_Replace_ReturnValue_2 = CallFunc_Replace_ReturnValue_2;
	Parms.CallFunc_Replace_ReturnValue_3 = CallFunc_Replace_ReturnValue_3;
	Parms.CallFunc_Replace_ReturnValue_4 = CallFunc_Replace_ReturnValue_4;
	Parms.Temp_bool_Variable_32 = Temp_bool_Variable_32;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_Replace_ReturnValue_5 = CallFunc_Replace_ReturnValue_5;
	Parms.CallFunc_Replace_ReturnValue_6 = CallFunc_Replace_ReturnValue_6;
	Parms.CallFunc_Replace_ReturnValue_7 = CallFunc_Replace_ReturnValue_7;
	Parms.Temp_bool_Variable_33 = Temp_bool_Variable_33;
	Parms.CallFunc_Replace_ReturnValue_8 = CallFunc_Replace_ReturnValue_8;
	Parms.Temp_bool_Variable_34 = Temp_bool_Variable_34;
	Parms.CallFunc_Replace_ReturnValue_9 = CallFunc_Replace_ReturnValue_9;
	Parms.CallFunc_Replace_ReturnValue_10 = CallFunc_Replace_ReturnValue_10;
	Parms.CallFunc_Replace_ReturnValue_11 = CallFunc_Replace_ReturnValue_11;
	Parms.CallFunc_Replace_ReturnValue_12 = CallFunc_Replace_ReturnValue_12;
	Parms.CallFunc_Replace_ReturnValue_13 = CallFunc_Replace_ReturnValue_13;
	Parms.CallFunc_Replace_ReturnValue_14 = CallFunc_Replace_ReturnValue_14;
	Parms.CallFunc_SelectObject_ReturnValue = CallFunc_SelectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Interface = K2Node_DynamicCast_AsMaterial_Interface;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.Temp_bool_Variable_35 = Temp_bool_Variable_35;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_3 = K2Node_ComponentBoundEvent_SelectedItem_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.Temp_bool_Variable_36 = Temp_bool_Variable_36;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_2 = CallFunc_Less_DoubleDouble_ReturnValue_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_3 = CallFunc_Less_DoubleDouble_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_9 = Temp_int_Array_Index_Variable_9;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_Array_Get_Item_11 = CallFunc_Array_Get_Item_11;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_8 = Temp_int_Loop_Counter_Variable_8;
	Parms.Temp_int_Loop_Counter_Variable_9 = Temp_int_Loop_Counter_Variable_9;
	Parms.Temp_bool_Variable_37 = Temp_bool_Variable_37;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_4 = CallFunc_Less_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_5 = CallFunc_Less_DoubleDouble_ReturnValue_5;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.Temp_int_Array_Index_Variable_10 = Temp_int_Array_Index_Variable_10;
	Parms.CallFunc_Array_Get_Item_12 = CallFunc_Array_Get_Item_12;
	Parms.CallFunc_Replace_ReturnValue_15 = CallFunc_Replace_ReturnValue_15;
	Parms.CallFunc_Replace_ReturnValue_16 = CallFunc_Replace_ReturnValue_16;
	Parms.Temp_int_Array_Index_Variable_11 = Temp_int_Array_Index_Variable_11;
	Parms.CallFunc_Array_Get_Item_13 = CallFunc_Array_Get_Item_13;
	Parms.CallFunc_Replace_ReturnValue_17 = CallFunc_Replace_ReturnValue_17;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.Temp_int_Loop_Counter_Variable_10 = Temp_int_Loop_Counter_Variable_10;
	Parms.Temp_int_Array_Index_Variable_12 = Temp_int_Array_Index_Variable_12;
	Parms.Temp_int_Array_Index_Variable_13 = Temp_int_Array_Index_Variable_13;
	Parms.CallFunc_Array_Get_Item_14 = CallFunc_Array_Get_Item_14;
	Parms.CallFunc_Array_Get_Item_15 = CallFunc_Array_Get_Item_15;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_3 = CallFunc_EqualEqual_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_Replace_ReturnValue_18 = CallFunc_Replace_ReturnValue_18;
	Parms.CallFunc_Replace_ReturnValue_19 = CallFunc_Replace_ReturnValue_19;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_Replace_ReturnValue_20 = CallFunc_Replace_ReturnValue_20;
	Parms.Temp_int_Loop_Counter_Variable_11 = Temp_int_Loop_Counter_Variable_11;
	Parms.CallFunc_Array_Get_Item_16 = CallFunc_Array_Get_Item_16;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_17 = CallFunc_Array_Get_Item_17;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.Temp_bool_Variable_38 = Temp_bool_Variable_38;
	Parms.CallFunc_GetAssetsByPackageName_OutAssetData = CallFunc_GetAssetsByPackageName_OutAssetData;
	Parms.CallFunc_GetAssetsByPackageName_ReturnValue = CallFunc_GetAssetsByPackageName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_18 = CallFunc_Array_Get_Item_18;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_4 = CallFunc_EqualEqual_StrStr_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.Temp_bool_Variable_39 = Temp_bool_Variable_39;
	Parms.K2Node_MakeSet_Set_1 = K2Node_MakeSet_Set_1;
	Parms.Temp_int_Loop_Counter_Variable_12 = Temp_int_Loop_Counter_Variable_12;
	Parms.Temp_int_Loop_Counter_Variable_13 = Temp_int_Loop_Counter_Variable_13;
	Parms.CallFunc_GetAssets_ReturnValue_1 = CallFunc_GetAssets_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_19 = CallFunc_Array_Get_Item_19;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_5 = CallFunc_EqualEqual_StrStr_ReturnValue_5;
	Parms.K2Node_MakeSet_Set_2 = K2Node_MakeSet_Set_2;
	Parms.CallFunc_GetAssetsByPackageName_OutAssetData_1 = CallFunc_GetAssetsByPackageName_OutAssetData_1;
	Parms.CallFunc_GetAssetsByPackageName_ReturnValue_1 = CallFunc_GetAssetsByPackageName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_20 = CallFunc_Array_Get_Item_20;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_6 = CallFunc_EqualEqual_StrStr_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.CallFunc_GetAssets_ReturnValue_2 = CallFunc_GetAssets_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_21 = CallFunc_Array_Get_Item_21;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_7 = CallFunc_EqualEqual_StrStr_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_2 = K2Node_ComponentBoundEvent_SelectedItem_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_8 = CallFunc_EqualEqual_StrStr_ReturnValue_8;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_1 = K2Node_ComponentBoundEvent_SelectedItem_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_9 = CallFunc_EqualEqual_StrStr_ReturnValue_9;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_10 = CallFunc_EqualEqual_StrStr_ReturnValue_10;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_11 = CallFunc_EqualEqual_StrStr_ReturnValue_11;
	Parms.Temp_int_Array_Index_Variable_14 = Temp_int_Array_Index_Variable_14;
	Parms.CallFunc_Replace_ReturnValue_21 = CallFunc_Replace_ReturnValue_21;
	Parms.CallFunc_Array_Get_Item_22 = CallFunc_Array_Get_Item_22;
	Parms.CallFunc_Replace_ReturnValue_22 = CallFunc_Replace_ReturnValue_22;
	Parms.CallFunc_Replace_ReturnValue_23 = CallFunc_Replace_ReturnValue_23;
	Parms.CallFunc_Replace_ReturnValue_24 = CallFunc_Replace_ReturnValue_24;
	Parms.CallFunc_Replace_ReturnValue_25 = CallFunc_Replace_ReturnValue_25;
	Parms.CallFunc_Replace_ReturnValue_26 = CallFunc_Replace_ReturnValue_26;
	Parms.CallFunc_Replace_ReturnValue_27 = CallFunc_Replace_ReturnValue_27;
	Parms.CallFunc_Replace_ReturnValue_28 = CallFunc_Replace_ReturnValue_28;
	Parms.CallFunc_Replace_ReturnValue_29 = CallFunc_Replace_ReturnValue_29;
	Parms.CallFunc_Replace_ReturnValue_30 = CallFunc_Replace_ReturnValue_30;
	Parms.CallFunc_Replace_ReturnValue_31 = CallFunc_Replace_ReturnValue_31;
	Parms.CallFunc_Replace_ReturnValue_32 = CallFunc_Replace_ReturnValue_32;
	Parms.Temp_bool_Variable_40 = Temp_bool_Variable_40;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_41 = Temp_bool_Variable_41;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_6 = CallFunc_Less_DoubleDouble_ReturnValue_6;
	Parms.Temp_string_Variable_6 = Temp_string_Variable_6;
	Parms.Temp_string_Variable_7 = Temp_string_Variable_7;
	Parms.CallFunc_Array_Get_Item_23 = CallFunc_Array_Get_Item_23;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_12 = CallFunc_EqualEqual_StrStr_ReturnValue_12;
	Parms.Temp_int_Loop_Counter_Variable_14 = Temp_int_Loop_Counter_Variable_14;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast = CallFunc_Conv_DoubleToText_Value_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_1 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_1;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_2 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_2;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_3 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_3;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_4 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_4;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_5 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_5;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_6 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_6;
	Parms.K2Node_VariableSet_DensityInputNoiseOffset_ImplicitCast = K2Node_VariableSet_DensityInputNoiseOffset_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_7 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_7;
	Parms.K2Node_VariableSet_VeloInputOffsetSpeed_ImplicitCast = K2Node_VariableSet_VeloInputOffsetSpeed_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_8 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_8;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_9 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_9;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_10 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_10;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_11 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_11;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_12 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_12;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_13 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_13;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_14 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_14;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_15 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_15;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_16 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_16;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_17 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_17;
	Parms.K2Node_VariableSet_VeloDirNoiseSpeed_ImplicitCast = K2Node_VariableSet_VeloDirNoiseSpeed_ImplicitCast;
	Parms.K2Node_VariableSet_FadeDensityAtSimEdge_ImplicitCast = K2Node_VariableSet_FadeDensityAtSimEdge_ImplicitCast;
	Parms.K2Node_VariableSet_VeloStrength_ImplicitCast = K2Node_VariableSet_VeloStrength_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_18 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_18;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_19 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_19;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_20 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_20;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_21 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_21;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_22 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_22;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_23 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_23;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_24 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_24;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_25 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_25;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_26 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_26;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_27 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_27;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_28 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_28;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_29 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_29;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_30 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_30;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_31 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_31;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast_32 = CallFunc_Conv_DoubleToText_Value_ImplicitCast_32;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_ComponentBoundEvent_SelectionType_5 != nullptr)
		*K2Node_ComponentBoundEvent_SelectionType_5 = Parms.K2Node_ComponentBoundEvent_SelectionType_5;

	if (K2Node_ComponentBoundEvent_SelectionType_4 != nullptr)
		*K2Node_ComponentBoundEvent_SelectionType_4 = Parms.K2Node_ComponentBoundEvent_SelectionType_4;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (K2Node_MakeArray_Array_1 != nullptr)
		*K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_StartsWith_ReturnValue != nullptr)
		*CallFunc_StartsWith_ReturnValue = Parms.CallFunc_StartsWith_ReturnValue;

	if (CallFunc_StartsWith_ReturnValue_1 != nullptr)
		*CallFunc_StartsWith_ReturnValue_1 = Parms.CallFunc_StartsWith_ReturnValue_1;

	if (CallFunc_StartsWith_ReturnValue_2 != nullptr)
		*CallFunc_StartsWith_ReturnValue_2 = Parms.CallFunc_StartsWith_ReturnValue_2;

	if (CallFunc_StartsWith_ReturnValue_3 != nullptr)
		*CallFunc_StartsWith_ReturnValue_3 = Parms.CallFunc_StartsWith_ReturnValue_3;

	if (CallFunc_StartsWith_ReturnValue_4 != nullptr)
		*CallFunc_StartsWith_ReturnValue_4 = Parms.CallFunc_StartsWith_ReturnValue_4;

	if (CallFunc_StartsWith_ReturnValue_5 != nullptr)
		*CallFunc_StartsWith_ReturnValue_5 = Parms.CallFunc_StartsWith_ReturnValue_5;

	if (CallFunc_StartsWith_ReturnValue_6 != nullptr)
		*CallFunc_StartsWith_ReturnValue_6 = Parms.CallFunc_StartsWith_ReturnValue_6;

	if (CallFunc_StartsWith_ReturnValue_7 != nullptr)
		*CallFunc_StartsWith_ReturnValue_7 = Parms.CallFunc_StartsWith_ReturnValue_7;

	if (CallFunc_StartsWith_ReturnValue_8 != nullptr)
		*CallFunc_StartsWith_ReturnValue_8 = Parms.CallFunc_StartsWith_ReturnValue_8;

	if (CallFunc_StartsWith_ReturnValue_9 != nullptr)
		*CallFunc_StartsWith_ReturnValue_9 = Parms.CallFunc_StartsWith_ReturnValue_9;

	if (CallFunc_StartsWith_ReturnValue_10 != nullptr)
		*CallFunc_StartsWith_ReturnValue_10 = Parms.CallFunc_StartsWith_ReturnValue_10;

	if (CallFunc_StartsWith_ReturnValue_11 != nullptr)
		*CallFunc_StartsWith_ReturnValue_11 = Parms.CallFunc_StartsWith_ReturnValue_11;

	if (CallFunc_StartsWith_ReturnValue_12 != nullptr)
		*CallFunc_StartsWith_ReturnValue_12 = Parms.CallFunc_StartsWith_ReturnValue_12;

	if (CallFunc_StartsWith_ReturnValue_13 != nullptr)
		*CallFunc_StartsWith_ReturnValue_13 = Parms.CallFunc_StartsWith_ReturnValue_13;

	if (CallFunc_StartsWith_ReturnValue_14 != nullptr)
		*CallFunc_StartsWith_ReturnValue_14 = Parms.CallFunc_StartsWith_ReturnValue_14;

	if (CallFunc_StartsWith_ReturnValue_15 != nullptr)
		*CallFunc_StartsWith_ReturnValue_15 = Parms.CallFunc_StartsWith_ReturnValue_15;

	if (CallFunc_StartsWith_ReturnValue_16 != nullptr)
		*CallFunc_StartsWith_ReturnValue_16 = Parms.CallFunc_StartsWith_ReturnValue_16;

	if (CallFunc_StartsWith_ReturnValue_17 != nullptr)
		*CallFunc_StartsWith_ReturnValue_17 = Parms.CallFunc_StartsWith_ReturnValue_17;

	if (CallFunc_StartsWith_ReturnValue_18 != nullptr)
		*CallFunc_StartsWith_ReturnValue_18 = Parms.CallFunc_StartsWith_ReturnValue_18;

	if (CallFunc_StartsWith_ReturnValue_19 != nullptr)
		*CallFunc_StartsWith_ReturnValue_19 = Parms.CallFunc_StartsWith_ReturnValue_19;

	if (CallFunc_StartsWith_ReturnValue_20 != nullptr)
		*CallFunc_StartsWith_ReturnValue_20 = Parms.CallFunc_StartsWith_ReturnValue_20;

	if (CallFunc_StartsWith_ReturnValue_21 != nullptr)
		*CallFunc_StartsWith_ReturnValue_21 = Parms.CallFunc_StartsWith_ReturnValue_21;

	if (CallFunc_StartsWith_ReturnValue_22 != nullptr)
		*CallFunc_StartsWith_ReturnValue_22 = Parms.CallFunc_StartsWith_ReturnValue_22;

	if (CallFunc_StartsWith_ReturnValue_23 != nullptr)
		*CallFunc_StartsWith_ReturnValue_23 = Parms.CallFunc_StartsWith_ReturnValue_23;

	if (CallFunc_StartsWith_ReturnValue_24 != nullptr)
		*CallFunc_StartsWith_ReturnValue_24 = Parms.CallFunc_StartsWith_ReturnValue_24;

	if (CallFunc_StartsWith_ReturnValue_25 != nullptr)
		*CallFunc_StartsWith_ReturnValue_25 = Parms.CallFunc_StartsWith_ReturnValue_25;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_1 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1;

	if (CallFunc_MakeARFilter_ReturnValue != nullptr)
		*CallFunc_MakeARFilter_ReturnValue = std::move(Parms.CallFunc_MakeARFilter_ReturnValue);

	if (CallFunc_RightChop_ReturnValue != nullptr)
		*CallFunc_RightChop_ReturnValue = std::move(Parms.CallFunc_RightChop_ReturnValue);

	if (CallFunc_RightChop_ReturnValue_1 != nullptr)
		*CallFunc_RightChop_ReturnValue_1 = std::move(Parms.CallFunc_RightChop_ReturnValue_1);

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_Conv_DoubleToText_ReturnValue != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue = Parms.CallFunc_Conv_DoubleToText_ReturnValue;

	if (CallFunc_Conv_DoubleToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_1 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_1;

	if (CallFunc_Conv_DoubleToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_2 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_2;

	if (CallFunc_Conv_DoubleToText_ReturnValue_3 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_3 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_3;

	if (CallFunc_Conv_DoubleToText_ReturnValue_4 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_4 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_4;

	if (CallFunc_Conv_DoubleToText_ReturnValue_5 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_5 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_5;

	if (CallFunc_Conv_DoubleToText_ReturnValue_6 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_6 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_6;

	if (CallFunc_Conv_DoubleToText_ReturnValue_7 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_7 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_7;

	if (CallFunc_Conv_DoubleToText_ReturnValue_8 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_8 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_8;

	if (CallFunc_Conv_DoubleToText_ReturnValue_9 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_9 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_9;

	if (CallFunc_Conv_DoubleToText_ReturnValue_10 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_10 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_10;

	if (CallFunc_Conv_DoubleToText_ReturnValue_11 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_11 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_11;

	if (CallFunc_Conv_DoubleToText_ReturnValue_12 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_12 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_12;

	if (CallFunc_Conv_DoubleToText_ReturnValue_13 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_13 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_13;

	if (CallFunc_Conv_DoubleToText_ReturnValue_14 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_14 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_14;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_ComponentBoundEvent_SelectionType_3 != nullptr)
		*K2Node_ComponentBoundEvent_SelectionType_3 = Parms.K2Node_ComponentBoundEvent_SelectionType_3;

	if (K2Node_MakeArray_Array_2 != nullptr)
		*K2Node_MakeArray_Array_2 = std::move(Parms.K2Node_MakeArray_Array_2);

	if (K2Node_MakeArray_Array_3 != nullptr)
		*K2Node_MakeArray_Array_3 = std::move(Parms.K2Node_MakeArray_Array_3);

	if (CallFunc_Conv_DoubleToText_ReturnValue_15 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_15 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_15;

	if (CallFunc_Conv_DoubleToText_ReturnValue_16 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_16 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_16;

	if (CallFunc_Conv_DoubleToText_ReturnValue_17 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_17 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_17;

	if (CallFunc_RightChop_ReturnValue_2 != nullptr)
		*CallFunc_RightChop_ReturnValue_2 = std::move(Parms.CallFunc_RightChop_ReturnValue_2);

	if (CallFunc_Conv_DoubleToText_ReturnValue_18 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_18 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_18;

	if (CallFunc_Conv_DoubleToText_ReturnValue_19 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_19 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_19;

	if (CallFunc_Conv_DoubleToText_ReturnValue_20 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_20 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_20;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_MakeArray_Array_4 != nullptr)
		*K2Node_MakeArray_Array_4 = std::move(Parms.K2Node_MakeArray_Array_4);

	if (K2Node_MakeArray_Array_5 != nullptr)
		*K2Node_MakeArray_Array_5 = std::move(Parms.K2Node_MakeArray_Array_5);

	if (CallFunc_MakeARFilter_ReturnValue_1 != nullptr)
		*CallFunc_MakeARFilter_ReturnValue_1 = std::move(Parms.CallFunc_MakeARFilter_ReturnValue_1);

	if (K2Node_MakeArray_Array_6 != nullptr)
		*K2Node_MakeArray_Array_6 = std::move(Parms.K2Node_MakeArray_Array_6);

	if (K2Node_MakeArray_Array_7 != nullptr)
		*K2Node_MakeArray_Array_7 = std::move(Parms.K2Node_MakeArray_Array_7);

	if (CallFunc_MakeARFilter_ReturnValue_2 != nullptr)
		*CallFunc_MakeARFilter_ReturnValue_2 = std::move(Parms.CallFunc_MakeARFilter_ReturnValue_2);

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (K2Node_ComponentBoundEvent_SelectionType_2 != nullptr)
		*K2Node_ComponentBoundEvent_SelectionType_2 = Parms.K2Node_ComponentBoundEvent_SelectionType_2;

	if (K2Node_ComponentBoundEvent_SelectionType_1 != nullptr)
		*K2Node_ComponentBoundEvent_SelectionType_1 = Parms.K2Node_ComponentBoundEvent_SelectionType_1;

	if (K2Node_ComponentBoundEvent_SelectionType != nullptr)
		*K2Node_ComponentBoundEvent_SelectionType = Parms.K2Node_ComponentBoundEvent_SelectionType;

	if (CallFunc_Conv_DoubleToText_ReturnValue_21 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_21 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_21;

	if (CallFunc_Conv_DoubleToText_ReturnValue_22 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_22 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_22;

	if (CallFunc_Conv_DoubleToText_ReturnValue_23 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_23 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_23;

	if (CallFunc_Conv_DoubleToText_ReturnValue_24 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_24 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_24;

	if (CallFunc_Conv_DoubleToText_ReturnValue_25 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_25 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_25;

	if (CallFunc_Conv_DoubleToText_ReturnValue_26 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_26 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_26;

	if (CallFunc_Conv_DoubleToText_ReturnValue_27 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_27 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_27;

	if (CallFunc_Conv_DoubleToText_ReturnValue_28 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_28 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_28;

	if (CallFunc_Conv_DoubleToText_ReturnValue_29 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_29 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_29;

	if (CallFunc_Conv_DoubleToText_ReturnValue_30 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_30 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_30;

	if (CallFunc_Conv_DoubleToText_ReturnValue_31 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_31 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_31;

	if (CallFunc_Conv_DoubleToText_ReturnValue_32 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_32 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_32;

	if (CallFunc_Add_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_1;

	if (CallFunc_Add_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast;

	if (CallFunc_SetValue_NewValue_ImplicitCast != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast = Parms.CallFunc_SetValue_NewValue_ImplicitCast;

	if (CallFunc_SetValue_NewValue_ImplicitCast_1 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_1 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_1;

	if (CallFunc_SetValue_NewValue_ImplicitCast_2 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_2 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_2;

	if (CallFunc_SetValue_NewValue_ImplicitCast_3 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_3 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_3;

	if (CallFunc_SetValue_NewValue_ImplicitCast_4 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_4 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_4;

	if (K2Node_VariableSet_DensityInputNoiseTile_ImplicitCast != nullptr)
		*K2Node_VariableSet_DensityInputNoiseTile_ImplicitCast = Parms.K2Node_VariableSet_DensityInputNoiseTile_ImplicitCast;

	if (CallFunc_SetValue_NewValue_ImplicitCast_5 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_5 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_5;

	if (CallFunc_SetValue_NewValue_ImplicitCast_6 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_6 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_6;

	if (CallFunc_SetValue_NewValue_ImplicitCast_7 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_7 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_7;

	if (CallFunc_SetValue_NewValue_ImplicitCast_8 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_8 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_8;

	if (CallFunc_SetValue_NewValue_ImplicitCast_9 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_9 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_9;

	if (CallFunc_SetValue_NewValue_ImplicitCast_10 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_10 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_10;

	if (CallFunc_SetValue_NewValue_ImplicitCast_11 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_11 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_11;

	if (CallFunc_SetValue_NewValue_ImplicitCast_12 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_12 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_12;

	if (CallFunc_SetValue_NewValue_ImplicitCast_13 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_13 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_13;

	if (CallFunc_SetValue_NewValue_ImplicitCast_14 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_14 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_14;

	if (CallFunc_SetValue_NewValue_ImplicitCast_15 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_15 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_15;

	if (CallFunc_SetValue_NewValue_ImplicitCast_16 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_16 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_16;

	if (CallFunc_SetValue_NewValue_ImplicitCast_17 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_17 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_17;

	if (CallFunc_SetValue_NewValue_ImplicitCast_18 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_18 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_18;

	if (CallFunc_SetValue_NewValue_ImplicitCast_19 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_19 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_19;

	if (CallFunc_SetValue_NewValue_ImplicitCast_20 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_20 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_20;

	if (CallFunc_SetValue_NewValue_ImplicitCast_21 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_21 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_21;

	if (CallFunc_SetValue_NewValue_ImplicitCast_22 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_22 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_22;

	if (CallFunc_SetValue_NewValue_ImplicitCast_23 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_23 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_23;

	if (CallFunc_SetValue_NewValue_ImplicitCast_24 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_24 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_24;

	if (CallFunc_SetValue_NewValue_ImplicitCast_25 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_25 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_25;

	if (CallFunc_SetValue_NewValue_ImplicitCast_26 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_26 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_26;

	if (CallFunc_SetValue_NewValue_ImplicitCast_27 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_27 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_27;

	if (CallFunc_SetValue_NewValue_ImplicitCast_28 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_28 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_28;

	if (CallFunc_SetValue_NewValue_ImplicitCast_29 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_29 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_29;

	if (CallFunc_SetValue_NewValue_ImplicitCast_30 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_30 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_30;

	if (CallFunc_SetValue_NewValue_ImplicitCast_31 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_31 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_31;

	if (CallFunc_SetValue_NewValue_ImplicitCast_32 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_32 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_32;

	if (CallFunc_SetValue_NewValue_ImplicitCast_33 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_33 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_33;

	if (CallFunc_SetValue_NewValue_ImplicitCast_34 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_34 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_34;

	if (CallFunc_SetValue_NewValue_ImplicitCast_35 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_35 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_35;

	if (CallFunc_SetValue_NewValue_ImplicitCast_36 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_36 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_36;

	if (CallFunc_SetValue_NewValue_ImplicitCast_37 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_37 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_37;

	if (CallFunc_SetValue_NewValue_ImplicitCast_38 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_38 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_38;

	if (CallFunc_SetValue_NewValue_ImplicitCast_39 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_39 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_39;

	if (CallFunc_SetValue_NewValue_ImplicitCast_40 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_40 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_40;

	if (CallFunc_SetValue_NewValue_ImplicitCast_41 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_41 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_41;

	if (CallFunc_SetValue_NewValue_ImplicitCast_42 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_42 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_42;

	if (CallFunc_SetValue_NewValue_ImplicitCast_43 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_43 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_43;

	if (CallFunc_SetValue_NewValue_ImplicitCast_44 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_44 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_44;

	if (CallFunc_SetValue_NewValue_ImplicitCast_45 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_45 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_45;

	if (CallFunc_SetValue_NewValue_ImplicitCast_46 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_46 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_46;

	if (CallFunc_SetValue_NewValue_ImplicitCast_47 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_47 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_47;

	if (CallFunc_SetValue_NewValue_ImplicitCast_48 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_48 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_48;

	if (K2Node_VariableSet_DensityTxtMult_ImplicitCast != nullptr)
		*K2Node_VariableSet_DensityTxtMult_ImplicitCast = Parms.K2Node_VariableSet_DensityTxtMult_ImplicitCast;

	if (CallFunc_SetValue_NewValue_ImplicitCast_49 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_49 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_49;

	if (CallFunc_SetValue_NewValue_ImplicitCast_50 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_50 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_50;

	if (K2Node_VariableSet_EdgeMaskWidth_ImplicitCast != nullptr)
		*K2Node_VariableSet_EdgeMaskWidth_ImplicitCast = Parms.K2Node_VariableSet_EdgeMaskWidth_ImplicitCast;

	if (K2Node_VariableSet_VeloOffsetY_ImplicitCast != nullptr)
		*K2Node_VariableSet_VeloOffsetY_ImplicitCast = Parms.K2Node_VariableSet_VeloOffsetY_ImplicitCast;

	if (CallFunc_SetValue_NewValue_ImplicitCast_51 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_51 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_51;

	if (CallFunc_SetValue_NewValue_ImplicitCast_52 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_52 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_52;

	if (CallFunc_SetValue_NewValue_ImplicitCast_53 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_53 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_53;

	if (CallFunc_SetValue_NewValue_ImplicitCast_54 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_54 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_54;

	if (CallFunc_SetValue_NewValue_ImplicitCast_55 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_55 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_55;

	if (CallFunc_SetValue_NewValue_ImplicitCast_56 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_56 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_56;

	if (CallFunc_SetValue_NewValue_ImplicitCast_57 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_57 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_57;

	if (CallFunc_SetValue_NewValue_ImplicitCast_58 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_58 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_58;

	if (CallFunc_SetValue_NewValue_ImplicitCast_59 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_59 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_59;

	if (CallFunc_SetValue_NewValue_ImplicitCast_60 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_60 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_60;

	if (CallFunc_SetValue_NewValue_ImplicitCast_61 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_61 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_61;

	if (CallFunc_SetValue_NewValue_ImplicitCast_62 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_62 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_62;

	if (CallFunc_SetValue_NewValue_ImplicitCast_63 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_63 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_63;

	if (CallFunc_SetValue_NewValue_ImplicitCast_64 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_64 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_64;

	if (CallFunc_SetValue_NewValue_ImplicitCast_65 != nullptr)
		*CallFunc_SetValue_NewValue_ImplicitCast_65 = Parms.CallFunc_SetValue_NewValue_ImplicitCast_65;

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.OnPresetDuplicated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  DuplicatedPreset                                                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UNinjaLiveGUI_C::OnPresetDuplicated__DelegateSignature(class UDataTable* DuplicatedPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "OnPresetDuplicated__DelegateSignature");

	Params::UNinjaLiveGUI_C_OnPresetDuplicated__DelegateSignature_Params Parms{};

	Parms.DuplicatedPreset = DuplicatedPreset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.OnDensityMapSave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SavePaintBuffer                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UNinjaLiveGUI_C::OnDensityMapSave__DelegateSignature(bool* SavePaintBuffer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "OnDensityMapSave__DelegateSignature");

	Params::UNinjaLiveGUI_C_OnDensityMapSave__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SavePaintBuffer != nullptr)
		*SavePaintBuffer = Parms.SavePaintBuffer;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.OnPresetSave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SelectedProject                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      SelectedPreset                                                   (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               OverWriteOrNot                                                   (Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)

class FString UNinjaLiveGUI_C::OnPresetSave__DelegateSignature(class FString* SelectedProject, bool OverWriteOrNot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "OnPresetSave__DelegateSignature");

	Params::UNinjaLiveGUI_C_OnPresetSave__DelegateSignature_Params Parms{};

	Parms.OverWriteOrNot = OverWriteOrNot;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedProject != nullptr)
		*SelectedProject = std::move(Parms.SelectedProject);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.OnPresetSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SelectedPreset                                                   (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ForceAutoLoadPreset                                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)

class FString UNinjaLiveGUI_C::OnPresetSelectionChanged__DelegateSignature(bool ForceAutoLoadPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "OnPresetSelectionChanged__DelegateSignature");

	Params::UNinjaLiveGUI_C_OnPresetSelectionChanged__DelegateSignature_Params Parms{};

	Parms.ForceAutoLoadPreset = ForceAutoLoadPreset;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLiveGUI.NinjaLiveGUI_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SelectedMenuItem                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FString                      SelectedActorName                                                (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

class FString UNinjaLiveGUI_C::OnSelectionChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveGUI_C", "OnSelectionChanged__DelegateSignature");

	Params::UNinjaLiveGUI_C_OnSelectionChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


