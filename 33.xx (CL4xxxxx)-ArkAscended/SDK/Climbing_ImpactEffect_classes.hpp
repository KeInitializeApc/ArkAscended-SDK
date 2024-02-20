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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UArrowComponent*                       Arrow3;                                            // 0x4D0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UArrowComponent*                       Arrow2;                                            // 0x4D8(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UArrowComponent*                       Arrow1;                                            // 0x4E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UAudioComponent*                       ImpactSound;                                       // 0x4E8(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class USceneComponent*                       Root;                                              // 0x4F0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	TArray<struct FBiomeZoneVolumeEffect>        Effects;                                           // 0x4F8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       EffectDuration;                                    // 0x508(0x8)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class USoundBase*                            ImpactSoundCue;                                    // 0x510(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class AClimbing_ImpactEffect_C* GetDefaultObj();

	void DestroyImpactEffect();
	float DeactivateImpactEffect();
	void ReceiveBeginPlay();
	float ExecuteUbergraph_Climbing_ImpactEffect();
};

}


