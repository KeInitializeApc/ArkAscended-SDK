#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x528 - 0x4C8)
// BlueprintGeneratedClass TekArmor_EffectActor.TekArmor_EffectActor_C
class ATekArmor_EffectActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UAudioComponent*                       TekSound;                                          // 0x4D0(0x8)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UParticleSystemComponent*              TekParticle;                                       // 0x4D8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       Root;                                              // 0x4E0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	class APrimalCharacter*                      Ref_Player;                                        // 0x4E8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class ATekArmor_EffectActor_C*               SelfAsObj;                                         // 0x4F0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UParticleSystem*                       TekParticleRef;                                    // 0x4F8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class USoundBase*                            TekSoundRef;                                       // 0x500(0x8)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bSoundOn;                                          // 0x508(0x1)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bParticlesOn;                                      // 0x509(0x1)(Edit, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_277C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ParticleScale;                                     // 0x510(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ATekArmor_EffectActor_C* GetDefaultObj();

	bool OnRep_ParticleScale();
	bool OnRep_bParticlesOn();
	bool OnRep_bSoundOn();
	bool OnRep_TekSoundRef();
	bool OnRep_TekParticleTemplate();
	float SetSoundActive(bool* Active);
	void Set_ParticleActive(bool* Active);
	struct FVector InitTekEffect(class USoundBase* Sound, class APrimalCharacter** Player);
	class APrimalCharacter* PlayerDied();
	struct FVector SetTekFX(class USoundBase* Sound);
	void Replicate_SetSoundState(bool* Active);
	void Replicate_SetParticleState(bool* Active);
	bool ExecuteUbergraph_TekArmor_EffectActor(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4);
};

}


