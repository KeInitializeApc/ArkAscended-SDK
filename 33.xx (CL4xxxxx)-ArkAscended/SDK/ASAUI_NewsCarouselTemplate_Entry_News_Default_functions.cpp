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
// class FString                      RawExtraData                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               bInstigatedByAutoRollover                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               bInstigatedByAutoRollover                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              DeltaTime                                                        (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

float UASAUI_NewsCarouselTemplate_Entry_News_Default_C::EntryFocusTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_News_Default_C", "EntryFocusTick");

	Params::UASAUI_NewsCarouselTemplate_Entry_News_Default_C_EntryFocusTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUI_NewsCarouselTemplate_Entry_News_Default.ASAUI_NewsCarouselTemplate_Entry_News_Default_C.ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_News_Default
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_Event_RawExtraData                                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsEmpty_ReturnValue_1                                   (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_Event_bInstigatedByAutoRollover_1                         (Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_Event_bInstigatedByAutoRollover                           (Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_DeltaTime                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_1                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (BlueprintReadOnly, Parm, OutParm, ReturnParm, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1                   (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast            (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

float UASAUI_NewsCarouselTemplate_Entry_News_Default_C::ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_News_Default(double* CallFunc_Subtract_DoubleFloat_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess, float* K2Node_Event_DeltaTime, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, double* CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_News_Default_C", "ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_News_Default");

	Params::UASAUI_NewsCarouselTemplate_Entry_News_Default_C_ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_News_Default_Params Parms{};

	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Subtract_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue;

	if (K2Node_SwitchInteger_CmpSuccess != nullptr)
		*K2Node_SwitchInteger_CmpSuccess = Parms.K2Node_SwitchInteger_CmpSuccess;

	if (K2Node_Event_DeltaTime != nullptr)
		*K2Node_Event_DeltaTime = Parms.K2Node_Event_DeltaTime;

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	if (CallFunc_BreakVector2D_X_1 != nullptr)
		*CallFunc_BreakVector2D_X_1 = Parms.CallFunc_BreakVector2D_X_1;

	if (CallFunc_BreakVector2D_Y_1 != nullptr)
		*CallFunc_BreakVector2D_Y_1 = Parms.CallFunc_BreakVector2D_Y_1;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


