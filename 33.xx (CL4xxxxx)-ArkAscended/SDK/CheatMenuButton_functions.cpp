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
// class UClass*                      Loaded                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class UClass*                      Loaded                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UClass*                      K2Node_CustomEvent_Loaded_1                                      (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// class UClass*                      Temp_class_Variable                                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Dino_Character                  (ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UClass*                      Temp_class_Variable_1                                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetScaledCapsuleRadius_ReturnValue                      (ExportObject, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             Temp_real_Variable                                               (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UClass*                      Temp_class_Variable_2                                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsChecked_ReturnValue_1                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_BooleanXOR_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsChecked_ReturnValue_2                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsChecked_ReturnValue_3                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference, NonTransactional)
// class UClass*                      K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsChecked_ReturnValue_4                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_GetText_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class AShooterCharacter*           CallFunc_GetPlayerCharacter_ReturnValue                          (Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference, Interp)

struct FVector UCheatMenuButton_C::ExecuteUbergraph_CheatMenuButton(class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, double* CallFunc_Multiply_DoubleDouble_ReturnValue, bool Temp_bool_Variable, double* CallFunc_Multiply_DoubleDouble_ReturnValue_1, double Temp_real_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue_2, bool CallFunc_IsChecked_ReturnValue_3, class UClass** K2Node_Select_Default, double* K2Node_Select_Default_1, bool CallFunc_IsChecked_ReturnValue_4, double* CallFunc_Multiply_DoubleDouble_ReturnValue_2, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, class AShooterCharacter* CallFunc_GetPlayerCharacter_ReturnValue, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuButton_C", "ExecuteUbergraph_CheatMenuButton");

	Params::UCheatMenuButton_C_ExecuteUbergraph_CheatMenuButton_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Item = K2Node_ClassDynamicCast_AsPrimal_Item;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_1 = CallFunc_IsChecked_ReturnValue_1;
	Parms.CallFunc_IsChecked_ReturnValue_2 = CallFunc_IsChecked_ReturnValue_2;
	Parms.CallFunc_IsChecked_ReturnValue_3 = CallFunc_IsChecked_ReturnValue_3;
	Parms.CallFunc_IsChecked_ReturnValue_4 = CallFunc_IsChecked_ReturnValue_4;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Multiply_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue;

	if (CallFunc_Multiply_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (CallFunc_Multiply_DoubleDouble_ReturnValue_2 != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue_2 = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetActorForwardVector_ReturnValue != nullptr)
		*CallFunc_GetActorForwardVector_ReturnValue = std::move(Parms.CallFunc_GetActorForwardVector_ReturnValue);

	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);

	if (CallFunc_Multiply_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	if (CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 != nullptr)
		*CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


