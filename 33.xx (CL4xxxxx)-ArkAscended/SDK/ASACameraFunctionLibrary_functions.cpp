#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ASACameraFunctionLibrary.ASACameraFunctionLibrary_C
// (None)

class UClass* UASACameraFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASACameraFunctionLibrary_C");

	return Clss;
}


// ASACameraFunctionLibrary_C ASACameraFunctionLibrary.Default__ASACameraFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASACameraFunctionLibrary_C* UASACameraFunctionLibrary_C::GetDefaultObj()
{
	static class UASACameraFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASACameraFunctionLibrary_C*>(UASACameraFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FVector                     CurrentPivotLocation                                             (BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     DesiredPivotLocation                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)

void UASACameraFunctionLibrary_C::FinalOverridePivotLocation(class APrimalCharacter* CameraOwnerCharacter, struct FVector* CurrentPivotLocation, struct FVector* DesiredPivotLocation, class UObject** __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "FinalOverridePivotLocation");

	Params::UASACameraFunctionLibrary_C_FinalOverridePivotLocation_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentPivotLocation != nullptr)
		*CurrentPivotLocation = std::move(Parms.CurrentPivotLocation);

	if (DesiredPivotLocation != nullptr)
		*DesiredPivotLocation = std::move(Parms.DesiredPivotLocation);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyAnyPitchBasedModifier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// bool                               bShouldApplyAnyModifier                                          (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsTargeting_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

bool UASACameraFunctionLibrary_C::ShouldApplyAnyPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, class UObject** __WorldContext, bool* CallFunc_IsTargeting_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ShouldApplyAnyPitchBasedModifier");

	Params::UASACameraFunctionLibrary_C_ShouldApplyAnyPitchBasedModifier_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CallFunc_IsTargeting_ReturnValue != nullptr)
		*CallFunc_IsTargeting_ReturnValue = Parms.CallFunc_IsTargeting_ReturnValue;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLengthInterp
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   ArmLengthInterpParams                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// double                             PitchModifierAlpha                                               (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// int32                              FoundEntryIndex                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier      (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp               (ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha                 (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1    (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1             (ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1               (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue_1                                      (EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Lerp_ReturnValue_2                                      (EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FPrimalCameraInterpParams   K2Node_MakeStruct_PrimalCameraInterpParams                       (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Lerp_A_ImplicitCast_2                                   (ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_Lerp_B_ImplicitCast_2                                   (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              K2Node_MakeStruct_TargetVelocity_ImplicitCast                    (Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_SpringStiffness_ImplicitCast                   (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_CriticalDamping_ImplicitCast                   (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

double UASACameraFunctionLibrary_C::ApplyPitchBasedModifierToArmLengthInterp(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, class UObject** __WorldContext, double PitchModifierAlpha, int32* FoundEntryIndex, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, double* CallFunc_Lerp_ReturnValue, double* CallFunc_Lerp_ReturnValue_1, double* CallFunc_Lerp_ReturnValue_2, struct FPrimalCameraInterpParams* K2Node_MakeStruct_PrimalCameraInterpParams, double CallFunc_SelectFloat_B_ImplicitCast, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* K2Node_MakeStruct_TargetVelocity_ImplicitCast, float* K2Node_MakeStruct_SpringStiffness_ImplicitCast, float* K2Node_MakeStruct_CriticalDamping_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyPitchBasedModifierToArmLengthInterp");

	Params::UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLengthInterp_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.PitchModifierAlpha = PitchModifierAlpha;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (FoundEntryIndex != nullptr)
		*FoundEntryIndex = Parms.FoundEntryIndex;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1;

	if (CallFunc_Lerp_ReturnValue != nullptr)
		*CallFunc_Lerp_ReturnValue = Parms.CallFunc_Lerp_ReturnValue;

	if (CallFunc_Lerp_ReturnValue_1 != nullptr)
		*CallFunc_Lerp_ReturnValue_1 = Parms.CallFunc_Lerp_ReturnValue_1;

	if (CallFunc_Lerp_ReturnValue_2 != nullptr)
		*CallFunc_Lerp_ReturnValue_2 = Parms.CallFunc_Lerp_ReturnValue_2;

	if (K2Node_MakeStruct_PrimalCameraInterpParams != nullptr)
		*K2Node_MakeStruct_PrimalCameraInterpParams = std::move(Parms.K2Node_MakeStruct_PrimalCameraInterpParams);

	if (K2Node_MakeStruct_TargetVelocity_ImplicitCast != nullptr)
		*K2Node_MakeStruct_TargetVelocity_ImplicitCast = Parms.K2Node_MakeStruct_TargetVelocity_ImplicitCast;

	if (K2Node_MakeStruct_SpringStiffness_ImplicitCast != nullptr)
		*K2Node_MakeStruct_SpringStiffness_ImplicitCast = Parms.K2Node_MakeStruct_SpringStiffness_ImplicitCast;

	if (K2Node_MakeStruct_CriticalDamping_ImplicitCast != nullptr)
		*K2Node_MakeStruct_CriticalDamping_ImplicitCast = Parms.K2Node_MakeStruct_CriticalDamping_ImplicitCast;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.DebugPitchBasedModifier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierPitchBasedModifier                                               (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// int32                              EntryIndex                                                       (ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ModifierAlpha                                                    (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UASACameraFunctionLibrary_C::DebugPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraPitchBasedModifier& PitchBasedModifier, int32 EntryIndex, double ModifierAlpha, class UObject** __WorldContext, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "DebugPitchBasedModifier");

	Params::UASACameraFunctionLibrary_C_DebugPitchBasedModifier_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.PitchBasedModifier = PitchBasedModifier;
	Parms.EntryIndex = EntryIndex;
	Parms.ModifierAlpha = ModifierAlpha;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotOffset
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     DesiredPivotOffset                                               (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)

TArray<struct FPrimalCameraPitchBasedModifier> UASACameraFunctionLibrary_C::FinalOverridePivotOffset(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, struct FVector* DesiredPivotOffset, class UObject** __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "FinalOverridePivotOffset");

	Params::UASACameraFunctionLibrary_C_FinalOverridePivotOffset_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;

	UObject::ProcessEvent(Func, &Parms);

	if (DesiredPivotOffset != nullptr)
		*DesiredPivotOffset = std::move(Parms.DesiredPivotOffset);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToPivotOffset
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     DesiredPivotOffset                                               (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// double                             PitchModifierAlpha                                               (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// int32                              FoundEntryIndex                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetTPVCameraOffset_ReturnValue                          (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier      (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp               (ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha                 (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1    (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1             (ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1               (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, Interp)
// struct FVector                     CallFunc_SelectVector_ReturnValue_1                              (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ConstParm, ExportObject, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_VLerp_Alpha_ImplicitCast                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float UASACameraFunctionLibrary_C::ApplyPitchBasedModifierToPivotOffset(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, struct FVector* DesiredPivotOffset, class UObject** __WorldContext, double PitchModifierAlpha, int32* FoundEntryIndex, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue, double CallFunc_SelectFloat_B_ImplicitCast, float CallFunc_Divide_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyPitchBasedModifierToPivotOffset");

	Params::UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToPivotOffset_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.PitchModifierAlpha = PitchModifierAlpha;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (DesiredPivotOffset != nullptr)
		*DesiredPivotOffset = std::move(Parms.DesiredPivotOffset);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (FoundEntryIndex != nullptr)
		*FoundEntryIndex = Parms.FoundEntryIndex;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLength
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CurrentArmLength                                                 (BlueprintReadOnly, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             DesiredArmLength                                                 (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// double                             PitchModifierAlpha                                               (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// int32                              FoundEntryIndex                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier      (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp               (ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha                 (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1    (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1             (ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1               (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// double                             K2Node_VariableGet_DesiredArmLength_ImplicitCast                 (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              K2Node_VariableSetRef_Target_ImplicitCast                        (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)

double UASACameraFunctionLibrary_C::ApplyPitchBasedModifierToArmLength(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, double* CurrentArmLength, double* DesiredArmLength, class UObject** __WorldContext, double PitchModifierAlpha, int32* FoundEntryIndex, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double* K2Node_VariableGet_DesiredArmLength_ImplicitCast, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, double* CallFunc_Lerp_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, float K2Node_VariableSetRef_Target_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, float CallFunc_Divide_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyPitchBasedModifierToArmLength");

	Params::UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLength_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.PitchModifierAlpha = PitchModifierAlpha;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSetRef_Target_ImplicitCast = K2Node_VariableSetRef_Target_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentArmLength != nullptr)
		*CurrentArmLength = Parms.CurrentArmLength;

	if (DesiredArmLength != nullptr)
		*DesiredArmLength = Parms.DesiredArmLength;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (FoundEntryIndex != nullptr)
		*FoundEntryIndex = Parms.FoundEntryIndex;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_VariableGet_DesiredArmLength_ImplicitCast != nullptr)
		*K2Node_VariableGet_DesiredArmLength_ImplicitCast = Parms.K2Node_VariableGet_DesiredArmLength_ImplicitCast;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1;

	if (CallFunc_Lerp_ReturnValue != nullptr)
		*CallFunc_Lerp_ReturnValue = Parms.CallFunc_Lerp_ReturnValue;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyPitchBasedModifier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierPitchBasedModifier                                               (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// bool                               bShouldApplyModifier                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bShouldLerp                                                      (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             LerpAlpha                                                        (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_FMax_ReturnValue                                        (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue_1                                      (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_FMin_ReturnValue                                        (Edit, EditFixedSize, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue_1                                      (Edit, EditFixedSize, Parm, ReturnParm, SubobjectReference, Interp)
// struct FRotator                    CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue         (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue_1                        (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_InRange_FloatFloat_Value_ImplicitCast                   (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_InRange_FloatFloat_Value_ImplicitCast_1                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

double UASACameraFunctionLibrary_C::ShouldApplyPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraPitchBasedModifier& PitchBasedModifier, class UObject** __WorldContext, double LerpAlpha, bool* CallFunc_IsValid_ReturnValue, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, double CallFunc_FMax_ReturnValue, double CallFunc_FMax_ReturnValue_1, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, double* CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ShouldApplyPitchBasedModifier");

	Params::UASACameraFunctionLibrary_C_ShouldApplyPitchBasedModifier_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.PitchBasedModifier = PitchBasedModifier;
	Parms.LerpAlpha = LerpAlpha;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	if (CallFunc_BreakVector2D_X_1 != nullptr)
		*CallFunc_BreakVector2D_X_1 = Parms.CallFunc_BreakVector2D_X_1;

	if (CallFunc_BreakVector2D_Y_1 != nullptr)
		*CallFunc_BreakVector2D_Y_1 = Parms.CallFunc_BreakVector2D_Y_1;

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_MapRangeClamped_ReturnValue != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue = Parms.CallFunc_MapRangeClamped_ReturnValue;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToInterpParams
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   InterpParamsX                                                    (ConstParm, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   InterpParamsY                                                    (ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   InterpParamsZ                                                    (ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// double                             PitchModifierAlpha                                               (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bOverrideInterpParams                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   FinalInterpParams                                                (Edit, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   InterpParamsToModify                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// int32                              FoundEntryIndex                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier      (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp               (ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha                 (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue_1                                      (EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Lerp_ReturnValue_2                                      (EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FPrimalCameraInterpParams   K2Node_MakeStruct_PrimalCameraInterpParams                       (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Lerp_A_ImplicitCast_2                                   (ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_Lerp_B_ImplicitCast_2                                   (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              K2Node_MakeStruct_SpringStiffness_ImplicitCast                   (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_TargetVelocity_ImplicitCast                    (Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_CriticalDamping_ImplicitCast                   (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

double UASACameraFunctionLibrary_C::ApplyPitchBasedModifierToInterpParams(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, struct FPrimalCameraInterpParams* InterpParamsX, struct FPrimalCameraInterpParams* InterpParamsY, struct FPrimalCameraInterpParams* InterpParamsZ, class UObject** __WorldContext, double PitchModifierAlpha, struct FPrimalCameraInterpParams* InterpParamsToModify, int32* FoundEntryIndex, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, double* CallFunc_Lerp_ReturnValue, double* CallFunc_Lerp_ReturnValue_1, double* CallFunc_Lerp_ReturnValue_2, struct FPrimalCameraInterpParams* K2Node_MakeStruct_PrimalCameraInterpParams, double CallFunc_SelectFloat_B_ImplicitCast, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* K2Node_MakeStruct_SpringStiffness_ImplicitCast, float* K2Node_MakeStruct_TargetVelocity_ImplicitCast, float* K2Node_MakeStruct_CriticalDamping_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyPitchBasedModifierToInterpParams");

	Params::UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToInterpParams_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.PitchModifierAlpha = PitchModifierAlpha;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InterpParamsX != nullptr)
		*InterpParamsX = std::move(Parms.InterpParamsX);

	if (InterpParamsY != nullptr)
		*InterpParamsY = std::move(Parms.InterpParamsY);

	if (InterpParamsZ != nullptr)
		*InterpParamsZ = std::move(Parms.InterpParamsZ);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (InterpParamsToModify != nullptr)
		*InterpParamsToModify = std::move(Parms.InterpParamsToModify);

	if (FoundEntryIndex != nullptr)
		*FoundEntryIndex = Parms.FoundEntryIndex;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1;

	if (CallFunc_Lerp_ReturnValue != nullptr)
		*CallFunc_Lerp_ReturnValue = Parms.CallFunc_Lerp_ReturnValue;

	if (CallFunc_Lerp_ReturnValue_1 != nullptr)
		*CallFunc_Lerp_ReturnValue_1 = Parms.CallFunc_Lerp_ReturnValue_1;

	if (CallFunc_Lerp_ReturnValue_2 != nullptr)
		*CallFunc_Lerp_ReturnValue_2 = Parms.CallFunc_Lerp_ReturnValue_2;

	if (K2Node_MakeStruct_PrimalCameraInterpParams != nullptr)
		*K2Node_MakeStruct_PrimalCameraInterpParams = std::move(Parms.K2Node_MakeStruct_PrimalCameraInterpParams);

	if (K2Node_MakeStruct_SpringStiffness_ImplicitCast != nullptr)
		*K2Node_MakeStruct_SpringStiffness_ImplicitCast = Parms.K2Node_MakeStruct_SpringStiffness_ImplicitCast;

	if (K2Node_MakeStruct_TargetVelocity_ImplicitCast != nullptr)
		*K2Node_MakeStruct_TargetVelocity_ImplicitCast = Parms.K2Node_MakeStruct_TargetVelocity_ImplicitCast;

	if (K2Node_MakeStruct_CriticalDamping_ImplicitCast != nullptr)
		*K2Node_MakeStruct_CriticalDamping_ImplicitCast = Parms.K2Node_MakeStruct_CriticalDamping_ImplicitCast;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLengthInterpParams
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParams                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)

struct FPrimalCameraInterpParams UASACameraFunctionLibrary_C::FinalOverrideCameraArmLengthInterpParams(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, class UObject** __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "FinalOverrideCameraArmLengthInterpParams");

	Params::UASACameraFunctionLibrary_C_FinalOverrideCameraArmLengthInterpParams_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLength
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CharacterToKeepOnScreen                                          (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CurrentCameraArmLength                                           (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             DesiredCameraArmLength                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// double                             ScreenAreaToUse                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bStopLoop                                                        (Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               VelocityIsNearlyZero                                             (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FVector                     WorldLocationToProject                                           (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CharacterScreenAreaY                                             (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CharacterScreenAreaX                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

bool UASACameraFunctionLibrary_C::FinalOverrideCameraArmLength(class APrimalCharacter* CharacterToKeepOnScreen, const struct FPrimalCameraParams& CameraParams, class APrimalCharacter* CameraOwnerCharacter, class UObject** __WorldContext, double ScreenAreaToUse, bool VelocityIsNearlyZero, struct FVector* WorldLocationToProject, double CharacterScreenAreaY, double CharacterScreenAreaX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "FinalOverrideCameraArmLength");

	Params::UASACameraFunctionLibrary_C_FinalOverrideCameraArmLength_Params Parms{};

	Parms.CharacterToKeepOnScreen = CharacterToKeepOnScreen;
	Parms.CameraParams = CameraParams;
	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.ScreenAreaToUse = ScreenAreaToUse;
	Parms.VelocityIsNearlyZero = VelocityIsNearlyZero;
	Parms.CharacterScreenAreaY = CharacterScreenAreaY;
	Parms.CharacterScreenAreaX = CharacterScreenAreaX;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (WorldLocationToProject != nullptr)
		*WorldLocationToProject = std::move(Parms.WorldLocationToProject);

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.Final Override Pivot Interp Params
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FPrimalCameraPivotZInterpOverridesPivotZInterpOverrides                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   LastPivotInterpParamsX                                           (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   LastPivotInterpParamsY                                           (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   LastPivotInterpParamsZ                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   PivotInterpParamsX                                               (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   PivotInterpParamsY                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   PivotInterpParamsZ                                               (Edit, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// double                             PrintModifierAlpha                                               (Edit, ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             TheScreenArea                                                    (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CharScreenAreaY                                                  (Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CharScreenAreaX                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// int32                              EntryIndexForLerping                                             (BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bFoundInterpRange                                                (ConstParm, ExportObject, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             LerpAlpha                                                        (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsTimeSince_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference, Interp)
// bool                               CallFunc_IsProneOrSitting_ReturnValue                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsCrouching_ReturnValue                                 (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// struct FPrimalCameraInterpParams   K2Node_MakeStruct_PrimalCameraInterpParams                       (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_1                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_2                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_InterpSpeed_ImplicitCast                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_FInterpTo_InterpSpeed_ImplicitCast_1                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_InterpSpeed_ImplicitCast_2                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Target_ImplicitCast                           (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_FInterpTo_Target_ImplicitCast_1                         (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Target_ImplicitCast_2                         (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              K2Node_MakeStruct_TargetVelocity_ImplicitCast                    (Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_CriticalDamping_ImplicitCast                   (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_SpringStiffness_ImplicitCast                   (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

double UASACameraFunctionLibrary_C::Final_Override_Pivot_Interp_Params(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraInterpParams& LastPivotInterpParamsX, const struct FPrimalCameraInterpParams& LastPivotInterpParamsY, const struct FPrimalCameraInterpParams& LastPivotInterpParamsZ, const struct FPrimalCameraInterpParams& PivotInterpParamsX, const struct FPrimalCameraInterpParams& PivotInterpParamsY, const struct FPrimalCameraInterpParams& PivotInterpParamsZ, class UObject** __WorldContext, double PrintModifierAlpha, double TheScreenArea, double* CharScreenAreaY, double CharScreenAreaX, int32* EntryIndexForLerping, double LerpAlpha, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue, struct FPrimalCameraInterpParams* K2Node_MakeStruct_PrimalCameraInterpParams, double CallFunc_Less_DoubleDouble_B_ImplicitCast, float* K2Node_MakeStruct_TargetVelocity_ImplicitCast, float* K2Node_MakeStruct_CriticalDamping_ImplicitCast, float* K2Node_MakeStruct_SpringStiffness_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "Final Override Pivot Interp Params");

	Params::UASACameraFunctionLibrary_C_Final_Override_Pivot_Interp_Params_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.LastPivotInterpParamsX = LastPivotInterpParamsX;
	Parms.LastPivotInterpParamsY = LastPivotInterpParamsY;
	Parms.LastPivotInterpParamsZ = LastPivotInterpParamsZ;
	Parms.PivotInterpParamsX = PivotInterpParamsX;
	Parms.PivotInterpParamsY = PivotInterpParamsY;
	Parms.PivotInterpParamsZ = PivotInterpParamsZ;
	Parms.PrintModifierAlpha = PrintModifierAlpha;
	Parms.TheScreenArea = TheScreenArea;
	Parms.CharScreenAreaX = CharScreenAreaX;
	Parms.LerpAlpha = LerpAlpha;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CharScreenAreaY != nullptr)
		*CharScreenAreaY = Parms.CharScreenAreaY;

	if (EntryIndexForLerping != nullptr)
		*EntryIndexForLerping = Parms.EntryIndexForLerping;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (K2Node_MakeStruct_PrimalCameraInterpParams != nullptr)
		*K2Node_MakeStruct_PrimalCameraInterpParams = std::move(Parms.K2Node_MakeStruct_PrimalCameraInterpParams);

	if (K2Node_MakeStruct_TargetVelocity_ImplicitCast != nullptr)
		*K2Node_MakeStruct_TargetVelocity_ImplicitCast = Parms.K2Node_MakeStruct_TargetVelocity_ImplicitCast;

	if (K2Node_MakeStruct_CriticalDamping_ImplicitCast != nullptr)
		*K2Node_MakeStruct_CriticalDamping_ImplicitCast = Parms.K2Node_MakeStruct_CriticalDamping_ImplicitCast;

	if (K2Node_MakeStruct_SpringStiffness_ImplicitCast != nullptr)
		*K2Node_MakeStruct_SpringStiffness_ImplicitCast = Parms.K2Node_MakeStruct_SpringStiffness_ImplicitCast;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyModifiersToInterpParams
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   InterpParams                                                     (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// TArray<struct FPrimalCameraInterpScreenAreaModifier>InterpParamsModifiers                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class FName                        DebugScreenModifierId                                            (ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// bool                               bIsCrouchedOrProne                                               (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpScreenAreaModifierScreenModifierForDebug                                           (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             PrintModifierAlpha                                               (Edit, ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             TheScreenArea                                                    (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CharScreenAreaY                                                  (Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CharScreenAreaX                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// int32                              EntryIndexForLerping                                             (BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bFoundInterpRange                                                (ConstParm, ExportObject, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             LerpAlpha                                                        (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsCrouching_ReturnValue                                 (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsProneOrSitting_ReturnValue                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpScreenAreaModifierCallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue                                        (Edit, EditFixedSize, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_FMax_ReturnValue_1                                      (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_FMin_ReturnValue_1                                      (Edit, EditFixedSize, Parm, ReturnParm, SubobjectReference, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue_1                        (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_WorldLocationToScreenArea_ScreenAreaX                   (ExportObject, BlueprintReadOnly, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CallFunc_WorldLocationToScreenArea_ScreenAreaY                   (BlueprintReadOnly, Net, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CallFunc_WorldLocationToScreenArea_ViewportSizeX                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CallFunc_WorldLocationToScreenArea_ViewportSizeY                 (Edit, ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CallFunc_WorldLocationToScreenArea_ScreenRawPosX                 (ExportObject, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CallFunc_WorldLocationToScreenArea_ScreenRawPosY                 (Edit, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// struct FPrimalCameraInterpParams   K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue_1                                      (EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Lerp_ReturnValue_2                                      (EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FPrimalCameraInterpParams   K2Node_MakeStruct_PrimalCameraInterpParams                       (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_Lerp_B_ImplicitCast_2                                   (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Lerp_A_ImplicitCast_2                                   (ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              K2Node_MakeStruct_SpringStiffness_ImplicitCast                   (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_TargetVelocity_ImplicitCast                    (Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_CriticalDamping_ImplicitCast                   (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

double UASACameraFunctionLibrary_C::ApplyModifiersToInterpParams(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, struct FPrimalCameraInterpParams* InterpParams, TArray<struct FPrimalCameraInterpScreenAreaModifier>* InterpParamsModifiers, class FName* DebugScreenModifierId, class UObject** __WorldContext, const struct FPrimalCameraInterpScreenAreaModifier& ScreenModifierForDebug, double PrintModifierAlpha, double TheScreenArea, double* CharScreenAreaY, double CharScreenAreaX, int32* EntryIndexForLerping, double LerpAlpha, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, double CallFunc_FMax_ReturnValue, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, double CallFunc_FMax_ReturnValue_1, double* CallFunc_MapRangeClamped_ReturnValue, double CallFunc_WorldLocationToScreenArea_ScreenAreaX, double CallFunc_WorldLocationToScreenArea_ScreenAreaY, double CallFunc_WorldLocationToScreenArea_ViewportSizeX, double CallFunc_WorldLocationToScreenArea_ViewportSizeY, double CallFunc_WorldLocationToScreenArea_ScreenRawPosX, double CallFunc_WorldLocationToScreenArea_ScreenRawPosY, bool* Temp_bool_Variable, struct FPrimalCameraInterpParams* K2Node_Select_Default, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, double* CallFunc_Lerp_ReturnValue, double* CallFunc_Lerp_ReturnValue_1, double* CallFunc_Lerp_ReturnValue_2, struct FPrimalCameraInterpParams* K2Node_MakeStruct_PrimalCameraInterpParams, double CallFunc_SelectFloat_B_ImplicitCast, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* K2Node_MakeStruct_SpringStiffness_ImplicitCast, float* K2Node_MakeStruct_TargetVelocity_ImplicitCast, float* K2Node_MakeStruct_CriticalDamping_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyModifiersToInterpParams");

	Params::UASACameraFunctionLibrary_C_ApplyModifiersToInterpParams_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.ScreenModifierForDebug = ScreenModifierForDebug;
	Parms.PrintModifierAlpha = PrintModifierAlpha;
	Parms.TheScreenArea = TheScreenArea;
	Parms.CharScreenAreaX = CharScreenAreaX;
	Parms.LerpAlpha = LerpAlpha;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_WorldLocationToScreenArea_ScreenAreaX = CallFunc_WorldLocationToScreenArea_ScreenAreaX;
	Parms.CallFunc_WorldLocationToScreenArea_ScreenAreaY = CallFunc_WorldLocationToScreenArea_ScreenAreaY;
	Parms.CallFunc_WorldLocationToScreenArea_ViewportSizeX = CallFunc_WorldLocationToScreenArea_ViewportSizeX;
	Parms.CallFunc_WorldLocationToScreenArea_ViewportSizeY = CallFunc_WorldLocationToScreenArea_ViewportSizeY;
	Parms.CallFunc_WorldLocationToScreenArea_ScreenRawPosX = CallFunc_WorldLocationToScreenArea_ScreenRawPosX;
	Parms.CallFunc_WorldLocationToScreenArea_ScreenRawPosY = CallFunc_WorldLocationToScreenArea_ScreenRawPosY;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InterpParams != nullptr)
		*InterpParams = std::move(Parms.InterpParams);

	if (InterpParamsModifiers != nullptr)
		*InterpParamsModifiers = std::move(Parms.InterpParamsModifiers);

	if (DebugScreenModifierId != nullptr)
		*DebugScreenModifierId = Parms.DebugScreenModifierId;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CharScreenAreaY != nullptr)
		*CharScreenAreaY = Parms.CharScreenAreaY;

	if (EntryIndexForLerping != nullptr)
		*EntryIndexForLerping = Parms.EntryIndexForLerping;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	if (CallFunc_BreakVector2D_X_1 != nullptr)
		*CallFunc_BreakVector2D_X_1 = Parms.CallFunc_BreakVector2D_X_1;

	if (CallFunc_BreakVector2D_Y_1 != nullptr)
		*CallFunc_BreakVector2D_Y_1 = Parms.CallFunc_BreakVector2D_Y_1;

	if (CallFunc_MapRangeClamped_ReturnValue != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue = Parms.CallFunc_MapRangeClamped_ReturnValue;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (CallFunc_Subtract_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1;

	if (CallFunc_Lerp_ReturnValue != nullptr)
		*CallFunc_Lerp_ReturnValue = Parms.CallFunc_Lerp_ReturnValue;

	if (CallFunc_Lerp_ReturnValue_1 != nullptr)
		*CallFunc_Lerp_ReturnValue_1 = Parms.CallFunc_Lerp_ReturnValue_1;

	if (CallFunc_Lerp_ReturnValue_2 != nullptr)
		*CallFunc_Lerp_ReturnValue_2 = Parms.CallFunc_Lerp_ReturnValue_2;

	if (K2Node_MakeStruct_PrimalCameraInterpParams != nullptr)
		*K2Node_MakeStruct_PrimalCameraInterpParams = std::move(Parms.K2Node_MakeStruct_PrimalCameraInterpParams);

	if (K2Node_MakeStruct_SpringStiffness_ImplicitCast != nullptr)
		*K2Node_MakeStruct_SpringStiffness_ImplicitCast = Parms.K2Node_MakeStruct_SpringStiffness_ImplicitCast;

	if (K2Node_MakeStruct_TargetVelocity_ImplicitCast != nullptr)
		*K2Node_MakeStruct_TargetVelocity_ImplicitCast = Parms.K2Node_MakeStruct_TargetVelocity_ImplicitCast;

	if (K2Node_MakeStruct_CriticalDamping_ImplicitCast != nullptr)
		*K2Node_MakeStruct_CriticalDamping_ImplicitCast = Parms.K2Node_MakeStruct_CriticalDamping_ImplicitCast;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.WorldLocationToScreenArea
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FVector                     WorldLocationToProject                                           (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// double                             ScreenAreaX                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             ScreenAreaY                                                      (Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             ViewportSizeX                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             ViewportSizeY                                                    (BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             ScreenRawPosX                                                    (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             ScreenRawPosY                                                    (EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_CastToPlayerController_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_ProjectWorldToScreen_ScreenPosition                     (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ProjectWorldToScreen_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FGeometry                   CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue               (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector2D                   CallFunc_GetAbsoluteSize_ReturnValue                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_X_1                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast_1                     (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference, Interp)

bool UASACameraFunctionLibrary_C::WorldLocationToScreenArea(class APrimalCharacter* CameraOwnerCharacter, struct FVector* WorldLocationToProject, class UObject** __WorldContext, double ScreenAreaX, double ScreenAreaY, double ViewportSizeX, double* ViewportSizeY, double ScreenRawPosX, double ScreenRawPosY, bool* CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_CastToPlayerController_ReturnValue, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, bool* CallFunc_IsValid_ReturnValue_1, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_Divide_DoubleFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "WorldLocationToScreenArea");

	Params::UASACameraFunctionLibrary_C_WorldLocationToScreenArea_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.ScreenAreaX = ScreenAreaX;
	Parms.ScreenAreaY = ScreenAreaY;
	Parms.ViewportSizeX = ViewportSizeX;
	Parms.ScreenRawPosX = ScreenRawPosX;
	Parms.ScreenRawPosY = ScreenRawPosY;
	Parms.CallFunc_CastToPlayerController_ReturnValue = CallFunc_CastToPlayerController_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast_1 = CallFunc_Divide_DoubleFloat_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (WorldLocationToProject != nullptr)
		*WorldLocationToProject = std::move(Parms.WorldLocationToProject);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (ViewportSizeY != nullptr)
		*ViewportSizeY = Parms.ViewportSizeY;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_BreakVector2D_X_1 != nullptr)
		*CallFunc_BreakVector2D_X_1 = Parms.CallFunc_BreakVector2D_X_1;

	if (CallFunc_BreakVector2D_Y_1 != nullptr)
		*CallFunc_BreakVector2D_Y_1 = Parms.CallFunc_BreakVector2D_Y_1;

	return Parms.ReturnValue;

}

}


