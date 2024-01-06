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
// TArray<struct FInstalledMod>       ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UHostSession_Switch_C::BPPopulateMods(TArray<struct FInstalledMod>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "BPPopulateMods");

	Params::UHostSession_Switch_C_BPPopulateMods_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function HostSession_Switch.HostSession_Switch_C.DoSettingsMatchAnyDefaults
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Matches                                                          (BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)

void UHostSession_Switch_C::DoSettingsMatchAnyDefaults(bool* Matches, bool* CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue, bool* CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1, bool* CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "DoSettingsMatchAnyDefaults");

	Params::UHostSession_Switch_C_DoSettingsMatchAnyDefaults_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Matches != nullptr)
		*Matches = Parms.Matches;

	if (CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue != nullptr)
		*CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue = Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue;

	if (CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1 != nullptr)
		*CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1 = Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1;

	if (CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2 != nullptr)
		*CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2 = Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2;

}


// Function HostSession_Switch.HostSession_Switch_C.GetSelectedMapIndex
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              CallFunc_GetSelectedMapIndex_index                               (Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UHostSession_Switch_C::GetSelectedMapIndex(int32* ReturnValue, int32* CallFunc_GetSelectedMapIndex_index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "GetSelectedMapIndex");

	Params::UHostSession_Switch_C_GetSelectedMapIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (CallFunc_GetSelectedMapIndex_index != nullptr)
		*CallFunc_GetSelectedMapIndex_index = Parms.CallFunc_GetSelectedMapIndex_index;

}


// Function HostSession_Switch.HostSession_Switch_C.IsInMapSelectView
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

void UHostSession_Switch_C::IsInMapSelectView(bool* ReturnValue, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "IsInMapSelectView");

	Params::UHostSession_Switch_C_IsInMapSelectView_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.GetMapSelectScrollBox
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UHostSession_Switch_C::GetMapSelectScrollBox(class UScrollBox** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "GetMapSelectScrollBox");

	Params::UHostSession_Switch_C_GetMapSelectScrollBox_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

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
// int32                              MapIndex                                                         (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              SelectedIndex                                                    (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasDLCforMapIndex_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_GetMapInfo_OutMapName                                   (ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FMapDescription             CallFunc_GetMapInfo_OutDescription                               (BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

bool UHostSession_Switch_C::SetMainMapSelectEntry(bool CallFunc_Not_PreBool_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, class FText* CallFunc_GetMapInfo_OutMapName, struct FMapDescription* CallFunc_GetMapInfo_OutDescription, class FString* CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "SetMainMapSelectEntry");

	Params::UHostSession_Switch_C_SetMainMapSelectEntry_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

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
// int32                              Temp_int_Array_Index_Variable                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

bool UHostSession_Switch_C::SetupMapSelectEntries(int32* CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "SetupMapSelectEntries");

	Params::UHostSession_Switch_C_SetupMapSelectEntries_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)

float UHostSession_Switch_C::Tick(const struct FGeometry& MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "Tick");

	Params::UHostSession_Switch_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;

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
// bool                               IsDesignTime                                                     (Edit, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

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
// TArray<struct FInstalledMod>       Installed_mods                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)

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
// bool                               Is_authenticated                                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 Temp_delegate_Variable                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasDLCforMapIndex_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              K2Node_Event_index                                               (BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_DoSettingsMatchAnyDefaults_Matches                      (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoSettingsMatchAnyDefaults_Matches_1                    (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_DoSettingsMatchAnyDefaults_Matches_2                    (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstalledMod>       K2Node_CustomEvent_installed_mods                                (ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_CustomEvent_is_authenticated                              (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UCFCoreSubsystem* UHostSession_Switch_C::ExecuteUbergraph_HostSession_Switch(int32* EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_DoSettingsMatchAnyDefaults_Matches, bool CallFunc_DoSettingsMatchAnyDefaults_Matches_1, bool CallFunc_DoSettingsMatchAnyDefaults_Matches_2, bool* CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue, bool* CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1, bool* CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2, int32* CallFunc_Add_IntInt_ReturnValue, const TArray<struct FInstalledMod>& K2Node_CustomEvent_installed_mods, bool K2Node_CustomEvent_is_authenticated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "ExecuteUbergraph_HostSession_Switch");

	Params::UHostSession_Switch_C_ExecuteUbergraph_HostSession_Switch_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_DoSettingsMatchAnyDefaults_Matches = CallFunc_DoSettingsMatchAnyDefaults_Matches;
	Parms.CallFunc_DoSettingsMatchAnyDefaults_Matches_1 = CallFunc_DoSettingsMatchAnyDefaults_Matches_1;
	Parms.CallFunc_DoSettingsMatchAnyDefaults_Matches_2 = CallFunc_DoSettingsMatchAnyDefaults_Matches_2;
	Parms.K2Node_CustomEvent_installed_mods = K2Node_CustomEvent_installed_mods;
	Parms.K2Node_CustomEvent_is_authenticated = K2Node_CustomEvent_is_authenticated;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue != nullptr)
		*CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue = Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue;

	if (CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1 != nullptr)
		*CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1 = Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1;

	if (CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2 != nullptr)
		*CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2 = Parms.CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2;

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	return Parms.ReturnValue;

}

}


