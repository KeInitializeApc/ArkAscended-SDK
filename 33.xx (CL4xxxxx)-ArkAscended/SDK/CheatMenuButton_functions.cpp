#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMenuButton.CheatMenuButton_C
// (None)

class UClass* UCheatMenuButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMenuButton_C");

	return Clss;
}


// CheatMenuButton_C CheatMenuButton.Default__CheatMenuButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMenuButton_C* UCheatMenuButton_C::GetDefaultObj()
{
	static class UCheatMenuButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMenuButton_C*>(UCheatMenuButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMenuButton.CheatMenuButton_C.OnLoaded_376A4AD64ABB8961D41479A9CEBAB5A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (Edit, BlueprintVisible, Parm, ZeroConstructor, Config, EditConst, SubobjectReference)

void UCheatMenuButton_C::OnLoaded_376A4AD64ABB8961D41479A9CEBAB5A0(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuButton_C", "OnLoaded_376A4AD64ABB8961D41479A9CEBAB5A0");

	Params::UCheatMenuButton_C_OnLoaded_376A4AD64ABB8961D41479A9CEBAB5A0_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenuButton.CheatMenuButton_C.OnLoaded_E74A95AD4E858FEFB820B09140E2E827
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (Edit, BlueprintVisible, Parm, ZeroConstructor, Config, EditConst, SubobjectReference)

void UCheatMenuButton_C::OnLoaded_E74A95AD4E858FEFB820B09140E2E827(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuButton_C", "OnLoaded_E74A95AD4E858FEFB820B09140E2E827");

	Params::UCheatMenuButton_C_OnLoaded_E74A95AD4E858FEFB820B09140E2E827_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenuButton.CheatMenuButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenuButton_C::BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuButton_C", "BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenuButton.CheatMenuButton_C.ExecuteUbergraph_CheatMenuButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UClass*                      K2Node_CustomEvent_Loaded_1                                      (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UClass*                      Temp_class_Variable                                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Dino_Character                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UClass*                      Temp_class_Variable_1                                            (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_GetScaledCapsuleRadius_ReturnValue                      (Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             Temp_real_Variable                                               (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// class UClass*                      Temp_class_Variable_2                                            (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsChecked_ReturnValue_1                                 (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanXOR_ReturnValue                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsChecked_ReturnValue_2                                 (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsChecked_ReturnValue_3                                 (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UClass*                      K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// double                             K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsChecked_ReturnValue_4                                 (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_GetText_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class AShooterCharacter*           CallFunc_GetPlayerCharacter_ReturnValue                          (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

struct FVector UCheatMenuButton_C::ExecuteUbergraph_CheatMenuButton(class UClass** K2Node_CustomEvent_Loaded_1, class UClass** Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsPrimal_Dino_Character, bool K2Node_ClassDynamicCast_bSuccess, class UClass** K2Node_CustomEvent_Loaded, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class UClass** Temp_class_Variable_1, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool K2Node_ClassDynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, bool* Temp_bool_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double Temp_real_Variable, bool* Temp_bool_Variable_1, class UClass** Temp_class_Variable_2, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_BooleanXOR_ReturnValue, bool CallFunc_IsChecked_ReturnValue_2, bool CallFunc_IsChecked_ReturnValue_3, class UClass** K2Node_Select_Default, double* K2Node_Select_Default_1, bool CallFunc_IsChecked_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, class FText CallFunc_GetText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterCharacter* CallFunc_GetPlayerCharacter_ReturnValue, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuButton_C", "ExecuteUbergraph_CheatMenuButton");

	Params::UCheatMenuButton_C_ExecuteUbergraph_CheatMenuButton_Params Parms{};

	Parms.K2Node_ClassDynamicCast_AsPrimal_Dino_Character = K2Node_ClassDynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Item = K2Node_ClassDynamicCast_AsPrimal_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleRadius_ReturnValue = CallFunc_GetScaledCapsuleRadius_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_1 = CallFunc_IsChecked_ReturnValue_1;
	Parms.CallFunc_BooleanXOR_ReturnValue = CallFunc_BooleanXOR_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_2 = CallFunc_IsChecked_ReturnValue_2;
	Parms.CallFunc_IsChecked_ReturnValue_3 = CallFunc_IsChecked_ReturnValue_3;
	Parms.CallFunc_IsChecked_ReturnValue_4 = CallFunc_IsChecked_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_CustomEvent_Loaded_1 != nullptr)
		*K2Node_CustomEvent_Loaded_1 = Parms.K2Node_CustomEvent_Loaded_1;

	if (Temp_class_Variable != nullptr)
		*Temp_class_Variable = Parms.Temp_class_Variable;

	if (K2Node_CustomEvent_Loaded != nullptr)
		*K2Node_CustomEvent_Loaded = Parms.K2Node_CustomEvent_Loaded;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (Temp_class_Variable_1 != nullptr)
		*Temp_class_Variable_1 = Parms.Temp_class_Variable_1;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (Temp_class_Variable_2 != nullptr)
		*Temp_class_Variable_2 = Parms.Temp_class_Variable_2;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_GetActorForwardVector_ReturnValue != nullptr)
		*CallFunc_GetActorForwardVector_ReturnValue = std::move(Parms.CallFunc_GetActorForwardVector_ReturnValue);

	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);

	return Parms.ReturnValue;

}

}


