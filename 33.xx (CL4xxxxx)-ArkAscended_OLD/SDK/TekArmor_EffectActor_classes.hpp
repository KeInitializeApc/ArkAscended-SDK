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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UAudioComponent*                       TekSound;                                          // 0x4D0(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UParticleSystemComponent*              TekParticle;                                       // 0x4D8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class USceneComponent*                       Root;                                              // 0x4E0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	class APrimalCharacter*                      Ref_Player;                                        // 0x4E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class ATekArmor_EffectActor_C*               SelfAsObj;                                         // 0x4F0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UParticleSystem*                       TekParticleRef;                                    // 0x4F8(0x8)(ConstParm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            TekSoundRef;                                       // 0x500(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bSoundOn;                                          // 0x508(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bParticlesOn;                                      // 0x509(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_280C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ParticleScale;                                     // 0x510(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ATekArmor_EffectActor_C* GetDefaultObj();

	bool OnRep_ParticleScale();
	bool OnRep_bParticlesOn();
	bool OnRep_bSoundOn();
	bool OnRep_TekSoundRef();
	bool OnRep_TekParticleTemplate();
	float SetSoundActive();
	bool Set_ParticleActive();
	class APrimalCharacter* InitTekEffect();
	void PlayerDied(class APrimalCharacter* DiedCharacter);
	class USoundBase* SetTekFX();
	bool Replicate_SetSoundState();
	bool Replicate_SetParticleState();
	bool ExecuteUbergraph_TekArmor_EffectActor(int32* EntryPoint);
};

}


