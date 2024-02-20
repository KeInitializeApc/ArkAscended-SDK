#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMenuCheatButton.CheatMenuCheatButton_C
// (None)

class UClass* UCheatMenuCheatButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMenuCheatButton_C");

	return Clss;
}


// CheatMenuCheatButton_C CheatMenuCheatButton.Default__CheatMenuCheatButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMenuCheatButton_C* UCheatMenuCheatButton_C::GetDefaultObj()
{
	static class UCheatMenuCheatButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMenuCheatButton_C*>(UCheatMenuCheatButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMenuCheatButton.CheatMenuCheatButton_C.CloseConfirmation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void UCheatMenuCheatButton_C::CloseConfirmation(class FText* CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuCheatButton_C", "CloseConfirmation");

	Params::UCheatMenuCheatButton_C_CloseConfirmation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

}


// Function CheatMenuCheatButton.CheatMenuCheatButton_C.ShowConfirmation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

TArray<struct FFormatArgumentData> UCheatMenuCheatButton_C::ShowConfirmation(class FText* CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuCheatButton_C", "ShowConfirmation");

	Params::UCheatMenuCheatButton_C_ShowConfirmation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenuCheatButton.CheatMenuCheatButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenuCheatButton_C::BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuCheatButton_C", "BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenuCheatButton.CheatMenuCheatButton_C.ExecuteUbergraph_CheatMenuCheatButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class FText                        CallFunc_GetText_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

class FString UCheatMenuCheatButton_C::ExecuteUbergraph_CheatMenuCheatButton(bool* Temp_bool_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_GetText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuCheatButton_C", "ExecuteUbergraph_CheatMenuCheatButton");

	Params::UCheatMenuCheatButton_C_ExecuteUbergraph_CheatMenuCheatButton_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	return Parms.ReturnValue;

}

}


