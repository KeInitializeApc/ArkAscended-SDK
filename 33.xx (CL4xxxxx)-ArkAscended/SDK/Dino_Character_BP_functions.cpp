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
// struct FVector                     CurrentCameraPivotLocation                                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     DesiredCameraPivotLocation                                       (Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector ADino_Character_BP_C::BPOverrideCameraDesiredPivotLocation(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraDesiredPivotLocation");

	Params::ADino_Character_BP_C_BPOverrideCameraDesiredPivotLocation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotRotation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CurrentCameraPivotRotation                                       (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRotator                    DesiredCameraPivotRotation                                       (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)

struct FRotator ADino_Character_BP_C::BPOverrideCameraDesiredPivotRotation(bool ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FRotator* CallFunc_MakeRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraDesiredPivotRotation");

	Params::ADino_Character_BP_C_BPOverrideCameraDesiredPivotRotation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// struct FPrimalCameraParams         CameraParams                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     DesiredCameraOffset                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector ADino_Character_BP_C::BPOverrideCameraDesiredPivotOffset(const struct FPrimalCameraParams& CameraParams, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraDesiredPivotOffset");

	Params::ADino_Character_BP_C_BPOverrideCameraDesiredPivotOffset_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraPivotLocationInterpParams
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FPrimalCameraPivotZInterpOverridesPivotZInterpOverrides                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   LastInterpParamsX                                                (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   LastInterpParamsY                                                (ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   LastInterpParamsZ                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParamsX                                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParamsY                                                 (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParamsZ                                                 (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPrimalCameraInterpParams ADino_Character_BP_C::BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraPivotLocationInterpParams");

	Params::ADino_Character_BP_C_BPOverrideCameraPivotLocationInterpParams_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLengthInterpParams
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParams                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPrimalCameraInterpParams ADino_Character_BP_C::BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraParams& CameraParams, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraArmLengthInterpParams");

	Params::ADino_Character_BP_C_BPOverrideCameraArmLengthInterpParams_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLength
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CurrentCameraArmLength                                           (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DesiredCameraArmLength                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)

float ADino_Character_BP_C::BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, bool ReturnValue, double* CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast, double CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraArmLength");

	Params::ADino_Character_BP_C_BPOverrideCameraArmLength_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast = CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast != nullptr)
		*CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast = Parms.CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.GetFXBloodColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, SubobjectReference)
// class FString                      CallFunc_Split_LeftS                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class FString                      CallFunc_Split_RightS                                            (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_Split_ReturnValue                                       (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FLinearColor                CallFunc_GetFXBloodColor_ReturnValue                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)

struct FLinearColor ADino_Character_BP_C::GetFXBloodColor(const struct FLinearColor& ReturnValue, class FString* CallFunc_GetDisplayName_ReturnValue, class FString* CallFunc_Split_LeftS, class FString* CallFunc_Split_RightS, bool* CallFunc_Split_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "GetFXBloodColor");

	Params::ADino_Character_BP_C_GetFXBloodColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// bool                               bInputWantsToRun                                                 (ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               RetVal                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_BlueprintOverrideWantsToRun_ReturnValue                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_K2_TimerExists_ReturnValue                              (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsWildSlow_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_GetNetworkTimeInSeconds_ReturnValue                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (Edit, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_FollowingRunDistance_ImplicitCast             (Edit, ConstParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1           (Edit, ConstParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

float ADino_Character_BP_C::BlueprintOverrideWantsToRun(bool bInputWantsToRun, bool ReturnValue, bool* CallFunc_BlueprintOverrideWantsToRun_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_K2_TimerExists_ReturnValue, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BlueprintOverrideWantsToRun");

	Params::ADino_Character_BP_C_BlueprintOverrideWantsToRun_Params Parms{};

	Parms.bInputWantsToRun = bInputWantsToRun;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_TimerExists_ReturnValue = CallFunc_K2_TimerExists_ReturnValue;
	Parms.CallFunc_SwitchNetworkMode_OutNetworkMode = CallFunc_SwitchNetworkMode_OutNetworkMode;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BlueprintOverrideWantsToRun_ReturnValue != nullptr)
		*CallFunc_BlueprintOverrideWantsToRun_ReturnValue = Parms.CallFunc_BlueprintOverrideWantsToRun_ReturnValue;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.UpdateBabyAndRunValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class ADino_AIController_BP_C*     K2Node_DynamicCast_AsDino_AIController_BP                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsWildSlow_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class AAIController*               CallFunc_GetAIController_ReturnValue_1                           (ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (Edit, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// float                              K2Node_VariableSet_FollowStoppingDistance_ImplicitCast           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_FollowingRunDistance_ImplicitCast             (Edit, ConstParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast              (ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_FollowStoppingDistance_ImplicitCast_1         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1           (Edit, ConstParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_1            (ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_2            (ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

float ADino_Character_BP_C::UpdateBabyAndRunValues(class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "UpdateBabyAndRunValues");

	Params::ADino_Character_BP_C_UpdateBabyAndRunValues_Params Parms{};

	Parms.CallFunc_SwitchNetworkMode_OutNetworkMode = CallFunc_SwitchNetworkMode_OutNetworkMode;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Dino_AIController != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_AIController = Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController;

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPControlRigNotify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        NotifyName                                                       (Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        NotifyCustomTag                                                  (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FHitResult                  WorldSpaceHitResult                                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Velocity                                                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

struct FVector ADino_Character_BP_C::BPControlRigNotify(class FName NotifyName, const struct FHitResult& WorldSpaceHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPControlRigNotify");

	Params::ADino_Character_BP_C_BPControlRigNotify_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.WorldSpaceHitResult = WorldSpaceHitResult;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dino_Character_BP.Dino_Character_BP_C.GetDinoContentData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDinoContentData            DinoContentData                                                  (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, DuplicateTransient)

void ADino_Character_BP_C::GetDinoContentData(const struct FDinoContentData& DinoContentData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "GetDinoContentData");

	Params::ADino_Character_BP_C_GetDinoContentData_Params Parms{};

	Parms.DinoContentData = DinoContentData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPHandleRightShoulderButton
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class APrimalBuff*>         CallFunc_GetBuffs_TheBuffs                                       (Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalBuff*                 CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class ABuff_DinoTekHelmet_Base_C*  K2Node_DynamicCast_AsBuff_Dino_Tek_Helmet_Base                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

int32 ADino_Character_BP_C::BPHandleRightShoulderButton(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPHandleRightShoulderButton");

	Params::ADino_Character_BP_C_BPHandleRightShoulderButton_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

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
// class UBlendSpace*                 BlendSpace                                                       (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DuplicateTransient)

class UBlendSpace* ADino_Character_BP_C::BlendSpaceGenerated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BlendSpaceGenerated");

	Params::ADino_Character_BP_C_BlendSpaceGenerated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// class FName                        SocketName                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// class APrimalCharacter*            VictimChar                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, ConstParm, Net, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (Edit, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// float                              CallFunc_TimeSeconds_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class ADino_Character_BP_C*        K2Node_DynamicCast_AsDino_Character_BP                           (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (Edit, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UBlendSpace*                 K2Node_Event_blendSpace                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Contains_ReturnValue                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_Contains_ReturnValue_2                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Contains_ReturnValue_3                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Contains_ReturnValue_4                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (Edit, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// TArray<class USceneComponent*>     CallFunc_GetComponentsByTag_ReturnValue                          (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class USceneComponent*             K2Node_DynamicCast_AsScene_Component                             (ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (Edit, ConstParm, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_DoesUseHibernation_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        K2Node_Event_SocketName                                          (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_Event_VictimChar                                          (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FLinearColor                CallFunc_GetFXBloodColor_ReturnValue                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_GetNetworkTimeInSeconds_ReturnValue                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// class FName                        Temp_name_Variable                                               (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue                                        (Edit, EditFixedSize, Parm, ReturnParm, SubobjectReference)
// class FName                        Temp_name_Variable_1                                             (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FName                        Temp_name_Variable_2                                             (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FName                        Temp_name_Variable_3                                             (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FName                        Temp_name_Variable_4                                             (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_SetLifeSpan_InLifespan_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_2                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SelectFloat_B_ImplicitCast_1                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_A_ImplicitCast_1                            (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_3                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference)

float ADino_Character_BP_C::ExecuteUbergraph_Dino_Character_BP(const struct FVector& CallFunc_GetVelocity_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_Contains_ReturnValue_4, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode, class AActor** CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "ExecuteUbergraph_Dino_Character_BP");

	Params::ADino_Character_BP_C_ExecuteUbergraph_Dino_Character_BP_Params Parms{};

	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue_2 = CallFunc_Contains_ReturnValue_2;
	Parms.CallFunc_Contains_ReturnValue_3 = CallFunc_Contains_ReturnValue_3;
	Parms.CallFunc_Contains_ReturnValue_4 = CallFunc_Contains_ReturnValue_4;
	Parms.CallFunc_SwitchNetworkMode_OutNetworkMode = CallFunc_SwitchNetworkMode_OutNetworkMode;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_1 = CallFunc_SelectFloat_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue != nullptr)
		*CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	return Parms.ReturnValue;

}

}


