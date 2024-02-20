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
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_2                          (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference)

float UUpdatingModsToast_C::UpdateProgressBar(float CallFunc_Divide_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "UpdateProgressBar");

	Params::UUpdatingModsToast_C_UpdateProgressBar_Params Parms{};

	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UpdatingModsToast.UpdatingModsToast_C.UpdateMainText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

TArray<struct FFormatArgumentData> UUpdatingModsToast_C::UpdateMainText(bool* Temp_bool_Variable, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText* K2Node_Select_Default, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, class FText* CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "UpdateMainText");

	Params::UUpdatingModsToast_C_UpdateMainText_Params Parms{};

	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	return Parms.ReturnValue;

}


// Function UpdatingModsToast.UpdatingModsToast_C.InitCounter
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewCounterMax                                                    (Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bInWillSetCounter                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

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
// class FString                      NewText                                                          (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               HideProgressBar                                                  (ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

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
// class FText                        NewText                                                          (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               HideProgressBar                                                  (ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

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
// int32                              NewCounter                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// int32                              K2Node_Event_NewCounterMax                                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_bInWillSetCounter                                   (Edit, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_Event_NewText_1                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_Event_HideProgressBar_1                                   (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        K2Node_Event_NewText                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_HideProgressBar                                     (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// int32                              K2Node_Event_NewCounter                                          (Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)

int32 UUpdatingModsToast_C::ExecuteUbergraph_UpdatingModsToast(bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, int32 K2Node_Event_NewCounterMax, bool K2Node_Event_bInWillSetCounter, const class FString& K2Node_Event_NewText_1, bool K2Node_Event_HideProgressBar_1, class FText K2Node_Event_NewText, bool K2Node_Event_HideProgressBar, enum class ESlateVisibility* K2Node_Select_Default, class FText* CallFunc_Conv_StringToText_ReturnValue, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue, enum class ESlateVisibility* Temp_byte_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_3, bool* Temp_bool_Variable_1, int32 K2Node_Event_NewCounter, enum class ESlateVisibility* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "ExecuteUbergraph_UpdatingModsToast");

	Params::UUpdatingModsToast_C_ExecuteUbergraph_UpdatingModsToast_Params Parms{};

	Parms.K2Node_Event_NewCounterMax = K2Node_Event_NewCounterMax;
	Parms.K2Node_Event_bInWillSetCounter = K2Node_Event_bInWillSetCounter;
	Parms.K2Node_Event_NewText_1 = K2Node_Event_NewText_1;
	Parms.K2Node_Event_HideProgressBar_1 = K2Node_Event_HideProgressBar_1;
	Parms.K2Node_Event_NewText = K2Node_Event_NewText;
	Parms.K2Node_Event_HideProgressBar = K2Node_Event_HideProgressBar;
	Parms.K2Node_Event_NewCounter = K2Node_Event_NewCounter;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_CreateDynamicMaterialInstance_ReturnValue != nullptr)
		*CallFunc_CreateDynamicMaterialInstance_ReturnValue = Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	if (Temp_byte_Variable_2 != nullptr)
		*Temp_byte_Variable_2 = Parms.Temp_byte_Variable_2;

	if (Temp_byte_Variable_3 != nullptr)
		*Temp_byte_Variable_3 = Parms.Temp_byte_Variable_3;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	return Parms.ReturnValue;

}

}


