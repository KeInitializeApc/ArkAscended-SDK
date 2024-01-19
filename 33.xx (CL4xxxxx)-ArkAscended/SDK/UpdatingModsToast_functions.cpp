#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UpdatingModsToast.UpdatingModsToast_C
// (None)

class UClass* UUpdatingModsToast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpdatingModsToast_C");

	return Clss;
}


// UpdatingModsToast_C UpdatingModsToast.Default__UpdatingModsToast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUpdatingModsToast_C* UUpdatingModsToast_C::GetDefaultObj()
{
	static class UUpdatingModsToast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpdatingModsToast_C*>(UUpdatingModsToast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UpdatingModsToast.UpdatingModsToast_C.UpdateProgressBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_2                          (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

double UUpdatingModsToast_C::UpdateProgressBar(double* CallFunc_Divide_DoubleFloat_ReturnValue, double* CallFunc_Divide_DoubleFloat_ReturnValue_1, double* CallFunc_SelectFloat_ReturnValue, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "UpdateProgressBar");

	Params::UUpdatingModsToast_C_UpdateProgressBar_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Divide_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Divide_DoubleFloat_ReturnValue = Parms.CallFunc_Divide_DoubleFloat_ReturnValue;

	if (CallFunc_Divide_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Divide_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Divide_DoubleFloat_ReturnValue_1;

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	if (CallFunc_SetScalarParameterValue_Value_ImplicitCast != nullptr)
		*CallFunc_SetScalarParameterValue_Value_ImplicitCast = Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	return Parms.ReturnValue;

}


// Function UpdatingModsToast.UpdatingModsToast_C.UpdateMainText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

class FText UUpdatingModsToast_C::UpdateMainText(bool Temp_bool_Variable, int64* CallFunc_Conv_IntToInt64_ReturnValue, class FText K2Node_Select_Default, int64* CallFunc_Conv_IntToInt64_ReturnValue_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "UpdateMainText");

	Params::UUpdatingModsToast_C_UpdateMainText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_IntToInt64_ReturnValue != nullptr)
		*CallFunc_Conv_IntToInt64_ReturnValue = Parms.CallFunc_Conv_IntToInt64_ReturnValue;

	if (CallFunc_Conv_IntToInt64_ReturnValue_1 != nullptr)
		*CallFunc_Conv_IntToInt64_ReturnValue_1 = Parms.CallFunc_Conv_IntToInt64_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UpdatingModsToast.UpdatingModsToast_C.InitCounter
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewCounterMax                                                    (ExportObject, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bInWillSetCounter                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

bool UUpdatingModsToast_C::InitCounter(int32 NewCounterMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "InitCounter");

	Params::UUpdatingModsToast_C_InitCounter_Params Parms{};

	Parms.NewCounterMax = NewCounterMax;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UpdatingModsToast.UpdatingModsToast_C.incrementCounter
// (Event, Public, BlueprintEvent)
// Parameters:

void UUpdatingModsToast_C::IncrementCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "incrementCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpdatingModsToast.UpdatingModsToast_C.OverrideTextValueWithString
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      NewText                                                          (Edit, ExportObject, BlueprintReadOnly, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               HideProgressBar                                                  (BlueprintReadOnly, GlobalConfig, InstancedReference, SubobjectReference)

void UUpdatingModsToast_C::OverrideTextValueWithString(const class FString& NewText, bool HideProgressBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "OverrideTextValueWithString");

	Params::UUpdatingModsToast_C_OverrideTextValueWithString_Params Parms{};

	Parms.NewText = NewText;
	Parms.HideProgressBar = HideProgressBar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpdatingModsToast.UpdatingModsToast_C.OverrideTextValue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (Edit, ExportObject, BlueprintReadOnly, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               HideProgressBar                                                  (BlueprintReadOnly, GlobalConfig, InstancedReference, SubobjectReference)

void UUpdatingModsToast_C::OverrideTextValue(class FText NewText, bool HideProgressBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "OverrideTextValue");

	Params::UUpdatingModsToast_C_OverrideTextValue_Params Parms{};

	Parms.NewText = NewText;
	Parms.HideProgressBar = HideProgressBar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpdatingModsToast.UpdatingModsToast_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUpdatingModsToast_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpdatingModsToast.UpdatingModsToast_C.SetCounter
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewCounter                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, GlobalConfig, InstancedReference, SubobjectReference)

void UUpdatingModsToast_C::SetCounter(int32 NewCounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "SetCounter");

	Params::UUpdatingModsToast_C_SetCounter_Params Parms{};

	Parms.NewCounter = NewCounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpdatingModsToast.UpdatingModsToast_C.ExecuteUbergraph_UpdatingModsToast
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              K2Node_Event_NewCounterMax                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_bInWillSetCounter                                   (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_Event_NewText_1                                           (Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_Event_HideProgressBar_1                                   (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        K2Node_Event_NewText                                             (Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_HideProgressBar                                     (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_1                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              K2Node_Event_NewCounter                                          (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)

enum class ESlateVisibility UUpdatingModsToast_C::ExecuteUbergraph_UpdatingModsToast(int32 EntryPoint, bool Temp_bool_Variable, int32 K2Node_Event_NewCounterMax, bool K2Node_Event_bInWillSetCounter, const class FString& K2Node_Event_NewText_1, bool K2Node_Event_HideProgressBar_1, class FText K2Node_Event_NewText, bool K2Node_Event_HideProgressBar, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, int32 K2Node_Event_NewCounter, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "ExecuteUbergraph_UpdatingModsToast");

	Params::UUpdatingModsToast_C_ExecuteUbergraph_UpdatingModsToast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_NewCounterMax = K2Node_Event_NewCounterMax;
	Parms.K2Node_Event_bInWillSetCounter = K2Node_Event_bInWillSetCounter;
	Parms.K2Node_Event_NewText_1 = K2Node_Event_NewText_1;
	Parms.K2Node_Event_HideProgressBar_1 = K2Node_Event_HideProgressBar_1;
	Parms.K2Node_Event_NewText = K2Node_Event_NewText;
	Parms.K2Node_Event_HideProgressBar = K2Node_Event_HideProgressBar;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_NewCounter = K2Node_Event_NewCounter;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


