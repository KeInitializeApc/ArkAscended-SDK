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
// struct FVector                     CurrentCameraPivotLocation                                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     DesiredCameraPivotLocation                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ADino_Character_BP_C::BPOverrideCameraDesiredPivotLocation(const struct FVector& CurrentCameraPivotLocation, const struct FVector& DesiredCameraPivotLocation, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraDesiredPivotLocation");

	Params::ADino_Character_BP_C_BPOverrideCameraDesiredPivotLocation_Params Parms{};

	Parms.CurrentCameraPivotLocation = CurrentCameraPivotLocation;
	Parms.DesiredCameraPivotLocation = DesiredCameraPivotLocation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotRotation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CurrentCameraPivotRotation                                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    DesiredCameraPivotRotation                                       (ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

struct FRotator ADino_Character_BP_C::BPOverrideCameraDesiredPivotRotation(const struct FRotator& CurrentCameraPivotRotation, const struct FRotator& DesiredCameraPivotRotation, bool ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraDesiredPivotRotation");

	Params::ADino_Character_BP_C_BPOverrideCameraDesiredPivotRotation_Params Parms{};

	Parms.CurrentCameraPivotRotation = CurrentCameraPivotRotation;
	Parms.DesiredCameraPivotRotation = DesiredCameraPivotRotation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// struct FVector                     DesiredCameraOffset                                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FPrimalCameraParams ADino_Character_BP_C::BPOverrideCameraDesiredPivotOffset(const struct FVector& DesiredCameraOffset, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraDesiredPivotOffset");

	Params::ADino_Character_BP_C_BPOverrideCameraDesiredPivotOffset_Params Parms{};

	Parms.DesiredCameraOffset = DesiredCameraOffset;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraPivotLocationInterpParams
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// struct FPrimalCameraPivotZInterpOverridesPivotZInterpOverrides                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   LastInterpParamsX                                                (Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   LastInterpParamsY                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   LastInterpParamsZ                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParamsX                                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParamsY                                                 (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParamsZ                                                 (ConstParm, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FPrimalCameraParams ADino_Character_BP_C::BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, const struct FPrimalCameraInterpParams& OutInterpParamsX, const struct FPrimalCameraInterpParams& OutInterpParamsY, const struct FPrimalCameraInterpParams& OutInterpParamsZ, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraPivotLocationInterpParams");

	Params::ADino_Character_BP_C_BPOverrideCameraPivotLocationInterpParams_Params Parms{};

	Parms.PivotZInterpOverrides = PivotZInterpOverrides;
	Parms.LastInterpParamsX = LastInterpParamsX;
	Parms.LastInterpParamsY = LastInterpParamsY;
	Parms.LastInterpParamsZ = LastInterpParamsZ;
	Parms.OutInterpParamsX = OutInterpParamsX;
	Parms.OutInterpParamsY = OutInterpParamsY;
	Parms.OutInterpParamsZ = OutInterpParamsZ;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLengthInterpParams
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParams                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FPrimalCameraParams ADino_Character_BP_C::BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraInterpParams& OutInterpParams, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraArmLengthInterpParams");

	Params::ADino_Character_BP_C_BPOverrideCameraArmLengthInterpParams_Params Parms{};

	Parms.OutInterpParams = OutInterpParams;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLength
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              CurrentCameraArmLength                                           (ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              DesiredCameraArmLength                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

double ADino_Character_BP_C::BPOverrideCameraArmLength(float CurrentCameraArmLength, float DesiredCameraArmLength, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraArmLength");

	Params::ADino_Character_BP_C_BPOverrideCameraArmLength_Params Parms{};

	Parms.CurrentCameraArmLength = CurrentCameraArmLength;
	Parms.DesiredCameraArmLength = DesiredCameraArmLength;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.GetFXBloodColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Split_LeftS                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Split_RightS                                            (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Split_ReturnValue                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                CallFunc_GetFXBloodColor_ReturnValue                             (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

struct FLinearColor ADino_Character_BP_C::GetFXBloodColor(const struct FLinearColor& ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "GetFXBloodColor");

	Params::ADino_Character_BP_C_GetFXBloodColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BlueprintOverrideWantsToRun
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInputWantsToRun                                                 (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               RetVal                                                           (BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BlueprintOverrideWantsToRun_ReturnValue                 (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_K2_TimerExists_ReturnValue                              (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsWildSlow_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetNetworkTimeInSeconds_ReturnValue                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_FollowingRunDistance_ImplicitCast             (ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1           (ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

float ADino_Character_BP_C::BlueprintOverrideWantsToRun(bool ReturnValue, bool* RetVal, bool CallFunc_BlueprintOverrideWantsToRun_ReturnValue, struct FTimerHandle* CallFunc_K2_SetTimer_ReturnValue, bool* CallFunc_IsWildSlow_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_GetNetworkTimeInSeconds_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess, float* CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BlueprintOverrideWantsToRun");

	Params::ADino_Character_BP_C_BlueprintOverrideWantsToRun_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_BlueprintOverrideWantsToRun_ReturnValue = CallFunc_BlueprintOverrideWantsToRun_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetNetworkTimeInSeconds_ReturnValue = CallFunc_GetNetworkTimeInSeconds_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RetVal != nullptr)
		*RetVal = Parms.RetVal;

	if (CallFunc_K2_SetTimer_ReturnValue != nullptr)
		*CallFunc_K2_SetTimer_ReturnValue = std::move(Parms.CallFunc_K2_SetTimer_ReturnValue);

	if (CallFunc_IsWildSlow_ReturnValue != nullptr)
		*CallFunc_IsWildSlow_ReturnValue = Parms.CallFunc_IsWildSlow_ReturnValue;

	if (CallFunc_SwitchNetworkMode_OutNetworkMode != nullptr)
		*CallFunc_SwitchNetworkMode_OutNetworkMode = Parms.CallFunc_SwitchNetworkMode_OutNetworkMode;

	if (K2Node_SwitchEnum_CmpSuccess != nullptr)
		*K2Node_SwitchEnum_CmpSuccess = Parms.K2Node_SwitchEnum_CmpSuccess;

	if (CallFunc_K2_SetTimer_Time_ImplicitCast != nullptr)
		*CallFunc_K2_SetTimer_Time_ImplicitCast = Parms.CallFunc_K2_SetTimer_Time_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.UpdateBabyAndRunValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class ADino_AIController_BP_C*     K2Node_DynamicCast_AsDino_AIController_BP                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsWildSlow_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AAIController*               CallFunc_GetAIController_ReturnValue_1                           (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_FollowStoppingDistance_ImplicitCast           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_FollowingRunDistance_ImplicitCast             (ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_FollowStoppingDistance_ImplicitCast_1         (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1           (ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_1            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_2            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

float ADino_Character_BP_C::UpdateBabyAndRunValues(bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class AAIController* CallFunc_GetAIController_ReturnValue, bool* CallFunc_IsWildSlow_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue_1, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "UpdateBabyAndRunValues");

	Params::ADino_Character_BP_C_UpdateBabyAndRunValues_Params Parms{};

	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.CallFunc_GetAIController_ReturnValue_1 = CallFunc_GetAIController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsWildSlow_ReturnValue != nullptr)
		*CallFunc_IsWildSlow_ReturnValue = Parms.CallFunc_IsWildSlow_ReturnValue;

	if (CallFunc_SwitchNetworkMode_OutNetworkMode != nullptr)
		*CallFunc_SwitchNetworkMode_OutNetworkMode = Parms.CallFunc_SwitchNetworkMode_OutNetworkMode;

	if (K2Node_SwitchEnum_CmpSuccess != nullptr)
		*K2Node_SwitchEnum_CmpSuccess = Parms.K2Node_SwitchEnum_CmpSuccess;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPControlRigNotify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        NotifyName                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        NotifyCustomTag                                                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// struct FHitResult                  WorldSpaceHitResult                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Velocity                                                         (Edit, ReturnParm, Config, EditConst, SubobjectReference)

struct FVector ADino_Character_BP_C::BPControlRigNotify(class FName* NotifyCustomTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPControlRigNotify");

	Params::ADino_Character_BP_C_BPControlRigNotify_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NotifyCustomTag != nullptr)
		*NotifyCustomTag = Parms.NotifyCustomTag;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.GetDinoContentData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDinoContentData            DinoContentData                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)

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
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// TArray<class APrimalBuff*>         CallFunc_GetBuffs_TheBuffs                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalBuff*                 CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class ABuff_DinoTekHelmet_Base_C*  K2Node_DynamicCast_AsBuff_Dino_Tek_Helmet_Base                   (Edit, ConstParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)

int32 ADino_Character_BP_C::BPHandleRightShoulderButton(bool ReturnValue, int32 Temp_int_Loop_Counter_Variable, const TArray<class APrimalBuff*>& CallFunc_GetBuffs_TheBuffs, class APrimalBuff* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPHandleRightShoulderButton");

	Params::ADino_Character_BP_C_BPHandleRightShoulderButton_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetBuffs_TheBuffs = CallFunc_GetBuffs_TheBuffs;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

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
// class UBlendSpace*                 BlendSpace                                                       (ExportObject, Net, EditFixedSize, OutParm, EditConst, DuplicateTransient)

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
// class FName                        SocketName                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class APrimalCharacter*            VictimChar                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class FName ADino_Character_BP_C::BPSpawnAttackerDamageImpactFX(class APrimalCharacter** VictimChar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPSpawnAttackerDamageImpactFX");

	Params::ADino_Character_BP_C_BPSpawnAttackerDamageImpactFX_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (VictimChar != nullptr)
		*VictimChar = Parms.VictimChar;

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
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_TimeSeconds_ReturnValue                                 (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class ADino_Character_BP_C*        K2Node_DynamicCast_AsDino_Character_BP                           (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UBlendSpace*                 K2Node_Event_blendSpace                                          (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Contains_ReturnValue                                    (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Contains_ReturnValue_1                                  (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Contains_ReturnValue_2                                  (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Contains_ReturnValue_3                                  (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Contains_ReturnValue_4                                  (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// TArray<class USceneComponent*>     CallFunc_GetComponentsByTag_ReturnValue                          (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// class USceneComponent*             K2Node_DynamicCast_AsScene_Component                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_DoesUseHibernation_ReturnValue                          (Edit, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        K2Node_Event_SocketName                                          (Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_Event_VictimChar                                          (BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                CallFunc_GetFXBloodColor_ReturnValue                             (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetNetworkTimeInSeconds_ReturnValue                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FName                        Temp_name_Variable                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        Temp_name_Variable_1                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FName                        Temp_name_Variable_2                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FName                        Temp_name_Variable_3                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FName                        Temp_name_Variable_4                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_SetLifeSpan_InLifespan_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_2                   (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SelectFloat_B_ImplicitCast_1                            (Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_A_ImplicitCast_1                            (Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_3                   (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float ADino_Character_BP_C::ExecuteUbergraph_Dino_Character_BP(int32 EntryPoint, struct FVector* CallFunc_GetVelocity_ReturnValue, class UClass** CallFunc_GetObjectClass_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, float* CallFunc_PlayAnimMontage_ReturnValue, bool* CallFunc_Contains_ReturnValue, bool* CallFunc_Contains_ReturnValue_1, bool* CallFunc_Contains_ReturnValue_2, bool* CallFunc_Contains_ReturnValue_3, bool* CallFunc_Contains_ReturnValue_4, enum class ENetModeBP* CallFunc_SwitchNetworkMode_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess, const TArray<class USceneComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, struct FTransform* CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_DoesUseHibernation_ReturnValue, class FName K2Node_Event_SocketName, class APrimalCharacter* K2Node_Event_VictimChar, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, double* CallFunc_SelectFloat_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_GetNetworkTimeInSeconds_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, double* CallFunc_SelectFloat_ReturnValue_2, double CallFunc_FMin_ReturnValue, double* CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, float* CallFunc_SetLifeSpan_InLifespan_ImplicitCast, double* CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2, double* CallFunc_SelectFloat_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "ExecuteUbergraph_Dino_Character_BP");

	Params::ADino_Character_BP_C_ExecuteUbergraph_Dino_Character_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.CallFunc_GetComponentsByTag_ReturnValue = CallFunc_GetComponentsByTag_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_DoesUseHibernation_ReturnValue = CallFunc_DoesUseHibernation_ReturnValue;
	Parms.K2Node_Event_SocketName = K2Node_Event_SocketName;
	Parms.K2Node_Event_VictimChar = K2Node_Event_VictimChar;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetNetworkTimeInSeconds_ReturnValue = CallFunc_GetNetworkTimeInSeconds_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_4 = CallFunc_Greater_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_2 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_3 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetVelocity_ReturnValue != nullptr)
		*CallFunc_GetVelocity_ReturnValue = std::move(Parms.CallFunc_GetVelocity_ReturnValue);

	if (CallFunc_GetObjectClass_ReturnValue != nullptr)
		*CallFunc_GetObjectClass_ReturnValue = Parms.CallFunc_GetObjectClass_ReturnValue;

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_Subtract_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleDouble_ReturnValue = Parms.CallFunc_Subtract_DoubleDouble_ReturnValue;

	if (CallFunc_PlayAnimMontage_ReturnValue != nullptr)
		*CallFunc_PlayAnimMontage_ReturnValue = Parms.CallFunc_PlayAnimMontage_ReturnValue;

	if (CallFunc_Contains_ReturnValue != nullptr)
		*CallFunc_Contains_ReturnValue = Parms.CallFunc_Contains_ReturnValue;

	if (CallFunc_Contains_ReturnValue_1 != nullptr)
		*CallFunc_Contains_ReturnValue_1 = Parms.CallFunc_Contains_ReturnValue_1;

	if (CallFunc_Contains_ReturnValue_2 != nullptr)
		*CallFunc_Contains_ReturnValue_2 = Parms.CallFunc_Contains_ReturnValue_2;

	if (CallFunc_Contains_ReturnValue_3 != nullptr)
		*CallFunc_Contains_ReturnValue_3 = Parms.CallFunc_Contains_ReturnValue_3;

	if (CallFunc_Contains_ReturnValue_4 != nullptr)
		*CallFunc_Contains_ReturnValue_4 = Parms.CallFunc_Contains_ReturnValue_4;

	if (CallFunc_SwitchNetworkMode_OutNetworkMode != nullptr)
		*CallFunc_SwitchNetworkMode_OutNetworkMode = Parms.CallFunc_SwitchNetworkMode_OutNetworkMode;

	if (K2Node_SwitchEnum_CmpSuccess != nullptr)
		*K2Node_SwitchEnum_CmpSuccess = Parms.K2Node_SwitchEnum_CmpSuccess;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_K2_GetComponentToWorld_ReturnValue != nullptr)
		*CallFunc_K2_GetComponentToWorld_ReturnValue = std::move(Parms.CallFunc_K2_GetComponentToWorld_ReturnValue);

	if (CallFunc_SelectFloat_ReturnValue_1 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_1 = Parms.CallFunc_SelectFloat_ReturnValue_1;

	if (CallFunc_SelectFloat_ReturnValue_2 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_2 = Parms.CallFunc_SelectFloat_ReturnValue_2;

	if (CallFunc_Subtract_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Subtract_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast;

	if (CallFunc_SetLifeSpan_InLifespan_ImplicitCast != nullptr)
		*CallFunc_SetLifeSpan_InLifespan_ImplicitCast = Parms.CallFunc_SetLifeSpan_InLifespan_ImplicitCast;

	if (CallFunc_SelectFloat_A_ImplicitCast != nullptr)
		*CallFunc_SelectFloat_A_ImplicitCast = Parms.CallFunc_SelectFloat_A_ImplicitCast;

	if (CallFunc_SelectFloat_A_ImplicitCast_1 != nullptr)
		*CallFunc_SelectFloat_A_ImplicitCast_1 = Parms.CallFunc_SelectFloat_A_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


