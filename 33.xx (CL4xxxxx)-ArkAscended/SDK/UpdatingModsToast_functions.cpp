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
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_2                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (Edit, BlueprintVisible, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

double UUpdatingModsToast_C::UpdateProgressBar(float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "UpdateProgressBar");

	Params::UUpdatingModsToast_C_UpdateProgressBar_Params Parms{};

	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function UpdatingModsToast.UpdatingModsToast_C.UpdateMainText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

TArray<struct FFormatArgumentData> UUpdatingModsToast_C::UpdateMainText(bool Temp_bool_Variable, class FText* K2Node_Select_Default, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "UpdateMainText");

	Params::UUpdatingModsToast_C_UpdateMainText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function UpdatingModsToast.UpdatingModsToast_C.InitCounter
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewCounterMax                                                    (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bInWillSetCounter                                                (ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

bool UUpdatingModsToast_C::InitCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "InitCounter");

	Params::UUpdatingModsToast_C_InitCounter_Params Parms{};


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
// class FString                      NewText                                                          (Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               HideProgressBar                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

bool UUpdatingModsToast_C::OverrideTextValueWithString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "OverrideTextValueWithString");

	Params::UUpdatingModsToast_C_OverrideTextValueWithString_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UpdatingModsToast.UpdatingModsToast_C.OverrideTextValue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               HideProgressBar                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

bool UUpdatingModsToast_C::OverrideTextValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "OverrideTextValue");

	Params::UUpdatingModsToast_C_OverrideTextValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// int32                              NewCounter                                                       (ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

int32 UUpdatingModsToast_C::SetCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "SetCounter");

	Params::UUpdatingModsToast_C_SetCounter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UpdatingModsToast.UpdatingModsToast_C.ExecuteUbergraph_UpdatingModsToast
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              K2Node_Event_NewCounterMax                                       (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_bInWillSetCounter                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_Event_NewText_1                                           (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_Event_HideProgressBar_1                                   (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        K2Node_Event_NewText                                             (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_HideProgressBar                                     (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (EditFixedSize, ReturnParm, EditConst, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              K2Node_Event_NewCounter                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)

int32 UUpdatingModsToast_C::ExecuteUbergraph_UpdatingModsToast(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility* K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "ExecuteUbergraph_UpdatingModsToast");

	Params::UUpdatingModsToast_C_ExecuteUbergraph_UpdatingModsToast_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	return Parms.ReturnValue;

}

}


