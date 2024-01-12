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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UAudioComponent*                       TekSound;                                          // 0x4D0(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UParticleSystemComponent*              TekParticle;                                       // 0x4D8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class USceneComponent*                       Root;                                              // 0x4E0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	class APrimalCharacter*                      Ref_Player;                                        // 0x4E8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class ATekArmor_EffectActor_C*               SelfAsObj;                                         // 0x4F0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UParticleSystem*                       TekParticleRef;                                    // 0x4F8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            TekSoundRef;                                       // 0x500(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bSoundOn;                                          // 0x508(0x1)(ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bParticlesOn;                                      // 0x509(0x1)(Edit, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3147[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ParticleScale;                                     // 0x510(0x18)(BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ATekArmor_EffectActor_C* GetDefaultObj();

	bool OnRep_ParticleScale();
	bool OnRep_bParticlesOn();
	bool OnRep_bSoundOn();
	bool OnRep_TekSoundRef();
	bool OnRep_TekParticleTemplate();
	float SetSoundActive(double StartTime);
	bool Set_ParticleActive();
	class APrimalCharacter* InitTekEffect(class USoundBase** Sound);
	class APrimalCharacter* PlayerDied();
	struct FVector SetTekFX(class USoundBase** Sound);
	bool Replicate_SetSoundState();
	bool Replicate_SetParticleState();
	bool ExecuteUbergraph_TekArmor_EffectActor(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4);
};

}


