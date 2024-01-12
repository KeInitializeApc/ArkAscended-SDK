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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UArrowComponent*                       Arrow3;                                            // 0x4D0(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UArrowComponent*                       Arrow2;                                            // 0x4D8(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UArrowComponent*                       Arrow1;                                            // 0x4E0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UAudioComponent*                       ImpactSound;                                       // 0x4E8(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       Root;                                              // 0x4F0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	TArray<struct FBiomeZoneVolumeEffect>        Effects;                                           // 0x4F8(0x10)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       EffectDuration;                                    // 0x508(0x8)(ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            ImpactSoundCue;                                    // 0x510(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class AClimbing_ImpactEffect_C* GetDefaultObj();

	void DestroyImpactEffect();
	float DeactivateImpactEffect();
	void ReceiveBeginPlay();
	float ExecuteUbergraph_Climbing_ImpactEffect(class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class AShooterWeapon_Climb* K2Node_DynamicCast_AsShooter_Weapon_Climb, bool* K2Node_DynamicCast_bSuccess_1);
};

}


