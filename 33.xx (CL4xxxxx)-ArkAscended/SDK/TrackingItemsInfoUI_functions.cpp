#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TrackingItemsInfoUI.TrackingItemsInfoUI_C
// (None)

class UClass* UTrackingItemsInfoUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrackingItemsInfoUI_C");

	return Clss;
}


// TrackingItemsInfoUI_C TrackingItemsInfoUI.Default__TrackingItemsInfoUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTrackingItemsInfoUI_C* UTrackingItemsInfoUI_C::GetDefaultObj()
{
	static class UTrackingItemsInfoUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTrackingItemsInfoUI_C*>(UTrackingItemsInfoUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.GetAllTrackingResourcesWIdgets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTrackResourceItem_Widget_C*>Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// TArray<class UTrackResourceItem_Widget_C*>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)

void UTrackingItemsInfoUI_C::GetAllTrackingResourcesWIdgets(TArray<class UTrackResourceItem_Widget_C*>* Array, TArray<class UTrackResourceItem_Widget_C*>* K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackingItemsInfoUI_C", "GetAllTrackingResourcesWIdgets");

	Params::UTrackingItemsInfoUI_C_GetAllTrackingResourcesWIdgets_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

}


// Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTrackingItemsInfoUI_C::BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackingItemsInfoUI_C", "BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTrackingItemsInfoUI_C::BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackingItemsInfoUI_C", "BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel3_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTrackingItemsInfoUI_C::BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel3_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackingItemsInfoUI_C", "BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel3_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.RemovedFromViewport
// (Event, Public, BlueprintEvent)
// Parameters:

void UTrackingItemsInfoUI_C::RemovedFromViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackingItemsInfoUI_C", "RemovedFromViewport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTrackingItemsInfoUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackingItemsInfoUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.RemoveIndex_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Item                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)

class UClass* UTrackingItemsInfoUI_C::RemoveIndex_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackingItemsInfoUI_C", "RemoveIndex_Event");

	Params::UTrackingItemsInfoUI_C_RemoveIndex_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.UpdateTrackingInfoBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UTrackingItemsInfoUI_C::UpdateTrackingInfoBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackingItemsInfoUI_C", "UpdateTrackingInfoBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.ExecuteUbergraph_TrackingItemsInfoUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// TArray<class UTrackResourceItem_Widget_C*>CallFunc_GetAllTrackingResourcesWIdgets_Array                    (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// class UTrackResourceItem_Widget_C* CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UClass*                      K2Node_CustomEvent_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class UClass*                      CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class UTrackResourceItem_Widget_C*>CallFunc_GetAllTrackingResourcesWIdgets_Array_1                  (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UTrackResourceItem_Widget_C* CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool UTrackingItemsInfoUI_C::ExecuteUbergraph_TrackingItemsInfoUI(int32* EntryPoint, const TArray<class UTrackResourceItem_Widget_C*>& CallFunc_GetAllTrackingResourcesWIdgets_Array, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, class UTrackResourceItem_Widget_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_1, class UClass* K2Node_CustomEvent_Item, int32 Temp_int_Array_Index_Variable_1, class UClass* CallFunc_Array_Get_Item_1, bool* CallFunc_Array_IsValidIndex_ReturnValue, const TArray<class UTrackResourceItem_Widget_C*>& CallFunc_GetAllTrackingResourcesWIdgets_Array_1, class UTrackResourceItem_Widget_C* CallFunc_Array_Get_Item_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackingItemsInfoUI_C", "ExecuteUbergraph_TrackingItemsInfoUI");

	Params::UTrackingItemsInfoUI_C_ExecuteUbergraph_TrackingItemsInfoUI_Params Parms{};

	Parms.CallFunc_GetAllTrackingResourcesWIdgets_Array = CallFunc_GetAllTrackingResourcesWIdgets_Array;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetAllTrackingResourcesWIdgets_Array_1 = CallFunc_GetAllTrackingResourcesWIdgets_Array_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	return Parms.ReturnValue;

}

}


