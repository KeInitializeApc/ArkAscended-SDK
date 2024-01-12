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
// struct FVector                     CurrentCameraPivotLocation                                       (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     DesiredCameraPivotLocation                                       (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool APlayerPawnTest_C::BPOverrideCameraDesiredPivotLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraDesiredPivotLocation");

	Params::APlayerPawnTest_C_BPOverrideCameraDesiredPivotLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.GetFXBloodColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinearColor APlayerPawnTest_C::GetFXBloodColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "GetFXBloodColor");

	Params::APlayerPawnTest_C_GetFXBloodColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// class UPDA_VoiceCollection_C*      K2Node_DynamicCast_AsPDA_Voice_Collection                        (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class UPDA_VoiceCollection_C* APlayerPawnTest_C::AssignAssetsFromVoiceCollection(bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "AssignAssetsFromVoiceCollection");

	Params::APlayerPawnTest_C_AssignAssetsFromVoiceCollection_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotRotation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CurrentCameraPivotRotation                                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    DesiredCameraPivotRotation                                       (EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

bool APlayerPawnTest_C::BPOverrideCameraDesiredPivotRotation(float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FRotator* CallFunc_MakeRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraDesiredPivotRotation");

	Params::APlayerPawnTest_C_BPOverrideCameraDesiredPivotRotation_Params Parms{};


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
// struct FPrimalCameraParams         CameraParams                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FVector                     DesiredCameraOffset                                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool APlayerPawnTest_C::BPOverrideCameraDesiredPivotOffset(const struct FPrimalCameraParams& CameraParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraDesiredPivotOffset");

	Params::APlayerPawnTest_C_BPOverrideCameraDesiredPivotOffset_Params Parms{};

	Parms.CameraParams = CameraParams;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraPivotLocationInterpParams
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

bool APlayerPawnTest_C::BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraPivotLocationInterpParams");

	Params::APlayerPawnTest_C_BPOverrideCameraPivotLocationInterpParams_Params Parms{};

	Parms.CameraParams = CameraParams;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLengthInterpParams
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParams                                                  (BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool APlayerPawnTest_C::BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraParams& CameraParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraArmLengthInterpParams");

	Params::APlayerPawnTest_C_BPOverrideCameraArmLengthInterpParams_Params Parms{};

	Parms.CameraParams = CameraParams;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLength
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              CurrentCameraArmLength                                           (BlueprintVisible, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              DesiredCameraArmLength                                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast(Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool APlayerPawnTest_C::BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, double CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast, double* CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraArmLength");

	Params::APlayerPawnTest_C_BPOverrideCameraArmLength_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast = CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast != nullptr)
		*CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast = Parms.CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.DontCreateAnyMoreSpawnUIs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 CallFunc_GetShooterHud_ShooterHud                                (BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

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
// class AShooterHUD*                 ShooterHUD                                                       (ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class AShooterPlayerController* APlayerPawnTest_C::GetShooterHud(class AController** CallFunc_GetController_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "GetShooterHud");

	Params::APlayerPawnTest_C_GetShooterHud_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetController_ReturnValue != nullptr)
		*CallFunc_GetController_ReturnValue = Parms.CallFunc_GetController_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetShooterHUD_ReturnValue != nullptr)
		*CallFunc_GetShooterHUD_ReturnValue = Parms.CallFunc_GetShooterHUD_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.SetGeneralizedUnlockedAchievementTags
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                GeneralizedUnlockedAchievementTags                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// bool                               ShouldHideImplant                                                (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Local_HideImplant                                                (BlueprintReadOnly, OutParm, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalItem*                 CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)

bool APlayerPawnTest_C::HasEquipToHideImplant(bool* Local_HideImplant, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "HasEquipToHideImplant");

	Params::APlayerPawnTest_C_HasEquipToHideImplant_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Local_HideImplant != nullptr)
		*Local_HideImplant = Parms.Local_HideImplant;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

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
// bool                               bForce                                                           (Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_1                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_GetNumMaterials_ReturnValue_1                           (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (EditFixedSize, ReturnParm, EditConst, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_GetNumMaterials_ReturnValue_2                           (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable_2                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_1                               (BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (EditFixedSize, ReturnParm, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable_3                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Variable_4                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_2                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_HasEquipToHideImplant_ShouldHideImplant                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FName                        CallFunc_GetObjectName_ReturnValue                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_3                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_2                               (BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_GetNumMaterials_ReturnValue_3                           (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (EditFixedSize, ReturnParm, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_4                            (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue_5                            (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_3                               (BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional)
// int32                              CallFunc_GetNumMaterials_ReturnValue_4                           (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (EditFixedSize, ReturnParm, EditConst, SubobjectReference, NonTransactional)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue_6                            (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_4                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_4                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Variable_5                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_4                               (BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_4             (EditFixedSize, ReturnParm, EditConst, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_4                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_5                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_5                               (BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_5                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_5             (EditFixedSize, ReturnParm, EditConst, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_GetNumMaterials_ReturnValue_5                           (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_5                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)

bool APlayerPawnTest_C::SetupMeshes(bool* bForce, TSoftObjectPtr<class USkeletalMesh>* CallFunc_Array_Get_Item, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, TSoftObjectPtr<class USkeletalMesh>* CallFunc_Array_Get_Item_1, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32* Temp_int_Variable_1, int32* CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32* Temp_int_Variable_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32* Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32* Temp_int_Variable_4, TSoftObjectPtr<class USkeletalMesh>* CallFunc_Array_Get_Item_2, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_2, TSoftObjectPtr<class USkeletalMesh>* CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_NameName_ReturnValue, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_2, int32* CallFunc_Array_Length_ReturnValue_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_3, int32* CallFunc_Array_Length_ReturnValue_4, TSoftObjectPtr<class USkeletalMesh>* CallFunc_Array_Get_Item_4, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_3, int32* Temp_int_Variable_5, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, TSoftObjectPtr<class USkeletalMesh>* CallFunc_Array_Get_Item_5, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_5, class USkeletalMesh** CallFunc_AssetResolve_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "SetupMeshes");

	Params::APlayerPawnTest_C_SetupMeshes_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetMaterial_ReturnValue_1 = CallFunc_GetMaterial_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue_2 = CallFunc_GetMaterial_ReturnValue_2;
	Parms.CallFunc_GetMaterial_ReturnValue_3 = CallFunc_GetMaterial_ReturnValue_3;
	Parms.CallFunc_GetMaterial_ReturnValue_4 = CallFunc_GetMaterial_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_GetMaterial_ReturnValue_5 = CallFunc_GetMaterial_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (bForce != nullptr)
		*bForce = Parms.bForce;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_AssetResolve_ReturnValue != nullptr)
		*CallFunc_AssetResolve_ReturnValue = Parms.CallFunc_AssetResolve_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_Array_Length_ReturnValue_1 != nullptr)
		*CallFunc_Array_Length_ReturnValue_1 = Parms.CallFunc_Array_Length_ReturnValue_1;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = Parms.CallFunc_Array_Get_Item_1;

	if (CallFunc_AssetResolve_ReturnValue_1 != nullptr)
		*CallFunc_AssetResolve_ReturnValue_1 = Parms.CallFunc_AssetResolve_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (CallFunc_Array_Length_ReturnValue_2 != nullptr)
		*CallFunc_Array_Length_ReturnValue_2 = Parms.CallFunc_Array_Length_ReturnValue_2;

	if (Temp_int_Variable_2 != nullptr)
		*Temp_int_Variable_2 = Parms.Temp_int_Variable_2;

	if (Temp_int_Variable_3 != nullptr)
		*Temp_int_Variable_3 = Parms.Temp_int_Variable_3;

	if (Temp_int_Variable_4 != nullptr)
		*Temp_int_Variable_4 = Parms.Temp_int_Variable_4;

	if (CallFunc_Array_Get_Item_2 != nullptr)
		*CallFunc_Array_Get_Item_2 = Parms.CallFunc_Array_Get_Item_2;

	if (CallFunc_AssetResolve_ReturnValue_2 != nullptr)
		*CallFunc_AssetResolve_ReturnValue_2 = Parms.CallFunc_AssetResolve_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_Array_Get_Item_3 != nullptr)
		*CallFunc_Array_Get_Item_3 = Parms.CallFunc_Array_Get_Item_3;

	if (CallFunc_AssetResolve_ReturnValue_3 != nullptr)
		*CallFunc_AssetResolve_ReturnValue_3 = Parms.CallFunc_AssetResolve_ReturnValue_3;

	if (CallFunc_Array_Length_ReturnValue_3 != nullptr)
		*CallFunc_Array_Length_ReturnValue_3 = Parms.CallFunc_Array_Length_ReturnValue_3;

	if (CallFunc_Array_Length_ReturnValue_4 != nullptr)
		*CallFunc_Array_Length_ReturnValue_4 = Parms.CallFunc_Array_Length_ReturnValue_4;

	if (CallFunc_Array_Get_Item_4 != nullptr)
		*CallFunc_Array_Get_Item_4 = Parms.CallFunc_Array_Get_Item_4;

	if (CallFunc_AssetResolve_ReturnValue_4 != nullptr)
		*CallFunc_AssetResolve_ReturnValue_4 = Parms.CallFunc_AssetResolve_ReturnValue_4;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (Temp_int_Variable_5 != nullptr)
		*Temp_int_Variable_5 = Parms.Temp_int_Variable_5;

	if (CallFunc_Array_Get_Item_5 != nullptr)
		*CallFunc_Array_Get_Item_5 = Parms.CallFunc_Array_Get_Item_5;

	if (CallFunc_AssetResolve_ReturnValue_5 != nullptr)
		*CallFunc_AssetResolve_ReturnValue_5 = Parms.CallFunc_AssetResolve_ReturnValue_5;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPUnlockedAllExplorerNotes
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// int32                              OutVal                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnInstance, EditConst, SubobjectReference)

void APlayerPawnTest_C::GetTheNumChibiLevelUps(int32 OutVal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "GetTheNumChibiLevelUps");

	Params::APlayerPawnTest_C_GetTheNumChibiLevelUps_Params Parms{};

	Parms.OutVal = OutVal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.SetNumChibiLevelUps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewNum                                                           (Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool APlayerPawnTest_C::SetNumChibiLevelUps(int32* NewNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "SetNumChibiLevelUps");

	Params::APlayerPawnTest_C_SetNumChibiLevelUps_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewNum != nullptr)
		*NewNum = Parms.NewNum;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetPlayerHexagonCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Ret_val                                                          (Edit, ConstParm, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

class UPrimalPlayerDataBP_Base_C* APlayerPawnTest_C::BPGetPlayerHexagonCount(int32 Ret_val, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPGetPlayerHexagonCount");

	Params::APlayerPawnTest_C_BPGetPlayerHexagonCount_Params Parms{};

	Parms.Ret_val = Ret_val;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPSetPlayerHexagonCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewHexagonCount                                                  (ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Ret_val                                                          (Edit, ConstParm, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)

bool APlayerPawnTest_C::BPSetPlayerHexagonCount(int32 NewHexagonCount, bool Ret_val, bool* CallFunc_IsValid_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPSetPlayerHexagonCount");

	Params::APlayerPawnTest_C_BPSetPlayerHexagonCount_Params Parms{};

	Parms.NewHexagonCount = NewHexagonCount;
	Parms.Ret_val = Ret_val;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetShowDebugAnimationComponents
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMeshComponent*>SkelMeshComponents                                               (Edit, ConstParm, ExportObject, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// TArray<class USkeletalMeshComponent*>Comps                                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue_1                             (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// class AShooterWeapon*              CallFunc_GetWeapon_ReturnValue                                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, NonTransactional)

bool APlayerPawnTest_C::BPGetShowDebugAnimationComponents(TArray<class USkeletalMeshComponent*>* SkelMeshComponents, TArray<class USkeletalMeshComponent*>* Comps, bool Temp_bool_Variable, int32* CallFunc_Array_Add_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_1, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue, int32* CallFunc_Array_Add_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent** K2Node_Select_Default, int32* CallFunc_Array_Add_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPGetShowDebugAnimationComponents");

	Params::APlayerPawnTest_C_BPGetShowDebugAnimationComponents_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SkelMeshComponents != nullptr)
		*SkelMeshComponents = std::move(Parms.SkelMeshComponents);

	if (Comps != nullptr)
		*Comps = std::move(Parms.Comps);

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
// float                              DefaultTPVCameraSpeedInterpolationMultiplier                     (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              DefaultTPVOffsetInterpSpeed                                      (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              TPVCameraSpeedInterpolationMultiplier                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              TPVOffsetInterpSpeed                                             (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             LocalDefaultTPVOffsetInterpSpeed                                 (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_HasBuff_ReturnValue                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast (Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

double APlayerPawnTest_C::BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed, bool CallFunc_HasBuff_ReturnValue, double* K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast, float* K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPGetOverrideCameraInterpSpeed");

	Params::APlayerPawnTest_C_BPGetOverrideCameraInterpSpeed_Params Parms{};

	Parms.CallFunc_HasBuff_ReturnValue = CallFunc_HasBuff_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DefaultTPVCameraSpeedInterpolationMultiplier != nullptr)
		*DefaultTPVCameraSpeedInterpolationMultiplier = Parms.DefaultTPVCameraSpeedInterpolationMultiplier;

	if (DefaultTPVOffsetInterpSpeed != nullptr)
		*DefaultTPVOffsetInterpSpeed = Parms.DefaultTPVOffsetInterpSpeed;

	if (TPVCameraSpeedInterpolationMultiplier != nullptr)
		*TPVCameraSpeedInterpolationMultiplier = Parms.TPVCameraSpeedInterpolationMultiplier;

	if (TPVOffsetInterpSpeed != nullptr)
		*TPVOffsetInterpSpeed = Parms.TPVOffsetInterpSpeed;

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
// double                             LifetimeSeconds                                                  (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             DisplayScale                                                     (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class USoundCue*                   SoundToPlay                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class FString APlayerPawnTest_C::ShowHUDNotification(struct FLinearColor* Color, double LifetimeSeconds, double DisplayScale, class USoundCue* SoundToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ShowHUDNotification");

	Params::APlayerPawnTest_C_ShowHUDNotification_Params Parms{};

	Parms.LifetimeSeconds = LifetimeSeconds;
	Parms.DisplayScale = DisplayScale;
	Parms.SoundToPlay = SoundToPlay;

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
// double                             Angle                                                            (Edit, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             Range                                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

double APlayerPawnTest_C::TrySpawnMoundEx(double Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "TrySpawnMoundEx");

	Params::APlayerPawnTest_C_TrySpawnMoundEx_Params Parms{};

	Parms.Range = Range;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPSetFirstPersonMasterPoseComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      FirstPersonMasterPosecomponent                                   (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

class USkeletalMeshComponent* APlayerPawnTest_C::BPSetFirstPersonMasterPoseComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPSetFirstPersonMasterPoseComponent");

	Params::APlayerPawnTest_C_BPSetFirstPersonMasterPoseComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.DefeatedBoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalDinoCharacter*        BossCharacter                                                    (BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FName                        BossTag                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              BossDifficulty                                                   (ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)

class UPrimalPlayerDataBP_Base_C* APlayerPawnTest_C::DefeatedBoss(class AController** CallFunc_GetController_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "DefeatedBoss");

	Params::APlayerPawnTest_C_DefeatedBoss_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetController_ReturnValue != nullptr)
		*CallFunc_GetController_ReturnValue = Parms.CallFunc_GetController_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.ServerAscend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DifficultyIndex                                                  (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bImmediateAscend                                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               bSuppressAchievements                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               bIsCheatAscend                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsListenServer_ReturnValue                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_K2_TeleportTo_ReturnValue                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      Temp_string_Variable                                             (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_SwitchName_CmpSuccess                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      Temp_string_Variable_1                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_2                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FString                      K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AController*                 CallFunc_GetCharacterController_ReturnValue                      (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UWorld*                      CallFunc_GetPrimaryWorld_ReturnValue                             (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue                            (Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APrimalWorldSettings*        K2Node_DynamicCast_AsPrimal_World_Settings                       (Edit, ExportObject, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UClass*                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, EditConst, SubobjectReference, Interp)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode_1                         (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetServerSettingsFloat_OutFloat                         (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_GetServerSettingsFloat_ReturnValue                      (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              CallFunc_GetServerSettingsFloat_OutFloat_1                       (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_GetServerSettingsFloat_ReturnValue_1                    (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// float                              CallFunc_GetServerSettingsFloat_OutFloat_2                       (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GetServerSettingsFloat_ReturnValue_2                    (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_K2_TeleportTo_ReturnValue_1                             (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

double APlayerPawnTest_C::ServerAscend(int32 DifficultyIndex, struct FRotator* CallFunc_K2_GetActorRotation_ReturnValue, bool* CallFunc_K2_TeleportTo_ReturnValue, int32* Temp_int_Variable, class FString* K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UClass** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, bool* K2Node_DynamicCast_bSuccess_2, struct FRotator* CallFunc_K2_GetActorRotation_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess_3, bool* K2Node_DynamicCast_bSuccess_4, bool* K2Node_DynamicCast_bSuccess_5, bool* CallFunc_K2_TeleportTo_ReturnValue_1, class AController** CallFunc_GetController_ReturnValue, bool* K2Node_DynamicCast_bSuccess_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ServerAscend");

	Params::APlayerPawnTest_C_ServerAscend_Params Parms{};

	Parms.DifficultyIndex = DifficultyIndex;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_World_Settings = K2Node_DynamicCast_AsPrimal_World_Settings;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_K2_GetActorRotation_ReturnValue != nullptr)
		*CallFunc_K2_GetActorRotation_ReturnValue = std::move(Parms.CallFunc_K2_GetActorRotation_ReturnValue);

	if (CallFunc_K2_TeleportTo_ReturnValue != nullptr)
		*CallFunc_K2_TeleportTo_ReturnValue = Parms.CallFunc_K2_TeleportTo_ReturnValue;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Player_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_State = Parms.K2Node_DynamicCast_AsShooter_Player_State;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_K2_GetActorRotation_ReturnValue_1 != nullptr)
		*CallFunc_K2_GetActorRotation_ReturnValue_1 = std::move(Parms.CallFunc_K2_GetActorRotation_ReturnValue_1);

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (K2Node_DynamicCast_bSuccess_4 != nullptr)
		*K2Node_DynamicCast_bSuccess_4 = Parms.K2Node_DynamicCast_bSuccess_4;

	if (K2Node_DynamicCast_bSuccess_5 != nullptr)
		*K2Node_DynamicCast_bSuccess_5 = Parms.K2Node_DynamicCast_bSuccess_5;

	if (CallFunc_K2_TeleportTo_ReturnValue_1 != nullptr)
		*CallFunc_K2_TeleportTo_ReturnValue_1 = Parms.CallFunc_K2_TeleportTo_ReturnValue_1;

	if (CallFunc_GetController_ReturnValue != nullptr)
		*CallFunc_GetController_ReturnValue = Parms.CallFunc_GetController_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_6 != nullptr)
		*K2Node_DynamicCast_bSuccess_6 = Parms.K2Node_DynamicCast_bSuccess_6;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.PlayerCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TheCommand                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      RetVal                                                           (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_PlayerCommand_ReturnValue                               (ExportObject, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

bool APlayerPawnTest_C::PlayerCommand(const class FString& TheCommand, const class FString& CallFunc_PlayerCommand_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "PlayerCommand");

	Params::APlayerPawnTest_C_PlayerCommand_Params Parms{};

	Parms.TheCommand = TheCommand;
	Parms.CallFunc_PlayerCommand_ReturnValue = CallFunc_PlayerCommand_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

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
// int32                              AscendIndex                                                      (ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               bImmediateAscend                                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               bIsCheatAscend                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool APlayerPawnTest_C::NetClientAscend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "NetClientAscend");

	Params::APlayerPawnTest_C_NetClientAscend_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.ClientShowHUDNotification
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// double                             LifetimeSeconds                                                  (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             DisplayScale                                                     (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class USoundCue*                   SoundToPlay                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class FString APlayerPawnTest_C::ClientShowHUDNotification(struct FLinearColor* Color, double LifetimeSeconds, double DisplayScale, class USoundCue* SoundToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ClientShowHUDNotification");

	Params::APlayerPawnTest_C_ClientShowHUDNotification_Params Parms{};

	Parms.LifetimeSeconds = LifetimeSeconds;
	Parms.DisplayScale = DisplayScale;
	Parms.SoundToPlay = SoundToPlay;

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
// class FName                        SocketName                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class APrimalCharacter*            VictimChar                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              K2Node_CustomEvent_AscendIndex                                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_CustomEvent_bImmediateAscend                              (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, SubobjectReference)
// bool                               K2Node_CustomEvent_bIsCheatAscend                                (Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetUserSettings_ReturnValue                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UFinalCreditsUI_C*           CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// class FString                      K2Node_CustomEvent_Text                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             K2Node_CustomEvent_LifetimeSeconds                               (Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             K2Node_CustomEvent_DisplayScale                                  (ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class USoundCue*                   K2Node_CustomEvent_SoundToPlay                                   (ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue_1                               (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsShipping_ReturnValue                                  (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_BPGetPrimaryMapName_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FName                        K2Node_Event_SocketName                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// class APrimalCharacter*            K2Node_Event_VictimChar                                          (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FLinearColor                CallFunc_GetFXBloodColor_ReturnValue                             (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FLinearColor                Temp_struct_Variable                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FLinearColor                Temp_struct_Variable_1                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FLinearColor                Temp_struct_Variable_2                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_2                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class USceneComponent*             K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class USceneComponent*             K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class USceneComponent*             K2Node_Select_Default_2                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FMin_ReturnValue                                        (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Max_ReturnValue                                         (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue_1                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// struct FLinearColor                K2Node_Select_Default_3                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_2                 (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_BPAddHUDNotification_DisplayTime_ImplicitCast           (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              CallFunc_BPAddHUDNotification_DisplayScale_ImplicitCast          (Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast_1                            (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_A_ImplicitCast_1                            (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)

double APlayerPawnTest_C::ExecuteUbergraph_PlayerPawnTest(bool Temp_bool_Variable, int32 K2Node_CustomEvent_AscendIndex, bool K2Node_CustomEvent_bImmediateAscend, bool K2Node_CustomEvent_bIsCheatAscend, const class FString& CallFunc_Conv_NameToString_ReturnValue, class AController** CallFunc_GetController_ReturnValue, bool* K2Node_DynamicCast_bSuccess, const class FString& K2Node_CustomEvent_Text, class AController** CallFunc_GetController_ReturnValue_1, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue, bool CallFunc_TriggerLevelCustomEvents_ReturnValue, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, int32* Temp_int_Variable, bool Temp_bool_Variable_2, bool CallFunc_BooleanAND_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class USceneComponent** K2Node_Select_Default, class USceneComponent** K2Node_Select_Default_1, class USceneComponent** K2Node_Select_Default_2, class UNiagaraComponent** CallFunc_SpawnSystemAttached_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_TriggerLevelCustomEvents_ReturnValue_1, struct FLinearColor* K2Node_Select_Default_3, class AController** CallFunc_GetController_ReturnValue_2, bool* K2Node_DynamicCast_bSuccess_2, double CallFunc_SelectFloat_B_ImplicitCast, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_1, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ExecuteUbergraph_PlayerPawnTest");

	Params::APlayerPawnTest_C_ExecuteUbergraph_PlayerPawnTest_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_AscendIndex = K2Node_CustomEvent_AscendIndex;
	Parms.K2Node_CustomEvent_bImmediateAscend = K2Node_CustomEvent_bImmediateAscend;
	Parms.K2Node_CustomEvent_bIsCheatAscend = K2Node_CustomEvent_bIsCheatAscend;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_TriggerLevelCustomEvents_ReturnValue = CallFunc_TriggerLevelCustomEvents_ReturnValue;
	Parms.CallFunc_BPGetPrimaryMapName_ReturnValue = CallFunc_BPGetPrimaryMapName_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_TriggerLevelCustomEvents_ReturnValue_1 = CallFunc_TriggerLevelCustomEvents_ReturnValue_1;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_1 = CallFunc_SelectFloat_B_ImplicitCast_1;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetController_ReturnValue != nullptr)
		*CallFunc_GetController_ReturnValue = Parms.CallFunc_GetController_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetController_ReturnValue_1 != nullptr)
		*CallFunc_GetController_ReturnValue_1 = Parms.CallFunc_GetController_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetShooterHUD_ReturnValue != nullptr)
		*CallFunc_GetShooterHUD_ReturnValue = Parms.CallFunc_GetShooterHUD_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = Parms.K2Node_Select_Default_2;

	if (CallFunc_SpawnSystemAttached_ReturnValue != nullptr)
		*CallFunc_SpawnSystemAttached_ReturnValue = Parms.CallFunc_SpawnSystemAttached_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (K2Node_Select_Default_3 != nullptr)
		*K2Node_Select_Default_3 = std::move(Parms.K2Node_Select_Default_3);

	if (CallFunc_GetController_ReturnValue_2 != nullptr)
		*CallFunc_GetController_ReturnValue_2 = Parms.CallFunc_GetController_ReturnValue_2;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_Greater_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Greater_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	if (CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 != nullptr)
		*CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


