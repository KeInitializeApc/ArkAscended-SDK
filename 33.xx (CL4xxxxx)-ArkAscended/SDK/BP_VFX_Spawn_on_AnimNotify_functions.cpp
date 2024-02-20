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
// double                             Speed                                                            (ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Size                                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
// struct FAudio_Ground_Collection    StepSounds                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               IsPlayer                                                         (ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_2                        (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_3                        (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_4                        (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_5                        (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_2                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, SubobjectReference)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_3                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_4                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_5                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast        (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1      (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2      (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3      (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4      (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5      (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)

float UBP_VFX_Spawn_on_AnimNotify_C::Spawn_Sound(class USceneComponent** Actor, struct FVector* Location, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "Spawn_Sound");

	Params::UBP_VFX_Spawn_on_AnimNotify_C_Spawn_Sound_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

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
// class USkeletalMeshComponent*      MeshComp                                                         (ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (ConstParm, ExportObject, ReturnParm, Config, EditConst)
// float                              TotalDuration                                                    (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      AnimName                                                         (BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               ShowFootprints                                                   (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               IsPlayer                                                         (ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UNiagaraSystem*              Niagara_System_To_Play                                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UNiagaraSystem*              Niagara_System_Player                                            (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             Baby_Scale                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             Dino_Size_Mult                                                   (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             Dino_Amount_Mult                                                 (ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             Dino_Vel_Mult                                                    (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FAudio_Ground_Collection    StepSounds                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             Total_Amount_Mult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             Foot_Velocity_Mult                                               (Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UCurveFloat*                 Curve_foot_vel                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UCurveFloat*                 Curve_foot_size                                                  (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             Foot_Size_Mult                                                   (Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             Thatch                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, SubobjectReference)
// double                             Sand                                                             (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Pebbles                                                          (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Config, SubobjectReference)
// double                             Leaves                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Grass                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Friction                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
// double                             Dust                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference)
// double                             Bounce                                                           (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class USkeletalMeshComponent*      SK_Mesh_Comp                                                     (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// class UNiagaraComponent*           Niagara_Component                                                (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      NewLocalVar                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, SubobjectReference)
// float                              CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue                                   (Edit, BlueprintReadOnly, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsShooterCharacter_ReturnValue                          (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue_1                                 (Edit, BlueprintReadOnly, ReturnParm, Config, SubobjectReference, Interp)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, ConstParm, Net, Parm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow                          (ConstParm, ExportObject, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_3                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_4                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, NonTransactional)
// class USkeletalMesh*               CallFunc_GetSkeletalMeshAsset_ReturnValue                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// struct FBoxSphereBounds            CallFunc_GetImportedBounds_ReturnValue                           (ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test_1                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_BreakBoxSphereBounds_Origin                             (Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakBoxSphereBounds_BoxExtent                          (Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakBoxSphereBounds_SphereRadius                       (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class ADino_Character_BP_C*        K2Node_DynamicCast_AsDino_Character_BP                           (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetFloatValue_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FDinoContentData            CallFunc_GetDinoContentData_DinoContentData                      (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_5                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_6                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_7                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, EditorOnly)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_8                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_9                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp, EditorOnly)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (Edit, ConstParm, Net, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_2                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsConsoleBuild_ReturnValue                              (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// bool                               CallFunc_Contains_ReturnValue                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (BlueprintVisible, Net, Parm, ReturnParm, Transient, SubobjectReference)
// struct FMatrix                     CallFunc_Conv_TransformToMatrix_ReturnValue                      (Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference)
// struct FVector4                    CallFunc_Matrix_TransformVector_ReturnValue                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_GetSocketBoneName_ReturnValue                           (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Conv_Vector4ToVector_ReturnValue                        (Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, RepNotify, Interp)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (ExportObject, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ExportObject, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, ConstParm, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (BlueprintVisible, ExportObject, ZeroConstructor, Config, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (BlueprintVisible, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ExportObject, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (BlueprintVisible, Parm, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// struct FRotator                    CallFunc_MakeRotFromYX_ReturnValue                               (ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference, Interp)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow_1                        (ConstParm, ExportObject, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_3                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference, NonTransactional)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_4                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_2                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_3                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_4                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_5                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_6                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_7                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, EditorOnly)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_8                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, EditorOnly)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_9                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, Interp, EditorOnly)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_10                (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

double UBP_VFX_Spawn_on_AnimNotify_C::Received_NotifyBegin(struct FAnimNotifyEventReference* EventReference, bool ReturnValue, double* Sand, double* Leaves, double* Grass, double* Friction, double Dust, double Bounce, struct FColor* Color, const TArray<class AActor*>& Temp_object_Variable, class FString* CallFunc_GetDisplayName_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, struct FVector* CallFunc_GetForwardVector_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, const struct FVector& CallFunc_GetVelocity_ReturnValue, double* CallFunc_Lerp_ReturnValue, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test_1, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, struct FVector* CallFunc_GetForwardVector_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, struct FVector* CallFunc_GetForwardVector_ReturnValue_2, bool CallFunc_Contains_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class FString* CallFunc_GetDisplayName_ReturnValue_1, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow_1, bool* CallFunc_GetDataTableRowFromName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "Received_NotifyBegin");

	Params::UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyBegin_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Dust = Dust;
	Parms.Bounce = Bounce;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test_1 = K2Node_DynamicCast_AsPlayer_Pawn_Test_1;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue_1 = CallFunc_GetVelocity_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;

	UObject::ProcessEvent(Func, &Parms);

	if (EventReference != nullptr)
		*EventReference = std::move(Parms.EventReference);

	if (Sand != nullptr)
		*Sand = Parms.Sand;

	if (Leaves != nullptr)
		*Leaves = Parms.Leaves;

	if (Grass != nullptr)
		*Grass = Parms.Grass;

	if (Friction != nullptr)
		*Friction = Parms.Friction;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (CallFunc_GetDisplayName_ReturnValue != nullptr)
		*CallFunc_GetDisplayName_ReturnValue = std::move(Parms.CallFunc_GetDisplayName_ReturnValue);

	if (CallFunc_GetForwardVector_ReturnValue != nullptr)
		*CallFunc_GetForwardVector_ReturnValue = std::move(Parms.CallFunc_GetForwardVector_ReturnValue);

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (CallFunc_Lerp_ReturnValue != nullptr)
		*CallFunc_Lerp_ReturnValue = Parms.CallFunc_Lerp_ReturnValue;

	if (CallFunc_GetDataTableRowFromName_OutRow != nullptr)
		*CallFunc_GetDataTableRowFromName_OutRow = std::move(Parms.CallFunc_GetDataTableRowFromName_OutRow);

	if (CallFunc_GetDataTableRowFromName_ReturnValue != nullptr)
		*CallFunc_GetDataTableRowFromName_ReturnValue = Parms.CallFunc_GetDataTableRowFromName_ReturnValue;

	if (CallFunc_GetForwardVector_ReturnValue_1 != nullptr)
		*CallFunc_GetForwardVector_ReturnValue_1 = std::move(Parms.CallFunc_GetForwardVector_ReturnValue_1);

	if (CallFunc_GetForwardVector_ReturnValue_2 != nullptr)
		*CallFunc_GetForwardVector_ReturnValue_2 = std::move(Parms.CallFunc_GetForwardVector_ReturnValue_2);

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

	if (CallFunc_BreakHitResult_HitItem != nullptr)
		*CallFunc_BreakHitResult_HitItem = Parms.CallFunc_BreakHitResult_HitItem;

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

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyEnd
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (ConstParm, ExportObject, ReturnParm, Config, EditConst)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UAnimSequenceBase* UBP_VFX_Spawn_on_AnimNotify_C::Received_NotifyEnd(struct FAnimNotifyEventReference* EventReference, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "Received_NotifyEnd");

	Params::UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyEnd_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EventReference != nullptr)
		*EventReference = std::move(Parms.EventReference);

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

class FString UBP_VFX_Spawn_on_AnimNotify_C::GetNotifyName(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "GetNotifyName");

	Params::UBP_VFX_Spawn_on_AnimNotify_C_GetNotifyName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyTick
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (ConstParm, ExportObject, ReturnParm, Config, EditConst)
// float                              FrameDeltaTime                                                   (Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Line_End_Distance                                                (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

double UBP_VFX_Spawn_on_AnimNotify_C::Received_NotifyTick(struct FAnimNotifyEventReference* EventReference, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "Received_NotifyTick");

	Params::UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyTick_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EventReference != nullptr)
		*EventReference = std::move(Parms.EventReference);

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


