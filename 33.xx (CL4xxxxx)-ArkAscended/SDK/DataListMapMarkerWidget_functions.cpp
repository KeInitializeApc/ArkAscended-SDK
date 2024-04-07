#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListMapMarkerWidget.DataListMapMarkerWidget_C
// (None)

class UClass* UDataListMapMarkerWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListMapMarkerWidget_C");

	return Clss;
}


// DataListMapMarkerWidget_C DataListMapMarkerWidget.Default__DataListMapMarkerWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListMapMarkerWidget_C* UDataListMapMarkerWidget_C::GetDefaultObj()
{
	static class UDataListMapMarkerWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListMapMarkerWidget_C*>(UDataListMapMarkerWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.OnConfirmationDialogClosedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bAccept                                                          (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UDataListMapMarkerWidget_C::OnConfirmationDialogClosedBP(bool* bAccept)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListMapMarkerWidget_C", "OnConfirmationDialogClosedBP");

	Params::UDataListMapMarkerWidget_C_OnConfirmationDialogClosedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bAccept != nullptr)
		*bAccept = Parms.bAccept;

}


// Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.BndEvt__DataListMapMarkerWidget_WaypointRemoveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDataListMapMarkerWidget_C::BndEvt__DataListMapMarkerWidget_WaypointRemoveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListMapMarkerWidget_C", "BndEvt__DataListMapMarkerWidget_WaypointRemoveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.RefreshData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMinimapMark                NewMark                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CanEdit                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

bool UDataListMapMarkerWidget_C::RefreshData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListMapMarkerWidget_C", "RefreshData");

	Params::UDataListMapMarkerWidget_C_RefreshData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.BndEvt__DataListMapMarkerWidget_WaypointEditButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDataListMapMarkerWidget_C::BndEvt__DataListMapMarkerWidget_WaypointEditButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListMapMarkerWidget_C", "BndEvt__DataListMapMarkerWidget_WaypointEditButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.ExecuteUbergraph_DataListMapMarkerWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Len_ReturnValue                                         (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               K2Node_Event_bAccept                                             (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FMinimapMark                K2Node_CustomEvent_NewMark                                       (Edit, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_CustomEvent_CanEdit                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterPlayerController*    CallFunc_PCToSPC_ReturnValue                                     (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FLinearColor UDataListMapMarkerWidget_C::ExecuteUbergraph_DataListMapMarkerWidget(int32* EntryPoint, int32 CallFunc_Len_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, class FString* CallFunc_GetSubstring_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32* CallFunc_GetChildIndex_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListMapMarkerWidget_C", "ExecuteUbergraph_DataListMapMarkerWidget");

	Params::UDataListMapMarkerWidget_C_ExecuteUbergraph_DataListMapMarkerWidget_Params Parms{};

	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_GetSubstring_ReturnValue != nullptr)
		*CallFunc_GetSubstring_ReturnValue = std::move(Parms.CallFunc_GetSubstring_ReturnValue);

	if (CallFunc_GetChildIndex_ReturnValue != nullptr)
		*CallFunc_GetChildIndex_ReturnValue = Parms.CallFunc_GetChildIndex_ReturnValue;

	if (CallFunc_Percent_IntInt_ReturnValue != nullptr)
		*CallFunc_Percent_IntInt_ReturnValue = Parms.CallFunc_Percent_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.EditWaypoint__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMinimapMark                EditMark                                                         (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FMinimapMark UDataListMapMarkerWidget_C::EditWaypoint__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListMapMarkerWidget_C", "EditWaypoint__DelegateSignature");

	Params::UDataListMapMarkerWidget_C_EditWaypoint__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.RefreshWaypoints__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDataListMapMarkerWidget_C::RefreshWaypoints__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListMapMarkerWidget_C", "RefreshWaypoints__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


