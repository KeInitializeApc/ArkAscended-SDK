#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MapSelect_Session.MapSelect_Session_C
// (None)

class UClass* UMapSelect_Session_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapSelect_Session_C");

	return Clss;
}


// MapSelect_Session_C MapSelect_Session.Default__MapSelect_Session_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMapSelect_Session_C* UMapSelect_Session_C::GetDefaultObj()
{
	static class UMapSelect_Session_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapSelect_Session_C*>(UMapSelect_Session_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MapSelect_Session.MapSelect_Session_C.SearchAndCreateModMaps
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UDataListEntryButton_HostSession*>CallFunc_GetModMaps_ReturnValue                                  (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

class UPanelSlot* UMapSelect_Session_C::SearchAndCreateModMaps()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "SearchAndCreateModMaps");

	Params::UMapSelect_Session_C_SearchAndCreateModMaps_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.Select Map Button Clicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_GenericConfirmationDialog*CallFunc_ShowDLCConfirmationDialog_ReturnValue                   (BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoesOwnSelectedDLC_ReturnValue                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsSelected_Selected                                     (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

bool UMapSelect_Session_C::Select_Map_Button_Clicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "Select Map Button Clicked");

	Params::UMapSelect_Session_C_Select_Map_Button_Clicked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.MapButtonSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMapSelect_Session_C::MapButtonSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "MapButtonSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapSelect_Session.MapSelect_Session_C.GetSelectedMapIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsSelected_Selected                                     (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

bool UMapSelect_Session_C::GetSelectedMapIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "GetSelectedMapIndex");

	Params::UMapSelect_Session_C_GetSelectedMapIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.SetSelectedMapIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UMapSelect_Session_C::SetSelectedMapIndex(int32* Index, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "SetSelectedMapIndex");

	Params::UMapSelect_Session_C_SetSelectedMapIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.ScrollToHoveredItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapSelect_Entry_C*          EntryHovered                                                     (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

class UMapSelect_Entry_C* UMapSelect_Session_C::ScrollToHoveredItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "ScrollToHoveredItem");

	Params::UMapSelect_Session_C_ScrollToHoveredItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_PointerEvent_GetCursorDelta_ReturnValue                 (ExportObject, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (Edit, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_PointerEvent_IsTouchEvent_ReturnValue                   (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue                                        (Edit, EditFixedSize, Parm, ReturnParm, SubobjectReference)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_FMin_B_ImplicitCast                                     (Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast            (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

float UMapSelect_Session_C::OnMouseMove(const struct FEventReply& ReturnValue, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, double CallFunc_Multiply_IntFloat_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double* CallFunc_Add_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "OnMouseMove");

	Params::UMapSelect_Session_C_OnMouseMove_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_Add_DoubleDouble_B_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleDouble_B_ImplicitCast = Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (Edit, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

struct FEventReply UMapSelect_Session_C::OnMouseButtonDown(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "OnMouseButtonDown");

	Params::UMapSelect_Session_C_OnMouseButtonDown_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.Set Selected Map Entry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapSelect_Entry_C*          Entry                                                            (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UMapSelect_Session_C::Set_Selected_Map_Entry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "Set Selected Map Entry");

	Params::UMapSelect_Session_C_Set_Selected_Map_Entry_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.GetMapSelectEntries
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMapSelect_Entry_C*>  MapSelectEntries                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  TempMapSelectEntries                                             (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UMapSelect_Entry_C*          K2Node_DynamicCast_AsMap_Select_Entry                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

bool UMapSelect_Session_C::GetMapSelectEntries(const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "GetMapSelectEntries");

	Params::UMapSelect_Session_C_GetMapSelectEntries_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UMapSelect_Session_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "Tick");

	Params::UMapSelect_Session_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.BndEvt__MapSelect_Session_CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMapSelect_Session_C::BndEvt__MapSelect_Session_CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "BndEvt__MapSelect_Session_CancelButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapSelect_Session.MapSelect_Session_C.BndEvt__MapSelect_Session_SelectMapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMapSelect_Session_C::BndEvt__MapSelect_Session_SelectMapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "BndEvt__MapSelect_Session_SelectMapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MapSelect_Session.MapSelect_Session_C.ExecuteUbergraph_MapSelect_Session
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UMapSelect_Session_C::ExecuteUbergraph_MapSelect_Session(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class AGameModeBase* CallFunc_GetGameMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "ExecuteUbergraph_MapSelect_Session");

	Params::UMapSelect_Session_C_ExecuteUbergraph_MapSelect_Session_Params Parms{};

	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	return Parms.ReturnValue;

}

}


