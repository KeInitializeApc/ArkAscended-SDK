#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HostSession_Switch.HostSession_Switch_C
// (None)

class UClass* UHostSession_Switch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HostSession_Switch_C");

	return Clss;
}


// HostSession_Switch_C HostSession_Switch.Default__HostSession_Switch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHostSession_Switch_C* UHostSession_Switch_C::GetDefaultObj()
{
	static class UHostSession_Switch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHostSession_Switch_C*>(UHostSession_Switch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HostSession_Switch.HostSession_Switch_C.BPPopulateMods
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstalledMod>       ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FInstalledMod> UHostSession_Switch_C::BPPopulateMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "BPPopulateMods");

	Params::UHostSession_Switch_C_BPPopulateMods_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.DoSettingsMatchAnyDefaults
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Matches                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue          (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1        (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2        (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)

bool UHostSession_Switch_C::DoSettingsMatchAnyDefaults(bool* Matches)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "DoSettingsMatchAnyDefaults");

	Params::UHostSession_Switch_C_DoSettingsMatchAnyDefaults_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Matches != nullptr)
		*Matches = Parms.Matches;

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.GetSelectedMapIndex
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_GetSelectedMapIndex_index                               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

int32 UHostSession_Switch_C::GetSelectedMapIndex(int32* CallFunc_GetSelectedMapIndex_index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "GetSelectedMapIndex");

	Params::UHostSession_Switch_C_GetSelectedMapIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetSelectedMapIndex_index != nullptr)
		*CallFunc_GetSelectedMapIndex_index = Parms.CallFunc_GetSelectedMapIndex_index;

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.IsInMapSelectView
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (DisableEditOnInstance, SubobjectReference)

bool UHostSession_Switch_C::IsInMapSelectView(bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "IsInMapSelectView");

	Params::UHostSession_Switch_C_IsInMapSelectView_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.GetMapSelectScrollBox
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UScrollBox* UHostSession_Switch_C::GetMapSelectScrollBox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "GetMapSelectScrollBox");

	Params::UHostSession_Switch_C_GetMapSelectScrollBox_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.MoveToMainScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::MoveToMainScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "MoveToMainScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.SetMainMapSelectEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MapIndex                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              SelectedIndex                                                    (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_HasDLCforMapIndex_ReturnValue                           (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FText                        CallFunc_GetMapInfo_OutMapName                                   (Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FMapDescription             CallFunc_GetMapInfo_OutDescription                               (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

class FString UHostSession_Switch_C::SetMainMapSelectEntry(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UMapSelect_Entry_C*>* CallFunc_GetMapSelectEntries_MapSelectEntries, class UMapSelect_Entry_C* CallFunc_Array_Get_Item, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class FText* CallFunc_GetMapInfo_OutMapName, struct FMapDescription* CallFunc_GetMapInfo_OutDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "SetMainMapSelectEntry");

	Params::UHostSession_Switch_C_SetMainMapSelectEntry_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetMapSelectEntries_MapSelectEntries != nullptr)
		*CallFunc_GetMapSelectEntries_MapSelectEntries = std::move(Parms.CallFunc_GetMapSelectEntries_MapSelectEntries);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_GetMapInfo_OutMapName != nullptr)
		*CallFunc_GetMapInfo_OutMapName = Parms.CallFunc_GetMapInfo_OutMapName;

	if (CallFunc_GetMapInfo_OutDescription != nullptr)
		*CallFunc_GetMapInfo_OutDescription = std::move(Parms.CallFunc_GetMapInfo_OutDescription);

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.SetupMapSelectEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UHostSession_Switch_C::SetupMapSelectEntries(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UMapSelect_Entry_C*>* CallFunc_GetMapSelectEntries_MapSelectEntries, class UMapSelect_Entry_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "SetupMapSelectEntries");

	Params::UHostSession_Switch_C_SetupMapSelectEntries_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_GetMapSelectEntries_MapSelectEntries != nullptr)
		*CallFunc_GetMapSelectEntries_MapSelectEntries = std::move(Parms.CallFunc_GetMapSelectEntries_MapSelectEntries);

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UHostSession_Switch_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "Tick");

	Params::UHostSession_Switch_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UHostSession_Switch_C::PreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "PreConstruct");

	Params::UHostSession_Switch_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.BPPostPopulateMods
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::BPPostPopulateMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "BPPostPopulateMods");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.BPOnUpdateSavedDataButtons
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::BPOnUpdateSavedDataButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "BPOnUpdateSavedDataButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.SetSelectedMapIndex
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

int32 UHostSession_Switch_C::SetSelectedMapIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "SetSelectedMapIndex");

	Params::UHostSession_Switch_C_SetSelectedMapIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.SelectMapButtonPressed
// (Event, Public, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::SelectMapButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "SelectMapButtonPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.BndEvt__HostSession_Switch_EasyPresetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::BndEvt__HostSession_Switch_EasyPresetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "BndEvt__HostSession_Switch_EasyPresetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.BndEvt__HostSession_Switch_MediumPresetButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::BndEvt__HostSession_Switch_MediumPresetButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "BndEvt__HostSession_Switch_MediumPresetButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.BndEvt__HostSession_Switch_HardPresetButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::BndEvt__HostSession_Switch_HardPresetButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "BndEvt__HostSession_Switch_HardPresetButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.ConfirmedChangeSettingsToHard
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::ConfirmedChangeSettingsToHard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "ConfirmedChangeSettingsToHard");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.ConfirmedChangeSettingsToMedium
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::ConfirmedChangeSettingsToMedium()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "ConfirmedChangeSettingsToMedium");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.ConfirmedChangeSettingsToEasy
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::ConfirmedChangeSettingsToEasy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "ConfirmedChangeSettingsToEasy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.MoveToMapScreen
// (Event, Public, BlueprintEvent)
// Parameters:

void UHostSession_Switch_C::MoveToMapScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "MoveToMapScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HostSession_Switch.HostSession_Switch_C.OnGetInstalledMods
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstalledMod>       Installed_mods                                                   (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FInstalledMod> UHostSession_Switch_C::OnGetInstalledMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "OnGetInstalledMods");

	Params::UHostSession_Switch_C_OnGetInstalledMods_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.OnIsAuthenticated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_authenticated                                                 (Edit, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UHostSession_Switch_C::OnIsAuthenticated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "OnIsAuthenticated");

	Params::UHostSession_Switch_C_OnIsAuthenticated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.ExecuteUbergraph_HostSession_Switch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// FDelegateProperty_                 Temp_delegate_Variable                                           (Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_HasDLCforMapIndex_ReturnValue                           (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              K2Node_Event_index                                               (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_DoSettingsMatchAnyDefaults_Matches                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoSettingsMatchAnyDefaults_Matches_1                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_DoSettingsMatchAnyDefaults_Matches_2                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue          (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1        (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2        (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstalledMod>       K2Node_CustomEvent_installed_mods                                (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_CustomEvent_is_authenticated                              (Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class UCFCoreSubsystem* UHostSession_Switch_C::ExecuteUbergraph_HostSession_Switch(int32* EntryPoint, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ Temp_delegate_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool* K2Node_DynamicCast_bSuccess, TArray<class UMapSelect_Entry_C*>* CallFunc_GetMapSelectEntries_MapSelectEntries, class UMapSelect_Entry_C* CallFunc_Array_Get_Item, bool* CallFunc_DoSettingsMatchAnyDefaults_Matches, bool* CallFunc_DoSettingsMatchAnyDefaults_Matches_1, bool* CallFunc_DoSettingsMatchAnyDefaults_Matches_2, int32 Temp_int_Loop_Counter_Variable, TArray<struct FInstalledMod>* K2Node_CustomEvent_installed_mods, bool K2Node_CustomEvent_is_authenticated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "ExecuteUbergraph_HostSession_Switch");

	Params::UHostSession_Switch_C_ExecuteUbergraph_HostSession_Switch_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CustomEvent_is_authenticated = K2Node_CustomEvent_is_authenticated;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetMapSelectEntries_MapSelectEntries != nullptr)
		*CallFunc_GetMapSelectEntries_MapSelectEntries = std::move(Parms.CallFunc_GetMapSelectEntries_MapSelectEntries);

	if (CallFunc_DoSettingsMatchAnyDefaults_Matches != nullptr)
		*CallFunc_DoSettingsMatchAnyDefaults_Matches = Parms.CallFunc_DoSettingsMatchAnyDefaults_Matches;

	if (CallFunc_DoSettingsMatchAnyDefaults_Matches_1 != nullptr)
		*CallFunc_DoSettingsMatchAnyDefaults_Matches_1 = Parms.CallFunc_DoSettingsMatchAnyDefaults_Matches_1;

	if (CallFunc_DoSettingsMatchAnyDefaults_Matches_2 != nullptr)
		*CallFunc_DoSettingsMatchAnyDefaults_Matches_2 = Parms.CallFunc_DoSettingsMatchAnyDefaults_Matches_2;

	if (K2Node_CustomEvent_installed_mods != nullptr)
		*K2Node_CustomEvent_installed_mods = std::move(Parms.K2Node_CustomEvent_installed_mods);

	return Parms.ReturnValue;

}

}


