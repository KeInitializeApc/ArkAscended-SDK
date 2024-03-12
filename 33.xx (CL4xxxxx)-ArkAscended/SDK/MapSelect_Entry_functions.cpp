#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MapSelect_Entry.MapSelect_Entry_C
// (None)

class UClass* UMapSelect_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapSelect_Entry_C");

	return Clss;
}


// MapSelect_Entry_C MapSelect_Entry.Default__MapSelect_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMapSelect_Entry_C* UMapSelect_Entry_C::GetDefaultObj()
{
	static class UMapSelect_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapSelect_Entry_C*>(UMapSelect_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MapSelect_Entry.MapSelect_Entry_C.FixupComboBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UMapSelect_Entry_C::FixupComboBox(int32 CallFunc_GetSelectedIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "FixupComboBox");

	Params::UMapSelect_Entry_C_FixupComboBox_Params Parms{};

	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapSelect_Entry.MapSelect_Entry_C.UpdateDeleteSaveButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_HasSaveForMapIndex_ReturnValue                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UMapSelect_Entry_C::UpdateDeleteSaveButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool* CallFunc_HasSaveForMapIndex_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "UpdateDeleteSaveButton");

	Params::UMapSelect_Entry_C_UpdateDeleteSaveButton_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_HasSaveForMapIndex_ReturnValue != nullptr)
		*CallFunc_HasSaveForMapIndex_ReturnValue = Parms.CallFunc_HasSaveForMapIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function MapSelect_Entry.MapSelect_Entry_C.IsSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (DisableEditOnInstance, SubobjectReference)

void UMapSelect_Entry_C::IsSelected(bool* Selected, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "IsSelected");

	Params::UMapSelect_Entry_C_IsSelected_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Selected != nullptr)
		*Selected = Parms.Selected;

}


// Function MapSelect_Entry.MapSelect_Entry_C.Set To Map Select View
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMapSelectView                                                  (ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

void UMapSelect_Entry_C::Set_To_Map_Select_View(bool* IsMapSelectView, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "Set To Map Select View");

	Params::UMapSelect_Entry_C_Set_To_Map_Select_View_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMapSelectView != nullptr)
		*IsMapSelectView = Parms.IsMapSelectView;

}


// Function MapSelect_Entry.MapSelect_Entry_C.Show Hide Locked Images
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLocked                                                         (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UMapSelect_Entry_C::Show_Hide_Locked_Images(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "Show Hide Locked Images");

	Params::UMapSelect_Entry_C_Show_Hide_Locked_Images_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapSelect_Entry.MapSelect_Entry_C.SetupUsingHostSession
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_HostSession*             HostSession                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Session_C*        MapSelectSession                                                 (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              WithIndex                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_SelectInt_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_GetMapInfo_OutMapName                                   (Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FMapDescription             CallFunc_GetMapInfo_OutDescription                               (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

int32 UMapSelect_Entry_C::SetupUsingHostSession(class UUI_HostSession** HostSession, class UMapSelect_Session_C* MapSelectSession, int32 WithIndex, bool* CallFunc_Greater_IntInt_ReturnValue, class FText* CallFunc_GetMapInfo_OutMapName, struct FMapDescription* CallFunc_GetMapInfo_OutDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "SetupUsingHostSession");

	Params::UMapSelect_Entry_C_SetupUsingHostSession_Params Parms{};

	Parms.MapSelectSession = MapSelectSession;
	Parms.WithIndex = WithIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (HostSession != nullptr)
		*HostSession = Parms.HostSession;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_GetMapInfo_OutMapName != nullptr)
		*CallFunc_GetMapInfo_OutMapName = Parms.CallFunc_GetMapInfo_OutMapName;

	if (CallFunc_GetMapInfo_OutDescription != nullptr)
		*CallFunc_GetMapInfo_OutDescription = std::move(Parms.CallFunc_GetMapInfo_OutDescription);

	return Parms.ReturnValue;

}


// Function MapSelect_Entry.MapSelect_Entry_C.BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMapSelect_Entry_C::BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapSelect_Entry.MapSelect_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMapSelect_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapSelect_Entry.MapSelect_Entry_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

bool UMapSelect_Entry_C::SetSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "SetSelected");

	Params::UMapSelect_Entry_C_SetSelected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapSelect_Entry.MapSelect_Entry_C.BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMapSelect_Entry_C::BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "BndEvt__MapSelect_Entry_ScrollViewSelectionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapSelect_Entry.MapSelect_Entry_C.BndEvt__MapSelect_Entry_MapModeComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

enum class ESelectInfo UMapSelect_Entry_C::BndEvt__MapSelect_Entry_MapModeComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "BndEvt__MapSelect_Entry_MapModeComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");

	Params::UMapSelect_Entry_C_BndEvt__MapSelect_Entry_MapModeComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapSelect_Entry.MapSelect_Entry_C.BndEvt__MapSelect_Entry_MapNameComboBox_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

enum class ESelectInfo UMapSelect_Entry_C::BndEvt__MapSelect_Entry_MapNameComboBox_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "BndEvt__MapSelect_Entry_MapNameComboBox_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");

	Params::UMapSelect_Entry_C_BndEvt__MapSelect_Entry_MapNameComboBox_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapSelect_Entry.MapSelect_Entry_C.BndEvt__MapSelect_Entry_DeleteSinglePlayerData_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMapSelect_Entry_C::BndEvt__MapSelect_Entry_DeleteSinglePlayerData_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "BndEvt__MapSelect_Entry_DeleteSinglePlayerData_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapSelect_Entry.MapSelect_Entry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UMapSelect_Entry_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "Tick");

	Params::UMapSelect_Entry_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function MapSelect_Entry.MapSelect_Entry_C.ExecuteUbergraph_MapSelect_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Sin_ReturnValue                                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_CustomEvent_IsSelected                                    (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_1                        (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_1                       (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

float UMapSelect_Entry_C::ExecuteUbergraph_MapSelect_Entry(int32* EntryPoint, enum class ESlateVisibility Temp_byte_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Sin_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue, bool* K2Node_CustomEvent_IsSelected, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, const class FString& K2Node_ComponentBoundEvent_SelectedItem_1, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType_1, int32 CallFunc_GetSelectedIndex_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double* CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Percent_FloatFloat_ReturnValue, double* CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Entry_C", "ExecuteUbergraph_MapSelect_Entry");

	Params::UMapSelect_Entry_C_ExecuteUbergraph_MapSelect_Entry_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_1 = K2Node_ComponentBoundEvent_SelectedItem_1;
	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_Sin_ReturnValue != nullptr)
		*CallFunc_Sin_ReturnValue = Parms.CallFunc_Sin_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (K2Node_CustomEvent_IsSelected != nullptr)
		*K2Node_CustomEvent_IsSelected = Parms.K2Node_CustomEvent_IsSelected;

	if (K2Node_ComponentBoundEvent_SelectionType_1 != nullptr)
		*K2Node_ComponentBoundEvent_SelectionType_1 = Parms.K2Node_ComponentBoundEvent_SelectionType_1;

	if (K2Node_ComponentBoundEvent_SelectionType != nullptr)
		*K2Node_ComponentBoundEvent_SelectionType = Parms.K2Node_ComponentBoundEvent_SelectionType;

	if (CallFunc_Add_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_1;

	if (CallFunc_Add_DoubleDouble_B_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleDouble_B_ImplicitCast = Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast;

	return Parms.ReturnValue;

}

}


