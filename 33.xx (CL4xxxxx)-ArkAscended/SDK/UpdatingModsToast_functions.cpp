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
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_2                          (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UUpdatingModsToast_C::UpdateProgressBar(double CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "UpdateProgressBar");

	Params::UUpdatingModsToast_C_UpdateProgressBar_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UpdatingModsToast.UpdatingModsToast_C.UpdateMainText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

class FText UUpdatingModsToast_C::UpdateMainText(bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, int64* CallFunc_Conv_IntToInt64_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select_Default, int64* CallFunc_Conv_IntToInt64_ReturnValue_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "UpdateMainText");

	Params::UUpdatingModsToast_C_UpdateMainText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_IntToInt64_ReturnValue != nullptr)
		*CallFunc_Conv_IntToInt64_ReturnValue = Parms.CallFunc_Conv_IntToInt64_ReturnValue;

	if (K2Node_MakeStruct_FormatArgumentData != nullptr)
		*K2Node_MakeStruct_FormatArgumentData = std::move(Parms.K2Node_MakeStruct_FormatArgumentData);

	if (CallFunc_Conv_IntToInt64_ReturnValue_1 != nullptr)
		*CallFunc_Conv_IntToInt64_ReturnValue_1 = Parms.CallFunc_Conv_IntToInt64_ReturnValue_1;

	if (K2Node_MakeStruct_FormatArgumentData_1 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_1 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_1);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function UpdatingModsToast.UpdatingModsToast_C.InitCounter
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewCounterMax                                                    (Edit, ConstParm, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bInWillSetCounter                                                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UUpdatingModsToast_C::InitCounter(int32 NewCounterMax, bool bInWillSetCounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "InitCounter");

	Params::UUpdatingModsToast_C_InitCounter_Params Parms{};

	Parms.NewCounterMax = NewCounterMax;
	Parms.bInWillSetCounter = bInWillSetCounter;

	UObject::ProcessEvent(Func, &Parms);

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
// class FString                      NewText                                                          (BlueprintVisible, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               HideProgressBar                                                  (Edit, ConstParm, ExportObject, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class FText                        NewText                                                          (BlueprintVisible, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               HideProgressBar                                                  (Edit, ConstParm, ExportObject, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// int32                              NewCounter                                                       (Edit, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              K2Node_Event_NewCounterMax                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_bInWillSetCounter                                   (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_Event_NewText_1                                           (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_Event_HideProgressBar_1                                   (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        K2Node_Event_NewText                                             (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_HideProgressBar                                     (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              K2Node_Event_NewCounter                                          (ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

int32 UUpdatingModsToast_C::ExecuteUbergraph_UpdatingModsToast(int32* EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "ExecuteUbergraph_UpdatingModsToast");

	Params::UUpdatingModsToast_C_ExecuteUbergraph_UpdatingModsToast_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


