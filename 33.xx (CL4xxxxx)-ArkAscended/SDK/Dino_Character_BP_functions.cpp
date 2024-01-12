#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dino_Character_BP.Dino_Character_BP_C
// (Actor, Pawn)

class UClass* ADino_Character_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dino_Character_BP_C");

	return Clss;
}


// Dino_Character_BP_C Dino_Character_BP.Default__Dino_Character_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADino_Character_BP_C* ADino_Character_BP_C::GetDefaultObj()
{
	static class ADino_Character_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADino_Character_BP_C*>(ADino_Character_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CurrentCameraPivotLocation                                       (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     DesiredCameraPivotLocation                                       (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ADino_Character_BP_C::BPOverrideCameraDesiredPivotLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraDesiredPivotLocation");

	Params::ADino_Character_BP_C_BPOverrideCameraDesiredPivotLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotRotation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CurrentCameraPivotRotation                                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    DesiredCameraPivotRotation                                       (EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

bool ADino_Character_BP_C::BPOverrideCameraDesiredPivotRotation(float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FRotator* CallFunc_MakeRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraDesiredPivotRotation");

	Params::ADino_Character_BP_C_BPOverrideCameraDesiredPivotRotation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_MakeRotator_ReturnValue != nullptr)
		*CallFunc_MakeRotator_ReturnValue = std::move(Parms.CallFunc_MakeRotator_ReturnValue);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FVector                     DesiredCameraOffset                                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ADino_Character_BP_C::BPOverrideCameraDesiredPivotOffset(const struct FPrimalCameraParams& CameraParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraDesiredPivotOffset");

	Params::ADino_Character_BP_C_BPOverrideCameraDesiredPivotOffset_Params Parms{};

	Parms.CameraParams = CameraParams;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraPivotLocationInterpParams
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraPivotZInterpOverridesPivotZInterpOverrides                                            (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   LastInterpParamsX                                                (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   LastInterpParamsY                                                (Edit, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   LastInterpParamsZ                                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParamsX                                                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParamsY                                                 (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParamsZ                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ADino_Character_BP_C::BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraPivotLocationInterpParams");

	Params::ADino_Character_BP_C_BPOverrideCameraPivotLocationInterpParams_Params Parms{};

	Parms.CameraParams = CameraParams;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLengthInterpParams
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParams                                                  (BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ADino_Character_BP_C::BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraParams& CameraParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraArmLengthInterpParams");

	Params::ADino_Character_BP_C_BPOverrideCameraArmLengthInterpParams_Params Parms{};

	Parms.CameraParams = CameraParams;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLength
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              CurrentCameraArmLength                                           (BlueprintVisible, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              DesiredCameraArmLength                                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast(Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ADino_Character_BP_C::BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, double CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast, double* CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraArmLength");

	Params::ADino_Character_BP_C_BPOverrideCameraArmLength_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast = CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast != nullptr)
		*CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast = Parms.CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.GetFXBloodColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Split_LeftS                                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Split_RightS                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Split_ReturnValue                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FLinearColor                CallFunc_GetFXBloodColor_ReturnValue                             (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLinearColor ADino_Character_BP_C::GetFXBloodColor(class FString* CallFunc_GetDisplayName_ReturnValue, class FString* CallFunc_Split_LeftS, class FString* CallFunc_Split_RightS, bool* CallFunc_Split_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "GetFXBloodColor");

	Params::ADino_Character_BP_C_GetFXBloodColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetDisplayName_ReturnValue != nullptr)
		*CallFunc_GetDisplayName_ReturnValue = std::move(Parms.CallFunc_GetDisplayName_ReturnValue);

	if (CallFunc_Split_LeftS != nullptr)
		*CallFunc_Split_LeftS = std::move(Parms.CallFunc_Split_LeftS);

	if (CallFunc_Split_RightS != nullptr)
		*CallFunc_Split_RightS = std::move(Parms.CallFunc_Split_RightS);

	if (CallFunc_Split_ReturnValue != nullptr)
		*CallFunc_Split_ReturnValue = Parms.CallFunc_Split_ReturnValue;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BlueprintOverrideWantsToRun
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInputWantsToRun                                                 (Edit, Net, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               RetVal                                                           (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BlueprintOverrideWantsToRun_ReturnValue                 (ExportObject, Net, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_K2_TimerExists_ReturnValue                              (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsWildSlow_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_GetNetworkTimeInSeconds_ReturnValue                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_FollowingRunDistance_ImplicitCast             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

float ADino_Character_BP_C::BlueprintOverrideWantsToRun(bool* bInputWantsToRun, bool* CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_K2_TimerExists_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BlueprintOverrideWantsToRun");

	Params::ADino_Character_BP_C_BlueprintOverrideWantsToRun_Params Parms{};

	Parms.CallFunc_K2_TimerExists_ReturnValue = CallFunc_K2_TimerExists_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bInputWantsToRun != nullptr)
		*bInputWantsToRun = Parms.bInputWantsToRun;

	if (CallFunc_EqualEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_EqualEqual_DoubleDouble_ReturnValue = Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue;

	if (CallFunc_SwitchNetworkMode_OutNetworkMode != nullptr)
		*CallFunc_SwitchNetworkMode_OutNetworkMode = Parms.CallFunc_SwitchNetworkMode_OutNetworkMode;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.UpdateBabyAndRunValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
// class ADino_AIController_BP_C*     K2Node_DynamicCast_AsDino_AIController_BP                        (Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsWildSlow_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class AAIController*               CallFunc_GetAIController_ReturnValue_1                           (Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_FollowStoppingDistance_ImplicitCast           (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_FollowingRunDistance_ImplicitCast             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast              (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_FollowStoppingDistance_ImplicitCast_1         (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// float                              K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// float                              K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_1            (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// float                              K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_2            (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, RepNotify, Interp)

float ADino_Character_BP_C::UpdateBabyAndRunValues(int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess_1, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "UpdateBabyAndRunValues");

	Params::ADino_Character_BP_C_UpdateBabyAndRunValues_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_SwitchNetworkMode_OutNetworkMode != nullptr)
		*CallFunc_SwitchNetworkMode_OutNetworkMode = Parms.CallFunc_SwitchNetworkMode_OutNetworkMode;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPControlRigNotify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        NotifyName                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        NotifyCustomTag                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FHitResult                  WorldSpaceHitResult                                              (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// struct FVector                     Velocity                                                         (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)

struct FVector ADino_Character_BP_C::BPControlRigNotify(class FName NotifyName, struct FHitResult* WorldSpaceHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPControlRigNotify");

	Params::ADino_Character_BP_C_BPControlRigNotify_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

	if (WorldSpaceHitResult != nullptr)
		*WorldSpaceHitResult = std::move(Parms.WorldSpaceHitResult);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.GetDinoContentData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDinoContentData            DinoContentData                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, DuplicateTransient)

struct FDinoContentData ADino_Character_BP_C::GetDinoContentData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "GetDinoContentData");

	Params::ADino_Character_BP_C_GetDinoContentData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPHandleRightShoulderButton
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// TArray<class APrimalBuff*>         CallFunc_GetBuffs_TheBuffs                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
// class APrimalBuff*                 CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class ABuff_DinoTekHelmet_Base_C*  K2Node_DynamicCast_AsBuff_Dino_Tek_Helmet_Base                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool ADino_Character_BP_C::BPHandleRightShoulderButton(class APrimalBuff** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPHandleRightShoulderButton");

	Params::ADino_Character_BP_C_BPHandleRightShoulderButton_Params Parms{};

	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.UpdateWildBabyNextRunTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::UpdateWildBabyNextRunTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "UpdateWildBabyNextRunTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BlendSpaceGenerated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBlendSpace*                 BlendSpace                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig)

void ADino_Character_BP_C::BlendSpaceGenerated(class UBlendSpace** BlendSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BlendSpaceGenerated");

	Params::ADino_Character_BP_C_BlendSpaceGenerated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BlendSpace != nullptr)
		*BlendSpace = Parms.BlendSpace;

}


// Function Dino_Character_BP.Dino_Character_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.EditorBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::EditorBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "EditorBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BP_OnSetDeath
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::BP_OnSetDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BP_OnSetDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPBecomeBaby
// (Event, Public, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::BPBecomeBaby()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPBecomeBaby");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.ReceiveDestroyed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPTriggerStasisEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::BPTriggerStasisEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPTriggerStasisEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPSpawnAttackerDamageImpactFX
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        SocketName                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class APrimalCharacter*            VictimChar                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class APrimalCharacter* ADino_Character_BP_C::BPSpawnAttackerDamageImpactFX(class FName* SocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPSpawnAttackerDamageImpactFX");

	Params::ADino_Character_BP_C_BPSpawnAttackerDamageImpactFX_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SocketName != nullptr)
		*SocketName = Parms.SocketName;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPBecomeAdult
// (Event, Public, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::BPBecomeAdult()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPBecomeAdult");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPNotifyClaimed
// (Event, Public, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::BPNotifyClaimed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPNotifyClaimed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.ExecuteUbergraph_Dino_Character_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_TimeSeconds_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class ADino_Character_BP_C*        K2Node_DynamicCast_AsDino_Character_BP                           (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UBlendSpace*                 K2Node_Event_blendSpace                                          (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Contains_ReturnValue                                    (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Contains_ReturnValue_2                                  (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Contains_ReturnValue_3                                  (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, NonTransactional)
// bool                               CallFunc_Contains_ReturnValue_4                                  (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// TArray<class USceneComponent*>     CallFunc_GetComponentsByTag_ReturnValue                          (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class USceneComponent*             K2Node_DynamicCast_AsScene_Component                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (Net, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (BlueprintVisible, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_DoesUseHibernation_ReturnValue                          (Edit, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
// class FName                        K2Node_Event_SocketName                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// class APrimalCharacter*            K2Node_Event_VictimChar                                          (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FLinearColor                CallFunc_GetFXBloodColor_ReturnValue                             (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_GetNetworkTimeInSeconds_ReturnValue                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FName                        Temp_name_Variable                                               (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue                                        (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        Temp_name_Variable_1                                             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// class FName                        Temp_name_Variable_2                                             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// class FName                        Temp_name_Variable_3                                             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, NonTransactional)
// class FName                        Temp_name_Variable_4                                             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_SetLifeSpan_InLifespan_ImplicitCast                     (ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_2                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SelectFloat_B_ImplicitCast_1                            (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_A_ImplicitCast_1                            (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_3                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)

double ADino_Character_BP_C::ExecuteUbergraph_Dino_Character_BP(struct FVector* CallFunc_GetVelocity_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, float* CallFunc_TimeSeconds_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_Contains_ReturnValue_4, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode, class UActorComponent** CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess_1, int32* CallFunc_Array_Length_ReturnValue, class UNiagaraComponent** CallFunc_SpawnSystemAttached_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, class FName* Temp_name_Variable, class FName* Temp_name_Variable_1, class FName* Temp_name_Variable_2, class FName* Temp_name_Variable_3, class FName* Temp_name_Variable_4, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_SelectFloat_B_ImplicitCast, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast_2, double CallFunc_SelectFloat_B_ImplicitCast_1, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast_3, float CallFunc_SetVariableFloat_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "ExecuteUbergraph_Dino_Character_BP");

	Params::ADino_Character_BP_C_ExecuteUbergraph_Dino_Character_BP_Params Parms{};

	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue_2 = CallFunc_Contains_ReturnValue_2;
	Parms.CallFunc_Contains_ReturnValue_3 = CallFunc_Contains_ReturnValue_3;
	Parms.CallFunc_Contains_ReturnValue_4 = CallFunc_Contains_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_1 = CallFunc_SelectFloat_B_ImplicitCast_1;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetVelocity_ReturnValue != nullptr)
		*CallFunc_GetVelocity_ReturnValue = std::move(Parms.CallFunc_GetVelocity_ReturnValue);

	if (CallFunc_TimeSeconds_ReturnValue != nullptr)
		*CallFunc_TimeSeconds_ReturnValue = Parms.CallFunc_TimeSeconds_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_SwitchNetworkMode_OutNetworkMode != nullptr)
		*CallFunc_SwitchNetworkMode_OutNetworkMode = Parms.CallFunc_SwitchNetworkMode_OutNetworkMode;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_SpawnSystemAttached_ReturnValue != nullptr)
		*CallFunc_SpawnSystemAttached_ReturnValue = Parms.CallFunc_SpawnSystemAttached_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (Temp_name_Variable != nullptr)
		*Temp_name_Variable = Parms.Temp_name_Variable;

	if (Temp_name_Variable_1 != nullptr)
		*Temp_name_Variable_1 = Parms.Temp_name_Variable_1;

	if (Temp_name_Variable_2 != nullptr)
		*Temp_name_Variable_2 = Parms.Temp_name_Variable_2;

	if (Temp_name_Variable_3 != nullptr)
		*Temp_name_Variable_3 = Parms.Temp_name_Variable_3;

	if (Temp_name_Variable_4 != nullptr)
		*Temp_name_Variable_4 = Parms.Temp_name_Variable_4;

	if (CallFunc_Greater_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Greater_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	if (CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 != nullptr)
		*CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;

	if (CallFunc_Greater_DoubleDouble_A_ImplicitCast_2 != nullptr)
		*CallFunc_Greater_DoubleDouble_A_ImplicitCast_2 = Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;

	if (CallFunc_Greater_DoubleDouble_A_ImplicitCast_3 != nullptr)
		*CallFunc_Greater_DoubleDouble_A_ImplicitCast_3 = Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_3;

	return Parms.ReturnValue;

}

}


