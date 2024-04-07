#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x510 - 0x4C0)
// BlueprintGeneratedClass Climbing_ImpactEffect.Climbing_ImpactEffect_C
class AClimbing_ImpactEffect_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UArrowComponent*                       Arrow3;                                            // 0x4C8(0x8)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	class UArrowComponent*                       Arrow2;                                            // 0x4D0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	class UArrowComponent*                       Arrow1;                                            // 0x4D8(0x8)(BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
	class UAudioComponent*                       ImpactSound;                                       // 0x4E0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class USceneComponent*                       Root;                                              // 0x4E8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	TArray<struct FBiomeZoneVolumeEffect>        Effects;                                           // 0x4F0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       EffectDuration;                                    // 0x500(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	class USoundBase*                            ImpactSoundCue;                                    // 0x508(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class AClimbing_ImpactEffect_C* GetDefaultObj();

	void DestroyImpactEffect();
	void DeactivateImpactEffect(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Climbing_ImpactEffect(int32* EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class AShooterWeapon_Climb** K2Node_DynamicCast_AsShooter_Weapon_Climb, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsClimbingHanging_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast);
};

}


