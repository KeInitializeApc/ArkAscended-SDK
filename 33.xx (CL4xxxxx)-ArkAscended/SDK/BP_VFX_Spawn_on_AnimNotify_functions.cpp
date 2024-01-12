#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C
// (None)

class UClass* UBP_VFX_Spawn_on_AnimNotify_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VFX_Spawn_on_AnimNotify_C");

	return Clss;
}


// BP_VFX_Spawn_on_AnimNotify_C BP_VFX_Spawn_on_AnimNotify.Default__BP_VFX_Spawn_on_AnimNotify_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VFX_Spawn_on_AnimNotify_C* UBP_VFX_Spawn_on_AnimNotify_C::GetDefaultObj()
{
	static class UBP_VFX_Spawn_on_AnimNotify_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VFX_Spawn_on_AnimNotify_C*>(UBP_VFX_Spawn_on_AnimNotify_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Spawn_Sound
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*             Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// double                             Speed                                                            (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Size                                                             (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
// struct FAudio_Ground_Collection    StepSounds                                                       (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               IsPlayer                                                         (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_2                        (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_3                        (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_4                        (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_5                        (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_2                        (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_3                        (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_4                        (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_5                        (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp, NonTransactional)

class UAudioComponent* UBP_VFX_Spawn_on_AnimNotify_C::Spawn_Sound(class USceneComponent** Actor, struct FVector* Location, class AActor** CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleFloat_ReturnValue, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4, float* CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "Spawn_Sound");

	Params::UBP_VFX_Spawn_on_AnimNotify_C_Spawn_Sound_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_K2_GetComponentLocation_ReturnValue != nullptr)
		*CallFunc_K2_GetComponentLocation_ReturnValue = std::move(Parms.CallFunc_K2_GetComponentLocation_ReturnValue);

	if (CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast != nullptr)
		*CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast = Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast;

	if (CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1 != nullptr)
		*CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1 = Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1;

	if (CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2 != nullptr)
		*CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2 = Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2;

	if (CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3 != nullptr)
		*CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3 = Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3;

	if (CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4 != nullptr)
		*CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4 = Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4;

	if (CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5 != nullptr)
		*CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5 = Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5;

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Spawn_Anim_Notify
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:

void UBP_VFX_Spawn_on_AnimNotify_C::Spawn_Anim_Notify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "Spawn_Anim_Notify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyBegin
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// float                              TotalDuration                                                    (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FAnimNotifyEventReference   EventReference                                                   (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      AnimName                                                         (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               ShowFootprints                                                   (ConstParm, Transient, EditConst, SubobjectReference)
// bool                               IsPlayer                                                         (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UNiagaraSystem*              Niagara_System_To_Play                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UNiagaraSystem*              Niagara_System_Player                                            (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Baby_Scale                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Dino_Size_Mult                                                   (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Dino_Amount_Mult                                                 (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Dino_Vel_Mult                                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FAudio_Ground_Collection    StepSounds                                                       (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Total_Amount_Mult                                                (Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Foot_Velocity_Mult                                               (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UCurveFloat*                 Curve_foot_vel                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UCurveFloat*                 Curve_foot_size                                                  (ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Foot_Size_Mult                                                   (ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Thatch                                                           (Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             Sand                                                             (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Pebbles                                                          (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             Leaves                                                           (BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Grass                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Friction                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             Dust                                                             (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference)
// double                             Bounce                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class USkeletalMeshComponent*      SK_Mesh_Comp                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// class UNiagaraComponent*           Niagara_Component                                                (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      NewLocalVar                                                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// TArray<class AActor*>              Temp_object_Variable                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
// float                              CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue   (Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue                                   (Edit, Net, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsShooterCharacter_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue_1                                 (Edit, Net, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow                          (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_3                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_4                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class USkeletalMesh*               CallFunc_GetSkeletalMeshAsset_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FBoxSphereBounds            CallFunc_GetImportedBounds_ReturnValue                           (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test_1                          (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_BreakBoxSphereBounds_Origin                             (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakBoxSphereBounds_BoxExtent                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              CallFunc_BreakBoxSphereBounds_SphereRadius                       (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class ADino_Character_BP_C*        K2Node_DynamicCast_AsDino_Character_BP                           (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetFloatValue_ReturnValue                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
// struct FDinoContentData            CallFunc_GetDinoContentData_DinoContentData                      (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_5                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_6                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_7                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_8                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_9                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_2                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsConsoleBuild_ReturnValue                              (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Contains_ReturnValue                                    (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// struct FMatrix                     CallFunc_Conv_TransformToMatrix_ReturnValue                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector4                    CallFunc_Matrix_TransformVector_ReturnValue                      (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_GetSocketBoneName_ReturnValue                           (Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Conv_Vector4ToVector_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (BlueprintVisible, Net, Parm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ConstParm, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, BlueprintVisible, ExportObject, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, ConstParm, ExportObject, ZeroConstructor, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ConstParm, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// struct FRotator                    CallFunc_MakeRotFromYX_ReturnValue                               (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow_1                        (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ConstParm, ExportObject, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1                   (Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2                   (Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_3                   (Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_4                   (Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_2                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_3                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_4                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_5                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_6                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_7                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_8                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_9                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_10                (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

double UBP_VFX_Spawn_on_AnimNotify_C::Received_NotifyBegin(class UAnimSequenceBase* Animation, bool ShowFootprints, double* Sand, double* Leaves, double Grass, double* Friction, double Bounce, struct FColor* Color, TArray<class AActor*>* Temp_object_Variable, class FString* CallFunc_GetDisplayName_ReturnValue, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue, float* CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsShooterCharacter_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue_1, struct FVector* CallFunc_GetForwardVector_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_2, struct FVector* CallFunc_GetVelocity_ReturnValue, double CallFunc_Lerp_ReturnValue, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, double CallFunc_Multiply_DoubleFloat_ReturnValue_3, double CallFunc_Multiply_DoubleFloat_ReturnValue_4, class AActor** CallFunc_GetOwner_ReturnValue_2, bool* K2Node_DynamicCast_bSuccess_3, bool* K2Node_DynamicCast_bSuccess_4, float* CallFunc_GetFloatValue_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_5, double CallFunc_Multiply_DoubleFloat_ReturnValue_6, float* CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_7, double CallFunc_Multiply_DoubleFloat_ReturnValue_8, double CallFunc_Multiply_DoubleFloat_ReturnValue_9, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue_3, struct FVector* CallFunc_GetForwardVector_ReturnValue_1, struct FVector* CallFunc_GetVelocity_ReturnValue_1, struct FVector* CallFunc_GetForwardVector_ReturnValue_2, bool* CallFunc_IsConsoleBuild_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FMatrix& CallFunc_Conv_TransformToMatrix_ReturnValue, struct FVector4* CallFunc_Matrix_TransformVector_ReturnValue, class FName* CallFunc_GetSocketBoneName_ReturnValue, const struct FVector& CallFunc_Conv_Vector4ToVector_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, struct FVector* CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class FString* CallFunc_GetDisplayName_ReturnValue_1, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow_1, bool* CallFunc_GetDataTableRowFromName_ReturnValue_1, class UNiagaraComponent** CallFunc_SpawnSystemAtLocation_ReturnValue, double* CallFunc_Less_DoubleDouble_A_ImplicitCast, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double* CallFunc_Lerp_A_ImplicitCast, double* CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast_3, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast_4, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast_2, float CallFunc_SetVariableFloat_InValue_ImplicitCast_3, float CallFunc_SetVariableFloat_InValue_ImplicitCast_4, float CallFunc_SetVariableFloat_InValue_ImplicitCast_5, float CallFunc_SetVariableFloat_InValue_ImplicitCast_6, float CallFunc_SetVariableFloat_InValue_ImplicitCast_7, float CallFunc_SetVariableFloat_InValue_ImplicitCast_8, float CallFunc_SetVariableFloat_InValue_ImplicitCast_9, float CallFunc_SetVariableFloat_InValue_ImplicitCast_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "Received_NotifyBegin");

	Params::UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyBegin_Params Parms{};

	Parms.Animation = Animation;
	Parms.ShowFootprints = ShowFootprints;
	Parms.Grass = Grass;
	Parms.Bounce = Bounce;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_3 = CallFunc_Multiply_DoubleFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_4 = CallFunc_Multiply_DoubleFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_5 = CallFunc_Multiply_DoubleFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_6 = CallFunc_Multiply_DoubleFloat_ReturnValue_6;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_7 = CallFunc_Multiply_DoubleFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_8 = CallFunc_Multiply_DoubleFloat_ReturnValue_8;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_9 = CallFunc_Multiply_DoubleFloat_ReturnValue_9;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Conv_TransformToMatrix_ReturnValue = CallFunc_Conv_TransformToMatrix_ReturnValue;
	Parms.CallFunc_Conv_Vector4ToVector_ReturnValue = CallFunc_Conv_Vector4ToVector_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast = CallFunc_Multiply_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1 = CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2 = CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast_3 = CallFunc_Multiply_DoubleFloat_B_ImplicitCast_3;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast_4 = CallFunc_Multiply_DoubleFloat_B_ImplicitCast_4;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_1 = CallFunc_SetVariableFloat_InValue_ImplicitCast_1;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_2 = CallFunc_SetVariableFloat_InValue_ImplicitCast_2;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_3 = CallFunc_SetVariableFloat_InValue_ImplicitCast_3;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_4 = CallFunc_SetVariableFloat_InValue_ImplicitCast_4;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_5 = CallFunc_SetVariableFloat_InValue_ImplicitCast_5;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_6 = CallFunc_SetVariableFloat_InValue_ImplicitCast_6;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_7 = CallFunc_SetVariableFloat_InValue_ImplicitCast_7;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_8 = CallFunc_SetVariableFloat_InValue_ImplicitCast_8;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_9 = CallFunc_SetVariableFloat_InValue_ImplicitCast_9;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_10 = CallFunc_SetVariableFloat_InValue_ImplicitCast_10;

	UObject::ProcessEvent(Func, &Parms);

	if (Sand != nullptr)
		*Sand = Parms.Sand;

	if (Leaves != nullptr)
		*Leaves = Parms.Leaves;

	if (Friction != nullptr)
		*Friction = Parms.Friction;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = std::move(Parms.Temp_object_Variable);

	if (CallFunc_GetDisplayName_ReturnValue != nullptr)
		*CallFunc_GetDisplayName_ReturnValue = std::move(Parms.CallFunc_GetDisplayName_ReturnValue);

	if (CallFunc_K2_GetComponentLocation_ReturnValue != nullptr)
		*CallFunc_K2_GetComponentLocation_ReturnValue = std::move(Parms.CallFunc_K2_GetComponentLocation_ReturnValue);

	if (CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue != nullptr)
		*CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue = Parms.CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsShooterCharacter_ReturnValue != nullptr)
		*CallFunc_IsShooterCharacter_ReturnValue = Parms.CallFunc_IsShooterCharacter_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetOwner_ReturnValue_1 != nullptr)
		*CallFunc_GetOwner_ReturnValue_1 = Parms.CallFunc_GetOwner_ReturnValue_1;

	if (CallFunc_GetForwardVector_ReturnValue != nullptr)
		*CallFunc_GetForwardVector_ReturnValue = std::move(Parms.CallFunc_GetForwardVector_ReturnValue);

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_GetVelocity_ReturnValue != nullptr)
		*CallFunc_GetVelocity_ReturnValue = std::move(Parms.CallFunc_GetVelocity_ReturnValue);

	if (CallFunc_GetDataTableRowFromName_OutRow != nullptr)
		*CallFunc_GetDataTableRowFromName_OutRow = std::move(Parms.CallFunc_GetDataTableRowFromName_OutRow);

	if (CallFunc_GetDataTableRowFromName_ReturnValue != nullptr)
		*CallFunc_GetDataTableRowFromName_ReturnValue = Parms.CallFunc_GetDataTableRowFromName_ReturnValue;

	if (CallFunc_GetOwner_ReturnValue_2 != nullptr)
		*CallFunc_GetOwner_ReturnValue_2 = Parms.CallFunc_GetOwner_ReturnValue_2;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (K2Node_DynamicCast_bSuccess_4 != nullptr)
		*K2Node_DynamicCast_bSuccess_4 = Parms.K2Node_DynamicCast_bSuccess_4;

	if (CallFunc_GetFloatValue_ReturnValue != nullptr)
		*CallFunc_GetFloatValue_ReturnValue = Parms.CallFunc_GetFloatValue_ReturnValue;

	if (CallFunc_GetFloatValue_ReturnValue_1 != nullptr)
		*CallFunc_GetFloatValue_ReturnValue_1 = Parms.CallFunc_GetFloatValue_ReturnValue_1;

	if (CallFunc_GetOwner_ReturnValue_3 != nullptr)
		*CallFunc_GetOwner_ReturnValue_3 = Parms.CallFunc_GetOwner_ReturnValue_3;

	if (CallFunc_GetForwardVector_ReturnValue_1 != nullptr)
		*CallFunc_GetForwardVector_ReturnValue_1 = std::move(Parms.CallFunc_GetForwardVector_ReturnValue_1);

	if (CallFunc_GetVelocity_ReturnValue_1 != nullptr)
		*CallFunc_GetVelocity_ReturnValue_1 = std::move(Parms.CallFunc_GetVelocity_ReturnValue_1);

	if (CallFunc_GetForwardVector_ReturnValue_2 != nullptr)
		*CallFunc_GetForwardVector_ReturnValue_2 = std::move(Parms.CallFunc_GetForwardVector_ReturnValue_2);

	if (CallFunc_IsConsoleBuild_ReturnValue != nullptr)
		*CallFunc_IsConsoleBuild_ReturnValue = Parms.CallFunc_IsConsoleBuild_ReturnValue;

	if (CallFunc_Matrix_TransformVector_ReturnValue != nullptr)
		*CallFunc_Matrix_TransformVector_ReturnValue = std::move(Parms.CallFunc_Matrix_TransformVector_ReturnValue);

	if (CallFunc_GetSocketBoneName_ReturnValue != nullptr)
		*CallFunc_GetSocketBoneName_ReturnValue = Parms.CallFunc_GetSocketBoneName_ReturnValue;

	if (CallFunc_BreakTransform_Location != nullptr)
		*CallFunc_BreakTransform_Location = std::move(Parms.CallFunc_BreakTransform_Location);

	if (CallFunc_LineTraceSingle_OutHit != nullptr)
		*CallFunc_LineTraceSingle_OutHit = std::move(Parms.CallFunc_LineTraceSingle_OutHit);

	if (CallFunc_LineTraceSingle_ReturnValue != nullptr)
		*CallFunc_LineTraceSingle_ReturnValue = Parms.CallFunc_LineTraceSingle_ReturnValue;

	if (CallFunc_BreakHitResult_bBlockingHit != nullptr)
		*CallFunc_BreakHitResult_bBlockingHit = Parms.CallFunc_BreakHitResult_bBlockingHit;

	if (CallFunc_BreakHitResult_bInitialOverlap != nullptr)
		*CallFunc_BreakHitResult_bInitialOverlap = Parms.CallFunc_BreakHitResult_bInitialOverlap;

	if (CallFunc_BreakHitResult_Distance != nullptr)
		*CallFunc_BreakHitResult_Distance = Parms.CallFunc_BreakHitResult_Distance;

	if (CallFunc_BreakHitResult_HitActor != nullptr)
		*CallFunc_BreakHitResult_HitActor = Parms.CallFunc_BreakHitResult_HitActor;

	if (CallFunc_BreakHitResult_HitComponent != nullptr)
		*CallFunc_BreakHitResult_HitComponent = Parms.CallFunc_BreakHitResult_HitComponent;

	if (CallFunc_BreakHitResult_HitBoneName != nullptr)
		*CallFunc_BreakHitResult_HitBoneName = Parms.CallFunc_BreakHitResult_HitBoneName;

	if (CallFunc_BreakHitResult_BoneName != nullptr)
		*CallFunc_BreakHitResult_BoneName = Parms.CallFunc_BreakHitResult_BoneName;

	if (CallFunc_BreakHitResult_ElementIndex != nullptr)
		*CallFunc_BreakHitResult_ElementIndex = Parms.CallFunc_BreakHitResult_ElementIndex;

	if (CallFunc_BreakHitResult_FaceIndex != nullptr)
		*CallFunc_BreakHitResult_FaceIndex = Parms.CallFunc_BreakHitResult_FaceIndex;

	if (CallFunc_GetDisplayName_ReturnValue_1 != nullptr)
		*CallFunc_GetDisplayName_ReturnValue_1 = std::move(Parms.CallFunc_GetDisplayName_ReturnValue_1);

	if (CallFunc_GetDataTableRowFromName_OutRow_1 != nullptr)
		*CallFunc_GetDataTableRowFromName_OutRow_1 = std::move(Parms.CallFunc_GetDataTableRowFromName_OutRow_1);

	if (CallFunc_GetDataTableRowFromName_ReturnValue_1 != nullptr)
		*CallFunc_GetDataTableRowFromName_ReturnValue_1 = Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1;

	if (CallFunc_SpawnSystemAtLocation_ReturnValue != nullptr)
		*CallFunc_SpawnSystemAtLocation_ReturnValue = Parms.CallFunc_SpawnSystemAtLocation_ReturnValue;

	if (CallFunc_Less_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Less_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast;

	if (CallFunc_Greater_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Greater_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	if (CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 != nullptr)
		*CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;

	if (CallFunc_Lerp_A_ImplicitCast != nullptr)
		*CallFunc_Lerp_A_ImplicitCast = Parms.CallFunc_Lerp_A_ImplicitCast;

	if (CallFunc_Lerp_Alpha_ImplicitCast != nullptr)
		*CallFunc_Lerp_Alpha_ImplicitCast = Parms.CallFunc_Lerp_Alpha_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyEnd
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// struct FAnimNotifyEventReference   EventReference                                                   (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBP_VFX_Spawn_on_AnimNotify_C::Received_NotifyEnd(class UAnimSequenceBase* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "Received_NotifyEnd");

	Params::UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyEnd_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class FString UBP_VFX_Spawn_on_AnimNotify_C::GetNotifyName(const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "GetNotifyName");

	Params::UBP_VFX_Spawn_on_AnimNotify_C_GetNotifyName_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyTick
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// float                              FrameDeltaTime                                                   (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FAnimNotifyEventReference   EventReference                                                   (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             Line_End_Distance                                                (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

double UBP_VFX_Spawn_on_AnimNotify_C::Received_NotifyTick(class UAnimSequenceBase* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "Received_NotifyTick");

	Params::UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyTick_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.NewEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_VFX_Spawn_on_AnimNotify_C::NewEventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "NewEventDispatcher__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


