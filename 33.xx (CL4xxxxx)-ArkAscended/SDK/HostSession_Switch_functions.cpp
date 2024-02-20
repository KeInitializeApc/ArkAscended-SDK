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
// TArray<struct FInstalledMod>       ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UHostSession_Switch_C::BPPopulateMods(const TArray<struct FInstalledMod>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "BPPopulateMods");

	Params::UHostSession_Switch_C_BPPopulateMods_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HostSession_Switch.HostSession_Switch_C.DoSettingsMatchAnyDefaults
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Matches                                                          (Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue          (Edit, BlueprintVisible, BlueprintReadOnly, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1        (Edit, BlueprintVisible, BlueprintReadOnly, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2        (Edit, BlueprintVisible, BlueprintReadOnly, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)

bool UHostSession_Switch_C::DoSettingsMatchAnyDefaults(bool CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue, bool CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1, bool CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "DoSettingsMatchAnyDefaults");

	Params::UHostSession_Switch_C_DoSettingsMatchAnyDefaults_Params Parms{};

	Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue = CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue;
	Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1 = CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1;
	Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2 = CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.GetSelectedMapIndex
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_GetSelectedMapIndex_index                               (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

int32 UHostSession_Switch_C::GetSelectedMapIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "GetSelectedMapIndex");

	Params::UHostSession_Switch_C_GetSelectedMapIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.IsInMapSelectView
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UHostSession_Switch_C::IsInMapSelectView(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "IsInMapSelectView");

	Params::UHostSession_Switch_C_IsInMapSelectView_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.GetMapSelectScrollBox
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UHostSession_Switch_C::GetMapSelectScrollBox(class UScrollBox* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "GetMapSelectScrollBox");

	Params::UHostSession_Switch_C_GetMapSelectScrollBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

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
// int32                              MapIndex                                                         (ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              SelectedIndex                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_HasDLCforMapIndex_ReturnValue                           (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class FText                        CallFunc_GetMapInfo_OutMapName                                   (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FMapDescription             CallFunc_GetMapInfo_OutDescription                               (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UHostSession_Switch_C::SetMainMapSelectEntry(int32 MapIndex, int32 SelectedIndex, bool CallFunc_HasDLCforMapIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class FText* CallFunc_GetMapInfo_OutMapName, struct FMapDescription* CallFunc_GetMapInfo_OutDescription, class FString* CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "SetMainMapSelectEntry");

	Params::UHostSession_Switch_C_SetMainMapSelectEntry_Params Parms{};

	Parms.MapIndex = MapIndex;
	Parms.SelectedIndex = SelectedIndex;
	Parms.CallFunc_HasDLCforMapIndex_ReturnValue = CallFunc_HasDLCforMapIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_GetMapInfo_OutMapName != nullptr)
		*CallFunc_GetMapInfo_OutMapName = Parms.CallFunc_GetMapInfo_OutMapName;

	if (CallFunc_GetMapInfo_OutDescription != nullptr)
		*CallFunc_GetMapInfo_OutDescription = std::move(Parms.CallFunc_GetMapInfo_OutDescription);

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.SetupMapSelectEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UHostSession_Switch_C::SetupMapSelectEntries(bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "SetupMapSelectEntries");

	Params::UHostSession_Switch_C_SetupMapSelectEntries_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UHostSession_Switch_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "Tick");

	Params::UHostSession_Switch_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

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
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UHostSession_Switch_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "PreConstruct");

	Params::UHostSession_Switch_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

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
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UHostSession_Switch_C::SetSelectedMapIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "SetSelectedMapIndex");

	Params::UHostSession_Switch_C_SetSelectedMapIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

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
// TArray<struct FInstalledMod>       Installed_mods                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)

void UHostSession_Switch_C::OnGetInstalledMods(TArray<struct FInstalledMod>* Installed_mods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "OnGetInstalledMods");

	Params::UHostSession_Switch_C_OnGetInstalledMods_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Installed_mods != nullptr)
		*Installed_mods = std::move(Parms.Installed_mods);

}


// Function HostSession_Switch.HostSession_Switch_C.OnIsAuthenticated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_authenticated                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)

void UHostSession_Switch_C::OnIsAuthenticated(bool* Is_authenticated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "OnIsAuthenticated");

	Params::UHostSession_Switch_C_OnIsAuthenticated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Is_authenticated != nullptr)
		*Is_authenticated = Parms.Is_authenticated;

}


// Function HostSession_Switch.HostSession_Switch_C.ExecuteUbergraph_HostSession_Switch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Temp_delegate_Variable                                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_HasDLCforMapIndex_ReturnValue                           (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              K2Node_Event_index                                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_DoSettingsMatchAnyDefaults_Matches                      (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoSettingsMatchAnyDefaults_Matches_1                    (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_DoSettingsMatchAnyDefaults_Matches_2                    (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue          (Edit, BlueprintVisible, BlueprintReadOnly, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1        (Edit, BlueprintVisible, BlueprintReadOnly, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2        (Edit, BlueprintVisible, BlueprintReadOnly, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstalledMod>       K2Node_CustomEvent_installed_mods                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_CustomEvent_is_authenticated                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

bool UHostSession_Switch_C::ExecuteUbergraph_HostSession_Switch(FDelegateProperty_ Temp_delegate_Variable, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool CallFunc_HasDLCforMapIndex_ReturnValue, int32* K2Node_Event_index, bool CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue, bool CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1, bool CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "ExecuteUbergraph_HostSession_Switch");

	Params::UHostSession_Switch_C_ExecuteUbergraph_HostSession_Switch_Params Parms{};

	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.CallFunc_HasDLCforMapIndex_ReturnValue = CallFunc_HasDLCforMapIndex_ReturnValue;
	Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue = CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue;
	Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1 = CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1;
	Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2 = CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (K2Node_Event_index != nullptr)
		*K2Node_Event_index = Parms.K2Node_Event_index;

	return Parms.ReturnValue;

}

}


