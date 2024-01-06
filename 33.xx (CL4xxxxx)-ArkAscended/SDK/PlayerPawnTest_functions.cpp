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
// struct FVector                     CurrentCameraPivotLocation                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     DesiredCameraPivotLocation                                       (ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void APlayerPawnTest_C::BPOverrideCameraDesiredPivotLocation(struct FVector* CurrentCameraPivotLocation, struct FVector* DesiredCameraPivotLocation, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraDesiredPivotLocation");

	Params::APlayerPawnTest_C_BPOverrideCameraDesiredPivotLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentCameraPivotLocation != nullptr)
		*CurrentCameraPivotLocation = std::move(Parms.CurrentCameraPivotLocation);

	if (DesiredCameraPivotLocation != nullptr)
		*DesiredCameraPivotLocation = std::move(Parms.DesiredCameraPivotLocation);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.GetFXBloodColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void APlayerPawnTest_C::GetFXBloodColor(struct FLinearColor* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "GetFXBloodColor");

	Params::APlayerPawnTest_C_GetFXBloodColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

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
// class UPDA_VoiceCollection_C*      K2Node_DynamicCast_AsPDA_Voice_Collection                        (Edit, ConstParm, ExportObject, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

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
// struct FRotator                    CurrentCameraPivotRotation                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    DesiredCameraPivotRotation                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

void APlayerPawnTest_C::BPOverrideCameraDesiredPivotRotation(struct FRotator* CurrentCameraPivotRotation, struct FRotator* DesiredCameraPivotRotation, bool* ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FRotator* CallFunc_MakeRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraDesiredPivotRotation");

	Params::APlayerPawnTest_C_BPOverrideCameraDesiredPivotRotation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentCameraPivotRotation != nullptr)
		*CurrentCameraPivotRotation = std::move(Parms.CurrentCameraPivotRotation);

	if (DesiredCameraPivotRotation != nullptr)
		*DesiredCameraPivotRotation = std::move(Parms.DesiredCameraPivotRotation);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_MakeRotator_ReturnValue != nullptr)
		*CallFunc_MakeRotator_ReturnValue = std::move(Parms.CallFunc_MakeRotator_ReturnValue);

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     DesiredCameraOffset                                              (BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FPrimalCameraParams APlayerPawnTest_C::BPOverrideCameraDesiredPivotOffset(struct FVector* DesiredCameraOffset, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraDesiredPivotOffset");

	Params::APlayerPawnTest_C_BPOverrideCameraDesiredPivotOffset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DesiredCameraOffset != nullptr)
		*DesiredCameraOffset = std::move(Parms.DesiredCameraOffset);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraPivotLocationInterpParams
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraPivotZInterpOverridesPivotZInterpOverrides                                            (BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   LastInterpParamsX                                                (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   LastInterpParamsY                                                (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   LastInterpParamsZ                                                (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParamsX                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParamsY                                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParamsZ                                                 (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FPrimalCameraParams APlayerPawnTest_C::BPOverrideCameraPivotLocationInterpParams(struct FPrimalCameraPivotZInterpOverrides* PivotZInterpOverrides, struct FPrimalCameraInterpParams* LastInterpParamsX, struct FPrimalCameraInterpParams* LastInterpParamsY, struct FPrimalCameraInterpParams* LastInterpParamsZ, struct FPrimalCameraInterpParams* OutInterpParamsX, struct FPrimalCameraInterpParams* OutInterpParamsY, struct FPrimalCameraInterpParams* OutInterpParamsZ, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraPivotLocationInterpParams");

	Params::APlayerPawnTest_C_BPOverrideCameraPivotLocationInterpParams_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PivotZInterpOverrides != nullptr)
		*PivotZInterpOverrides = std::move(Parms.PivotZInterpOverrides);

	if (LastInterpParamsX != nullptr)
		*LastInterpParamsX = std::move(Parms.LastInterpParamsX);

	if (LastInterpParamsY != nullptr)
		*LastInterpParamsY = std::move(Parms.LastInterpParamsY);

	if (LastInterpParamsZ != nullptr)
		*LastInterpParamsZ = std::move(Parms.LastInterpParamsZ);

	if (OutInterpParamsX != nullptr)
		*OutInterpParamsX = std::move(Parms.OutInterpParamsX);

	if (OutInterpParamsY != nullptr)
		*OutInterpParamsY = std::move(Parms.OutInterpParamsY);

	if (OutInterpParamsZ != nullptr)
		*OutInterpParamsZ = std::move(Parms.OutInterpParamsZ);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLengthInterpParams
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FPrimalCameraInterpParams   OutInterpParams                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FPrimalCameraParams APlayerPawnTest_C::BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraInterpParams& OutInterpParams, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraArmLengthInterpParams");

	Params::APlayerPawnTest_C_BPOverrideCameraArmLengthInterpParams_Params Parms{};

	Parms.OutInterpParams = OutInterpParams;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLength
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              CurrentCameraArmLength                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              DesiredCameraArmLength                                           (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast(ConstParm, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// double                             CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)

struct FPrimalCameraParams APlayerPawnTest_C::BPOverrideCameraArmLength(float CurrentCameraArmLength, float DesiredCameraArmLength, bool* ReturnValue, double* CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast, double* CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraArmLength");

	Params::APlayerPawnTest_C_BPOverrideCameraArmLength_Params Parms{};

	Parms.CurrentCameraArmLength = CurrentCameraArmLength;
	Parms.DesiredCameraArmLength = DesiredCameraArmLength;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast != nullptr)
		*CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast = Parms.CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast;

	if (CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast != nullptr)
		*CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast = Parms.CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.DontCreateAnyMoreSpawnUIs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 CallFunc_GetShooterHud_ShooterHud                                (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

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
// class AShooterHUD*                 ShooterHUD                                                       (ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, SubobjectReference)

bool APlayerPawnTest_C::GetShooterHud(class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "GetShooterHud");

	Params::APlayerPawnTest_C_GetShooterHud_Params Parms{};

	Parms.CallFunc_GetShooterHUD_ReturnValue = CallFunc_GetShooterHUD_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.SetGeneralizedUnlockedAchievementTags
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                GeneralizedUnlockedAchievementTags                               (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)

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
// bool                               ShouldHideImplant                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               Local_HideImplant                                                (Edit, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalItem*                 CallFunc_Array_Get_Item                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)

bool APlayerPawnTest_C::HasEquipToHideImplant(bool ShouldHideImplant, bool Local_HideImplant, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "HasEquipToHideImplant");

	Params::APlayerPawnTest_C_HasEquipToHideImplant_Params Parms{};

	Parms.ShouldHideImplant = ShouldHideImplant;
	Parms.Local_HideImplant = Local_HideImplant;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

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
// bool                               bForce                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ConstParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue                                (ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_1                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_1                              (ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// int32                              CallFunc_GetNumMaterials_ReturnValue_1                           (ConstParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_GetNumMaterials_ReturnValue_2                           (ConstParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable_2                                              (ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_1                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable_3                                              (ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Variable_4                                              (ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_2                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_2                              (ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_HasEquipToHideImplant_ShouldHideImplant                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, Net, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_GetObjectName_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_3                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_3                              (ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_2                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_GetNumMaterials_ReturnValue_3                           (ConstParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_4                            (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue_5                            (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_3                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, NonTransactional)
// int32                              CallFunc_GetNumMaterials_ReturnValue_4                           (ConstParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, NonTransactional)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue_6                            (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_4                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_4                              (ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Variable_5                                              (ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_4                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_4             (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_4                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_5                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_5                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference, Interp, NonTransactional)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_5                              (ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, SubobjectReference, Interp, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_5             (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_GetNumMaterials_ReturnValue_5                           (ConstParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_5                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)

bool APlayerPawnTest_C::SetupMeshes(bool bForce, int32 CallFunc_GetNumMaterials_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue_1, int32* CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetNumMaterials_ReturnValue_2, int32* CallFunc_Subtract_IntInt_ReturnValue_2, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32* CallFunc_Add_IntInt_ReturnValue_2, int32* CallFunc_Add_IntInt_ReturnValue_3, int32* CallFunc_Add_IntInt_ReturnValue_4, class UWorld* CallFunc_K2_GetWorld_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_2, int32 CallFunc_GetNumMaterials_ReturnValue_3, int32* CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue_2, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_3, int32 CallFunc_GetNumMaterials_ReturnValue_4, int32* CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue_3, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue_4, int32* CallFunc_Add_IntInt_ReturnValue_5, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_5, int32 CallFunc_GetNumMaterials_ReturnValue_5, int32* CallFunc_Subtract_IntInt_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "SetupMeshes");

	Params::APlayerPawnTest_C_SetupMeshes_Params Parms{};

	Parms.bForce = bForce;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue_1 = CallFunc_GetNumMaterials_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue_2 = CallFunc_GetNumMaterials_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue_3 = CallFunc_GetNumMaterials_ReturnValue_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_GetNumMaterials_ReturnValue_4 = CallFunc_GetNumMaterials_ReturnValue_4;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_3 = CallFunc_LessEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_4 = CallFunc_LessEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_GetNumMaterials_ReturnValue_5 = CallFunc_GetNumMaterials_ReturnValue_5;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_5 = CallFunc_LessEqual_IntInt_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Subtract_IntInt_ReturnValue != nullptr)
		*CallFunc_Subtract_IntInt_ReturnValue = Parms.CallFunc_Subtract_IntInt_ReturnValue;

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_GetMaterial_ReturnValue != nullptr)
		*CallFunc_GetMaterial_ReturnValue = Parms.CallFunc_GetMaterial_ReturnValue;

	if (CallFunc_Subtract_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_IntInt_ReturnValue_1 = Parms.CallFunc_Subtract_IntInt_ReturnValue_1;

	if (CallFunc_Add_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Add_IntInt_ReturnValue_1 = Parms.CallFunc_Add_IntInt_ReturnValue_1;

	if (CallFunc_Subtract_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_Subtract_IntInt_ReturnValue_2 = Parms.CallFunc_Subtract_IntInt_ReturnValue_2;

	if (CallFunc_GetMaterial_ReturnValue_1 != nullptr)
		*CallFunc_GetMaterial_ReturnValue_1 = Parms.CallFunc_GetMaterial_ReturnValue_1;

	if (CallFunc_Add_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_Add_IntInt_ReturnValue_2 = Parms.CallFunc_Add_IntInt_ReturnValue_2;

	if (CallFunc_Add_IntInt_ReturnValue_3 != nullptr)
		*CallFunc_Add_IntInt_ReturnValue_3 = Parms.CallFunc_Add_IntInt_ReturnValue_3;

	if (CallFunc_Add_IntInt_ReturnValue_4 != nullptr)
		*CallFunc_Add_IntInt_ReturnValue_4 = Parms.CallFunc_Add_IntInt_ReturnValue_4;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_GetMaterial_ReturnValue_2 != nullptr)
		*CallFunc_GetMaterial_ReturnValue_2 = Parms.CallFunc_GetMaterial_ReturnValue_2;

	if (CallFunc_Subtract_IntInt_ReturnValue_3 != nullptr)
		*CallFunc_Subtract_IntInt_ReturnValue_3 = Parms.CallFunc_Subtract_IntInt_ReturnValue_3;

	if (CallFunc_GetMaterial_ReturnValue_3 != nullptr)
		*CallFunc_GetMaterial_ReturnValue_3 = Parms.CallFunc_GetMaterial_ReturnValue_3;

	if (CallFunc_Subtract_IntInt_ReturnValue_4 != nullptr)
		*CallFunc_Subtract_IntInt_ReturnValue_4 = Parms.CallFunc_Subtract_IntInt_ReturnValue_4;

	if (CallFunc_GetMaterial_ReturnValue_4 != nullptr)
		*CallFunc_GetMaterial_ReturnValue_4 = Parms.CallFunc_GetMaterial_ReturnValue_4;

	if (CallFunc_Add_IntInt_ReturnValue_5 != nullptr)
		*CallFunc_Add_IntInt_ReturnValue_5 = Parms.CallFunc_Add_IntInt_ReturnValue_5;

	if (CallFunc_GetMaterial_ReturnValue_5 != nullptr)
		*CallFunc_GetMaterial_ReturnValue_5 = Parms.CallFunc_GetMaterial_ReturnValue_5;

	if (CallFunc_Subtract_IntInt_ReturnValue_5 != nullptr)
		*CallFunc_Subtract_IntInt_ReturnValue_5 = Parms.CallFunc_Subtract_IntInt_ReturnValue_5;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPUnlockedAllExplorerNotes
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)

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
// int32                              OutVal                                                           (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int32                              NewNum                                                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool APlayerPawnTest_C::SetNumChibiLevelUps(int32 NewNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "SetNumChibiLevelUps");

	Params::APlayerPawnTest_C_SetNumChibiLevelUps_Params Parms{};

	Parms.NewNum = NewNum;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetPlayerHexagonCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Ret_val                                                          (BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool APlayerPawnTest_C::BPGetPlayerHexagonCount(int32* ReturnValue, int32* Ret_val, class AGameModeBase** CallFunc_GetGameMode_ReturnValue, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPGetPlayerHexagonCount");

	Params::APlayerPawnTest_C_BPGetPlayerHexagonCount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (Ret_val != nullptr)
		*Ret_val = Parms.Ret_val;

	if (CallFunc_GetGameMode_ReturnValue != nullptr)
		*CallFunc_GetGameMode_ReturnValue = Parms.CallFunc_GetGameMode_ReturnValue;

	if (CallFunc_IsRunningOnServer_OutNetworkMode != nullptr)
		*CallFunc_IsRunningOnServer_OutNetworkMode = Parms.CallFunc_IsRunningOnServer_OutNetworkMode;

	if (K2Node_SwitchEnum_CmpSuccess != nullptr)
		*K2Node_SwitchEnum_CmpSuccess = Parms.K2Node_SwitchEnum_CmpSuccess;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPSetPlayerHexagonCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewHexagonCount                                                  (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Ret_val                                                          (BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, Net, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

bool APlayerPawnTest_C::BPSetPlayerHexagonCount(bool* ReturnValue, bool* Ret_val, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AGameModeBase** CallFunc_GetGameMode_ReturnValue, enum class ENetworkModeResult* CallFunc_IsRunningOnServer_OutNetworkMode, bool* K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPSetPlayerHexagonCount");

	Params::APlayerPawnTest_C_BPSetPlayerHexagonCount_Params Parms{};

	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (Ret_val != nullptr)
		*Ret_val = Parms.Ret_val;

	if (CallFunc_GetGameMode_ReturnValue != nullptr)
		*CallFunc_GetGameMode_ReturnValue = Parms.CallFunc_GetGameMode_ReturnValue;

	if (CallFunc_IsRunningOnServer_OutNetworkMode != nullptr)
		*CallFunc_IsRunningOnServer_OutNetworkMode = Parms.CallFunc_IsRunningOnServer_OutNetworkMode;

	if (K2Node_SwitchEnum_CmpSuccess != nullptr)
		*K2Node_SwitchEnum_CmpSuccess = Parms.K2Node_SwitchEnum_CmpSuccess;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetShowDebugAnimationComponents
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMeshComponent*>SkelMeshComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<class USkeletalMeshComponent*>Comps                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// class AShooterWeapon*              CallFunc_GetWeapon_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_Select_Default                                            (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference, NonTransactional)

class USkeletalMeshComponent* APlayerPawnTest_C::BPGetShowDebugAnimationComponents(bool CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPGetShowDebugAnimationComponents");

	Params::APlayerPawnTest_C_BPGetShowDebugAnimationComponents_Params Parms{};

	Parms.CallFunc_IsFirstPerson_ReturnValue = CallFunc_IsFirstPerson_ReturnValue;
	Parms.CallFunc_IsFirstPerson_ReturnValue_1 = CallFunc_IsFirstPerson_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetOverrideCameraInterpSpeed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DefaultTPVCameraSpeedInterpolationMultiplier                     (ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              DefaultTPVOffsetInterpSpeed                                      (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              TPVCameraSpeedInterpolationMultiplier                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              TPVOffsetInterpSpeed                                             (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             LocalDefaultTPVOffsetInterpSpeed                                 (ConstParm, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_HasBuff_ReturnValue                                     (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast (ConstParm, Net, Parm, ZeroConstructor, Config, EditConst, SubobjectReference)
// float                              K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast          (Edit, BlueprintVisible, Parm, ZeroConstructor, Config, EditConst, SubobjectReference)

void APlayerPawnTest_C::BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed, double LocalDefaultTPVOffsetInterpSpeed, bool* CallFunc_HasBuff_ReturnValue, double K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast, float K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPGetOverrideCameraInterpSpeed");

	Params::APlayerPawnTest_C_BPGetOverrideCameraInterpSpeed_Params Parms{};

	Parms.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
	Parms.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;
	Parms.LocalDefaultTPVOffsetInterpSpeed = LocalDefaultTPVOffsetInterpSpeed;
	Parms.K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast = K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast;
	Parms.K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast = K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (TPVCameraSpeedInterpolationMultiplier != nullptr)
		*TPVCameraSpeedInterpolationMultiplier = Parms.TPVCameraSpeedInterpolationMultiplier;

	if (TPVOffsetInterpSpeed != nullptr)
		*TPVOffsetInterpSpeed = Parms.TPVOffsetInterpSpeed;

	if (CallFunc_HasBuff_ReturnValue != nullptr)
		*CallFunc_HasBuff_ReturnValue = Parms.CallFunc_HasBuff_ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.ShowHUDNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// double                             LifetimeSeconds                                                  (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// double                             DisplayScale                                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class USoundCue*                   SoundToPlay                                                      (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class USoundCue* APlayerPawnTest_C::ShowHUDNotification(struct FLinearColor* Color, double* LifetimeSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ShowHUDNotification");

	Params::APlayerPawnTest_C_ShowHUDNotification_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (LifetimeSeconds != nullptr)
		*LifetimeSeconds = Parms.LifetimeSeconds;

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
// double                             Angle                                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             Range                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)

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
// class USkeletalMeshComponent*      FirstPersonMasterPosecomponent                                   (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

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
// class APrimalDinoCharacter*        BossCharacter                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// class FName                        BossTag                                                          (ExportObject, Parm, Config, EditConst, SubobjectReference)
// int32                              BossDifficulty                                                   (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, Net, Transient, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)

bool APlayerPawnTest_C::DefeatedBoss(class FName BossTag, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class AGameModeBase** CallFunc_GetGameMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "DefeatedBoss");

	Params::APlayerPawnTest_C_DefeatedBoss_Params Parms{};

	Parms.BossTag = BossTag;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (CallFunc_GetGameMode_ReturnValue != nullptr)
		*CallFunc_GetGameMode_ReturnValue = Parms.CallFunc_GetGameMode_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.ServerAscend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DifficultyIndex                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bImmediateAscend                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               bSuppressAchievements                                            (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               bIsCheatAscend                                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsListenServer_ReturnValue                              (ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_K2_TeleportTo_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, SubobjectReference)
// class FString                      Temp_string_Variable                                             (Edit, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               K2Node_SwitchName_CmpSuccess                                     (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      Temp_string_Variable_1                                           (Edit, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_2                                           (Edit, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable                                                (ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      K2Node_Select_Default                                            (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AController*                 CallFunc_GetCharacterController_ReturnValue                      (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UWorld*                      CallFunc_GetPrimaryWorld_ReturnValue                             (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue                            (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APrimalWorldSettings*        K2Node_DynamicCast_AsPrimal_World_Settings                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UClass*                      CallFunc_Array_Get_Item                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetServerSettingsFloat_OutFloat                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_GetServerSettingsFloat_ReturnValue                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Config, EditConst, SubobjectReference)
// float                              CallFunc_GetServerSettingsFloat_OutFloat_1                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_GetServerSettingsFloat_ReturnValue_1                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Config, EditConst, SubobjectReference, Interp)
// float                              CallFunc_GetServerSettingsFloat_OutFloat_2                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GetServerSettingsFloat_ReturnValue_2                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Config, EditConst, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_K2_TeleportTo_ReturnValue_1                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, SubobjectReference, Interp)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, Net, Transient, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsLocalController_ReturnValue                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (Edit, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool APlayerPawnTest_C::ServerAscend(int32 DifficultyIndex, bool bImmediateAscend, int32 Temp_int_Array_Index_Variable, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchName_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, class AController* CallFunc_GetCharacterController_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, class AGameModeBase** CallFunc_GetGameMode_ReturnValue, class AGameModeBase** CallFunc_GetGameMode_ReturnValue_1, bool CallFunc_GetServerSettingsFloat_ReturnValue, bool CallFunc_GetServerSettingsFloat_ReturnValue_1, bool CallFunc_GetServerSettingsFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, double CallFunc_MakeVector_Z_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_X_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ServerAscend");

	Params::APlayerPawnTest_C_ServerAscend_Params Parms{};

	Parms.DifficultyIndex = DifficultyIndex;
	Parms.bImmediateAscend = bImmediateAscend;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetCharacterController_ReturnValue = CallFunc_GetCharacterController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_World_Settings = K2Node_DynamicCast_AsPrimal_World_Settings;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_GetServerSettingsFloat_ReturnValue = CallFunc_GetServerSettingsFloat_ReturnValue;
	Parms.CallFunc_GetServerSettingsFloat_ReturnValue_1 = CallFunc_GetServerSettingsFloat_ReturnValue_1;
	Parms.CallFunc_GetServerSettingsFloat_ReturnValue_2 = CallFunc_GetServerSettingsFloat_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_MakeVector_Z_ImplicitCast = CallFunc_MakeVector_Z_ImplicitCast;
	Parms.CallFunc_MakeVector_Y_ImplicitCast = CallFunc_MakeVector_Y_ImplicitCast;
	Parms.CallFunc_MakeVector_X_ImplicitCast = CallFunc_MakeVector_X_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_1 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_GetGameMode_ReturnValue != nullptr)
		*CallFunc_GetGameMode_ReturnValue = Parms.CallFunc_GetGameMode_ReturnValue;

	if (CallFunc_GetGameMode_ReturnValue_1 != nullptr)
		*CallFunc_GetGameMode_ReturnValue_1 = Parms.CallFunc_GetGameMode_ReturnValue_1;

	if (K2Node_DynamicCast_AsShooter_Player_Controller_1 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_1 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_1;

	return Parms.ReturnValue;

}


// Function PlayerPawnTest.PlayerPawnTest_C.PlayerCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TheCommand                                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      RetVal                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_PlayerCommand_ReturnValue                               (Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool APlayerPawnTest_C::PlayerCommand(const class FString& TheCommand, class FString* ReturnValue, const class FString& RetVal, class FString* CallFunc_PlayerCommand_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "PlayerCommand");

	Params::APlayerPawnTest_C_PlayerCommand_Params Parms{};

	Parms.TheCommand = TheCommand;
	Parms.RetVal = RetVal;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	if (CallFunc_PlayerCommand_ReturnValue != nullptr)
		*CallFunc_PlayerCommand_ReturnValue = std::move(Parms.CallFunc_PlayerCommand_ReturnValue);

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
// int32                              AscendIndex                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               bImmediateAscend                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               bIsCheatAscend                                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)

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
// class FString                      Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// double                             LifetimeSeconds                                                  (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// double                             DisplayScale                                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class USoundCue*                   SoundToPlay                                                      (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class USoundCue* APlayerPawnTest_C::ClientShowHUDNotification(struct FLinearColor* Color, double* LifetimeSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ClientShowHUDNotification");

	Params::APlayerPawnTest_C_ClientShowHUDNotification_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (LifetimeSeconds != nullptr)
		*LifetimeSeconds = Parms.LifetimeSeconds;

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
// class FName                        SocketName                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class APrimalCharacter*            VictimChar                                                       (ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class APrimalCharacter* APlayerPawnTest_C::BPSpawnAttackerDamageImpactFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPSpawnAttackerDamageImpactFX");

	Params::APlayerPawnTest_C_BPSpawnAttackerDamageImpactFX_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

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
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              K2Node_CustomEvent_AscendIndex                                   (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               K2Node_CustomEvent_bImmediateAscend                              (Edit, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               K2Node_CustomEvent_bIsCheatAscend                                (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, Net, Transient, EditConst, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetUserSettings_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UFinalCreditsUI_C*           CallFunc_Create_ReturnValue                                      (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      K2Node_CustomEvent_Text                                          (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             K2Node_CustomEvent_LifetimeSeconds                               (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// double                             K2Node_CustomEvent_DisplayScale                                  (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class USoundCue*                   K2Node_CustomEvent_SoundToPlay                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue_1                               (ConstParm, BlueprintVisible, ExportObject, Net, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsShipping_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_BPGetPrimaryMapName_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FName                        K2Node_Event_SocketName                                          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class APrimalCharacter*            K2Node_Event_VictimChar                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// struct FLinearColor                CallFunc_GetFXBloodColor_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FLinearColor                Temp_struct_Variable                                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FLinearColor                Temp_struct_Variable_1                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FLinearColor                Temp_struct_Variable_2                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable                                                (ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_2                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class USceneComponent*             K2Node_Select_Default                                            (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class USceneComponent*             K2Node_Select_Default_1                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class USceneComponent*             K2Node_Select_Default_2                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FMin_ReturnValue                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Max_ReturnValue                                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue_1                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// struct FLinearColor                K2Node_Select_Default_3                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_2                 (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_BPAddHUDNotification_DisplayTime_ImplicitCast           (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// float                              CallFunc_BPAddHUDNotification_DisplayScale_ImplicitCast          (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast_1                            (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_A_ImplicitCast_1                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ExportObject, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

double APlayerPawnTest_C::ExecuteUbergraph_PlayerPawnTest(int32 EntryPoint, int32* K2Node_CustomEvent_AscendIndex, bool* K2Node_CustomEvent_bImmediateAscend, bool* K2Node_CustomEvent_bIsCheatAscend, class FName CallFunc_MakeLiteralName_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class UShooterGameUserSettings* CallFunc_GetUserSettings_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, class FString* K2Node_CustomEvent_Text, const struct FLinearColor& K2Node_CustomEvent_Color, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue_1, bool* CallFunc_TriggerLevelCustomEvents_ReturnValue, class FString* CallFunc_BPGetPrimaryMapName_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double* CallFunc_FMin_ReturnValue, class UNiagaraComponent** CallFunc_SpawnSystemAttached_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, bool* CallFunc_TriggerLevelCustomEvents_ReturnValue_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_2, double* CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double* CallFunc_SelectFloat_B_ImplicitCast_1, double CallFunc_SelectFloat_A_ImplicitCast_1, float* CallFunc_SetVariableFloat_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ExecuteUbergraph_PlayerPawnTest");

	Params::APlayerPawnTest_C_ExecuteUbergraph_PlayerPawnTest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_GetUserSettings_ReturnValue = CallFunc_GetUserSettings_ReturnValue;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.CallFunc_GetShooterHUD_ReturnValue = CallFunc_GetShooterHUD_ReturnValue;
	Parms.CallFunc_K2_GetWorld_ReturnValue_1 = CallFunc_K2_GetWorld_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsFirstPerson_ReturnValue = CallFunc_IsFirstPerson_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.CallFunc_SelectFloat_A_ImplicitCast_1 = CallFunc_SelectFloat_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_CustomEvent_AscendIndex != nullptr)
		*K2Node_CustomEvent_AscendIndex = Parms.K2Node_CustomEvent_AscendIndex;

	if (K2Node_CustomEvent_bImmediateAscend != nullptr)
		*K2Node_CustomEvent_bImmediateAscend = Parms.K2Node_CustomEvent_bImmediateAscend;

	if (K2Node_CustomEvent_bIsCheatAscend != nullptr)
		*K2Node_CustomEvent_bIsCheatAscend = Parms.K2Node_CustomEvent_bIsCheatAscend;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_CustomEvent_Text != nullptr)
		*K2Node_CustomEvent_Text = std::move(Parms.K2Node_CustomEvent_Text);

	if (K2Node_DynamicCast_AsShooter_Player_Controller_1 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_1 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_1;

	if (CallFunc_TriggerLevelCustomEvents_ReturnValue != nullptr)
		*CallFunc_TriggerLevelCustomEvents_ReturnValue = Parms.CallFunc_TriggerLevelCustomEvents_ReturnValue;

	if (CallFunc_BPGetPrimaryMapName_ReturnValue != nullptr)
		*CallFunc_BPGetPrimaryMapName_ReturnValue = std::move(Parms.CallFunc_BPGetPrimaryMapName_ReturnValue);

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_FMin_ReturnValue != nullptr)
		*CallFunc_FMin_ReturnValue = Parms.CallFunc_FMin_ReturnValue;

	if (CallFunc_SpawnSystemAttached_ReturnValue != nullptr)
		*CallFunc_SpawnSystemAttached_ReturnValue = Parms.CallFunc_SpawnSystemAttached_ReturnValue;

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_Concat_StrStr_ReturnValue != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue);

	if (CallFunc_TriggerLevelCustomEvents_ReturnValue_1 != nullptr)
		*CallFunc_TriggerLevelCustomEvents_ReturnValue_1 = Parms.CallFunc_TriggerLevelCustomEvents_ReturnValue_1;

	if (K2Node_DynamicCast_AsShooter_Player_Controller_2 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_2 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_2;

	if (CallFunc_SelectFloat_B_ImplicitCast != nullptr)
		*CallFunc_SelectFloat_B_ImplicitCast = Parms.CallFunc_SelectFloat_B_ImplicitCast;

	if (CallFunc_SelectFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_SelectFloat_B_ImplicitCast_1 = Parms.CallFunc_SelectFloat_B_ImplicitCast_1;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast;

	return Parms.ReturnValue;

}

}


