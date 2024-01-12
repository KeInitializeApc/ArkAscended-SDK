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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_GetText_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
// TSoftClassPtr<class UPrimalItem>   K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue_1                 (ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)

class AShooterPlayerController* UCheatMenuEggButton_C::ExecuteUbergraph_CheatMenuEggButton(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsChecked_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, TSoftClassPtr<class UPrimalItem>* K2Node_Select_Default, bool CallFunc_IsValidSoftClassReference_ReturnValue, TSoftClassPtr<class UPrimalItem>* K2Node_Select_Default_1, bool CallFunc_IsValidSoftClassReference_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuEggButton_C", "ExecuteUbergraph_CheatMenuEggButton");

	Params::UCheatMenuEggButton_C_ExecuteUbergraph_CheatMenuEggButton_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue_1 = CallFunc_IsValidSoftClassReference_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	return Parms.ReturnValue;

}

}


