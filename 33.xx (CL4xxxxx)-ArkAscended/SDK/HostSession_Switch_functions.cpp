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
// TArray<struct FInstalledMod>       ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// bool                               Matches                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)

bool UHostSession_Switch_C::DoSettingsMatchAnyDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "DoSettingsMatchAnyDefaults");

	Params::UHostSession_Switch_C_DoSettingsMatchAnyDefaults_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.GetSelectedMapIndex
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              CallFunc_GetSelectedMapIndex_index                               (Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

void UHostSession_Switch_C::IsInMapSelectView(bool ReturnValue, bool* CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "IsInMapSelectView");

	Params::UHostSession_Switch_C_IsInMapSelectView_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsVisible_ReturnValue != nullptr)
		*CallFunc_IsVisible_ReturnValue = Parms.CallFunc_IsVisible_ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.GetMapSelectScrollBox
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int32                              MapIndex                                                         (Edit, BlueprintVisible, Net, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              SelectedIndex                                                    (ExportObject, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasDLCforMapIndex_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_GetMapInfo_OutMapName                                   (Edit, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FMapDescription             CallFunc_GetMapInfo_OutDescription                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

class FString UHostSession_Switch_C::SetMainMapSelectEntry(int32 MapIndex, int32 SelectedIndex, bool* CallFunc_HasDLCforMapIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UMapSelect_Entry_C* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "SetMainMapSelectEntry");

	Params::UHostSession_Switch_C_SetMainMapSelectEntry_Params Parms{};

	Parms.MapIndex = MapIndex;
	Parms.SelectedIndex = SelectedIndex;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_HasDLCforMapIndex_ReturnValue != nullptr)
		*CallFunc_HasDLCforMapIndex_ReturnValue = Parms.CallFunc_HasDLCforMapIndex_ReturnValue;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.SetupMapSelectEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)

TArray<class UMapSelect_Entry_C*> UHostSession_Switch_C::SetupMapSelectEntries(int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UMapSelect_Entry_C* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "SetupMapSelectEntries");

	Params::UHostSession_Switch_C_SetupMapSelectEntries_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function HostSession_Switch.HostSession_Switch_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintVisible, Net, Parm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// bool                               IsDesignTime                                                     (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
// TArray<struct FInstalledMod>       Installed_mods                                                   (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

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
// bool                               Is_authenticated                                                 (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasDLCforMapIndex_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              K2Node_Event_index                                               (Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_DoSettingsMatchAnyDefaults_Matches                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoSettingsMatchAnyDefaults_Matches_1                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_DoSettingsMatchAnyDefaults_Matches_2                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstalledMod>       K2Node_CustomEvent_installed_mods                                (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_CustomEvent_is_authenticated                              (BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UHostSession_Switch_C::ExecuteUbergraph_HostSession_Switch(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ Temp_delegate_Variable, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class UMapSelect_Entry_C* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_HasDLCforMapIndex_ReturnValue, int32* K2Node_Event_index, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, TArray<struct FInstalledMod>* K2Node_CustomEvent_installed_mods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HostSession_Switch_C", "ExecuteUbergraph_HostSession_Switch");

	Params::UHostSession_Switch_C_ExecuteUbergraph_HostSession_Switch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_MyGeometry != nullptr)
		*K2Node_Event_MyGeometry = std::move(Parms.K2Node_Event_MyGeometry);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_HasDLCforMapIndex_ReturnValue != nullptr)
		*CallFunc_HasDLCforMapIndex_ReturnValue = Parms.CallFunc_HasDLCforMapIndex_ReturnValue;

	if (K2Node_Event_index != nullptr)
		*K2Node_Event_index = Parms.K2Node_Event_index;

	if (K2Node_CustomEvent_installed_mods != nullptr)
		*K2Node_CustomEvent_installed_mods = std::move(Parms.K2Node_CustomEvent_installed_mods);

	return Parms.ReturnValue;

}

}


