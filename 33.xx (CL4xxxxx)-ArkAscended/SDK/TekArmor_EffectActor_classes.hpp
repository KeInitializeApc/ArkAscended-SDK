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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UAudioComponent*                       TekSound;                                          // 0x4D0(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class UParticleSystemComponent*              TekParticle;                                       // 0x4D8(0x8)(ConstParm, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class USceneComponent*                       Root;                                              // 0x4E0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
	class APrimalCharacter*                      Ref_Player;                                        // 0x4E8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	class ATekArmor_EffectActor_C*               SelfAsObj;                                         // 0x4F0(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class UParticleSystem*                       TekParticleRef;                                    // 0x4F8(0x8)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class USoundBase*                            TekSoundRef;                                       // 0x500(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         bSoundOn;                                          // 0x508(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
	bool                                         bParticlesOn;                                      // 0x509(0x1)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_356B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ParticleScale;                                     // 0x510(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ATekArmor_EffectActor_C* GetDefaultObj();

	bool OnRep_ParticleScale();
	bool OnRep_bParticlesOn();
	bool OnRep_bSoundOn();
	bool OnRep_TekSoundRef();
	bool OnRep_TekParticleTemplate();
	float SetSoundActive();
	bool Set_ParticleActive();
	class APrimalCharacter* InitTekEffect(const struct FVector& ParticleScale);
	void PlayerDied(class APrimalCharacter* DiedCharacter);
	class USoundBase* SetTekFX(const struct FVector& ParticleScale);
	bool Replicate_SetSoundState();
	bool Replicate_SetParticleState();
	bool ExecuteUbergraph_TekArmor_EffectActor(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


