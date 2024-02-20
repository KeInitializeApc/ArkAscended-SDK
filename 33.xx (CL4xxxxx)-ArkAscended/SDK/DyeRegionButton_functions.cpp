#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DyeRegionButton.DyeRegionButton_C
// (None)

class UClass* UDyeRegionButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DyeRegionButton_C");

	return Clss;
}


// DyeRegionButton_C DyeRegionButton.Default__DyeRegionButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDyeRegionButton_C* UDyeRegionButton_C::GetDefaultObj()
{
	static class UDyeRegionButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDyeRegionButton_C*>(UDyeRegionButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DyeRegionButton.DyeRegionButton_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

void UDyeRegionButton_C::GetVisibility_0(enum class ESlateVisibility ReturnValue, bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* CallFunc_GetIsEnabled_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DyeRegionButton_C", "GetVisibility_0");

	Params::UDyeRegionButton_C_GetVisibility_0_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

}


// Function DyeRegionButton.DyeRegionButton_C.BndEvt__DyeRegionButton_Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDyeRegionButton_C::BndEvt__DyeRegionButton_Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DyeRegionButton_C", "BndEvt__DyeRegionButton_Button_25_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DyeRegionButton.DyeRegionButton_C.ExecuteUbergraph_DyeRegionButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

int32 UDyeRegionButton_C::ExecuteUbergraph_DyeRegionButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DyeRegionButton_C", "ExecuteUbergraph_DyeRegionButton");

	Params::UDyeRegionButton_C_ExecuteUbergraph_DyeRegionButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


