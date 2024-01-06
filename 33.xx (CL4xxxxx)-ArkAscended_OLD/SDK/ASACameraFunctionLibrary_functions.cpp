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
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector                     CurrentPivotLocation                                             (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     DesiredPivotLocation                                             (BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)

struct FVector UASACameraFunctionLibrary_C::FinalOverridePivotLocation(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "FinalOverridePivotLocation");

	Params::UASACameraFunctionLibrary_C_FinalOverridePivotLocation_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyAnyPitchBasedModifier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               bShouldApplyAnyModifier                                          (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsTargeting_ReturnValue                                 (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)

bool UASACameraFunctionLibrary_C::ShouldApplyAnyPitchBasedModifier(class UObject* __WorldContext, bool bShouldApplyAnyModifier, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ShouldApplyAnyPitchBasedModifier");

	Params::UASACameraFunctionLibrary_C_ShouldApplyAnyPitchBasedModifier_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.bShouldApplyAnyModifier = bShouldApplyAnyModifier;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsShooter_Character != nullptr)
		*K2Node_DynamicCast_AsShooter_Character = Parms.K2Node_DynamicCast_AsShooter_Character;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLengthInterp
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   ArmLengthInterpParams                                            (Edit, ConstParm, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             PitchModifierAlpha                                               (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              FoundEntryIndex                                                  (BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp               (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_1                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1    (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1             (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1               (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue_1                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Lerp_ReturnValue_2                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference, RepNotify, Interp)
// struct FPrimalCameraInterpParams   K2Node_MakeStruct_PrimalCameraInterpParams                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Lerp_A_ImplicitCast_2                                   (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_Lerp_B_ImplicitCast_2                                   (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              K2Node_MakeStruct_TargetVelocity_ImplicitCast                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_SpringStiffness_ImplicitCast                   (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_CriticalDamping_ImplicitCast                   (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UASACameraFunctionLibrary_C::ApplyPitchBasedModifierToArmLengthInterp(const struct FPrimalCameraInterpParams& ArmLengthInterpParams, class UObject* __WorldContext, bool CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp, double* CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1, double* CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1, bool* CallFunc_BooleanAND_ReturnValue_1, double* CallFunc_SelectFloat_ReturnValue, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_Lerp_A_ImplicitCast_2, double* CallFunc_SelectFloat_B_ImplicitCast, double* CallFunc_Lerp_B_ImplicitCast, double* CallFunc_Lerp_B_ImplicitCast_1, double* CallFunc_Lerp_B_ImplicitCast_2, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyPitchBasedModifierToArmLengthInterp");

	Params::UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLengthInterp_Params Parms{};

	Parms.ArmLengthInterpParams = ArmLengthInterpParams;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_Lerp_A_ImplicitCast_1 = CallFunc_Lerp_A_ImplicitCast_1;
	Parms.CallFunc_Lerp_A_ImplicitCast_2 = CallFunc_Lerp_A_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier != nullptr)
		*CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier = Parms.CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp;

	if (CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha = Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1;

	if (CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1;

	if (CallFunc_BooleanAND_ReturnValue_1 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_1 = Parms.CallFunc_BooleanAND_ReturnValue_1;

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_SelectFloat_B_ImplicitCast != nullptr)
		*CallFunc_SelectFloat_B_ImplicitCast = Parms.CallFunc_SelectFloat_B_ImplicitCast;

	if (CallFunc_Lerp_B_ImplicitCast != nullptr)
		*CallFunc_Lerp_B_ImplicitCast = Parms.CallFunc_Lerp_B_ImplicitCast;

	if (CallFunc_Lerp_B_ImplicitCast_1 != nullptr)
		*CallFunc_Lerp_B_ImplicitCast_1 = Parms.CallFunc_Lerp_B_ImplicitCast_1;

	if (CallFunc_Lerp_B_ImplicitCast_2 != nullptr)
		*CallFunc_Lerp_B_ImplicitCast_2 = Parms.CallFunc_Lerp_B_ImplicitCast_2;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.DebugPitchBasedModifier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierPitchBasedModifier                                               (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              EntryIndex                                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// double                             ModifierAlpha                                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UASACameraFunctionLibrary_C::DebugPitchBasedModifier(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "DebugPitchBasedModifier");

	Params::UASACameraFunctionLibrary_C_DebugPitchBasedModifier_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotOffset
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     DesiredPivotOffset                                               (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)

struct FVector UASACameraFunctionLibrary_C::FinalOverridePivotOffset(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "FinalOverridePivotOffset");

	Params::UASACameraFunctionLibrary_C_FinalOverridePivotOffset_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToPivotOffset
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     DesiredPivotOffset                                               (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             PitchModifierAlpha                                               (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              FoundEntryIndex                                                  (BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetTPVCameraOffset_ReturnValue                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (Edit, ConstParm, Net, ReturnParm, Config, EditConst, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp               (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_1                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1    (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1             (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1               (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_SelectVector_ReturnValue_1                              (Edit, ConstParm, Net, ReturnParm, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (Edit, ConstParm, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_VLerp_Alpha_ImplicitCast                                (Edit, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UASACameraFunctionLibrary_C::ApplyPitchBasedModifierToPivotOffset(class UObject* __WorldContext, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetTPVCameraOffset_ReturnValue, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp, double* CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1, double* CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue_1, double* CallFunc_SelectFloat_ReturnValue, double* CallFunc_SelectFloat_B_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyPitchBasedModifierToPivotOffset");

	Params::UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToPivotOffset_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetTPVCameraOffset_ReturnValue = CallFunc_GetTPVCameraOffset_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp;

	if (CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha = Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1;

	if (CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1;

	if (CallFunc_BooleanAND_ReturnValue_1 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_1 = Parms.CallFunc_BooleanAND_ReturnValue_1;

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_SelectFloat_B_ImplicitCast != nullptr)
		*CallFunc_SelectFloat_B_ImplicitCast = Parms.CallFunc_SelectFloat_B_ImplicitCast;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLength
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             CurrentArmLength                                                 (Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             DesiredArmLength                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             PitchModifierAlpha                                               (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              FoundEntryIndex                                                  (BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp               (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_1                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1    (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1             (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1               (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             K2Node_VariableGet_DesiredArmLength_ImplicitCast                 (Edit, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSetRef_Target_ImplicitCast                        (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

double UASACameraFunctionLibrary_C::ApplyPitchBasedModifierToArmLength(class UObject* __WorldContext, bool CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier, bool* CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp, double* CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1, double* CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1, double* CallFunc_SelectFloat_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, double* CallFunc_SelectFloat_ReturnValue_1, double* CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double* CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double* CallFunc_Lerp_B_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyPitchBasedModifierToArmLength");

	Params::UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLength_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier != nullptr)
		*CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier = Parms.CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier;

	if (CallFunc_GreaterEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_DoubleDouble_ReturnValue = Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp;

	if (CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha = Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1;

	if (CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1 != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1 = Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1;

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue_1 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_1 = Parms.CallFunc_BooleanAND_ReturnValue_1;

	if (CallFunc_SelectFloat_ReturnValue_1 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_1 = Parms.CallFunc_SelectFloat_ReturnValue_1;

	if (CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	if (CallFunc_SelectFloat_B_ImplicitCast != nullptr)
		*CallFunc_SelectFloat_B_ImplicitCast = Parms.CallFunc_SelectFloat_B_ImplicitCast;

	if (CallFunc_Lerp_B_ImplicitCast != nullptr)
		*CallFunc_Lerp_B_ImplicitCast = Parms.CallFunc_Lerp_B_ImplicitCast;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyPitchBasedModifier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierPitchBasedModifier                                               (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               bShouldApplyModifier                                             (EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bShouldLerp                                                      (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             LerpAlpha                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FMax_ReturnValue                                        (Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue_1                                      (Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FMin_ReturnValue                                        (EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue_1                                      (EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue         (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue_1                        (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_InRange_FloatFloat_Value_ImplicitCast                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_InRange_FloatFloat_Value_ImplicitCast_1                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, SubobjectReference)

double UASACameraFunctionLibrary_C::ShouldApplyPitchBasedModifier(class UObject* __WorldContext, bool bShouldApplyModifier, bool bShouldLerp, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, double* CallFunc_FMin_ReturnValue, double* CallFunc_FMin_ReturnValue_1, const struct FRotator& CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_InRange_FloatFloat_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue_1, double CallFunc_InRange_FloatFloat_Value_ImplicitCast, double CallFunc_InRange_FloatFloat_Value_ImplicitCast_1, double CallFunc_MapRangeClamped_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ShouldApplyPitchBasedModifier");

	Params::UASACameraFunctionLibrary_C_ShouldApplyPitchBasedModifier_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.bShouldApplyModifier = bShouldApplyModifier;
	Parms.bShouldLerp = bShouldLerp;
	Parms.CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue = CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue = CallFunc_InRange_FloatFloat_ReturnValue;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue_1 = CallFunc_InRange_FloatFloat_ReturnValue_1;
	Parms.CallFunc_InRange_FloatFloat_Value_ImplicitCast = CallFunc_InRange_FloatFloat_Value_ImplicitCast;
	Parms.CallFunc_InRange_FloatFloat_Value_ImplicitCast_1 = CallFunc_InRange_FloatFloat_Value_ImplicitCast_1;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	if (CallFunc_BreakVector2D_X_1 != nullptr)
		*CallFunc_BreakVector2D_X_1 = Parms.CallFunc_BreakVector2D_X_1;

	if (CallFunc_BreakVector2D_Y_1 != nullptr)
		*CallFunc_BreakVector2D_Y_1 = Parms.CallFunc_BreakVector2D_Y_1;

	if (CallFunc_FMin_ReturnValue != nullptr)
		*CallFunc_FMin_ReturnValue = Parms.CallFunc_FMin_ReturnValue;

	if (CallFunc_FMin_ReturnValue_1 != nullptr)
		*CallFunc_FMin_ReturnValue_1 = Parms.CallFunc_FMin_ReturnValue_1;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToInterpParams
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   InterpParamsX                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   InterpParamsY                                                    (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   InterpParamsZ                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             PitchModifierAlpha                                               (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bOverrideInterpParams                                            (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   FinalInterpParams                                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   InterpParamsToModify                                             (Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              FoundEntryIndex                                                  (BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_1                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp               (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_2                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue_1                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Lerp_ReturnValue_2                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference, RepNotify, Interp)
// struct FPrimalCameraInterpParams   K2Node_MakeStruct_PrimalCameraInterpParams                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Lerp_A_ImplicitCast_2                                   (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_Lerp_B_ImplicitCast_2                                   (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              K2Node_MakeStruct_SpringStiffness_ImplicitCast                   (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_TargetVelocity_ImplicitCast                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_CriticalDamping_ImplicitCast                   (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UASACameraFunctionLibrary_C::ApplyPitchBasedModifierToInterpParams(class UObject* __WorldContext, bool bOverrideInterpParams, struct FPrimalCameraInterpParams* FinalInterpParams, bool* CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier, bool* CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp, double* CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue_1, double* CallFunc_SelectFloat_ReturnValue, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_Lerp_A_ImplicitCast_2, double* CallFunc_SelectFloat_B_ImplicitCast, double* CallFunc_Lerp_B_ImplicitCast, double* CallFunc_Lerp_B_ImplicitCast_1, double* CallFunc_Lerp_B_ImplicitCast_2, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyPitchBasedModifierToInterpParams");

	Params::UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToInterpParams_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.bOverrideInterpParams = bOverrideInterpParams;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_Lerp_A_ImplicitCast_1 = CallFunc_Lerp_A_ImplicitCast_1;
	Parms.CallFunc_Lerp_A_ImplicitCast_2 = CallFunc_Lerp_A_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

	if (FinalInterpParams != nullptr)
		*FinalInterpParams = std::move(Parms.FinalInterpParams);

	if (CallFunc_NotEqual_ByteByte_ReturnValue != nullptr)
		*CallFunc_NotEqual_ByteByte_ReturnValue = Parms.CallFunc_NotEqual_ByteByte_ReturnValue;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier;

	if (CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp = Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp;

	if (CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha != nullptr)
		*CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha = Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue_1 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_1 = Parms.CallFunc_BooleanAND_ReturnValue_1;

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_SelectFloat_B_ImplicitCast != nullptr)
		*CallFunc_SelectFloat_B_ImplicitCast = Parms.CallFunc_SelectFloat_B_ImplicitCast;

	if (CallFunc_Lerp_B_ImplicitCast != nullptr)
		*CallFunc_Lerp_B_ImplicitCast = Parms.CallFunc_Lerp_B_ImplicitCast;

	if (CallFunc_Lerp_B_ImplicitCast_1 != nullptr)
		*CallFunc_Lerp_B_ImplicitCast_1 = Parms.CallFunc_Lerp_B_ImplicitCast_1;

	if (CallFunc_Lerp_B_ImplicitCast_2 != nullptr)
		*CallFunc_Lerp_B_ImplicitCast_2 = Parms.CallFunc_Lerp_B_ImplicitCast_2;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLengthInterpParams
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParams                                                  (BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)

struct FPrimalCameraParams UASACameraFunctionLibrary_C::FinalOverrideCameraArmLengthInterpParams(const struct FPrimalCameraInterpParams& OutInterpParams, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "FinalOverrideCameraArmLengthInterpParams");

	Params::UASACameraFunctionLibrary_C_FinalOverrideCameraArmLengthInterpParams_Params Parms{};

	Parms.OutInterpParams = OutInterpParams;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLength
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CharacterToKeepOnScreen                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CurrentCameraArmLength                                           (Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             DesiredCameraArmLength                                           (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             ScreenAreaToUse                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bStopLoop                                                        (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               VelocityIsNearlyZero                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector                     WorldLocationToProject                                           (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CharacterScreenAreaY                                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CharacterScreenAreaX                                             (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

double UASACameraFunctionLibrary_C::FinalOverrideCameraArmLength(double CurrentCameraArmLength, double DesiredCameraArmLength, class UObject* __WorldContext, bool bStopLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "FinalOverrideCameraArmLength");

	Params::UASACameraFunctionLibrary_C_FinalOverrideCameraArmLength_Params Parms{};

	Parms.CurrentCameraArmLength = CurrentCameraArmLength;
	Parms.DesiredCameraArmLength = DesiredCameraArmLength;
	Parms.__WorldContext = __WorldContext;
	Parms.bStopLoop = bStopLoop;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.Final Override Pivot Interp Params
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraPivotZInterpOverridesPivotZInterpOverrides                                            (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   LastPivotInterpParamsX                                           (BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   LastPivotInterpParamsY                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   LastPivotInterpParamsZ                                           (ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   PivotInterpParamsX                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   PivotInterpParamsY                                               (Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   PivotInterpParamsZ                                               (ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             PrintModifierAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             TheScreenArea                                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CharScreenAreaY                                                  (BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CharScreenAreaX                                                  (Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              EntryIndexForLerping                                             (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bFoundInterpRange                                                (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             LerpAlpha                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsTimeSince_ReturnValue_1                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsProneOrSitting_ReturnValue                            (Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue_2                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsCrouching_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue         (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (Edit, Net, Parm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (Edit, Net, Parm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (Edit, Net, Parm, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// struct FPrimalCameraInterpParams   K2Node_MakeStruct_PrimalCameraInterpParams                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_1                        (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_2                        (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_InterpSpeed_ImplicitCast                      (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_FInterpTo_InterpSpeed_ImplicitCast_1                    (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_InterpSpeed_ImplicitCast_2                    (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Target_ImplicitCast                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Target_ImplicitCast_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Target_ImplicitCast_2                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              K2Node_MakeStruct_TargetVelocity_ImplicitCast                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_CriticalDamping_ImplicitCast                   (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_SpringStiffness_ImplicitCast                   (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UASACameraFunctionLibrary_C::Final_Override_Pivot_Interp_Params(struct FPrimalCameraPivotZInterpOverrides* PivotZInterpOverrides, class UObject* __WorldContext, bool bFoundInterpRange, bool CallFunc_Not_PreBool_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, bool* CallFunc_IsTimeSince_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_IsTimeSince_ReturnValue_1, bool* CallFunc_IsProneOrSitting_ReturnValue, bool* CallFunc_IsTimeSince_ReturnValue_2, bool* CallFunc_IsCrouching_ReturnValue, bool* CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_2, double CallFunc_FInterpTo_Current_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast_1, double CallFunc_FInterpTo_Current_ImplicitCast_2, double CallFunc_FInterpTo_InterpSpeed_ImplicitCast, double CallFunc_FInterpTo_InterpSpeed_ImplicitCast_1, double CallFunc_FInterpTo_InterpSpeed_ImplicitCast_2, double CallFunc_FInterpTo_Target_ImplicitCast, double* CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_FInterpTo_Target_ImplicitCast_1, double CallFunc_FInterpTo_Target_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "Final Override Pivot Interp Params");

	Params::UASACameraFunctionLibrary_C_Final_Override_Pivot_Interp_Params_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.bFoundInterpRange = bFoundInterpRange;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue_2 = CallFunc_FInterpTo_ReturnValue_2;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast = CallFunc_FInterpTo_Current_ImplicitCast;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_1 = CallFunc_FInterpTo_Current_ImplicitCast_1;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_2 = CallFunc_FInterpTo_Current_ImplicitCast_2;
	Parms.CallFunc_FInterpTo_InterpSpeed_ImplicitCast = CallFunc_FInterpTo_InterpSpeed_ImplicitCast;
	Parms.CallFunc_FInterpTo_InterpSpeed_ImplicitCast_1 = CallFunc_FInterpTo_InterpSpeed_ImplicitCast_1;
	Parms.CallFunc_FInterpTo_InterpSpeed_ImplicitCast_2 = CallFunc_FInterpTo_InterpSpeed_ImplicitCast_2;
	Parms.CallFunc_FInterpTo_Target_ImplicitCast = CallFunc_FInterpTo_Target_ImplicitCast;
	Parms.CallFunc_FInterpTo_Target_ImplicitCast_1 = CallFunc_FInterpTo_Target_ImplicitCast_1;
	Parms.CallFunc_FInterpTo_Target_ImplicitCast_2 = CallFunc_FInterpTo_Target_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

	if (PivotZInterpOverrides != nullptr)
		*PivotZInterpOverrides = std::move(Parms.PivotZInterpOverrides);

	if (K2Node_DynamicCast_AsShooter_Character != nullptr)
		*K2Node_DynamicCast_AsShooter_Character = Parms.K2Node_DynamicCast_AsShooter_Character;

	if (CallFunc_IsTimeSince_ReturnValue != nullptr)
		*CallFunc_IsTimeSince_ReturnValue = Parms.CallFunc_IsTimeSince_ReturnValue;

	if (CallFunc_IsTimeSince_ReturnValue_1 != nullptr)
		*CallFunc_IsTimeSince_ReturnValue_1 = Parms.CallFunc_IsTimeSince_ReturnValue_1;

	if (CallFunc_IsProneOrSitting_ReturnValue != nullptr)
		*CallFunc_IsProneOrSitting_ReturnValue = Parms.CallFunc_IsProneOrSitting_ReturnValue;

	if (CallFunc_IsTimeSince_ReturnValue_2 != nullptr)
		*CallFunc_IsTimeSince_ReturnValue_2 = Parms.CallFunc_IsTimeSince_ReturnValue_2;

	if (CallFunc_IsCrouching_ReturnValue != nullptr)
		*CallFunc_IsCrouching_ReturnValue = Parms.CallFunc_IsCrouching_ReturnValue;

	if (CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue != nullptr)
		*CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue = Parms.CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue;

	if (CallFunc_Less_DoubleDouble_B_ImplicitCast != nullptr)
		*CallFunc_Less_DoubleDouble_B_ImplicitCast = Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyModifiersToInterpParams
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraParams         CameraParams                                                     (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   InterpParams                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FPrimalCameraInterpScreenAreaModifier>InterpParamsModifiers                                            (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class FName                        DebugScreenModifierId                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               bIsCrouchedOrProne                                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpScreenAreaModifierScreenModifierForDebug                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             PrintModifierAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             TheScreenArea                                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CharScreenAreaY                                                  (BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CharScreenAreaX                                                  (Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              EntryIndexForLerping                                             (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bFoundInterpRange                                                (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             LerpAlpha                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsCrouching_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsProneOrSitting_ReturnValue                            (Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue_1                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FPrimalCameraInterpScreenAreaModifierCallFunc_Array_Get_Item                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue                                        (EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FMax_ReturnValue_1                                      (Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FMin_ReturnValue_1                                      (EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue_1                        (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_WorldLocationToScreenArea_ScreenAreaX                   (Edit, Net, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_WorldLocationToScreenArea_ScreenAreaY                   (Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_WorldLocationToScreenArea_ViewportSizeX                 (Edit, ConstParm, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_WorldLocationToScreenArea_ViewportSizeY                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_WorldLocationToScreenArea_ScreenRawPosX                 (Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_WorldLocationToScreenArea_ScreenRawPosY                 (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FPrimalCameraInterpParams   K2Node_Select_Default                                            (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue_1                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Lerp_ReturnValue_2                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference, RepNotify, Interp)
// struct FPrimalCameraInterpParams   K2Node_MakeStruct_PrimalCameraInterpParams                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_Lerp_B_ImplicitCast_2                                   (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Lerp_A_ImplicitCast_2                                   (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              K2Node_MakeStruct_SpringStiffness_ImplicitCast                   (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_TargetVelocity_ImplicitCast                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_CriticalDamping_ImplicitCast                   (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UASACameraFunctionLibrary_C::ApplyModifiersToInterpParams(class UObject* __WorldContext, bool bIsCrouchedOrProne, bool bFoundInterpRange, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, bool* CallFunc_IsCrouching_ReturnValue, bool* CallFunc_IsProneOrSitting_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool* CallFunc_IsTimeSince_ReturnValue, bool* CallFunc_IsTimeSince_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, double* CallFunc_FMin_ReturnValue, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, double* CallFunc_FMin_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue_1, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, bool* Temp_bool_Variable, bool CallFunc_Array_IsValidIndex_ReturnValue, struct FPrimalCameraInterpParams* K2Node_Select_Default, double* CallFunc_SelectFloat_ReturnValue, double* CallFunc_SelectFloat_B_ImplicitCast, double* CallFunc_Lerp_B_ImplicitCast, double* CallFunc_Lerp_B_ImplicitCast_1, double* CallFunc_Lerp_B_ImplicitCast_2, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_Lerp_A_ImplicitCast_2, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyModifiersToInterpParams");

	Params::UASACameraFunctionLibrary_C_ApplyModifiersToInterpParams_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.bIsCrouchedOrProne = bIsCrouchedOrProne;
	Parms.bFoundInterpRange = bFoundInterpRange;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue = CallFunc_InRange_FloatFloat_ReturnValue;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue_1 = CallFunc_InRange_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_Lerp_A_ImplicitCast_1 = CallFunc_Lerp_A_ImplicitCast_1;
	Parms.CallFunc_Lerp_A_ImplicitCast_2 = CallFunc_Lerp_A_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_K2_GetActorLocation_ReturnValue != nullptr)
		*CallFunc_K2_GetActorLocation_ReturnValue = std::move(Parms.CallFunc_K2_GetActorLocation_ReturnValue);

	if (K2Node_DynamicCast_AsShooter_Character != nullptr)
		*K2Node_DynamicCast_AsShooter_Character = Parms.K2Node_DynamicCast_AsShooter_Character;

	if (CallFunc_IsCrouching_ReturnValue != nullptr)
		*CallFunc_IsCrouching_ReturnValue = Parms.CallFunc_IsCrouching_ReturnValue;

	if (CallFunc_IsProneOrSitting_ReturnValue != nullptr)
		*CallFunc_IsProneOrSitting_ReturnValue = Parms.CallFunc_IsProneOrSitting_ReturnValue;

	if (CallFunc_IsTimeSince_ReturnValue != nullptr)
		*CallFunc_IsTimeSince_ReturnValue = Parms.CallFunc_IsTimeSince_ReturnValue;

	if (CallFunc_IsTimeSince_ReturnValue_1 != nullptr)
		*CallFunc_IsTimeSince_ReturnValue_1 = Parms.CallFunc_IsTimeSince_ReturnValue_1;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	if (CallFunc_FMin_ReturnValue != nullptr)
		*CallFunc_FMin_ReturnValue = Parms.CallFunc_FMin_ReturnValue;

	if (CallFunc_BreakVector2D_X_1 != nullptr)
		*CallFunc_BreakVector2D_X_1 = Parms.CallFunc_BreakVector2D_X_1;

	if (CallFunc_BreakVector2D_Y_1 != nullptr)
		*CallFunc_BreakVector2D_Y_1 = Parms.CallFunc_BreakVector2D_Y_1;

	if (CallFunc_FMin_ReturnValue_1 != nullptr)
		*CallFunc_FMin_ReturnValue_1 = Parms.CallFunc_FMin_ReturnValue_1;

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue_1 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_1 = Parms.CallFunc_BooleanAND_ReturnValue_1;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_SelectFloat_B_ImplicitCast != nullptr)
		*CallFunc_SelectFloat_B_ImplicitCast = Parms.CallFunc_SelectFloat_B_ImplicitCast;

	if (CallFunc_Lerp_B_ImplicitCast != nullptr)
		*CallFunc_Lerp_B_ImplicitCast = Parms.CallFunc_Lerp_B_ImplicitCast;

	if (CallFunc_Lerp_B_ImplicitCast_1 != nullptr)
		*CallFunc_Lerp_B_ImplicitCast_1 = Parms.CallFunc_Lerp_B_ImplicitCast_1;

	if (CallFunc_Lerp_B_ImplicitCast_2 != nullptr)
		*CallFunc_Lerp_B_ImplicitCast_2 = Parms.CallFunc_Lerp_B_ImplicitCast_2;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.WorldLocationToScreenArea
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector                     WorldLocationToProject                                           (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             ScreenAreaX                                                      (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             ScreenAreaY                                                      (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             ViewportSizeX                                                    (Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             ViewportSizeY                                                    (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             ScreenRawPosX                                                    (Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             ScreenRawPosY                                                    (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_CastToPlayerController_ReturnValue                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_ProjectWorldToScreen_ScreenPosition                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_ProjectWorldToScreen_ReturnValue                        (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometry                   CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_GetAbsoluteSize_ReturnValue                             (Edit, ConstParm, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_X_1                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast_1                     (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)

bool UASACameraFunctionLibrary_C::WorldLocationToScreenArea(class UObject* __WorldContext, struct FVector2D* CallFunc_ProjectWorldToScreen_ScreenPosition, bool* CallFunc_ProjectWorldToScreen_ReturnValue, const struct FGeometry& CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetAbsoluteSize_ReturnValue, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, bool* CallFunc_BooleanAND_ReturnValue, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "WorldLocationToScreenArea");

	Params::UASACameraFunctionLibrary_C_WorldLocationToScreenArea_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue = CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue;
	Parms.CallFunc_GetAbsoluteSize_ReturnValue = CallFunc_GetAbsoluteSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_ProjectWorldToScreen_ScreenPosition != nullptr)
		*CallFunc_ProjectWorldToScreen_ScreenPosition = std::move(Parms.CallFunc_ProjectWorldToScreen_ScreenPosition);

	if (CallFunc_ProjectWorldToScreen_ReturnValue != nullptr)
		*CallFunc_ProjectWorldToScreen_ReturnValue = Parms.CallFunc_ProjectWorldToScreen_ReturnValue;

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	if (CallFunc_BreakVector2D_X_1 != nullptr)
		*CallFunc_BreakVector2D_X_1 = Parms.CallFunc_BreakVector2D_X_1;

	if (CallFunc_BreakVector2D_Y_1 != nullptr)
		*CallFunc_BreakVector2D_Y_1 = Parms.CallFunc_BreakVector2D_Y_1;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


