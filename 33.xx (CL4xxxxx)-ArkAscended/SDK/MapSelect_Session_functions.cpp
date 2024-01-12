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
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class UDataListEntryButton_HostSession*>CallFunc_GetModMaps_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

class UPanelSlot* UMapSelect_Session_C::SearchAndCreateModMaps(int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UDataListEntryButton_HostSession*>* CallFunc_GetModMaps_ReturnValue, int32* CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "SearchAndCreateModMaps");

	Params::UMapSelect_Session_C_SearchAndCreateModMaps_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetModMaps_ReturnValue != nullptr)
		*CallFunc_GetModMaps_ReturnValue = std::move(Parms.CallFunc_GetModMaps_ReturnValue);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.Select Map Button Clicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUI_GenericConfirmationDialog*CallFunc_ShowDLCConfirmationDialog_ReturnValue                   (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_DoesOwnSelectedDLC_ReturnValue                          (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsSelected_Selected                                     (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UMapSelect_Session_C::Select_Map_Button_Clicked(int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMapSelect_Entry_C*>* CallFunc_GetMapSelectEntries_MapSelectEntries, class UMapSelect_Entry_C** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool* CallFunc_DoesOwnSelectedDLC_ReturnValue, bool* CallFunc_IsSelected_Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "Select Map Button Clicked");

	Params::UMapSelect_Session_C_Select_Map_Button_Clicked_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetMapSelectEntries_MapSelectEntries != nullptr)
		*CallFunc_GetMapSelectEntries_MapSelectEntries = std::move(Parms.CallFunc_GetMapSelectEntries_MapSelectEntries);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_DoesOwnSelectedDLC_ReturnValue != nullptr)
		*CallFunc_DoesOwnSelectedDLC_ReturnValue = Parms.CallFunc_DoesOwnSelectedDLC_ReturnValue;

	if (CallFunc_IsSelected_Selected != nullptr)
		*CallFunc_IsSelected_Selected = Parms.CallFunc_IsSelected_Selected;

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
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsSelected_Selected                                     (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UMapSelect_Session_C::GetSelectedMapIndex(int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMapSelect_Entry_C*>* CallFunc_GetMapSelectEntries_MapSelectEntries, int32* CallFunc_Array_Length_ReturnValue, class UMapSelect_Entry_C** CallFunc_Array_Get_Item, bool* CallFunc_IsSelected_Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "GetSelectedMapIndex");

	Params::UMapSelect_Session_C_GetSelectedMapIndex_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetMapSelectEntries_MapSelectEntries != nullptr)
		*CallFunc_GetMapSelectEntries_MapSelectEntries = std::move(Parms.CallFunc_GetMapSelectEntries_MapSelectEntries);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_IsSelected_Selected != nullptr)
		*CallFunc_IsSelected_Selected = Parms.CallFunc_IsSelected_Selected;

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.SetSelectedMapIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

bool UMapSelect_Session_C::SetSelectedMapIndex(int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMapSelect_Entry_C*>* CallFunc_GetMapSelectEntries_MapSelectEntries, int32* CallFunc_Array_Length_ReturnValue, class UMapSelect_Entry_C** CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "SetSelectedMapIndex");

	Params::UMapSelect_Session_C_SetSelectedMapIndex_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetMapSelectEntries_MapSelectEntries != nullptr)
		*CallFunc_GetMapSelectEntries_MapSelectEntries = std::move(Parms.CallFunc_GetMapSelectEntries_MapSelectEntries);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.ScrollToHoveredItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapSelect_Entry_C*          EntryHovered                                                     (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_PointerEvent_GetCursorDelta_ReturnValue                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_PointerEvent_IsTouchEvent_ReturnValue                   (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (Edit, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue                                        (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_FMin_B_ImplicitCast                                     (EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (Edit, ConstParm, Parm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast            (Edit, ConstParm, ExportObject, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UMapSelect_Session_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, struct FVector2D* CallFunc_PointerEvent_GetCursorDelta_ReturnValue, float* CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float* CallFunc_GetScrollOffset_ReturnValue, bool* CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool* CallFunc_PointerEvent_IsTouchEvent_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, struct FEventReply* CallFunc_Handled_ReturnValue, double CallFunc_FMax_ReturnValue, double* CallFunc_FMin_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "OnMouseMove");

	Params::UMapSelect_Session_C_OnMouseMove_Params Parms{};

	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (MouseEvent != nullptr)
		*MouseEvent = std::move(Parms.MouseEvent);

	if (CallFunc_PointerEvent_GetCursorDelta_ReturnValue != nullptr)
		*CallFunc_PointerEvent_GetCursorDelta_ReturnValue = std::move(Parms.CallFunc_PointerEvent_GetCursorDelta_ReturnValue);

	if (CallFunc_GetScrollOffsetOfEnd_ReturnValue != nullptr)
		*CallFunc_GetScrollOffsetOfEnd_ReturnValue = Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue;

	if (CallFunc_GetScrollOffset_ReturnValue != nullptr)
		*CallFunc_GetScrollOffset_ReturnValue = Parms.CallFunc_GetScrollOffset_ReturnValue;

	if (CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue != nullptr)
		*CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;

	if (CallFunc_PointerEvent_IsTouchEvent_ReturnValue != nullptr)
		*CallFunc_PointerEvent_IsTouchEvent_ReturnValue = Parms.CallFunc_PointerEvent_IsTouchEvent_ReturnValue;

	if (CallFunc_Handled_ReturnValue != nullptr)
		*CallFunc_Handled_ReturnValue = std::move(Parms.CallFunc_Handled_ReturnValue);

	if (CallFunc_FMin_B_ImplicitCast != nullptr)
		*CallFunc_FMin_B_ImplicitCast = Parms.CallFunc_FMin_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (Edit, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

struct FEventReply UMapSelect_Session_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, bool* CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, struct FEventReply* CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "OnMouseButtonDown");

	Params::UMapSelect_Session_C_OnMouseButtonDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (MouseEvent != nullptr)
		*MouseEvent = std::move(Parms.MouseEvent);

	if (CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue != nullptr)
		*CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;

	if (CallFunc_Handled_ReturnValue != nullptr)
		*CallFunc_Handled_ReturnValue = std::move(Parms.CallFunc_Handled_ReturnValue);

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.Set Selected Map Entry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapSelect_Entry_C*          Entry                                                            (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  CallFunc_GetMapSelectEntries_MapSelectEntries                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMapSelect_Entry_C*          CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

bool UMapSelect_Session_C::Set_Selected_Map_Entry(class UMapSelect_Entry_C* Entry, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMapSelect_Entry_C*>* CallFunc_GetMapSelectEntries_MapSelectEntries, class UMapSelect_Entry_C** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "Set Selected Map Entry");

	Params::UMapSelect_Session_C_Set_Selected_Map_Entry_Params Parms{};

	Parms.Entry = Entry;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetMapSelectEntries_MapSelectEntries != nullptr)
		*CallFunc_GetMapSelectEntries_MapSelectEntries = std::move(Parms.CallFunc_GetMapSelectEntries_MapSelectEntries);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.GetMapSelectEntries
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMapSelect_Entry_C*>  MapSelectEntries                                                 (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UMapSelect_Entry_C*>  TempMapSelectEntries                                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UMapSelect_Entry_C*          K2Node_DynamicCast_AsMap_Select_Entry                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UMapSelect_Entry_C* UMapSelect_Session_C::GetMapSelectEntries(int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UWidget** CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "GetMapSelectEntries");

	Params::UMapSelect_Session_C_GetMapSelectEntries_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function MapSelect_Session.MapSelect_Session_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float UMapSelect_Session_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "Tick");

	Params::UMapSelect_Session_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class AShooterGame_Menu* UMapSelect_Session_C::ExecuteUbergraph_MapSelect_Session(struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapSelect_Session_C", "ExecuteUbergraph_MapSelect_Session");

	Params::UMapSelect_Session_C_ExecuteUbergraph_MapSelect_Session_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_MyGeometry != nullptr)
		*K2Node_Event_MyGeometry = std::move(Parms.K2Node_Event_MyGeometry);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


