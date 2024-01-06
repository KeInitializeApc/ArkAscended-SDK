#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x518 - 0x4C8)
// BlueprintGeneratedClass Climbing_ImpactEffect.Climbing_ImpactEffect_C
class AClimbing_ImpactEffect_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UArrowComponent*                       Arrow3;                                            // 0x4D0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UArrowComponent*                       Arrow2;                                            // 0x4D8(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UArrowComponent*                       Arrow1;                                            // 0x4E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UAudioComponent*                       ImpactSound;                                       // 0x4E8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       Root;                                              // 0x4F0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	TArray<struct FBiomeZoneVolumeEffect>        Effects;                                           // 0x4F8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       EffectDuration;                                    // 0x508(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            ImpactSoundCue;                                    // 0x510(0x8)(Edit, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class AClimbing_ImpactEffect_C* GetDefaultObj();

	void DestroyImpactEffect();
	void DeactivateImpactEffect(struct FTimerHandle* CallFunc_K2_SetTimer_ReturnValue, float* CallFunc_K2_SetTimer_Time_ImplicitCast);
	void ReceiveBeginPlay();
	bool ExecuteUbergraph_Climbing_ImpactEffect(int32* EntryPoint, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, class AShooterWeapon_Climb** K2Node_DynamicCast_AsShooter_Weapon_Climb, bool* CallFunc_IsClimbingHanging_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, float* CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast);
};

}


