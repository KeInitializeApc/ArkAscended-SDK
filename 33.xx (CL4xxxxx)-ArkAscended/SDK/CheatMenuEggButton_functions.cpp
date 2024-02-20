#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMenuEggButton.CheatMenuEggButton_C
// (None)

class UClass* UCheatMenuEggButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMenuEggButton_C");

	return Clss;
}


// CheatMenuEggButton_C CheatMenuEggButton.Default__CheatMenuEggButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMenuEggButton_C* UCheatMenuEggButton_C::GetDefaultObj()
{
	static class UCheatMenuEggButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMenuEggButton_C*>(UCheatMenuEggButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMenuEggButton.CheatMenuEggButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenuEggButton_C::BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuEggButton_C", "BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenuEggButton.CheatMenuEggButton_C.ExecuteUbergraph_CheatMenuEggButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_GetText_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue_1                 (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)

bool UCheatMenuEggButton_C::ExecuteUbergraph_CheatMenuEggButton(bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, class FText CallFunc_GetText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsChecked_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, TSoftClassPtr<class UPrimalItem>* K2Node_Select_Default, TSoftClassPtr<class UPrimalItem>* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuEggButton_C", "ExecuteUbergraph_CheatMenuEggButton");

	Params::UCheatMenuEggButton_C_ExecuteUbergraph_CheatMenuEggButton_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	return Parms.ReturnValue;

}

}


