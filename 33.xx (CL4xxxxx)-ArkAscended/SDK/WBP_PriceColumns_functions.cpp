#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PriceColumns.WBP_PriceColumns_C
// (None)

class UClass* UWBP_PriceColumns_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PriceColumns_C");

	return Clss;
}


// WBP_PriceColumns_C WBP_PriceColumns.Default__WBP_PriceColumns_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PriceColumns_C* UWBP_PriceColumns_C::GetDefaultObj()
{
	static class UWBP_PriceColumns_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PriceColumns_C*>(UWBP_PriceColumns_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PriceColumns.WBP_PriceColumns_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PriceColumns_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PriceColumns_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PriceColumns.WBP_PriceColumns_C.ExecuteUbergraph_WBP_PriceColumns
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class FText                        CallFunc_Format_ReturnValue_1                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

TArray<struct FFormatArgumentData> UWBP_PriceColumns_C::ExecuteUbergraph_WBP_PriceColumns(int64 CallFunc_Conv_IntToInt64_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, class FText* CallFunc_Format_ReturnValue, class FText* CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PriceColumns_C", "ExecuteUbergraph_WBP_PriceColumns");

	Params::UWBP_PriceColumns_C_ExecuteUbergraph_WBP_PriceColumns_Params Parms{};

	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	if (CallFunc_Format_ReturnValue_1 != nullptr)
		*CallFunc_Format_ReturnValue_1 = Parms.CallFunc_Format_ReturnValue_1;

	return Parms.ReturnValue;

}

}


