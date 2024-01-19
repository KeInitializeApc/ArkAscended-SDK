#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerPawnTest.PlayerPawnTest_C
// (Actor, Pawn)

class UClass* APlayerPawnTest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerPawnTest_C");

	return Clss;
}


// PlayerPawnTest_C PlayerPawnTest.Default__PlayerPawnTest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayerPawnTest_C* APlayerPawnTest_C::GetDefaultObj()
{
	static class APlayerPawnTest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerPawnTest_C*>(APlayerPawnTest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CurrentCameraPivotLocation                                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     DesiredCameraPivotLocation                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void APlayerPawnTest_C::BPOverrideCameraDesiredPivotLocation(const struct FVector& CurrentCameraPivotLocation, const struct FVector& DesiredCameraPivotLocation, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraDesiredPivotLocation");

	Params::APlayerPawnTest_C_BPOverrideCameraDesiredPivotLocation_Params Parms{};

	Parms.CurrentCameraPivotLocation = CurrentCameraPivotLocation;
	Parms.DesiredCameraPivotLocation = DesiredCameraPivotLocation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.GetFXBloodColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void APlayerPawnTest_C::GetFXBloodColor(const struct FLinearColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "GetFXBloodColor");

	Params::APlayerPawnTest_C_GetFXBloodColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.DisableFluidInteraction
// (Exec, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawnTest_C::DisableFluidInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "DisableFluidInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPawnTest.PlayerPawnTest_C.EnableFluidInteraction
// (Exec, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawnTest_C::EnableFluidInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "EnableFluidInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPawnTest.PlayerPawnTest_C.AssignAssetsFromVoiceCollection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_VoiceCollection_C*      K2Node_DynamicCast_AsPDA_Voice_Collection                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool APlayerPawnTest_C::AssignAssetsFromVoiceCollection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "AssignAssetsFromVoiceCollection");

	Params::APlayerPawnTest_C_AssignAssetsFromVoiceCollection_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotRotation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CurrentCameraPivotRotation                                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    DesiredCameraPivotRotation                                       (ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

struct FRotator APlayerPawnTest_C::BPOverrideCameraDesiredPivotRotation(const struct FRotator& CurrentCameraPivotRotation, const struct FRotator& DesiredCameraPivotRotation, bool ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraDesiredPivotRotation");

	Params::APlayerPawnTest_C_BPOverrideCameraDesiredPivotRotation_Params Parms{};

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


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// struct FVector                     DesiredCameraOffset                                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FPrimalCameraParams APlayerPawnTest_C::BPOverrideCameraDesiredPivotOffset(const struct FVector& DesiredCameraOffset, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraDesiredPivotOffset");

	Params::APlayerPawnTest_C_BPOverrideCameraDesiredPivotOffset_Params Parms{};

	Parms.DesiredCameraOffset = DesiredCameraOffset;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraPivotLocationInterpParams
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

struct FPrimalCameraParams APlayerPawnTest_C::BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, const struct FPrimalCameraInterpParams& OutInterpParamsX, const struct FPrimalCameraInterpParams& OutInterpParamsY, const struct FPrimalCameraInterpParams& OutInterpParamsZ, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraPivotLocationInterpParams");

	Params::APlayerPawnTest_C_BPOverrideCameraPivotLocationInterpParams_Params Parms{};

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


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLengthInterpParams
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParams                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FPrimalCameraParams APlayerPawnTest_C::BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraInterpParams& OutInterpParams, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraArmLengthInterpParams");

	Params::APlayerPawnTest_C_BPOverrideCameraArmLengthInterpParams_Params Parms{};

	Parms.OutInterpParams = OutInterpParams;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLength
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              CurrentCameraArmLength                                           (ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              DesiredCameraArmLength                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

double APlayerPawnTest_C::BPOverrideCameraArmLength(float CurrentCameraArmLength, float DesiredCameraArmLength, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraArmLength");

	Params::APlayerPawnTest_C_BPOverrideCameraArmLength_Params Parms{};

	Parms.CurrentCameraArmLength = CurrentCameraArmLength;
	Parms.DesiredCameraArmLength = DesiredCameraArmLength;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.DontCreateAnyMoreSpawnUIs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 CallFunc_GetShooterHud_ShooterHud                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool APlayerPawnTest_C::DontCreateAnyMoreSpawnUIs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "DontCreateAnyMoreSpawnUIs");

	Params::APlayerPawnTest_C_DontCreateAnyMoreSpawnUIs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.GetShooterHud
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 ShooterHUD                                                       (Edit, Net, Parm, OutParm, Transient)
// class AController*                 CallFunc_GetController_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool APlayerPawnTest_C::GetShooterHud(class AShooterHUD** ShooterHUD, class AController** CallFunc_GetController_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "GetShooterHud");

	Params::APlayerPawnTest_C_GetShooterHud_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShooterHUD != nullptr)
		*ShooterHUD = Parms.ShooterHUD;

	if (CallFunc_GetController_ReturnValue != nullptr)
		*CallFunc_GetController_ReturnValue = Parms.CallFunc_GetController_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (CallFunc_GetShooterHUD_ReturnValue != nullptr)
		*CallFunc_GetShooterHUD_ReturnValue = Parms.CallFunc_GetShooterHUD_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.SetGeneralizedUnlockedAchievementTags
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                GeneralizedUnlockedAchievementTags                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)

void APlayerPawnTest_C::SetGeneralizedUnlockedAchievementTags(const TArray<class FName>& GeneralizedUnlockedAchievementTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "SetGeneralizedUnlockedAchievementTags");

	Params::APlayerPawnTest_C_SetGeneralizedUnlockedAchievementTags_Params Parms{};

	Parms.GeneralizedUnlockedAchievementTags = GeneralizedUnlockedAchievementTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.HasEquipToHideImplant
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ShouldHideImplant                                                (Edit, ConstParm, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Local_HideImplant                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalItem*                 CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)

bool APlayerPawnTest_C::HasEquipToHideImplant(bool* ShouldHideImplant, bool* Local_HideImplant, int32 Temp_int_Loop_Counter_Variable, class UPrimalItem* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "HasEquipToHideImplant");

	Params::APlayerPawnTest_C_HasEquipToHideImplant_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldHideImplant != nullptr)
		*ShouldHideImplant = Parms.ShouldHideImplant;

	if (Local_HideImplant != nullptr)
		*Local_HideImplant = Parms.Local_HideImplant;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPSetupFirstPersonHandsMesh
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawnTest_C::BPSetupFirstPersonHandsMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPSetupFirstPersonHandsMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPawnTest.PlayerPawnTest_C.SetupMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bForce                                                           (ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue                                (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_1                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_1                              (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetNumMaterials_ReturnValue_1                           (ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_GetNumMaterials_ReturnValue_2                           (ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable_2                                              (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable_3                                              (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              Temp_int_Variable_4                                              (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_2                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_2                              (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_HasEquipToHideImplant_ShouldHideImplant                 (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ConstParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_GetObjectName_ReturnValue                               (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_3                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_3                              (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_GetNumMaterials_ReturnValue_3                           (ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_4                            (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue_5                            (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_GetNumMaterials_ReturnValue_4                           (ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue_6                            (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_4                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_4                              (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Variable_5                                              (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_4                               (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_4             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_4                          (Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_5                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_5                               (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_5                              (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_5             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_GetNumMaterials_ReturnValue_5                           (ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_5                          (Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)

bool APlayerPawnTest_C::SetupMeshes(bool bForce, int32* CallFunc_GetNumMaterials_ReturnValue, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item, int32* CallFunc_Subtract_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32* CallFunc_GetNumMaterials_ReturnValue_1, int32* CallFunc_Subtract_IntInt_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue_2, int32* CallFunc_GetNumMaterials_ReturnValue_2, int32* CallFunc_Subtract_IntInt_ReturnValue_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item_2, class UWorld* CallFunc_K2_GetWorld_ReturnValue, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item_3, bool* CallFunc_BooleanOR_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_2, int32* CallFunc_GetNumMaterials_ReturnValue_3, int32* CallFunc_Subtract_IntInt_ReturnValue_3, int32* CallFunc_Array_Length_ReturnValue_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_3, int32* CallFunc_GetNumMaterials_ReturnValue_4, int32* CallFunc_Subtract_IntInt_ReturnValue_4, int32* CallFunc_Array_Length_ReturnValue_4, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item_4, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_4, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item_5, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_5, int32* CallFunc_GetNumMaterials_ReturnValue_5, int32* CallFunc_Subtract_IntInt_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "SetupMeshes");

	Params::APlayerPawnTest_C_SetupMeshes_Params Parms{};

	Parms.bForce = bForce;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue_1 = CallFunc_GetMaterial_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetMaterial_ReturnValue_2 = CallFunc_GetMaterial_ReturnValue_2;
	Parms.CallFunc_GetMaterial_ReturnValue_3 = CallFunc_GetMaterial_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetMaterial_ReturnValue_4 = CallFunc_GetMaterial_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetMaterial_ReturnValue_5 = CallFunc_GetMaterial_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetNumMaterials_ReturnValue != nullptr)
		*CallFunc_GetNumMaterials_ReturnValue = Parms.CallFunc_GetNumMaterials_ReturnValue;

	if (CallFunc_Subtract_IntInt_ReturnValue != nullptr)
		*CallFunc_Subtract_IntInt_ReturnValue = Parms.CallFunc_Subtract_IntInt_ReturnValue;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Length_ReturnValue_1 != nullptr)
		*CallFunc_Array_Length_ReturnValue_1 = Parms.CallFunc_Array_Length_ReturnValue_1;

	if (CallFunc_GetNumMaterials_ReturnValue_1 != nullptr)
		*CallFunc_GetNumMaterials_ReturnValue_1 = Parms.CallFunc_GetNumMaterials_ReturnValue_1;

	if (CallFunc_Subtract_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_IntInt_ReturnValue_1 = Parms.CallFunc_Subtract_IntInt_ReturnValue_1;

	if (CallFunc_Array_Length_ReturnValue_2 != nullptr)
		*CallFunc_Array_Length_ReturnValue_2 = Parms.CallFunc_Array_Length_ReturnValue_2;

	if (CallFunc_GetNumMaterials_ReturnValue_2 != nullptr)
		*CallFunc_GetNumMaterials_ReturnValue_2 = Parms.CallFunc_GetNumMaterials_ReturnValue_2;

	if (CallFunc_Subtract_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_Subtract_IntInt_ReturnValue_2 = Parms.CallFunc_Subtract_IntInt_ReturnValue_2;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_GetNumMaterials_ReturnValue_3 != nullptr)
		*CallFunc_GetNumMaterials_ReturnValue_3 = Parms.CallFunc_GetNumMaterials_ReturnValue_3;

	if (CallFunc_Subtract_IntInt_ReturnValue_3 != nullptr)
		*CallFunc_Subtract_IntInt_ReturnValue_3 = Parms.CallFunc_Subtract_IntInt_ReturnValue_3;

	if (CallFunc_Array_Length_ReturnValue_3 != nullptr)
		*CallFunc_Array_Length_ReturnValue_3 = Parms.CallFunc_Array_Length_ReturnValue_3;

	if (CallFunc_GetNumMaterials_ReturnValue_4 != nullptr)
		*CallFunc_GetNumMaterials_ReturnValue_4 = Parms.CallFunc_GetNumMaterials_ReturnValue_4;

	if (CallFunc_Subtract_IntInt_ReturnValue_4 != nullptr)
		*CallFunc_Subtract_IntInt_ReturnValue_4 = Parms.CallFunc_Subtract_IntInt_ReturnValue_4;

	if (CallFunc_Array_Length_ReturnValue_4 != nullptr)
		*CallFunc_Array_Length_ReturnValue_4 = Parms.CallFunc_Array_Length_ReturnValue_4;

	if (CallFunc_GetNumMaterials_ReturnValue_5 != nullptr)
		*CallFunc_GetNumMaterials_ReturnValue_5 = Parms.CallFunc_GetNumMaterials_ReturnValue_5;

	if (CallFunc_Subtract_IntInt_ReturnValue_5 != nullptr)
		*CallFunc_Subtract_IntInt_ReturnValue_5 = Parms.CallFunc_Subtract_IntInt_ReturnValue_5;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPUnlockedAllExplorerNotes
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool APlayerPawnTest_C::BPUnlockedAllExplorerNotes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPUnlockedAllExplorerNotes");

	Params::APlayerPawnTest_C_BPUnlockedAllExplorerNotes_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.GetTheNumChibiLevelUps
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              OutVal                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

void APlayerPawnTest_C::GetTheNumChibiLevelUps(int32* OutVal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "GetTheNumChibiLevelUps");

	Params::APlayerPawnTest_C_GetTheNumChibiLevelUps_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutVal != nullptr)
		*OutVal = Parms.OutVal;

}


// Function PlayerPawnTest.PlayerPawnTest_C.SetNumChibiLevelUps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewNum                                                           (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

void APlayerPawnTest_C::SetNumChibiLevelUps(int32* NewNum, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "SetNumChibiLevelUps");

	Params::APlayerPawnTest_C_SetNumChibiLevelUps_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewNum != nullptr)
		*NewNum = Parms.NewNum;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetPlayerHexagonCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Ret_val                                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (ExportObject, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool APlayerPawnTest_C::BPGetPlayerHexagonCount(int32 ReturnValue, int32 Ret_val, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_SwitchEnum_CmpSuccess, class UPrimalPlayerData** CallFunc_GetPlayerData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPGetPlayerHexagonCount");

	Params::APlayerPawnTest_C_BPGetPlayerHexagonCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Ret_val = Ret_val;
	Parms.CallFunc_IsRunningOnServer_OutNetworkMode = CallFunc_IsRunningOnServer_OutNetworkMode;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_SwitchEnum_CmpSuccess != nullptr)
		*K2Node_SwitchEnum_CmpSuccess = Parms.K2Node_SwitchEnum_CmpSuccess;

	if (CallFunc_GetPlayerData_ReturnValue != nullptr)
		*CallFunc_GetPlayerData_ReturnValue = Parms.CallFunc_GetPlayerData_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPSetPlayerHexagonCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewHexagonCount                                                  (ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Ret_val                                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ConstParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (ExportObject, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

bool APlayerPawnTest_C::BPSetPlayerHexagonCount(bool ReturnValue, bool Ret_val, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, class UPrimalPlayerData** CallFunc_GetPlayerData_ReturnValue, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPSetPlayerHexagonCount");

	Params::APlayerPawnTest_C_BPSetPlayerHexagonCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Ret_val = Ret_val;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;
	Parms.CallFunc_IsRunningOnServer_OutNetworkMode = CallFunc_IsRunningOnServer_OutNetworkMode;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetPlayerData_ReturnValue != nullptr)
		*CallFunc_GetPlayerData_ReturnValue = Parms.CallFunc_GetPlayerData_ReturnValue;

	if (K2Node_SwitchEnum_CmpSuccess != nullptr)
		*K2Node_SwitchEnum_CmpSuccess = Parms.K2Node_SwitchEnum_CmpSuccess;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetShowDebugAnimationComponents
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMeshComponent*>SkelMeshComponents                                               (ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// TArray<class USkeletalMeshComponent*>Comps                                                            (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (BlueprintVisible, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue_1                             (BlueprintVisible, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class AShooterWeapon*              CallFunc_GetWeapon_ReturnValue                                   (Edit, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)

bool APlayerPawnTest_C::BPGetShowDebugAnimationComponents(bool Temp_bool_Variable, bool* CallFunc_IsFirstPerson_ReturnValue, bool* CallFunc_IsFirstPerson_ReturnValue_1, int32* CallFunc_Array_Add_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_1, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_2, class USkeletalMeshComponent* K2Node_Select_Default, int32* CallFunc_Array_Add_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPGetShowDebugAnimationComponents");

	Params::APlayerPawnTest_C_BPGetShowDebugAnimationComponents_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsFirstPerson_ReturnValue != nullptr)
		*CallFunc_IsFirstPerson_ReturnValue = Parms.CallFunc_IsFirstPerson_ReturnValue;

	if (CallFunc_IsFirstPerson_ReturnValue_1 != nullptr)
		*CallFunc_IsFirstPerson_ReturnValue_1 = Parms.CallFunc_IsFirstPerson_ReturnValue_1;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue_1 != nullptr)
		*CallFunc_Array_Add_ReturnValue_1 = Parms.CallFunc_Array_Add_ReturnValue_1;

	if (CallFunc_Array_Add_ReturnValue_2 != nullptr)
		*CallFunc_Array_Add_ReturnValue_2 = Parms.CallFunc_Array_Add_ReturnValue_2;

	if (CallFunc_Array_Add_ReturnValue_3 != nullptr)
		*CallFunc_Array_Add_ReturnValue_3 = Parms.CallFunc_Array_Add_ReturnValue_3;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetOverrideCameraInterpSpeed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DefaultTPVCameraSpeedInterpolationMultiplier                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              DefaultTPVOffsetInterpSpeed                                      (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              TPVCameraSpeedInterpolationMultiplier                            (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              TPVOffsetInterpSpeed                                             (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             LocalDefaultTPVOffsetInterpSpeed                                 (ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasBuff_ReturnValue                                     (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

float APlayerPawnTest_C::BPGetOverrideCameraInterpSpeed(double* LocalDefaultTPVOffsetInterpSpeed, bool CallFunc_HasBuff_ReturnValue, double* K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast, float* K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPGetOverrideCameraInterpSpeed");

	Params::APlayerPawnTest_C_BPGetOverrideCameraInterpSpeed_Params Parms{};

	Parms.CallFunc_HasBuff_ReturnValue = CallFunc_HasBuff_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalDefaultTPVOffsetInterpSpeed != nullptr)
		*LocalDefaultTPVOffsetInterpSpeed = Parms.LocalDefaultTPVOffsetInterpSpeed;

	if (K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast != nullptr)
		*K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast = Parms.K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast;

	if (K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast != nullptr)
		*K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast = Parms.K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.ShowHUDNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// double                             LifetimeSeconds                                                  (Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             DisplayScale                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class USoundCue*                   SoundToPlay                                                      (Edit, ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class USoundCue* APlayerPawnTest_C::ShowHUDNotification(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ShowHUDNotification");

	Params::APlayerPawnTest_C_ShowHUDNotification_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawnTest_C::TrySpawnMound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "TrySpawnMound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMoundEx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Angle                                                            (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             Range                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

double APlayerPawnTest_C::TrySpawnMoundEx(double Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "TrySpawnMoundEx");

	Params::APlayerPawnTest_C_TrySpawnMoundEx_Params Parms{};

	Parms.Angle = Angle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPSetFirstPersonMasterPoseComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      FirstPersonMasterPosecomponent                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

void APlayerPawnTest_C::BPSetFirstPersonMasterPoseComponent(class USkeletalMeshComponent** FirstPersonMasterPosecomponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPSetFirstPersonMasterPoseComponent");

	Params::APlayerPawnTest_C_BPSetFirstPersonMasterPoseComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FirstPersonMasterPosecomponent != nullptr)
		*FirstPersonMasterPosecomponent = Parms.FirstPersonMasterPosecomponent;

}


// Function PlayerPawnTest.PlayerPawnTest_C.DefeatedBoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalDinoCharacter*        BossCharacter                                                    (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        BossTag                                                          (ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              BossDifficulty                                                   (ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ConstParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (ExportObject, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)

bool APlayerPawnTest_C::DefeatedBoss(class FName* BossTag, class AController** CallFunc_GetController_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, class UPrimalPlayerData** CallFunc_GetPlayerData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "DefeatedBoss");

	Params::APlayerPawnTest_C_DefeatedBoss_Params Parms{};

	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;

	UObject::ProcessEvent(Func, &Parms);

	if (BossTag != nullptr)
		*BossTag = Parms.BossTag;

	if (CallFunc_GetController_ReturnValue != nullptr)
		*CallFunc_GetController_ReturnValue = Parms.CallFunc_GetController_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (CallFunc_GetPlayerData_ReturnValue != nullptr)
		*CallFunc_GetPlayerData_ReturnValue = Parms.CallFunc_GetPlayerData_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.ServerAscend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DifficultyIndex                                                  (BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               bImmediateAscend                                                 (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               bSuppressAchievements                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               bIsCheatAscend                                                   (Edit, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsListenServer_ReturnValue                              (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_K2_TeleportTo_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      Temp_string_Variable                                             (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchName_CmpSuccess                                     (BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FString                      Temp_string_Variable_1                                           (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_2                                           (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable                                                (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class FString                      K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class AController*                 CallFunc_GetCharacterController_ReturnValue                      (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_GetPrimaryWorld_ReturnValue                             (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalWorldSettings*        K2Node_DynamicCast_AsPrimal_World_Settings                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode_1                         (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetServerSettingsFloat_OutFloat                         (Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetServerSettingsFloat_ReturnValue                      (Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetServerSettingsFloat_OutFloat_1                       (Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_GetServerSettingsFloat_ReturnValue_1                    (Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetServerSettingsFloat_OutFloat_2                       (Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GetServerSettingsFloat_ReturnValue_2                    (Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (ExportObject, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_K2_TeleportTo_ReturnValue_1                             (BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class AController*                 CallFunc_GetController_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ConstParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsLocalController_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

double APlayerPawnTest_C::ServerAscend(bool bImmediateAscend, bool bSuppressAchievements, bool bIsCheatAscend, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, struct FRotator* CallFunc_K2_GetActorRotation_ReturnValue, bool K2Node_SwitchName_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, const class FString& K2Node_Select_Default, class AController* CallFunc_GetCharacterController_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, struct FRotator* CallFunc_K2_GetActorRotation_ReturnValue_1, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode_1, bool* CallFunc_GetServerSettingsFloat_ReturnValue, bool* CallFunc_GetServerSettingsFloat_ReturnValue_1, bool* CallFunc_GetServerSettingsFloat_ReturnValue_2, class UPrimalPlayerData** CallFunc_GetPlayerData_ReturnValue, class AController** CallFunc_GetController_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, bool CallFunc_IsLocalController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ServerAscend");

	Params::APlayerPawnTest_C_ServerAscend_Params Parms{};

	Parms.bImmediateAscend = bImmediateAscend;
	Parms.bSuppressAchievements = bSuppressAchievements;
	Parms.bIsCheatAscend = bIsCheatAscend;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCharacterController_ReturnValue = CallFunc_GetCharacterController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_World_Settings = K2Node_DynamicCast_AsPrimal_World_Settings;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode_1 = K2Node_DynamicCast_AsShooter_Game_Mode_1;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_K2_GetActorRotation_ReturnValue != nullptr)
		*CallFunc_K2_GetActorRotation_ReturnValue = std::move(Parms.CallFunc_K2_GetActorRotation_ReturnValue);

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_1 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_K2_GetActorRotation_ReturnValue_1 != nullptr)
		*CallFunc_K2_GetActorRotation_ReturnValue_1 = std::move(Parms.CallFunc_K2_GetActorRotation_ReturnValue_1);

	if (CallFunc_GetServerSettingsFloat_ReturnValue != nullptr)
		*CallFunc_GetServerSettingsFloat_ReturnValue = Parms.CallFunc_GetServerSettingsFloat_ReturnValue;

	if (CallFunc_GetServerSettingsFloat_ReturnValue_1 != nullptr)
		*CallFunc_GetServerSettingsFloat_ReturnValue_1 = Parms.CallFunc_GetServerSettingsFloat_ReturnValue_1;

	if (CallFunc_GetServerSettingsFloat_ReturnValue_2 != nullptr)
		*CallFunc_GetServerSettingsFloat_ReturnValue_2 = Parms.CallFunc_GetServerSettingsFloat_ReturnValue_2;

	if (CallFunc_GetPlayerData_ReturnValue != nullptr)
		*CallFunc_GetPlayerData_ReturnValue = Parms.CallFunc_GetPlayerData_ReturnValue;

	if (CallFunc_GetController_ReturnValue != nullptr)
		*CallFunc_GetController_ReturnValue = Parms.CallFunc_GetController_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Player_Controller_1 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_1 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_1;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.PlayerCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TheCommand                                                       (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      RetVal                                                           (BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_PlayerCommand_ReturnValue                               (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

class FString APlayerPawnTest_C::PlayerCommand(const class FString& ReturnValue, class FString* RetVal, const class FString& CallFunc_PlayerCommand_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "PlayerCommand");

	Params::APlayerPawnTest_C_PlayerCommand_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_PlayerCommand_ReturnValue = CallFunc_PlayerCommand_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (RetVal != nullptr)
		*RetVal = std::move(Parms.RetVal);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawnTest_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPawnTest.PlayerPawnTest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlayerPawnTest_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPawnTest.PlayerPawnTest_C.NetClientAscend
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AscendIndex                                                      (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               bImmediateAscend                                                 (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               bIsCheatAscend                                                   (Edit, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)

int32 APlayerPawnTest_C::NetClientAscend(bool bImmediateAscend, bool bIsCheatAscend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "NetClientAscend");

	Params::APlayerPawnTest_C_NetClientAscend_Params Parms{};

	Parms.bImmediateAscend = bImmediateAscend;
	Parms.bIsCheatAscend = bIsCheatAscend;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.ClientShowHUDNotification
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// double                             LifetimeSeconds                                                  (Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             DisplayScale                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class USoundCue*                   SoundToPlay                                                      (Edit, ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class USoundCue* APlayerPawnTest_C::ClientShowHUDNotification(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ClientShowHUDNotification");

	Params::APlayerPawnTest_C_ClientShowHUDNotification_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.NetClientPreLoadAcension
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawnTest_C::NetClientPreLoadAcension()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "NetClientPreLoadAcension");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPSpawnAttackerDamageImpactFX
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        SocketName                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class APrimalCharacter*            VictimChar                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class FName APlayerPawnTest_C::BPSpawnAttackerDamageImpactFX(class APrimalCharacter** VictimChar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPSpawnAttackerDamageImpactFX");

	Params::APlayerPawnTest_C_BPSpawnAttackerDamageImpactFX_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (VictimChar != nullptr)
		*VictimChar = Parms.VictimChar;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.AscensionCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawnTest_C::AscensionCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "AscensionCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPawnTest.PlayerPawnTest_C.ExecuteUbergraph_PlayerPawnTest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              K2Node_CustomEvent_AscendIndex                                   (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_CustomEvent_bImmediateAscend                              (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_CustomEvent_bIsCheatAscend                                (Edit, ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ConstParm, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ConstParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetUserSettings_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UFinalCreditsUI_C*           CallFunc_Create_ReturnValue                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      K2Node_CustomEvent_Text                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_CustomEvent_LifetimeSeconds                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_CustomEvent_DisplayScale                                  (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// class USoundCue*                   K2Node_CustomEvent_SoundToPlay                                   (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue_1                               (ConstParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsShipping_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_BPGetPrimaryMapName_ReturnValue                         (BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FName                        K2Node_Event_SocketName                                          (Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_Event_VictimChar                                          (BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                CallFunc_GetFXBloodColor_ReturnValue                             (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// struct FLinearColor                Temp_struct_Variable                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                Temp_struct_Variable_1                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FLinearColor                Temp_struct_Variable_2                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable                                                (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_2                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (BlueprintVisible, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class USceneComponent*             K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class USceneComponent*             K2Node_Select_Default_1                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class USceneComponent*             K2Node_Select_Default_2                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FMin_ReturnValue                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Max_ReturnValue                                         (Edit, ExportObject, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue_1                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FLinearColor                K2Node_Select_Default_3                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_2                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_BPAddHUDNotification_DisplayTime_ImplicitCast           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BPAddHUDNotification_DisplayScale_ImplicitCast          (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast_1                            (Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_A_ImplicitCast_1                            (Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float APlayerPawnTest_C::ExecuteUbergraph_PlayerPawnTest(int32 EntryPoint, bool Temp_bool_Variable, int32* K2Node_CustomEvent_AscendIndex, bool* K2Node_CustomEvent_bImmediateAscend, class FName CallFunc_MakeLiteralName_ReturnValue, class FString* CallFunc_Conv_NameToString_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AController** CallFunc_GetController_ReturnValue, class UShooterGameUserSettings** CallFunc_GetUserSettings_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class UFinalCreditsUI_C* CallFunc_Create_ReturnValue, struct FLinearColor* K2Node_CustomEvent_Color, double K2Node_CustomEvent_DisplayScale, class AController** CallFunc_GetController_ReturnValue_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue_1, bool CallFunc_IsShipping_ReturnValue, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, class FName K2Node_Event_SocketName, class APrimalCharacter* K2Node_Event_VictimChar, bool CallFunc_Greater_DoubleDouble_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, bool Temp_bool_Variable_2, bool CallFunc_IsLocallyControlled_ReturnValue, bool* CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class USceneComponent* K2Node_Select_Default, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class USceneComponent* K2Node_Select_Default_1, double* CallFunc_SelectFloat_ReturnValue_1, class USceneComponent* K2Node_Select_Default_2, double CallFunc_FMin_ReturnValue, int32 CallFunc_Max_ReturnValue, const struct FLinearColor& K2Node_Select_Default_3, class AController** CallFunc_GetController_ReturnValue_2, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_2, float CallFunc_BPAddHUDNotification_DisplayTime_ImplicitCast, double* CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double* CallFunc_SelectFloat_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ExecuteUbergraph_PlayerPawnTest");

	Params::APlayerPawnTest_C_ExecuteUbergraph_PlayerPawnTest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_DisplayScale = K2Node_CustomEvent_DisplayScale;
	Parms.CallFunc_K2_GetWorld_ReturnValue_1 = CallFunc_K2_GetWorld_ReturnValue_1;
	Parms.CallFunc_IsShipping_ReturnValue = CallFunc_IsShipping_ReturnValue;
	Parms.CallFunc_BPGetPrimaryMapName_ReturnValue = CallFunc_BPGetPrimaryMapName_ReturnValue;
	Parms.K2Node_Event_SocketName = K2Node_Event_SocketName;
	Parms.K2Node_Event_VictimChar = K2Node_Event_VictimChar;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_BPAddHUDNotification_DisplayTime_ImplicitCast = CallFunc_BPAddHUDNotification_DisplayTime_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_CustomEvent_AscendIndex != nullptr)
		*K2Node_CustomEvent_AscendIndex = Parms.K2Node_CustomEvent_AscendIndex;

	if (K2Node_CustomEvent_bImmediateAscend != nullptr)
		*K2Node_CustomEvent_bImmediateAscend = Parms.K2Node_CustomEvent_bImmediateAscend;

	if (CallFunc_Conv_NameToString_ReturnValue != nullptr)
		*CallFunc_Conv_NameToString_ReturnValue = std::move(Parms.CallFunc_Conv_NameToString_ReturnValue);

	if (CallFunc_GetController_ReturnValue != nullptr)
		*CallFunc_GetController_ReturnValue = Parms.CallFunc_GetController_ReturnValue;

	if (CallFunc_GetUserSettings_ReturnValue != nullptr)
		*CallFunc_GetUserSettings_ReturnValue = Parms.CallFunc_GetUserSettings_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_CustomEvent_Color != nullptr)
		*K2Node_CustomEvent_Color = std::move(Parms.K2Node_CustomEvent_Color);

	if (CallFunc_GetController_ReturnValue_1 != nullptr)
		*CallFunc_GetController_ReturnValue_1 = Parms.CallFunc_GetController_ReturnValue_1;

	if (K2Node_DynamicCast_AsShooter_Player_Controller_1 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_1 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_1;

	if (CallFunc_GetShooterHUD_ReturnValue != nullptr)
		*CallFunc_GetShooterHUD_ReturnValue = Parms.CallFunc_GetShooterHUD_ReturnValue;

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_IsFirstPerson_ReturnValue != nullptr)
		*CallFunc_IsFirstPerson_ReturnValue = Parms.CallFunc_IsFirstPerson_ReturnValue;

	if (CallFunc_SelectFloat_ReturnValue_1 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_1 = Parms.CallFunc_SelectFloat_ReturnValue_1;

	if (CallFunc_GetController_ReturnValue_2 != nullptr)
		*CallFunc_GetController_ReturnValue_2 = Parms.CallFunc_GetController_ReturnValue_2;

	if (K2Node_DynamicCast_AsShooter_Player_Controller_2 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_2 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_2;

	if (CallFunc_SelectFloat_A_ImplicitCast != nullptr)
		*CallFunc_SelectFloat_A_ImplicitCast = Parms.CallFunc_SelectFloat_A_ImplicitCast;

	if (CallFunc_SelectFloat_A_ImplicitCast_1 != nullptr)
		*CallFunc_SelectFloat_A_ImplicitCast_1 = Parms.CallFunc_SelectFloat_A_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


