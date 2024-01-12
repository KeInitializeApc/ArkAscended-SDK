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
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector                     CurrentPivotLocation                                             (Edit, ExportObject, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     DesiredPivotLocation                                             (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)

void UASACameraFunctionLibrary_C::FinalOverridePivotLocation(class APrimalCharacter* CameraOwnerCharacter, const struct FVector& CurrentPivotLocation, const struct FVector& DesiredPivotLocation, class UObject** __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "FinalOverridePivotLocation");

	Params::UASACameraFunctionLibrary_C_FinalOverridePivotLocation_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CurrentPivotLocation = CurrentPivotLocation;
	Parms.DesiredPivotLocation = DesiredPivotLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyAnyPitchBasedModifier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// bool                               bShouldApplyAnyModifier                                          (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsTargeting_ReturnValue                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference)

bool UASACameraFunctionLibrary_C::ShouldApplyAnyPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, class UObject** __WorldContext, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ShouldApplyAnyPitchBasedModifier");

	Params::UASACameraFunctionLibrary_C_ShouldApplyAnyPitchBasedModifier_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLengthInterp
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   ArmLengthInterpParams                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// double                             PitchModifierAlpha                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              FoundEntryIndex                                                  (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier      (Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp               (EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1    (Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1             (EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1               (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue_1                                      (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Lerp_ReturnValue_2                                      (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference, RepNotify, Interp)
// struct FPrimalCameraInterpParams   K2Node_MakeStruct_PrimalCameraInterpParams                       (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Lerp_A_ImplicitCast_2                                   (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_Lerp_B_ImplicitCast_2                                   (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
// float                              K2Node_MakeStruct_TargetVelocity_ImplicitCast                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_SpringStiffness_ImplicitCast                   (Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_CriticalDamping_ImplicitCast                   (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

double UASACameraFunctionLibrary_C::ApplyPitchBasedModifierToArmLengthInterp(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, TArray<struct FPrimalCameraPitchBasedModifier>* PitchBasedModifiers, class UObject** __WorldContext, double* PitchModifierAlpha, int32 FoundEntryIndex, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier, bool* CallFunc_IsValid_ReturnValue, struct FPrimalCameraPitchBasedModifier* CallFunc_Array_Get_Item, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp, double* CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, struct FPrimalCameraPitchBasedModifier* CallFunc_Array_Get_Item_1, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1, double* CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1, bool* CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, struct FPrimalCameraInterpParams* K2Node_MakeStruct_PrimalCameraInterpParams, double* CallFunc_Lerp_A_ImplicitCast, double* CallFunc_Lerp_A_ImplicitCast_1, double* CallFunc_Lerp_A_ImplicitCast_2, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast_1, double CallFunc_Lerp_B_ImplicitCast_2, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* K2Node_MakeStruct_TargetVelocity_ImplicitCast, float* K2Node_MakeStruct_SpringStiffness_ImplicitCast, float* K2Node_MakeStruct_CriticalDamping_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyPitchBasedModifierToArmLengthInterp");

	Params::UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLengthInterp_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.FoundEntryIndex = FoundEntryIndex;
	Parms.CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier = CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast_1 = CallFunc_Lerp_B_ImplicitCast_1;
	Parms.CallFunc_Lerp_B_ImplicitCast_2 = CallFunc_Lerp_B_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

	if (PitchBasedModifiers != nullptr)
		*PitchBasedModifiers = std::move(Parms.PitchBasedModifiers);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (PitchModifierAlpha != nullptr)
		*PitchModifierAlpha = Parms.PitchModifierAlpha;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp;

	if (CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha = Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = std::move(Parms.CallFunc_Array_Get_Item_1);

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1;

	if (CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1;

	if (CallFunc_EqualEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_EqualEqual_DoubleDouble_ReturnValue = Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue;

	if (K2Node_MakeStruct_PrimalCameraInterpParams != nullptr)
		*K2Node_MakeStruct_PrimalCameraInterpParams = std::move(Parms.K2Node_MakeStruct_PrimalCameraInterpParams);

	if (CallFunc_Lerp_A_ImplicitCast != nullptr)
		*CallFunc_Lerp_A_ImplicitCast = Parms.CallFunc_Lerp_A_ImplicitCast;

	if (CallFunc_Lerp_A_ImplicitCast_1 != nullptr)
		*CallFunc_Lerp_A_ImplicitCast_1 = Parms.CallFunc_Lerp_A_ImplicitCast_1;

	if (CallFunc_Lerp_A_ImplicitCast_2 != nullptr)
		*CallFunc_Lerp_A_ImplicitCast_2 = Parms.CallFunc_Lerp_A_ImplicitCast_2;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

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
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierPitchBasedModifier                                               (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              EntryIndex                                                       (Edit, EditFixedSize, Parm, GlobalConfig, InstancedReference, SubobjectReference)
// double                             ModifierAlpha                                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void UASACameraFunctionLibrary_C::DebugPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraPitchBasedModifier* PitchBasedModifier, int32 EntryIndex, double* ModifierAlpha, class UObject** __WorldContext, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "DebugPitchBasedModifier");

	Params::UASACameraFunctionLibrary_C_DebugPitchBasedModifier_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.EntryIndex = EntryIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (PitchBasedModifier != nullptr)
		*PitchBasedModifier = std::move(Parms.PitchBasedModifier);

	if (ModifierAlpha != nullptr)
		*ModifierAlpha = Parms.ModifierAlpha;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotOffset
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// struct FVector                     DesiredPivotOffset                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)

void UASACameraFunctionLibrary_C::FinalOverridePivotOffset(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, TArray<struct FPrimalCameraPitchBasedModifier>* PitchBasedModifiers, const struct FVector& DesiredPivotOffset, class UObject** __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "FinalOverridePivotOffset");

	Params::UASACameraFunctionLibrary_C_FinalOverridePivotOffset_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.DesiredPivotOffset = DesiredPivotOffset;

	UObject::ProcessEvent(Func, &Parms);

	if (PitchBasedModifiers != nullptr)
		*PitchBasedModifiers = std::move(Parms.PitchBasedModifiers);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToPivotOffset
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// struct FVector                     DesiredPivotOffset                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// double                             PitchModifierAlpha                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              FoundEntryIndex                                                  (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetTPVCameraOffset_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier      (Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp               (EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1    (Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1             (EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1               (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_SelectVector_ReturnValue_1                              (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
// float                              CallFunc_VLerp_Alpha_ImplicitCast                                (BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

double UASACameraFunctionLibrary_C::ApplyPitchBasedModifierToPivotOffset(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, TArray<struct FPrimalCameraPitchBasedModifier>* PitchBasedModifiers, const struct FVector& DesiredPivotOffset, class UObject** __WorldContext, double* PitchModifierAlpha, int32 FoundEntryIndex, int32* CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_GetTPVCameraOffset_ReturnValue, bool* CallFunc_IsValid_ReturnValue, struct FPrimalCameraPitchBasedModifier* CallFunc_Array_Get_Item, const struct FVector& CallFunc_SelectVector_ReturnValue, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp, double* CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, struct FPrimalCameraPitchBasedModifier* CallFunc_Array_Get_Item_1, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1, double* CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1, const struct FVector& CallFunc_SelectVector_ReturnValue_1, bool* CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, struct FVector* CallFunc_VLerp_ReturnValue, double CallFunc_SelectFloat_B_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* CallFunc_VLerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyPitchBasedModifierToPivotOffset");

	Params::UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToPivotOffset_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.DesiredPivotOffset = DesiredPivotOffset;
	Parms.FoundEntryIndex = FoundEntryIndex;
	Parms.CallFunc_GetTPVCameraOffset_ReturnValue = CallFunc_GetTPVCameraOffset_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue_1 = CallFunc_SelectVector_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (PitchBasedModifiers != nullptr)
		*PitchBasedModifiers = std::move(Parms.PitchBasedModifiers);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (PitchModifierAlpha != nullptr)
		*PitchModifierAlpha = Parms.PitchModifierAlpha;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp;

	if (CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha = Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = std::move(Parms.CallFunc_Array_Get_Item_1);

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1;

	if (CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1;

	if (CallFunc_EqualEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_EqualEqual_DoubleDouble_ReturnValue = Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue;

	if (CallFunc_VLerp_ReturnValue != nullptr)
		*CallFunc_VLerp_ReturnValue = std::move(Parms.CallFunc_VLerp_ReturnValue);

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	if (CallFunc_VLerp_Alpha_ImplicitCast != nullptr)
		*CallFunc_VLerp_Alpha_ImplicitCast = Parms.CallFunc_VLerp_Alpha_ImplicitCast;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLength
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// double                             CurrentArmLength                                                 (ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             DesiredArmLength                                                 (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// double                             PitchModifierAlpha                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              FoundEntryIndex                                                  (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier      (Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp               (EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1    (Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1             (EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1               (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             K2Node_VariableGet_DesiredArmLength_ImplicitCast                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSetRef_Target_ImplicitCast                        (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)

double UASACameraFunctionLibrary_C::ApplyPitchBasedModifierToArmLength(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, TArray<struct FPrimalCameraPitchBasedModifier>* PitchBasedModifiers, double CurrentArmLength, double DesiredArmLength, class UObject** __WorldContext, double* PitchModifierAlpha, int32 FoundEntryIndex, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier, bool* CallFunc_IsValid_ReturnValue, struct FPrimalCameraPitchBasedModifier* CallFunc_Array_Get_Item, bool* CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp, double* CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, struct FPrimalCameraPitchBasedModifier* CallFunc_Array_Get_Item_1, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1, double* CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1, double* K2Node_VariableGet_DesiredArmLength_ImplicitCast, bool* CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Lerp_ReturnValue, double* CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, float* K2Node_VariableSetRef_Target_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyPitchBasedModifierToArmLength");

	Params::UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLength_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.CurrentArmLength = CurrentArmLength;
	Parms.DesiredArmLength = DesiredArmLength;
	Parms.FoundEntryIndex = FoundEntryIndex;
	Parms.CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier = CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (PitchBasedModifiers != nullptr)
		*PitchBasedModifiers = std::move(Parms.PitchBasedModifiers);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (PitchModifierAlpha != nullptr)
		*PitchModifierAlpha = Parms.PitchModifierAlpha;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_GreaterEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_DoubleDouble_ReturnValue = Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp;

	if (CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha = Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = std::move(Parms.CallFunc_Array_Get_Item_1);

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1;

	if (CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1;

	if (K2Node_VariableGet_DesiredArmLength_ImplicitCast != nullptr)
		*K2Node_VariableGet_DesiredArmLength_ImplicitCast = Parms.K2Node_VariableGet_DesiredArmLength_ImplicitCast;

	if (CallFunc_EqualEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_EqualEqual_DoubleDouble_ReturnValue = Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue;

	if (CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	if (K2Node_VariableSetRef_Target_ImplicitCast != nullptr)
		*K2Node_VariableSetRef_Target_ImplicitCast = Parms.K2Node_VariableSetRef_Target_ImplicitCast;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyPitchBasedModifier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierPitchBasedModifier                                               (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// bool                               bShouldApplyModifier                                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bShouldLerp                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             LerpAlpha                                                        (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FMax_ReturnValue                                        (ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue_1                                      (ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FMin_ReturnValue                                        (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue_1                                      (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue_1                        (Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_InRange_FloatFloat_Value_ImplicitCast                   (ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_InRange_FloatFloat_Value_ImplicitCast_1                 (ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)

double UASACameraFunctionLibrary_C::ShouldApplyPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraPitchBasedModifier* PitchBasedModifier, class UObject** __WorldContext, double* LerpAlpha, bool* CallFunc_IsValid_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_FMax_ReturnValue, double CallFunc_FMax_ReturnValue_1, const struct FRotator& CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, bool CallFunc_InRange_FloatFloat_ReturnValue, double* CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue_1, double CallFunc_InRange_FloatFloat_Value_ImplicitCast, double CallFunc_InRange_FloatFloat_Value_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ShouldApplyPitchBasedModifier");

	Params::UASACameraFunctionLibrary_C_ShouldApplyPitchBasedModifier_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue = CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue = CallFunc_InRange_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue_1 = CallFunc_InRange_FloatFloat_ReturnValue_1;
	Parms.CallFunc_InRange_FloatFloat_Value_ImplicitCast = CallFunc_InRange_FloatFloat_Value_ImplicitCast;
	Parms.CallFunc_InRange_FloatFloat_Value_ImplicitCast_1 = CallFunc_InRange_FloatFloat_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (PitchBasedModifier != nullptr)
		*PitchBasedModifier = std::move(Parms.PitchBasedModifier);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (LerpAlpha != nullptr)
		*LerpAlpha = Parms.LerpAlpha;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

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
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   InterpParamsX                                                    (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   InterpParamsY                                                    (ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   InterpParamsZ                                                    (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// double                             PitchModifierAlpha                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bOverrideInterpParams                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   FinalInterpParams                                                (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   InterpParamsToModify                                             (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              FoundEntryIndex                                                  (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier      (Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp               (EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue_1                                      (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Lerp_ReturnValue_2                                      (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference, RepNotify, Interp)
// struct FPrimalCameraInterpParams   K2Node_MakeStruct_PrimalCameraInterpParams                       (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Lerp_A_ImplicitCast_2                                   (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_Lerp_B_ImplicitCast_2                                   (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
// float                              K2Node_MakeStruct_SpringStiffness_ImplicitCast                   (Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_TargetVelocity_ImplicitCast                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_CriticalDamping_ImplicitCast                   (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

double UASACameraFunctionLibrary_C::ApplyPitchBasedModifierToInterpParams(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, struct FPrimalCameraInterpParams* InterpParamsX, struct FPrimalCameraInterpParams* InterpParamsY, struct FPrimalCameraInterpParams* InterpParamsZ, TArray<struct FPrimalCameraPitchBasedModifier>* PitchBasedModifiers, class UObject** __WorldContext, double* PitchModifierAlpha, const struct FPrimalCameraInterpParams& FinalInterpParams, struct FPrimalCameraInterpParams* InterpParamsToModify, int32 FoundEntryIndex, int32* CallFunc_Array_Length_ReturnValue, struct FPrimalCameraPitchBasedModifier* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool* CallFunc_IsValid_ReturnValue, struct FPrimalCameraPitchBasedModifier* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp, double* CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, struct FPrimalCameraPitchBasedModifier* CallFunc_Array_Get_Item_2, bool CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, struct FPrimalCameraInterpParams* K2Node_MakeStruct_PrimalCameraInterpParams, double* CallFunc_Lerp_A_ImplicitCast, double* CallFunc_Lerp_A_ImplicitCast_1, double* CallFunc_Lerp_A_ImplicitCast_2, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast_1, double CallFunc_Lerp_B_ImplicitCast_2, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* K2Node_MakeStruct_SpringStiffness_ImplicitCast, float* K2Node_MakeStruct_TargetVelocity_ImplicitCast, float* K2Node_MakeStruct_CriticalDamping_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyPitchBasedModifierToInterpParams");

	Params::UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToInterpParams_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.FinalInterpParams = FinalInterpParams;
	Parms.FoundEntryIndex = FoundEntryIndex;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast_1 = CallFunc_Lerp_B_ImplicitCast_1;
	Parms.CallFunc_Lerp_B_ImplicitCast_2 = CallFunc_Lerp_B_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

	if (InterpParamsX != nullptr)
		*InterpParamsX = std::move(Parms.InterpParamsX);

	if (InterpParamsY != nullptr)
		*InterpParamsY = std::move(Parms.InterpParamsY);

	if (InterpParamsZ != nullptr)
		*InterpParamsZ = std::move(Parms.InterpParamsZ);

	if (PitchBasedModifiers != nullptr)
		*PitchBasedModifiers = std::move(Parms.PitchBasedModifiers);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (PitchModifierAlpha != nullptr)
		*PitchModifierAlpha = Parms.PitchModifierAlpha;

	if (InterpParamsToModify != nullptr)
		*InterpParamsToModify = std::move(Parms.InterpParamsToModify);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = std::move(Parms.CallFunc_Array_Get_Item_1);

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp;

	if (CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha = Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;

	if (CallFunc_Array_Get_Item_2 != nullptr)
		*CallFunc_Array_Get_Item_2 = std::move(Parms.CallFunc_Array_Get_Item_2);

	if (CallFunc_EqualEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_EqualEqual_DoubleDouble_ReturnValue = Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue;

	if (K2Node_MakeStruct_PrimalCameraInterpParams != nullptr)
		*K2Node_MakeStruct_PrimalCameraInterpParams = std::move(Parms.K2Node_MakeStruct_PrimalCameraInterpParams);

	if (CallFunc_Lerp_A_ImplicitCast != nullptr)
		*CallFunc_Lerp_A_ImplicitCast = Parms.CallFunc_Lerp_A_ImplicitCast;

	if (CallFunc_Lerp_A_ImplicitCast_1 != nullptr)
		*CallFunc_Lerp_A_ImplicitCast_1 = Parms.CallFunc_Lerp_A_ImplicitCast_1;

	if (CallFunc_Lerp_A_ImplicitCast_2 != nullptr)
		*CallFunc_Lerp_A_ImplicitCast_2 = Parms.CallFunc_Lerp_A_ImplicitCast_2;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

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
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParams                                                  (BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)

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
// class APrimalCharacter*            CharacterToKeepOnScreen                                          (Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CurrentCameraArmLength                                           (BlueprintVisible, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             DesiredCameraArmLength                                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// double                             ScreenAreaToUse                                                  (Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bStopLoop                                                        (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               VelocityIsNearlyZero                                             (Edit, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector                     WorldLocationToProject                                           (BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CharacterScreenAreaY                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CharacterScreenAreaX                                             (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FVector UASACameraFunctionLibrary_C::FinalOverrideCameraArmLength(class APrimalCharacter* CharacterToKeepOnScreen, const struct FPrimalCameraParams& CameraParams, class APrimalCharacter* CameraOwnerCharacter, class UObject** __WorldContext, double CharacterScreenAreaY, double CharacterScreenAreaX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "FinalOverrideCameraArmLength");

	Params::UASACameraFunctionLibrary_C_FinalOverrideCameraArmLength_Params Parms{};

	Parms.CharacterToKeepOnScreen = CharacterToKeepOnScreen;
	Parms.CameraParams = CameraParams;
	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CharacterScreenAreaY = CharacterScreenAreaY;
	Parms.CharacterScreenAreaX = CharacterScreenAreaX;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.Final Override Pivot Interp Params
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraPivotZInterpOverridesPivotZInterpOverrides                                            (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   LastPivotInterpParamsX                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   LastPivotInterpParamsY                                           (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   LastPivotInterpParamsZ                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   PivotInterpParamsX                                               (Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   PivotInterpParamsY                                               (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   PivotInterpParamsZ                                               (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// double                             PrintModifierAlpha                                               (Edit, ConstParm, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             TheScreenArea                                                    (Edit, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CharScreenAreaY                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CharScreenAreaX                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              EntryIndexForLerping                                             (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bFoundInterpRange                                                (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             LerpAlpha                                                        (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsTimeSince_ReturnValue_1                               (BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsProneOrSitting_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue_2                               (BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsCrouching_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (Edit, ConstParm, ExportObject, Parm, ZeroConstructor, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// struct FPrimalCameraInterpParams   K2Node_MakeStruct_PrimalCameraInterpParams                       (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_1                        (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_2                        (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_InterpSpeed_ImplicitCast                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_FInterpTo_InterpSpeed_ImplicitCast_1                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_InterpSpeed_ImplicitCast_2                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Target_ImplicitCast                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Target_ImplicitCast_1                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Target_ImplicitCast_2                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              K2Node_MakeStruct_TargetVelocity_ImplicitCast                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_CriticalDamping_ImplicitCast                   (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_SpringStiffness_ImplicitCast                   (Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

double UASACameraFunctionLibrary_C::Final_Override_Pivot_Interp_Params(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, struct FPrimalCameraInterpParams* LastPivotInterpParamsX, struct FPrimalCameraInterpParams* LastPivotInterpParamsY, struct FPrimalCameraInterpParams* LastPivotInterpParamsZ, class UObject** __WorldContext, double CharScreenAreaY, double CharScreenAreaX, int32 EntryIndexForLerping, double* LerpAlpha, bool* CallFunc_IsValid_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_1, bool CallFunc_IsProneOrSitting_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_2, bool CallFunc_IsCrouching_ReturnValue, bool* CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue, struct FPrimalCameraInterpParams* K2Node_MakeStruct_PrimalCameraInterpParams, double* CallFunc_Less_DoubleDouble_A_ImplicitCast, float* K2Node_MakeStruct_TargetVelocity_ImplicitCast, float* K2Node_MakeStruct_CriticalDamping_ImplicitCast, float* K2Node_MakeStruct_SpringStiffness_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "Final Override Pivot Interp Params");

	Params::UASACameraFunctionLibrary_C_Final_Override_Pivot_Interp_Params_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.CharScreenAreaY = CharScreenAreaY;
	Parms.CharScreenAreaX = CharScreenAreaX;
	Parms.EntryIndexForLerping = EntryIndexForLerping;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue_1 = CallFunc_IsTimeSince_ReturnValue_1;
	Parms.CallFunc_IsProneOrSitting_ReturnValue = CallFunc_IsProneOrSitting_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue_2 = CallFunc_IsTimeSince_ReturnValue_2;
	Parms.CallFunc_IsCrouching_ReturnValue = CallFunc_IsCrouching_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LastPivotInterpParamsX != nullptr)
		*LastPivotInterpParamsX = std::move(Parms.LastPivotInterpParamsX);

	if (LastPivotInterpParamsY != nullptr)
		*LastPivotInterpParamsY = std::move(Parms.LastPivotInterpParamsY);

	if (LastPivotInterpParamsZ != nullptr)
		*LastPivotInterpParamsZ = std::move(Parms.LastPivotInterpParamsZ);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (LerpAlpha != nullptr)
		*LerpAlpha = Parms.LerpAlpha;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue != nullptr)
		*CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue = Parms.CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (K2Node_MakeStruct_PrimalCameraInterpParams != nullptr)
		*K2Node_MakeStruct_PrimalCameraInterpParams = std::move(Parms.K2Node_MakeStruct_PrimalCameraInterpParams);

	if (CallFunc_Less_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Less_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast;

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
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   InterpParams                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FPrimalCameraInterpScreenAreaModifier>InterpParamsModifiers                                            (Edit, ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class FName                        DebugScreenModifierId                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// bool                               bIsCrouchedOrProne                                               (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpScreenAreaModifierScreenModifierForDebug                                           (BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             PrintModifierAlpha                                               (Edit, ConstParm, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             TheScreenArea                                                    (Edit, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CharScreenAreaY                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CharScreenAreaX                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              EntryIndexForLerping                                             (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bFoundInterpRange                                                (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             LerpAlpha                                                        (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsCrouching_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsProneOrSitting_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue_1                               (BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FPrimalCameraInterpScreenAreaModifierCallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue                                        (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FMax_ReturnValue_1                                      (ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FMin_ReturnValue_1                                      (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue_1                        (Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_WorldLocationToScreenArea_ScreenAreaX                   (BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_WorldLocationToScreenArea_ScreenAreaY                   (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_WorldLocationToScreenArea_ViewportSizeX                 (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_WorldLocationToScreenArea_ViewportSizeY                 (Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_WorldLocationToScreenArea_ScreenRawPosX                 (Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_WorldLocationToScreenArea_ScreenRawPosY                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FPrimalCameraInterpParams   K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue_1                                      (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Lerp_ReturnValue_2                                      (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference, RepNotify, Interp)
// struct FPrimalCameraInterpParams   K2Node_MakeStruct_PrimalCameraInterpParams                       (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_Lerp_B_ImplicitCast_2                                   (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Lerp_A_ImplicitCast_2                                   (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
// float                              K2Node_MakeStruct_SpringStiffness_ImplicitCast                   (Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_TargetVelocity_ImplicitCast                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_CriticalDamping_ImplicitCast                   (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

double UASACameraFunctionLibrary_C::ApplyModifiersToInterpParams(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraInterpParams& InterpParams, TArray<struct FPrimalCameraInterpScreenAreaModifier>* InterpParamsModifiers, class FName DebugScreenModifierId, class UObject** __WorldContext, double CharScreenAreaY, double CharScreenAreaX, int32 EntryIndexForLerping, double* LerpAlpha, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsCrouching_ReturnValue, bool CallFunc_IsProneOrSitting_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, struct FPrimalCameraInterpScreenAreaModifier* CallFunc_Array_Get_Item, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_FMax_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_FMax_ReturnValue_1, double* CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue_1, double* CallFunc_WorldLocationToScreenArea_ScreenAreaX, double* CallFunc_WorldLocationToScreenArea_ScreenAreaY, double CallFunc_WorldLocationToScreenArea_ViewportSizeX, double CallFunc_WorldLocationToScreenArea_ViewportSizeY, double* CallFunc_WorldLocationToScreenArea_ScreenRawPosX, double* CallFunc_WorldLocationToScreenArea_ScreenRawPosY, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_Array_IsValidIndex_ReturnValue, struct FPrimalCameraInterpParams* K2Node_Select_Default, bool* CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, struct FPrimalCameraInterpParams* K2Node_MakeStruct_PrimalCameraInterpParams, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast_1, double CallFunc_Lerp_B_ImplicitCast_2, double* CallFunc_Lerp_A_ImplicitCast, double* CallFunc_Lerp_A_ImplicitCast_1, double* CallFunc_Lerp_A_ImplicitCast_2, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* K2Node_MakeStruct_SpringStiffness_ImplicitCast, float* K2Node_MakeStruct_TargetVelocity_ImplicitCast, float* K2Node_MakeStruct_CriticalDamping_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyModifiersToInterpParams");

	Params::UASACameraFunctionLibrary_C_ApplyModifiersToInterpParams_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.InterpParams = InterpParams;
	Parms.DebugScreenModifierId = DebugScreenModifierId;
	Parms.CharScreenAreaY = CharScreenAreaY;
	Parms.CharScreenAreaX = CharScreenAreaX;
	Parms.EntryIndexForLerping = EntryIndexForLerping;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_IsCrouching_ReturnValue = CallFunc_IsCrouching_ReturnValue;
	Parms.CallFunc_IsProneOrSitting_ReturnValue = CallFunc_IsProneOrSitting_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue_1 = CallFunc_IsTimeSince_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue = CallFunc_InRange_FloatFloat_ReturnValue;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue_1 = CallFunc_InRange_FloatFloat_ReturnValue_1;
	Parms.CallFunc_WorldLocationToScreenArea_ViewportSizeX = CallFunc_WorldLocationToScreenArea_ViewportSizeX;
	Parms.CallFunc_WorldLocationToScreenArea_ViewportSizeY = CallFunc_WorldLocationToScreenArea_ViewportSizeY;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast_1 = CallFunc_Lerp_B_ImplicitCast_1;
	Parms.CallFunc_Lerp_B_ImplicitCast_2 = CallFunc_Lerp_B_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

	if (InterpParamsModifiers != nullptr)
		*InterpParamsModifiers = std::move(Parms.InterpParamsModifiers);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (LerpAlpha != nullptr)
		*LerpAlpha = Parms.LerpAlpha;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_MapRangeClamped_ReturnValue != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue = Parms.CallFunc_MapRangeClamped_ReturnValue;

	if (CallFunc_WorldLocationToScreenArea_ScreenAreaX != nullptr)
		*CallFunc_WorldLocationToScreenArea_ScreenAreaX = Parms.CallFunc_WorldLocationToScreenArea_ScreenAreaX;

	if (CallFunc_WorldLocationToScreenArea_ScreenAreaY != nullptr)
		*CallFunc_WorldLocationToScreenArea_ScreenAreaY = Parms.CallFunc_WorldLocationToScreenArea_ScreenAreaY;

	if (CallFunc_WorldLocationToScreenArea_ScreenRawPosX != nullptr)
		*CallFunc_WorldLocationToScreenArea_ScreenRawPosX = Parms.CallFunc_WorldLocationToScreenArea_ScreenRawPosX;

	if (CallFunc_WorldLocationToScreenArea_ScreenRawPosY != nullptr)
		*CallFunc_WorldLocationToScreenArea_ScreenRawPosY = Parms.CallFunc_WorldLocationToScreenArea_ScreenRawPosY;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (CallFunc_EqualEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_EqualEqual_DoubleDouble_ReturnValue = Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue;

	if (K2Node_MakeStruct_PrimalCameraInterpParams != nullptr)
		*K2Node_MakeStruct_PrimalCameraInterpParams = std::move(Parms.K2Node_MakeStruct_PrimalCameraInterpParams);

	if (CallFunc_Lerp_A_ImplicitCast != nullptr)
		*CallFunc_Lerp_A_ImplicitCast = Parms.CallFunc_Lerp_A_ImplicitCast;

	if (CallFunc_Lerp_A_ImplicitCast_1 != nullptr)
		*CallFunc_Lerp_A_ImplicitCast_1 = Parms.CallFunc_Lerp_A_ImplicitCast_1;

	if (CallFunc_Lerp_A_ImplicitCast_2 != nullptr)
		*CallFunc_Lerp_A_ImplicitCast_2 = Parms.CallFunc_Lerp_A_ImplicitCast_2;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

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
// class APrimalCharacter*            CameraOwnerCharacter                                             (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector                     WorldLocationToProject                                           (BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// double                             ScreenAreaX                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             ScreenAreaY                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             ViewportSizeX                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             ViewportSizeY                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             ScreenRawPosX                                                    (BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             ScreenRawPosY                                                    (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_CastToPlayerController_ReturnValue                      (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_ProjectWorldToScreen_ScreenPosition                     (ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ProjectWorldToScreen_ReturnValue                        (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometry                   CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue               (Edit, BlueprintVisible, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_GetAbsoluteSize_ReturnValue                             (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_X_1                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast_1                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference, Interp)

double UASACameraFunctionLibrary_C::WorldLocationToScreenArea(class APrimalCharacter* CameraOwnerCharacter, class UObject** __WorldContext, bool* CallFunc_IsValid_ReturnValue, class AController** CallFunc_GetController_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, const struct FGeometry& CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetAbsoluteSize_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool* CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool* CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "WorldLocationToScreenArea");

	Params::UASACameraFunctionLibrary_C_WorldLocationToScreenArea_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CallFunc_ProjectWorldToScreen_ScreenPosition = CallFunc_ProjectWorldToScreen_ScreenPosition;
	Parms.CallFunc_ProjectWorldToScreen_ReturnValue = CallFunc_ProjectWorldToScreen_ReturnValue;
	Parms.CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue = CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetAbsoluteSize_ReturnValue = CallFunc_GetAbsoluteSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetController_ReturnValue != nullptr)
		*CallFunc_GetController_ReturnValue = Parms.CallFunc_GetController_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_EqualEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_EqualEqual_DoubleDouble_ReturnValue = Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue;

	if (CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


