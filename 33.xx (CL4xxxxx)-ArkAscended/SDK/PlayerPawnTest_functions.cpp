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
// struct FVector                     CurrentCameraPivotLocation                                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     DesiredCameraPivotLocation                                       (Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector APlayerPawnTest_C::BPOverrideCameraDesiredPivotLocation(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraDesiredPivotLocation");

	Params::APlayerPawnTest_C_BPOverrideCameraDesiredPivotLocation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.GetFXBloodColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UPDA_VoiceCollection_C*      K2Node_DynamicCast_AsPDA_Voice_Collection                        (Edit, ConstParm, BlueprintVisible, EditFixedSize, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool APlayerPawnTest_C::AssignAssetsFromVoiceCollection(class UPDA_VoiceCollection_C* K2Node_DynamicCast_AsPDA_Voice_Collection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "AssignAssetsFromVoiceCollection");

	Params::APlayerPawnTest_C_AssignAssetsFromVoiceCollection_Params Parms{};

	Parms.K2Node_DynamicCast_AsPDA_Voice_Collection = K2Node_DynamicCast_AsPDA_Voice_Collection;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotRotation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CurrentCameraPivotRotation                                       (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRotator                    DesiredCameraPivotRotation                                       (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)

struct FRotator APlayerPawnTest_C::BPOverrideCameraDesiredPivotRotation(bool ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FRotator* CallFunc_MakeRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraDesiredPivotRotation");

	Params::APlayerPawnTest_C_BPOverrideCameraDesiredPivotRotation_Params Parms{};

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


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     DesiredCameraOffset                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector APlayerPawnTest_C::BPOverrideCameraDesiredPivotOffset(const struct FPrimalCameraParams& CameraParams, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraDesiredPivotOffset");

	Params::APlayerPawnTest_C_BPOverrideCameraDesiredPivotOffset_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraPivotLocationInterpParams
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

struct FPrimalCameraInterpParams APlayerPawnTest_C::BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraPivotLocationInterpParams");

	Params::APlayerPawnTest_C_BPOverrideCameraPivotLocationInterpParams_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLengthInterpParams
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParams                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPrimalCameraInterpParams APlayerPawnTest_C::BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraParams& CameraParams, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraArmLengthInterpParams");

	Params::APlayerPawnTest_C_BPOverrideCameraArmLengthInterpParams_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLength
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CurrentCameraArmLength                                           (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DesiredCameraArmLength                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)

float APlayerPawnTest_C::BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, bool ReturnValue, double* CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast, double CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraArmLength");

	Params::APlayerPawnTest_C_BPOverrideCameraArmLength_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast = CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast != nullptr)
		*CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast = Parms.CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.DontCreateAnyMoreSpawnUIs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 CallFunc_GetShooterHud_ShooterHud                                (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void APlayerPawnTest_C::DontCreateAnyMoreSpawnUIs(class AShooterHUD** CallFunc_GetShooterHud_ShooterHud, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "DontCreateAnyMoreSpawnUIs");

	Params::APlayerPawnTest_C_DontCreateAnyMoreSpawnUIs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetShooterHud_ShooterHud != nullptr)
		*CallFunc_GetShooterHud_ShooterHud = Parms.CallFunc_GetShooterHud_ShooterHud;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.GetShooterHud
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 ShooterHUD                                                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, Config)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ExportObject, Net, ZeroConstructor, Transient, Config, SubobjectReference)

bool APlayerPawnTest_C::GetShooterHud(class AShooterHUD* ShooterHUD, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "GetShooterHud");

	Params::APlayerPawnTest_C_GetShooterHud_Params Parms{};

	Parms.ShooterHUD = ShooterHUD;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.CallFunc_GetShooterHUD_ReturnValue = CallFunc_GetShooterHUD_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.SetGeneralizedUnlockedAchievementTags
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                GeneralizedUnlockedAchievementTags                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

TArray<class FName> APlayerPawnTest_C::SetGeneralizedUnlockedAchievementTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "SetGeneralizedUnlockedAchievementTags");

	Params::APlayerPawnTest_C_SetGeneralizedUnlockedAchievementTags_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.HasEquipToHideImplant
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ShouldHideImplant                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               Local_HideImplant                                                (Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalItem*                 CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)

bool APlayerPawnTest_C::HasEquipToHideImplant(bool* Local_HideImplant, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "HasEquipToHideImplant");

	Params::APlayerPawnTest_C_HasEquipToHideImplant_Params Parms{};

	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Local_HideImplant != nullptr)
		*Local_HideImplant = Parms.Local_HideImplant;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

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
// bool                               bForce                                                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_1                              (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, SubobjectReference)
// int32                              CallFunc_GetNumMaterials_ReturnValue_1                           (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_GetNumMaterials_ReturnValue_2                           (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable_2                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_1                               (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable_3                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// int32                              Temp_int_Variable_4                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_2                              (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_HasEquipToHideImplant_ShouldHideImplant                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class FName                        CallFunc_GetObjectName_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_3                              (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, NonTransactional)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_2                               (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_GetNumMaterials_ReturnValue_3                           (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_4                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue_5                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_3                               (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_GetNumMaterials_ReturnValue_4                           (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, SubobjectReference, NonTransactional)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue_6                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_4                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_4                              (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// int32                              Temp_int_Variable_5                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_4                               (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_4             (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_4                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_5                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_5                               (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_5                              (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_5             (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_GetNumMaterials_ReturnValue_5                           (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_5                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)

bool APlayerPawnTest_C::SetupMeshes(bool bForce, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_2, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_3, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_4, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_5, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_5, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "SetupMeshes");

	Params::APlayerPawnTest_C_SetupMeshes_Params Parms{};

	Parms.bForce = bForce;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue_1 = CallFunc_GetMaterial_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue_2 = CallFunc_GetMaterial_ReturnValue_2;
	Parms.CallFunc_GetMaterial_ReturnValue_3 = CallFunc_GetMaterial_ReturnValue_3;
	Parms.CallFunc_GetMaterial_ReturnValue_4 = CallFunc_GetMaterial_ReturnValue_4;
	Parms.CallFunc_GetMaterial_ReturnValue_5 = CallFunc_GetMaterial_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_AssetResolve_ReturnValue != nullptr)
		*CallFunc_AssetResolve_ReturnValue = Parms.CallFunc_AssetResolve_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_AssetResolve_ReturnValue_1 != nullptr)
		*CallFunc_AssetResolve_ReturnValue_1 = Parms.CallFunc_AssetResolve_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_CreateDynamicMaterialInstance_ReturnValue != nullptr)
		*CallFunc_CreateDynamicMaterialInstance_ReturnValue = Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	if (CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 != nullptr)
		*CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	if (CallFunc_AssetResolve_ReturnValue_2 != nullptr)
		*CallFunc_AssetResolve_ReturnValue_2 = Parms.CallFunc_AssetResolve_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_AssetResolve_ReturnValue_3 != nullptr)
		*CallFunc_AssetResolve_ReturnValue_3 = Parms.CallFunc_AssetResolve_ReturnValue_3;

	if (CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 != nullptr)
		*CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;

	if (CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 != nullptr)
		*CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 = Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;

	if (CallFunc_AssetResolve_ReturnValue_4 != nullptr)
		*CallFunc_AssetResolve_ReturnValue_4 = Parms.CallFunc_AssetResolve_ReturnValue_4;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_CreateDynamicMaterialInstance_ReturnValue_4 != nullptr)
		*CallFunc_CreateDynamicMaterialInstance_ReturnValue_4 = Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_4;

	if (CallFunc_AssetResolve_ReturnValue_5 != nullptr)
		*CallFunc_AssetResolve_ReturnValue_5 = Parms.CallFunc_AssetResolve_ReturnValue_5;

	if (CallFunc_CreateDynamicMaterialInstance_ReturnValue_5 != nullptr)
		*CallFunc_CreateDynamicMaterialInstance_ReturnValue_5 = Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_5;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPUnlockedAllExplorerNotes
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)

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
// int32                              OutVal                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)

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
// int32                              NewNum                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)

void APlayerPawnTest_C::SetNumChibiLevelUps(int32 NewNum, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "SetNumChibiLevelUps");

	Params::APlayerPawnTest_C_SetNumChibiLevelUps_Params Parms{};

	Parms.NewNum = NewNum;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetPlayerHexagonCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Ret_val                                                          (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool APlayerPawnTest_C::BPGetPlayerHexagonCount(int32 ReturnValue, int32 Ret_val, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPGetPlayerHexagonCount");

	Params::APlayerPawnTest_C_BPGetPlayerHexagonCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Ret_val = Ret_val;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_IsRunningOnServer_OutNetworkMode = CallFunc_IsRunningOnServer_OutNetworkMode;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPSetPlayerHexagonCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewHexagonCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Ret_val                                                          (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)

bool APlayerPawnTest_C::BPSetPlayerHexagonCount(int32 NewHexagonCount, bool ReturnValue, bool Ret_val, bool* CallFunc_IsValid_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPSetPlayerHexagonCount");

	Params::APlayerPawnTest_C_BPSetPlayerHexagonCount_Params Parms{};

	Parms.NewHexagonCount = NewHexagonCount;
	Parms.ReturnValue = ReturnValue;
	Parms.Ret_val = Ret_val;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_IsRunningOnServer_OutNetworkMode = CallFunc_IsRunningOnServer_OutNetworkMode;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetShowDebugAnimationComponents
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMeshComponent*>SkelMeshComponents                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class USkeletalMeshComponent*>Comps                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue_1                             (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
// class AShooterWeapon*              CallFunc_GetWeapon_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference, NonTransactional)

TArray<class USkeletalMeshComponent*> APlayerPawnTest_C::BPGetShowDebugAnimationComponents(bool* Temp_bool_Variable, bool* CallFunc_IsFirstPerson_ReturnValue, bool* CallFunc_IsFirstPerson_ReturnValue_1, int32* CallFunc_Array_Add_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_1, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent** K2Node_Select_Default, int32* CallFunc_Array_Add_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPGetShowDebugAnimationComponents");

	Params::APlayerPawnTest_C_BPGetShowDebugAnimationComponents_Params Parms{};

	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

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

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_Array_Add_ReturnValue_3 != nullptr)
		*CallFunc_Array_Add_ReturnValue_3 = Parms.CallFunc_Array_Add_ReturnValue_3;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetOverrideCameraInterpSpeed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DefaultTPVCameraSpeedInterpolationMultiplier                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DefaultTPVOffsetInterpSpeed                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              TPVCameraSpeedInterpolationMultiplier                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              TPVOffsetInterpSpeed                                             (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             LocalDefaultTPVOffsetInterpSpeed                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_HasBuff_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, Config, SubobjectReference)
// double                             K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast (Edit, ConstParm, BlueprintVisible, ZeroConstructor, Transient, Config, SubobjectReference)
// float                              K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

double APlayerPawnTest_C::BPGetOverrideCameraInterpSpeed(bool* CallFunc_HasBuff_ReturnValue, double K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast, float* K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPGetOverrideCameraInterpSpeed");

	Params::APlayerPawnTest_C_BPGetOverrideCameraInterpSpeed_Params Parms{};

	Parms.K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast = K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_HasBuff_ReturnValue != nullptr)
		*CallFunc_HasBuff_ReturnValue = Parms.CallFunc_HasBuff_ReturnValue;

	if (K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast != nullptr)
		*K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast = Parms.K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.ShowHUDNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// double                             LifetimeSeconds                                                  (ExportObject, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             DisplayScale                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class USoundCue*                   SoundToPlay                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

double APlayerPawnTest_C::ShowHUDNotification(class FString* Text, struct FLinearColor* Color, double LifetimeSeconds, class USoundCue** SoundToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ShowHUDNotification");

	Params::APlayerPawnTest_C_ShowHUDNotification_Params Parms{};

	Parms.LifetimeSeconds = LifetimeSeconds;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (SoundToPlay != nullptr)
		*SoundToPlay = Parms.SoundToPlay;

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
// double                             Angle                                                            (Edit, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
// double                             Range                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// class USkeletalMeshComponent*      FirstPersonMasterPosecomponent                                   (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void APlayerPawnTest_C::BPSetFirstPersonMasterPoseComponent(class USkeletalMeshComponent* FirstPersonMasterPosecomponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPSetFirstPersonMasterPoseComponent");

	Params::APlayerPawnTest_C_BPSetFirstPersonMasterPoseComponent_Params Parms{};

	Parms.FirstPersonMasterPosecomponent = FirstPersonMasterPosecomponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.DefeatedBoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalDinoCharacter*        BossCharacter                                                    (ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// class FName                        BossTag                                                          (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              BossDifficulty                                                   (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)

bool APlayerPawnTest_C::DefeatedBoss(class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, class AGameModeBase* CallFunc_GetGameMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "DefeatedBoss");

	Params::APlayerPawnTest_C_DefeatedBoss_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.ServerAscend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DifficultyIndex                                                  (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bImmediateAscend                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               bSuppressAchievements                                            (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               bIsCheatAscend                                                   (ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsListenServer_ReturnValue                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_K2_TeleportTo_ReturnValue                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FString                      Temp_string_Variable                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchName_CmpSuccess                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AController*                 CallFunc_GetCharacterController_ReturnValue                      (Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UWorld*                      CallFunc_GetPrimaryWorld_ReturnValue                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue                            (BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class APrimalWorldSettings*        K2Node_DynamicCast_AsPrimal_World_Settings                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UClass*                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode_1                         (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetServerSettingsFloat_OutFloat                         (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetServerSettingsFloat_ReturnValue                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, SubobjectReference)
// float                              CallFunc_GetServerSettingsFloat_OutFloat_1                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_GetServerSettingsFloat_ReturnValue_1                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_GetServerSettingsFloat_OutFloat_2                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GetServerSettingsFloat_ReturnValue_2                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_K2_TeleportTo_ReturnValue_1                             (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

double APlayerPawnTest_C::ServerAscend(int32* DifficultyIndex, bool bImmediateAscend, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, struct FRotator* CallFunc_K2_GetActorRotation_ReturnValue, bool* CallFunc_K2_TeleportTo_ReturnValue, bool K2Node_SwitchName_CmpSuccess, class FString* K2Node_Select_Default, class AController* CallFunc_GetCharacterController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, struct FRotator* CallFunc_K2_GetActorRotation_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, bool CallFunc_GetServerSettingsFloat_ReturnValue, bool CallFunc_GetServerSettingsFloat_ReturnValue_1, bool CallFunc_GetServerSettingsFloat_ReturnValue_2, bool* CallFunc_K2_TeleportTo_ReturnValue_1, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ServerAscend");

	Params::APlayerPawnTest_C_ServerAscend_Params Parms{};

	Parms.bImmediateAscend = bImmediateAscend;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetCharacterController_ReturnValue = CallFunc_GetCharacterController_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.CallFunc_GetServerSettingsFloat_ReturnValue = CallFunc_GetServerSettingsFloat_ReturnValue;
	Parms.CallFunc_GetServerSettingsFloat_ReturnValue_1 = CallFunc_GetServerSettingsFloat_ReturnValue_1;
	Parms.CallFunc_GetServerSettingsFloat_ReturnValue_2 = CallFunc_GetServerSettingsFloat_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller_1 = K2Node_DynamicCast_AsShooter_Player_Controller_1;

	UObject::ProcessEvent(Func, &Parms);

	if (DifficultyIndex != nullptr)
		*DifficultyIndex = Parms.DifficultyIndex;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_K2_GetActorRotation_ReturnValue != nullptr)
		*CallFunc_K2_GetActorRotation_ReturnValue = std::move(Parms.CallFunc_K2_GetActorRotation_ReturnValue);

	if (CallFunc_K2_TeleportTo_ReturnValue != nullptr)
		*CallFunc_K2_TeleportTo_ReturnValue = Parms.CallFunc_K2_TeleportTo_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_1 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1;

	if (K2Node_DynamicCast_AsShooter_Player_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_State = Parms.K2Node_DynamicCast_AsShooter_Player_State;

	if (CallFunc_K2_GetActorRotation_ReturnValue_1 != nullptr)
		*CallFunc_K2_GetActorRotation_ReturnValue_1 = std::move(Parms.CallFunc_K2_GetActorRotation_ReturnValue_1);

	if (CallFunc_K2_TeleportTo_ReturnValue_1 != nullptr)
		*CallFunc_K2_TeleportTo_ReturnValue_1 = Parms.CallFunc_K2_TeleportTo_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.PlayerCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TheCommand                                                       (Edit, ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      RetVal                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class FString                      CallFunc_PlayerCommand_ReturnValue                               (ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

bool APlayerPawnTest_C::PlayerCommand(class FString* TheCommand, const class FString& ReturnValue, const class FString& CallFunc_PlayerCommand_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "PlayerCommand");

	Params::APlayerPawnTest_C_PlayerCommand_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_PlayerCommand_ReturnValue = CallFunc_PlayerCommand_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TheCommand != nullptr)
		*TheCommand = std::move(Parms.TheCommand);

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
// int32                              AscendIndex                                                      (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, SubobjectReference)
// bool                               bImmediateAscend                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               bIsCheatAscend                                                   (ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

bool APlayerPawnTest_C::NetClientAscend(bool bImmediateAscend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "NetClientAscend");

	Params::APlayerPawnTest_C_NetClientAscend_Params Parms{};

	Parms.bImmediateAscend = bImmediateAscend;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.ClientShowHUDNotification
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// double                             LifetimeSeconds                                                  (ExportObject, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             DisplayScale                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class USoundCue*                   SoundToPlay                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

double APlayerPawnTest_C::ClientShowHUDNotification(class FString* Text, struct FLinearColor* Color, double LifetimeSeconds, class USoundCue** SoundToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ClientShowHUDNotification");

	Params::APlayerPawnTest_C_ClientShowHUDNotification_Params Parms{};

	Parms.LifetimeSeconds = LifetimeSeconds;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (SoundToPlay != nullptr)
		*SoundToPlay = Parms.SoundToPlay;

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
// class FName                        SocketName                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// class APrimalCharacter*            VictimChar                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

class APrimalCharacter* APlayerPawnTest_C::BPSpawnAttackerDamageImpactFX(class FName* SocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPSpawnAttackerDamageImpactFX");

	Params::APlayerPawnTest_C_BPSpawnAttackerDamageImpactFX_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SocketName != nullptr)
		*SocketName = Parms.SocketName;

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              K2Node_CustomEvent_AscendIndex                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_CustomEvent_bImmediateAscend                              (BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_CustomEvent_bIsCheatAscend                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetUserSettings_ReturnValue                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UFinalCreditsUI_C*           CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class FString                      K2Node_CustomEvent_Text                                          (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             K2Node_CustomEvent_LifetimeSeconds                               (Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// double                             K2Node_CustomEvent_DisplayScale                                  (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class USoundCue*                   K2Node_CustomEvent_SoundToPlay                                   (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ExportObject, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue_1                               (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsShipping_ReturnValue                                  (BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class FString                      CallFunc_BPGetPrimaryMapName_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class FName                        K2Node_Event_SocketName                                          (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_Event_VictimChar                                          (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FLinearColor                CallFunc_GetFXBloodColor_ReturnValue                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// struct FLinearColor                Temp_struct_Variable                                             (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FLinearColor                Temp_struct_Variable_1                                           (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// struct FLinearColor                Temp_struct_Variable_2                                           (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_Variable_2                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class USceneComponent*             K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class USceneComponent*             K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class USceneComponent*             K2Node_Select_Default_2                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FMin_ReturnValue                                        (Edit, EditFixedSize, Parm, ReturnParm, SubobjectReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Max_ReturnValue                                         (ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue_1                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FLinearColor                K2Node_Select_Default_3                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_2                 (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_BPAddHUDNotification_DisplayTime_ImplicitCast           (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// float                              CallFunc_BPAddHUDNotification_DisplayScale_ImplicitCast          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast_1                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_A_ImplicitCast_1                            (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference)

float APlayerPawnTest_C::ExecuteUbergraph_PlayerPawnTest(bool* Temp_bool_Variable, int32* K2Node_CustomEvent_AscendIndex, bool* K2Node_CustomEvent_bImmediateAscend, bool K2Node_CustomEvent_bIsCheatAscend, const class FString& CallFunc_Conv_NameToString_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, class FString* K2Node_CustomEvent_Text, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller_1, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue, bool* CallFunc_TriggerLevelCustomEvents_ReturnValue, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* Temp_bool_Variable_1, bool* Temp_bool_Variable_2, bool* CallFunc_IsFirstPerson_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class USceneComponent** K2Node_Select_Default, class USceneComponent** K2Node_Select_Default_1, class USceneComponent** K2Node_Select_Default_2, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_TriggerLevelCustomEvents_ReturnValue_1, struct FLinearColor* K2Node_Select_Default_3, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller_2, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ExecuteUbergraph_PlayerPawnTest");

	Params::APlayerPawnTest_C_ExecuteUbergraph_PlayerPawnTest_Params Parms{};

	Parms.K2Node_CustomEvent_bIsCheatAscend = K2Node_CustomEvent_bIsCheatAscend;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller_1 = K2Node_DynamicCast_AsShooter_Player_Controller_1;
	Parms.CallFunc_GetShooterHUD_ReturnValue = CallFunc_GetShooterHUD_ReturnValue;
	Parms.CallFunc_BPGetPrimaryMapName_ReturnValue = CallFunc_BPGetPrimaryMapName_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller_2 = K2Node_DynamicCast_AsShooter_Player_Controller_2;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_1 = CallFunc_SelectFloat_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_CustomEvent_AscendIndex != nullptr)
		*K2Node_CustomEvent_AscendIndex = Parms.K2Node_CustomEvent_AscendIndex;

	if (K2Node_CustomEvent_bImmediateAscend != nullptr)
		*K2Node_CustomEvent_bImmediateAscend = Parms.K2Node_CustomEvent_bImmediateAscend;

	if (K2Node_CustomEvent_Text != nullptr)
		*K2Node_CustomEvent_Text = std::move(Parms.K2Node_CustomEvent_Text);

	if (CallFunc_TriggerLevelCustomEvents_ReturnValue != nullptr)
		*CallFunc_TriggerLevelCustomEvents_ReturnValue = Parms.CallFunc_TriggerLevelCustomEvents_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (Temp_bool_Variable_2 != nullptr)
		*Temp_bool_Variable_2 = Parms.Temp_bool_Variable_2;

	if (CallFunc_IsFirstPerson_ReturnValue != nullptr)
		*CallFunc_IsFirstPerson_ReturnValue = Parms.CallFunc_IsFirstPerson_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = Parms.K2Node_Select_Default_2;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_TriggerLevelCustomEvents_ReturnValue_1 != nullptr)
		*CallFunc_TriggerLevelCustomEvents_ReturnValue_1 = Parms.CallFunc_TriggerLevelCustomEvents_ReturnValue_1;

	if (K2Node_Select_Default_3 != nullptr)
		*K2Node_Select_Default_3 = std::move(Parms.K2Node_Select_Default_3);

	return Parms.ReturnValue;

}

}


