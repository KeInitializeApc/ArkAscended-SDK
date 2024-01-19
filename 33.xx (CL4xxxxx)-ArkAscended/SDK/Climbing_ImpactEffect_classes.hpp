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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UArrowComponent*                       Arrow3;                                            // 0x4D0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class UArrowComponent*                       Arrow2;                                            // 0x4D8(0x8)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class UArrowComponent*                       Arrow1;                                            // 0x4E0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class UAudioComponent*                       ImpactSound;                                       // 0x4E8(0x8)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       Root;                                              // 0x4F0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	TArray<struct FBiomeZoneVolumeEffect>        Effects;                                           // 0x4F8(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       EffectDuration;                                    // 0x508(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class USoundBase*                            ImpactSoundCue;                                    // 0x510(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class AClimbing_ImpactEffect_C* GetDefaultObj();

	void DestroyImpactEffect();
	void DeactivateImpactEffect(struct FTimerHandle* CallFunc_K2_SetTimer_ReturnValue, float* CallFunc_K2_SetTimer_Time_ImplicitCast);
	void ReceiveBeginPlay();
	float ExecuteUbergraph_Climbing_ImpactEffect(int32 EntryPoint, bool CallFunc_IsClimbingHanging_ReturnValue, double* CallFunc_SelectFloat_ReturnValue);
};

}


