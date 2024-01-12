#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUI_NewsCarouselTemplate_Entry_News_Default.ASAUI_NewsCarouselTemplate_Entry_News_Default_C
// (None)

class UClass* UASAUI_NewsCarouselTemplate_Entry_News_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUI_NewsCarouselTemplate_Entry_News_Default_C");

	return Clss;
}


// ASAUI_NewsCarouselTemplate_Entry_News_Default_C ASAUI_NewsCarouselTemplate_Entry_News_Default.Default__ASAUI_NewsCarouselTemplate_Entry_News_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUI_NewsCarouselTemplate_Entry_News_Default_C* UASAUI_NewsCarouselTemplate_Entry_News_Default_C::GetDefaultObj()
{
	static class UASAUI_NewsCarouselTemplate_Entry_News_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUI_NewsCarouselTemplate_Entry_News_Default_C*>(UASAUI_NewsCarouselTemplate_Entry_News_Default_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUI_NewsCarouselTemplate_Entry_News_Default.ASAUI_NewsCarouselTemplate_Entry_News_Default_C.BlueprintInit
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      RawExtraData                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UASAUI_NewsCarouselTemplate_Entry_News_Default_C::BlueprintInit(class FString* RawExtraData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_News_Default_C", "BlueprintInit");

	Params::UASAUI_NewsCarouselTemplate_Entry_News_Default_C_BlueprintInit_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RawExtraData != nullptr)
		*RawExtraData = std::move(Parms.RawExtraData);

}


// Function ASAUI_NewsCarouselTemplate_Entry_News_Default.ASAUI_NewsCarouselTemplate_Entry_News_Default_C.EntryFocusStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInstigatedByAutoRollover                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UASAUI_NewsCarouselTemplate_Entry_News_Default_C::EntryFocusStart(bool* bInstigatedByAutoRollover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_News_Default_C", "EntryFocusStart");

	Params::UASAUI_NewsCarouselTemplate_Entry_News_Default_C_EntryFocusStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bInstigatedByAutoRollover != nullptr)
		*bInstigatedByAutoRollover = Parms.bInstigatedByAutoRollover;

}


// Function ASAUI_NewsCarouselTemplate_Entry_News_Default.ASAUI_NewsCarouselTemplate_Entry_News_Default_C.EntryFocusEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInstigatedByAutoRollover                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UASAUI_NewsCarouselTemplate_Entry_News_Default_C::EntryFocusEnd(bool* bInstigatedByAutoRollover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_News_Default_C", "EntryFocusEnd");

	Params::UASAUI_NewsCarouselTemplate_Entry_News_Default_C_EntryFocusEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bInstigatedByAutoRollover != nullptr)
		*bInstigatedByAutoRollover = Parms.bInstigatedByAutoRollover;

}


// Function ASAUI_NewsCarouselTemplate_Entry_News_Default.ASAUI_NewsCarouselTemplate_Entry_News_Default_C.EntryFocusTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UASAUI_NewsCarouselTemplate_Entry_News_Default_C::EntryFocusTick(float* DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_News_Default_C", "EntryFocusTick");

	Params::UASAUI_NewsCarouselTemplate_Entry_News_Default_C_EntryFocusTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

}


// Function ASAUI_NewsCarouselTemplate_Entry_News_Default.ASAUI_NewsCarouselTemplate_Entry_News_Default_C.ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_News_Default
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_Event_RawExtraData                                        (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (Edit, BlueprintVisible, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsEmpty_ReturnValue_1                                   (Edit, BlueprintVisible, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_Event_bInstigatedByAutoRollover_1                         (Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_Event_bInstigatedByAutoRollover                           (Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_DeltaTime                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (Edit, ConstParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_1                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, Interp)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast            (Edit, ConstParm, ExportObject, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UASAUI_NewsCarouselTemplate_Entry_News_Default_C::ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_News_Default(class FString* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, float* CallFunc_GetScrollOffset_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double* CallFunc_Add_DoubleFloat_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double* CallFunc_Add_DoubleFloat_ReturnValue_1, double* CallFunc_FClamp_ReturnValue, bool* CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float* CallFunc_Add_DoubleFloat_B_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_News_Default_C", "ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_News_Default");

	Params::UASAUI_NewsCarouselTemplate_Entry_News_Default_C_ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_News_Default_Params Parms{};

	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast = CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_GetScrollOffset_ReturnValue != nullptr)
		*CallFunc_GetScrollOffset_ReturnValue = Parms.CallFunc_GetScrollOffset_ReturnValue;

	if (CallFunc_Add_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Add_DoubleFloat_ReturnValue = Parms.CallFunc_Add_DoubleFloat_ReturnValue;

	if (CallFunc_Add_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Add_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Add_DoubleFloat_ReturnValue_1;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_GreaterEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_DoubleDouble_ReturnValue = Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Add_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


